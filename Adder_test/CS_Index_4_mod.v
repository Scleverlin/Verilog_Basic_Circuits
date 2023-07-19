/* verilator lint_off EOFNEWLINE */
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNOPTFLAT */
module CS_Index_4_mod (a,b,cin,sum,cout);

input [64:1] a,b;
input cin;
output [64:1] sum;
output cout;

wire [64:0]p;
wire [64:0]g;

P_G_gen_cs_64_index_4_mod pg_gen_cs_4_mod (a,b,cin,p,g);

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
        assign gnpg_level2[i]=gnpg_level1[i*2+1]|pp_level1[i*2+1]&gnpg_level1[i*2];  // 4 8-4 16-12 32-28 ... 
        assign pp_level2[i]=pp_level1[i*2+1]&pp_level1[i*2];
   end
endgenerate

//level 3
wire [16:1]c4n;

assign sum[1]=cin^p[1];
assign c4n[1]= gnpg_level2[0];
assign sum[4]= c4n[1]^p[4];
assign c4n[2]= gnpg_level2[1]|pp_level2[1]&c4n[1];  // 8
assign sum[8]= c4n[2]^p[8];
assign c4n[3]= gnpg_level2[2]|pp_level2[2]&c4n[2];  // 12
assign sum[12]= c4n[3]^p[12];
assign c4n[4]= gnpg_level2[3]|pp_level2[3]&c4n[3];  // 16
assign sum[16]= c4n[4]^p[16];
assign c4n[5]= gnpg_level2[4]|pp_level2[4]&c4n[4];  // 20
assign sum[20]= c4n[5]^p[20];
assign c4n[6]= gnpg_level2[5]|pp_level2[5]&c4n[5];  // 24
assign sum[24]= c4n[6]^p[24];
assign c4n[7]= gnpg_level2[6]|pp_level2[6]&c4n[6];  // 28
assign sum[28]= c4n[7]^p[28];
assign c4n[8]= gnpg_level2[7]|pp_level2[7]&c4n[7];  // 32
assign sum[32]= c4n[8]^p[32];
assign c4n[9]= gnpg_level2[8]|pp_level2[8]&c4n[8];  // 36
assign sum[36]= c4n[9]^p[36];
assign c4n[10]= gnpg_level2[9]|pp_level2[9]&c4n[9];  // 40
assign sum[40]= c4n[10]^p[40];
assign c4n[11]= gnpg_level2[10]|pp_level2[10]&c4n[10];  // 44
assign sum[44]= c4n[11]^p[44];
assign c4n[12]= gnpg_level2[11]|pp_level2[11]&c4n[11];  // 48
assign sum[48]= c4n[12]^p[48];
assign c4n[13]= gnpg_level2[12]|pp_level2[12]&c4n[12];  // 52
assign sum[52]= c4n[13]^p[52];
assign c4n[14]= gnpg_level2[13]|pp_level2[13]&c4n[13];  // 56
assign sum[56]= c4n[14]^p[56];
assign c4n[15]= gnpg_level2[14]|pp_level2[14]&c4n[14];  // 60
assign sum[60]= c4n[15]^p[60];
assign c4n[16]= gnpg_level2[15]|pp_level2[15]&c4n[15];  // 64
assign sum[64]= c4n[16]^p[64];

assign cout=g[64]|p[64]&c4n[16];
wire c2;
assign sum[2]=gnpg_level1[0]^p[2];
assign c2=g[2]|p[2]&gnpg_level1[0];
assign sum[3]=p[3]^c2;


wire tmp1,tmp2,c6,pptmp2,c5;
assign tmp1=g[4]|p[4]&c4n[1];
assign sum[5]=tmp1^p[5];
assign tmp2=g[6]|p[6]&g[5];
assign pptmp2=p[6]&p[5];
assign c5=g[5]|p[5]&tmp1;
assign sum[6]=c5^p[6];
assign c6=tmp2|pptmp2&tmp1;
assign sum[7]=p[7]^c6;

wire tmp3,tmp4,c10,pptmp4,c9;
assign tmp3=g[8]|p[8]&c4n[2];
assign sum[9]=tmp3^p[9];
assign tmp4=g[10]|p[10]&g[9];
assign pptmp4=p[10]&p[9];
assign c9=g[9]|p[9]&tmp3;
assign sum[10]=c9^p[10];
assign c10=tmp4|pptmp4&tmp3;
assign sum[11]=p[11]^c10;

wire tmp5,tmp6,c14,pptmp6,c13;
assign tmp5=g[12]|p[12]&c4n[3];
assign sum[13]=tmp5^p[13];
assign tmp6=g[14]|p[14]&g[13];
assign pptmp6=p[14]&p[13];
assign c13=g[13]|p[13]&tmp5;
assign sum[14]=c13^p[14];
assign c14=tmp6|pptmp6&tmp5;
assign sum[15]=p[15]^c14;

wire tmp7,tmp8,c18,pptmp8,c17;
assign tmp7=g[16]|p[16]&c4n[4];
assign sum[17]=tmp7^p[17];
assign tmp8=g[18]|p[18]&g[17];
assign pptmp8=p[18]&p[17];
assign c17=g[17]|p[17]&tmp7;
assign sum[18]=c17^p[18];
assign c18=tmp8|pptmp8&tmp7;
assign sum[19]=p[19]^c18;

