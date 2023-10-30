module rounding(current_remainder,current_divisor,rounding_data);
input logic [25:0] current_remainder,current_divisor;
output logic [25:0] rounding_data;


logic is_2d_3d;
logic is_d_2d;
logic is_0_d;
logic is_negd_0; 
logic is_neg2d_negd; 
logic is_neg3d_neg2d;

remainder_divisor_check check( current_remainder, current_divisor, is_2d_3d, is_d_2d, is_0_d, is_negd_0, is_neg2d_negd, is_neg3d_neg2d);

logic [25:0] one = 26'b1;
logic [25:0] two = 26'b10;
logic [25:0] three = 26'b11;
logic [25:0] minus_three= ~three+one;
logic [25:0] minus_two= ~two+one;
logic [25:0] minus_one= ~one+one;

assign rounding_data= (is_2d_3d)?two:(is_d_2d)?one:(is_0_d)?0:(is_negd_0)?minus_one:(is_neg2d_negd)?minus_two:(is_neg3d_neg2d)?minus_three:0;


endmodule

module remainder_divisor_check(
    input logic [25:0] current_remainder, 
    input logic [25:0] current_divisor, 
    output logic is_2d_3d, 
    output logic is_d_2d, 
    output logic is_0_d, 
    output logic is_negd_0, 
    output logic is_neg2d_negd, 
    output logic is_neg3d_neg2d
);

  logic [25:0] r, d2, d3, negd, negd2, negd3;
  logic r_is_negative;
  logic [25:0] one = 26'b1;
  
  // Determine if r is positive or negative
  assign r_is_negative = current_remainder[25];
  
  // Convert to two's complement for negative values of r
  assign r = r_is_negative ? (one + ~current_remainder) : current_remainder;  // two's complement
  
  // Calculate multiples of current_divisor
  assign d2 = current_divisor << 1;   // 2 * d
  assign d3 = current_divisor + d2;   // 3 * d
  
  // Calculate negations using two's complement
  assign negd = one + ~current_divisor;  // -d
  assign negd2 = one + ~(d2);           // -2d
  assign negd3 = one + ~(d3);           // -3d
  
  // Check range of r for positive cases
  assign is_2d_3d = (!r_is_negative && (r >= d2) && (r < d3));
  assign is_d_2d = (!r_is_negative && (r >= current_divisor) && (r < d2));
  assign is_0_d = (!r_is_negative && (r < current_divisor));
  
  // Check range of r for negative cases
  assign is_negd_0 = (r_is_negative && (r >= negd));
  assign is_neg2d_negd = (r_is_negative && (r >= negd2) && (r < negd));
  assign is_neg3d_neg2d = (r_is_negative && (r >= negd3) && (r < negd2));

endmodule
