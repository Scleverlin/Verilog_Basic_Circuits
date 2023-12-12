// ignore the clk and rst first.

module FMA_stage1(a,b,c,current_exp,man_a,man_b,sign_ab,sign_real_c,op_mode,shift_ex_c,exp_c); // 
input logic [31:0]a,b,c;

// output logic pipeline stage 1
output logic [7:0] current_exp;
output logic [23:0]man_a,man_b;
output logic [1:0]op_mode; //00 : right shift but concat
                           //01 : right shift but need add
                           //10 : left  shift but concat
                           //11 : left  shift but need add  
output logic [73:0]shift_ex_c;
output logic sign_ab,sign_real_c;
logic [7:0]exp_a,exp_b;
output logic [7:0]exp_c;
logic [23:0] man_c;
logic sign_a,sign_b,sign_c;

extractor_FP_32 ex_a(a,sign_a,exp_a,man_a);
extractor_FP_32 ex_b(b,sign_b,exp_b,man_b);
extractor_FP_32 ex_c(c,sign_c,exp_c,man_c);
pre_processing  pre_processing (exp_a,exp_b,exp_c,current_exp,shift,right_or_left);



assign sign_ab=sign_a+sign_b;

assign sign_real_c=sign_ab+sign_c;

// adder shift could be removed here.
logic [7:0]shift; // shift abs 
logic right_or_left; // 1 is right, 0 is left

logic [73:0]ext_c;
assign ext_c={26'b0,1'b0,man_c,23'b0};

always_comb begin
        case (right_or_left)
             1'b1 : begin op_mode=(shift>47)?2'b00:2'b01; // right
                    shift_ex_c=ext_c>>shift;
             end
             1'b0 : begin op_mode=(shift>27)?2'b10:2'b11;
                    shift_ex_c=(shift>27)?{man_c,50'b0}:ext_c<<shift;
             end
            default:begin    op_mode = 0; 
                             shift_ex_c=0; 
             end    
        endcase
end

endmodule


module FMA_stage2(current_exp,exp_c,man_a,man_b,sign_ab,sign_real_c,op_mode,shift_ex_c,man_compl,final_sign,cur_exp,e_c,mul_zero,mode);

// Note:  in this stage, it should run the Wallace tree to handle the partial products.
// The booth encoder result only gives the coefficients of the partial products, they still need to be shifted according to the Alg.
// In ideal condition, the addition in the a*b+c, should be also included in the Wallace tree.
// Find a good cut point that we dont need so many registers to cut the wallace tree into two stages.

// booth4_encoder
// CSA tree, which should includes the addition of c.  c should be  input from the stage 1.
// find a good cut point to cut the CSA tree into two stages.

input logic [7:0] current_exp;
input logic [23:0]man_a,man_b;
input logic [1:0]op_mode; //00 : right shift but concat
                           //01 : right shift but need add
                           //10 : left  shift but concat
                           //11 : left  shift but need add  
input logic [73:0]shift_ex_c;
input logic [7:0]exp_c;
output logic [7:0]e_c;
assign e_c=exp_c;
input logic sign_ab,sign_real_c;
output logic [50:0] man_compl;
output logic final_sign;
output logic [1:0]mode;
output logic [7:0]cur_exp;
output logic mul_zero;

assign cur_exp=current_exp;
assign mode=op_mode;
logic [47:0]mul;
logic [49:0] csa_final1;
logic [49:0] csa_final2;

logic [50:0]man;



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

logic sign_of_add;

always @* begin
    case (op_mode)
        2'b00: man = {3'b0, mul};
        2'b01: man = sign_real_c ? {3'b0, mul} - shift_ex_c[50:0] : {3'b0, mul} + shift_ex_c[50:0];
        2'b10: man = shift_ex_c[73:23];
        2'b11: man = sign_real_c ? {26'b0, mul[47:23]} - shift_ex_c[73:23] : shift_ex_c[73:23] + {26'b0, mul[47:23]};
        default: man = 0;
    endcase
end


assign sign_of_add=sign_real_c?man[50]:0;

assign man_compl= sign_of_add?~man+1'b1:man;

//00 : right shift but concat
//01 : right shift but need add
//10 : left  shift but concat
//11 : left  shift but need add  

// in right shift mode, need 26+2+23 bits adder
// in left shift mode, it can be fused with CSA tree.
assign final_sign=sign_ab+sign_of_add;

assign mul_zero=(mul==0)?0:1;

endmodule

module FMA_stage3(current_exp,exp_c,mode,man,final_sign,final_result,mul_zero);
input logic [1:0]mode;
input logic [50:0]man;
input logic [7:0] current_exp;
input logic [7:0] exp_c;
input logic mul_zero;
input logic final_sign;
output logic [31:0]final_result;

// final result add
// if 0<c-a-b<24,need another add.
// if -48<c-a-b<0, need another add.
// other, concat.

// need judge the operation 
logic [50:0]man_shift;
logic signed [7:0] shift;

m_n_gen mn_gen (man,current_exp,mode,man_shift,shift);

logic signed [7:0] four_shift;
assign four_shift=8'd4-shift;
logic signed [7:0] twe_shift; // 27-shift
assign twe_shift=8'd27-shift;
logic signed [7:0] shift_add;

assign shift_add=(mode[1])?twe_shift:four_shift;

logic guard,round,sticky;

always@(*) begin
   case (mode)
        2'b11,2'b01,2'b00:begin guard=man_shift[26];round=man_shift[25];sticky=(man_shift[24:0]==0)?1'b0:1'b1;end
        2'b10:begin guard=1'b0;round=1'b0;sticky=mul_zero;end
        default:begin guard=0;round=0;sticky=0;end
endcase
end 

//00 : right shift but concat
//01 : right shift but need add
//10 : left  shift but concat
//11 : left  shift but need add  
logic [23:0]rounded_man;
logic exp_add;
rounding rounding(man_shift[50:27], guard,round, sticky,rounded_man,exp_add);

logic [7:0]final_exponent;

always_comb begin
   case (mode)
        2'b00:begin final_exponent=current_exp+{7'b0,exp_add}; end
        2'b01:begin final_exponent=current_exp+shift_add+{7'b0,exp_add};end
        2'b10:begin final_exponent=exp_c+{7'b0,exp_add}; end
        2'b11:begin final_exponent=current_exp+shift_add+{7'b0,exp_add}; end
        default:begin final_exponent=0; end
endcase
end 

assign final_result={final_sign,final_exponent,rounded_man[22:0]};

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


module m_n_gen (
    input logic [50:0] data,
    input logic [7:0] max_shift,
    input logic [1:0]mode,
    output logic [50:0] outdata,
    output logic [7:0] shift
);
logic [7:0]shift_tmp;
assign shift_tmp = 
               (data[50] == 1) ? 0 ://28
               (data[49] == 1) ? 1 :
               (data[48] == 1) ? 2 :
               (data[47] == 1) ? 3 :
               (data[46] == 1) ? 4 :
               (data[45] == 1) ? 5 :
               (data[44] == 1) ? 6 :
               (data[43] == 1) ? 7 :
               (data[42] == 1) ? 8 :
               (data[41] == 1) ? 9 :
               (data[40] == 1) ? 10 :
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
               (data[22] == 1) ? 28 :
                28;
logic [7:0]shift_tmp2;

assign shift_tmp2= mode[1]?shift_tmp:(max_shift>shift_tmp)?shift_tmp:max_shift;

assign outdata = data << shift_tmp2;
assign shift=shift_tmp2;
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

