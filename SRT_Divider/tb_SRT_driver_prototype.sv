
`include "SRT_divider_FP32.sv"

module tb_SRT_divider_FP32();

    // 定义测试台使用的信号
    logic [31:0] dividend, divisor;
    logic clk, rst;
    logic [23:0] result;

    // 实例化待测模块
    SRT_divider_FP32 uut (
        .dividend(dividend),
        .divisor(divisor),
        .clk(clk),
        .rst(rst),
        .result(result)
    );

    // 时钟生成器
    always begin
        #5 clk = ~clk;
    end

    // 波形记录
    initial begin
       $dumpfile("dump.vcd");
       $dumpvars(0, uut); 
    end

    // 测试向量生成
  initial begin
        clk = 0; rst = 0; // 初始化并激活复位
        #10 rst = 1; // 延迟10个时间单位后释放复位
        #10 dividend = 32'h40800000;  // 浮点数1.0的IEEE表示
             divisor = 32'h40000000;   // 浮点数2.0的IEEE表示
        #10 rst = 0; // 异步复位
        #10 rst = 1; // 释放复位
        // #10 dividend = 32'h40800000;  // 浮点数4.0的IEEE表示
        //      divisor = 32'h40000000;   // 浮点数2.0的IEEE表示
        #200 $finish; // 结束仿真
    end

endmodule
