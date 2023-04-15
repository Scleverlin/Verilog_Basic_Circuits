module new_adder (
    a,b,cin,sum,cout
);

input a,b,cin;

output sum,cout;
wire ab;
wire oai;
OAI OAI1  (a,b,cin, oai);
nand nand_gate (ab, a, b);
nand nand_gate2 (cout, ab, oai);

assign sum=a^b^cin;
endmodule
module OAI (
    a,b,c,out
);
input a,b,c;
output out;
wire ab;
or or_gate (ab, a, b);
nand nand_gate (out, ab, c);
endmodule //new_adder