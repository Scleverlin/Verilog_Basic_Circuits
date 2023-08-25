`include "__wallace_tree_multiplier.sv"
`include "HC_64_BK0_KS6.v"
module FMA_32 (a,b,c,out,clk,rst);
input [31:0] a,b;
input [63:0] c;
output [63:0] out;

wire [63:0] tmp1,tmp2,tmp;
wallace_tree_32x32   w_tree(a, b,tmp1,tmp2);
// easy_mul   mul (a,b,tmp);

wire cout;
wire [63:0] out_w;
reg [63:0] tmp_reg;
HC_64_BK0_KS6 hca1 (tmp1,tmp2,1'b0,tmp,cout);
HC_64_BK0_KS6 hca2 (tmp_reg,c,1'b0,out_w,cout);

always @(posedge clk or negedge rst)
 begin
 if(~rst)
    tmp_reg <= 0;
    out <=0;
 else
    tmp_reg <= tmp;
    out <= out_w;
 end

endmodule

