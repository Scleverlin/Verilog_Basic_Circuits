
`include "normalization.sv"

module tb_FP32_add();

    // 定义测试台使用的信号
 logic [31:0] add1;
 logic [31:0] add2;
 logic add;
 logic sub;
 logic [23:0] man_a; // a and b will be decided by the mode, order may be changed
 logic [23:0] man_b;
 logic [7:0] exponent_a;
 logic [7:0] exponent_b;
 logic result_sign;
 logic add_or_sub;//1 is add, 0 is sub
    // 实例化待测模块
  normalization norm (add1,add2,add,sub,man_a,man_b,exponent_a,exponent_b,result_sign,add_or_sub);

    // 波形记录
    initial begin
       $dumpfile("dump.vcd");
       $dumpvars(0, norm); 
    end

    // 测试向量生成
  initial begin
        // clk = 0; rst = 0; // 初始化并激活复位
        // #10 rst = 1; // 延迟10个时间单位后释放复位
        #10 add1 = 32'h40800000;  // 浮点数4.0的IEEE表示
             add2 = 32'h40000000;   // 浮点数2.0的IEEE表示
            add=1'b1;sub=1'b0;
        #10 sub=1'b1;add=1'b0;
        #10 add1 = 32'h420098BA;  
             add2 = 32'h48004ABC;   
        #10 add1 = 32'h42BA98BA;;  
             add2 = 32'h48004ABC;  
        #10 add2=32'hC2BA98BA;
            add1=32'h48004ABC;
        #10 sub=1'b0;add=1'b1;
        #2000 $finish; // 结束仿真
    end

endmodule
