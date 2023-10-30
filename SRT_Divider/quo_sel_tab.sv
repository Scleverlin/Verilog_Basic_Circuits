module qds (r_idx, d_idx, quotient);
// borrowed and slightly modified from https://github.com/devindang/openip-hdl/blob/main/srt_div/rtl/srt_r4.v 
input logic [4:0] r_idx;		// remainder index
input  logic [4:0] d_idx;		// divisor index
output logic [2:0]quotient;        // quotient

logic [1:0] q;			// quotient digit
logic  neg;		// sign of quotient
wire         ops_sign;	// opposite sign
wire   [4:0] r_ori;		// original code of remainder
wire   [4:0] d_ori;		// original code divisor 
wire r_ge_0010, r_ge_0011, r_ge_0110, r_ge_0111, r_ge_1000,
     r_ge_1001, r_ge_1010, r_ge_1011, r_ge_1100,r_ge_1101; // greater than
logic  q0, q2;		    // quotient value(abs)
assign ops_sign = r_idx[4] ; 
assign r_ori = r_idx[4] ? ~r_idx + 1 : r_idx;
assign d_ori = d_idx ;//dont need to care the sign of divisor,  divisor is forced to be positive
assign r_ge_0010 = (r_ori[3:0]>=4'b0010); // here we use complement code to represent negative number
assign r_ge_0011 = (r_ori[3:0]>=4'b0011);
assign r_ge_0100 = (r_ori[3:0]>=4'b0100);
assign r_ge_0101 = (r_ori[3:0]>=4'b0101);
assign r_ge_0110 = (r_ori[3:0]>=4'b0110);
assign r_ge_0111 = (r_ori[3:0]>=4'b0111);
assign r_ge_1000 = (r_ori[3:0]>=4'b1000);
assign r_ge_1001 = (r_ori[3:0]>=4'b1001);
assign r_ge_1010 = (r_ori[3:0]>=4'b1010);
assign r_ge_1011 = (r_ori[3:0]>=4'b1011);
assign r_ge_1100 = (r_ori[3:0]>=4'b1100);
assign r_ge_1100 = (r_ori[3:0]>=4'b1101);

// assign r_ge_0010_r = (r_ori[3:0]>4'b0010); // here we use complement code to represent negative number
// assign r_ge_0011_r = (r_ori[3:0]>4'b0011);
// assign r_ge_0100_r = (r_ori[3:0]>4'b0100);
// assign r_ge_0101_r = (r_ori[3:0]>4'b0101);
// assign r_ge_0110_r = (r_ori[3:0]>4'b0110);
// assign r_ge_0111_r = (r_ori[3:0]>4'b0111);
// assign r_ge_1000_r = (r_ori[3:0]>4'b1000);
// assign r_ge_1001_r = (r_ori[3:0]>4'b1001);
// assign r_ge_1010_r = (r_ori[3:0]>4'b1010);
// assign r_ge_1011_r = (r_ori[3:0]>4'b1011);
// assign r_ge_1100_r = (r_ori[3:0]>4'b1100);
// assign r_ge_0010_r = (r_ori[3:0]>4'b0010);
// assign r_ge_0110_r =(r_ori[3:0]>4'b0110);
always_comb begin
	case(d_ori[3:0])
		4'b1000: begin
			q0 = ops_sign ? ~r_ge_0011: ~r_ge_0010;
			q2 = ops_sign ? r_ge_0111: r_ge_0110; // complement of remainder is used , not exactly the same as graph
		end
		4'b1001: begin
			q0 = ops_sign ? ~r_ge_0100: ~r_ge_0011;
			q2 = ops_sign ? r_ge_1000: r_ge_0111;
		end
		4'b1010: begin
			q0 = ops_sign ? ~r_ge_0100 : ~r_ge_0011;
			q2 = ops_sign ? r_ge_1001 : r_ge_1000;
		end
		4'b1011: begin
			q0 = ops_sign ? ~r_ge_0100 : ~r_ge_0011;
			q2 = ops_sign ? r_ge_1010 : r_ge_1001;
		end
		4'b1100: begin
			q0 = ops_sign ? ~r_ge_0101 : ~r_ge_0100;
			q2 = ops_sign ? r_ge_1011 : r_ge_1010;
		end
		4'b1101: begin
			q0 = ops_sign ? ~r_ge_0101 : ~r_ge_0100;
			q2 = ops_sign ? r_ge_1011 : r_ge_1010;
		end
		4'b1110: begin
			q0 = ops_sign ? ~r_ge_0101 : ~r_ge_0100;
			q2 = ops_sign ? r_ge_1100 : r_ge_1011;
		end
		4'b1111: begin
			q0 = ops_sign ? ~r_ge_0101 : ~r_ge_0101;
			q2 = ops_sign ? r_ge_1101 : r_ge_1100;
		end
		default: begin
			q0 = 1'b1;
			q2 = 1'b0;
		end
	endcase
end
assign q = q0 ? 2'b00 : (q2 ? 2'b10 : 2'b01);
assign neg = ~q0 & ops_sign;
logic [2:0] quotient_temp;
assign quotient_temp={neg,q};

assign quotient = (quotient_temp==3'b101)?3'b111:quotient_temp; 

endmodule