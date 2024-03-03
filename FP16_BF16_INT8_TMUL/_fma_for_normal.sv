// each 16 FMAs use one booth encoder

module partialproductgenerator (mantissa_a,one,two,three,four,minus_one,minus_two,minus_three,minus_four);
input logic [10:0]mantissa_a;

// a的11位浮点数需要加一个符号位，不然全是负数,所以总共是12位；

// output logic zero; // 0 不需要考虑位数， 只用1位来省导线
output logic [11:0] one;
output logic [11:0] minus_one;
output logic [12:0] two;
output logic [12:0] minus_two;
output logic [13:0] three;
output logic [13:0] minus_three;
output logic [13:0] four;
output logic [13:0] minus_four;
// output logic sign_a;
// output logic exp_a;

// These parts should be done in the extractor.

// assign sign_a=a[15];
// assign exp_a=a[14:10];
 
logic [11:0] mantissa_a_with_sign;
assign mantissa_a_with_sign[10:0]=mantissa_a;
// assign mantissa_a[10]=(exp_a==0)?0:1;
// assign mantissa_a[9:0]=a[9:0];
assign mantissa_a_with_sign[11]=1'b0;

// assign zero=1'b0;
assign one=mantissa_a_with_sign; 
assign minus_one=~mantissa_a_with_sign;
assign two={mantissa_a_with_sign,1'b0};
assign minus_two=~{mantissa_a_with_sign,1'b0};
assign three={2'b0,one}+{1'b0,two};
assign minus_three=~three;
assign four={mantissa_a_with_sign,2'b0};
assign minus_four=~four;

endmodule


// module booth_radix_8_lookup_table(mantissa_b);
// // typedef logic [15:0] Row [15:0];
// input logic [10:0] mantissa_b;
// output logic [11:0] booth_encoded_b;

// logic [3:0]lookup_table [15:0];



// endmodule

module multiplexer_small(B_mantissa,lookup_table,Row_A_mul,one,minus_one,two,minus_two,three,minus_three,four,minus_four);
input logic [10:0] B_mantissa;
input logic [3:0]lookup_table [15:0];
output logic [95:0] Row_A_mul ;
input logic [11:0] one;
input logic [11:0] minus_one;
input logic [12:0] two;
input logic [12:0] minus_two;
input logic [13:0] three;
input logic [13:0] minus_three;
input logic [13:0] four;
input logic [13:0] minus_four;
always @ (*) begin
        case ({ B_mantissa[2:0],1'b0})
             lookup_table[0],lookup_table[15]:begin // 0
             Row_A_mul[23:0]=24'b0; Row_A_mul[24]=1'b0;
             end
             lookup_table[1],lookup_table[2] : begin //1
             Row_A_mul[23:0]={12'b0,one}; Row_A_mul[24]=1'b0;  
             end
             lookup_table[3],lookup_table[4]:begin  // 2
             Row_A_mul[23:0]={11'b0,two}; Row_A_mul[24]=1'b0; 
             end
             lookup_table[5],lookup_table[6]:begin  // 3
             Row_A_mul[23:0]={10'b0,three}; Row_A_mul[24]=1'b0; 
             end
             lookup_table[7]:begin                  //4
             Row_A_mul[23:0]={10'b0,four}; Row_A_mul[24]=1'b0; 
             end
             lookup_table[8]:begin                  //-4
             Row_A_mul[23:0]={10'b1111111111,minus_four}; Row_A_mul[24]=1'b1; 
             end
             lookup_table[9],lookup_table[10]:begin // -3
             Row_A_mul[23:0]={10'b1111111111,minus_three}; Row_A_mul[24]=1'b1; 
             end
             lookup_table[11],lookup_table[12]:begin // -2
             Row_A_mul[23:0]={11'b11111111111,minus_two}; Row_A_mul[24]=1'b1; 
             end
             lookup_table[13],lookup_table[14]:begin //-1
             Row_A_mul[23:0]={12'b111111111111,minus_one}; Row_A_mul[24]=1'b1;  
             end
            default:begin 
             Row_A_mul[23:0]=24'b0; Row_A_mul[48]=1'b0;    
             end    
        endcase
end

always @ (*) begin
        case ( B_mantissa[5:2]) // shift 3 zeros
             lookup_table[0],lookup_table[15]:begin 
             Row_A_mul[47:25]=23'b0; Row_A_mul[48]=1'b0;
             end
             lookup_table[1],lookup_table[2]:begin 
             Row_A_mul[47:25]={9'b0,one,2'b0}; Row_A_mul[48]=1'b0;  
             end
             lookup_table[3],lookup_table[4]:begin
             Row_A_mul[47:25]={8'b0,two,2'b0}; Row_A_mul[48]=1'b0;  
             end
             lookup_table[5],lookup_table[6]:begin
             Row_A_mul[47:25]={7'b0,three,2'b0}; Row_A_mul[48]=1'b0;  
             end
             lookup_table[7]:begin
             Row_A_mul[47:25]={7'b0,four,2'b0}; Row_A_mul[48]=1'b0;  
             end
             lookup_table[8]:begin
             Row_A_mul[47:25]={7'b1111111,minus_four,2'b0}; Row_A_mul[48]=1'b1; 
             end
             lookup_table[9],lookup_table[10]:begin
             Row_A_mul[47:25]={7'b1111111,minus_three,2'b0}; Row_A_mul[48]=1'b1; 
             end
             lookup_table[11],lookup_table[12]:begin
             Row_A_mul[47:25]={8'b11111111,minus_two,2'b0}; Row_A_mul[48]=1'b1; 
             end
             lookup_table[13],lookup_table[14]:begin
             Row_A_mul[47:25]={9'b111111111,minus_one,2'b0}; Row_A_mul[48]=1'b1; 
             end

            default:begin    
             Row_A_mul[47:25]=23'b0; Row_A_mul[48]=1'b0;   
             end    
        endcase
end
 

always @ (*) begin
        case ( B_mantissa[8:5])  // shift 6 zeros
             lookup_table[0],lookup_table[15] : 
             begin 
             Row_A_mul[71:49]=23'b0; Row_A_mul[72]=1'b0;
             end
             lookup_table[1],lookup_table[2] : begin 
             Row_A_mul[71:49]={6'b0,one,5'b0}; Row_A_mul[72]=1'b0; 
             end
             lookup_table[3],lookup_table[4]:begin
             Row_A_mul[71:49]={5'b0,two,5'b0}; Row_A_mul[72]=1'b0; 
             end
             lookup_table[5],lookup_table[6]:begin
             Row_A_mul[71:49]={4'b0,three,5'b0}; Row_A_mul[72]=1'b0;  
             end
             lookup_table[7]:begin
             Row_A_mul[71:49]={4'b0,four,5'b0}; Row_A_mul[72]=1'b0; 
             end
             lookup_table[8]:begin
             Row_A_mul[71:49]={4'b1111,minus_four,5'b0}; Row_A_mul[72]=1'b1; 
             end
             lookup_table[9],lookup_table[10]:begin
             Row_A_mul[71:49]={4'b1111,minus_three,5'b0}; Row_A_mul[72]=1'b1; 
             end
             lookup_table[11],lookup_table[12]:begin
             Row_A_mul[71:49]={5'b11111,minus_two,5'b0}; Row_A_mul[72]=1'b1; 
             end
             lookup_table[13],lookup_table[14]:begin
             Row_A_mul[71:49]={6'b111111,minus_one,5'b0}; Row_A_mul[72]=1'b1;     
             end
            default:begin   
             Row_A_mul[71:49]=23'b0; Row_A_mul[72]=1'b0; 
             end    
        endcase
end
 
always @ (*) begin
        case ( {1'b0,B_mantissa[10:8]})  // shift 9 zeros, the first bit is always zero, 
                                        //so no need to consider the extra addition of 1 
                                        // in the case of complement                                                                                                                
             lookup_table[0],lookup_table[15] : 
             begin 
             Row_A_mul[95:73]=23'b0; 
             end
             lookup_table[1],lookup_table[2] : begin 
             Row_A_mul[95:73]={3'b0,one,8'b0};
             end
             lookup_table[3],lookup_table[4]:begin
             Row_A_mul[95:73]={2'b0,two,8'b0};
             end
             lookup_table[5],lookup_table[6]:begin
             Row_A_mul[95:73]={1'b0,three,8'b0};
             end
             lookup_table[7]:begin
             Row_A_mul[95:73]={1'b0,four,8'b0};
             end
            default:begin   
             end    
        endcase
end

endmodule


module multiplexer_for_row (one,two,three,four,minus_one,minus_two,minus_three,minus_four,RowB_mantissa,Row_A_mul);

// input logic mode; 
input logic [11:0] one;
input logic [11:0] minus_one;
input logic [12:0] two;
input logic [12:0] minus_two;
input logic [13:0] three;
input logic [13:0] minus_three;
input logic [13:0] four;
input logic [13:0] minus_four;
input logic [175:0] RowB_mantissa ;
output logic [1535:0] Row_A_mul ;
// typedef logic [10:0] Row [15:0];
// typedef logic [10:0] Row_with_sign [15:0];
// typedef logic [95:0] a_mul [15:0];

// BF16 OR FP16.. INT8 should be same processed as FP16
// now we only consider the FP16



logic [3:0]lookup_table [15:0];
assign lookup_table[0]=4'b0000;
assign lookup_table[1]=4'b0001;
assign lookup_table[2]=4'b0010;
assign lookup_table[3]=4'b0011;
assign lookup_table[4]=4'b0100;
assign lookup_table[5]=4'b0101;
assign lookup_table[6]=4'b0110;
assign lookup_table[7]=4'b0111;
assign lookup_table[8]=4'b1000;
assign lookup_table[9]=4'b1001;
assign lookup_table[10]=4'b1010;
assign lookup_table[11]=4'b1011;
assign lookup_table[12]=4'b1100;
assign lookup_table[13]=4'b1101;
assign lookup_table[14]=4'b1110;
assign lookup_table[15]=4'b1111;


multiplexer_small  multiplexer_0 (RowB_mantissa[10:0],lookup_table,Row_A_mul[95:0],one,minus_one,two,minus_two,three,minus_three,four,minus_four);
multiplexer_small  multiplexer_1 (RowB_mantissa[21:11],lookup_table,Row_A_mul[191:96],one,minus_one,two,minus_two,three,minus_three,four,minus_four);
multiplexer_small  multiplexer_2 (RowB_mantissa[32:22],lookup_table,Row_A_mul[287:192],one,minus_one,two,minus_two,three,minus_three,four,minus_four);
multiplexer_small  multiplexer_3 (RowB_mantissa[43:33],lookup_table,Row_A_mul[383:288],one,minus_one,two,minus_two,three,minus_three,four,minus_four);
multiplexer_small  multiplexer_4 (RowB_mantissa[54:44],lookup_table,Row_A_mul[479:384],one,minus_one,two,minus_two,three,minus_three,four,minus_four);
multiplexer_small  multiplexer_5 (RowB_mantissa[65:55],lookup_table,Row_A_mul[575:480],one,minus_one,two,minus_two,three,minus_three,four,minus_four);
multiplexer_small  multiplexer_6 (RowB_mantissa[76:66],lookup_table,Row_A_mul[671:576],one,minus_one,two,minus_two,three,minus_three,four,minus_four);
multiplexer_small  multiplexer_7 (RowB_mantissa[87:77],lookup_table,Row_A_mul[767:672],one,minus_one,two,minus_two,three,minus_three,four,minus_four);
multiplexer_small  multiplexer_8 (RowB_mantissa[98:88],lookup_table,Row_A_mul[863:768],one,minus_one,two,minus_two,three,minus_three,four,minus_four);
multiplexer_small  multiplexer_9 (RowB_mantissa[109:99],lookup_table,Row_A_mul[959:864],one,minus_one,two,minus_two,three,minus_three,four,minus_four);
multiplexer_small  multiplexer_10 (RowB_mantissa[120:110],lookup_table,Row_A_mul[1055:960],one,minus_one,two,minus_two,three,minus_three,four,minus_four);
multiplexer_small  multiplexer_11 (RowB_mantissa[131:121],lookup_table,Row_A_mul[1151:1056],one,minus_one,two,minus_two,three,minus_three,four,minus_four);
multiplexer_small  multiplexer_12 (RowB_mantissa[142:132],lookup_table,Row_A_mul[1247:1152],one,minus_one,two,minus_two,three,minus_three,four,minus_four);
multiplexer_small  multiplexer_13 (RowB_mantissa[153:143],lookup_table,Row_A_mul[1343:1248],one,minus_one,two,minus_two,three,minus_three,four,minus_four);
multiplexer_small  multiplexer_14 (RowB_mantissa[164:154],lookup_table,Row_A_mul[1439:1344],one,minus_one,two,minus_two,three,minus_three,four,minus_four);
multiplexer_small  multiplexer_15 (RowB_mantissa[175:165],lookup_table,Row_A_mul[1535:1440],one,minus_one,two,minus_two,three,minus_three,four,minus_four);




endmodule


// module boothencoder_radix_8 (RowB,mul_RowA,Exp_A,mode);
// typedef logic [15:0] Row [15:0];

// input Row  RowB;
// // input  [15:0] a;

// endmodule

module extractor_for_row (a,RowB,RowC,sign_ab,exp_ab,sign_c,exp_c_minus_ab,mantissa_a,mantissa_b,mantissa_c);

typedef logic [15:0] RowM [15:0];
input logic [15:0]a;
input RowM RowB,RowC;

output logic [95:0] exp_ab;
output logic [15:0] sign_ab;
output logic [15:0] sign_c;
output logic [95:0] exp_c_minus_ab;
output logic [10:0] mantissa_a;
output logic [175:0] mantissa_b,mantissa_c;  // Includes implicit leading 1 for normalized

logic sign_a;
logic [5:0] exp_a; // True exponent, considering denormalized numbers

assign sign_a = a[15];
// Adjust exponents for bias, directly setting for denormalized numbers
assign exp_a = (a[14:10] == 5'b00000) ? 6'b110010 : {1'b0,a[14:10]} + 6'b110001; // -14 for denormalized
assign mantissa_a = (a[14:10] != 5'b00000) ? {1'b1, a[9:0]} : {1'b0, a[9:0]};

extractor ex0  (sign_a,exp_a,RowB[0],RowC[0],sign_ab[0],exp_ab[5:0],sign_c[0],exp_c_minus_ab[5:0],mantissa_b[10:0],mantissa_c[10:0]);
extractor ex1  (sign_a,exp_a,RowB[1],RowC[1],sign_ab[1],exp_ab[11:6],sign_c[1],exp_c_minus_ab[11:6],mantissa_b[21:11],mantissa_c[21:11]);
extractor ex2  (sign_a,exp_a,RowB[2],RowC[2],sign_ab[2],exp_ab[17:12],sign_c[2],exp_c_minus_ab[17:12],mantissa_b[32:22],mantissa_c[32:22]);
extractor ex3  (sign_a,exp_a,RowB[3],RowC[3],sign_ab[3],exp_ab[23:18],sign_c[3],exp_c_minus_ab[23:18],mantissa_b[43:33],mantissa_c[43:33]);
extractor ex4  (sign_a,exp_a,RowB[4],RowC[4],sign_ab[4],exp_ab[29:24],sign_c[4],exp_c_minus_ab[29:24],mantissa_b[54:44],mantissa_c[54:44]);
extractor ex5  (sign_a,exp_a,RowB[5],RowC[5],sign_ab[5],exp_ab[35:30],sign_c[5],exp_c_minus_ab[35:30],mantissa_b[65:55],mantissa_c[65:55]);
extractor ex6  (sign_a,exp_a,RowB[6],RowC[6],sign_ab[6],exp_ab[41:36],sign_c[6],exp_c_minus_ab[41:36],mantissa_b[76:66],mantissa_c[76:66]);
extractor ex7  (sign_a,exp_a,RowB[7],RowC[7],sign_ab[7],exp_ab[47:42],sign_c[7],exp_c_minus_ab[47:42],mantissa_b[87:77],mantissa_c[87:77]);
extractor ex8  (sign_a,exp_a,RowB[8],RowC[8],sign_ab[8],exp_ab[53:48],sign_c[8],exp_c_minus_ab[53:48],mantissa_b[98:88],mantissa_c[98:88]);
extractor ex9  (sign_a,exp_a,RowB[9],RowC[9],sign_ab[9],exp_ab[59:54],sign_c[9],exp_c_minus_ab[59:54],mantissa_b[109:99],mantissa_c[109:99]);
extractor ex10 (sign_a,exp_a,RowB[10],RowC[10],sign_ab[10],exp_ab[65:60],sign_c[10],exp_c_minus_ab[65:60],mantissa_b[120:110],mantissa_c[120:110]);
extractor ex11 (sign_a,exp_a,RowB[11],RowC[11],sign_ab[11],exp_ab[71:66],sign_c[11],exp_c_minus_ab[71:66],mantissa_b[131:121],mantissa_c[131:121]);
extractor ex12 (sign_a,exp_a,RowB[12],RowC[12],sign_ab[12],exp_ab[77:72],sign_c[12],exp_c_minus_ab[77:72],mantissa_b[142:132],mantissa_c[142:132]);
extractor ex13 (sign_a,exp_a,RowB[13],RowC[13],sign_ab[13],exp_ab[83:78],sign_c[13],exp_c_minus_ab[83:78],mantissa_b[153:143],mantissa_c[153:143]);
extractor ex14 (sign_a,exp_a,RowB[14],RowC[14],sign_ab[14],exp_ab[89:84],sign_c[14],exp_c_minus_ab[89:84],mantissa_b[164:154],mantissa_c[164:154]);
extractor ex15 (sign_a,exp_a,RowB[15],RowC[15],sign_ab[15],exp_ab[95:90],sign_c[15],exp_c_minus_ab[95:90],mantissa_b[175:165],mantissa_c[175:165]);


endmodule

module extractor(sign_a,exp_a,b,c,sign_ab,exp_ab,sign_c,exp_c_minus_ab,mantissa_b,mantissa_c);
input logic sign_a;
input logic [15:0] b,c;
output logic sign_ab;

input logic [5:0] exp_a; // True exponent, considering denormalized numbers
 logic sign_b;
logic [5:0] exp_b; // True exponent, considering denormalized numbers
output logic sign_c;
 logic [5:0] exp_c; // True exponent, considering denormalized numbers
output logic [5:0] exp_c_minus_ab;
output logic [10:0] mantissa_b, mantissa_c;  // Includes implicit leading 1 for normalized
output logic [5:0] exp_ab;
// output logic [5:0]exp_c_with_offset;
// Extract sign bits
assign sign_b = b[15];
assign sign_c = c[15];

// Adjust exponents for bias, directly setting for denormalized numbers
assign exp_b = (b[14:10] == 5'b00000) ? 6'b110010 : {1'b0,b[14:10]} + 6'b110001; // -14 for denormalized
assign exp_c = (c[14:10] == 5'b00000) ? 6'b110010 : {1'b0,c[14:10]} + 6'b110001; // -14 for denormalized

// Extract mantissas, adding implicit leading 1 for normalized numbers
assign mantissa_b = (b[14:10] != 5'b00000) ? {1'b1, b[9:0]} : {1'b0, b[9:0]};
assign mantissa_c = (c[14:10] != 5'b00000) ? {1'b1, c[9:0]} : {1'b0, c[9:0]};

assign exp_ab = exp_a + exp_b;// process the offset in the final noprmalization
assign sign_ab = sign_a ^ sign_b;
assign exp_c_minus_ab = exp_c - exp_ab; //shift for Fc
endmodule



module simple_FMA(Row_A_mul,sign_ab,exp_ab,sign_c,exp_c_minus_ab,mantissa_c,product);
input logic [95:0] Row_A_mul;
input logic sign_ab;
input logic [5:0] exp_ab;
input logic sign_c;
input logic [5:0] exp_c_minus_ab;
input logic [10:0] mantissa_c;
output logic [15:0] product;


logic [5:0] shift_nums;
assign shift_nums=exp_c_minus_ab;

logic left_no_add;
// logic right_no_add; // looks like we don't need this
logic left_or_right;// 0 for left, 1 for right
assign left_or_right=shift_nums[5];
logic [5:0]comple_shift;
assign comple_shift=shift_nums[5]?~shift_nums+1:shift_nums;
assign left_no_add=(~shift_nums[5])&&(comple_shift>6'd13);
// assign right_no_add=(shift_nums[5])&&(comple_shift>6'd19);


function [47:0] FA_function ([23:0] x, [23:0] y, [23:0] z);
    logic [47:0] result;
    result[23:0] = x^y^z;
    result[24] = 0;
    result[47:25] = (x&y) | (y&z) | (z&x);
    return result;
endfunction

//CSA Tree
logic [47:0] result_l1;
assign result_l1=FA_function(Row_A_mul[23:0],Row_A_mul[47:24],Row_A_mul[71:48]);
logic [23:0] l1_1,l1_2;
assign l1_1= result_l1[23:0];
assign l1_2= result_l1[47:24];
logic [47:0] result_l2;
assign result_l2=FA_function(l1_1,l1_2,Row_A_mul[95:72]);
logic [23:0] CSA_result_tmp;
logic [21:0] CSA_result;
assign CSA_result_tmp=result_l2[47:24]+result_l2[23:0];
assign CSA_result=CSA_result_tmp[21:0];
// Tree end
logic [33:0]ext_man_c,shifted_man_c;

assign ext_man_c={13'b0,mantissa_c,10'b0};
assign shifted_man_c=left_or_right?ext_man_c>>comple_shift:ext_man_c<<comple_shift;

logic [34:0]add_result;
logic [34:0]ext_add;
logic [34:0]add_ext_c;
logic c_add_sign;
assign c_add_sign=sign_c^sign_ab;
assign add_ext_c=c_add_sign?~{1'b0,shifted_man_c}:{1'b0,shifted_man_c};

assign add_result=add_ext_c+{13'b0,CSA_result}+c_add_sign; // here should use an adder with carry in

logic add_sign;
assign add_sign=add_result[34];
logic final_sign;
assign final_sign=sign_ab^add_sign;
logic [34:0]comple_add_result;
assign comple_add_result=add_sign?~add_result+1'b1:add_result;
assign ext_add=comple_add_result[34:0];
logic signed [5:0]shift_man;
logic [5:0]lz_count;

leading_zero_counter_35 lzc (ext_add,lz_count,shift_man);
logic signed [5:0]max_offset;
assign max_offset=exp_ab+6'd14;
logic signed [5:0]shift_when_max_offset;
logic use_max_offset;
assign use_max_offset=($signed(exp_ab+shift_man)>=-14)?0:1;
assign shift_when_max_offset=14-max_offset;

logic [34:0] shifted_man;
logic signed [5:0] exp_offset;
assign shifted_man=use_max_offset?ext_add<<shift_when_max_offset:ext_add<<lz_count;
assign exp_offset=use_max_offset?max_offset:shift_man;

logic [10:0] man_before_round;

assign man_before_round=left_no_add?mantissa_c:shifted_man[34:24];

logic [10:0] rounded_man;
logic exp_add;
logic guard;
logic round;
logic sticky;
assign guard=left_no_add?0:shifted_man[23];
assign round=left_no_add?0:shifted_man[22];
assign sticky=left_no_add?0:shifted_man[21];

rounding rounding( man_before_round,   guard,  round, sticky, rounded_man, exp_add );

logic signed [5:0]final_exp_tmp;
logic [5:0]final_exp;

assign final_exp_tmp=left_no_add?exp_c_minus_ab+exp_add:exp_ab+exp_offset+exp_add;
assign final_exp= (final_exp_tmp>=-14&&rounded_man[10])?final_exp_tmp+6'd15:0;
assign product={final_sign,final_exp[4:0],rounded_man[9:0]};

endmodule




module FMA_Row(a,RowB,RowC,Row_product);
typedef logic [15:0] RowM [15:0];
input logic [15:0]a;
// input logic mode; // BF16 OR FP16.. INT8 should be same processed as FP16
input RowM RowB,RowC;

output [255:0] Row_product;

logic [95:0] exp_ab;
logic [15:0] sign_ab;
logic [15:0] sign_c;
logic [95:0] exp_c_minus_ab;
logic [10:0] mantissa_a;
// typedef logic [10:0] Row [15:0];
// typedef logic [95:0] a_mul [15:0];
// Row mantissa_b,mantissa_c;
logic [175:0] RowB_mantissa ;
logic [175:0] mantissa_c;  // Includes implicit leading 1 for normalized
// now we only consider the FP16
logic [1535:0]Row_A_mul;

 logic [11:0] one;
 logic [11:0] minus_one;
 logic [12:0] two;
 logic [12:0] minus_two;
 logic [13:0] three;
 logic [13:0] minus_three;
 logic [13:0] four;
 logic [13:0] minus_four;


// extractor ext0(a,b,c,sign_ab,exp_ab,sign_c,exp_c_minus_ab,mantissa_a,mantissa_b,mantissa_c);// it looks like the extractor of A only need to be done once.
// for the hardware in the extractor,
// a should be only use one time, but exp_c-exp_a+b need to be used 16 times.
// so we need a big extractor and inside the extractor, a will be extracted 1 time and reused 16 times,
// b and c need to be extracted 16 times.
// so the above module need to be modified to fit the hardware.

extractor_for_row  extractor (a,RowB,RowC,sign_ab,exp_ab,sign_c,exp_c_minus_ab,mantissa_a,RowB_mantissa,mantissa_c);
partialproductgenerator ppg (mantissa_a,one,two,three,four,minus_one,minus_two,minus_three,minus_four);

multiplexer_for_row  mulplexer_for_row (one,two,three,four,minus_one,minus_two,minus_three,minus_four,RowB_mantissa,Row_A_mul);

simple_FMA FMA0 (Row_A_mul[95:0],sign_ab[0],exp_ab[5:0],sign_c[0],exp_c_minus_ab[5:0],mantissa_c[10:0],Row_product[15:0]);
simple_FMA FMA1 (Row_A_mul[191:96],sign_ab[1],exp_ab[11:6],sign_c[1],exp_c_minus_ab[11:6],mantissa_c[21:11],Row_product[31:16]);
simple_FMA FMA2 (Row_A_mul[287:192],sign_ab[2],exp_ab[17:12],sign_c[2],exp_c_minus_ab[17:12],mantissa_c[32:22],Row_product[47:32]);
simple_FMA FMA3 (Row_A_mul[383:288],sign_ab[3],exp_ab[23:18],sign_c[3],exp_c_minus_ab[23:18],mantissa_c[43:33],Row_product[63:48]);
simple_FMA FMA4 (Row_A_mul[479:384],sign_ab[4],exp_ab[29:24],sign_c[4],exp_c_minus_ab[29:24],mantissa_c[54:44],Row_product[79:64]);
simple_FMA FMA5 (Row_A_mul[575:480],sign_ab[5],exp_ab[35:30],sign_c[5],exp_c_minus_ab[35:30],mantissa_c[65:55],Row_product[95:80]);
simple_FMA FMA6 (Row_A_mul[671:576],sign_ab[6],exp_ab[41:36],sign_c[6],exp_c_minus_ab[41:36],mantissa_c[76:66],Row_product[111:96]);
simple_FMA FMA7 (Row_A_mul[767:672],sign_ab[7],exp_ab[47:42],sign_c[7],exp_c_minus_ab[47:42],mantissa_c[87:77],Row_product[127:112]);
simple_FMA FMA8 (Row_A_mul[863:768],sign_ab[8],exp_ab[53:48],sign_c[8],exp_c_minus_ab[53:48],mantissa_c[98:88],Row_product[143:128]);
simple_FMA FMA9 (Row_A_mul[959:864],sign_ab[9],exp_ab[59:54],sign_c[9],exp_c_minus_ab[59:54],mantissa_c[109:99],Row_product[159:144]);
simple_FMA FMA10 (Row_A_mul[1055:960],sign_ab[10],exp_ab[65:60],sign_c[10],exp_c_minus_ab[65:60],mantissa_c[120:110],Row_product[175:160]);
simple_FMA FMA11 (Row_A_mul[1151:1056],sign_ab[11],exp_ab[71:66],sign_c[11],exp_c_minus_ab[71:66],mantissa_c[131:121],Row_product[191:176]);
simple_FMA FMA12 (Row_A_mul[1247:1152],sign_ab[12],exp_ab[77:72],sign_c[12],exp_c_minus_ab[77:72],mantissa_c[142:132],Row_product[207:192]);
simple_FMA FMA13 (Row_A_mul[1343:1248],sign_ab[13],exp_ab[83:78],sign_c[13],exp_c_minus_ab[83:78],mantissa_c[153:143],Row_product[223:208]);
simple_FMA FMA14 (Row_A_mul[1439:1344],sign_ab[14],exp_ab[89:84],sign_c[14],exp_c_minus_ab[89:84],mantissa_c[164:154],Row_product[239:224]);
simple_FMA FMA15 (Row_A_mul[1535:1440],sign_ab[15],exp_ab[95:90],sign_c[15],exp_c_minus_ab[95:90],mantissa_c[175:165],Row_product[255:240]);


endmodule



module leading_zero_counter_35 (
    input [34:0] data,
    output logic [5:0] lz_count,  //shift_nums
    output logic signed [5:0] exp_offset //exp_offset
);

    always @(*) begin
        casez(data)
            35'b1??????????????????????????????????: begin 
                lz_count = 0;
                exp_offset = 14;
            end
            35'b01?????????????????????????????????:  begin 
                lz_count = 1;
                exp_offset = 13;
            end
            35'b001????????????????????????????????: begin
                lz_count = 2;
                exp_offset = 12;
                end
            35'b0001???????????????????????????????: begin
                lz_count = 3;
                exp_offset = 11;
                end
            35'b00001??????????????????????????????: begin
                lz_count = 4;
                exp_offset = 10;
                end
            35'b000001?????????????????????????????: begin
                lz_count = 5;
                exp_offset = 9;
                end
            35'b0000001????????????????????????????: begin
                lz_count = 6;
                exp_offset = 8;
                end
            35'b00000001???????????????????????????: begin 
                lz_count = 7;
                exp_offset = 7;
                end
            35'b000000001??????????????????????????: begin 
                lz_count = 8;
                exp_offset = 6;
                end
            35'b0000000001?????????????????????????: begin 
                lz_count = 9;
                exp_offset = 5;
                end
            35'b00000000001????????????????????????: begin 
                lz_count = 10;
                exp_offset = 4;
                end
            35'b000000000001???????????????????????: begin
                lz_count = 11;
                exp_offset = 3;
                end
            35'b0000000000001??????????????????????: begin 
                lz_count = 12;
                exp_offset = 2;
                end
            35'b00000000000001?????????????????????: begin
                lz_count = 13;
                exp_offset =1;
                end
            35'b000000000000001????????????????????: begin
                lz_count = 14;
                exp_offset =0;
                end
            35'b0000000000000001???????????????????: begin 
                lz_count = 15;
                exp_offset =-1;
                end
            35'b00000000000000001??????????????????: begin 
                lz_count = 16;
                exp_offset =-2;
                end
            35'b000000000000000001?????????????????: begin 
                lz_count = 17;
                exp_offset =-3;
                end
            35'b0000000000000000001????????????????: begin 
                lz_count = 18;
                exp_offset =-4;
                end
            35'b00000000000000000001???????????????: begin 
                lz_count = 19;
                exp_offset =-5;
                end
            35'b000000000000000000001??????????????: begin 
                lz_count = 20;
                exp_offset =-6;
                end
            35'b0000000000000000000001?????????????: begin 
                lz_count = 21;
                exp_offset =-7;
                end
            35'b00000000000000000000001????????????: begin 
                lz_count = 22;
                exp_offset =-8;
                end
            35'b000000000000000000000001???????????: begin 
                lz_count = 23;
                exp_offset =-9;
                end
            35'b0000000000000000000000001??????????: begin 
                lz_count = 24;
                exp_offset =-10;
                end
            35'b00000000000000000000000001?????????: begin 
                lz_count = 25;
                exp_offset =-11;
                end
            35'b000000000000000000000000001????????: begin 
                lz_count = 26;
                exp_offset =-12;
                end
            35'b0000000000000000000000000001???????: begin 
                lz_count = 27;
                exp_offset =-13;
                end
            35'b00000000000000000000000000001??????: begin 
                lz_count = 28;
                exp_offset =-14;
                end
            35'b000000000000000000000000000001?????: begin 
                lz_count = 29;
                exp_offset =-15;
                end
            35'b0000000000000000000000000000001????: begin 
                lz_count = 30;
                exp_offset =-16;
                end
            35'b00000000000000000000000000000001???: begin 
                lz_count = 31;
                exp_offset =-17;
                end
            35'b000000000000000000000000000000001??: begin 
                lz_count = 32;
                exp_offset =-18;
                end
            35'b0000000000000000000000000000000001?: begin 
                lz_count = 33;
                exp_offset =-19;
                end                
            35'b00000000000000000000000000000000001: begin 
                lz_count = 34;
                exp_offset =-20;
                end          
            default: begin lz_count = 0; // for unknown or high-impedance states
                exp_offset = 0;
            end
        endcase
    end

endmodule

module rounding(
    input wire [10:0] man,  // 24-bit mantissa with implicit bit
    input wire guard,       // Guard bit
    input wire round,       // Round bit
    input wire sticky,      // Sticky bit
    output logic [10:0] rounded_man,  // Rounded mantissa
    output logic exp_add              // Set if there's a carry that affects the exponent
);

    wire tie; // 平局情况：保护位为1，而舍入位和粘滞位都为0
    assign tie = guard && !round && !sticky;

    always @(*) begin
        if (tie) begin
            // 平局到偶数：如果尾数最后一位是0，保持不变；如果是1，则向上舍入
            if (man[0]) begin
                {exp_add, rounded_man} = man + 11'h1;
            end else begin
                exp_add = 1'b0;
                rounded_man = man;
            end
        end else if (guard && (round || sticky)) begin
            // 非平局情况且需要向上舍入
            {exp_add, rounded_man} = man + 11'h1;
	   ;zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz        end else begin
            // 不需要舍入
            exp_add = 1'b0;
            rounded_man = man;
        end
    end
endmodule

module FMA_FP16(a,b,c,product);
input logic [15:0]a,b,c;
output logic [15:0]product;
logic sign_ab,sign_c;
logic [5:0] exp_c_minus_ab;
logic [10:0] mantissa_a,mantissa_b, mantissa_c;  // Includes implicit leading 1 for normalized
logic [5:0] exp_ab;

extractor_for_one extractor (a,b,c,sign_ab,exp_ab,sign_c,exp_c_minus_ab,mantissa_a,mantissa_b,mantissa_c);
// Booth raidx 4 and Booth radix 8 version.



endmodule

module extractor_for_one (a,b,c,sign_ab,exp_ab,sign_c,exp_c_minus_ab,mantissa_a,mantissa_b,mantissa_c);
// input logic sign_a;
input logic [15:0] a,b,c;
output logic sign_ab;

// input logic [5:0] exp_a; // True exponent, considering denormalized numbers
 logic sign_a, sign_b;
logic [5:0] exp_b; // True exponent, considering denormalized numbers
output logic sign_c;
 logic [5:0] exp_c; // True exponent, considering denormalized numbers
output logic [5:0] exp_c_minus_ab;
output logic [10:0] mantissa_a,mantissa_b, mantissa_c;  // Includes implicit leading 1 for normalized
output logic [5:0] exp_ab;
// output logic [5:0]exp_c_with_offset;
// Extract sign bits
assign sign_a = a[15];
assign sign_b = b[15];
assign sign_c = c[15];

// Adjust exponents for bias, directly setting for denormalized numbers
assign exp_a = (a[14:10] == 5'b00000) ? 6'b110010 : {1'b0,a[14:10]} + 6'b110001; // -14 for denormalized
assign exp_b = (b[14:10] == 5'b00000) ? 6'b110010 : {1'b0,b[14:10]} + 6'b110001; // -14 for denormalized
assign exp_c = (c[14:10] == 5'b00000) ? 6'b110010 : {1'b0,c[14:10]} + 6'b110001; // -14 for denormalized

// Extract mantissas, adding implicit leading 1 for normalized numbers
assign mantissa_a = (a[14:10] != 5'b00000) ? {1'b1, a[9:0]} : {1'b0, a[9:0]};
assign mantissa_b = (b[14:10] != 5'b00000) ? {1'b1, b[9:0]} : {1'b0, b[9:0]};
assign mantissa_c = (c[14:10] != 5'b00000) ? {1'b1, c[9:0]} : {1'b0, c[9:0]};

assign exp_ab = exp_a + exp_b;// process the offset in the final noprmalization
assign sign_ab = sign_a ^ sign_b;
assign exp_c_minus_ab = exp_c - exp_ab; //shift for Fc
endmodule