/* verilator lint_off EOFNEWLINE */
/* verilator lint_off UNUSEDSIGNAL */
module CS_index4_mod_v2 (a,b,cin,sum,cout);

input [64:1] a,b;
input cin;
output [64:1] sum;
output cout;

wire [64:0]p;
wire [64:0]g;

P_G_gen_cs_64_index_4_mod_v2 pg_gen_cs_4 (a,b,cin,p,g);

//level 1
wire [31:0] gnpg_level1;
wire [31:0] pp_level1;

genvar i;
generate
     for (i = 0;i<32 ;i=i+1 ) begin
        assign gnpg_level1[i]=g[i*2+1]|p[i*2+1]&g[2*i];  // gnpg[0]=g1+p1g0  // 2
        assign pp_level1[i]=p[i*2+1]&p[i*2];              // pp[0]=p1p0
   end
endgenerate

//level 2
wire [15:0] gnpg_level2;
wire [15:0] pp_level2;
generate 
    for (i = 0;i<16 ;i=i+1 ) begin
        assign gnpg_level2[i]=gnpg_level1[i*2+1]|pp_level1[i*2+1]&gnpg_level1[i*2];  // 4
        assign pp_level2[i]=pp_level1[i*2+1]&pp_level1[i*2];
   end
endgenerate

//level 3

wire [15:0] gnpg_level3;
wire [15:0] pp_level3;

assign gnpg_level3[0]=gnpg_level2[0];
assign pp_level3[0]=pp_level2[0];

generate 
      for (i = 1;i<16 ;i=i+1 ) begin
         assign gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[i-1];  // 4,8
         assign pp_level3[i]=pp_level2[i]&pp_level2[i-1];
      end
endgenerate

//level 4

wire [15:0] gnpg_level4;
wire [15:0] pp_level4;

assign gnpg_level4[0]=gnpg_level3[0];
assign pp_level4[0]=pp_level3[0];
assign gnpg_level4[1]=gnpg_level3[1];
assign pp_level4[1]=pp_level3[1];

generate 
      for (i = 2;i<16 ;i=i+1 ) begin
         assign gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[i-2];  // 4,8,12,16
         assign pp_level4[i]=pp_level3[i]&pp_level3[i-2];
      end
endgenerate

//level 5

wire [7:0] gnpg_level5;
wire [7:0] pp_level5;

assign gnpg_level5[0]=gnpg_level4[0];
assign pp_level5[0]=pp_level4[0];
assign gnpg_level5[1]=gnpg_level4[1];
assign pp_level5[1]=pp_level4[1];
assign gnpg_level5[2]=gnpg_level4[2];
assign pp_level5[2]=pp_level4[2];
assign gnpg_level5[3]=gnpg_level4[3];
assign pp_level5[3]=pp_level4[3];

generate
      for (i = 4;i<8 ;i=i+1 ) begin
         assign gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[i-4];  // 4,8,12,16,20,24,28,32
         assign pp_level5[i]=pp_level4[i]&pp_level4[i-4];
      end
endgenerate

//level 6

wire [3:0] gnpg_level6;
wire [3:0] pp_level6;

generate
      for (i = 0;i<4 ;i=i+1 ) begin
         assign gnpg_level6[i]=gnpg_level4[i+8]|pp_level4[i+8]&gnpg_level5[i+4];  // 36 40 44 48 
         assign pp_level6[i]=pp_level4[i+8]&pp_level5[i+4];
      end
endgenerate
// level 7
wire [3:0] gnpg_level7;
wire [3:0] pp_level7;

generate
      for (i = 0;i<4 ;i=i+1 ) begin
         assign gnpg_level7[i]=gnpg_level4[i+12]|pp_level4[i+12]&gnpg_level6[i];  // 52 56 60 64
         assign pp_level7[i]=pp_level4[i+12]&pp_level6[i];
      end
endgenerate



