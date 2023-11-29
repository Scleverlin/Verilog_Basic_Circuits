`include "add_normalization.sv"

module FP_32_add_or_sub(add1,add2,command,result);
input logic [31:0] add1;
input logic [31:0] add2;
// input clk;
input logic command;//1 is add, 0 is sub
output logic [31:0] result;

logic current_add;
logic current_sub;

assign current_add=command;
assign current_sub=~command;
logic [23:0] man_a; // a is the bigger one (abs), b is the smaller one
logic [23:0] man_b;
logic [7:0] exponent_a;
logic [7:0] exponent_b;
logic result_sign;
logic add_or_sub;//1 is add, 0 is sub
add_normalization norm (add1,add2,current_add,current_sub,man_a,man_b,exponent_a,exponent_b,result_sign,add_or_sub);

logic [7:0]e1_e2,reverse_e1_e2 ; 
logic [8:0]e1_e2_tmp;

assign e1_e2_tmp={1'b0,exponent_a}-{1'b0,exponent_b};
assign e1_e2=e1_e2_tmp[7:0];

logic [7:0]current_exponent_tmp;

assign current_exponent_tmp=exponent_b;

logic use_adder_or_not;// use adder or not

assign use_adder_or_not=(e1_e2>8'd26)?1'b0:1'b1; // give two bits for guard and round

assign reverse_e1_e2= 8'd26-e1_e2;
logic [25:0] extent_a,extent_b;
logic [23:0]man_b_shift;
assign man_b_shift=man_b>>e1_e2;
assign extent_a={1'b0,man_a,1'b0};
assign extent_b={1'b0,man_b_shift,1'b0};
logic [25:0]final_man_tmp;
adder_26 adder (extent_a,extent_b,add_or_sub,final_man_tmp);
logic [7:0]max_shift;
assign max_shift=current_exponent_tmp;
logic [7:0]shift;
logic [25:0]final_man_tmp_2;
m_n_gen_add_v2 shifter(final_man_tmp,final_man_tmp_2,shift,max_shift);
//e1-e2 need to be added in final exponent

logic [7:0]final_exponent;
logic guard;
logic round;
logic sticky;
logic sticky_add;
logic sticky_not_add;
logic exp_add;

logic [25:0]sticky_check;

assign sticky_check={2'b0,man_b}<<reverse_e1_e2;
assign sticky_add= (sticky_check==26'b0)?1'b0:1'b1;
assign sticky_not_add= (man_b==0)?1'b0:1'b1;
assign sticky=use_adder_or_not?sticky_add:sticky_not_add;

assign guard= use_adder_or_not?sticky_check[25]:1'b0;
assign round= use_adder_or_not?sticky_check[24]:1'b0;
logic [23:0]final_man_rounded;

logic [23:0]rounding_man;
assign rounding_man=use_adder_or_not?final_man_tmp_2[25:2]:man_a;

rounding_grs_add rounding (rounding_man, guard, round, sticky,final_man_rounded, exp_add);
logic [7:0]final_exp;
assign final_exp=use_adder_or_not?current_exponent_tmp+1'b1-shift+exp_add+e1_e2:exponent_a+exp_add;

assign result={result_sign,final_exp,final_man_rounded[22:0]};

endmodule


module adder_26 (a,b,add_or_sub,sum);
input logic [25:0] a;
input logic [25:0] b;
input add_or_sub;
// output logic cout;
output logic [25:0] sum;

assign sum=add_or_sub?a+b:a-b;

endmodule

module m_n_gen_add_v2 (
  input logic [25:0] data,
  output logic [25:0] outdata,
  output logic [7:0] shift,
  input logic [7:0] max_shift
);
logic [7:0]shift_tmp;
assign shift_tmp = (data[25] == 1) ? 0 :
                   (data[24] == 1) ? 1 :
                   (data[23] == 1) ? 2 :
                   (data[22] == 1) ? 3 :
                   (data[21] == 1) ? 4 :
                   (data[20] == 1) ? 5 :
                   (data[19] == 1) ? 6 :
                   (data[18] == 1) ? 7 :
                   (data[17] == 1) ? 8 :
                   (data[16] == 1) ? 9 :
                   (data[15] == 1) ? 10 :
                   (data[14] == 1) ? 11 :
                   (data[13] == 1) ? 12 :
                   (data[12] == 1) ? 13 :
                   (data[11] == 1) ? 14 :
                   (data[10] == 1) ? 15 :
                   (data [9] == 1) ? 16 :
                   (data [8] == 1) ? 17 :
                   (data [7] == 1) ? 18 :
                   (data [6] == 1) ? 19 :
                   (data [5] == 1) ? 20 :
                   (data [4] == 1) ? 21 :
                   (data [3] == 1) ? 22 :
                   (data [2] == 1) ? 23 :
                   (data [1] == 1) ? 24 :
                   (data [0] == 1) ? 25 :23;
logic [7:0]shift_tmp2;
assign shift_tmp2=(shift_tmp>max_shift)?max_shift:shift_tmp;
assign outdata = data << shift_tmp2;
assign shift=shift_tmp2;
endmodule

// module rounding_grs_add(
//     input wire [23:0] man,  // 24-bit mantissa with implicit bit
//     input wire guard,       // Guard bit
//     input wire round,       // Round bit
//     input wire sticky,      // Sticky bit
//     output wire [23:0] rounded_man,  // Rounded mantissa
//     output wire exp_add              // Set if there's a carry that affects the exponent
//   );
//     wire halfway = guard && !round && !sticky;  // Exactly between two representable values
//     wire lsb = man[0];  // Least Significant Bit of the mantissa
//     // Increment the mantissa if guard bit is set and (round or sticky bit is set or the mantissa is odd)
//     wire increment = guard && (round || sticky || lsb);
//     // Calculate the potential new mantissa with the increment
//     wire [23:0] new_man = man + 24'd1;
//     // Check if an increment would cause a carry, which implies the exponent needs to be incremented
//     assign exp_add = increment && (new_man[23] == 1'b0);
//     // Select the final rounded mantissa
//     assign rounded_man = increment ? new_man : man;
//   endmodule

module rounding_grs_add(
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
