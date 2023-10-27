`include "post_processing.sv"

module tb_post_processing();

    // 声明信号
    logic clk;
    logic rst;
    logic [23:0] result;
    logic [4:0] shift_nums;
    logic right_shift;
    logic resultsign;
    logic [7:0] current_exponent;
    logic [31:0] quotient;

    // 实例化DUT (Device Under Test)
    post_processing dut (
        .result(result),
        .shift_nums(shift_nums),
        .right_shift(right_shift),
        .resultsign(resultsign),
        .current_exponent(current_exponent),
        .quotient(quotient)
    );
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, dut);
    end
    // 时钟生成器
    always begin
        #5 clk = ~clk;
    end
    // 波形文件生成

    // 测试向量生成
    initial begin
        clk = 0;
        rst = 1;
        #10;
        rst = 0;
        
        // 赋予测试向量的值
        shift_nums = 5'b00001;
        current_exponent = 8'd127;
        right_shift = 1'b0;
        resultsign = 1'b0;
        result = {1'b0,1'b1,22'b0};
        
        #100; // 您可以根据需要调整时间
        
  $finish;
    end
    


endmodule
