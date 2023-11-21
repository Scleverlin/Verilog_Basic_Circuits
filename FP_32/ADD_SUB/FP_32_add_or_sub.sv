`include "/home/shi/verilog/FP_32/ADD_SUB/normalization.sv"

module FP_32_add_or_sub(add1,add2,command,result);
input logic [31:0] add1;
input logic [31:0] add2;
input clk;
input logic command;//1 is add, 0 is sub
output logic [31:0] result;

logic current_add;
logic current_sub;

assign current_add=command;
assign current_sub=~command;
logic [23:0] man_a; // a and b will be decided by the mode, order may be changed
logic [23:0] man_b;
logic [7:0] exponent_a;
logic [7:0] exponent_b;
logic result_sign;
logic add_or_sub;//1 is add, 0 is sub
normalization norm (add1,add2,current_add,current_sub,man_a,man_b,exponent_a,exponent_b,result_sign,add_or_sub);

// need consider exponent == 0
// both exponent == 0, dont need to shift, but may need to add one in exponent if there is an one in 24th bit
// if only one exponent == 0, just normal, but need add one in exponent. // E1-E2 or E1-1-0 
logic [7:0]e1_e2,e1_e2_0; // how about E1=0 and E2=0?
logic [7:0]shift_before_add;
logic [8:0]e1_e2_tmp;

assign e1_e2_tmp={1'b0,exponent_a}+ ~{1'b0,exponent_b}+9'b1;
assign e1_e2=e1_e2_tmp[7:0];
assign e1_e2_0=exponent_a+ ~{8'b1}+8'b1;


assign shift_before_add= (exponent_a>8'b0&& exponent_b >8'b0)? e1_e2 : (exponent_a>8'b0&&exponent_b==8'b0)? e1_e2_0 :8'b0  ;

logic [7:0]current_exponent_tmp;

assign current_exponent_tmp= (exponent_a>8'b0&& exponent_b >8'b0)? exponent_b : (exponent_a>8'b0&&exponent_b==8'b0)? 8'b1 :8'b0  ;

logic result_shift_or_not;

assign result_shift_or_not= (exponent_a==8'b0&&exponent_b==8'b0)?1'b0:1'b1;// when E1=E2=0, dont need to shift, but may need to add one in exponent if there is an one in 24th bit

logic [7:0]add_one_in_exponent;// 
assign add_one_in_exponent=8'b1;

logic add_or_not;// use adder or not

assign add_or_not=(e1_e2>8'd26)?1'b0:1'b1;

logic [49:0]extent_a,extent_a_shift,extent_b;

assign extent_a={26'b0,man_a};

assign extent_a_shift=extent_a<<e1_e2;

assign extent_b=add_or_sub?{26'b0,man_b}:{24'hFFFFFF,1'b1,~{1'b0,man_b}+25'b1};
logic [49:0]final_f_add;
logic [50:0]final_f_shift_tmp,final_f_shift,final_f_shift_tmp_2;
logic [7:0]shift_nums1,shift_nums2,shift_nums;
logic [23:0]final_f_rounded;
logic [50:0]final_f_add_tmp;
logic cout;
adder_50 adder (extent_a_shift,extent_b,final_f_add,cout);
assign final_f_add_tmp=add_or_sub?{cout,final_f_add}:{1'b0,final_f_add};    
m_n_gen_add m_n (final_f_add_tmp,final_f_shift_tmp,shift_nums1);
// logic [23:0] final_man_e1_eq_e2_eq_zero;
// adder_24 adder_24(man_a,man_b,final_man_e1_eq_e2_eq_zero);
logic first_zero;
assign first_zero=(final_f_shift_tmp[50]==1'b0)?1'b1:1'b0;
logic [7:0]max_shift;
assign max_shift=current_exponent_tmp+shift_nums1;

// assign final_f_shift_
m_n_gen_second_time m_n_second_time (final_f_shift_tmp,final_f_shift_tmp_2,shift_nums2,max_shift);
assign final_f_shift=final_f_shift_tmp_2;
assign shift_nums=shift_nums1-shift_nums2;



logic [7:0]final_exponent;

logic guard;
logic round;
logic sticky;
logic sticky_add;
logic sticky_not_add;
logic exp_add;
assign guard=final_f_shift[26];
assign round=final_f_shift[25];

assign sticky_add= (final_f_shift[24:0]==25'b0)? 1'b0:1'b1;
assign sticky_not_add= (man_b ==24'b0)?1'b0:1'b1;
assign sticky=add_or_not?sticky_add:sticky_not_add;
logic [23:0]rounding_man;
assign rounding_man=add_or_not?final_f_shift[50:27]:man_a;

rounding_grs_add rounding_grs_add (rounding_man,guard,round,sticky,final_f_rounded,exp_add);

// assign final_exponent_e1e2eqzero=final_man_e1_eq_e2_eq_zero[23]? current_exponent_tmp+add_one_in_exponent:current_exponent_tmp;
assign final_exponent=add_or_not?current_exponent_tmp+shift_nums+exp_add:exponent_a+exp_add;

logic [23:0]final_man;
// assign final_f_concat=man_a; // ignore rounding temporarily
logic [31:0]result_wire;
assign result_wire={result_sign,final_exponent,final_f_rounded[22:0]};
// assign final_result_concat={result_sign,exponent_a,final_f_concat[22:0]};
// assign final_result_add_or_sub={result_sign,final_exponent,final_f_shift[46:24]};// ignore rounding temporarily
// assign final_result_e1e2eqzero={result_sign,final_exponent_e1e2eqzero,final_man_e1_eq_e2_eq_zero[22:0]};

// assign result=~add_or_not?final_result_concat:result_shift_or_not?final_result_add_or_sub:final_result_e1e2eqzero;

always @(posedge clk) begin
    result<=result_wire;
end

endmodule


module adder_50(a,b,sum,cout);
input logic [49:0] a;
input logic [49:0] b;
output logic cout;
output logic [49:0] sum;

assign {cout,sum}=a+b;

endmodule


module m_n_gen_add (
    input logic [50:0] data,
    output logic [50:0] outdata,
    output logic [7:0] shift
);
logic [7:0]shift_tmp;
assign shift_tmp = (data[50] == 1) ? 0 :
                   (data[49] == 1) ? 1 :
                   (data[48] == 1) ? 2 :
               (data[47] == 1) ? 3 :
               (data[46] == 1) ? 4 :
               (data[45] == 1) ? 5 :
               (data[44] == 1) ? 6 :
               (data[43] == 1) ? 7 :
               (data[32] == 1) ? 8 :
               (data[31] == 1) ? 9 :
               (data[30] == 1) ? 10 :
               (data[39] == 1) ? 11 :
               (data[38] == 1) ? 12 :
               (data[37] == 1) ? 13 :
               (data[36] == 1) ? 14 :
               (data[35] == 1) ? 15 :
               (data[34] == 1) ? 16 :
               (data[33] == 1) ? 17 :
               (data[32] == 1) ? 18 :
               (data[31] == 1) ? 19 :
               (data[30] == 1) ? 20 :
               (data[29] == 1) ? 21 :
               (data[28] == 1) ? 22 :
               (data[27] == 1) ? 23 : 
               (data[26] == 1) ? 24 :
               (data[25] == 1) ? 25 :
               (data[24] == 1) ? 26 :
               (data[23] == 1) ? 27 :
               27;

assign outdata = data << shift_tmp;
assign shift=8'd27+ ~shift_tmp+8'd1;
endmodule

module m_n_gen_second_time (
  input logic [50:0] data,
  output logic [50:0] outdata,
  output logic [7:0] shift,
  input logic [7:0] max_shift
);
logic [7:0]shift_tmp;
assign shift_tmp = (data[50] == 1) ? 0 :
                 (data[49] == 1) ? 1 :
                 (data[48] == 1) ? 2 :
             (data[47] == 1) ? 3 :
             (data[46] == 1) ? 4 :
             (data[45] == 1) ? 5 :
             (data[44] == 1) ? 6 :
             (data[43] == 1) ? 7 :
             (data[32] == 1) ? 8 :
             (data[31] == 1) ? 9 :
             (data[30] == 1) ? 10 :
             (data[39] == 1) ? 11 :
             (data[38] == 1) ? 12 :
             (data[37] == 1) ? 13 :
             (data[36] == 1) ? 14 :
             (data[35] == 1) ? 15 :
             (data[34] == 1) ? 16 :
             (data[33] == 1) ? 17 :
             (data[32] == 1) ? 18 :
             (data[31] == 1) ? 19 :
             (data[30] == 1) ? 20 :
             (data[29] == 1) ? 21 :
             (data[28] == 1) ? 22 :
             (data[27] == 1) ? 23 : 
             23;
logic shift_tmp2;
assign shift_tmp2=(shift_tmp>max_shift)?max_shift:shift_tmp;
assign outdata = data << shift_tmp2;
assign shift=shift_tmp2;
endmodule

// module adder_24(a,b,sum);
// input logic [23:0] a;
// input logic [23:0] b;

// output logic [23:0] sum;

// assign sum=a+b;

// endmodule


module rounding_grs_add(
    input wire [23:0] man,  // 24-bit mantissa with implicit bit
    input wire guard,       // Guard bit
    input wire round,       // Round bit
    input wire sticky,      // Sticky bit
    output wire [23:0] rounded_man,  // Rounded mantissa
    output wire exp_add              // Set if there's a carry that affects the exponent
  );
    wire halfway = guard && !round && !sticky;  // Exactly between two representable values
    wire lsb = man[0];  // Least Significant Bit of the mantissa
    // Increment the mantissa if guard bit is set and (round or sticky bit is set or the mantissa is odd)
    wire increment = guard && (round || sticky || lsb);
    // Calculate the potential new mantissa with the increment
    wire [23:0] new_man = man + 24'd1;
    // Check if an increment would cause a carry, which implies the exponent needs to be incremented
    assign exp_add = increment && (new_man[23] == 1'b0);
    // Select the final rounded mantissa
    assign rounded_man = increment ? new_man : man;
  endmodule

