`include "quo_sel_tab.sv"
// `include "on_the_fly_conversion_srt4.sv" // integrated in the main module
`include "normalization.sv"


module SRT_divider_FP32 (dividend,divisor,clk,rst,result,result_valid);//prototype input and output

input logic  [31:0] dividend,divisor;
input logic clk,rst;
// output logic [31:0] quotient;
// output logic [31:0] remainder;// currently not used
output logic [23:0] result;
output logic result_valid;

logic [23:0] dividend_mantissa_normalized;
logic [23:0] divisor_mantissa_normalized;

logic [7:0]current_exponent;
logic result_sign;
logic [4:0] dividend_shift; 
logic [4:0] divisor_shift;
// final quotient=2^(m-n)*q

logic [4:0] final_shift; 
assign final_shift=(dividend_shift >= divisor_shift)?dividend_shift-divisor_shift:dividend_shift-divisor_shift;
logic right_shift=(dividend_shift >= divisor_shift)?1'b1:1'b0;


normalizer norm (dividend,divisor,dividend_mantissa_normalized, divisor_mantissa_normalized,current_exponent,result_sign,dividend_shift,divisor_shift);

logic [25:0]current_dividend;
logic [25:0]current_divisor;
logic [25:0]current_remainder;
logic [25:0]next_remainder, next_remainder_p, next_remainder_n,next_remainder_before_shift;
assign current_dividend = {2'b0,dividend_mantissa_normalized};
assign current_divisor = {2'b0,divisor_mantissa_normalized};// divisor is always positive, should be 00.1xxxxx

logic [4:0] r_idx;		// remainder index
logic [4:0] d_idx;		// divisor index
logic [2:0]mid_quotient;        // middle quotient

logic [11:0] flag;
// logic [11:0]flag_shift;
// assign flag_shift=flag<<1;
assign d_idx = current_divisor[25:21];
logic [23:0] Q_pos,Q_neg;
logic [23:0] Q_pos_next ,Q_neg_next;

// always @(posedge clk or negedge rst) begin
//   if (~rst) begin
//     r_idx <= 0;
//     flag <= 12'd1;              // Initial value for flag
//     current_remainder <= current_dividend;
//     result_valid <= 1'b0;       // Signal to indicate when the result is ready
//   end 
//   else if (flag != 12'd2048) begin   // Check if all iterations are not yet done
//     r_idx <= current_remainder[25:21];
//     current_remainder <= next_remainder;
//     flag <= flag_shift;          // Left shift the flag
//     Q_pos<=Q_pos_next;
//     Q_neg<=Q_neg_next;
//   end
//   else begin
//     result_valid <= 1'b1;       // After all iterations, set result valid
//   end
// end

always_ff @(posedge clk or negedge rst) begin
  if (~rst) begin
    r_idx <= 0;
    flag <= 12'd1;
    current_remainder <= current_dividend;
  end 
  else begin
    if (flag != 12'd2048) begin   // Check if all iterations are not yet done
      r_idx <= current_remainder[25:21];
      current_remainder <= next_remainder;
      flag <= {flag[10:0],1'b0};
    end 
    // if (flag == 12'd2048) begin
    //   result_valid <= 1'b1;
    // end
  end
end

assign result_valid = (flag == 12'd2048) ? 1'b1 : 1'b0; 

qds  q_selelct_table (r_idx, d_idx, mid_quotient);

logic [25:0] current_q_d;

assign current_q_d=(mid_quotient[1:0]==2'b00)?26'b0:
                   (mid_quotient[1:0]==2'b10)?{current_divisor[24:0],1'b0}:
                   current_divisor;

logic cout,cout2;
adder_26 adder_pos (current_remainder,current_q_d,1'b0,next_remainder_p,cout);// q is positive
adder_26 adder_neg (current_remainder,~current_q_d,1'b1,next_remainder_n,cout2);// q is negative

assign next_remainder_before_shift=(mid_quotient[2]==1'b0)?next_remainder_p:next_remainder_n;
assign next_remainder={next_remainder_before_shift[23:0],2'b00};

assign Q_pos_next = ~mid_quotient[2] ? {Q_pos[24-3:0], mid_quotient[1:0]} : {Q_neg[24-3:0], mid_quotient[1:0]};
assign Q_neg_next = (~mid_quotient[2] & (mid_quotient[1] ^ mid_quotient[0])) ? {Q_pos[24-3:0], mid_quotient[2:1]} : {Q_neg[24-3:0], ~(mid_quotient[1] ^ mid_quotient[0]), ~mid_quotient[0]};
// Int_fast_convert otfc(mid_quotient, clk,rst, result);

assign result=Q_pos;
endmodule




// module carry_save_adder_26(a,b,c,tmp_sum,tmp_carry);
// input logic [25:0] a,b,c;
// output logic [25:0] tmp_sum;
// output logic [25:0] tmp_carry;

// logic [25:0] tmp_sum1,tmp_carry1;
// logic [25:0] tmp_sum2,tmp_carry2;

// assign tmp_sum1 = a^b^c;
// assign tmp_carry1 =  (a&b) | (b&c) | (c&a);

// endmodule

module adder_26(a,b,cin,sum,cout);
input logic [25:0] a,b;
input logic cin;// only need it when complmenting the number
output logic [25:0] sum;
output logic cout;

assign {cout,sum}=a+b+cin;

endmodule