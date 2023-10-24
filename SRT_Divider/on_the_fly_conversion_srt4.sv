`define INTWIDTH 32 // A tmp value, should be changed depending on the design spec
`define POS_two  3'b010
`define NEG_two  3'b110
`define POS_one  3'b001
`define NEG_one  3'b111
`define POS_zero 3'b000

module Int_fast_convert (quotient_radix_4, clk,rst, result);
input logic [2:0] quotient_radix_4; 
output logic [`INTWIDTH-1:0] result;

input logic clk,rst;
logic [`INTWIDTH-1:0] Q_pos,Q_neg;
logic [`INTWIDTH-1:0] Q_pos_next ,Q_neg_next;


// using truth table to avoid adder implementation
// assign Q_pos_next= ~quotient_radix_4[2]?{Q_pos[`INTWIDTH-3:0],quotient_radix_4[1:0]}:{Q_neg[`INTWIDTH-3:0],quotient_radix_4[1:0]};
// assign Q_neg_next=(~quotient_radix_4[2]&(quotient_radix_4[1]^quotient_radix_4[0]))?
//                                                             {Q_pos[`INTWIDTH-3:0],quotient_radix_4[2:1]}:
//                                                             {Q_neg[`INTWIDTH-3:0],~(quotient_radix_4[1]^quotient_radix_4[0]),~quotient_radix_4[0]};
always_comb begin
    if (quotient_radix_4 == `POS_two || 
        quotient_radix_4 == `NEG_two || 
        quotient_radix_4 == `POS_one || 
        quotient_radix_4 == `NEG_one || 
        quotient_radix_4 == `POS_zero) begin
      
        Q_pos_next = ~quotient_radix_4[2] ? {Q_pos[`INTWIDTH-3:0], quotient_radix_4[1:0]} : {Q_neg[`INTWIDTH-3:0], quotient_radix_4[1:0]};
        Q_neg_next = (~quotient_radix_4[2] & (quotient_radix_4[1] ^ quotient_radix_4[0])) ? {Q_pos[`INTWIDTH-3:0], quotient_radix_4[2:1]} : {Q_neg[`INTWIDTH-3:0], ~(quotient_radix_4[1] ^ quotient_radix_4[0]), ~quotient_radix_4[0]};
    end else begin
        Q_pos_next = 0;
        Q_neg_next = 0;
    end
end


always_ff @(posedge clk or negedge rst)begin
if (~rst)begin
    Q_pos<=0;
    Q_neg<=0;
end
else begin
    Q_pos<=Q_pos_next;
    Q_neg<=Q_neg_next;
end

end

assign result=Q_pos;





endmodule

