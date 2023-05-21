/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNOPTFLAT */
module CLA_new_AO_8bit (
    a,b,cin,sum,cout
);
input [8:1]a,b;
input cin;
output [8:1]sum;
output cout;
wire [7:0]gnpg,pp;
wire [8:1]p;

p_g_gen_ao u0 (a,b,cin,gnpg,pp,p);
wire [7:1]c;
assign c[1]=gnpg[0]|pp[0]&cin;
assign c[2]=gnpg[1]|pp[1]&cin;
assign c[3]=gnpg[2]|pp[2]&cin;
assign c[4]=gnpg[3]|pp[3]&cin;
assign c[5]=gnpg[4]|pp[4]&cin;
assign c[6]=gnpg[5]|pp[5]&cin;
assign c[7]=gnpg[6]|pp[6]&cin;
assign cout=gnpg[7]|pp[7]&cin;
assign sum[1]=p[1]^cin;
assign sum[8:2]=p[8:2]^c[7:1];

endmodule //CLA_new_AO_8bit

module p_g_gen_ao (
    a,b,cin,gnpg,pp,p
);
input [8:1] a,b;
input cin;
wire [8:1]g;
output [8:1] p;
output [7:0] gnpg,pp;
assign p=a^b;
assign g=a&b;
assign gnpg[0]=g[1];
assign pp[0]=p[1];
assign gnpg[1]=g[2]|(g[1]&p[2]);
assign pp[1]=p[2]&p[1];
assign gnpg[2]=g[3]|p[3]&gnpg[1];
assign pp[2]=p[3]&pp[1];
assign gnpg[3]=g[4]|p[4]&gnpg[2];
assign pp[3]=p[4]&pp[2];
assign gnpg[4]=g[5]|p[5]&gnpg[3];
assign pp[4]=p[5]&pp[3];
assign gnpg[5]=g[6]|p[6]&gnpg[4];
assign pp[5]=p[6]&pp[4];
assign gnpg[6]=g[7]|p[7]&gnpg[5];
assign pp[6]=p[7]&pp[5];
assign gnpg[7]=g[8]|p[8]&gnpg[6];
assign pp[7]=p[8]&pp[6];
endmodule

