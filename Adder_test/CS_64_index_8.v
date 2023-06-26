/* verilator lint_off EOFNEWLINE */
/* verilator lint_off UNUSEDSIGNAL */
module CS_64_index_8 (a,b,cin,sum,cout);

input [64:1] a,b;
input cin;
output [64:1] sum;
output cout;

wire [64:0]p;
wire [64:0]g;

P_G_gen_cs_64 pg_gen_cs (a,b,cin,p,g);

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

//level3
wire [7:0] gnpg_level3;
wire [7:0] pp_level3;

generate
    for (i = 0;i<8;i=i+1 ) begin
        assign gnpg_level3[i]=gnpg_level2[i*2+1]|pp_level2[i*2+1]&gnpg_level2[i*2]; // 8
        assign pp_level3[i]=pp_level2[i*2+1]&pp_level2[i*2];
   end
endgenerate

// level 4
wire [7:0] gnpg_level4;
wire [7:0] pp_level4;
assign gnpg_level4[0]=gnpg_level3[0];
assign pp_level4[0]=pp_level3[0];

generate
    for (i = 1;i<8;i=i+1 ) begin
        assign gnpg_level4[i]=gnpg_level3[i]|pp_level3[i]&gnpg_level3[i-1];  // 8,16
        assign pp_level4[i]=pp_level3[i]&pp_level3[i-1];
   end
endgenerate

// level 5
wire [7:0] gnpg_level5;
wire [7:0] pp_level5;
assign gnpg_level5[0]=gnpg_level4[0];
assign pp_level5[0]=pp_level4[0];
assign gnpg_level5[1]=gnpg_level4[1];
assign pp_level5[1]=pp_level4[1];

generate
    for (i = 2;i<8;i=i+1 ) begin
        assign gnpg_level5[i]=gnpg_level4[i]|pp_level4[i]&gnpg_level4[i-2]; // 32 24 16 8 
        assign pp_level5[i]=pp_level4[i]&pp_level4[i-2];
   end
endgenerate

// level 6

wire [3:0] gnpg_level6;


generate 
    for (i = 0;i<4;i=i+1 ) begin
        assign gnpg_level6[i]=gnpg_level5[i+4]|pp_level5[i+4]&gnpg_level5[i]; // 64 56 48 40
   end
endgenerate

wire tmp1,tmp2,tmp3,tmp4,tmp_c8,tmp_c9,tmp_c10,tmp_c11,tmp_c12,tmp_c13,tmp_c14;
wire tmp_c_16,tmp_c_17,tmp_c_18,tmp_c_19,tmp_c_20,tmp_c_21,tmp_c_22;
wire tmp_c_24,tmp_c_25,tmp_c_26,tmp_c_27,tmp_c_28,tmp_c_29,tmp_c_30;
wire tmp_c_32,tmp_c_33,tmp_c_34,tmp_c_35,tmp_c_36,tmp_c_37,tmp_c_38;
wire tmp_c_40,tmp_c_41,tmp_c_42,tmp_c_43,tmp_c_44,tmp_c_45,tmp_c_46;
wire tmp_c_48,tmp_c_49,tmp_c_50,tmp_c_51,tmp_c_52,tmp_c_53,tmp_c_54;
wire tmp_c_56,tmp_c_57,tmp_c_58,tmp_c_59,tmp_c_60,tmp_c_61,tmp_c_62;

assign cout = g[64]| p[64]&gnpg_level6[3];
assign sum[1]= cin^p[1];
assign sum[2]= gnpg_level1[0]^p[2];
assign tmp1=g[2]|p[2]&gnpg_level1[0];//c2
assign sum[3]= tmp1^p[3];
assign sum[4]= gnpg_level2[0]^p[4];
assign tmp2=g[4]|p[4]&gnpg_level2[0];//c4
assign tmp3=gnpg_level1[2]|pp_level1[2]&gnpg_level2[0];//c5
assign tmp4=g[6]|p[6] & tmp3;//c6
assign sum[5]= tmp2^p[5];
assign sum[6]= tmp3^p[6];
assign sum[7]= tmp4^p[7];
assign sum[8]= gnpg_level5[0]^p[8];

