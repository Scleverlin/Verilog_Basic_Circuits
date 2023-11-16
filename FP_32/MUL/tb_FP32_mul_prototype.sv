
`include "FP32_mul.sv"

module tb_FP32_mul();

    // 定义测试台使用的信号
logic [31:0] mul1;
 logic [31:0] mul2;
logic [31:0] product;
    // 实例化待测模块
  FP32_mul mul (mul1,mul2,product);

    // 时钟生成器
    // always begin
    //     #5 clk = ~clk;
    // end

    // 波形记录
    initial begin
       $dumpfile("dump.vcd");
       $dumpvars(0, mul); 
    end

    // 测试向量生成
  initial begin
        // clk = 0; rst = 0; // 初始化并激活复位
        // #10 rst = 1; // 延迟10个时间单位后释放复位
        #10 mul1 = 32'h40800000;  // 浮点数4.0的IEEE表示
             mul2 = 32'h40000000;   // 浮点数2.0的IEEE表示
        #10 mul1 = 32'h420098BA;  
             mul2 = 32'h48004ABC;   
        #10 mul1 = 32'h42BA98BA;
             mul2 = 32'h48004ABC;
        #10 mul1=32'h3FC00000;
             mul2=32'h3FC00000;;  
        #2000 $finish; // 结束仿真
    end

endmodule
