/* verilator lint_off EOFNEWLINE */
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off UNOPTFLAT */
/* verilator lint_off UNDRIVEN */
module CS_Index_16_mod (a,b,cin,sum,cout);

input [64:1] a,b;
input cin;
output [64:1] sum;
output cout;

wire [64:0]p;
wire [64:0]g;

P_G_gen_cs_64_index_16_mod pg_gen_cs_16_mod (a,b,cin,p,g);

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
        assign gnpg_level2[i]=gnpg_level1[i*2+1]|pp_level1[i*2+1]&gnpg_level1[i*2];  // 4 8-4 12-8 16-12 20-16 24-20 28-24 32-28 36-32 40-36 44-40 48-44 52-48 56-52 60-56 64-60
        assign pp_level2[i]=pp_level1[i*2+1]&pp_level1[i*2];
   end
endgenerate

//level3
wire [7:0] gnpg_level3;
wire [7:0] pp_level3;

generate
    for (i = 0;i<8;i=i+1 ) begin
        assign gnpg_level3[i]=gnpg_level2[i*2+1]|pp_level2[i*2+1]&gnpg_level2[i*2]; // 8 16-8 24-16 32-24 40-32 48-40 56-48 64-56
        assign pp_level3[i]=pp_level2[i*2+1]&pp_level2[i*2];
   end
endgenerate

//level4
wire [3:0] gnpg_level4;
wire [3:0] pp_level4;

generate
    for (i = 0;i<4;i=i+1 ) begin
        assign gnpg_level4[i]=gnpg_level3[i*2+1]|pp_level3[i*2+1]&gnpg_level3[i*2]; // 16 32-16 48-32 64-48...
        assign pp_level4[i]=pp_level3[i*2+1]&pp_level3[i*2];
    end
endgenerate

wire [4:1]c16n;
assign c16n[1]=gnpg_level4[0];// 16
assign c16n[2]=gnpg_level4[1]|pp_level4[1]&c16n[1]; // 32
assign c16n[3]=gnpg_level4[2]|pp_level4[2]&c16n[2]; // 48
assign c16n[4]=gnpg_level4[3]|pp_level4[3]&c16n[3]; // 64
assign sum[16]=c16n[1]^p[16];
assign sum[32]=c16n[2]^p[32];
assign sum[48]=c16n[3]^p[48];
assign sum[64]=c16n[4]^p[64];

assign cout=g[64]|p[64]&c16n[4];

wire c3;
assign sum[1]= cin^p[1];
assign sum[2]= gnpg_level1[0]^p[2];
assign c3=g[2]|p[2]&gnpg_level1[0];
assign sum[3]= c3^p[3];
assign sum[4]= gnpg_level2[0]^p[4];

wire tmp1,tmp2,c6,pptmp2,c5;
assign tmp1=g[4]|p[4]& gnpg_level2[0];
assign sum[5]=tmp1^p[5];
assign tmp2=g[6]|p[6]&g[5];
assign pptmp2=p[6]&p[5];
assign c5=g[5]|p[5]&tmp1;
assign sum[6]=c5^p[6];
assign c6=tmp2|pptmp2&tmp1;
assign sum[7]=p[7]^c6;
wire c13,c12,c11,c9,c8;
wire [3:0]tmp3,pptmp3;
assign tmp3[0]=g[8]|p[8]&gnpg_level3[0];
assign sum[8]=gnpg_level3[0]^p[8];
generate
    for (i = 1;i<4;i=i+1 ) begin
        assign tmp3[i]=g[8+2*i]|p[8+2*i]&g[7+2*i];
        assign pptmp3[i]= p[8+2*i]&p[7+2*i];
   end
