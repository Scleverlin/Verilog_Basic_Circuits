module ks_op_64_v2 (a, b, cin, sum, cout);
  input [63:0] a;
  input [63:0] b;

/* verilator lint_off UNOPTFLAT */ wire [62:0]c;
  input cin;
  output cout;
  wire g;
  wire [63:0] p;
  wire [62:0] pp;
  output [63:0] sum;
  wire [62:0]gn_png;

sum_gen sum_gen (cin,c,p,sum);

    AO AO_1 (.a (p[0]), .b(cin), .c(g),         .out(c[0]));
    AO AO_2 (.a(pp[0]), .b(cin), .c(gn_png[0]), .out(c[1]));
    AO AO_3 (.a(pp[1]), .b(c[0]),  .c(gn_png[1]), .out(c[2]));
    AO AO_4 (.a(pp[2]), .b(c[1]),  .c(gn_png[2]), .out(c[3]));
    AO AO_5 (.a(pp[3]), .b(c[2]),  .c(gn_png[3]), .out(c[4]));
    AO AO_6 (.a(pp[4]), .b(c[3]),  .c(gn_png[4]), .out(c[5]));
    AO AO_7 (.a(pp[5]), .b(c[4]),  .c(gn_png[5]), .out(c[6]) );
    AO AO_8 (.a(pp[6]), .b(c[5]),  .c(gn_png[6]), .out(c[7]));
    AO AO_9 (.a(pp[7]), .b(c[6]),  .c(gn_png[7]), .out(c[8]));
    AO AO_10(.a(pp[8]), .b(c[7]),  .c(gn_png[8]), .out(c[9]));
    AO AO_11(.a(pp[9]), .b(c[8]),  .c(gn_png[9]), .out(c[10]));
    AO AO_12(.a(pp[10]), .b(c[9]),  .c(gn_png[10]), .out(c[11]));
    AO AO_13(.a(pp[11]), .b(c[10]),  .c(gn_png[11]), .out(c[12]));
    AO AO_14(.a(pp[12]), .b(c[11]),  .c(gn_png[12]), .out(c[13]));
    AO AO_15(.a(pp[13]), .b(c[12]),  .c(gn_png[13]), .out(c[14]));
    AO AO_16(.a(pp[14]), .b(c[13]),  .c(gn_png[14]), .out(c[15]));
    AO AO_17(.a(pp[15]), .b(c[14]),  .c(gn_png[15]), .out(c[16]));
    AO AO_18(.a(pp[16]), .b(c[15]),  .c(gn_png[16]), .out(c[17]));
    AO AO_19(.a(pp[17]), .b(c[16]),  .c(gn_png[17]), .out(c[18]));
    AO AO_20(.a(pp[18]), .b(c[17]),  .c(gn_png[18]), .out(c[19]));
    AO AO_21(.a(pp[19]), .b(c[18]),  .c(gn_png[19]), .out(c[20]));
    AO AO_22(.a(pp[20]), .b(c[19]),  .c(gn_png[20]), .out(c[21]));
    AO AO_23(.a(pp[21]), .b(c[20]),  .c(gn_png[21]), .out(c[22]));
    AO AO_24(.a(pp[22]), .b(c[21]),  .c(gn_png[22]), .out(c[23]));
    AO AO_25(.a(pp[23]), .b(c[22]),  .c(gn_png[23]), .out(c[24]));
    AO AO_26(.a(pp[24]), .b(c[23]),  .c(gn_png[24]), .out(c[25]));
    AO AO_27(.a(pp[25]), .b(c[24]),  .c(gn_png[25]), .out(c[26]));
    AO AO_28(.a(pp[26]), .b(c[25]),  .c(gn_png[26]), .out(c[27]));
    AO AO_29(.a(pp[27]), .b(c[26]),  .c(gn_png[27]), .out(c[28]));
    AO AO_30(.a(pp[28]), .b(c[27]),  .c(gn_png[28]), .out(c[29]));
    AO AO_31(.a(pp[29]), .b(c[28]),  .c(gn_png[29]), .out(c[30]));
    AO AO_32(.a(pp[30]), .b(c[29]),  .c(gn_png[30]), .out(c[31]));
    AO AO_33(.a(pp[31]), .b(c[30]),  .c(gn_png[31]), .out(c[32]));
    AO AO_34(.a(pp[32]), .b(c[31]),  .c(gn_png[32]), .out(c[33]));
    AO AO_35(.a(pp[33]), .b(c[32]),  .c(gn_png[33]), .out(c[34]));
    AO AO_36(.a(pp[34]), .b(c[33]),  .c(gn_png[34]), .out(c[35]));
    AO AO_37(.a(pp[35]), .b(c[34]),  .c(gn_png[35]), .out(c[36]));
    AO AO_38(.a(pp[36]), .b(c[35]),  .c(gn_png[36]), .out(c[37]));
    AO AO_39(.a(pp[37]), .b(c[36]),  .c(gn_png[37]), .out(c[38]));
    AO AO_40(.a(pp[38]), .b(c[37]),  .c(gn_png[38]), .out(c[39]));
    AO AO_41(.a(pp[39]), .b(c[38]),  .c(gn_png[39]), .out(c[40]));
    AO AO_42(.a(pp[40]), .b(c[39]),  .c(gn_png[40]), .out(c[41]));
    AO AO_43(.a(pp[41]), .b(c[40]),  .c(gn_png[41]), .out(c[42]));
    AO AO_44(.a(pp[42]), .b(c[41]),  .c(gn_png[42]), .out(c[43]));
    AO AO_45(.a(pp[43]), .b(c[42]),  .c(gn_png[43]), .out(c[44]));
    AO AO_46(.a(pp[44]), .b(c[43]),  .c(gn_png[44]), .out(c[45]));
    AO AO_47(.a(pp[45]), .b(c[44]),  .c(gn_png[45]), .out(c[46]));
    AO AO_48(.a(pp[46]), .b(c[45]),  .c(gn_png[46]), .out(c[47]));
    AO AO_49(.a(pp[47]), .b(c[46]),  .c(gn_png[47]), .out(c[48]));
    AO AO_50(.a(pp[48]), .b(c[47]),  .c(gn_png[48]), .out(c[49]));
    AO AO_51(.a(pp[49]), .b(c[48]),  .c(gn_png[49]), .out(c[50]));
    AO AO_52(.a(pp[50]), .b(c[49]),  .c(gn_png[50]), .out(c[51]));
    AO AO_53(.a(pp[51]), .b(c[50]),  .c(gn_png[51]), .out(c[52]));
    AO AO_54(.a(pp[52]), .b(c[51]),  .c(gn_png[52]), .out(c[53]));
    AO AO_55(.a(pp[53]), .b(c[52]),  .c(gn_png[53]), .out(c[54]));
    AO AO_56(.a(pp[54]), .b(c[53]),  .c(gn_png[54]), .out(c[55]));
    AO AO_57(.a(pp[55]), .b(c[54]),  .c(gn_png[55]), .out(c[56]));
    AO AO_58(.a(pp[56]), .b(c[55]),  .c(gn_png[56]), .out(c[57]));
    AO AO_59(.a(pp[57]), .b(c[56]),  .c(gn_png[57]), .out(c[58]));
    AO AO_60(.a(pp[58]), .b(c[57]),  .c(gn_png[58]), .out(c[59]));
    AO AO_61(.a(pp[59]), .b(c[58]),  .c(gn_png[59]), .out(c[60]));
    AO AO_62(.a(pp[60]), .b(c[59]),  .c(gn_png[60]), .out(c[61]));
    AO AO_63(.a(pp[61]), .b(c[60]),  .c(gn_png[61]), .out(c[62]));
    AO AO_64(.a(pp[62]), .b(c[61]),  .c(gn_png[62]), .out(cout));


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
  input [63:0] a;
  input [63:0] b;
  output g;
  output [63:0] p;
  output [62:0] pp;
  output [62:0]gn_png;

  assign p = b ^ a;

  assign g = b[0] & a[0];

  assign pp[62:0]= (b[63:1] ^ a[63:1]) & (b[62:0] ^ a[62:0]);
