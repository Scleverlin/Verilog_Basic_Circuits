/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off SELRANGE */
/* verilator lint_off UNOPTFLAT */
module shi_pg_gen_2_8 (a,b,cin,pp,gnpg,p);

input [8:1]a;
input [8:1]b;
input cin;
output [7:0]pp;
output [7:0]gnpg;
output [8:1]p;
wire [8:1]g;

assign p=a^b;
assign g=a&b;

//level1
wire  [3:0] gnpg_level1;
wire  [3:0] pp_level1;
genvar i;
generate
     for (i = 0;i<4 ;i=i+1 ) begin
        assign gnpg_level1[i]=g[i*2+2]|p[i*2+2]&g[2*i+1];  // gnpg[0]=g2+p2g1
        assign pp_level1[i]=p[i*2+2]&p[i*2+1];              // pp[0]=p2p1
   end
endgenerate

//level2 
wire  [3:0] gnpg_level2;
wire  [3:0] pp_level2;
assign gnpg_level2[0]=gnpg_level1[0];
assign pp_level2[0]=pp_level1[0];

generate
    for (i = 1;i<3 ;i=i+1 ) begin
        assign gnpg_level2[i]=gnpg_level1[i]|pp_level1[i]&gnpg_level1[i-1];  
        assign pp_level2[i]=pp_level1[i]&pp_level1[i-1];
   end
endgenerate

//level3 
wire [1:0] gnpg_level3;
wire [1:0] pp_level3;
generate
    for (i = 0;i<2 ;i=i+1 ) begin
        assign gnpg_level3[i]=gnpg_level2[i+2]|pp_level2[i]&gnpg_level2[i]; 
        assign pp_level3[i]=pp_level2[i+2]&pp_level2[i];
   end
endgenerate
// level 4
assign gnpg[0]=g[1];
assign pp[0]=p[1];
assign gnpg[1]=gnpg_level1[0];
assign pp[1]=pp_level1[0];

assign gnpg[2]= g[3]|p[3]&gnpg[1];
assign pp[2]= p[3]&pp[1];
assign gnpg[3]= gnpg_level2[1];
assign pp[3]= pp_level2[1];
assign gnpg[4]= g[5]|p[5]&gnpg[3];
assign pp[4]= p[5]&pp[3];

assign gnpg[5]= gnpg_level3[0];
assign pp[5]= pp_level3[0];
assign gnpg[6]= g[7]|p[7]&gnpg[5];
assign pp[6]= p[7]&pp[5];
assign gnpg[7]= gnpg_level3[1];
assign pp[7]= pp_level3[1];
endmodule

module CLA_HAN_PG_8 (a,b,cin,sum,cout);
input [8:1]a;
input [8:1]b;
input cin;
output [8:1]sum;
output cout;
wire [8:1]p;
wire [7:0]gnpg;
wire [7:0]c;
wire [7:0]pp;

shi_pg_gen_2_8 u0 (a,b,cin,pp,gnpg,p);
assign c[0]=cin;
assign c[1]=gnpg[0]|pp[0]&cin;
assign c[2]=gnpg[1]|pp[1]&cin;
assign c[3]=gnpg[2]|pp[2]&cin;
assign c[4]=gnpg[3]|pp[3]&cin;
assign c[5]=gnpg[4]|pp[4]&cin;
assign c[6]=gnpg[5]|pp[5]&cin;
assign c[7]=gnpg[6]|pp[6]&cin;
assign cout=gnpg[7]|pp[7]&cin;
assign sum[1]=p[1]^c[0];
assign sum[8:2]=p[8:2]^c[7:1];
endmodule
