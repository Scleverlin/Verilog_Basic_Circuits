`include "FP_32_add_or_sub.sv"
module tb_add_sub();
  // 定义测试台使用的信号
logic [31:0] add1;
 logic [31:0] add2;
logic command;//1 is add, 0 is sub
logic [31:0] result;
    // 实例化待测模块
FP_32_add_or_sub fp32(add1,add2,command,result);

    // 波形记录
    initial begin
       $dumpfile("dump.vcd");
       $dumpvars(0, fp32); 
    end

    // 测试向量生成
  initial begin
        // clk = 0; rst = 0; // 初始化并激活复位
        // #10 rst = 1; // 延迟10个时间单位后释放复位
        #10 add1 = 32'h40800000;  // 浮点数4.0的IEEE表示
             add2 = 32'h40000000;   // 浮点数2.0的IEEE表示
            command=1'b0;
        #10 command=1'b1;
        #10 add1 = 32'h420098BA;  
             add2 = 32'h48004ABC;   
        #10 add1 = 32'h42BA98BA;  
             add2 = 32'h48004ABC;  
        #10 add2=32'hC2BA98BA;
            add1=32'h48004ABC;
            command=1'b0;
        #10  command=1'b1;
              add1=32'h3FC00001;
             add2=32'h3FC02000;
        #10 command=1'b0; 
             add1 = 32'h41F00000; // 30.0
             add2 = 32'h41A00000; // 20.0
        #200 $finish; // 结束仿真
    end
endmodule