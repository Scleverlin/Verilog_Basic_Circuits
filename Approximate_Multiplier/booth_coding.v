`define zero 0
`define one 1
`define two 2



module booth4_multiplier (a,b,product);

input [15:0]a;
input [15:0]b;
output [31:0]product;
wire [7:0] sym;
wire [1:0]a1;
booth4_coding u1 ({a[2:0],1'b0},a1,sym[0]);
wire [1:0]a2;
booth4_coding u2 ({a[3:1]},a2,sym[1]);
wire [1:0]a3;
booth4_coding u3 ({a[5:3]},a3,sym[2]);
wire [1:0]a4;
booth4_coding u4 ({a[7:5]},a4,  sym[3]);
wire [1:0]a5;
booth4_coding u5 ({a[9:7]},a5,  sym[4]);
wire [1:0]a6;
booth4_coding u6 ({a[11:9]},a6, sym[5]);
wire [1:0]a7;
booth4_coding u7 ({a[13:11]},a7,sym[6]);
wire [1:0]a8;
booth4_coding u8 ({a[15:13]},a8,sym[7]);

wire [32:0]temp1;
assign temp1=(sym[0]==0)?{}



endmodule



module booth4_coding (seg,value,sym);
input [2:0]seg;
output reg [1:0]value;
output sym;
always@(*)begin
case (seg)
3'b000: value<=`zero;
        sym=1'b0;
3'b001: value<=`one;
        sym=1'b0;
3'b010: value<=`two;
        sym=1'b0;
3'b011: value<=`two;
        sym=1'b0;
3'b100: value<=`two;
        sym=1'b1;
3'b101: value<=`one;
        sym=1'b1;
3'b110: value<=`one;
        sym=1'b1;
3'b111: value<=`two;
        sym=1'b0;
default: value<=`zero;
         sym=1'b0;
endcase
end
endmodule
