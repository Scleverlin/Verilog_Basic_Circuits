module ks_op_64_bit (
  a,b,cin,sum,cout
);

input [63:0]a,b;
input cin;
output [63:0]sum;
output cout;

wire  c1,c2,c3,c4,c5,c6,c7;

ks_adder_2 u1 (a[7:0], b[7:0], cin, sum[7:0], c1);
ks_adder_2 u2 (a[15:8], b[15:8], c1, sum[15:8], c2);
ks_adder_2 u3 (a[23:16], b[23:16], c2, sum[23:16], c3);
ks_adder_2 u4 (a[31:24], b[31:24], c3, sum[31:24], c4);
ks_adder_2 u5 (a[39:32], b[39:32], c4, sum[39:32], c5);
ks_adder_2 u6 (a[47:40], b[47:40], c5, sum[47:40], c6);
ks_adder_2 u7 (a[55:48], b[55:48], c6, sum[55:48], c7);
ks_adder_2 u8 (a[63:56], b[63:56], c7, sum[63:56], cout);


endmodule //ks_op_64_bit
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

// module AO(a, b, c, out);
//   input a;
//   wire aoi;
//   input b;
//   input c;
//   output out;
//   AOI21_X1 aoi_gate (
//     a,
//     b,
//     c,
//     aoi
//   );
//   INV_X1 inv_gate (
//     aoi,
//     out
//   );
// endmodule

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

module ks_adder_2 (a, b, cin, sum, cout);
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
  wire [6:0] pp;
  output [7:0] sum;
  wire [6:0]gn_png;

sum_gen sum_gen (cin,c0,c1,c2,c3,c4,c5,c6,p,sum);

  AO AO_1 (
    .a(p[0]),
    .b(cin),
    .c(g),
    .out(c0)
  );
  AO AO_2 (
    .a(pp[0]),
    .b(cin),
    .c(gn_png[0]),
    .out(c1)
  );
  AO AO_3 (
    .a(pp[1]),
    .b(c0),
    .c(gn_png[1]),
    .out(c2)
  );
  AO AO_4 (
    .a(pp[2]),
    .b(c1),
    .c(gn_png[2]),
    .out(c3)
  );
  AO AO_5 (
    .a(pp[3]),
    .b(c2),
    .c(gn_png[3]),
    .out(c4)
  );
  AO AO_6 (
    .a(pp[4]),
    .b(c3),
    .c(gn_png[4]),
    .out(c5)
  );
  AO AO_7 (
    .a(pp[5]),
    .b(c4),
    .c(gn_png[5]),
    .out(c6)
  );
  AO AO_8 (
    .a(pp[6]),
    .b(c5),
    .c(gn_png[6]),
    .out(cout)
  );

  p_g_gen p_g_gen_inst (
    .a(a),
    .b(b),
    .g(g),
    .p(p),
    .pp(pp),
    .gn_png(gn_png)
  );
endmodule


module p_g_gen(a, b, p,g,pp,gn_png);
  input [7:0] a;
  input [7:0] b;
  output g;
  output [7:0] p;
  output [6:0] pp;
  output [6:0]gn_png;
  assign p[0] = b[0] ^ a[0];
  assign p[1] = b[1] ^ a[1];
  assign p[2] = b[2] ^ a[2];
  assign p[3] = b[3] ^ a[3];
  assign p[4] = b[4] ^ a[4];
  assign p[5] = b[5] ^ a[5];
  assign p[6] = b[6] ^ a[6];
  assign p[7] = b[7] ^ a[7];
  assign g = b[0] & a[0];
  assign pp[0] = (b[1] ^ a[1] )& (b[0] ^ a[0]);
  assign pp[1] = (b[2] ^ a[2] )& (b[1] ^ a[1]);
  assign pp[2] = (b[3] ^ a[3] )& (b[2] ^ a[2]);
  assign pp[3] = (b[4] ^ a[4] )& (b[3] ^ a[3]);
  assign pp[4] = (b[5] ^ a[5] )& (b[4] ^ a[4]);
  assign pp[5] = (b[6] ^ a[6] )& (b[5] ^ a[5]);
  assign pp[6] = (b[7] ^ a[7] )& (b[6] ^ a[6]);
assign gn_png[0] = ((b[1] ^ a[1])&(b[0] & a[0]))|(b[1] & a[1]);
assign gn_png[1] = ((b[2] ^ a[2])&(b[1] & a[1]))|(b[2] & a[2]);
assign gn_png[2] = ((b[3] ^ a[3])&(b[2] & a[2]))|(b[3] & a[3]);
assign gn_png[3] = ((b[4] ^ a[4])&(b[3] & a[3]))|(b[4] & a[4]);
assign gn_png[4] = ((b[5] ^ a[5])&(b[4] & a[4]))|(b[5] & a[5]);
assign gn_png[5] = ((b[6] ^ a[6])&(b[5] & a[5]))|(b[6] & a[6]);
assign gn_png[6] = ((b[7] ^ a[7])&(b[6] & a[6]))|(b[7] & a[7]);
endmodule
