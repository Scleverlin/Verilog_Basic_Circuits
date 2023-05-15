/* verilator lint_off UNUSEDSIGNAL */
module BK_adder_8bit (
    a,b,cin,sum,cout
);
input [8:1]a,b;
input cin;
output [8:1]sum;
output cout;
wire [8:0]p,g;
p_g_gen p_g_gen_0(a,b,p,g,cin);

//level1
wire [3:0]gnpg_level1;
wire [3:0]pp;



assign gnpg_level1[0]=g[1]|p[1]&g[0];
assign gnpg_level1[1]=g[3]|p[3]&g[2];
assign gnpg_level1[2]=g[5]|p[5]&g[4];
assign gnpg_level1[3]=g[7]|p[7]&g[6];

assign pp[0]=p[1]&p[0];
assign pp[1]=p[3]&p[2];
assign pp[2]=p[5]&p[4];
assign pp[3]=p[7]&p[6];



//level2
wire [1:0]gnpg_level2;
wire pppp;


assign gnpg_level2[0]=gnpg_level1[1]|(pp[1]&gnpg_level1[0]);
assign gnpg_level2[1]=gnpg_level1[3]|(pp[3]&gnpg_level1[2]);
assign pppp=pp[3]&pp[2];

//level3

wire complex_gnpg;
assign complex_gnpg=gnpg_level2[1]|gnpg_level2[0]&pppp;


assign cout =g[8]|p[8]&complex_gnpg;
assign sum[1]=p[1]^cin;
assign sum[2]=p[2]^gnpg_level1[0];
wire tmp1;
assign tmp1=g[2]|p[2]&gnpg_level1[0]; //c2
assign sum[3]=p[3]^tmp1;
assign sum[4]=p[4]^gnpg_level2[0];//c3
wire tmp2;
assign tmp2=g[4]|p[4]&gnpg_level2[0];//c4
assign sum[5]=p[5]^tmp2;
wire tmp3;
assign tmp3=gnpg_level1[2]|pp[2]&gnpg_level2[0];//c5
assign sum[6]=p[6]^tmp3;
wire tmp4;
assign tmp4=g[6]|p[6]& tmp3 ;//c6
assign sum[7]=p[7]^tmp4;
assign sum[8]=p[8]^complex_gnpg;//c7



endmodule //BK_adder_8bit

module p_g_gen(a,b,p,g,cin);
input [8:1]a,b;
output [8:0]p,g;
input cin;
assign p[0]=0;
assign g[0]=cin;
assign g[8:1]=a[8:1]&b[8:1];
assign p[8:1]=a[8:1]^b[8:1];
endmodule