endgenerate
assign sum[9]=tmp3[0]^p[9]; 
wire [1:0] tmp4;
wire pptmp4;
assign tmp4[0]= tmp3[1]|pptmp3[1]&tmp3[0];
assign c9=g[9]|p[9]&tmp3[0];
assign sum[10]=c9^p[10];
assign sum[11]=tmp4[0]^p[11];
assign tmp4[1]= tmp3[3]|pptmp3[3]&tmp3[2];
assign c11=g[11]|p[11]&tmp4[0];
assign sum[12]=c11^p[12];
assign c12=tmp3[2]|pptmp3[2]&tmp4[0];
assign sum[13]=c12^p[13];
wire tmp6,pptmp6;
assign tmp6=gnpg_level1[6]|pp_level1[6]&gnpg_level1[5];
assign pptmp6=pp_level1[6]&pp_level1[5];
assign c13=tmp6|pptmp6&c9;
assign sum[14]=c13^p[14];
assign pptmp4= pptmp3[3]&pptmp3[2];
wire tmp5;
assign tmp5= tmp4[1]|pptmp4&tmp4[0];
assign sum[15]=tmp5^p[15];


wire [7:0] tmp_from_c15;
wire [7:0] pptmp_from_c15;

assign tmp_from_c15[0]=g[16]|p[16]&c16n[1];
assign sum[17]=tmp_from_c15[0]^p[17];
generate 
    for (i = 1;i<8 ;i=i+1 ) begin
        assign tmp_from_c15[i]=g[16+2*i]|p[16+2*i]&g[15+2*i];
        assign pptmp_from_c15[i]=p[16+2*i]&p[15+2*i];
   end
endgenerate

