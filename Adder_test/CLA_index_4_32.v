/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off SELRANGE */
/* verilator lint_off UNOPTFLAT */


module CLA_index_4_32 (a,b,cin,sum,cout);

input [63:0]a;
input [63:0]b;
input cin;
output [63:0]sum;
output cout;
wire c;

CLA_index_4_32_block  shi (a[31:0],b[31:0],cin,sum[31:0],c);
CLA_index_4_32_block  shi1 (a[63:32],b[63:32],c,sum[63:32],cout);

endmodule

module shi_pg_gen_index_4_32 (a,b,cin,pp,gnpg,p);

input [32:1]a;
input [32:1]b;
input cin;
output [31:0]pp;
output [31:0]gnpg;
output [32:1]p;
wire [32:1]g;

assign p=a^b;
assign g=a&b;

//level1
wire  [15:0] gnpg_level1;
wire  [15:0] pp_level1;
genvar i;
generate
     for (i = 0;i<16 ;i=i+1 ) begin
        assign gnpg_level1[i]=g[i*2+2]|p[i*2+2]&g[2*i+1];  // gnpg[0]=g2+p2g1
        assign pp_level1[i]=p[i*2+2]&p[i*2+1];              // pp[0]=p2p1
   end
endgenerate

//level2 
wire  [7:0] gnpg_level2;
wire  [7:0] pp_level2;

generate
    for (i = 0;i<8 ;i=i+1 ) begin
        assign gnpg_level2[i]=gnpg_level1[2*i+1]|pp_level1[2*i+1]&gnpg_level1[2*i];  
        assign pp_level2[i]=pp_level1[2*i+1]&pp_level1[2*i];
   end
endgenerate

//level3 
wire [7:0] gnpg_level3;
wire [7:0] pp_level3;
assign gnpg_level3[0]=gnpg_level2[0];
assign pp_level3[0]=pp_level2[0];
generate
    for (i = 1;i<8 ;i=i+1 ) begin
        assign gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[i-1]; 
        assign pp_level3[i]=pp_level2[i]&pp_level2[i-1];
   end
endgenerate

// level 4
wire [7:0] gnpg_level4;
wire [7:0] pp_level4;
assign gnpg_level4[0]=gnpg_level3[0];
assign pp_level4[0]=pp_level3[0];
assign gnpg_level4[1]=gnpg_level3[1];
assign pp_level4[1]=pp_level3[1];
generate
    for (i = 2;i<8 ;i=i+1 ) begin
        assign gnpg_level4[i]= gnpg_level3[i]|pp_level3[i]&gnpg_level3[i-2];
        assign pp_level4[i]= pp_level3[i]&pp_level3[i-2];
   end
endgenerate
//level 5 
wire [3:0]gnpg_level5;
wire [3:0]pp_level5;

generate
    for (i = 0;i<4 ;i=i+1 ) begin
        assign gnpg_level5[i]= gnpg_level4[i+4]|pp_level4[i+4]&gnpg_level4[i];
        assign pp_level5[i]= pp_level4[i+4]&pp_level4[i];
   end
endgenerate

//level 6 for every bit
assign gnpg[0]=g[1];
assign pp[0]=p[1];
assign gnpg[1]=gnpg_level1[0];
assign pp[1]=pp_level1[0];

assign gnpg[2]= g[3]|p[3]&gnpg[1];
assign pp[2]= p[3]&pp[1];
assign gnpg[3]= gnpg_level4[0];
assign pp[3]= pp_level4[0];
assign gnpg[4]= g[5]|p[5]&gnpg[3];
assign pp[4]= p[5]&pp[3];

assign gnpg[5]= gnpg_level1[2]|pp_level1[2]&gnpg[3];
assign pp[5]= pp_level1[2]&pp[3];
assign gnpg[6]= g[7]|p[7]&gnpg[5];
assign pp[6]= p[7]&pp[5];

assign gnpg[7]= gnpg_level4[1];
assign pp[7]= pp_level4[1];
assign gnpg[8]= g[9]|p[9]&gnpg[7];
assign pp[8]= p[9]&pp[7];

assign gnpg[9]= gnpg_level1[4]|pp_level1[4]&gnpg[7];
assign pp[9]= pp_level1[4]&pp[7];
assign gnpg[10]= g[11]|p[11]&gnpg[9];
assign pp[10]= p[11]&pp[9];

assign gnpg[11]= gnpg_level4[2];
assign pp[11]= pp_level4[2];
assign gnpg[12]= g[13]|p[13]&gnpg[11];
assign pp[12]= p[13]&pp[11];

