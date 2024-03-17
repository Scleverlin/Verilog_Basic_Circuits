// each 16 FMAs use one booth encoder

module partialproductgenerator (mantissa_a,one,two,minus_one,minus_two);
input logic [10:0]mantissa_a;

// a的11位浮点数需要加一个符号位，不然全是负数,所以总共是12位；

// output logic zero; // 0 不需要考虑位数， 只用1位来省导线
output logic [11:0] one;
output logic [11:0] minus_one;
output logic [12:0] two;
output logic [12:0] minus_two;
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

endmodule


// module booth_radix_8_lookup_table(mantissa_b);
// // typedef logic [15:0] Row [15:0];
// input logic [10:0] mantissa_b;
// output logic [11:0] booth_encoded_b;

// logic [3:0]lookup_table [15:0];



// endmodule

module multiplexer_small(B_mantissa,lookup_table,Row_A_mul,one,minus_one,two,minus_two);
input logic [10:0] B_mantissa;
input logic [2:0]lookup_table [7:0];
output logic [143:0] Row_A_mul ;
input logic [11:0] one;
input logic [11:0] minus_one;
input logic [12:0] two;
input logic [12:0] minus_two;
always @ (*) begin
        case ({ B_mantissa[1:0],1'b0})
             lookup_table[0],lookup_table[7]:begin // 0
             Row_A_mul[23:0]=24'b0; Row_A_mul[24]=1'b0;
             end
             lookup_table[1],lookup_table[2] : begin //1
             Row_A_mul[23:0]={12'b0,one}; Row_A_mul[24]=1'b0;  
             end
             lookup_table[3]:begin  // 2
             Row_A_mul[23:0]={11'b0,two}; Row_A_mul[24]=1'b0; 
             end
             lookup_table[4]:begin //-2
             Row_A_mul[23:0]={11'b11111111111,minus_two}; Row_A_mul[24]=1'b1;  
             end
             lookup_table[5],lookup_table[6]:begin  // 3
             Row_A_mul[23:0]={12'b111111111111,minus_one}; Row_A_mul[24]=1'b1; 
             end
            default:begin 
             Row_A_mul[23:0]=24'b0; Row_A_mul[24]=1'b0;    
             end    
        endcase
end

always @ (*) begin
        case ( B_mantissa[3:1]) // shift 2 zero  
             lookup_table[0],lookup_table[7]:begin 
             Row_A_mul[47:25]=23'b0; Row_A_mul[48]=1'b0;
             end
             lookup_table[1],lookup_table[2]:begin 
             Row_A_mul[47:25]={10'b0,one,1'b0}; Row_A_mul[48]=1'b0;  
             end
             lookup_table[3]:begin  // 2
             Row_A_mul[47:25]={9'b0,two,1'b0}; Row_A_mul[48]=1'b0; 
             end
             lookup_table[4]:begin //-2
             Row_A_mul[47:25]={9'b111111111,minus_two,1'b0}; Row_A_mul[48]=1'b1;  
             end
             lookup_table[5],lookup_table[6]:begin  // 3
             Row_A_mul[47:25]={10'b1111111111,minus_one,1'b0}; Row_A_mul[48]=1'b1; 
             end
            default:begin 
             Row_A_mul[47:25]=23'b0; Row_A_mul[48]=1'b0;    
             end    
        endcase
end
 

always @ (*) begin
        case ( B_mantissa[5:3])  // shift 4 zeros
             lookup_table[0],lookup_table[7] : 
             begin 
             Row_A_mul[71:49]=23'b0; Row_A_mul[72]=1'b0;
             end
             lookup_table[1],lookup_table[2] : begin 
             Row_A_mul[71:49]={8'b0,one,3'b0}; Row_A_mul[72]=1'b0; 
             end
             lookup_table[3]:begin  // 2
             Row_A_mul[71:49]={7'b0,two,3'b0}; Row_A_mul[72]=1'b0; 
             end
             lookup_table[4]:begin //-2
             Row_A_mul[71:49]={7'b1111111,minus_two,3'b0}; Row_A_mul[72]=1'b1;  
             end
             lookup_table[5],lookup_table[6]:begin  // 3
             Row_A_mul[71:49]={8'b11111111,minus_one,3'b0}; Row_A_mul[72]=1'b1; 
             end
            default:begin 
             Row_A_mul[71:49]=23'b0; Row_A_mul[72]=1'b0;    
             end    
        endcase
end
 
always @ (*) begin
        case (B_mantissa[7:5])  // shift 6 zeros                                                                                                          
             lookup_table[0],lookup_table[7] : 
             begin 
             Row_A_mul[95:73]=23'b0; Row_A_mul[96]=1'b0;
             end
             lookup_table[1],lookup_table[2] : begin 
             Row_A_mul[95:73]={6'b0,one,5'b0}; Row_A_mul[96]=1'b0;
             end
             lookup_table[3]:begin  // 2
             Row_A_mul[95:73]={5'b0,two,5'b0}; Row_A_mul[96]=1'b0;
             end
             lookup_table[4]:begin //-2
             Row_A_mul[95:73]={5'b11111,minus_two,5'b0};Row_A_mul[96]=1'b1; 
             end
             lookup_table[5],lookup_table[6]:begin  // 3
             Row_A_mul[95:73]={6'b111111,minus_one,5'b0}; Row_A_mul[96]=1'b1;
             end
            default:begin 
             Row_A_mul[95:73]=23'b0; Row_A_mul[96]=1'b0;
             end    
        endcase
end

always @ (*) begin
        case (B_mantissa[9:7])  // shift 8 zeros                                                                                                          
             lookup_table[0],lookup_table[7] : 
             begin 
             Row_A_mul[119:97]=23'b0; Row_A_mul[120]=1'b0;
             end
             lookup_table[1],lookup_table[2] : begin 
             Row_A_mul[119:97]={4'b0,one,7'b0}; Row_A_mul[120]=1'b0;
             end
             lookup_table[3]:begin  // 2
             Row_A_mul[119:97]={3'b0,two,7'b0}; Row_A_mul[120]=1'b0;
             end
             lookup_table[4]:begin //-2
             Row_A_mul[119:97]={3'b111,minus_two,7'b0};Row_A_mul[120]=1'b1; 
             end
             lookup_table[5],lookup_table[6]:begin  // 3
             Row_A_mul[119:97]={4'b1111,minus_one,7'b0}; Row_A_mul[120]=1'b1;
             end
            default:begin 
             Row_A_mul[119:97]=23'b0; Row_A_mul[120]=1'b0;
             end    
        endcase
end

always @ (*) begin
        case ({1'b0,B_mantissa[10:9]})  // shift 10 zeros                                                                                                          
             lookup_table[0],lookup_table[7] : 
             begin 
             Row_A_mul[143:121]=23'b0; 
             end
             lookup_table[1],lookup_table[2] : begin 
             Row_A_mul[143:121]={2'b0,one,9'b0}; 
             end
             lookup_table[3]:begin  // 2
             Row_A_mul[143:121]={1'b0,two,9'b0}; 
             end
            default:begin 
             Row_A_mul[143:121]=23'b0;
             end    
        endcase
end

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
	      end else begin
            // 不需要舍入
            exp_add = 1'b0;
            rounded_man = man;
        end
    end
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
logic [5:0] exp_a;
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


module FMA_FP16(a,b,c,product);
input logic [15:0]a,b,c;
output logic [15:0]product;
logic sign_ab,sign_c;
logic [5:0] exp_c_minus_ab;
logic [10:0] mantissa_a,mantissa_b, mantissa_c;  // Includes implicit leading 1 for normalized
logic [5:0] exp_ab;
logic [11:0] one;
logic [11:0] minus_one;
logic [12:0] two;
logic [12:0] minus_two;
logic [2:0]lookup_table [7:0];
logic [143:0] Row_A_mul ;
assign lookup_table[0]=3'b000;
assign lookup_table[1]=3'b001;
assign lookup_table[2]=3'b010;
assign lookup_table[3]=3'b011;
assign lookup_table[4]=3'b100;
assign lookup_table[5]=3'b101;
assign lookup_table[6]=3'b110;
assign lookup_table[7]=3'b111;


extractor_for_one extractor (a,b,c,sign_ab,exp_ab,sign_c,exp_c_minus_ab,mantissa_a,mantissa_b,mantissa_c);
// Booth raidx 4 and Booth radix 8 version.
// booth radix 8 first
partialproductgenerator ppg (mantissa_a,one,two,minus_one,minus_two);
multiplexer_small mux (mantissa_b,lookup_table,Row_A_mul,one,minus_one,two,minus_two);


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
logic [47:0] result_l1,result_l11;
assign result_l1=FA_function(Row_A_mul[23:0],Row_A_mul[47:24],Row_A_mul[71:48]);
assign result_l11=FA_function(Row_A_mul[95:72],Row_A_mul[119:96],Row_A_mul[143:120]);

logic [23:0] l1_1,l1_2,l1_3,l1_4;
assign l1_1= result_l1[23:0];
assign l1_2= result_l1[47:24];
assign l1_3= result_l11[23:0];
assign l1_4= result_l11[47:24];

logic [47:0] result_l2;
assign result_l2=FA_function(l1_1,l1_2,l1_3);
logic [23:0]l2_1,l2_2;
assign l2_1= result_l2[23:0];
assign l2_2= result_l2[47:24];

logic [47:0] result_l3;
assign result_l3=FA_function(l2_1,l2_2,l1_4);

logic [23:0] CSA_result_tmp;
logic [21:0] CSA_result;
assign CSA_result_tmp=result_l3[47:24]+result_l3[23:0];
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