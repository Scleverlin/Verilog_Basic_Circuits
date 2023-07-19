/* verilator lint_off EOFNEWLINE */
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off UNOPTFLAT */
module CS_Index_8_mod (a,b,cin,sum,cout);

input [64:1] a,b;
input cin;
output [64:1] sum;
output cout;

wire [64:0]p;
wire [64:0]g;

P_G_gen_cs_64_index_8_mod pg_gen_cs_16_mod (a,b,cin,p,g);

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
        assign gnpg_level3[i]=gnpg_level2[i*2+1]|pp_level2[i*2+1]&gnpg_level2[i*2]; // 8 16-8 24-16 32-24...
        assign pp_level3[i]=pp_level2[i*2+1]&pp_level2[i*2];
   end
endgenerate

wire [8:1] c8n;
assign c8n[1]=gnpg_level3[0]; // 8
assign sum[8]= c8n[1]^p[8];
assign c8n[2]=gnpg_level3[1]|pp_level3[1]&c8n[1]; // 16
assign sum[16]=c8n[2]^p[16];
assign c8n[3]=gnpg_level3[2]|pp_level3[2]&c8n[2]; // 24
assign sum[24]=c8n[3]^p[24];
assign c8n[4]=gnpg_level3[3]|pp_level3[3]&c8n[3]; // 32
assign sum[32]=c8n[4]^p[32];
assign c8n[5]=gnpg_level3[4]|pp_level3[4]&c8n[4]; // 40
assign sum[40]=c8n[5]^p[40];
assign c8n[6]=gnpg_level3[5]|pp_level3[5]&c8n[5]; // 48
assign sum[48]=c8n[6]^p[48];
assign c8n[7]=gnpg_level3[6]|pp_level3[6]&c8n[6]; // 56
assign sum[56]=c8n[7]^p[56];
assign c8n[8]=gnpg_level3[7]|pp_level3[7]&c8n[7]; // 64
assign sum[64]=c8n[8]^p[64];

assign cout=g[64]|p[64]&c8n[8];
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
assign tmp3[0]=g[8]|p[8]&c8n[1];
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

wire [3:0]tmp_from_c15,pptmp_from_c15;
wire [1:0]tmp_next_from_c15;
wire pptmp_next_from_c15;
wire c22;
assign tmp_from_c15[0]=g[16]|p[16]&c8n[2];
generate
    for (i = 1;i<4;i=i+1 ) begin
        assign tmp_from_c15[i]=g[16+2*i]|p[16+2*i]&g[15+2*i];
        assign pptmp_from_c15[i]= p[16+2*i]&p[15+2*i];
   end
endgenerate
assign sum[17]=tmp_from_c15[0]^p[17];
assign tmp_next_from_c15[0]= tmp_from_c15[1]|pptmp_from_c15[1]&tmp_from_c15[0];
wire c17;
assign c17=g[17]|p[17]&tmp_from_c15[0];
assign sum[18]=c17^p[18];
assign tmp_next_from_c15[1]= tmp_from_c15[3]|pptmp_from_c15[3]&tmp_from_c15[2];
assign sum[19]=tmp_next_from_c15[0]^p[19];
wire c19;
assign c19=g[19]|p[19]&tmp_next_from_c15[0];
assign sum[20]=c19^p[20];
wire c20;
assign c20=tmp_from_c15[2]|pptmp_from_c15[2]&tmp_next_from_c15[0];
assign sum[21]=c20^p[21];
assign pptmp_next_from_c15= pptmp_from_c15[3]&pptmp_from_c15[2];
wire c21;
wire c21_tmp;
wire c21_pptmp;
assign c21_tmp=gnpg_level1[10]|pp_level1[10]&gnpg_level1[9];
assign c21_pptmp=pp_level1[10]&pp_level1[9];
assign c21=c21_tmp|c21_pptmp&c17;
assign sum[22]=c21^p[22];
assign c22=tmp_next_from_c15[1]|pptmp_next_from_c15&tmp_next_from_c15[0];
assign sum[23]=c22^p[23];


wire [3:0]tmp_from_c23,pptmp_from_c23;
wire [1:0]tmp_next_from_c23;
wire pptmp_next_from_c23;
wire c30;
assign tmp_from_c23[0]=g[24]|p[24]&c8n[3];
generate
    for (i = 1;i<4;i=i+1 ) begin
        assign tmp_from_c23[i]=g[24+2*i]|p[24+2*i]&g[23+2*i];
        assign pptmp_from_c23[i]= p[24+2*i]&p[23+2*i];
   end
