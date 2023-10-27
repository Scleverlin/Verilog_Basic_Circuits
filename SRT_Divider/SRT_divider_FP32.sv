`include "quo_sel_tab.sv"
// `include "on_the_fly_conversion_srt4.sv" // integrated in the main module
`include "normalization.sv"
`include "post_processing.sv"


module SRT_divider_FP32 (dividend,divisor,clk,rst,quotient);//prototype input and output

input logic  [31:0] dividend,divisor;
input logic clk,rst;
// output logic [31:0] quotient;
// output logic [31:0] remainder;// currently not used
output logic [31:0] quotient;
// output logic result_valid;

logic [23:0] dividend_mantissa_normalized;
logic [23:0] divisor_mantissa_normalized;

logic [7:0]current_exponent;
logic result_sign;
logic [4:0] dividend_shift; 
logic [4:0] divisor_shift;
// final quotient=2^(m-n)*q

logic [4:0] final_shift,compl_divisor_shift,compl_dividend_shift;
assign compl_dividend_shift=~dividend_shift+1;
assign compl_divisor_shift=~divisor_shift+1; 
assign final_shift=(dividend_shift >= divisor_shift)?dividend_shift+compl_divisor_shift:divisor_shift+compl_dividend_shift;
logic right_shift=(dividend_shift >= divisor_shift)?1'b1:1'b0;

normalizer norm (dividend,divisor,dividend_mantissa_normalized, divisor_mantissa_normalized,current_exponent,result_sign,dividend_shift,divisor_shift);

logic [25:0]current_dividend;
logic [25:0]current_divisor;
logic [25:0]current_remainder;
logic [25:0] current_q_d;
logic [25:0]next_remainder, next_remainder_p, next_remainder_n,next_remainder_before_shift;
assign current_dividend = {2'b0,dividend_mantissa_normalized};
assign current_divisor = {2'b0,divisor_mantissa_normalized};// divisor is always positive, should be 00.1xxxxx

logic [4:0] r_idx;		// remainder index
logic [4:0] d_idx;		// divisor index
logic [2:0]mid_quotient;        // middle quotient

assign d_idx = current_divisor[24:20];
logic [23:0] Q_pos,Q_neg;
logic [23:0] Q_pos_next ,Q_neg_next;


always_ff @(posedge clk or negedge rst) begin
if (~rst)begin
    // flag <= 12'd1;
    current_remainder <= current_dividend;
    Q_pos<=0;
    Q_neg<=0;
  end 
  else begin
    current_remainder<=next_remainder;
    Q_pos<=Q_pos_next;
    Q_neg<=Q_neg_next;
end
end

assign r_idx = current_remainder[25:21];
// assign result_valid = (flag == 12'd2048) ? 1'b1 : 1'b0; 


qds  q_selelct_table (r_idx, d_idx, mid_quotient);
qd_gen qd_gen1 (current_q_d,mid_quotient,current_divisor);

next_remainder_gen next_remainder_gen1 (current_remainder,current_q_d,next_remainder,mid_quotient);

assign Q_pos_next = ~mid_quotient[2] ? {Q_pos[24-3:0], mid_quotient[1:0]} : {Q_neg[24-3:0], mid_quotient[1:0]};
assign Q_neg_next = (~mid_quotient[2] & (mid_quotient[1] ^ mid_quotient[0])) ? {Q_pos[24-3:0], mid_quotient[2:1]} : {Q_neg[24-3:0], ~(mid_quotient[1] ^ mid_quotient[0]), ~mid_quotient[0]};
logic [23:0]result_before_ieee;
assign result_before_ieee=Q_pos;

post_processing dut (
        .result(result_before_ieee),
        .shift_nums(final_shift),
        .right_shift(right_shift),
        .resultsign(result_sign),
        .current_exponent(current_exponent),
        .quotient(quotient)
    );


// assign result_valid = ;
endmodule



module adder_26(a,b,cin,sum,cout);
input logic [25:0] a,b;
input logic cin;// only need it when complmenting the number
output logic [25:0] sum;
output logic cout;

assign {cout,sum}=a+b+cin;

endmodule

module next_remainder_gen (current_remainder,current_q_d,next_remainder,mid_quotient);
input logic [25:0] current_remainder,current_q_d;
output logic [25:0] next_remainder;
input logic [2:0] mid_quotient;
logic [25:0] next_remainder_p,next_remainder_n;
logic cout,cout2;
logic [25:0] next_remainder_before_shift;
adder_26 adder_pos (current_remainder,current_q_d,1'b0,next_remainder_p,cout);// q is positive
adder_26 adder_neg (current_remainder,~current_q_d,1'b1,next_remainder_n,cout2);// q is negative
assign next_remainder_before_shift=(mid_quotient[2]==1'b0)?next_remainder_p:next_remainder_n;
assign next_remainder={next_remainder_p[23:0],2'b00};
endmodule

module qd_gen (current_q_d,mid_quotient,current_divisor);
input logic [25:0] current_divisor;
input logic [2:0] mid_quotient;
output logic [25:0] current_q_d;

assign current_q_d=(mid_quotient[1:0]==2'b00)?26'b0:
                   (mid_quotient[1:0]==2'b10)?{current_divisor[24:0],1'b0}:
                   current_divisor;

endmodule