assign gnpg[13]=gnpg_level1[6]|pp_level1[6]&gnpg[11];
assign pp[13]= pp_level1[6]&pp[11];
assign gnpg[14]= g[15]|p[15]&gnpg[13];
assign pp[14]= p[15]&pp[13];

assign gnpg[15]= gnpg_level4[3];
assign pp[15]= pp_level4[3];

assign gnpg[16]= g[17]|p[17]&gnpg[15];
assign pp[16]= p[17]&pp[15];

assign gnpg[17]= gnpg_level1[8]|pp_level1[8]&gnpg[15];
assign pp[17]= pp_level1[8]&pp[15];

assign gnpg[18]= g[19]|p[19]&gnpg[17];
assign pp[18]= p[19]&pp[17];

assign gnpg[19]= gnpg_level5[0];
assign pp[19]= pp_level5[0];

assign gnpg[20]= g[21]|p[21]&gnpg[19];
assign pp[20]= p[21]&pp[19];

assign gnpg[21]= gnpg_level1[10]|pp_level1[10]&gnpg[19];
assign pp[21]= pp_level1[10]&pp[19];

assign gnpg[22]= g[23]|p[23]&gnpg[21];
assign pp[22]= p[23]&pp[21];

assign gnpg[23]= gnpg_level5[1];
assign pp[23]= pp_level5[1];

assign gnpg[24]= g[25]|p[25]&gnpg[23];
assign pp[24]= p[25]&pp[23];

assign gnpg[25]= gnpg_level1[12]|pp_level1[12]&gnpg[23];
assign pp[25]= pp_level1[12]&pp[23];

assign gnpg[26]= g[27]|p[27]&gnpg[25];
assign pp[26]= p[27]&pp[25];

assign gnpg[27]= gnpg_level5[2];
assign pp[27]= pp_level5[2];

assign gnpg[28]= g[29]|p[29]&gnpg[27];
assign pp[28]= p[29]&pp[27];

assign gnpg[29]= gnpg_level1[14]|pp_level1[14]&gnpg[27];
assign pp[29]= pp_level1[14]&pp[27];

assign gnpg[30]= g[31]|p[31]&gnpg[29];
assign pp[30]= p[31]&pp[29];

assign gnpg[31]= gnpg_level5[3];
assign pp[31]= pp_level5[3];

endmodule

module CLA_index_4_32_block (a,b,cin,sum,cout);
input [32:1]a;
input [32:1]b;
input cin;
output [32:1]sum;
output cout;
wire [32:1]p;
wire [31:0]gnpg;
wire [31:0]c;
wire [31:0]pp;

shi_pg_gen_index_4_32 u0 (a,b,cin,pp,gnpg,p);
assign c[0]=cin;
assign c[1]=gnpg[0]|pp[0]&cin;
assign c[2]=gnpg[1]|pp[1]&cin;
assign c[3]=gnpg[2]|pp[2]&cin;
assign c[4]=gnpg[3]|pp[3]&cin;
assign c[5]=gnpg[4]|pp[4]&cin;
assign c[6]=gnpg[5]|pp[5]&cin;
assign c[7]=gnpg[6]|pp[6]&cin;
assign c[8]=gnpg[7]|pp[7]&cin;
assign c[9]=gnpg[8]|pp[8]&cin;
assign c[10]=gnpg[9]|pp[9]&cin;
assign c[11]=gnpg[10]|pp[10]&cin;
assign c[12]=gnpg[11]|pp[11]&cin;
assign c[13]=gnpg[12]|pp[12]&cin;
assign c[14]=gnpg[13]|pp[13]&cin;
assign c[15]=gnpg[14]|pp[14]&cin;
assign c[16]=gnpg[15]|pp[15]&cin;
assign c[17]=gnpg[16]|pp[16]&cin;
assign c[18]=gnpg[17]|pp[17]&cin;
assign c[19]=gnpg[18]|pp[18]&cin;
assign c[20]=gnpg[19]|pp[19]&cin;
assign c[21]=gnpg[20]|pp[20]&cin;
assign c[22]=gnpg[21]|pp[21]&cin;
assign c[23]=gnpg[22]|pp[22]&cin;
assign c[24]=gnpg[23]|pp[23]&cin;
assign c[25]=gnpg[24]|pp[24]&cin;
assign c[26]=gnpg[25]|pp[25]&cin;
assign c[27]=gnpg[26]|pp[26]&cin;
assign c[28]=gnpg[27]|pp[27]&cin;
assign c[29]=gnpg[28]|pp[28]&cin;
assign c[30]=gnpg[29]|pp[29]&cin;
assign c[31]=gnpg[30]|pp[30]&cin;
assign cout=gnpg[31]|pp[31]&cin;
assign sum[1]=p[1]^c[0];
assign sum[32:2]=p[32:2]^c[31:1];
endmodule
