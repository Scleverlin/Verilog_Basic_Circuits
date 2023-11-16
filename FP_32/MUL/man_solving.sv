module man_solving(f1_plus,f2_plus,f1f2_plus_rounding,exponent_add,exp_add_from_rounding);
input logic [23:0] f1_plus;
input logic [23:0] f2_plus;
output logic [23:0] f1f2_plus_rounding;
output logic exponent_add;
output logic exp_add_from_rounding;
logic [47:0] f1_f2_48,f1f2_plus;
multiplier_24 mul_24(f1_plus,f2_plus,f1_f2_48);

assign exponent_add=f1_f2_48[47];

assign f1f2_plus=exponent_add?f1_f2_48:f1_f2_48<<1;
logic guard;
logic round;
logic sticky;


assign guard = f1_f2_48[23];
assign round = f1_f2_48[22];
assign sticky = (f1_f2_48[21:0]==22'b0) ?1'b0:1'b1; 

rounding_grs round_grs(f1f2_plus[47:24],guard,round,sticky,f1f2_plus_rounding,exp_add_from_rounding);

endmodule


module multiplier_24(f1,f2,f1f2);
input logic [23:0] f1;
input logic [23:0] f2;

output logic [47:0] f1f2;

assign f1f2 = f1 * f2;

endmodule

module rounding_grs(
    input wire [23:0] man,  // 24-bit mantissa with implicit bit
    input wire guard,       // Guard bit
    input wire round,       // Round bit
    input wire sticky,      // Sticky bit
    output wire [23:0] rounded_man,  // Rounded mantissa
    output wire exp_add              // Set if there's a carry that affects the exponent
  );
    wire halfway = guard && !round && !sticky;  // Exactly between two representable values
    wire lsb = man[0];  // Least Significant Bit of the mantissa
    // Increment the mantissa if guard bit is set and (round or sticky bit is set or the mantissa is odd)
    wire increment = guard && (round || sticky || lsb);
    // Calculate the potential new mantissa with the increment
    wire [23:0] new_man = man + 24'd1;
    // Check if an increment would cause a carry, which implies the exponent needs to be incremented
    assign exp_add = increment && (new_man[23] == 1'b0);
    // Select the final rounded mantissa
    assign rounded_man = increment ? new_man : man;
  endmodule
  
