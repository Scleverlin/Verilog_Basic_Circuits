module KS_OP_8bit (
    a,b,cin,sum,cout
);
input [7:0]a,b;
input cin;
output [7:0]sum;
output cout;
wire [7:0]p,g;

p_g_gen p_g_gen_inst(
    .a(a),
    .b(b),
    .p(p),
    .g(g)
);

wire c0,c1,c2,c3,c4,c5,c6;
wire [6:0]pp;

assign pp[0] = p[0]&p[1];
assign pp[1] = p[2]&p[1];
assign pp[2] = p[3]&p[2];
assign pp[3] = p[4]&p[3];
assign pp[4] = p[5]&p[4];
assign pp[5] = p[6]&p[5];
assign pp[6] = p[7]&p[6];

wire g1_p1g0;

AO AO_P_G_1(
    .a(p[1]),
    .b(g[0]),
    .c(g[1]),
    .out(g1_p1g0)
);
wire g2_p2g1; 

AO AO_P_G_2(
    .a(p[2]),
    .b(g[1]),
    .c(g[2]),
    .out(g2_p2g1)
);

wire g3_p3g2;

AO AO_P_G_3(
    .a(p[3]),
    .b(g[2]),
    .c(g[3]),
    .out(g3_p3g2)
);

wire g4_p4g3;

AO AO_P_G_4(
    .a(p[4]),
    .b(g[3]),
    .c(g[4]),
    .out(g4_p4g3)
);

wire g5_p5g4;

AO AO_P_G_5(
    .a(p[5]),
    .b(g[4]),
    .c(g[5]),
    .out(g5_p5g4)
);

wire g6_p6g5;

AO AO_P_G_6(
    .a(p[6]),
    .b(g[5]),
    .c(g[6]),
    .out(g6_p6g5)
);

wire g7_p7g6;

AO AO_P_G_7(
    .a(p[7]),
    .b(g[6]),
    .c(g[7]),
    .out(g7_p7g6)
);

AO AO_1(
    .a(p[0]),
    .b(cin),
    .c(g[0]),
    .out(c0)
);

AO AO_2(
    .a(pp[0]),
    .b(cin),
    .c(g1_p1g0),
    .out(c1)
);

AO AO_3(
    .a(pp[1]),
    .b(c0),
    .c(g2_p2g1),
    .out(c2)
);

AO AO_4(
    .a(pp[2]),
    .b(c1),
    .c(g3_p3g2),
    .out(c3)
);

AO AO_5(
    .a(pp[3]),
    .b(c2),
    .c(g4_p4g3),
    .out(c4)
);
AO AO_6(
    .a(pp[4]),
    .b(c3),
    .c(g5_p5g4),
    .out(c5)
);

AO AO_7(
    .a(pp[5]),
    .b(c4),
    .c(g6_p6g5),
    .out(c6)
);

AO AO_8(
    .a(pp[6]),
    .b(c5),
    .c(g7_p7g6),
    .out(cout)
);

assign sum[0]=p[0]^cin;
assign sum[1]=p[1]^c0;
assign sum[2]=p[2]^c1;
assign sum[3]=p[3]^c2;
assign sum[4]=p[4]^c3;
assign sum[5]=p[5]^c4;
assign sum[6]=p[6]^c5;
assign sum[7]=p[7]^c6;

endmodule //KS_OP_8bit

module p_g_gen(a,b,p,g);

input [7:0]a,b;
output [7:0]p;
output [7:0]g;
// output [7:0]p_or;

assign p = a ^ b;
assign g = a & b;
// assign p_or = a | b;
endmodule

module AO(
    a,b,c,out
);
input a,b,c;
output out;
wire aoi;
AOI aoi_gate(
    a,b,c,aoi
);
INV inv_gate(
    aoi,out
);
endmodule

module AOI (
    a,b,c,out
);
input a,b,c;
output out;
wire ab;
and and_gate (ab, a, b);
nor nor_gate (out, ab, c);
endmodule //new_adder

module INV (
    a,out
);
input a;
output out;

not inv_gate (out,a);
endmodule