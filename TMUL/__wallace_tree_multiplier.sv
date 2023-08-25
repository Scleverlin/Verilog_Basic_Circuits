// `include "HC_64_BK2_KS4.v"
module wallace_mulp_32x32 (a, b, out);
input [31:0] a;
input [31:0] b;
output [63:0] out;
wire [31:0][63:0]p_prods;
partial_products pp (a, b, p_prods);
// 定义函数
function [127:0] FA_function ([63:0] x, [63:0] y, [63:0] z);
    reg [127:0] result;
    result[63:0] = x^y^z;
    result[64] = 0;
    result[127:65] = (x&y) | (y&z) | (z&x);
    return result;
endfunction



wire [63:0] u_l11, v_l11, u_l12, v_l12, u_l13, v_l13, u_l14, v_l14, u_l15, v_l15, u_l16, v_l16, u_l17, v_l17, u_l18, v_l18, u_l19, v_l19, u_l110, v_l110;
wire [63:0] u_l21, v_l21, u_l22, v_l22, u_l23, v_l23, u_l24, v_l24, u_l25, v_l25, u_l26, v_l26, u_l27, v_l27;
wire [63:0] u_l31, v_l31, u_l32, v_l32, u_l33, v_l33, u_l34, v_l34, u_l35, v_l35;
wire [63:0] u_l41, v_l41, u_l42, v_l42, u_l43, v_l43;
wire [63:0] u_l51, v_l51, u_l52, v_l52;
wire [63:0] u_l61, v_l61;
wire [63:0] u_l71, v_l71;
wire [63:0] u_l81, v_l81;
wire [127:0] result_l11 = FA_function(p_prods[0], p_prods[1], p_prods[2]);
assign u_l11 = result_l11[63:0];
assign v_l11 = result_l11[127:64];

wire [127:0] result_l12 = FA_function(p_prods[3], p_prods[4], p_prods[5]);
assign u_l12 = result_l12[63:0];
assign v_l12 = result_l12[127:64];

wire [127:0] result_l13 = FA_function(p_prods[6], p_prods[7], p_prods[8]);
assign u_l13 = result_l13[63:0];
assign v_l13 = result_l13[127:64];

wire [127:0] result_l14 = FA_function(p_prods[9], p_prods[10], p_prods[11]);
assign u_l14 = result_l14[63:0];
assign v_l14 = result_l14[127:64];

wire [127:0] result_l15 = FA_function(p_prods[12], p_prods[13], p_prods[14]);
assign u_l15 = result_l15[63:0];
assign v_l15 = result_l15[127:64];

wire [127:0] result_l16 = FA_function(p_prods[15], p_prods[16], p_prods[17]);
assign u_l16 = result_l16[63:0];
assign v_l16 = result_l16[127:64];

wire [127:0] result_l17 = FA_function(p_prods[18], p_prods[19], p_prods[20]);
assign u_l17 = result_l17[63:0];
assign v_l17 = result_l17[127:64];

wire [127:0] result_l18 = FA_function(p_prods[21], p_prods[22], p_prods[23]);
assign u_l18 = result_l18[63:0];
assign v_l18 = result_l18[127:64];

wire [127:0] result_l19 = FA_function(p_prods[24], p_prods[25], p_prods[26]);
assign u_l19 = result_l19[63:0];
assign v_l19 = result_l19[127:64];

wire [127:0] result_l110 = FA_function(p_prods[27], p_prods[28], p_prods[29]);
assign u_l110 = result_l110[63:0];
assign v_l110 = result_l110[127:64];

wire [127:0] result_l21 = FA_function(u_l11, v_l11, u_l12);
assign u_l21 = result_l21[63:0];
assign v_l21 = result_l21[127:64];

wire [127:0] result_l22 = FA_function(v_l12, u_l13, v_l13);
assign u_l22 = result_l22[63:0];
assign v_l22 = result_l22[127:64];

wire [127:0] result_l23 = FA_function(u_l14, v_l14, u_l15);
assign u_l23 = result_l23[63:0];
assign v_l23 = result_l23[127:64];

wire [127:0] result_l24 = FA_function(v_l15, u_l16, v_l16);
assign u_l24 = result_l24[63:0];
assign v_l24 = result_l24[127:64];

wire [127:0] result_l25 = FA_function(u_l17, v_l17, u_l18);
assign u_l25 = result_l25[63:0];
assign v_l25 = result_l25[127:64];

wire [127:0] result_l26 = FA_function(v_l18, u_l19, v_l19);
assign u_l26 = result_l26[63:0];
assign v_l26 = result_l26[127:64];

wire [127:0] result_l27 = FA_function(u_l110, v_l110, p_prods[30]);
assign u_l27 = result_l27[63:0];
assign v_l27 = result_l27[127:64];

