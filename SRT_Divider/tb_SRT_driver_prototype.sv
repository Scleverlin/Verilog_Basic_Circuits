`include "SRT_divider_FP32.sv"

module tb_prototype();
logic  [31:0] dividend,divisor;
logic clk,rst;
// output logic [31:0] quotient;
// output logic [31:0] remainder;// currently not used
logic [23:0] result;
logic result_valid;
SRT_divider_FP32 srt_prototype (dividend,divisor,clk,rst,result,result_valid);
// 时钟生成器
always begin
    #5 clk = ~clk;
end
initial begin
   $dumpfile("dump.vcd"); 
   $dumpvars(0, srt_prototype); // 0表示记录所有层次，wal_mul_tb是模块的实例名
end

// 测试向量生成
initial begin
    clk = 0;
    #1 rst=1;
    #1 rst=0;
    #5 dividend=0;divisor=0;
    #5 dividend=32'h80000000;divisor=32'h80000000;
    #5 dividend=256;divisor=256;
    
    #250; 
    $finish;
end



endmodule