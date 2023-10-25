`include "quo_sel_tab.sv"

module tb_qst;

logic [4:0] r_idx;		// remainder index
logic [4:0] d_idx;		// divisor index
logic [2:0]quotient;        // quotient

qds qst (r_idx, d_idx, quotient);
// 时钟生成器
// always begin
//     #5 clk = ~clk;
// end
initial begin
   $dumpfile("dump.vcd"); 
   $dumpvars(0, qst); // 0表示记录所有层次，wal_mul_tb是模块的实例名
end

// 测试向量生成
initial begin
    #5 r_idx = 5'b00000;d_idx = 5'b00000;
    #5 r_idx = 5'b00001;d_idx = 5'b00000;
    #5 r_idx = 5'b00010;d_idx = 5'b01000;
    #5 r_idx = 5'b00011;d_idx = 5'b01000;
    #5 r_idx = 5'b00100;d_idx = 5'b01000;
    #5 r_idx = 5'b00101;d_idx = 5'b01000;
    #5 r_idx = 5'b00110;d_idx = 5'b01001;
    #5 r_idx = 5'b00111;d_idx = 5'b01001;
    #5 r_idx = 5'b01000;d_idx = 5'b01010;
    #5 r_idx = 5'b01001;d_idx = 5'b01010;

    $finish;
end



endmodule