wire [3:0] tmp_next_from_c15;
wire [3:0] pptmp_next_from_c15;
assign tmp_next_from_c15[0]=tmp_from_c15[1]|pptmp_from_c15[1]&tmp_from_c15[0];
assign pptmp_next_from_c15[0]=pptmp_from_c15[1]&pptmp_from_c15[0];
assign tmp_next_from_c15[1]=tmp_from_c15[3]|pptmp_from_c15[3]&tmp_from_c15[2];
assign pptmp_next_from_c15[1]=pptmp_from_c15[3]&pptmp_from_c15[2];
assign tmp_next_from_c15[2]=tmp_from_c15[5]|pptmp_from_c15[5]&tmp_from_c15[4];
assign pptmp_next_from_c15[2]=pptmp_from_c15[5]&pptmp_from_c15[4];
assign tmp_next_from_c15[3]=tmp_from_c15[7]|pptmp_from_c15[7]&tmp_from_c15[6];
assign pptmp_next_from_c15[3]=pptmp_from_c15[7]&pptmp_from_c15[6];
wire c17;
assign c17=g[17]|p[17]&tmp_from_c15[0];
assign sum[18]=c17^p[18];
assign sum[19]=tmp_next_from_c15[0]^p[19];
wire c19;
assign c19=g[19]|p[19]&tmp_next_from_c15[0];
assign sum[20]=c19^p[20];
wire c20;
assign c20=tmp_from_c15[2]|pptmp_from_c15[2]&tmp_next_from_c15[0];
assign sum[21]=c20^p[21];
wire tmp_c21,pptmp_c21;
assign tmp_c21=gnpg_level1[10]|pp_level1[10]&gnpg_level1[9];
assign pptmp_c21=pp_level1[10]&pp_level1[9];
wire c21;
assign c21=tmp_c21|pptmp_c21&c17;
assign sum[22]=c21^p[22];
wire [1:0] tmp_next_next_from_c15;
wire [1:0] pptmp_next_next_from_c15;
assign tmp_next_next_from_c15[0]=tmp_next_from_c15[1]|pptmp_next_from_c15[1]&tmp_next_from_c15[0];
assign pptmp_next_next_from_c15[0]=pptmp_next_from_c15[1]&pptmp_next_from_c15[0];
assign sum[23]=tmp_next_next_from_c15[0]^p[23];
assign tmp_next_next_from_c15[1]=tmp_next_from_c15[3]|pptmp_next_from_c15[3]&tmp_next_from_c15[2];
assign pptmp_next_next_from_c15[1]=pptmp_next_from_c15[3]&pptmp_next_from_c15[2];
wire c23;
assign c23=g[23]|p[23]&tmp_next_next_from_c15[0];
assign sum[24]=c23^p[24];
wire c24;
assign c24=tmp_from_c15[4]|pptmp_from_c15[4]&tmp_next_next_from_c15[0];
assign sum[25]=c24^p[25];
wire tmp_c25;
assign tmp_c25=gnpg_level1[12]|pp_level1[12]&gnpg_level1[11];
wire pptmp_c25;
assign pptmp_c25=pp_level1[12]&pp_level1[11];
wire c25;
assign c25=tmp_c25|pptmp_c25&c21;
assign sum[26]=c25^p[26];
wire c26;
assign c26=tmp_next_from_c15[2]|pptmp_next_from_c15[2]&tmp_next_next_from_c15[0];
assign sum[27]=c26^p[27];
wire tmp_c27,pptmp_c27;
assign tmp_c27=gnpg_level2[6]|pp_level2[6]&gnpg_level2[5];
assign pptmp_c27=pp_level2[6]&pp_level2[5];
wire c27;
assign c27=tmp_c27|pptmp_c27&c19;
assign sum[28]=c27^p[28];
wire [1:0]tmp_c28;
wire [1:0]pptmp_c28;
assign tmp_c28[0]=tmp_from_c15[4]|pptmp_from_c15[4]&tmp_from_c15[3];
assign pptmp_c28[0]=pptmp_from_c15[4]&pptmp_from_c15[3];
assign tmp_c28[1]=tmp_from_c15[6]|pptmp_from_c15[6]&tmp_from_c15[5];
assign pptmp_c28[1]=pptmp_from_c15[6]&pptmp_from_c15[5];
wire tmptmp_c28;
wire pptmptmp_c28;
assign tmptmp_c28=tmp_c28[1]|pptmp_c28[1]&tmp_c28[0];
assign pptmptmp_c28=pptmp_c28[1]&pptmp_c28[0];
wire c28;
assign c28=tmptmp_c28|pptmptmp_c28&c20;
assign sum[29]=c28^p[29];
wire [1:0] tmp_c29;
wire [1:0] pptmp_c29;
assign tmp_c29[0]=gnpg_level1[12]|pp_level1[12]&gnpg_level1[11];
assign pptmp_c29[0]=pp_level1[12]&pp_level1[11];
assign tmp_c29[1]=gnpg_level1[14]|pp_level1[14]&gnpg_level1[13];
assign pptmp_c29[1]=pp_level1[14]&pp_level1[13];
wire tmptmp_c29;
wire pptmptmp_c29;
assign tmptmp_c29=tmp_c29[1]|pptmp_c29[1]&tmp_c29[0];
assign pptmptmp_c29=pptmp_c29[1]&pptmp_c29[0];
wire c29;
assign c29=tmptmp_c29|pptmptmp_c29&c21;
assign sum[30]=c29^p[30];
wire c30;
assign c30=tmp_next_next_from_c15[1]|pptmp_next_next_from_c15[1]&tmp_next_next_from_c15[0];
assign sum[31]=c30^p[31];

wire [7:0] tmp_from_c31;
wire [7:0] pptmp_from_c31;
assign tmp_from_c31[0]=g[32]|p[32]&c16n[2];
assign sum[33]=tmp_from_c31[0]^p[33];
generate 
    for (i = 1;i<8 ;i=i+1 ) begin
        assign tmp_from_c31[i]=g[32+2*i]|p[32+2*i]&g[31+2*i];
        assign pptmp_from_c31[i]=p[32+2*i]&p[31+2*i];
   end