endgenerate
assign sum[25]=tmp_from_c23[0]^p[25];
assign tmp_next_from_c23[0]= tmp_from_c23[1]|pptmp_from_c23[1]&tmp_from_c23[0];
wire c25;
assign c25=g[25]|p[25]&tmp_from_c23[0];
assign sum[26]=c25^p[26];
assign tmp_next_from_c23[1]= tmp_from_c23[3]|pptmp_from_c23[3]&tmp_from_c23[2];
assign sum[27]=tmp_next_from_c23[0]^p[27];
wire c27;
assign c27=g[27]|p[27]&tmp_next_from_c23[0];
assign sum[28]=c27^p[28];
wire c28;
assign c28=tmp_from_c23[2]|pptmp_from_c23[2]&tmp_next_from_c23[0];
assign sum[29]=c28^p[29];
assign pptmp_next_from_c23= pptmp_from_c23[3]&pptmp_from_c23[2];
wire c29;
wire c29_tmp;
wire c29_pptmp;
assign c29_tmp=gnpg_level1[14]|pp_level1[14]&gnpg_level1[13];
assign c29_pptmp=pp_level1[14]&pp_level1[13];
assign c29=c29_tmp|c29_pptmp&c25;
assign sum[30]=c29^p[30];
assign c30=tmp_next_from_c23[1]|pptmp_next_from_c23&tmp_next_from_c23[0];
assign sum[31]=c30^p[31];

wire [3:0]tmp_from_c31,pptmp_from_c31;
wire [1:0]tmp_next_from_c31;
wire pptmp_next_from_c31;
wire c38;
assign tmp_from_c31[0]=g[32]|p[32]&c8n[4];
generate
    for (i = 1;i<4;i=i+1 ) begin
        assign tmp_from_c31[i]=g[32+2*i]|p[32+2*i]&g[31+2*i];
        assign pptmp_from_c31[i]= p[32+2*i]&p[31+2*i];
   end
endgenerate
assign sum[33]=tmp_from_c31[0]^p[33];
assign tmp_next_from_c31[0]= tmp_from_c31[1]|pptmp_from_c31[1]&tmp_from_c31[0];
wire c33;
assign c33=g[33]|p[33]&tmp_from_c31[0];
assign sum[34]=c33^p[34];
assign tmp_next_from_c31[1]= tmp_from_c31[3]|pptmp_from_c31[3]&tmp_from_c31[2];
assign sum[35]=tmp_next_from_c31[0]^p[35];
wire c35;
assign c35=g[35]|p[35]&tmp_next_from_c31[0];
assign sum[36]=c35^p[36];
wire c36;
assign c36=tmp_from_c31[2]|pptmp_from_c31[2]&tmp_next_from_c31[0];
assign sum[37]=c36^p[37];
assign pptmp_next_from_c31= pptmp_from_c31[3]&pptmp_from_c31[2];
wire c37;
wire c37_tmp;
wire c37_pptmp;
assign c37_tmp=gnpg_level1[18]|pp_level1[18]&gnpg_level1[17];
assign c37_pptmp=pp_level1[18]&pp_level1[17];
assign c37=c37_tmp|c37_pptmp&c33;
assign sum[38]=c37^p[38];
assign c38=tmp_next_from_c31[1]|pptmp_next_from_c31&tmp_next_from_c31[0];
assign sum[39]=c38^p[39];

wire [3:0]tmp_from_c39,pptmp_from_c39;
wire [1:0]tmp_next_from_c39;
wire pptmp_next_from_c39;
wire c46;
assign tmp_from_c39[0]=g[40]|p[40]&c8n[5];
generate
    for (i = 1;i<4;i=i+1 ) begin
        assign tmp_from_c39[i]=g[40+2*i]|p[40+2*i]&g[39+2*i];
        assign pptmp_from_c39[i]= p[40+2*i]&p[39+2*i];
   end
endgenerate
assign sum[41]=tmp_from_c39[0]^p[41];
assign tmp_next_from_c39[0]= tmp_from_c39[1]|pptmp_from_c39[1]&tmp_from_c39[0];
wire c41;
assign c41=g[41]|p[41]&tmp_from_c39[0];
assign sum[42]=c41^p[42];
assign tmp_next_from_c39[1]= tmp_from_c39[3]|pptmp_from_c39[3]&tmp_from_c39[2];
assign sum[43]=tmp_next_from_c39[0]^p[43];
wire c43;
assign c43=g[43]|p[43]&tmp_next_from_c39[0];
assign sum[44]=c43^p[44];
wire c44;
assign c44=tmp_from_c39[2]|pptmp_from_c39[2]&tmp_next_from_c39[0];
assign sum[45]=c44^p[45];
assign pptmp_next_from_c39= pptmp_from_c39[3]&pptmp_from_c39[2];
wire c45;
wire c45_tmp;
wire c45_pptmp;
assign c45_tmp=gnpg_level1[22]|pp_level1[22]&gnpg_level1[21];
assign c45_pptmp=pp_level1[22]&pp_level1[21];
assign c45=c45_tmp|c45_pptmp&c41;
assign sum[46]=c45^p[46];
assign c46=tmp_next_from_c39[1]|pptmp_next_from_c39&tmp_next_from_c39[0];
assign sum[47]=c46^p[47];