wire [127:0] l31_result = FA_function(u_l21, v_l21, u_l22);
assign u_l31 = l31_result[63:0];
assign v_l31 = l31_result[127:64];

wire [127:0] l32_result = FA_function(v_l22, u_l23, v_l23);
assign u_l32 = l32_result[63:0];
assign v_l32 = l32_result[127:64];

wire [127:0] l33_result = FA_function(u_l24, v_l24, u_l25);
assign u_l33 = l33_result[63:0];
assign v_l33 = l33_result[127:64];

wire [127:0] l34_result = FA_function(v_l25, u_l26, v_l26);
assign u_l34 = l34_result[63:0];
assign v_l34 = l34_result[127:64];

wire [127:0] l35_result = FA_function(u_l27, v_l27, p_prods[31]);
assign u_l35 = l35_result[63:0];
assign v_l35 = l35_result[127:64];

wire [127:0] l41_result = FA_function(u_l31, v_l31, u_l32);
assign u_l41 = l41_result[63:0];
assign v_l41 = l41_result[127:64];

wire [127:0] l42_result = FA_function(v_l32, u_l33, v_l33);
assign u_l42 = l42_result[63:0];
assign v_l42 = l42_result[127:64];

wire [127:0] l43_result = FA_function(u_l34, v_l34, u_l35);
assign u_l43 = l43_result[63:0];
assign v_l43 = l43_result[127:64];

wire [127:0] l51_result = FA_function(u_l41, v_l41, u_l42);
assign u_l51 = l51_result[63:0];
assign v_l51 = l51_result[127:64];

wire [127:0] l52_result = FA_function(v_l42, u_l43, v_l43);
assign u_l52 = l52_result[63:0];
assign v_l52 = l52_result[127:64];

wire [127:0] l61_result = FA_function(u_l51, v_l51, u_l52);
assign u_l61 = l61_result[63:0];
assign v_l61 = l61_result[127:64];

wire [127:0] l71_result = FA_function(u_l61, v_l61, v_l52);
assign u_l71 = l71_result[63:0];
assign v_l71 = l71_result[127:64];

