// ignore the clk and rst first.

module FMA_stage1(a,b,c,current_exp,partial_mul,right_or_left,shift,man_a,man_c,sign_a,sign_b,sign_c); // 
input logic [31:0]a,b,c;

// output logic pipeline stage 1
output logic [7:0] current_exp;
output logic [2:0]partial_mul [11:0];
output logic [7:0]shift; // shift abs 
output logic right_or_left; // 1 is right, 0 is left
output logic [23:0]man_a,man_c;
output logic sign_a,sign_b,sign_c;
logic [7:0]exp_a,exp_b,exp_c;
logic [23:0]man_b;

extractor_FP_32 ex_a(a,sign_a,exp_a,man_a);
extractor_FP_32 ex_b(b,sign_b,exp_b,man_b);
extractor_FP_32 ex_c(c,sign_c,exp_c,man_c);


pre_processing  pre_processing (exp_a,exp_b,exp_c,current_exp,shift,right_or_left);


booth4_encoding booth4_encoding   ({man_b[1:0],1'b0},partial_mul[0]);
booth4_encoding booth4_encoding2  (man_b[3:1],partial_mul[1]);
booth4_encoding booth4_encoding3  (man_b[5:3],partial_mul[2]);
booth4_encoding booth4_encoding4  (man_b[7:5],partial_mul[3]);
booth4_encoding booth4_encoding5  (man_b[9:7],partial_mul[4]);
booth4_encoding booth4_encoding6  (man_b[11:9],partial_mul[5]);
booth4_encoding booth4_encoding7  (man_b[13:11],partial_mul[6]);
booth4_encoding booth4_encoding8  (man_b[15:13],partial_mul[7]);
booth4_encoding booth4_encoding9  (man_b[17:15],partial_mul[8]);
booth4_encoding booth4_encoding10 (man_b[19:17],partial_mul[9]);
booth4_encoding booth4_encoding11 (man_b[21:19],partial_mul[10]);
booth4_encoding booth4_encoding12 (man_b[23:21],partial_mul[11]);



endmodule


module FMA_stage2();

// Note:  in this stage, it should run the Wallace tree to handle the partial products.
// The booth encoder result only gives the coefficients of the partial products, they still need to be shifted according to the Alg.
// In ideal condition, the addition in the a*b+c, should be also included in the Wallace tree.
// Find a good cut point that we dont need so many registers to cut the wallace tree into two stages.



endmodule

module FMA_stage3();

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

module booth4_encoding(code,encode);
   input logic [2:0] code;
   output logic signed [2:0] encode;
//    logic [47:0] two_b,b,minus_b,minus_two_b;

//    assign b={24'b0,man_b} ;
//    assign two_b=b<< 1;
//    assign minus_b=~b+1'b1;
//    assign minus_two_b=~two_b+1'b1;
    always_comb begin
        case (code)
            3'b000, 3'b111:  encode = 0;    //  0
            3'b001, 3'b010:  encode = 1;            //  1
            3'b011:          encode = 2;        //  2
            3'b100:          encode = -2;  // -2
            3'b101, 3'b110:  encode = -1;      // -1
            default:         encode = 0;      
        endcase
    end

endmodule

