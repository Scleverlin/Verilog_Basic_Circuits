module CLA_v5_64 (a,b,cin,sum,cout);

input [63:0]a,b;
input cin;
output [63:0]sum;
output cout;

wire c1,c2,c3,c4,c5,c6,c7;

CLA_v5_8_bit u1 (a[7:0],b[7:0],cin,sum[7:0],c1);
CLA_v5_8_bit u2 (a[15:8],b[15:8],c1,sum[15:8],c2);
CLA_v5_8_bit u3 (a[23:16],b[23:16],c2,sum[23:16],c3);
CLA_v5_8_bit u4 (a[31:24],b[31:24],c3,sum[31:24],c4);
CLA_v5_8_bit u5 (a[39:32],b[39:32],c4,sum[39:32],c5);
CLA_v5_8_bit u6 (a[47:40],b[47:40],c5,sum[47:40],c6);
CLA_v5_8_bit u7 (a[55:48],b[55:48],c6,sum[55:48],c7);
CLA_v5_8_bit u8 (a[63:56],b[63:56],c7,sum[63:56],cout);

endmodule

module CLA_v5_8_bit (a,b,cin,sum,cout);

input [7:0]a,b;
input cin;
output [7:0]sum;
output cout;
wire c0_r;
wire cin_r;
assign cin_r = ~cin;
wire [3:0]nandpp;
wire [2:0]pp;
wire [7:0]p;
wire aoi1,aoi2,aoi3,aoi4,ao1,ao2,ao3;
p_g_complex_gen u1 (a,b,cin,p,aoi1,aoi2,aoi3,aoi4,ao1,ao2,ao3,nandpp,pp,c0_r);
wire c1;
OAI21_X1 for_c1 (cin_r,nandpp[0],aoi1,c1);
wire c2;
OAI21_X1 for_c2 (c0_r,nandpp[1],aoi2,c2);
wire c3_r;
AOI21_X1 for_c3_r (c1,pp[0],ao1,c3_r);
wire c4_r;
AOI21_X1 for_c4_r (c2,pp[1],ao2,c4_r);
wire c5;
OAI21_X1 for_c5 (c3_r,nandpp[2],aoi3,c5);
wire c6;
OAI21_X1 for_c6 (c4_r,nandpp[3],aoi4,c6);
wire c7_r;
AOI21_X1 for_c7_r (c5,pp[2],ao3,c7_r);
assign sum[0]=p[0]^cin;
assign sum[1]=p[1]^(~c0_r);
assign sum[2]=p[2]^c1;
assign sum[3]=p[3]^c2;
assign sum[4]=p[4]^(~c3_r);
assign sum[5]=p[5]^(~c4_r);
assign sum[6]=p[6]^c5;
assign sum[7]=p[7]^c6;
assign cout =~c7_r;

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

module p_g_complex_gen(a,b,cin,p,aoi1,aoi2,aoi3,aoi4,ao1,ao2,ao3,nandpp,pp,c0_r);
input [7:0]a,b;
input cin;
output [7:0]p;
wire [7:0]g;
output aoi1,aoi2,aoi3,aoi4,ao1,ao2,ao3,c0_r;
assign p=a^b;
assign g=a&b;
output [3:0]nandpp;
output [2:0]pp;
NAND2_X1 u1 (p[1],p[0],nandpp[0]);
NAND2_X1 u2 (p[2],p[1],nandpp[1]);
NAND2_X1 u3 (p[5],p[4],nandpp[2]);
NAND2_X1 u4 (p[6],p[5],nandpp[3]);
assign pp[0]=p[3]&p[2];
assign pp[1]=p[4]&p[3];
assign pp[2]=p[7]&p[6];
assign ao1= g[3]|(p[3]&g[2]);
assign ao2= g[4]|(p[4]&g[3]);
assign ao3= g[7]|(p[7]&g[6]);
AOI21_X1 U1 (p[0],cin,g[0],c0_r);
AOI21_X1 u5 (p[1],g[0],g[1],aoi1);
AOI21_X1 u6 (p[2],g[1],g[2],aoi2);
AOI21_X1 u7 (p[5],g[4],g[5],aoi3);
AOI21_X1 u8 (p[6],g[5],g[6],aoi4);
endmodule

module NAND2_X1 (
    a,b,out
);
input a,b;
output out;
assign out = ~(a & b);
endmodule

// module INV_X1 (
//     a,out
// );
// input a;
// output out;
// assign out = ~a;
// endmodule