wire tmp9,tmp10,c22,pptmp10,c21;
assign tmp9=g[20]|p[20]&c4n[5];
assign sum[21]=tmp9^p[21];
assign tmp10=g[22]|p[22]&g[21];
assign pptmp10=p[22]&p[21];
assign c21=g[21]|p[21]&tmp9;
assign sum[22]=c21^p[22];
assign c22=tmp10|pptmp10&tmp9;
assign sum[23]=p[23]^c22;

wire tmp11,tmp12,c26,pptmp12,c25;
assign tmp11=g[24]|p[24]&c4n[6];
assign sum[25]=tmp11^p[25];
assign tmp12=g[26]|p[26]&g[25];
assign pptmp12=p[26]&p[25];
assign c25=g[25]|p[25]&tmp11;
assign sum[26]=c25^p[26];
assign c26=tmp12|pptmp12&tmp11;
assign sum[27]=p[27]^c26;

wire tmp13,tmp14,c30,pptmp14,c29;
assign tmp13=g[28]|p[28]&c4n[7];
assign sum[29]=tmp13^p[29];
assign tmp14=g[30]|p[30]&g[29];
assign pptmp14=p[30]&p[29];
assign c29=g[29]|p[29]&tmp13;
assign sum[30]=c29^p[30];
assign c30=tmp14|pptmp14&tmp13;
assign sum[31]=p[31]^c30;

wire tmp15,tmp16,c34,pptmp16,c33;
assign tmp15=g[32]|p[32]&c4n[8];
assign sum[33]=tmp15^p[33];
assign tmp16=g[34]|p[34]&g[33];
assign pptmp16=p[34]&p[33];
assign c33=g[33]|p[33]&tmp15;
assign sum[34]=c33^p[34];
assign c34=tmp16|pptmp16&tmp15;
assign sum[35]=p[35]^c34;

wire tmp17,tmp18,c38,pptmp18,c37;
assign tmp17=g[36]|p[36]&c4n[9];
assign sum[37]=tmp17^p[37];
assign tmp18=g[38]|p[38]&g[37];
assign pptmp18=p[38]&p[37];
assign c37=g[37]|p[37]&tmp17;
assign sum[38]=c37^p[38];
assign c38=tmp18|pptmp18&tmp17;
assign sum[39]=p[39]^c38;

wire tmp19,tmp20,c42,pptmp20,c41;
assign tmp19=g[40]|p[40]&c4n[10];
assign sum[41]=tmp19^p[41];
assign tmp20=g[42]|p[42]&g[41];
assign pptmp20=p[42]&p[41];
assign c41=g[41]|p[41]&tmp19;
assign sum[42]=c41^p[42];
assign c42=tmp20|pptmp20&tmp19;
assign sum[43]=p[43]^c42;

wire tmp21,tmp22,c46,pptmp22,c45;
assign tmp21=g[44]|p[44]&c4n[11];
assign sum[45]=tmp21^p[45];
assign tmp22=g[46]|p[46]&g[45];
assign pptmp22=p[46]&p[45];
assign c45=g[45]|p[45]&tmp21;
assign sum[46]=c45^p[46];
assign c46=tmp22|pptmp22&tmp21;
assign sum[47]=p[47]^c46;

wire tmp23,tmp24,c50,pptmp24,c49;
assign tmp23=g[48]|p[48]&c4n[12];  
assign sum[49]=tmp23^p[49];
assign tmp24=g[50]|p[50]&g[49];
assign pptmp24=p[50]&p[49];
assign c49=g[49]|p[49]&tmp23;
assign sum[50]=c49^p[50];
assign c50=tmp24|pptmp24&tmp23;
assign sum[51]=p[51]^c50;

wire tmp25,tmp26,c54,pptmp26,c53;
assign tmp25=g[52]|p[52]&c4n[13];
assign sum[53]=tmp25^p[53];
assign tmp26=g[54]|p[54]&g[53];
assign pptmp26=p[54]&p[53];
assign c53=g[53]|p[53]&tmp25;
assign sum[54]=c53^p[54];
assign c54=tmp26|pptmp26&tmp25;
assign sum[55]=p[55]^c54;

wire tmp27,tmp28,c58,pptmp28,c57;
assign tmp27=g[56]|p[56]&c4n[14];
assign sum[57]=tmp27^p[57];
assign tmp28=g[58]|p[58]&g[57];
assign pptmp28=p[58]&p[57];
assign c57=g[57]|p[57]&tmp27;
assign sum[58]=c57^p[58];
assign c58=tmp28|pptmp28&tmp27;
assign sum[59]=p[59]^c58;

wire tmp29,tmp30,c62,pptmp30,c61;
assign tmp29=g[60]|p[60]&c4n[15];
assign sum[61]=tmp29^p[61];
assign tmp30=g[62]|p[62]&g[61];
assign pptmp30=p[62]&p[61];
assign c61=g[61]|p[61]&tmp29;
assign sum[62]=c61^p[62];
assign c62=tmp30|pptmp30&tmp29;
assign sum[63]=p[63]^c62;

endmodule
module P_G_gen_cs_64_index_4_mod (a,b,cin,p,g);
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

