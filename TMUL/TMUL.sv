`include "FMA.v"
// wrong version 
module TMUL_32_8mul8 (a,b,c,clk,rst);

input logic [31:0] a [7:0];
input logic [255:0] b [7:0];
input clk,rst;
output reg [63:0] c [7:0];

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


FMA_32 level_0_0 (a[0],b[0][31:0],64'b0,tmp_level0[0]);
FMA_32 level_0_1 (a[0],b[0][63:32],64'b0,tmp_level0[1]);
FMA_32 level_0_2 (a[0],b[0][95:64],64'b0,tmp_level0[2]);
FMA_32 level_0_3 (a[0],b[0][127:96],64'b0,tmp_level0[3]);
FMA_32 level_0_4 (a[0],b[0][159:128],64'b0,tmp_level0[4]);
FMA_32 level_0_5 (a[0],b[0][191:160],64'b0,tmp_level0[5]);
FMA_32 level_0_6 (a[0],b[0][223:192],64'b0,tmp_level0[6]);
FMA_32 level_0_7 (a[0],b[0][255:224],64'b0,tmp_level0[7]);

wire [63:0] tmp_level1 [7:0];

reg [63:0] result_from_level0 [7:0];
FMA_32 level_1_0 (a[1],b[1][31:0],result_from_level0[0],tmp_level1[0]);
FMA_32 level_1_1 (a[1],b[1][63:32],result_from_level0[1],tmp_level1[1]);
FMA_32 level_1_2 (a[1],b[1][95:64],result_from_level0[2],tmp_level1[2]);
FMA_32 level_1_3 (a[1],b[1][127:96],result_from_level0[3],tmp_level1[3]);
FMA_32 level_1_4 (a[1],b[1][159:128],result_from_level0[4],tmp_level1[4]);
FMA_32 level_1_5 (a[1],b[1][191:160],result_from_level0[5],tmp_level1[5]);
FMA_32 level_1_6 (a[1],b[1][223:192],result_from_level0[6],tmp_level1[6]);
FMA_32 level_1_7 (a[1],b[1][255:224],result_from_level0[7],tmp_level1[7]);

wire [63:0] tmp_level2 [7:0];

reg [63:0] result_from_level1 [7:0];

FMA_32 level_2_0 (a[2],b[2][31:0],result_from_level1[0],tmp_level2[0]);
FMA_32 level_2_1 (a[2],b[2][63:32],result_from_level1[1],tmp_level2[1]);
FMA_32 level_2_2 (a[2],b[2][95:64],result_from_level1[2],tmp_level2[2]);
FMA_32 level_2_3 (a[2],b[2][127:96],result_from_level1[3],tmp_level2[3]);
FMA_32 level_2_4 (a[2],b[2][159:128],result_from_level1[4],tmp_level2[4]);
FMA_32 level_2_5 (a[2],b[2][191:160],result_from_level1[5],tmp_level2[5]);
FMA_32 level_2_6 (a[2],b[2][223:192],result_from_level1[6],tmp_level2[6]);
FMA_32 level_2_7 (a[2],b[2][255:224],result_from_level1[7],tmp_level2[7]);

wire [63:0] tmp_level3 [7:0];

reg [63:0] result_from_level2 [7:0];

FMA_32 level_3_0 (a[3],b[3][31:0],result_from_level2[0],tmp_level3[0]);
FMA_32 level_3_1 (a[3],b[3][63:32],result_from_level2[1],tmp_level3[1]);
FMA_32 level_3_2 (a[3],b[3][95:64],result_from_level2[2],tmp_level3[2]);
FMA_32 level_3_3 (a[3],b[3][127:96],result_from_level2[3],tmp_level3[3]);
FMA_32 level_3_4 (a[3],b[3][159:128],result_from_level2[4],tmp_level3[4]);
FMA_32 level_3_5 (a[3],b[3][191:160],result_from_level2[5],tmp_level3[5]);
FMA_32 level_3_6 (a[3],b[3][223:192],result_from_level2[6],tmp_level3[6]);
FMA_32 level_3_7 (a[3],b[3][255:224],result_from_level2[7],tmp_level3[7]);

wire [63:0] tmp_level4 [7:0];

reg [63:0] result_from_level3 [7:0];

FMA_32 level_4_0 (a[4],b[4][31:0],result_from_level3[0],tmp_level4[0]);
FMA_32 level_4_1 (a[4],b[4][63:32],result_from_level3[1],tmp_level4[1]);
FMA_32 level_4_2 (a[4],b[4][95:64],result_from_level3[2],tmp_level4[2]);
FMA_32 level_4_3 (a[4],b[4][127:96],result_from_level3[3],tmp_level4[3]);
FMA_32 level_4_4 (a[4],b[4][159:128],result_from_level3[4],tmp_level4[4]);
FMA_32 level_4_5 (a[4],b[4][191:160],result_from_level3[5],tmp_level4[5]);
FMA_32 level_4_6 (a[4],b[4][223:192],result_from_level3[6],tmp_level4[6]);
FMA_32 level_4_7 (a[4],b[4][255:224],result_from_level3[7],tmp_level4[7]);

wire [63:0] tmp_level5 [7:0];

reg [63:0] result_from_level4 [7:0];

FMA_32 level_5_0 (a[5],b[5][31:0],result_from_level4[0],tmp_level5[0]);
FMA_32 level_5_1 (a[5],b[5][63:32],result_from_level4[1],tmp_level5[1]);
FMA_32 level_5_2 (a[5],b[5][95:64],result_from_level4[2],tmp_level5[2]);
FMA_32 level_5_3 (a[5],b[5][127:96],result_from_level4[3],tmp_level5[3]);
FMA_32 level_5_4 (a[5],b[5][159:128],result_from_level4[4],tmp_level5[4]);
FMA_32 level_5_5 (a[5],b[5][191:160],result_from_level4[5],tmp_level5[5]);
FMA_32 level_5_6 (a[5],b[5][223:192],result_from_level4[6],tmp_level5[6]);
FMA_32 level_5_7 (a[5],b[5][255:224],result_from_level4[7],tmp_level5[7]);

wire [63:0] tmp_level6 [7:0];

reg [63:0] result_from_level5 [7:0];

FMA_32 level_6_0 (a[6],b[6][31:0],result_from_level5[0],tmp_level6[0]);
FMA_32 level_6_1 (a[6],b[6][63:32],result_from_level5[1],tmp_level6[1]);
FMA_32 level_6_2 (a[6],b[6][95:64],result_from_level5[2],tmp_level6[2]);
FMA_32 level_6_3 (a[6],b[6][127:96],result_from_level5[3],tmp_level6[3]);
FMA_32 level_6_4 (a[6],b[6][159:128],result_from_level5[4],tmp_level6[4]);
FMA_32 level_6_5 (a[6],b[6][191:160],result_from_level5[5],tmp_level6[5]);
FMA_32 level_6_6 (a[6],b[6][223:192],result_from_level5[6],tmp_level6[6]);
FMA_32 level_6_7 (a[6],b[6][255:224],result_from_level5[7],tmp_level6[7]);

wire [63:0] tmp_level7 [7:0];

reg [63:0] result_from_level6 [7:0];

FMA_32 level_7_0 (a[7],b[7][31:0],result_from_level6[0],tmp_level7[0]);
FMA_32 level_7_1 (a[7],b[7][63:32],result_from_level6[1],tmp_level7[1]);
FMA_32 level_7_2 (a[7],b[7][95:64],result_from_level6[2],tmp_level7[2]);
FMA_32 level_7_3 (a[7],b[7][127:96],result_from_level6[3],tmp_level7[3]);
FMA_32 level_7_4 (a[7],b[7][159:128],result_from_level6[4],tmp_level7[4]);
FMA_32 level_7_5 (a[7],b[7][191:160],result_from_level6[5],tmp_level7[5]);
FMA_32 level_7_6 (a[7],b[7][223:192],result_from_level6[6],tmp_level7[6]);
FMA_32 level_7_7 (a[7],b[7][255:224],result_from_level6[7],tmp_level7[7]);

mnarray zero_value;
assign zero_value[0]=64'b0;
assign zero_value[1]=64'b0;
assign zero_value[2]=64'b0;
assign zero_value[3]=64'b0;
assign zero_value[4]=64'b0;
assign zero_value[5]=64'b0;
assign zero_value[6]=64'b0;
assign zero_value[7]=64'b0;
always @(posedge clk or negedge rst) begin
    if(~rst)begin
    c<=transport_array(zero_value);
    result_from_level0<=transport_array(zero_value);
    result_from_level1<=transport_array(zero_value);
    result_from_level2<=transport_array(zero_value);
    result_from_level3<=transport_array(zero_value);
    result_from_level4<=transport_array(zero_value);
    result_from_level5<=transport_array(zero_value);
    result_from_level6<=transport_array(zero_value);
    end
    else begin
    result_from_level0<=transport_array(tmp_level0);
    result_from_level1<=transport_array(tmp_level1);
    result_from_level2<=transport_array(tmp_level2);
    result_from_level3<=transport_array(tmp_level3);
    result_from_level4<=transport_array(tmp_level4);
    result_from_level5<=transport_array(tmp_level5);
    result_from_level6<=transport_array(tmp_level6);
    c<=transport_array(tmp_level7);
    end
end



endmodule