//   assign pp[0] = (b[1] ^ a[1] )& (b[0] ^ a[0]);
//   assign pp[1] = (b[2] ^ a[2] )& (b[1] ^ a[1]);
//   assign pp[2] = (b[3] ^ a[3] )& (b[2] ^ a[2]);
//   assign pp[3] = (b[4] ^ a[4] )& (b[3] ^ a[3]);
//   assign pp[4] = (b[5] ^ a[5] )& (b[4] ^ a[4]);
//   assign pp[5] = (b[6] ^ a[6] )& (b[5] ^ a[5]);
//   assign pp[6] = (b[7] ^ a[7] )& (b[6] ^ a[6]);

assign gn_png =   ((b[63:1] ^ a[63:1])&(b[62:0] & a[62:0]))|(b[63:1] & a[63:1]);
// assign gn_png[0] = ((b[1] ^ a[1])&(b[0] & a[0]))|(b[1] & a[1]);
// assign gn_png[1] = ((b[2] ^ a[2])&(b[1] & a[1]))|(b[2] & a[2]);
// assign gn_png[2] = ((b[3] ^ a[3])&(b[2] & a[2]))|(b[3] & a[3]);
// assign gn_png[3] = ((b[4] ^ a[4])&(b[3] & a[3]))|(b[4] & a[4]);
// assign gn_png[4] = ((b[5] ^ a[5])&(b[4] & a[4]))|(b[5] & a[5]);
// assign gn_png[5] = ((b[6] ^ a[6])&(b[5] & a[5]))|(b[6] & a[6]);
// assign gn_png[6] = ((b[7] ^ a[7])&(b[6] & a[6]))|(b[7] & a[7]);
endmodule

module sum_gen ( cin, c, p, sum );
  input [63:0] p;
  output [63:0] sum;
  input cin;
  input [62:0]c;

assign sum[0]=p[0]^cin;
assign sum[63:1]= p[63:1]^c[62:0];
// assign sum[1]=p[1]^c0;
// assign sum[2]=p[2]^c1;
// assign sum[3]=p[3]^c2;
// assign sum[4]=p[4]^c3;
// assign sum[5]=p[5]^c4;
// assign sum[6]=p[6]^c5;
// assign sum[7]=p[7]^c6;
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


