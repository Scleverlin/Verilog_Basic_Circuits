`include "FMA_DFF_index4.v"
module TMUL_32_8mul8_index4 (a,b,c,clk,rst);

input logic [31:0] a [7:0];
input logic [255:0] b [7:0];
input clk,rst;
output [63:0] c [7:0];

wire [63:0] tmp_level0 [7:0];
typedef logic [63:0] mnarray [7:0];

function mnarray transport_array (input mnarray data);
mnarray output_tmp;
begin
    output_tmp[0]=data[0];
    output_tmp[1]=data[1];
    output_tmp[2]=data[2];
    output_tmp[3]=data[3];
    output_tmp[4]=data[4];
    output_tmp[5]=data[5];
    output_tmp[6]=data[6];
    output_tmp[7]=data[7];
end
return output_tmp;
endfunction



FMA_32_64 level_0_0 (a[0],b[0][31:0],64'b0,tmp_level0[0],clk,rst);
FMA_32_64 level_0_1 (a[0],b[0][63:32],64'b0,tmp_level0[1],clk,rst);
FMA_32_64 level_0_2 (a[0],b[0][95:64],64'b0,tmp_level0[2],clk,rst);
FMA_32_64 level_0_3 (a[0],b[0][127:96],64'b0,tmp_level0[3],clk,rst);
FMA_32_64 level_0_4 (a[0],b[0][159:128],64'b0,tmp_level0[4],clk,rst);
FMA_32_64 level_0_5 (a[0],b[0][191:160],64'b0,tmp_level0[5],clk,rst);
FMA_32_64 level_0_6 (a[0],b[0][223:192],64'b0,tmp_level0[6],clk,rst);
FMA_32_64 level_0_7 (a[0],b[0][255:224],64'b0,tmp_level0[7],clk,rst);

wire [63:0] tmp_level1 [7:0];

FMA_32_128 level_1_0 (a[1],b[1][31:0],tmp_level0[0],tmp_level1[0],clk,rst);
FMA_32_128 level_1_1 (a[1],b[1][63:32],tmp_level0[1],tmp_level1[1],clk,rst);
FMA_32_128 level_1_2 (a[1],b[1][95:64],tmp_level0[2],tmp_level1[2],clk,rst);
FMA_32_128 level_1_3 (a[1],b[1][127:96],tmp_level0[3],tmp_level1[3],clk,rst);
FMA_32_128 level_1_4 (a[1],b[1][159:128],tmp_level0[4],tmp_level1[4],clk,rst);
FMA_32_128 level_1_5 (a[1],b[1][191:160],tmp_level0[5],tmp_level1[5],clk,rst);
FMA_32_128 level_1_6 (a[1],b[1][223:192],tmp_level0[6],tmp_level1[6],clk,rst);
FMA_32_128 level_1_7 (a[1],b[1][255:224],tmp_level0[7],tmp_level1[7],clk,rst);

wire [63:0] tmp_level2 [7:0];

FMA_32_192 level_2_0 (a[2],b[2][31:0],tmp_level1[0],tmp_level2[0],clk,rst);
FMA_32_192 level_2_1 (a[2],b[2][63:32],tmp_level1[1],tmp_level2[1],clk,rst);
FMA_32_192 level_2_2 (a[2],b[2][95:64],tmp_level1[2],tmp_level2[2],clk,rst);
FMA_32_192 level_2_3 (a[2],b[2][127:96],tmp_level1[3],tmp_level2[3],clk,rst);
FMA_32_192 level_2_4 (a[2],b[2][159:128],tmp_level1[4],tmp_level2[4],clk,rst);
FMA_32_192 level_2_5 (a[2],b[2][191:160],tmp_level1[5],tmp_level2[5],clk,rst);
FMA_32_192 level_2_6 (a[2],b[2][223:192],tmp_level1[6],tmp_level2[6],clk,rst);
FMA_32_192 level_2_7 (a[2],b[2][255:224],tmp_level1[7],tmp_level2[7],clk,rst);

wire [63:0] tmp_level3 [7:0];

FMA_32_256 level_3_0 (a[3],b[3][31:0],tmp_level2[0],tmp_level3[0],clk,rst);
FMA_32_256 level_3_1 (a[3],b[3][63:32],tmp_level2[1],tmp_level3[1],clk,rst);
FMA_32_256 level_3_2 (a[3],b[3][95:64],tmp_level2[2],tmp_level3[2],clk,rst);
FMA_32_256 level_3_3 (a[3],b[3][127:96],tmp_level2[3],tmp_level3[3],clk,rst);
FMA_32_256 level_3_4 (a[3],b[3][159:128],tmp_level2[4],tmp_level3[4],clk,rst);
FMA_32_256 level_3_5 (a[3],b[3][191:160],tmp_level2[5],tmp_level3[5],clk,rst);
FMA_32_256 level_3_6 (a[3],b[3][223:192],tmp_level2[6],tmp_level3[6],clk,rst);
FMA_32_256 level_3_7 (a[3],b[3][255:224],tmp_level2[7],tmp_level3[7],clk,rst);

wire [63:0] tmp_level4 [7:0];

FMA_32_320 level_4_0 (a[4],b[4][31:0],tmp_level3[0],tmp_level4[0],clk,rst);
FMA_32_320 level_4_1 (a[4],b[4][63:32],tmp_level3[1],tmp_level4[1],clk,rst);
FMA_32_320 level_4_2 (a[4],b[4][95:64],tmp_level3[2],tmp_level4[2],clk,rst);
FMA_32_320 level_4_3 (a[4],b[4][127:96],tmp_level3[3],tmp_level4[3],clk,rst);
FMA_32_320 level_4_4 (a[4],b[4][159:128],tmp_level3[4],tmp_level4[4],clk,rst);
FMA_32_320 level_4_5 (a[4],b[4][191:160],tmp_level3[5],tmp_level4[5],clk,rst);
FMA_32_320 level_4_6 (a[4],b[4][223:192],tmp_level3[6],tmp_level4[6],clk,rst);
FMA_32_320 level_4_7 (a[4],b[4][255:224],tmp_level3[7],tmp_level4[7],clk,rst);

wire [63:0] tmp_level5 [7:0];

FMA_32_384 level_5_0 (a[5],b[5][31:0],tmp_level4[0],tmp_level5[0],clk,rst);
FMA_32_384 level_5_1 (a[5],b[5][63:32],tmp_level4[1],tmp_level5[1],clk,rst);
FMA_32_384 level_5_2 (a[5],b[5][95:64],tmp_level4[2],tmp_level5[2],clk,rst);
FMA_32_384 level_5_3 (a[5],b[5][127:96],tmp_level4[3],tmp_level5[3],clk,rst);
FMA_32_384 level_5_4 (a[5],b[5][159:128],tmp_level4[4],tmp_level5[4],clk,rst);
FMA_32_384 level_5_5 (a[5],b[5][191:160],tmp_level4[5],tmp_level5[5],clk,rst);
FMA_32_384 level_5_6 (a[5],b[5][223:192],tmp_level4[6],tmp_level5[6],clk,rst);
FMA_32_384 level_5_7 (a[5],b[5][255:224],tmp_level4[7],tmp_level5[7],clk,rst);

wire [63:0] tmp_level6 [7:0];

FMA_32_448 level_6_0 (a[6],b[6][31:0],tmp_level5[0],tmp_level6[0],clk,rst);
FMA_32_448 level_6_1 (a[6],b[6][63:32],tmp_level5[1],tmp_level6[1],clk,rst);
FMA_32_448 level_6_2 (a[6],b[6][95:64],tmp_level5[2],tmp_level6[2],clk,rst);
FMA_32_448 level_6_3 (a[6],b[6][127:96],tmp_level5[3],tmp_level6[3],clk,rst);
FMA_32_448 level_6_4 (a[6],b[6][159:128],tmp_level5[4],tmp_level6[4],clk,rst);
FMA_32_448 level_6_5 (a[6],b[6][191:160],tmp_level5[5],tmp_level6[5],clk,rst);
FMA_32_448 level_6_6 (a[6],b[6][223:192],tmp_level5[6],tmp_level6[6],clk,rst);
FMA_32_448 level_6_7 (a[6],b[6][255:224],tmp_level5[7],tmp_level6[7],clk,rst);

FMA_32_512 level_7_0 (a[7],b[7][31:0],tmp_level6[0],c[0],clk,rst);
FMA_32_512 level_7_1 (a[7],b[7][63:32],tmp_level6[1],c[1],clk,rst);
FMA_32_512 level_7_2 (a[7],b[7][95:64],tmp_level6[2],c[2],clk,rst);
FMA_32_512 level_7_3 (a[7],b[7][127:96],tmp_level6[3],c[3],clk,rst);
FMA_32_512 level_7_4 (a[7],b[7][159:128],tmp_level6[4],c[4],clk,rst);
FMA_32_512 level_7_5 (a[7],b[7][191:160],tmp_level6[5],c[5],clk,rst);
FMA_32_512 level_7_6 (a[7],b[7][223:192],tmp_level6[6],c[6],clk,rst);
FMA_32_512 level_7_7 (a[7],b[7][255:224],tmp_level6[7],c[7],clk,rst);


endmodule