endgenerate
wire c33;
assign c33=g[33]|p[33]&tmp_from_c31[0];
assign sum[34]=c33^p[34];
wire [3:0]tmp_next_from_c31;
wire [3:0]pptmp_next_from_c31;
assign tmp_next_from_c31[0]=tmp_from_c31[1]|pptmp_from_c31[1]&tmp_from_c31[0];
assign pptmp_next_from_c31[0]=pptmp_from_c31[1]&pptmp_from_c31[0];
assign sum[35]=tmp_next_from_c31[0]^p[35];
assign tmp_next_from_c31[1]=tmp_from_c31[3]|pptmp_from_c31[3]&tmp_from_c31[2];
assign pptmp_next_from_c31[1]=pptmp_from_c31[3]&pptmp_from_c31[2];
assign tmp_next_from_c31[2]=tmp_from_c31[5]|pptmp_from_c31[5]&tmp_from_c31[4];
assign pptmp_next_from_c31[2]=pptmp_from_c31[5]&pptmp_from_c31[4];
assign tmp_next_from_c31[3]=tmp_from_c31[7]|pptmp_from_c31[7]&tmp_from_c31[6];
assign pptmp_next_from_c31[3]=pptmp_from_c31[7]&pptmp_from_c31[6];
wire c35;
assign c35=g[35]|p[35]&tmp_next_from_c31[0];
assign sum[36]=c35^p[36];
wire c36;
assign c36=tmp_from_c31[2]|pptmp_from_c31[2]&tmp_next_from_c31[0];
assign sum[37]=c36^p[37];
wire tmp_c37;
wire pptmp_c37;
assign tmp_c37=gnpg_level1[18]|pp_level1[18]&gnpg_level1[17];
assign pptmp_c37=pp_level1[18]&pp_level1[17];
wire c37;
assign c37=tmp_c37|pptmp_c37&c33;
assign sum[38]=c37^p[38];
wire [1:0]tmp_next_next_from_c31;
wire [1:0]pptmp_next_next_from_c31;
assign tmp_next_next_from_c31[0]=tmp_next_from_c31[1]|pptmp_next_from_c31[1]&tmp_next_from_c31[0];
assign pptmp_next_next_from_c31[0]=pptmp_next_from_c31[1]&pptmp_next_from_c31[0];
assign sum[39]=tmp_next_next_from_c31[0]^p[39];
assign tmp_next_next_from_c31[1]=tmp_next_from_c31[3]|pptmp_next_from_c31[3]&tmp_next_from_c31[2];
assign pptmp_next_next_from_c31[1]=pptmp_next_from_c31[3]&pptmp_next_from_c31[2];
wire c39;
assign c39=g[39]|p[39]&tmp_next_next_from_c31[0];
assign sum[40]=c39^p[40];
wire c40;
assign c40=tmp_from_c31[4]|pptmp_from_c31[4]&tmp_next_next_from_c31[0];
assign sum[41]=c40^p[41];
wire tmp_c41;
wire pptmp_c41;
assign tmp_c41=gnpg_level1[20]|pp_level1[20]&gnpg_level1[19];
assign pptmp_c41=pp_level1[20]&pp_level1[19];
wire c41;
assign c41=tmp_c41|pptmp_c41&c37;
assign sum[42]=c41^p[42];
wire tmp_c42;
wire pptmp_c42;
assign tmp_c42=tmp_next_from_c31[2]|pptmp_next_from_c31[2]&tmp_next_from_c31[1];
assign pptmp_c42=pptmp_next_from_c31[2]&pptmp_next_from_c31[1];
wire c42;
assign c42=tmp_c42|pptmp_c42&tmp_next_from_c31[0];
assign sum[43]=c42^p[43];
wire tmp_c43;
wire pptmp_c43;
assign tmp_c43=gnpg_level2[10]|pp_level2[10]&gnpg_level2[9];
assign pptmp_c43=pp_level2[10]&pp_level2[9];
wire c43;
assign c43=tmp_c43|pptmp_c43&c35;
assign sum[44]=c43^p[44];
wire [1:0]tmptmp_c44;
wire [1:0]pptmptmp_c44;
assign tmptmp_c44[0]=tmp_from_c31[4]|pptmp_from_c31[4]&tmp_from_c31[3];
assign pptmptmp_c44[0]=pptmp_from_c31[4]&pptmp_from_c31[3];
assign tmptmp_c44[1]=tmp_from_c31[6]|pptmp_from_c31[6]&tmp_from_c31[5];
assign pptmptmp_c44[1]=pptmp_from_c31[6]&pptmp_from_c31[5];
wire tmp_c44;
wire pptmp_c44;
assign tmp_c44=tmptmp_c44[1]|pptmptmp_c44[1]&tmptmp_c44[0];
assign pptmp_c44=pptmptmp_c44[1]&pptmptmp_c44[0];
wire c44;
assign c44=tmp_c44|pptmp_c44&c36;
assign sum[45]=c44^p[45];
wire [1:0]tmptmp_c45;
wire [1:0]pptmptmp_c45;
assign tmptmp_c45[1]=gnpg_level1[22]|pp_level1[22]&gnpg_level1[21];
assign pptmptmp_c45[1]=pp_level1[22]&pp_level1[21];
assign tmptmp_c45[0]=gnpg_level1[20]|pp_level1[20]&gnpg_level1[19];
assign pptmptmp_c45[0]=pp_level1[20]&pp_level1[19];
wire tmp_c45;
wire pptmp_c45;
assign tmp_c45=tmptmp_c45[1]|pptmptmp_c45[1]&tmptmp_c45[0];
assign pptmp_c45=pptmptmp_c45[1]&pptmptmp_c45[0];
wire c45;
assign c45=tmp_c45|pptmp_c45&c37;
assign sum[46]=c45^p[46];
wire c46;
assign c46=tmp_next_next_from_c31[1]|pptmp_next_next_from_c31[1]&tmp_next_next_from_c31[0];
assign sum[47]=c46^p[47];


