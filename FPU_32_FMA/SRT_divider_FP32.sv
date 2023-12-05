/* verilator lint_off EOFNEWLINE */
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off UNUSEDSIGNAL */
`include "quo_sel_tab.sv"
// `include "on_the_fly_conversion_srt4.sv" // integrated in the main module
`include "div_normalization.sv"
`include "div_post_processing.sv"
// `include "rounding.sv"


module SRT_divider_FP32 (dividend,divisor,clk,rst,quotient,flag);//prototype input and output

input logic  [31:0] dividend,divisor;
input logic clk,rst;
// output logic [31:0] quotient;
// output logic [31:0] remainder;// currently not used
output logic [31:0] quotient;
// output logic result_valid;
output logic [5:0] flag;
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

div_normalizer  norm (dividend,divisor,dividend_mantissa_normalized, divisor_mantissa_normalized,current_exponent,result_sign,dividend_shift,divisor_shift);

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
logic [27:0] Q_pos,Q_neg;
logic [27:0] Q_pos_next ,Q_neg_next;

logic [5:0]flag_1;
always_ff @(posedge clk or negedge rst) begin
if (~rst)begin
    // flag <= 12'd1;
    flag<=6'd0;
    current_remainder <= current_dividend;
    Q_pos<=28'b0;
    Q_neg<=28'b0;
  end 
  else begin
    current_remainder<=next_remainder;
    Q_pos<=Q_pos_next;
    Q_neg<=Q_neg_next;
    flag<=flag_1;
end
end

assign r_idx = current_remainder[25:21];
// assign result_valid = (flag == 12'd2048) ? 1'b1 : 1'b0; 

assign flag_1=flag+1;

qds  q_selelct_table (r_idx, d_idx, mid_quotient);
qd_gen qd_gen1 (current_q_d,mid_quotient,current_divisor);
logic [25:0]input_remainder;
assign input_remainder=(flag==6'd0)?current_dividend:current_remainder;

next_remainder_gen next_remainder_gen1 (input_remainder,current_q_d,next_remainder,mid_quotient);

assign Q_pos_next = ~mid_quotient[2] ? {Q_pos[28-3:0], mid_quotient[1:0]} : {Q_neg[28-3:0], mid_quotient[1:0]};
assign Q_neg_next = (~mid_quotient[2] & (mid_quotient[1] ^ mid_quotient[0])) ? {Q_pos[28-3:0], mid_quotient[2:1]} : {Q_neg[28-3:0], ~(mid_quotient[1] ^ mid_quotient[0]), ~mid_quotient[0]};
logic [23:0]q_rounding;
// logic [23:0]rounding_data;

// rounding rounding_module_1 (current_remainder,current_divisor,rounding_data);
// logic [23:0]q_pos_cut;
// assign q_pos_cut=Q_pos[28:5];
// assign q_rounding=(flag==6'd15)?rounding_data+q_pos_cut:Q_pos[28:5];

logic guard;
logic round;
logic sticky;
logic exp_add;
assign guard=Q_pos[2];
assign round=Q_pos[1];
assign sticky=Q_pos[0];

rounding_grs rounding_grs_1 (Q_pos[26:3],guard,round,sticky,q_rounding,exp_add);


logic [23:0]result_before_ieee;

assign result_before_ieee=(flag == 6'd14)?q_rounding:24'b0;

div_post_processing dut (
        .result(result_before_ieee),
        .shift_nums(final_shift),
        .exp_add(exp_add),
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
// adder_26 adder_pos (current_remainder,~current_q_d,1'b1,next_remainder_p,cout);// q is positive
// adder_26 adder_neg (current_remainder,current_q_d,1'b0,next_remainder_n,cout2);// q is negative
assign next_remainder_before_shift=(mid_quotient[2]==1'b0)?current_remainder-current_q_d:current_remainder+current_q_d;
// assign next_remainder_before_shift=(mid_quotient[2]==1'b0)?next_remainder_p:next_remainder_n;
assign next_remainder={next_remainder_before_shift[23:0],2'b00};
endmodule

module qd_gen (current_q_d,mid_quotient,current_divisor);
input logic [25:0] current_divisor;
input logic [2:0] mid_quotient;
output logic [25:0] current_q_d;

assign current_q_d=(mid_quotient[1:0]==2'b00)?26'b0:
                   (mid_quotient[1:0]==2'b10)?{current_divisor[24:0],1'b0}:
                   current_divisor;

endmodule

module rounding_grs(
   input wire [23:0] man,  // 24-bit mantissa with implicit bit
    input wire guard,       // Guard bit
    input wire round,       // Round bit
    input wire sticky,      // Sticky bit
    output reg [23:0] rounded_man,  // Rounded mantissa
    output reg exp_add              // Set if there's a carry that affects the exponent
);

    wire tie; // 平局情况：保护位为1，而舍入位和粘滞位都为0
    assign tie = guard && !round && !sticky;

    always @(*) begin
        if (tie) begin
            // 平局到偶数：如果尾数最后一位是0，保持不变；如果是1，则向上舍入
            if (man[0]) begin
                {exp_add, rounded_man} = man + 24'h1;
            end else begin
                exp_add = 1'b0;
                rounded_man = man;
            end
        end else if (guard && (round || sticky)) begin
            // 非平局情况且需要向上舍入
            {exp_add, rounded_man} = man + 24'h1;
        end else begin
            // 不需要舍入
            exp_add = 1'b0;
            rounded_man = man;
        end
    end
endmodule