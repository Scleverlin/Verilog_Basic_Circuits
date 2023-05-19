/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off SELRANGE */
/* verilator lint_off UNOPTFLAT */
module shi_pg_gen_2 (a,b,cin,pp,gnpg,p);

input [16:1]a;
input [16:1]b;
input cin;
output [15:0]pp;
output [15:0]gnpg;
output [16:1]p;
wire [16:1]g;

assign p=a^b;
assign g=a&b;

//level1
wire  [7:0] gnpg_level1;
wire  [7:0] pp_level1;
genvar i;
generate
     for (i = 0;i<8 ;i=i+1 ) begin
        assign gnpg_level1[i]=g[i*2+2]|p[i*2+2]&g[2*i+1];  // gnpg[0]=g2+p2g1
        assign pp_level1[i]=p[i*2+2]&p[i*2+1];              // pp[0]=p2p1
   end
endgenerate

//level2 
wire  [7:0] gnpg_level2;
wire  [7:0] pp_level2;
assign gnpg_level2[0]=gnpg_level1[0];
assign pp_level2[0]=pp_level1[0];


generate
    for (i = 1;i<8 ;i=i+1 ) begin
        assign gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[i-1];  
        assign pp_level2[i]=pp_level1[i]&pp_level1[i-1];
   end
endgenerate

//level3 
wire [7:0] gnpg_level3;
wire [7:0] pp_level3;
assign gnpg_level3[0]=gnpg_level2[0];
assign pp_level3[0]=pp_level2[0];
assign gnpg_level3[1]=gnpg_level2[1];
assign pp_level3[1]=pp_level2[1];

generate
    for (i = 2;i<8 ;i=i+1 ) begin
        assign gnpg_level3[i]=gnpg_level2[i]|pp_level2[i]&gnpg_level2[i-2]; 
        assign pp_level3[i]=pp_level2[i]&pp_level2[i-2];
   end
endgenerate
// level 4
wire [3:0] gnpg_level4;
wire [3:0] pp_level4;

generate
    for (i = 0;i<4 ;i=i+1 ) begin
        assign gnpg_level4[i]= gnpg_level3[i+4]|pp_level3[i+4]&gnpg_level3[i];
        assign pp_level4[i]= pp_level3[i+4]&pp_level3[i];
   end
endgenerate
//level 5 for every bit

assign gnpg[0]=g[1];
assign pp[0]=p[1];
assign gnpg[1]=gnpg_level1[0];
assign pp[1]=pp_level1[0];

assign gnpg[2]= g[3]|p[3]&gnpg[1];
assign pp[2]= p[3]&pp[1];
assign gnpg[3]= gnpg_level3[1];
assign pp[3]= pp_level3[1];
assign gnpg[4]= g[5]|p[5]&gnpg[3];
assign pp[4]= p[5]&pp[3];

assign gnpg[5]= gnpg_level3[2];
assign pp[5]= pp_level3[2];
assign gnpg[6]= g[7]|p[7]&gnpg[5];
assign pp[6]= p[7]&pp[5];

assign gnpg[7]= gnpg_level3[3];
assign pp[7]= pp_level3[3];
assign gnpg[8]= g[9]|p[9]&gnpg[7];
assign pp[8]= p[9]&pp[7];

assign gnpg[9]= gnpg_level4[0];
assign pp[9]= pp_level4[0];
assign gnpg[10]= g[11]|p[11]&gnpg[9];
assign pp[10]= p[11]&pp[9];

assign gnpg[11]= gnpg_level4[1];
assign pp[11]= pp_level4[1];
assign gnpg[12]= g[13]|p[13]&gnpg[11];
assign pp[12]= p[13]&pp[11];

assign gnpg[13]= gnpg_level4[2];
assign pp[13]= pp_level4[2];
assign gnpg[14]= g[15]|p[15]&gnpg[13];
assign pp[14]= p[15]&pp[13];

assign gnpg[15]= gnpg_level4[3];
assign pp[15]= pp_level4[3];

endmodule

module CLA_HAN_PG_16 (a,b,cin,sum,cout);
input [16:1]a;
input [16:1]b;
input cin;
output [16:1]sum;
output cout;
wire [16:1]p;
wire [15:0]gnpg;
wire [15:0]c;
wire [15:0]pp;

shi_pg_gen_2 u0 (a,b,cin,pp,gnpg,p);
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

assign cout=gnpg[15]|pp[15]&cin;

assign sum[1]=p[1]^c[0];
assign sum[16:2]=p[16:2]^c[15:1];
endmodule
