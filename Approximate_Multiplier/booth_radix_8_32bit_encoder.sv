module booth4_radix_8_32bit_encoder ();
input [31:0] data;

output [63:0] partial_product;
input [3:0] segment; 
wire cout1;
wire [63:0] tmp_1001;
wire [63:0] tmp_1002;
always @(*) begin 
			case (segment) 
				4'b0000:partial_product = {64'b0};
                4'b0001:partial_product = {32'b0,data};
                4'b0010:partial_product = {32'b0,data};
                4'b0011:partial_product={31'b0,data,1'b0};
                4'b0100:partial_product={31'b0,data,1'b0};
                4'b0101: begin 
                    adder_64bit u0 ({32'b0,data},{31'b0,data,1'b0},1'b0,partial_product,cout1);
                end
                4'b0110: begin 
                    adder_64bit u1 ({32'b0,data},{31'b0,data,1'b0},1'b0,partial_product,cout1);
                end
                4'b0111: partial_product= {30'b0,data,2'b0};
                4'b1000:begin //-4
                    adder_64bit u2 (~{30'b0,data,2'b0},1'b0,1'b1,partial_product,cout1);
                end
                4'b1001:begin//-3
                    tmp_1001 = ~{30'b0,data,2'b0};// reverse
                    adder_64bit u3 (tmp_1001,{32'b0,data},1'b1,partial_product,cout1); // reverse +1=-4 ,-4+1=-3
                end
                4'b1010:begin //-3
                    tmp_1002 = ~{30'b0,data,2'b0};// reverse
                    adder_64bit u4 (tmp_1002,{32'b0,data},1'b1,partial_product,cout1); // reverse +1=-4 ,-4+1=-3
                end
                4'b1011:begin //-2
                    adder_64bit u5 (~{31'b0,data,1'b0},1'b0,1'b1,partial_product,cout1); 
                end
                4'b1100:begin //-2
                    adder_64bit u6 (~{31'b0,data,1'b0},1'b0,1'b1,partial_product,cout1); 
                end
                4'b1101:begin //-1
                    adder_64bit u7 (~{32'b0,data},1'b0,1'b1,partial_product,cout1); 
                end
                4'b1110:begin //-1
                    adder_64bit u8 (~{32'b0,data},1'b0,1'b1,partial_product,cout1); 
                end
                4'b1111:partial_product = {64'b0};
			endcase 
		end 

endmodule

module adder_64bit (a,b,cin,sum,cout);
input [63:0] a,b;
input cin;
output [63:0] sum;
output cout;

assign {cout,sum} = a + b + cin;

endmodule