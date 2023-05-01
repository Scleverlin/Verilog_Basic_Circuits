module CLA_V4_64 (a,b,cin,sum,cout);

input [63:0]a,b;
input cin;
output [63:0]sum;
output cout;

wire c1,c2,c3,c4,c5,c6,c7;

CLA_v4_8_bit u1 (a[7:0],b[7:0],cin,sum[7:0],c1);
CLA_v4_8_bit u2 (a[15:8],b[15:8],c1,sum[15:8],c2);
CLA_v4_8_bit u3 (a[23:16],b[23:16],c2,sum[23:16],c3);
CLA_v4_8_bit u4 (a[31:24],b[31:24],c3,sum[31:24],c4);
CLA_v4_8_bit u5 (a[39:32],b[39:32],c4,sum[39:32],c5);
CLA_v4_8_bit u6 (a[47:40],b[47:40],c5,sum[47:40],c6);
CLA_v4_8_bit u7 (a[55:48],b[55:48],c6,sum[55:48],c7);
CLA_v4_8_bit u8 (a[63:56],b[63:56],c7,sum[63:56],cout);

endmodule

module CLA_v4_8_bit (a,b,cin,sum,cout);

input [7:0]a,b;
input cin;
output [7:0]sum;
output cout;


wire [7:0]p;

wire [6:0]nandpp;
wire [7:0]aoi_gp;

p_g_complex_gen u1 (a,b,cin,p,aoi_gp,nandpp);

wire c0,c1,c2,c3,c4,c5,c6;
INV_X1 u0 (aoi_gp[0],c0);
OAI21_X1 for_c1 (nandpp[0],~cin,aoi_gp[1],c1);
OAI21_X1 for_c2 (nandpp[1],~c0,aoi_gp[2],c2);
OAI21_X1 for_c3 (nandpp[2],~c1,aoi_gp[3],c3);
OAI21_X1 for_c4 (nandpp[3],~c2,aoi_gp[4],c4);
OAI21_X1 for_c5 (nandpp[4],~c3,aoi_gp[5],c5);
OAI21_X1 for_c6 (nandpp[5],~c4,aoi_gp[6],c6);
OAI21_X1 for_cout (nandpp[6],~c5,aoi_gp[7],cout);

assign sum[0] =p[0]^cin;
assign sum[1] =p[1]^c0;
assign sum[2] =p[2]^c1;
assign sum[3] =p[3]^c2;
assign sum[4] =p[4]^c3;
assign sum[5] =p[5]^c4;
assign sum[6] =p[6]^c5;
assign sum[7] =p[7]^c6;
endmodule 

module AOI21_X1 (
    a,b,c,out
);
input a,b,c;
output out;
wire ab;
and and_gate (ab, a, b);
nor nor_gate (out, ab, c);
endmodule //new_adder


module OAI21_X1 (
    a,b,c,out
);
input a,b,c;
output out;
wire aorb;
or or_gate (aorb, a, b);
nand nor_gate (out, aorb, c);
endmodule 

module p_g_complex_gen(a,b,cin,p,aoi_gp,nandpp);
input [7:0]a,b;
input cin;
output [7:0]p;
wire [7:0]g;
output [7:0]aoi_gp;
output [6:0]nandpp;
assign p=a^b;
assign g=a&b;
AOI21_X1 u1 (p[0],cin,g[0],aoi_gp[0]);
AOI21_X1 u2 (p[1],g[0],g[1],aoi_gp[1]);
AOI21_X1 u3 (p[2],g[1],g[2],aoi_gp[2]);
AOI21_X1 u4 (p[3],g[2],g[3],aoi_gp[3]);
AOI21_X1 u5 (p[4],g[3],g[4],aoi_gp[4]);
AOI21_X1 u6 (p[5],g[4],g[5],aoi_gp[5]);
AOI21_X1 u7 (p[6],g[5],g[6],aoi_gp[6]);
AOI21_X1 u8 (p[7],g[6],g[7],aoi_gp[7]);
NAND2_X1 nand1 (p[1],p[0],nandpp[0]);
NAND2_X1 nand2 (p[2],p[1],nandpp[1]);
NAND2_X1 nand3 (p[3],p[2],nandpp[2]);
NAND2_X1 nand4 (p[4],p[3],nandpp[3]);
NAND2_X1 nand5 (p[5],p[4],nandpp[4]);
NAND2_X1 nand6 (p[6],p[5],nandpp[5]);
NAND2_X1 nand7 (p[7],p[6],nandpp[6]);
endmodule

module NAND2_X1 (
    a,b,out
);
input a,b;
output out;
assign out = ~(a & b);
endmodule

module INV_X1 (
    a,out
);
input a;
output out;
assign out = ~a;
endmodule
