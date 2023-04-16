
module CLA_AO_64 (
    a,b,cin,sum,cout
);
input [63:0]a,b;
input cin;
output [63:0]sum;
output cout;
wire [63:0]p,g ;


pg_gen u0 (a,b,p,g);


/* verilator lint_off UNOPTFLAT */  wire [62:0] c;

    AO AO_1 (p[0],cin,g[0],c[0]);
    AO AO_2 (p[1],c[0],g[1],c[1]);
    AO AO_3 (p[2],c[1],g[2],c[2]);
    AO AO_4 (p[3],c[2],g[3],c[3]);
    AO AO_5 (p[4],c[3],g[4],c[4]);
    AO AO_6 (p[5],c[4],g[5],c[5]);
    AO AO_7 (p[6],c[5],g[6],c[6]);
    AO AO_8 (p[7],c[6],g[7],c[7]);
    AO AO_9 (p[8],c[7],g[8],c[8]);
    AO AO_10 (p[9],c[8],g[9],c[9]);
    AO AO_11 (p[10],c[9],g[10],c[10]);
    AO AO_12 (p[11],c[10],g[11],c[11]);
    AO AO_13 (p[12],c[11],g[12],c[12]);
    AO AO_14 (p[13],c[12],g[13],c[13]);
    AO AO_15 (p[14],c[13],g[14],c[14]);
    AO AO_16 (p[15],c[14],g[15],c[15]);
    AO AO_17 (p[16],c[15],g[16],c[16]);
    AO AO_18 (p[17],c[16],g[17],c[17]);
    AO AO_19 (p[18],c[17],g[18],c[18]);
    AO AO_20 (p[19],c[18],g[19],c[19]);
    AO AO_21 (p[20],c[19],g[20],c[20]);
    AO AO_22 (p[21],c[20],g[21],c[21]);
    AO AO_23 (p[22],c[21],g[22],c[22]);
    AO AO_24 (p[23],c[22],g[23],c[23]);
    AO AO_25 (p[24],c[23],g[24],c[24]);
    AO AO_26 (p[25],c[24],g[25],c[25]);
    AO AO_27 (p[26],c[25],g[26],c[26]);
    AO AO_28 (p[27],c[26],g[27],c[27]);
    AO AO_29 (p[28],c[27],g[28],c[28]);
    AO AO_30 (p[29],c[28],g[29],c[29]);
    AO AO_31 (p[30],c[29],g[30],c[30]);
    AO AO_32 (p[31],c[30],g[31],c[31]);
    AO AO_33 (p[32],c[31],g[32],c[32]);
    AO AO_34 (p[33],c[32],g[33],c[33]);
    AO AO_35 (p[34],c[33],g[34],c[34]);
    AO AO_36 (p[35],c[34],g[35],c[35]);
    AO AO_37 (p[36],c[35],g[36],c[36]);
    AO AO_38 (p[37],c[36],g[37],c[37]);
    AO AO_39 (p[38],c[37],g[38],c[38]);
    AO AO_40 (p[39],c[38],g[39],c[39]);
    AO AO_41 (p[40],c[39],g[40],c[40]);
    AO AO_42 (p[41],c[40],g[41],c[41]);
    AO AO_43 (p[42],c[41],g[42],c[42]);
    AO AO_44 (p[43],c[42],g[43],c[43]);
    AO AO_45 (p[44],c[43],g[44],c[44]);
    AO AO_46 (p[45],c[44],g[45],c[45]);
    AO AO_47 (p[46],c[45],g[46],c[46]);
    AO AO_48 (p[47],c[46],g[47],c[47]);
    AO AO_49 (p[48],c[47],g[48],c[48]);
    AO AO_50 (p[49],c[48],g[49],c[49]);
    AO AO_51 (p[50],c[49],g[50],c[50]);
    AO AO_52 (p[51],c[50],g[51],c[51]);
    AO AO_53 (p[52],c[51],g[52],c[52]);
    AO AO_54 (p[53],c[52],g[53],c[53]);
    AO AO_55 (p[54],c[53],g[54],c[54]);
    AO AO_56 (p[55],c[54],g[55],c[55]);
    AO AO_57 (p[56],c[55],g[56],c[56]);
    AO AO_58 (p[57],c[56],g[57],c[57]);
    AO AO_59 (p[58],c[57],g[58],c[58]);
    AO AO_60 (p[59],c[58],g[59],c[59]);
    AO AO_61 (p[60],c[59],g[60],c[60]);
    AO AO_62 (p[61],c[60],g[61],c[61]);
    AO AO_63 (p[62],c[61],g[62],c[62]);
    AO AO_64 (p[63],c[62],g[63],cout);

sum_gen sum_gen_1 (cin, c, p, sum);

endmodule //CLA_AO_64

module pg_gen (
    a,b,p,g    
);
input [63:0]a,b;
output [63:0]p,g;

assign p=a^b;
assign g=a&b;

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

module sum_gen ( cin, c, p, sum );
  input [63:0] p;
  output [63:0] sum;
  input cin;
  input [62:0]c;

assign sum[0]=p[0]^cin;
assign sum[63:1]= p[63:1]^c[62:0];
endmodule
