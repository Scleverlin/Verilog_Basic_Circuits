
/* verilator lint_off EOFNEWLINE */
/* verilator lint_off UNUSEDSIGNAL */
module CS_64_index_3 (a,b,cin,sum,cout);

input [64:1] a,b;
input cin;
output [64:1] sum;
output cout;

wire [64:0]p;
wire [64:0]g;

P_G_gen_cs_64_index_3 pg_gen_cs_4 (a,b,cin,p,g);

//level 1

wire [43:0] gnpg_level1;
wire [43:0] pp_level1;

genvar i;

generate
     for (i = 0;i<21 ;i=i+1 ) begin
      assign  gnpg_level1[2*i]=g[3*i+1]|p[3*i+1]&g[3*i]; // 10 43 76   
      assign  pp_level1[2*i]=p[3*i+1]&p[3*i];
      assign  gnpg_level1[2*i+1]=g[3*i+2];// 2 5 8 11
      assign  pp_level1[2*i+1]=p[3*i+2];
   end
endgenerate

assign gnpg_level1[42]=g[63];
assign pp_level1[42]=p[63];
assign gnpg_level1[43]=g[64];
assign pp_level1[43]=p[64];




//level 2

wire [22:0] gnpg_level2;
wire [22:0] pp_level2;

generate
     for (i = 0;i<21 ;i=i+1 ) begin
      assign gnpg_level2[i]= gnpg_level1[2*i+1]|pp_level1[2*i+1]&gnpg_level1[2*i]; // 3
      assign pp_level2[i]= pp_level1[2*i+1]&pp_level1[2*i];
   end
endgenerate

assign gnpg_level2[21]=gnpg_level1[42];
assign pp_level2[21]=pp_level1[42];
assign gnpg_level2[22]=gnpg_level1[43];
assign pp_level2[22]=pp_level1[43];

// level 3

wire [21:0] gnpg_level3;
wire [21:0] pp_level3;

assign gnpg_level3[0]=gnpg_level2[0];
assign pp_level3[0]=pp_level2[0];
assign gnpg_level3[21]=gnpg_level2[22]|pp_level2[22]&gnpg_level2[21];
assign pp_level3[21]=pp_level2[22]&pp_level2[21];

generate
       for (i = 1;i<21 ;i=i+1 ) begin
         assign gnpg_level3[i]= gnpg_level2[i]|pp_level2[i]&gnpg_level2[i-1]; // 3 6 
         assign pp_level3[i]= pp_level2[i]&pp_level2[i-1];
    end
endgenerate

// level 4
wire [20:0] gnpg_level4;
wire [20:0] pp_level4;
assign gnpg_level4[0]=gnpg_level3[0];
assign pp_level4[0]=pp_level3[0];
assign gnpg_level4[1]=gnpg_level3[1];
assign pp_level4[1]=pp_level3[1];
generate
       for (i = 2;i<21 ;i=i+1 ) begin
         assign gnpg_level4[i]= gnpg_level3[i]|pp_level3[i]&gnpg_level3[i-2]; // 3 6 9 12
         assign pp_level4[i]= pp_level3[i]&pp_level3[i-2];
    end
endgenerate

// level 5

wire [20:0] gnpg_level5;
wire [20:0] pp_level5;
assign gnpg_level5[0]=gnpg_level4[0];
assign pp_level5[0]=pp_level4[0];
assign gnpg_level5[1]=gnpg_level4[1];
assign pp_level5[1]=pp_level4[1];
assign gnpg_level5[2]=gnpg_level4[2];
assign pp_level5[2]=pp_level4[2];
assign gnpg_level5[3]=gnpg_level4[3];
assign pp_level5[3]=pp_level4[3];

generate
       for (i = 4;i<21 ;i=i+1 ) begin
         assign gnpg_level5[i]= gnpg_level4[i]|pp_level4[i]&gnpg_level4[i-4]; // 3 6 9 12 15 18 21 24
         assign pp_level5[i]= pp_level4[i]&pp_level4[i-4];
    end
