module man_solving(f1_plus,f2_plus,f1f2_plus,exponent_add);
input logic [23:0] f1_plus;
input logic [23:0] f2_plus;
output logic [23:0] f1f2_plus;
output logic exponent_add;

logic [47:0] f1_f2_48;
multiplier_24 mul_24(f1_plus,f2_plus,f1_f2_48);

assign exponent_add=f1_f2_48[47];

assign f1f2_plus=exponent_add?f1_f2_48[47:24]:f1_f2_48[46:23];// ignore rounding for now

endmodule


module multiplier_24(f1,f2,f1f2);
input logic [23:0] f1;
input logic [23:0] f2;

output logic [47:0] f1f2;

assign f1f2 = f1 * f2;

endmodule
