`include "FP_32_add_or_sub.sv"
`include "SRT_divider_FP32.sv"
`include "FP32_mul.sv"
// RNE rounding mode````

module decoder(func_code,op_code,mode);
input logic [6:0]func_code;
input logic [6:0]op_code;

output logic [2:0]mode;

always @(*) begin
    if (op_code == 7'b1010011) begin
        case (func_code)
            7'b0000000: mode = 3'b001;
            7'b0000100: mode = 3'b010;
            7'b0001000: mode = 3'b000;
            7'b0001100: mode = 3'b011;
            default:    mode = 3'b111;
        endcase
    end else begin
        mode = 3'bxxx; // 或者设置为您希望的默认值
    end
end
endmodule
module FPU_32(mode,a,b,result,clk,rst);
input logic [31:0]a,b;
input logic [2:0]mode;
input logic clk,rst;
output logic [31:0]result;


logic [31:0]result_mul,result_add,result_div;
// reg [31:0]a,b;
logic gated_clk_mul,gated_clk_add_or_sub,gated_clk_sub;
logic mul;
// assign mul=(mode==3'b000)?1'b1:1'b0;
logic add;
// assign add=(mode==3'b001)?1'b1:1'b0;
logic div;
// assign div=(mode==3'b011)?1'b1:1'b0;
logic sub;
// assign sub=(mode==3'b010)?1'b1:1'b0;

// assign gated_clk_mul = clk & mul;
// assign gated_clk_add_or_sub = clk & (add^sub);
// assign gated_clk_div = clk & div;
func_selector func_selector (mode,gated_clk_mul,gated_clk_add_or_sub,gated_clk_div,clk,mul,add,sub,div);

logic [5:0]flag;
FP32_mul mul_instance (.clk(gated_clk_mul),.mul1(a),.mul2(b),.product(result_mul));
SRT_divider_FP32 SRT_divider_FP32 (a,b,gated_clk_div,rst,result_div,flag);
FP_32_add_or_sub add_sub (a,b,add,result_add,gated_clk_add_or_sub);
logic [2:0]mode_reg;
result_selector select (mode_reg,result_mul,result_add,result_div,result,flag);
always @(posedge clk) begin
    if (~rst) begin
     mode_reg<= 3'b111;
    end else begin
     mode_reg<=mode;
    end
end
endmodule

module result_selector(mode,result_mul,result_add,result_div,output_r,flag);
    // 000:mul 001:add 010:sub, 011:div,111:others
input logic [2:0]mode;
input logic [5:0] flag;
input logic [31:0]result_mul,result_add,result_div;
output logic [31:0]output_r;


always @(*) begin
    case (mode)
        3'b000: output_r = result_mul;
        3'b001: output_r = result_add;
        3'b010: output_r = result_add;
        3'b011: output_r = (flag == 15) ? result_div : 32'b0;
        default: output_r = 32'b0;
    endcase
end
endmodule

module func_selector (mode,gated_clk_mul,gated_clk_add_or_sub,gated_clk_div,clk,mul,add,sub,div);
input logic [2:0] mode;
input logic clk;
output gated_clk_mul,gated_clk_add_or_sub,gated_clk_div;
output mul;
output add;
output div;
output sub;

assign mul=(mode==3'b000)?1'b1:1'b0;
assign add=(mode==3'b001)?1'b1:1'b0;
assign sub=(mode==3'b010)?1'b1:1'b0;
assign div=(mode==3'b011)?1'b1:1'b0;
assign gated_clk_mul = clk & mul;
assign gated_clk_add_or_sub = clk & (add^sub);
assign gated_clk_div = clk & div;
endmodule