endgenerate

// level 6

wire [20:0] gnpg_level6;
wire [20:0] pp_level6;

generate
   for (i=0;i<8;i=i+1) begin
      assign gnpg_level6[i]=gnpg_level5[i];
      assign pp_level6[i]=pp_level5[i];
   end
endgenerate

generate
   for (i=8;i<21;i=i+1) begin
      assign gnpg_level6[i]=gnpg_level5[i]|pp_level5[i]&gnpg_level5[i-8]; // 3 6 9 12 15 18 21 24 27 30 33 36 39 42 45 48
      assign pp_level6[i]=pp_level5[i]&pp_level5[i-8];
   end
endgenerate

// level 7
wire [4:0] gnpg_level7;
wire [4:0] pp_level7;

generate 
   for (i=0;i<5;i=i+1) begin
      assign gnpg_level7[i]=gnpg_level6[i+16]|pp_level6[i+16]&gnpg_level6[i]; // 51 54 57 60 63 
   end
endgenerate

// cout 
assign cout = gnpg_level3[21]| pp_level3[21]& gnpg_level7[4];
wire c_64;
assign c_64= g[63]| p[63]&gnpg_level7[4];
assign sum[64]= p[64]^c_64;

assign sum[1]= cin^p[1];
assign sum[2]= p[2]^gnpg_level1[0];
assign sum[3]= p[3]^gnpg_level6[0];
wire c3;
assign c3= g[3]|p[3]&gnpg_level2[0];
assign sum[4]= p[4]^c3;
wire c4;
assign c4= gnpg_level1[2]|pp_level1[2]&gnpg_level2[0];
assign sum[5]= p[5]^c4;
assign sum[6]= p[6]^gnpg_level6[1];
wire c6;
assign c6= g[6]|p[6]&gnpg_level3[1];
assign sum[7]= p[7]^c6;
wire c7;
assign c7= gnpg_level1[4]|pp_level1[4]&gnpg_level3[1];
assign sum[8]= p[8]^c7;
assign sum[9]= p[9]^gnpg_level6[2];
wire c9,c10;
assign c9= g[9]|p[9]&gnpg_level4[2];
assign c10= gnpg_level1[6]|pp_level1[6]&gnpg_level4[2];
assign sum[10]= p[10]^c9;
assign sum[11]= p[11]^c10;
assign sum[12]= p[12]^gnpg_level6[3];
wire c12,c13;
assign c12= g[12]|p[12]&gnpg_level4[3];
assign c13= gnpg_level1[8]|pp_level1[8]&gnpg_level4[3];
assign sum[13]= p[13]^c12;
assign sum[14]= p[14]^c13;
assign sum[15]= p[15]^gnpg_level6[4];
wire c15,c16;
assign c15= g[15]|p[15]&gnpg_level5[4];
assign c16= gnpg_level1[10]|pp_level1[10]&gnpg_level5[4];
assign sum[16]= p[16]^c15;
assign sum[17]= p[17]^c16;
assign sum[18]= p[18]^gnpg_level6[5];
wire c18,c19;
assign c18= g[18]|p[18]&gnpg_level5[5];
assign c19= gnpg_level1[12]|pp_level1[12]&gnpg_level5[5];
assign sum[19]= p[19]^c18;
assign sum[20]= p[20]^c19;
assign sum[21]= p[21]^gnpg_level6[6];
wire c21,c22;
assign c21= g[21]|p[21]&gnpg_level5[6];
assign c22= gnpg_level1[14]|pp_level1[14]&gnpg_level5[6];
assign sum[22]= p[22]^c21;
assign sum[23]= p[23]^c22;
assign sum[24]= p[24]^gnpg_level6[7];
wire c24,c25;
assign c24= g[24]|p[24]&gnpg_level5[7];
assign c25= gnpg_level1[16]|pp_level1[16]&gnpg_level5[7];
assign sum[25]= p[25]^c24;
assign sum[26]= p[26]^c25;
assign sum[27]= p[27]^gnpg_level6[8];
wire c27,c28;
assign c27= g[27]|p[27]&gnpg_level6[8];
assign c28= gnpg_level1[18]|pp_level1[18]&gnpg_level6[8];
assign sum[28]= p[28]^c27;
assign sum[29]= p[29]^c28;
assign sum[30]= p[30]^gnpg_level6[9];
wire c30,c31;
assign c30= g[30]|p[30]&gnpg_level6[9];
assign c31= gnpg_level1[20]|pp_level1[20]&gnpg_level6[9];
assign sum[31]= p[31]^c30;
assign sum[32]= p[32]^c31;
assign sum[33]= p[33]^gnpg_level6[10];
wire c33,c34;
assign c33= g[33]|p[33]&gnpg_level6[10];
assign c34= gnpg_level1[22]|pp_level1[22]&gnpg_level6[10];
assign sum[34]= p[34]^c33;
assign sum[35]= p[35]^c34;
assign sum[36]= p[36]^gnpg_level6[11];
wire c36,c37;
assign c36= g[36]|p[36]&gnpg_level6[11];
assign c37= gnpg_level1[24]|pp_level1[24]&gnpg_level6[11];
assign sum[37]= p[37]^c36;
assign sum[38]= p[38]^c37;
assign sum[39]= p[39]^gnpg_level6[12];
wire c39,c40;
assign c39= g[39]|p[39]&gnpg_level6[12];
assign c40= gnpg_level1[26]|pp_level1[26]&gnpg_level6[12];
assign sum[40]= p[40]^c39;
assign sum[41]= p[41]^c40;
assign sum[42]= p[42]^gnpg_level6[13];
wire c42,c43;
assign c42= g[42]|p[42]&gnpg_level6[13];
assign c43= gnpg_level1[28]|pp_level1[28]&gnpg_level6[13];
assign sum[43]= p[43]^c42;
assign sum[44]= p[44]^c43;
assign sum[45]= p[45]^gnpg_level6[14];
wire c45,c46;
assign c45= g[45]|p[45]&gnpg_level6[14];
assign c46= gnpg_level1[30]|pp_level1[30]&gnpg_level6[14];
assign sum[46]= p[46]^c45;
assign sum[47]= p[47]^c46;
assign sum[48]= p[48]^gnpg_level6[15];
wire c48,c49;
assign c48= g[48]|p[48]&gnpg_level6[15];
assign c49= gnpg_level1[32]|pp_level1[32]&gnpg_level6[15];
assign sum[49]= p[49]^c48;
assign sum[50]= p[50]^c49;
assign sum[51]= p[51]^gnpg_level7[0];
wire c51,c52;
assign c51= g[51]|p[51]&gnpg_level7[0];
assign c52= gnpg_level1[34]|pp_level1[34]&gnpg_level7[0];
assign sum[52]= p[52]^c51;
assign sum[53]= p[53]^c52;
assign sum[54]= p[54]^gnpg_level7[1];
wire c54,c55;
assign c54= g[54]|p[54]&gnpg_level7[1];
assign c55= gnpg_level1[36]|pp_level1[36]&gnpg_level7[1];
assign sum[55]= p[55]^c54;
assign sum[56]= p[56]^c55;
assign sum[57]= p[57]^gnpg_level7[2];
wire c57,c58;
assign c57= g[57]|p[57]&gnpg_level7[2];
assign c58= gnpg_level1[38]|pp_level1[38]&gnpg_level7[2];
assign sum[58]= p[58]^c57;
assign sum[59]= p[59]^c58;
assign sum[60]= p[60]^gnpg_level7[3];
wire c60,c61;
assign c60= g[60]|p[60]&gnpg_level7[3];
assign c61= gnpg_level1[40]|pp_level1[40]&gnpg_level7[3];
assign sum[61]= p[61]^c60;
assign sum[62]= p[62]^c61;
assign sum[63]= p[63]^gnpg_level7[4];

endmodule

module P_G_gen_cs_64_index_3 (a,b,cin,p,g);
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

