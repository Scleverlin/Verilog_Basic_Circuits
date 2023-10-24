`include "on_the_fly_conversion_srt4.sv"

module otfc_tb;

logic [2:0] quotient_radix_4; 
logic [`INTWIDTH-1:0] result;
logic clk,rst;

Int_fast_convert otfc(quotient_radix_4, clk,rst, result);
// 时钟生成器
always begin
    #5 clk = ~clk;
end
initial begin
   $dumpfile("dump.vcd"); 
   $dumpvars(0, otfc); // 0表示记录所有层次，wal_mul_tb是模块的实例名
end

// 测试向量生成
initial begin
    clk = 0;
    rst=0;
    #50 rst=1;
    #5 quotient_radix_4=2;
    #10 quotient_radix_4=1;
    #10 quotient_radix_4=0;
    #10 quotient_radix_4=-2;
    #10 quotient_radix_4=-1;
    #100;
    $finish;
end



endmodule