wire [7:0] tmp_from_c47;
wire [7:0] pptmp_from_c47;
assign tmp_from_c47[0]=g[48]|p[48]&c16n[3];
assign sum[49]=tmp_from_c47[0]^p[49];
wire c49;
assign c49=g[49]|p[49]&tmp_from_c47[0];
assign sum[50]=c49^p[50];
generate 
    for (i = 1;i<8 ;i=i+1 ) begin
        assign tmp_from_c47[i]=g[48+2*i]|p[48+2*i]&g[47+2*i];
        assign pptmp_from_c47[i]=p[48+2*i]&p[47+2*i];
   end
endgenerate
wire [3:0]tmp_next_from_c47;
wire [3:0]pptmp_next_from_c47;
generate 
    for (i = 0;i<4 ;i=i+1 ) begin
        assign tmp_next_from_c47[i]= tmp_from_c47[2*i+1]|pptmp_from_c47[2*i+1]&tmp_from_c47[2*i];
        assign pptmp_next_from_c47[i]= pptmp_from_c47[2*i+1]&pptmp_from_c47[2*i];
   end
endgenerate
assign sum[51]=tmp_next_from_c47[0]^p[51];
wire[1:0]tmp_next_next_from_c47;
wire[1:0]pptmp_next_next_from_c47;
assign tmp_next_next_from_c47[0]=tmp_next_from_c47[1]|pptmp_next_from_c47[1]&tmp_next_from_c47[0];
assign pptmp_next_next_from_c47[0]=pptmp_next_from_c47[1]&pptmp_next_from_c47[0];
assign tmp_next_next_from_c47[1]=tmp_next_from_c47[3]|pptmp_next_from_c47[3]&tmp_next_from_c47[2];
assign pptmp_next_next_from_c47[1]=pptmp_next_from_c47[3]&pptmp_next_from_c47[2];
wire c51;
assign c51=g[51]|p[51]&tmp_next_from_c47[0];
assign sum[52]=c51^p[52];
wire c52;
assign c52=tmp_from_c47[2]|pptmp_from_c47[2]&tmp_next_from_c47[0];
assign sum[53]=c52^p[53];
wire tmp_c53;
wire pptmp_c53;
assign tmp_c53=gnpg_level1[26]|pp_level1[26]&gnpg_level1[25];
assign pptmp_c53=pp_level1[26]&pp_level1[25];
wire c53;
assign c53=tmp_c53|pptmp_c53&c49;
assign sum[54]=c53^p[54];
assign sum[55]=tmp_next_next_from_c47[0]^p[55];
wire c55;
assign c55=g[55]|p[55]&tmp_next_next_from_c47[0];
assign sum[56]=c55^p[56];
wire c56;
assign c56=tmp_from_c47[4]|pptmp_from_c47[4]&tmp_next_next_from_c47[0];
assign sum[57]=c56^p[57];
wire tmp_c57;
wire pptmp_c57;
assign tmp_c57=gnpg_level1[28]|pp_level1[28]&gnpg_level1[27];
assign pptmp_c57=pp_level1[28]&pp_level1[27];
wire c57;
assign c57=tmp_c57|pptmp_c57&c53;
assign sum[58]=c57^p[58];
wire tmp_c58;
wire pptmp_c58;
assign tmp_c58=tmp_next_from_c47[2]|pptmp_next_from_c47[2]&tmp_next_from_c47[1];
assign pptmp_c58=pptmp_next_from_c47[2]&pptmp_next_from_c47[1];
wire c58;
assign c58=tmp_c58|pptmp_c58&tmp_next_from_c47[0];
assign sum[59]=c58^p[59];
wire tmp_c59;
wire pptmp_c59;
assign tmp_c59=gnpg_level2[14]|pp_level2[14]&gnpg_level2[13];
assign pptmp_c59=pp_level2[14]&pp_level2[13];
wire c59;
assign c59=tmp_c59|pptmp_c59&c51;
assign sum[60]=c59^p[60];
wire [1:0]tmptmp_c60;
wire [1:0]pptmptmp_c60;
assign tmptmp_c60[0]=tmp_from_c47[4]|pptmp_from_c47[4]&tmp_from_c47[3];
assign pptmptmp_c60[0]=pptmp_from_c47[4]&pptmp_from_c47[3];
assign tmptmp_c60[1]=tmp_from_c47[6]|pptmp_from_c47[6]&tmp_from_c47[5];
assign pptmptmp_c60[1]=pptmp_from_c47[6]&pptmp_from_c47[5];
wire tmp_c60;
wire pptmp_c60;
assign tmp_c60=tmptmp_c60[1]|pptmptmp_c60[1]&tmptmp_c60[0];
assign pptmp_c60=pptmptmp_c60[1]&pptmptmp_c60[0];
wire c60;
assign c60=tmp_c60|pptmp_c60&c52;
assign sum[61]=c60^p[61];
wire [1:0]tmptmp_c61;
wire [1:0]pptmptmp_c61;
assign tmptmp_c61[1]=gnpg_level1[30]|pp_level1[30]&gnpg_level1[29];
assign pptmptmp_c61[1]=pp_level1[30]&pp_level1[29];
assign tmptmp_c61[0]=gnpg_level1[28]|pp_level1[28]&gnpg_level1[27];
assign pptmptmp_c61[0]=pp_level1[28]&pp_level1[27];
wire tmp_c61;
wire pptmp_c61;
assign tmp_c61=tmptmp_c61[1]|pptmptmp_c61[1]&tmptmp_c61[0];
assign pptmp_c61=pptmptmp_c61[1]&pptmptmp_c61[0];
wire c61;
assign c61=tmp_c61|pptmp_c61&c53;
assign sum[62]=c61^p[62];
wire c62;
assign c62=tmp_next_next_from_c47[1]|pptmp_next_next_from_c47[1]&tmp_next_next_from_c47[0];
assign sum[63]=c62^p[63];




endmodule
module P_G_gen_cs_64_index_16_mod (a,b,cin,p,g);
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