wire tmp1,tmp_c4,tmp_c5,tmp_c6,tmp_c8,tmp_c9;
wire tmp_c10,tmp_c12,tmp_c13,tmp_c14,tmp_c16,tmp_c17;
wire tmp_c18,tmp_c20,tmp_c21,tmp_c22,tmp_c24,tmp_c25;
wire tmp_c26,tmp_c28,tmp_c29,tmp_c30,tmp_c32,tmp_c33;
wire tmp_c34,tmp_c36,tmp_c37,tmp_c38,tmp_c40,tmp_c41;
wire tmp_c42,tmp_c44,tmp_c45,tmp_c46,tmp_c48,tmp_c49;
wire tmp_c50,tmp_c52,tmp_c53,tmp_c54,tmp_c56,tmp_c57;
wire tmp_c58,tmp_c60,tmp_c61,tmp_c62;
assign cout = g[64]| p[64]&gnpg_level7[3];
assign sum[1]= cin^p[1];
assign sum[2]=gnpg_level1[0]^p[2];
assign tmp1=g[2]|p[2]&gnpg_level1[0];//c2
assign sum[3]= tmp1^p[3];
assign sum[4]=gnpg_level5[0]^p[4];
assign tmp_c4=g[4]|p[4]&gnpg_level2[0];//c4
assign sum[5]=tmp_c4^p[5];
assign tmp_c5=gnpg_level1[2]|pp_level1[2]&gnpg_level2[0];//c5
assign sum[6]=tmp_c5^p[6];
assign tmp_c6=g[6]|p[6]&tmp_c5;//c6
assign sum[7]=tmp_c6^p[7];
assign sum[8]=gnpg_level5[1]^p[8];
assign tmp_c8=g[8]|p[8]&gnpg_level3[1];//c8
assign sum[9]=tmp_c8^p[9];
assign tmp_c9=gnpg_level1[4]|pp_level1[4]&gnpg_level3[1];//c9
assign sum[10]=tmp_c9^p[10];
assign tmp_c10=g[10]|p[10]&tmp_c9;//c10
assign sum[11]=tmp_c10^p[11];
assign sum[12]=gnpg_level5[2]^p[12];
assign tmp_c12=g[12]|p[12]&gnpg_level4[2];//c12
assign sum[13]=tmp_c12^p[13];
assign tmp_c13=gnpg_level1[6]|pp_level1[6]&gnpg_level4[2];//c13
assign sum[14]=tmp_c13^p[14];
assign tmp_c14=g[14]|p[14]&tmp_c13;//c14
assign sum[15]=tmp_c14^p[15];
assign sum[16]=gnpg_level5[3]^p[16];
assign tmp_c16=g[16]|p[16]&gnpg_level4[3];//c16
assign sum[17]=tmp_c16^p[17];
assign tmp_c17=gnpg_level1[8]|pp_level1[8]&gnpg_level4[3];//c17
assign sum[18]=tmp_c17^p[18];
assign tmp_c18=g[18]|p[18]&tmp_c17;//c18
assign sum[19]=tmp_c18^p[19];
assign sum[20]=gnpg_level5[4]^p[20];
assign tmp_c20=g[20]|p[20]&gnpg_level5[4];//c20
assign sum[21]=tmp_c20^p[21];
assign tmp_c21=gnpg_level1[10]|pp_level1[10]&gnpg_level5[4];//c21
assign sum[22]=tmp_c21^p[22];
assign tmp_c22=g[22]|p[22]&tmp_c21;//c22
assign sum[23]=tmp_c22^p[23];
assign sum[24]=gnpg_level5[5]^p[24];
assign tmp_c24=g[24]|p[24]&gnpg_level5[5];//c24
assign sum[25]=tmp_c24^p[25];
assign tmp_c25=gnpg_level1[12]|pp_level1[12]&gnpg_level5[5];//c25
assign sum[26]=tmp_c25^p[26];
assign tmp_c26=g[26]|p[26]&tmp_c25;//c26
assign sum[27]=tmp_c26^p[27];
assign sum[28]=gnpg_level5[6]^p[28];
assign tmp_c28=g[28]|p[28]&gnpg_level5[6];//c28
assign sum[29]=tmp_c28^p[29];
assign tmp_c29=gnpg_level1[14]|pp_level1[14]&gnpg_level5[6];//c29
assign sum[30]=tmp_c29^p[30];
assign tmp_c30=g[30]|p[30]&tmp_c29;//c30
assign sum[31]=tmp_c30^p[31];
assign sum[32]=gnpg_level5[7]^p[32];
assign tmp_c32=g[32]|p[32]&gnpg_level5[7];//c32
assign sum[33]=tmp_c32^p[33];
assign tmp_c33=gnpg_level1[16]|pp_level1[16]&gnpg_level5[7];//c33
assign sum[34]=tmp_c33^p[34];
assign tmp_c34=g[34]|p[34]&tmp_c33;//c34
assign sum[35]=tmp_c34^p[35];
assign sum[36]=gnpg_level6[0]^p[36];
assign tmp_c36=g[36]|p[36]&gnpg_level6[0];//c36
assign sum[37]=tmp_c36^p[37];
assign tmp_c37=gnpg_level1[18]|pp_level1[18]&gnpg_level6[0];//c37
assign sum[38]=tmp_c37^p[38];
assign tmp_c38=g[38]|p[38]&tmp_c37;//c38
assign sum[39]=tmp_c38^p[39];
assign sum[40]=gnpg_level6[1]^p[40];
assign tmp_c40=g[40]|p[40]&gnpg_level6[1];//c40
assign sum[41]=tmp_c40^p[41];
assign tmp_c41=gnpg_level1[20]|pp_level1[20]&gnpg_level6[1];//c41
assign sum[42]=tmp_c41^p[42];
assign tmp_c42=g[42]|p[42]&tmp_c41;//c42
assign sum[43]=tmp_c42^p[43];
assign sum[44]=gnpg_level6[2]^p[44];
assign tmp_c44=g[44]|p[44]&gnpg_level6[2];//c44
assign sum[45]=tmp_c44^p[45];
assign tmp_c45=gnpg_level1[22]|pp_level1[22]&gnpg_level6[2];//c45
assign sum[46]=tmp_c45^p[46];
assign tmp_c46=g[46]|p[46]&tmp_c45;//c46
assign sum[47]=tmp_c46^p[47];
assign sum[48]=gnpg_level6[3]^p[48];
assign tmp_c48=g[48]|p[48]&gnpg_level6[3];//c48
assign sum[49]=tmp_c48^p[49];
assign tmp_c49=gnpg_level1[24]|pp_level1[24]&gnpg_level6[3];//c49
assign sum[50]=tmp_c49^p[50];
assign tmp_c50=g[50]|p[50]&tmp_c49;//c50
assign sum[51]=tmp_c50^p[51];
assign sum[52]=gnpg_level7[0]^p[52];
assign tmp_c52=g[52]|p[52]&gnpg_level7[0];//c52
assign sum[53]=tmp_c52^p[53];
assign tmp_c53=gnpg_level1[26]|pp_level1[26]&gnpg_level7[0];//c53
assign sum[54]=tmp_c53^p[54];
assign tmp_c54=g[54]|p[54]&tmp_c53;//c54
assign sum[55]=tmp_c54^p[55];
assign sum[56]=gnpg_level7[1]^p[56];
assign tmp_c56=g[56]|p[56]&gnpg_level7[1];//c56
assign sum[57]=tmp_c56^p[57];
assign tmp_c57=gnpg_level1[28]|pp_level1[28]&gnpg_level7[1];//c57
assign sum[58]=tmp_c57^p[58];
assign tmp_c58=g[58]|p[58]&tmp_c57;//c58
assign sum[59]=tmp_c58^p[59];
assign sum[60]=gnpg_level7[2]^p[60];
assign tmp_c60=g[60]|p[60]&gnpg_level7[2];//c60
assign sum[61]=tmp_c60^p[61];
assign tmp_c61=gnpg_level1[30]|pp_level1[30]&gnpg_level7[2];//c61
assign sum[62]=tmp_c61^p[62];
assign tmp_c62=g[62]|p[62]&tmp_c61;//c62
assign sum[63]=tmp_c62^p[63];
assign sum[64]=gnpg_level7[3]^p[64];
endmodule
module P_G_gen_cs_64_index_4_mod_v2 (a,b,cin,p,g);
input [63:0]a;
input [63:0]b;
input cin;
output [64:0]p;
output [64:0]g;
assign g[0]=cin;
assign p[0]=0;
assign p[64:1]=a^b;
assign g[64:1]=a&b;
endmodule

