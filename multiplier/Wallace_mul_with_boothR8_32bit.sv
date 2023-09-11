`include "booth_radix_8_32bit_encoder.sv"

module partial_product_generator(a,b,pp0,pp1,pp2,pp3,pp4,pp5,pp6,pp7,pp8,pp9,pp10);
input [31:0] a,b;
output [63:0] pp0,pp1,pp2,pp3,pp4,pp5,pp6,pp7,pp8,pp9,pp10;
wire [63:0] pp_tmp1,pp_tmp2,pp_tmp3,pp_tmp4,pp_tmp5,pp_tmp6,pp_tmp7,pp_tmp8,pp_tmp9,pp_tmp10;

booth4_radix_8_32bit_encoder  boothencode1 (a,b,pp0,pp_tmp1,pp_tmp2,pp_tmp3,pp_tmp4,pp_tmp5,pp_tmp6,pp_tmp7,pp_tmp8,pp_tmp9,pp_tmp10);

assign pp1 = {pp_tmp1[60:0],3'b0};
assign pp2 = {pp_tmp2[57:0],6'b0};
assign pp3 = {pp_tmp3[54:0],9'b0};
assign pp4 = {pp_tmp4[51:0],12'b0};
assign pp5 = {pp_tmp5[48:0],15'b0};
assign pp6 = {pp_tmp6[45:0],18'b0};
assign pp7 = {pp_tmp7[42:0],21'b0};
assign pp8 = {pp_tmp8[39:0],24'b0};
assign pp9 = {pp_tmp9[36:0],27'b0};
assign pp10 = {pp_tmp10[33:0],30'b0};
endmodule


module wallace_tree_32_with_boothR8(a,b,out1,out2);
input [31:0] a,b;
output [63:0] out1,out2;

function [127:0] FA_function ([63:0] x, [63:0] y, [63:0] z);
    reg [127:0] result;
    result[63:0] = x^y^z;
    result[64] = 0;
    result[127:65] = (x&y) | (y&z) | (z&x);
    return result;
endfunction
wire [63:0]  pp0,pp1,pp2,pp3,pp4,pp5,pp6,pp7,pp8,pp9,pp10;
partial_product_generator u_ppg(a,b,pp0,pp1,pp2,pp3,pp4,pp5,pp6,pp7,pp8,pp9,pp10);
// Stage 1
wire [63:0]tmp_level1_0,tmp_level1_1 ;
wire [63:0]tmp_level1_2,tmp_level1_3 ;
wire [63:0]tmp_level1_4,tmp_level1_5 ;
wire [63:0]tmp_level1_6,tmp_level1_7 ;
wire [127:0] result_level1_012 = FA_function(pp0,pp1,pp2);
assign tmp_level1_0 = result_level1_012[63:0];
assign tmp_level1_1 = result_level1_012[127:64];

wire [127:0] result_level1_345 = FA_function(pp3,pp4,pp5);
assign tmp_level1_2 = result_level1_345[63:0];
assign tmp_level1_3 = result_level1_345[127:64];

wire [127:0] result_level1_678 = FA_function(pp6,pp7,pp8);
assign tmp_level1_4 = result_level1_678[63:0];
assign tmp_level1_5 = result_level1_678[127:64];

assign tmp_level1_6 = pp9;
assign tmp_level1_7 = pp10;

// Stage 2

wire [63:0]tmp_level2_0,tmp_level2_1 ;
wire [63:0]tmp_level2_2,tmp_level2_3 ;
wire [63:0]tmp_level2_4,tmp_level2_5 ;

wire [127:0] result_level2_01 = FA_function(tmp_level1_0,tmp_level1_1,tmp_level1_2);
assign tmp_level2_0 = result_level2_01[63:0];
assign tmp_level2_1 = result_level2_01[127:64];

wire [127:0] result_level2_23 = FA_function(tmp_level1_3,tmp_level1_4,tmp_level1_5);
assign tmp_level2_2 = result_level2_23[63:0];
assign tmp_level2_3 = result_level2_23[127:64];


assign tmp_level2_4 = tmp_level1_6;
assign tmp_level2_5 = tmp_level1_7;

// Stage 3

wire [63:0]tmp_level3_0,tmp_level3_1 ;
wire [63:0]tmp_level3_2,tmp_level3_3 ;

wire [127:0] result_level3_01 = FA_function(tmp_level2_0,tmp_level2_1,tmp_level2_2);
assign tmp_level3_0 = result_level3_01[63:0];
assign tmp_level3_1 = result_level3_01[127:64];

wire [127:0] result_level3_23 = FA_function(tmp_level2_3,tmp_level2_4,tmp_level2_5);
assign tmp_level3_2 = result_level3_23[63:0];
assign tmp_level3_3 = result_level3_23[127:64];

// Stage 4

wire [63:0]tmp_level4_0,tmp_level4_1, tmp_level4_2 ;

wire [127:0] result_level4_01 = FA_function(tmp_level3_0,tmp_level3_1,tmp_level3_2);
assign tmp_level4_0 = result_level4_01[63:0];
assign tmp_level4_1 = result_level4_01[127:64];

assign tmp_level4_2 = tmp_level3_3;

// Stage 5

wire [127:0] result_level5_01 = FA_function(tmp_level4_0,tmp_level4_1,tmp_level4_2);
assign out1= result_level5_01[63:0];
assign out2 = result_level5_01[127:64];

endmodule

module result_output(a,b,out);
input [31:0] a,b;
output [63:0] out;
wire [63:0] out1,out2;
wallace_tree_32_with_boothR8 u2 (a,b,out1,out2);
wire cout;
adder_64bit u0 (out1,out2,1'b0,out,cout);
endmodule