wire [127:0] l81_result = FA_function(u_l71, v_l71, v_l35);
assign u_l81 = l81_result[63:0];
assign v_l81 = l81_result[127:64];
wire cout;
HC_64_BK0_KS6 hca (v_l81,u_l81,1'b0,out,cout);

endmodule 

module partial_products (
	input [31:0]a,
	input [31:0]b,
	output reg [31:0][63:0]p_prods
);

	integer i;

	always @(a or b)
	begin
		for(i=0; i<32; i=i+1)begin
			if(b[i] == 1)begin
				p_prods[i] = a << i;
			end
			else
				p_prods[i] = 64'h00000000;
		end
	end
endmodule

module wallace_tree_32x32 (a, b,out1,out2);
input [31:0] a;
input [31:0] b;
output [63:0] out1,out2;
wire [31:0][63:0]p_prods;
partial_products pp (a, b, p_prods);
// 定义函数
function [127:0] FA_function ([63:0] x, [63:0] y, [63:0] z);
    reg [127:0] result;
    result[63:0] = x^y^z;
    result[64] = 0;
    result[127:65] = (x&y) | (y&z) | (z&x);
    return result;
endfunction



wire [63:0] u_l11, v_l11, u_l12, v_l12, u_l13, v_l13, u_l14, v_l14, u_l15, v_l15, u_l16, v_l16, u_l17, v_l17, u_l18, v_l18, u_l19, v_l19, u_l110, v_l110;
wire [63:0] u_l21, v_l21, u_l22, v_l22, u_l23, v_l23, u_l24, v_l24, u_l25, v_l25, u_l26, v_l26, u_l27, v_l27;
wire [63:0] u_l31, v_l31, u_l32, v_l32, u_l33, v_l33, u_l34, v_l34, u_l35, v_l35;
wire [63:0] u_l41, v_l41, u_l42, v_l42, u_l43, v_l43;
wire [63:0] u_l51, v_l51, u_l52, v_l52;
wire [63:0] u_l61, v_l61;
wire [63:0] u_l71, v_l71;
wire [63:0] u_l81, v_l81;
wire [127:0] result_l11 = FA_function(p_prods[0], p_prods[1], p_prods[2]);
assign u_l11 = result_l11[63:0];
assign v_l11 = result_l11[127:64];

wire [127:0] result_l12 = FA_function(p_prods[3], p_prods[4], p_prods[5]);
assign u_l12 = result_l12[63:0];
assign v_l12 = result_l12[127:64];

wire [127:0] result_l13 = FA_function(p_prods[6], p_prods[7], p_prods[8]);
assign u_l13 = result_l13[63:0];
assign v_l13 = result_l13[127:64];

wire [127:0] result_l14 = FA_function(p_prods[9], p_prods[10], p_prods[11]);
assign u_l14 = result_l14[63:0];
assign v_l14 = result_l14[127:64];

wire [127:0] result_l15 = FA_function(p_prods[12], p_prods[13], p_prods[14]);
assign u_l15 = result_l15[63:0];
assign v_l15 = result_l15[127:64];

wire [127:0] result_l16 = FA_function(p_prods[15], p_prods[16], p_prods[17]);
assign u_l16 = result_l16[63:0];
assign v_l16 = result_l16[127:64];

wire [127:0] result_l17 = FA_function(p_prods[18], p_prods[19], p_prods[20]);
assign u_l17 = result_l17[63:0];
assign v_l17 = result_l17[127:64];

wire [127:0] result_l18 = FA_function(p_prods[21], p_prods[22], p_prods[23]);
assign u_l18 = result_l18[63:0];
assign v_l18 = result_l18[127:64];

wire [127:0] result_l19 = FA_function(p_prods[24], p_prods[25], p_prods[26]);
assign u_l19 = result_l19[63:0];
assign v_l19 = result_l19[127:64];

wire [127:0] result_l110 = FA_function(p_prods[27], p_prods[28], p_prods[29]);
assign u_l110 = result_l110[63:0];
assign v_l110 = result_l110[127:64];

wire [127:0] result_l21 = FA_function(u_l11, v_l11, u_l12);
assign u_l21 = result_l21[63:0];
assign v_l21 = result_l21[127:64];

wire [127:0] result_l22 = FA_function(v_l12, u_l13, v_l13);
assign u_l22 = result_l22[63:0];
assign v_l22 = result_l22[127:64];

wire [127:0] result_l23 = FA_function(u_l14, v_l14, u_l15);
assign u_l23 = result_l23[63:0];
assign v_l23 = result_l23[127:64];

wire [127:0] result_l24 = FA_function(v_l15, u_l16, v_l16);
assign u_l24 = result_l24[63:0];
assign v_l24 = result_l24[127:64];

wire [127:0] result_l25 = FA_function(u_l17, v_l17, u_l18);
assign u_l25 = result_l25[63:0];
assign v_l25 = result_l25[127:64];

wire [127:0] result_l26 = FA_function(v_l18, u_l19, v_l19);
assign u_l26 = result_l26[63:0];
assign v_l26 = result_l26[127:64];

wire [127:0] result_l27 = FA_function(u_l110, v_l110, p_prods[30]);
assign u_l27 = result_l27[63:0];
assign v_l27 = result_l27[127:64];

wire [127:0] l31_result = FA_function(u_l21, v_l21, u_l22);
assign u_l31 = l31_result[63:0];
assign v_l31 = l31_result[127:64];

wire [127:0] l32_result = FA_function(v_l22, u_l23, v_l23);
assign u_l32 = l32_result[63:0];
assign v_l32 = l32_result[127:64];

wire [127:0] l33_result = FA_function(u_l24, v_l24, u_l25);
assign u_l33 = l33_result[63:0];
assign v_l33 = l33_result[127:64];

wire [127:0] l34_result = FA_function(v_l25, u_l26, v_l26);
assign u_l34 = l34_result[63:0];
assign v_l34 = l34_result[127:64];

wire [127:0] l35_result = FA_function(u_l27, v_l27, p_prods[31]);
assign u_l35 = l35_result[63:0];
assign v_l35 = l35_result[127:64];

wire [127:0] l41_result = FA_function(u_l31, v_l31, u_l32);
assign u_l41 = l41_result[63:0];
assign v_l41 = l41_result[127:64];

wire [127:0] l42_result = FA_function(v_l32, u_l33, v_l33);
assign u_l42 = l42_result[63:0];
assign v_l42 = l42_result[127:64];

wire [127:0] l43_result = FA_function(u_l34, v_l34, u_l35);
assign u_l43 = l43_result[63:0];
assign v_l43 = l43_result[127:64];

wire [127:0] l51_result = FA_function(u_l41, v_l41, u_l42);
assign u_l51 = l51_result[63:0];
assign v_l51 = l51_result[127:64];

wire [127:0] l52_result = FA_function(v_l42, u_l43, v_l43);
assign u_l52 = l52_result[63:0];
assign v_l52 = l52_result[127:64];

wire [127:0] l61_result = FA_function(u_l51, v_l51, u_l52);
assign u_l61 = l61_result[63:0];
assign v_l61 = l61_result[127:64];

wire [127:0] l71_result = FA_function(u_l61, v_l61, v_l52);
assign u_l71 = l71_result[63:0];
assign v_l71 = l71_result[127:64];

wire [127:0] l81_result = FA_function(u_l71, v_l71, v_l35);
assign u_l81 = l81_result[63:0];
assign v_l81 = l81_result[127:64];
assign out1 = u_l81;
assign out2 = v_l81;
endmodule 