// `timescale 
`include "/home/shi/verilog/FP_32/FPU_32/FPU_32.sv"
module FPU_32_testbench;

    // 测试平台输入和输出
    reg [31:0] a, b;
    reg [2:0] mode;
    reg clk, rst;
    wire [31:0] result;

    // 实例化FPU_32模块
    FPU_32 uut (
        .mode(mode),
        .a(a),
        .b(b),
        .result(result),
        .clk(clk),
        .rst(rst)
    );

    // 生成时钟信号
    always #10 clk = ~clk;
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, uut); 
     end
    // 测试用例
    initial begin
        // 初始化
        clk = 0;
        rst = 0;
        #10;
        rst = 1;
        #10;
        // 测试加法
        mode = 3'b001; // 加法模式
        a = 32'h41200000; // 10.0
        b = 32'h41A00000; // 20.0
        #20;

        // 测试减法
        mode = 3'b010; // 减法模式
        a = 32'h41F00000; // 30.0
        b = 32'h41A00000; // 20.0
        #20;

        // 测试乘法
        mode = 3'b000; // 乘法模式
        a = 32'h40400000; // 3.0
        b = 32'h40800000; // 4.0
        #20;

        // 重置，为除法操作准备
        // 测试除法
        mode = 3'b011; // 除法模式
        a = 32'h42200000; // 40.0
        b = 32'h41000000; // 8.0
        #30 rst = 0; // 异步复位
        #10 rst = 1; // 释放复位
        #800; // 除法可能需要更多时间完成

        // // 测试结束
        $finish;
    end

endmodule
