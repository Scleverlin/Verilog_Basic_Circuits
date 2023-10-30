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

  logic [25:0] abs_r, d2, d3;
  logic r_is_negative;
  logic [25:0] one = 26'b1;

  // Intermediate signals to store comparison results
  logic abs_is_2d_3d, abs_is_d_2d, abs_is_0_d;
  
  // Determine if r is positive or negative
  assign r_is_negative = current_remainder[25];
  
  // Convert r to its absolute value
  assign abs_r = r_is_negative ? (one + ~current_remainder) : current_remainder;
  
  // Calculate multiples of current_divisor
  assign d2 = current_divisor << 1;   // 2 * d
  assign d3 = current_divisor + d2;   // 3 * d
  
  // Check range of abs_r against d, 2d, and 3d
  assign abs_is_2d_3d = (abs_r >= d2) && (abs_r < d3);
  assign abs_is_d_2d = (abs_r >= current_divisor) && (abs_r < d2);
  assign abs_is_0_d = abs_r < current_divisor;
  
  // Use the sign of r and the intermediate signals to determine the final outputs
  assign is_2d_3d = !r_is_negative && abs_is_2d_3d;
  assign is_d_2d = !r_is_negative && abs_is_d_2d;
  assign is_0_d = !r_is_negative && abs_is_0_d;
  assign is_negd_0 = r_is_negative && abs_is_0_d;
  assign is_neg2d_negd = r_is_negative && abs_is_d_2d;
  assign is_neg3d_neg2d = r_is_negative && abs_is_2d_3d;

endmodule

