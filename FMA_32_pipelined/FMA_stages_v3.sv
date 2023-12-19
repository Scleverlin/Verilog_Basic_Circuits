// ignore the clk and rst first.

module FMA_stage1(a,b,c,current_exp,man_a,man_b,man_c,sign_ab,sign_real_c,exp_c,shift,right_or_left); // 
input logic [31:0]a,b,c;

// output logic pipeline stage 1
output logic [7:0] current_exp;
output logic [23:0]man_a,man_b,man_c;
output logic sign_ab,sign_real_c;
logic [7:0]exp_a,exp_b;
output logic [7:0]exp_c;
output [7:0]shift;
output logic right_or_left; // 1 is right, 0 is left
logic sign_a,sign_b,sign_c;

extractor_FP_32 ex_a(a,sign_a,exp_a,man_a);
extractor_FP_32 ex_b(b,sign_b,exp_b,man_b);
extractor_FP_32 ex_c(c,sign_c,exp_c,man_c);
pre_processing  pre_processing (exp_a,exp_b,exp_c,current_exp,shift,right_or_left);
assign sign_ab=sign_a+sign_b;

assign sign_real_c=sign_ab+sign_c;


endmodule


module FMA_stage2(shift,right_or_left,current_exp,exp_c,man_a,man_b,man_c,sign_ab,sign_real_c,op_mode,shift_ex_c,cur_exp,e_c,sign,mul,r_or_l);

// Note:  in this stage, it should run the Wallace tree to handle the partial products.
// The booth encoder result only gives the coefficients of the partial products, they still need to be shifted according to the Alg.
// In ideal condition, the addition in the a*b+c, should be also included in the Wallace tree.
// Find a good cut point that we dont need so many registers to cut the wallace tree into two stages.

// booth4_encoder
// CSA tree, which should includes the addition of c.  c should be  input from the stage 1.
// find a good cut point to cut the CSA tree into two stages.

input logic [7:0] current_exp;
input logic [23:0]man_a,man_b,man_c;
input logic [7:0]shift; // shift abs 
input logic right_or_left; // 1 is right, 0 is left
output logic r_or_l;
output logic [74:0]shift_ex_c;
input logic [7:0]exp_c;
output logic [7:0]e_c;
assign e_c=exp_c;
input logic sign_ab,sign_real_c;
output logic op_mode;
output logic [7:0]cur_exp;
output logic [47:0]mul;
output logic [1:0] sign;
assign sign={sign_ab,sign_real_c};
assign cur_exp=current_exp;
assign r_or_l=right_or_left;
logic [49:0] csa_final1;
logic [49:0] csa_final2;

logic [49:0] partial_product [12:0];