assign tmp_c8=g[8]|p[8]&gnpg_level3[0];//c8
assign tmp_c9=gnpg_level1[4]|pp_level1[4]&gnpg_level3[0];//c9
assign tmp_c10=g[10]|p[10]&tmp_c9;//c10
assign tmp_c11=gnpg_level2[2]|pp_level2[2]&gnpg_level3[0];//c11
assign tmp_c12=g[12]|p[12]&tmp_c11;//c12
assign tmp_c13=gnpg_level1[6]|pp_level1[6]&tmp_c11;//c13
assign tmp_c14=g[14]|p[14]&tmp_c13;//c14
assign sum[9]= tmp_c8^p[9];
assign sum[10]= tmp_c9^p[10];
assign sum[11]= tmp_c10^p[11];
assign sum[12]= tmp_c11^p[12];
assign sum[13]= tmp_c12^p[13];
assign sum[14]= tmp_c13^p[14];
assign sum[15]= tmp_c14^p[15];
assign sum[16]= gnpg_level5[1]^p[16];
assign tmp_c_16=g[16]|p[16]&gnpg_level4[1];//c16
assign tmp_c_17=gnpg_level1[8]|pp_level1[8]&gnpg_level4[1];//c17
assign tmp_c_18=g[18]|p[18]&tmp_c_17;//c18
assign tmp_c_19=gnpg_level1[9]|pp_level1[9]&tmp_c_17;//c19
assign tmp_c_20=g[20]|p[20]&tmp_c_19;//c20
assign tmp_c_21=gnpg_level1[10]|pp_level1[10]&tmp_c_19;//c21
assign tmp_c_22=g[22]|p[22]&tmp_c_21;//c22
assign sum[17]= tmp_c_16^p[17];
assign sum[18]= tmp_c_17^p[18];
assign sum[19]= tmp_c_18^p[19];
assign sum[20]= tmp_c_19^p[20];
assign sum[21]= tmp_c_20^p[21];
assign sum[22]= tmp_c_21^p[22];
assign sum[23]= tmp_c_22^p[23];
assign sum[24]= gnpg_level5[2]^p[24];

assign tmp_c_24=g[24]|p[24]&gnpg_level5[2];//c24
assign tmp_c_25=gnpg_level1[12]|pp_level1[12]&gnpg_level5[2];//c25
assign tmp_c_26=g[26]|p[26]&tmp_c_25;//c26
assign tmp_c_27=gnpg_level1[13]|pp_level1[13]&tmp_c_25;//c27
assign tmp_c_28=g[28]|p[28]&tmp_c_27;//c28
assign tmp_c_29=gnpg_level1[14]|pp_level1[14]&tmp_c_27;//c29
assign tmp_c_30=g[30]|p[30]&tmp_c_29;//c30

assign sum[25]= tmp_c_24^p[25];
assign sum[26]= tmp_c_25^p[26];
assign sum[27]= tmp_c_26^p[27];
assign sum[28]= tmp_c_27^p[28];
assign sum[29]= tmp_c_28^p[29];
assign sum[30]= tmp_c_29^p[30];
assign sum[31]= tmp_c_30^p[31];
assign sum[32]= gnpg_level5[3]^p[32];

