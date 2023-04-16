module ks_adder_op_3_64 (
    a,b,cin,sum,cout
);

input [63:0] a;
input [63:0] b;
input cin;
output [63:0] sum;
output cout;

wire c1,c2,c3,c4,c5,c6,c7;
ks_adder_3 u0 (.a(a[7:0]), .b(b[7:0]), .cin(cin), .sum(sum[7:0]), .cout(c1));
ks_adder_3 u1 (.a(a[15:8]), .b(b[15:8]), .cin(c1), .sum(sum[15:8]), .cout(c2));
ks_adder_3 u2 (.a(a[23:16]), .b(b[23:16]), .cin(c2), .sum(sum[23:16]), .cout(c3));
ks_adder_3 u3 (.a(a[31:24]), .b(b[31:24]), .cin(c3), .sum(sum[31:24]), .cout(c4));
ks_adder_3 u4 (.a(a[39:32]), .b(b[39:32]), .cin(c4), .sum(sum[39:32]), .cout(c5));
ks_adder_3 u5 (.a(a[47:40]), .b(b[47:40]), .cin(c5), .sum(sum[47:40]), .cout(c6));
ks_adder_3 u6 (.a(a[55:48]), .b(b[55:48]), .cin(c6), .sum(sum[55:48]), .cout(c7));
ks_adder_3 u7 (.a(a[63:56]), .b(b[63:56]), .cin(c7), .sum(sum[63:56]), .cout(cout));
endmodule //ks_adder_op_3_64



module ks_adder_3 (a, b, cin, sum, cout);
  input [7:0] a;
  input [7:0] b;
  wire c0;
  wire c1;
  wire c2;
  wire c3;
  wire c4;
  wire c5;
  wire c6;
  input cin;
  output cout;
  wire g;
  wire [7:0] p;
  wire [5:0] ppp;
  output [7:0] sum;
  wire [5:0] g_png_ppg;
  wire g_png;
  wire pp;
sum_gen sum_gen (cin,c0,c1,c2,c3,c4,c5,c6,p,sum);

  AO AO_1 (
    .a(p[0]),
    .b(cin),
    .c(g),
    .out(c0)
  );
  AO AO_2 (
    .a(pp),
    .b(cin),
    .c(g_png),
    .out(c1)
  );
  AO AO_3 (
    .a(ppp[0]),
    .b(c0),
    .c(g_png_ppg[0]),
    .out(c2)
  );
  AO AO_4 (
    .a(ppp[1]),
    .b(c1),
    .c(g_png_ppg[1]),
    .out(c3)
  );
  AO AO_5 (
    .a(ppp[2]),
    .b(c2),
    .c(g_png_ppg[2]),
    .out(c4)
  );
  AO AO_6 (
    .a(ppp[3]),
    .b(c3),
    .c(g_png_ppg[3]),
    .out(c5)
  );
  AO AO_7 (
    .a(ppp[4]),
    .b(c4),
    .c(g_png_ppg[4]),
    .out(c6)
  );
  AO AO_8 (
    .a(ppp[5]),
    .b(c5),
    .c(g_png_ppg[5]),
    .out(cout)
  );

  p_g_gen p_g_gen_inst (
    .a(a),
    .b(b),
    .g(g),
    .p(p),
    .ppp(ppp),
    .g_png_ppg(g_png_ppg),
    .g_png(g_png),
    .pp(pp)
  );
endmodule


module p_g_gen(a, b, p,g,ppp,g_png_ppg,g_png,pp);
  input [7:0] a;
  input [7:0] b;
output g_png;
  output pp;
  output g;
  output [7:0] p;
  output [5:0] ppp;
  output [5:0]g_png_ppg;
  assign p = a ^ b;
  assign g = b[0] & a[0];
  assign pp = (a[1] ^ b[1])&(a[0] ^ b[0]);
  assign g_png =  b[1] & a[1] | ((b[1] ^a[1])&b[0] & a[0]);
  assign g_png_ppg[5:0] = (b[7:2] & a[7:2] )| ((b[7:2] ^a[7:2])&b[6:1] & a[6:1]) | ((b[7:2] ^a[7:2])& (b[6:1] ^a[6:1])&b[5:0] & a[5:0]);
  assign ppp[5:0] = (b[7:2] ^a[7:2])& (b[6:1] ^a[6:1])& (b[5:0] ^a[5:0]);
endmodule

module sum_gen ( cin, c0, c1, c2, c3, c4, c5, c6, p, sum );
  input [7:0] p;
  output [7:0] sum;
  input cin, c0, c1, c2, c3, c4, c5, c6;
assign sum[0]=p[0]^cin;
assign sum[1]=p[1]^c0;
assign sum[2]=p[2]^c1;
assign sum[3]=p[3]^c2;
assign sum[4]=p[4]^c3;
assign sum[5]=p[5]^c4;
assign sum[6]=p[6]^c5;
assign sum[7]=p[7]^c6;
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
