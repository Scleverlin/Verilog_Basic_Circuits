module mul_man_solving(f1_plus,f2_plus,f1f2_plus_rounding,exponent_adden,current_exponent);
input logic [23:0] f1_plus;
input logic [23:0] f2_plus;
output logic [23:0] f1f2_plus_rounding;
output logic [8:0]exponent_adden;
input logic [7:0]current_exponent;

logic exp_add_from_rounding;

logic [47:0] f1_f2_48,f1f2_plus;
multiplier_24 mul_24(f1_plus,f2_plus,f1_f2_48);

// assign exponent_add=f1_f2_48[47];
logic[8:0] shift;
// assign f1f2_plus=exponent_add?f1_f2_48:f1_f2_48<<1;
logic [8:0]max_shift;

assign max_shift={1'b0,current_exponent};
m_n_gen_norm_mul shifter (f1_f2_48,max_shift, f1f2_plus,shift);

logic guard;
logic round;
logic sticky;

assign guard = f1f2_plus[23];
assign round = f1f2_plus[22];
assign sticky = (f1f2_plus[21:0]==22'b0) ?1'b0:1'b1; 

rounding_grs_mul round_grs(f1f2_plus[47:24],guard,round,sticky,f1f2_plus_rounding,exp_add_from_rounding);
assign exponent_adden=shift+{8'b0,exp_add_from_rounding};

endmodule


module multiplier_24(f1,f2,f1f2);
input logic [23:0] f1;
input logic [23:0] f2;

output logic [47:0] f1f2;

assign f1f2 = f1 * f2;

endmodule

module rounding_grs_mul(
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
  
module m_n_gen_norm_mul (
    input logic [47:0] data,
    input logic [8:0] max_shift,
    output logic [47:0] outdata,
    output logic [8:0] shift
);
logic [8:0]shift_tmp;
assign shift_tmp 
             = (data[47] == 1) ? 9'd0 :
               (data[46] == 1) ? 9'd1 :
                (data[45] == 1) ? 9'd2 :
                (data[44] == 1) ? 9'd3 :
                (data[43] == 1) ? 9'd4 :
                (data[42] == 1) ? 9'd5 :
                (data[41] == 1) ? 9'd6 :
                (data[40] == 1) ? 9'd7 :
                (data[39] == 1) ? 9'd8 :
                (data[38] == 1) ? 9'd9 :
                (data[37] == 1) ? 9'd10 :
                (data[36] == 1) ? 9'd11 :
                (data[35] == 1) ? 9'd12 :
                (data[34] == 1) ? 9'd13 :
                (data[33] == 1) ? 9'd14 :
                (data[32] == 1) ? 9'd15 :
                (data[31] == 1) ? 9'd16 :
                (data[30] == 1) ? 9'd17 :
                (data[29] == 1) ? 9'd18 :
                (data[28] == 1) ? 9'd19 :
                (data[27] == 1) ? 9'd20 :
                (data[26] == 1) ? 9'd21 :
                (data[25] == 1) ? 9'd22 :
                (data[24] == 1) ? 9'd23 :
                (data[23] == 1) ? 9'd24 :
                (data[22] == 1) ? 9'd25 :
                (data[21] == 1) ? 9'd26 :
                (data[20] == 1) ? 9'd27 :
                (data[19] == 1) ? 9'd28 :
                (data[18] == 1) ? 9'd29 :
                (data[17] == 1) ? 9'd30 :
                (data[16] == 1) ? 9'd31 :
                (data[15] == 1) ? 9'd32 :
                (data[14] == 1) ? 9'd33 :
                (data[13] == 1) ? 9'd34 :
                (data[12] == 1) ? 9'd35 :
                (data[11] == 1) ? 9'd36 :
                (data[10] == 1) ? 9'd37 :
                (data[9] == 1) ? 9'd38 :
                (data[8] == 1) ? 9'd39 :
                (data[7] == 1) ? 9'd40 :
                (data[6] == 1) ? 9'd41 :
                (data[5] == 1) ? 9'd42 :
                (data[4] == 1) ? 9'd43 :
                (data[3] == 1) ? 9'd44 :
                (data[2] == 1) ? 9'd45 :
                (data[1] == 1) ? 9'd46 :
                (data[0] == 1) ? 9'd47 :
                9'd0;
assign outdata = data << shift_tmp;
logic [8:0] tmp,real_shift;
assign real_shift=9'b1-shift_tmp;
assign tmp=max_shift-shift_tmp+9'b1; // if tmp<0, means Exp<-126. shift is minus max_shift
assign shift= tmp[8]?~max_shift+1'b1:real_shift;
endmodule