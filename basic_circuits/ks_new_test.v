
module ks_new_64_bit (
  a,b,cin,sum,cout
);

input [63:0]a,b;
input cin;
output [63:0]sum;
output cout;

wire  c1,c2,c3,c4,c5,c6,c7;

ks_adder u1 (a[7:0], b[7:0], cin, sum[7:0], c1);
ks_adder u2 (a[15:8], b[15:8], c1, sum[15:8], c2);
ks_adder u3 (a[23:16], b[23:16], c2, sum[23:16], c3);
ks_adder u4 (a[31:24], b[31:24], c3, sum[31:24], c4);
ks_adder u5 (a[39:32], b[39:32], c4, sum[39:32], c5);
ks_adder u6 (a[47:40], b[47:40], c5, sum[47:40], c6);
ks_adder u7 (a[55:48], b[55:48], c6, sum[55:48], c7);
ks_adder u8 (a[63:56], b[63:56], c7, sum[63:56], cout);

endmodule //ks_op_64_bit


module ks_adder(a, b, cin, sum, cout);
  input [7:0] a;
  input [7:0] b;
  /* verilator lint_off UNOPTFLAT */ wire [6:0]c;
  input cin;
  output cout;
  wire [7:0] g;
  wire [7:0] p;
  output [7:0] sum;
  assign p = a^b;
  assign   g= a&b;  
  assign sum [0] = cin ^ p[0];
  assign sum[7:1]= c[6:0] ^ p[7:1];

  assign c[0]=g[0]|(p[0]&cin);
  assign c[1]= g[1]|(p[1]&g[0])|(p[1]&p[0]&cin);
  assign c[2]= g[2]|(p[2]&g[1])|(p[2]&p[1]&c[0]);
  assign c[3]= g[3]|(p[3]&g[2])|(p[3]&p[2]&c[1]);
  assign c[4]= g[4]|(p[4]&g[3])|(p[4]&p[3]&c[2]);
  assign c[5]= g[5]|(p[5]&g[4])|(p[5]&p[4]&c[3]);
  assign c[6]= g[6]|(p[6]&g[5])|(p[6]&p[5]&c[4]);
  assign cout= g[7]|(p[7]&g[6])|(p[7]&p[6]&c[5]);

endmodule
