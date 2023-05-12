/* verilator lint_off EOFNEWLINE */
/* verilator lint_off UNUSEDSIGNAL */
module ACA_br_version (
    a,b,cin,sum,cout
);
input [16:1]a,b;
input cin;
output [16:1]sum;
output cout;
wire [16:0]p,g;

p_g_gen u1 (a,b,cin,p,g);

//level1
wire [15:0]pp;
wire [15:0]gnpg_level1;
genvar i;

generate
    for (i=0;i<16;i=i+1) begin
       assign pp[i]=p[i+1]&p[i]; 
       assign gnpg_level1[i]=g[i+1]|(p[i+1]&g[i]);
    end
endgenerate

//level2

wire [13:0]gnpg_level2;
wire [9:0]pppp;
generate
    for (i=0;i<14;i=i+1) begin
       assign gnpg_level2[i]= gnpg_level1[i+2]|(pp[i+2]&gnpg_level1[i]);
    end
endgenerate
generate
    for (i=0;i<10;i=i+1) begin
  assign pppp[i]=pp[i+6]&pp[i+4]; //  pppp[0]=p7p6p5p4, pppp[1]=p8p7p6p5, pppp[2]=p9p8p7p6...
    end
 endgenerate

//level3

// wire [10:0]complex_p;
wire [9:0]complex_gnpg;
generate
    for (i=0;i<10;i=i+1) begin
         assign complex_gnpg[i]=gnpg_level2[i+4] | gnpg_level2[i]&pppp[i];
    end
endgenerate

wire for_6543;
assign for_6543=pp[5]&pp[3];
wire for_5423;
assign for_5423=pp[4]&pp[2];

assign sum[1]=p[1]^cin; 
assign sum[2]=p[2]^gnpg_level1[0];
wire tmp1;
assign tmp1=g[2]|p[2]&gnpg_level1[0];//210

assign sum[3]=p[3]^tmp1;
assign sum[4]=p[4]^gnpg_level2[0];//c3
wire tmp2;
// assign tmp2=g[4]|p[4]&gnpg_level2[0];//c4
assign tmp2=g[4]|p[4]&gnpg_level2[0];
assign sum[5]=p[5]^tmp2;
wire tmp4;
assign tmp4=for_5423&gnpg_level1[0]|gnpg_level2[2];
assign sum[6]=p[6]^tmp4;
wire tmp3;
assign tmp3= for_6543&tmp1| gnpg_level2[3] ;//3456+210
assign sum[7]=p[7]^tmp3;
assign sum[16:8]=p[16:8]^complex_gnpg[8:0];
assign cout=complex_gnpg[9];


endmodule //ACA_cla_version

module p_g_gen (a,b,cin,p,g);

input  [16:1] a,b;
input cin;
output [16:0] p,g;
assign p[0]=0;
assign g[0]=cin;
assign g[16:1]=a[16:1]&b[16:1];
assign p[16:1]=a[16:1]^b[16:1];
endmodule //p_g_gen