booth4_encoding booth4_encoding   ({1'b0,man_a},{man_b[1:0],1'b0},partial_product[0],5'd0);
booth4_encoding booth4_encoding2  ({1'b0,man_a},man_b[3:1],partial_product[1],5'd2);
booth4_encoding booth4_encoding3  ({1'b0,man_a},man_b[5:3],partial_product[2],5'd4);
booth4_encoding booth4_encoding4  ({1'b0,man_a},man_b[7:5],partial_product[3],5'd6);
booth4_encoding booth4_encoding5  ({1'b0,man_a},man_b[9:7],partial_product[4],5'd8);
booth4_encoding booth4_encoding6  ({1'b0,man_a},man_b[11:9],partial_product[5],5'd10);
booth4_encoding booth4_encoding7  ({1'b0,man_a},man_b[13:11],partial_product[6],5'd12);
booth4_encoding booth4_encoding8  ({1'b0,man_a},man_b[15:13],partial_product[7],5'd14);
booth4_encoding booth4_encoding9  ({1'b0,man_a},man_b[17:15],partial_product[8],5'd16);
booth4_encoding booth4_encoding10 ({1'b0,man_a},man_b[19:17],partial_product[9],5'd18);
booth4_encoding booth4_encoding11 ({1'b0,man_a},man_b[21:19],partial_product[10],5'd20);
booth4_encoding booth4_encoding12 ({1'b0,man_a},man_b[23:21],partial_product[11],5'd22);
booth4_encoding booth4_encoding13 ({1'b0,man_a},{2'b0,man_b[23]},partial_product[12],5'd24);
function [99:0] FA_function ([49:0] x, [49:0] y, [49:0] z);
    reg [99:0] result;
    result[49:0] = x ^ y ^ z;         
    result[50] = 0;                  
    result[99:51] = (x & y) | (y & z) | (z & x); 
    return result;
endfunction

logic [99:0] result_1,result_2,result_3,result_4;

// CSA level 1 
assign result_1 = FA_function(partial_product[0], partial_product[1], partial_product[2]);
assign result_2 = FA_function(partial_product[3], partial_product[4], partial_product[5]);
assign result_3 = FA_function(partial_product[6], partial_product[7], partial_product[8]);
assign result_4 = FA_function(partial_product[9], partial_product[10], partial_product[11]);
logic [49:0] tmp_level1 [7:0];
assign tmp_level1[0]=result_1[49:0];
assign tmp_level1[1]=result_1[99:50];
assign tmp_level1[2]=result_2[49:0];
assign tmp_level1[3]=result_2[99:50];
assign tmp_level1[4]=result_3[49:0];
assign tmp_level1[5]=result_3[99:50];
assign tmp_level1[6]=result_4[49:0];
assign tmp_level1[7]=result_4[99:50];

// CSA level 2
logic [99:0] result_5,result_6;
assign result_5 = FA_function(tmp_level1[0],tmp_level1[1],tmp_level1[2]);
assign result_6 = FA_function(tmp_level1[3],tmp_level1[4],tmp_level1[5]);
logic [49:0] tmp_level2 [3:0];
assign tmp_level2[0]=result_5[49:0];
assign tmp_level2[1]=result_5[99:50];
assign tmp_level2[2]=result_6[49:0];
assign tmp_level2[3]=result_6[99:50];

//CSA level 3
logic [49:0] tmp_level3[3:0];
logic [99:0] result_7,result_8;
assign result_7 = FA_function(tmp_level2[0],tmp_level2[1],tmp_level2[2]);
assign result_8 = FA_function(tmp_level2[3],tmp_level1[6],tmp_level1[7]);
assign tmp_level3[0]=result_7[49:0];
assign tmp_level3[1]=result_7[99:50];
assign tmp_level3[2]=result_8[49:0];
assign tmp_level3[3]=result_8[99:50];

//CSA level 4
logic [49:0] tmp_level4[1:0];
logic [99:0] result_9;

assign result_9 = FA_function(tmp_level3[0],tmp_level3[1],tmp_level3[2]);
assign tmp_level4[0]=result_9[49:0];
assign tmp_level4[1]=result_9[99:50];

// CSA level 5

logic [99:0] result_10;

assign result_10 = FA_function(tmp_level4[0],tmp_level4[1],tmp_level3[3]);
assign csa_final1=result_10[49:0];
assign csa_final2=result_10[99:50];

logic [49:0]csa_last1,csa_last2;

logic [99:0] fa_result;
assign fa_result = FA_function(csa_final1, csa_final2, partial_product[12]);
assign {csa_last1, csa_last2} = fa_result;


logic [49:0]mul_ext;

assign mul_ext =csa_last1+csa_last2;
assign mul=mul_ext[47:0];


logic [74:0]ext_c;
assign ext_c={27'b0,1'b0,man_c,23'b0};

always_comb begin
        case (right_or_left)
             1'b1 : begin op_mode= (shift>47)?1'b0:1'b1; shift_ex_c=ext_c>>shift;  // concat is 0, add is 1
             end
             1'b0 : begin op_mode=(shift>28)?1'b0:1'b1; shift_ex_c=(shift>28)?{1'b0,man_c,50'b0}:ext_c<<shift; 
             end   
            default:begin    
                          op_mode=0;
                          shift_ex_c=0;  
             end    
        endcase
end

endmodule



module FMA_stage3(r_or_l,shift_ex_c,e_c,op_mode,cur_exp,mul,sign,add_result_tmp,current_exp,exp_c,mode,right_or_left,cin2,left_mul,left_ext_c,func_sign);
input logic r_or_l;
input logic [74:0]shift_ex_c;
input logic [7:0]e_c;
input  logic op_mode;
input  logic [7:0]cur_exp;
input  logic [47:0]mul;
input  logic [1:0] sign;
output logic  [39:0] add_result_tmp;
output logic [7:0]current_exp;
output logic [7:0] exp_c;
output logic mode;
output logic func_sign;
output logic right_or_left;
output logic cin2;
output logic [7:0]left_mul;
output logic [35:0]left_ext_c;
assign left_mul=mul[47:40];
assign right_or_left=r_or_l;
assign mode=op_mode;
assign exp_c=e_c;
assign current_exp=cur_exp;
assign func_sign=sign[1];   

logic [75:0] input_b;
logic cin;
logic [35:0]half_result;
logic cout;

assign cin=(sign[0])?1'b1:1'b0;

assign input_b=(sign[0])?{1'b1,~shift_ex_c}:{1'b0,shift_ex_c};
assign left_ext_c=input_b[75:40];
logic [35:0]tmp_b;
logic [3:0]tmp_b_2;
assign tmp_b=input_b[35:0];
assign tmp_b_2=input_b[39:36];
adder_36_cin adder_36 (mul[35:0],tmp_b,cin,half_result,cout);
adder_4_cin  adder_4  (mul[39:36],tmp_b_2,cout,add_result_tmp[39:36],cin2);

assign add_result_tmp[35:0]=half_result;


endmodule


module FMA_stage4(func_sign,left_mul,left_ext_c,add_result_tmp,cin2,current_exp,mode,right_or_left,exp_c,left_shift_add_result, current_exp_round,final_sign_v2,exp_c_final,shift_left,mode_and_direction,real_shift);
input logic [7:0]left_mul;
input logic func_sign;
input logic [35:0]left_ext_c;
input logic [39:0]add_result_tmp;
input logic cin2;
input logic [7:0]current_exp;
input logic [7:0] exp_c;
input logic mode;
input logic right_or_left;
output logic [1:0] mode_and_direction;
output logic [7:0] current_exp_round;
output logic final_sign_v2;
output logic [7:0] exp_c_final;
output logic [38:0]left_shift_add_result;
output logic signed [8:0]real_shift;
output logic signed [8:0]shift_left;
assign current_exp_round=current_exp;

assign exp_c_final=exp_c;
assign mode_and_direction={mode,right_or_left};

logic [35:0]half_result;
adder_36_no_cout  adder_36_stage4 ({28'b0,left_mul},left_ext_c,cin2,half_result);
logic [75:0]add_result_tmp_2,add_result;

assign add_result_tmp_2={half_result,add_result_tmp};
logic sign_of_add;
assign sign_of_add=add_result_tmp_2[75];
assign add_result=(sign_of_add)?~add_result_tmp_2+1'b1:add_result_tmp_2;
assign final_sign_v2=func_sign+sign_of_add;


function automatic [7:0] leading_zeros_count;
        input[75:0] x;
        for(leading_zeros_count = 0; leading_zeros_count <= 37; leading_zeros_count = leading_zeros_count + 1)
            if(x[75-leading_zeros_count]) break;
endfunction

logic [7:0]shift_tmp;

assign shift_tmp = leading_zeros_count(add_result);



logic signed [8:0] shift_max_check;
assign shift_max_check={1'b0,shift_tmp}-29;

assign shift_left=$signed({1'b0, current_exp})-$signed(shift_max_check);

assign real_shift=(~shift_left[8])?{1'b0,shift_tmp}:{1'b0,current_exp};

logic  [75:0]shift_add_result;
assign shift_add_result=add_result<<real_shift;

assign left_shift_add_result=shift_add_result[75:37];
endmodule

module FMA_stage5 (real_shift_stage4, mode_and_direction, left_shift_add_result     ,shift_left, current_exp_round,final_sign_v2,exp_c_final,result);
input logic [1:0] mode_and_direction;
input logic signed [8:0]real_shift_stage4;
input logic [38:0]left_shift_add_result;
input logic signed [8:0]shift_left;
input logic [7:0] current_exp_round;
input logic final_sign_v2;
input logic [7:0] exp_c_final;


output logic [31:0] result;


function automatic [7:0] leading_zeros_count;
        input[38:0] x;
        for(leading_zeros_count = 0; leading_zeros_count <= 38; leading_zeros_count = leading_zeros_count + 1)
            if(x[38-leading_zeros_count]) break;
endfunction

logic [7:0]shift_tmp;
assign shift_tmp = leading_zeros_count(left_shift_add_result);
logic signed [8:0]real_shift;
logic signed [8:0] shift_max_check;
assign shift_max_check={1'b0,shift_tmp}+8;
assign real_shift=(shift_left[8])?9'b0:(shift_max_check>shift_left)?shift_left:{1'b0,shift_tmp};
logic [38:0]final_shift_result;
assign final_shift_result=left_shift_add_result<<real_shift;
logic [7:0]exp_shift;
assign exp_shift= 8'd29-real_shift_stage4[7:0]-real_shift[7:0];

logic [26:0]rounded_man;
assign rounded_man=final_shift_result[38:12];
logic guard,round,sticky;
assign guard=(mode_and_direction[1])?rounded_man[2]:1'b0;
assign round=(mode_and_direction[1])?rounded_man[1]:1'b0;
assign sticky=(mode_and_direction[1])?rounded_man[0]:1'b0;

logic exp_add;
logic [23:0] rounded_man_tmp;
rounding rounding ( rounded_man[26:3], guard, round, sticky, rounded_man_tmp, exp_add);

logic [7:0]final_exp;

//mode // concat is 0, add is 1
// direction // 1 is right, 0 is left
always_comb begin
   case (mode_and_direction)
        2'b00:begin final_exp= exp_c_final+{7'b0,exp_add} ;end
        2'b11,2'b10,2'b01:begin final_exp= current_exp_round+exp_shift+{7'b0,exp_add};end
        default:begin final_exp=0; end
endcase
end 

assign result={final_sign_v2,final_exp,rounded_man_tmp[22:0]};

endmodule






module extractor_FP_32(a,sign,exp,man);
input logic [31:0]a;
output logic sign;
output logic [7:0]exp;
output logic [23:0]man;

assign sign = a[31];

assign exp=a[30:23];

assign man=(exp==8'b0)?{1'b0,a[22:0]}:{1'b1,a[22:0]};

endmodule


module pre_processing (exp_a,exp_b,exp_c,current_exp,shift,right_or_left);

input logic [7:0]exp_a,exp_b,exp_c;
output logic [7:0] current_exp;
output logic [7:0] shift; // abs of shift
output right_or_left;

logic signed [7:0]true_exp_ab_signed;
logic [7:0] data_127,data_126;
assign data_127=8'd127;
assign data_126=8'd126;

logic [7:0]true_a,true_b,true_c;

assign true_a=(exp_a==8'b0)?~data_126+1'b1:exp_a-data_127;

assign true_b=(exp_b==8'b0)?~data_126+1'b1:exp_b-data_127;

assign true_c=(exp_c==8'b0)?~data_126+1'b1:exp_c-data_127;

assign true_exp_ab_signed=true_a+true_b;
logic [7:0] current_exp_tmp;
assign current_exp_tmp=true_exp_ab_signed+8'd127;

assign current_exp=(true_exp_ab_signed==-126)?8'b0:current_exp_tmp;

logic signed  [8:0] shift_tmp;

assign shift_tmp=true_c-true_exp_ab_signed;

assign shift = shift_tmp[8]? -shift_tmp[7:0]:shift_tmp[7:0];

assign right_or_left=shift_tmp[8];//1 is right, 0 is left

endmodule


module booth4_encoding(a,code,partial_product,shift);
   input logic [24:0]a;
   input logic [2:0] code;
   input [4:0] shift;
   output logic [49:0] partial_product;

//    logic [47:0] two_b,b,minus_b,minus_two_b;

//    assign b={24'b0,b} ;
//    assign two_b=b<< 1;
//    assign minus_b=~b+1'b1;
//    assign minus_two_b=~two_b+1'b1;
logic [49:0] one;
assign one ={25'b0,a};
logic [49:0] two;
assign two ={24'b0,a,1'b0};
logic [49:0] minus_one;
assign minus_one = ~one+1'b1;
logic [49:0] minus_two;
assign minus_two = ~two+1'b1;

always_comb begin
        case (code)
            3'b000, 3'b111:  partial_product = 50'b0;    //  0
            3'b001, 3'b010:  partial_product = one<<shift;            //  1
            3'b011:          partial_product = two<<shift;        //  2
            3'b100:          partial_product = minus_two<<shift;  // -2
            3'b101, 3'b110:  partial_product = minus_one<<shift;      // -1
            default:         partial_product = 50'b0;      
        endcase
    end
endmodule



module rounding(
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

module adder_76(a,b,cin,add_result);
input [75:0]a,b;
input cin;
output [75:0]add_result;
assign add_result=a+b+cin;
endmodule

module adder_36_cin (a,b,cin,half_result,cout);
input [35:0]a,b;
input cin;
output [35:0]half_result;
output cout;

assign {cout,half_result}=a+b+cin;
endmodule

module adder_36_no_cout (a,b,cin,half_result);
input [35:0]a,b;
input cin;
output [35:0]half_result;
assign half_result=a+b+cin;
endmodule

module adder_4_cin (a,b,cin,half_result,cout);
input [3:0]a,b;
input cin;
output [3:0]half_result;
output cout;

assign {cout,half_result}=a+b+cin;
endmodule
