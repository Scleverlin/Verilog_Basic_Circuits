
module shi_pg_gen (a,b,p,cin,pp,gnpg);
input[8:1]a;
input[8:1]b;
input cin;
output [8:1]p;
wire [8:1] g;
assign p=a^b;
assign g=a&b;
output [7:0]pp;
output [7:0]gnpg;
//level1

wire [7:0]gnpg_level1;
wire [7:0]pp_level1;

assign gnpg_level1[0]=g[1];
assign pp_level1[0]=p[1];
genvar i;
generate
   for (i = 1;i<8 ;i=i+1 ) begin
        assign gnpg_level1[i]=g[i+1]|p[i+1]&g[i];
        assign pp_level1[i]=p[i+1]&p[i];
    end
endgenerate

//level2

wire [5:0]gnpg_level2;
wire [5:0]pp_level2;

assign gnpg_level2[0]=gnpg_level1[2]|pp_level1[2]&gnpg_level1[0];
assign pp_level2[0]=pp_level1[2]&pp_level1[0];

assign gnpg_level2[1]=gnpg_level1[3]|pp_level1[3]&gnpg_level1[1];
assign pp_level2[1]=pp_level1[3]&pp_level1[1];

assign gnpg_level2[2]=gnpg_level1[4];
assign pp_level2[2]=pp_level1[4];

assign gnpg_level2[3]=gnpg_level1[5];
assign pp_level2[3]=pp_level1[5];

assign gnpg_level2[4]=gnpg_level1[6]|pp_level1[6]&gnpg_level1[4];
assign pp_level2[4]=pp_level1[6]&pp_level1[4];

assign gnpg_level2[5]=gnpg_level1[7]|pp_level1[7]&gnpg_level1[5];
assign pp_level2[5]=pp_level1[7]&pp_level1[5];

//level 3
wire [3:0]gnpg_level3;
wire [3:0]pp_level3;
assign gnpg_level3[0]=gnpg_level2[2]|pp_level2[2]&gnpg_level2[0];
assign pp_level3[0]=pp_level2[2]&pp_level2[0];

assign gnpg_level3[1]=gnpg_level2[3]|pp_level2[3]&gnpg_level2[1];
assign pp_level3[1]=pp_level2[3]&pp_level2[1];

assign gnpg_level3[2]=gnpg_level2[4]|pp_level2[4]&gnpg_level2[0];
assign pp_level3[2]=pp_level2[4]&pp_level2[0];

assign gnpg_level3[3]=gnpg_level2[5]|pp_level2[5]&gnpg_level2[1];
assign pp_level3[3]=pp_level2[5]&pp_level2[1];

assign gnpg[0]=gnpg_level1[0];
assign pp[0]=pp_level1[0];

assign gnpg[1]=gnpg_level1[1];
assign pp[1]=pp_level1[1];

assign gnpg[2]=gnpg_level2[0];
assign pp[2]=pp_level2[0];

assign gnpg[3]=gnpg_level2[1];
assign pp[3]=pp_level2[1];

assign gnpg[4]=gnpg_level3[0];
assign pp[4]=pp_level3[0];

assign gnpg[5]=gnpg_level3[1];
assign pp[5]=pp_level3[1];

assign gnpg[6]=gnpg_level3[2];
assign pp[6]=pp_level3[2];

assign gnpg[7]=gnpg_level3[3];
assign pp[7]=pp_level3[3];

endmodule



module CLA_BKA_PG_8_bit (a,b,cin,sum,cout);
input [8:1]a;
input [8:1]b;
input cin;
output [8:1]sum;
output cout;

wire [8:1]p;
wire [7:0]gnpg;
wire [7:0]pp;

shi_pg_gen pg_gen (a,b,p,cin,pp,gnpg);

wire [7:1]c;

assign c[1]=gnpg[0]|pp[0]&cin;
assign c[2]=gnpg[1]|pp[1]&cin;
assign c[3]=gnpg[2]|pp[2]&cin;
assign c[4]=gnpg[3]|pp[3]&cin;
assign c[5]=gnpg[4]|pp[4]&cin;
assign c[6]=gnpg[5]|pp[5]&cin;
assign c[7]=gnpg[6]|pp[6]&cin;
assign cout=gnpg[7]|pp[7]&cin;
assign sum [1]=p[1]^cin;
assign sum [8:2]=p[8:2]^c[7:1];

endmodule