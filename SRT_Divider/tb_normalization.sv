`include "normalization.sv"

module tb_norm;

logic  [31:0] dividend,divisor;

logic [24:0] dividend_mantissa_normalized;
logic [24:0] divisor_mantissa_normalized;
logic [7:0]current_exponent;
logic result_sign;
logic [4:0] dividend_shift;
logic [4:0] divisor_shift;  
normalizer norm (dividend,divisor);
// 时钟生成器
// always begin
//     #5 clk = ~clk;
// enda
initial begin
   $dumpfile("dump.vcd"); 
   $dumpvars(0, norm); // 0表示记录所有层次，wal_mul_tb是模块的实例名
end

// 测试向量生成
initial begin
    #5 dividend=0;divisor=0;
    #5 dividend=32'h80000000;divisor=32'h80000000;
    #5 dividend=256;divisor=256;
    #100; 
    $finish;
end



endmodule