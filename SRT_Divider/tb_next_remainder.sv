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

module tb_ngg();
logic [25:0] current_remainder,current_q_d,next_remainder,mid_quotient;
next_remainder_gen ngg (current_remainder,current_q_d,next_remainder,mid_quotient);


initial begin
   $dumpfile("dump.vcd"); 
   $dumpvars(0,  ngg ); // 0表示记录所有层次，wal_mul_tb是模块的实例名
end

initial begin
mid_quotient=3'b000;
current_remainder=26'b0;
current_q_d=26'b0;
#10;
current_remainder=26'b0;
current_q_d=26'b1;
#10;
current_remainder=26'b0;
current_q_d=26'b10;

end
endmodule

module adder_26(a,b,cin,sum,cout);
input logic [25:0] a,b;
input logic cin;// only need it when complmenting the number
output logic [25:0] sum;
output logic cout;

assign {cout,sum}=a+b+cin;

endmodule