wire [3:0]tmp_from_c47,pptmp_from_c47;
wire [1:0]tmp_next_from_c47;
wire pptmp_next_from_c47;
wire c54;
assign tmp_from_c47[0]=g[48]|p[48]&c8n[6];
generate
    for (i = 1;i<4;i=i+1 ) begin
        assign tmp_from_c47[i]=g[48+2*i]|p[48+2*i]&g[47+2*i];
        assign pptmp_from_c47[i]= p[48+2*i]&p[47+2*i];
   end
endgenerate
assign sum[49]=tmp_from_c47[0]^p[49];
assign tmp_next_from_c47[0]= tmp_from_c47[1]|pptmp_from_c47[1]&tmp_from_c47[0];
wire c49;
assign c49=g[49]|p[49]&tmp_from_c47[0];
assign sum[50]=c49^p[50];
assign tmp_next_from_c47[1]= tmp_from_c47[3]|pptmp_from_c47[3]&tmp_from_c47[2];
assign sum[51]=tmp_next_from_c47[0]^p[51];
wire c51;
assign c51=g[51]|p[51]&tmp_next_from_c47[0];
assign sum[52]=c51^p[52];
wire c52;
assign c52=tmp_from_c47[2]|pptmp_from_c47[2]&tmp_next_from_c47[0];
assign sum[53]=c52^p[53];
assign pptmp_next_from_c47= pptmp_from_c47[3]&pptmp_from_c47[2];
wire c53;
wire c53_tmp;
wire c53_pptmp;
assign c53_tmp=gnpg_level1[26]|pp_level1[26]&gnpg_level1[25];
assign c53_pptmp=pp_level1[26]&pp_level1[25];
assign c53=c53_tmp|c53_pptmp&c49;
assign sum[54]=c53^p[54];
assign c54=tmp_next_from_c47[1]|pptmp_next_from_c47&tmp_next_from_c47[0];
assign sum[55]=c54^p[55];

wire [3:0]tmp_from_c55,pptmp_from_c55;
wire [1:0]tmp_next_from_c55;
wire pptmp_next_from_c55;
wire c62;
assign tmp_from_c55[0]=g[56]|p[56]&c8n[7];
generate
    for (i = 1;i<4;i=i+1 ) begin
        assign tmp_from_c55[i]=g[56+2*i]|p[56+2*i]&g[55+2*i];
        assign pptmp_from_c55[i]= p[56+2*i]&p[55+2*i];
   end
endgenerate
assign sum[57]=tmp_from_c55[0]^p[57];
assign tmp_next_from_c55[0]= tmp_from_c55[1]|pptmp_from_c55[1]&tmp_from_c55[0];
wire c57;
assign c57=g[57]|p[57]&tmp_from_c55[0];
assign sum[58]=c57^p[58];
assign tmp_next_from_c55[1]= tmp_from_c55[3]|pptmp_from_c55[3]&tmp_from_c55[2];
assign sum[59]=tmp_next_from_c55[0]^p[59];
wire c59;
assign c59=g[59]|p[59]&tmp_next_from_c55[0];
assign sum[60]=c59^p[60];
wire c60;
assign c60=tmp_from_c55[2]|pptmp_from_c55[2]&tmp_next_from_c55[0];
assign sum[61]=c60^p[61];
assign pptmp_next_from_c55= pptmp_from_c55[3]&pptmp_from_c55[2];
wire c61;
wire c61_tmp;
wire c61_pptmp;
assign c61_tmp=gnpg_level1[30]|pp_level1[30]&gnpg_level1[29];
assign c61_pptmp=pp_level1[30]&pp_level1[29];
assign c61=c61_tmp|c61_pptmp&c57;
assign sum[62]=c61^p[62];
assign c62=tmp_next_from_c55[1]|pptmp_next_from_c55&tmp_next_from_c55[0];
assign sum[63]=c62^p[63];


endmodule
module P_G_gen_cs_64_index_8_mod (a,b,cin,p,g);
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

