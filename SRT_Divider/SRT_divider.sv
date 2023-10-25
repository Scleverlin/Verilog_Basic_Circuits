`include "quo_sel_tab.sv"
`include "on_the_fly_conversion_srt4.sv"
`include "normalization.sv"


module SRT_divider ();




// 还要为潜在的移位对除数和被除数扩展位宽




endmodule




module carry_save_adder_25(a,b,c,tmp_sum,tmp_carry);
input logic [24:0] a,b,c;
output logic [24:0] tmp_sum;
output logic [24:0] tmp_carry;

logic [24:0] tmp_sum1,tmp_carry1;
logic [24:0] tmp_sum2,tmp_carry2;

assign tmp_sum1 = a^b^c;
assign tmp_carry1 =  (a&b) | (b&c) | (c&a);

endmodule
