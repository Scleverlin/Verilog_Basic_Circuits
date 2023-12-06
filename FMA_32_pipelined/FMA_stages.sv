// ignore the clk and rst first.

module FMA_stage1(a,b,c,// for output
          );
input logic [31:0]a,b,c;

// output logic pipeline stage 1

logic sign_a,sign_b,sign_c;
logic [7:0]exp_a,exp_b,exp_c;
logic [23:0]man_a,man_b,man_c;

endmodule


module FMA_stage2();


endmodule

module FMA_stage3();

endmodule
