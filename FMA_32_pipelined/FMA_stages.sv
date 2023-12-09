// ignore the clk and rst first.

module FMA_stage1(a,b,c,current_exp,man_a,man_b,sign_ab,sign_real_c,op_mode,shift_ex_c); // 
input logic [31:0]a,b,c;

// output logic pipeline stage 1
output logic [7:0] current_exp;
output logic [23:0]man_a,man_b;
output logic sign_a,sign_b,sign_c;
output logic [1:0]op_mode; //00 : right shift but concat
                           //01 : right shift but need add
                           //10 : left  shift but concat
                           //11 : left  shift but need add  
output logic [73:0]shift_ex_c;
output logic sign_ab,sign_real_c;
logic [7:0]exp_a,exp_b,exp_c;
logic [23:0] man_c;


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
             1'b1 : op_mode=(shift>47)?2'b00:2'b01; // right
                    shift_ex_c=ext_c>>shift;
             1'b0 : op_mode=(shift>26)?2'b10:2'b11;
                    shift_ex_c=ext_c<<shift;
            default:         op_mode = 0; 
                             shift_ex_c=0;     
        endcase
end


endmodule


module FMA_stage2();

// Note:  in this stage, it should run the Wallace tree to handle the partial products.
// The booth encoder result only gives the coefficients of the partial products, they still need to be shifted according to the Alg.
// In ideal condition, the addition in the a*b+c, should be also included in the Wallace tree.
// Find a good cut point that we dont need so many registers to cut the wallace tree into two stages.



// booth4_encoder
// CSA tree, which should includes the addition of c.  c should be  input from the stage 1.
// find a good cut point to cut the CSA tree into two stages.


endmodule

module FMA_stage3();


// final result add
// if 0<c-a-b<24,need another add.
// if -48<c-a-b<0, need another add.
// other, concat.

// need judge the operation 

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


// booth4 encoding

// module booth4_encoding(code,encode);
//    input logic [2:0] code;
//    output logic signed [2:0] encode;
// //    logic [47:0] two_b,b,minus_b,minus_two_b;

// //    assign b={24'b0,man_b} ;
// //    assign two_b=b<< 1;
// //    assign minus_b=~b+1'b1;
// //    assign minus_two_b=~two_b+1'b1;
//     always_comb begin
//         case (code)
//             3'b000, 3'b111:  encode = 0;    //  0
//             3'b001, 3'b010:  encode = 1;            //  1
//             3'b011:          encode = 2;        //  2
//             3'b100:          encode = -2;  // -2
//             3'b101, 3'b110:  encode = -1;      // -1
//             default:         encode = 0;      
//         endcase
//     end

// endmodule

module booth4_encoding(a,code,partial_product,shift);
   input logic [23:0]a;
   input logic [2:0] code;
   input [4:0] shift;
   output logic [47:0] partial_product;

//    logic [47:0] two_b,b,minus_b,minus_two_b;

//    assign b={24'b0,b} ;
//    assign two_b=b<< 1;
//    assign minus_b=~b+1'b1;
//    assign minus_two_b=~two_b+1'b1;
logic [47:0] one;
assign one =a[23]?{24'hFFFFFF,a}:{24'b0,a};
logic [47:0] two;
assign two =a[23]?{3'b111,20'hFFFFF,a,1'b0}:{23'b0,a,1'b0};
logic [47:0] minus_one;
assign minus_one = ~one+1'b1;
logic [47:0] minus_two;
assign minus_two = ~two+1'b1;

    always_comb begin
        case (code)
            3'b000, 3'b111:  partial_product = 48'b0;    //  0
            3'b001, 3'b010:  partial_product = one<<shift;            //  1
            3'b011:          partial_product = two<<shift;        //  2
            3'b100:          partial_product = minus_two<<shift;  // -2
            3'b101, 3'b110:  partial_product = minus_one<<shift;      // -1
            default:         partial_product = 48'b0;      
        endcase
    end
endmodule