assign tmp_c_32=g[32]|p[32]&gnpg_level5[3];//c32
assign tmp_c_33=gnpg_level1[16]|pp_level1[16]&gnpg_level5[3];//c33
assign tmp_c_34=g[34]|p[34]&tmp_c_33;//c34
assign tmp_c_35=gnpg_level1[17]|pp_level1[17]&tmp_c_33;//c35
assign tmp_c_36=g[36]|p[36]&tmp_c_35;//c36
assign tmp_c_37=gnpg_level1[18]|pp_level1[18]&tmp_c_35;//c37
assign tmp_c_38=g[38]|p[38]&tmp_c_37;//c38
assign sum[33]= tmp_c_32^p[33];
assign sum[34]= tmp_c_33^p[34];
assign sum[35]= tmp_c_34^p[35];
assign sum[36]= tmp_c_35^p[36];
assign sum[37]= tmp_c_36^p[37];
assign sum[38]= tmp_c_37^p[38];
assign sum[39]= tmp_c_38^p[39];
assign sum[40]= gnpg_level6[0]^p[40];

assign tmp_c_40=g[40]|p[40]&gnpg_level6[0];//c40
assign tmp_c_41=gnpg_level1[20]|pp_level1[20]&gnpg_level6[0];//c41
assign tmp_c_42=g[42]|p[42]&tmp_c_41;//c42
assign tmp_c_43=gnpg_level1[21]|pp_level1[21]&tmp_c_41;//c43
assign tmp_c_44=g[44]|p[44]&tmp_c_43;//c44
assign tmp_c_45=gnpg_level1[22]|pp_level1[22]&tmp_c_43;//c45
assign tmp_c_46=g[46]|p[46]&tmp_c_45;//c46

assign sum[41]= tmp_c_40^p[41];
assign sum[42]= tmp_c_41^p[42];
assign sum[43]= tmp_c_42^p[43];
assign sum[44]= tmp_c_43^p[44];
assign sum[45]= tmp_c_44^p[45];
assign sum[46]= tmp_c_45^p[46];
assign sum[47]= tmp_c_46^p[47];
assign sum[48]= gnpg_level6[1]^p[48];

assign tmp_c_48=g[48]|p[48]&gnpg_level6[1];//c48
assign tmp_c_49=gnpg_level1[24]|pp_level1[24]&gnpg_level6[1];//c49
assign tmp_c_50=g[50]|p[50]&tmp_c_49;//c50
assign tmp_c_51=gnpg_level1[25]|pp_level1[25]&tmp_c_49;//c51
assign tmp_c_52=g[52]|p[52]&tmp_c_51;//c52
assign tmp_c_53=gnpg_level1[26]|pp_level1[26]&tmp_c_51;//c53
assign tmp_c_54=g[54]|p[54]&tmp_c_53;//c54
assign sum[49]= tmp_c_48^p[49];
assign sum[50]= tmp_c_49^p[50];
assign sum[51]= tmp_c_50^p[51];
assign sum[52]= tmp_c_51^p[52];
assign sum[53]= tmp_c_52^p[53];
assign sum[54]= tmp_c_53^p[54];
assign sum[55]= tmp_c_54^p[55];
assign sum[56]= gnpg_level6[2]^p[56];

assign tmp_c_56=g[56]|p[56]&gnpg_level6[2];//c56
assign tmp_c_57=gnpg_level1[28]|pp_level1[28]&gnpg_level6[2];//c57
assign tmp_c_58=g[58]|p[58]&tmp_c_57;//c58
assign tmp_c_59=gnpg_level1[29]|pp_level1[29]&tmp_c_57;//c59
assign tmp_c_60=g[60]|p[60]&tmp_c_59;//c60
assign tmp_c_61=gnpg_level1[30]|pp_level1[30]&tmp_c_59;//c61
assign tmp_c_62=g[62]|p[62]&tmp_c_61;//c62
assign sum[57]= tmp_c_56^p[57];
assign sum[58]= tmp_c_57^p[58];
assign sum[59]= tmp_c_58^p[59];
assign sum[60]= tmp_c_59^p[60];
assign sum[61]= tmp_c_60^p[61];
assign sum[62]= tmp_c_61^p[62];
assign sum[63]= tmp_c_62^p[63];
assign sum[64]= gnpg_level6[3]^p[64];


endmodule

module P_G_gen_cs_64 (a,b,cin,p,g);
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

