

$depthofks = $ARGV[2];
$depthofbk =  $ARGV[1];
$bit =  $ARGV[3];

$log2_bit = log($bit) / log(2);

# print ("$log2_bit\n");
if ($depthofks + $depthofbk != int($log2_bit)) {
    die "Error: a + b is not equal to log2(c)\n";
}

open(DATA, ">./adder_gen/HC_${bit}_BK${depthofbk}_KS${depthofks}.v") or die "${depthofbk}_${depthofks}.v 文件无法打开, $!";
open(DATA2 , ">>./adder_names.txt");
print DATA2 "HC_${bit}_BK${depthofbk}_KS${depthofks}_top\n";
open(DATA3 , ">>./adder_path.txt");
print DATA3 "./adder_gen/HC_${bit}_BK${depthofbk}_KS${depthofks}.v\n";
open(DATA4 , ">>./adder_veri.txt");
print DATA4 "perl /home/shi/research/adder_project/verfication_gen.pl -w HC_${bit}_BK${depthofbk}_KS${depthofks} ${bit}  \n";

$max_of_pg=$bit-1;

print DATA "
/* verilator lint_off UNUSEDSIGNAL 
module HC_${bit}_BK${depthofbk}_KS${depthofks}_top (a,b,cin,sum,cout,clk,rst);
input [${max_of_pg}:0]a;
input [${max_of_pg}:0]b;
input cin;
output reg [${max_of_pg}:0]sum;
output reg cout;
input clk;
input rst;
wire [${max_of_pg}:0] sum_w;
wire cout_w;
reg cin_r;
HC_${bit}_BK${depthofbk}_KS${depthofks} u0 (a,b,cin_r,sum_w,cout_w);
always @(posedge clk ) begin
    if (rst) begin
        sum<=0;
        cout<=0;
    end
    else begin
        sum<=sum_w;
        cout<=cout_w; 
        cin_r <= cin;
    end
end
endmodule */

module P_G_gen_hc_${bit} (a,b,cin,p,g);
input [${max_of_pg}:0]a;
input [${max_of_pg}:0]b;
input cin;
output [${bit}:0]p;
output [${bit}:0]g;
assign g[0]=cin;
assign p[0]=0;
assign p[${bit}:1]=a^b;
assign g[${bit}:1]=a&b;
endmodule
";

print DATA"
module HC_${bit}_BK${depthofbk}_KS${depthofks} (a,b,cin,sum,cout);

input [${bit}:1]a;
input [${bit}:1]b;
input cin;
output [${bit}:1]sum;
output cout;
wire [${bit}:0]p;
wire [${bit}:0]g;
P_G_gen_hc_${bit} pg_gen_hc (a,b,cin,p,g);
";

$for_index= $bit;
print DATA"genvar i;
";
if ($depthofbk==0){
   
 for (my $i = 1; $i < int($log2_bit)+1 ; $i++) {
     $minux_index= 2**($i-1);
        if ($i==1) {
          print "kS_adder ! \n";
          print DATA"
wire [${max_of_pg}:0] gnpg_level${i};
wire [${max_of_pg}:0] pp_level${i};
assign gnpg_level1[0]=g[0];
assign pp_level1[0]=p[0];
        generate
            for (i = 1;i<${for_index} ;i=i+1 ) begin:gen_1
             //assign gnpg_level${i}[i]=g[i]|p[i]&g[i-${minux_index}]; 
             AO21 a1 (p[i],g[i-${minux_index}],g[i],gnpg_level${i}[i]); 
            //  assign pp_level${i}[i]=p[i]&p[i-${minux_index}];    
            AND2_X1 and1 (p[i],p[i-${minux_index}],pp_level${i}[i]);   
            end
        endgenerate";
    }     
     else {
        $j=$i-1;
       print "kS_adder ! \n";
       print DATA"
wire [${max_of_pg}:0] gnpg_level${i};
wire [${max_of_pg}:0] pp_level${i};
       generate
         for (i = ${minux_index};i<${for_index} ;i=i+1 ) begin:gen_${i}
           // assign gnpg_level${i}[i]=gnpg_level${j}[i]|pp_level${j}[i]&gnpg_level${j}[i-${minux_index}];  
             AO21 a2${i} (pp_level${j}[i],gnpg_level${j}[i-${minux_index}],gnpg_level${j}[i],gnpg_level${i}[i]);
          //  assign pp_level${i}[i]=pp_level${j}[i]&pp_level${j}[i-${minux_index}];  
             AND2_X1 and2 (pp_level${j}[i],pp_level${j}[i-${minux_index}],pp_level${i}[i]);          
         end
       endgenerate
       generate 
         for (i=0;i<$minux_index;i=i+1) begin
            assign gnpg_level${i}[i]=gnpg_level${j}[i];
            assign pp_level${i}[i]=pp_level${j}[i];
         end
       endgenerate  
         ";}

}
$endindex=int($log2_bit);
$endindexoflist=$for_index-1;
$sum_index=$bit+1;
print DATA"
assign cout= g[${bit}]|p[${bit}]&gnpg_level${endindex}[${endindexoflist}];
generate
   for (i = 1;i<${sum_index} ;i=i+1 ) begin
        assign  sum[i]= p[i]^gnpg_level${endindex}[i-1];    
   end
endgenerate
";
}
else  {
   for (my $i = 1; $i <int($log2_bit)+1 ; $i++){
            print DATA"
wire [${max_of_pg}:0] gnpg_level${i};
wire [${max_of_pg}:0] pp_level${i};";}
   for ( my $i = 1; $i <$depthofbk+1 ; $i++)
      {
         $skip_index=2**$i;
         $minus_index=$skip_index/2;
         if ($i==1) {
            # j is meaningless here and ignored by the compiler, so just ignore it. It is a copy-paste error.
            print DATA"
             generate
               for (i = 1;i<${bit} ;i=i+${skip_index} ) begin:gen_ks_1_${i}
              //  assign gnpg_level${i}[i]=g${j}[i]|p${j}[i]&g${j}[i-${minus_index}];  
                  AO21 a3 (p${j}[i],g${j}[i-${minus_index}],g${j}[i],gnpg_level${i}[i]);
                // assign pp_level${i}[i]=p${j}[i]&p${j}[i-${minus_index}];     
                  AND2_X1 and3 (p${j}[i],p${j}[i-${minus_index}],pp_level${i}[i]);
               end
            endgenerate
             generate
                for (i = 0;i<${bit} ;i=i+${skip_index}) begin
                 assign gnpg_level${i}[i]=g${j}[i];  
                 assign pp_level${i}[i]=p${j}[i];     
               end
            endgenerate";}
         else {
            $j=$i-1;
            $old_pass_index=$bit/$skip_index;
            print DATA"
             generate
              for (i = $skip_index-1 ;i<${bit};i=i+${skip_index}) begin:gen_ks_2_${i}
                // assign gnpg_level${i}[i]=gnpg_level${j}[i]|pp_level${j}[i]&gnpg_level${j}[i-${minus_index}]; 
                AO21 a4 (pp_level${j}[i],gnpg_level${j}[i-${minus_index}],gnpg_level${j}[i],gnpg_level${i}[i]); 
               // assign pp_level${i}[i]=pp_level${j}[i]&pp_level${j}[i-${minus_index}];     
                  AND2_X1 and4 (pp_level${j}[i],pp_level${j}[i-${minus_index}],pp_level${i}[i]);        
              end
            endgenerate ";
            for (my $k = 0; $k <$old_pass_index ; $k++) {
               print DATA "generate
              for (i = 0;i<${skip_index}-1 ;i=i+1) begin
                assign gnpg_level${i}[ ${skip_index}*${k}+i]=gnpg_level${j}[ ${skip_index}*${k}+i];
                assign pp_level${i}[ ${skip_index}*${k}+i]=pp_level${j}[ ${skip_index}*${k}+i];
               end
            endgenerate ";
            } }  }

$skip_index=2**($depthofbk+1)-1;
    for (my $i = 1; $i <$depthofks+1 ; $i++){
        $assign_index=$depthofbk+$i;
        $last_index=$depthofbk+$i-1;
        $add_index=2**$depthofbk;
        $mul=2**($i-1);
        print ("${skip_index}\n");
            print DATA"
            //KS 
            generate
              for (i = 0;i<(${bit}-${skip_index}) ;i=i+${add_index}) begin:gen_ks_4_${i}
               // assign gnpg_level${assign_index}[${skip_index}+i]=gnpg_level${last_index}[${skip_index}+i]|pp_level${last_index}[${skip_index}+i]&gnpg_level${last_index}[${skip_index}+i-${mul}*${add_index}];
               AO21 a5 (pp_level${last_index}[${skip_index}+i],gnpg_level${last_index}[${skip_index}+i-${mul}*${add_index}],gnpg_level${last_index}[${skip_index}+i],gnpg_level${assign_index}[${skip_index}+i]);
              //  assign pp_level${assign_index}[${skip_index}+i]=pp_level${last_index}[${skip_index}+i]&pp_level${last_index}[${skip_index}+i-${mul}*${add_index}];
               AND2_X1 and5 (pp_level${last_index}[${skip_index}+i],pp_level${last_index}[${skip_index}+i-${mul}*${add_index}],pp_level${assign_index}[${skip_index}+i]);
               end
            endgenerate";
            print DATA"
            generate
              for (i = 0;i<${skip_index};i=i+1) begin
                assign gnpg_level${assign_index}[i]=gnpg_level${last_index}[i];
                assign pp_level${assign_index}[i]=pp_level${last_index}[i];
               end
            endgenerate
            ";
     
     $loop_index=($bit-1-$skip_index)/$add_index;
      for ( my $j = 0; $j <$loop_index ; $j++)
      {
        $start=$skip_index+$add_index*$j;
        $end=$skip_index+$add_index*($j+1);
        print DATA "
        generate
            for (i = ${start}+1;i<${end};i=i+1) begin
               assign gnpg_level${assign_index}[i]=gnpg_level${last_index}[i];
               assign pp_level${assign_index}[i]=pp_level${last_index}[i];
            end
            endgenerate
        "
    }
    $skip_index+=$add_index*2**($i-1);
    print("${skip_index}\n");
}}

#post process


$depthoftree=int($log2_bit);
if ($depthofbk==0){
   print DATA" // ${depthofkl} is deep enough , no post process"
}
else {

$final_index=$depthofbk+int($log2_bit);
}

if ($depthofbk==1){
   print DATA" 
wire [${max_of_pg}:0] gnpg_level${final_index};
assign gnpg_level${final_index}[0]=gnpg_level${depthoftree}[0];
assign gnpg_level${final_index}[${bit}-1]=gnpg_level${depthoftree}[${bit}-1];

generate
    for (i = 1 ;i<${bit}/2;i=i+1) begin:gen_post_1
     // assign gnpg_level${final_index}[2*i]=gnpg_level${depthoftree}[2*i]|pp_level${depthoftree}[2*i]&gnpg_level${depthoftree}[2*i-1];
      AO21 a8 (pp_level${depthoftree}[2*i],gnpg_level${depthoftree}[2*i-1],gnpg_level${depthoftree}[2*i],gnpg_level${final_index}[2*i]);
      assign gnpg_level${final_index}[2*i-1]=gnpg_level${depthoftree}[2*i-1];
   end
 endgenerate   
assign sum[${bit}:1]=p[${bit}:1]^gnpg_level${final_index}[${bit}-1:0];
assign cout =g[${bit}]|p[${bit}]&gnpg_level${final_index}[${bit}-1];
   ";

}
elsif($depthofbk>1) {
   print ("index!\n");
   if ($depthofbk== int($log2_bit)){
       $depthofbk=int($log2_bit)-1;
       print ("${depthofbk}\n");
       $final_index=$final_index-1;
   }
    print DATA"
    wire [${max_of_pg}:0] gnpg_level${final_index};  
    ";

 for (my $i = 2; $i <$depthofbk+1 ; $i++) {
    $level_index=$final_index-$i+1;
    $max_nodes= 2*($bit-2**$i)/2**$i;    
    print DATA"
    wire [${max_nodes}-1:0] gnpg_level${level_index};   
    wire [${max_nodes}-1:0] pp_level${level_index}; 
    ";
}
$last_final_index=$final_index-1;
print DATA "
assign sum[${bit}:1]=p[${bit}:1]^gnpg_level${final_index}[${bit}-1:0];
assign cout =g[${bit}]|p[${bit}]&gnpg_level${final_index}[${bit}-1];
assign gnpg_level${final_index}[0]=gnpg_level${depthoftree}[0];
assign gnpg_level${final_index}[1]=gnpg_level${depthoftree}[1];
// assign gnpg_level${final_index}[2]=gnpg_level${depthoftree}[2]|pp_level${depthoftree}[2]&gnpg_level${depthoftree}[1];
AO21 a9 (pp_level${depthoftree}[2],gnpg_level${depthoftree}[1],gnpg_level${depthoftree}[2],gnpg_level${final_index}[2]);
assign gnpg_level${final_index}[${max_of_pg}]=gnpg_level${depthoftree}[${max_of_pg}];
generate 
   for (i = 1;i<(${bit}-2)/2 ;i=i+1 ) begin
      assign gnpg_level${final_index}[2*i+1]=gnpg_level${last_final_index}[i-1];
   end
endgenerate
generate 
   for (i = 2;i<${bit}/2 ;i=i+1 ) begin:gen_post_2
      //assign gnpg_level${final_index}[2*i]=gnpg_level${depthoftree}[2*i]|pp_level${depthoftree}[2*i]&gnpg_level${last_final_index}[i-2];
      AO21 a10 (pp_level${depthoftree}[2*i],gnpg_level${last_final_index}[i-2],gnpg_level${depthoftree}[2*i],gnpg_level${final_index}[2*i]);
   end
endgenerate
";
$j=1;
for ($i = $depthofbk-1; $i>0 ; $i--) {
$current_index=$depthoftree+$i;
$mul_index=2**$j;
$j++;
$start_point=2**$j-1;
$max_nodes= 2*($bit-2**$j)/2**$j; 
$before_index=$current_index-1;
if ($before_index!=$depthoftree){
print DATA"

assign gnpg_level${current_index}[0]=gnpg_level${depthoftree}[${start_point}];
// assign gnpg_level${current_index}[1]=gnpg_level${depthoftree}[${mul_index}+${start_point}]|pp_level${depthoftree}[${mul_index}+${start_point}]&gnpg_level${depthoftree}[${mul_index}+${start_point}-${mul_index}];
AO21 a11_${i} (pp_level${depthoftree}[${mul_index}+${start_point}],gnpg_level${depthoftree}[${mul_index}+${start_point}-${mul_index}],gnpg_level${depthoftree}[${mul_index}+${start_point}],gnpg_level${current_index}[1]);
generate 

   for (i = 3;i<${max_nodes};i=i+2 ) begin:gen_post_3${i}
      // assign gnpg_level${current_index}[i]=gnpg_level${depthoftree}[${mul_index}*i+${start_point}]|pp_level${depthoftree}[${mul_index}*i+${start_point}]&gnpg_level${before_index}[(i-3)/2];
      AO21 a12 (pp_level${depthoftree}[${mul_index}*i+${start_point}],gnpg_level${before_index}[(i-3)/2],gnpg_level${depthoftree}[${mul_index}*i+${start_point}],gnpg_level${current_index}[i]);
   end
endgenerate
generate 

   for (i = 2;i<${max_nodes} ;i=i+2 ) begin
      assign gnpg_level${current_index}[i]=gnpg_level${before_index}[i/2-1];
   end
endgenerate

";}
else {
$temp=2**($depthofbk-1);
print DATA"
//1111
assign gnpg_level${current_index}[0]=gnpg_level${depthoftree}[${start_point}];
// assign gnpg_level${current_index}[1]=gnpg_level${depthoftree}[${mul_index}+${start_point}]|pp_level${depthoftree}[${mul_index}+${start_point}]&gnpg_level${depthoftree}[${mul_index}+${start_point}-${mul_index}];
AO21 a13_${i} (pp_level${depthoftree}[${mul_index}+${start_point}],gnpg_level${depthoftree}[${mul_index}+${start_point}-${mul_index}],gnpg_level${depthoftree}[${mul_index}+${start_point}],gnpg_level${current_index}[1]);
generate 
//1111
   for (i = 3;i<${max_nodes};i=i+2 ) begin:gen_post_4${i}
     // assign gnpg_level${current_index}[i]=gnpg_level${depthoftree}[${mul_index}*i+${start_point}]|pp_level${depthoftree}[${mul_index}*i+${start_point}]&gnpg_level${before_index}[${mul_index}*i+${start_point}-${temp}];
     AO21 a14${i} (pp_level${depthoftree}[${mul_index}*i+${start_point}],gnpg_level${before_index}[${mul_index}*i+${start_point}-${temp}],gnpg_level${depthoftree}[${mul_index}*i+${start_point}],gnpg_level${current_index}[i]);
   end
endgenerate
generate 
//1111
   for (i = 2;i<${max_nodes} ;i=i+2 ) begin
      assign gnpg_level${current_index}[i]=gnpg_level${before_index}[${mul_index}*i+${start_point}];
   end
endgenerate
";
   
}

}

}


# "
print DATA"
endmodule
module AO21 ( a, b, d, y_bar );
  input a, b, d;
    // wire y;
  output   y_bar;

    // AOI21_X2 aoi21_1 ( .A1(a), .A2(b), .B(d), .ZN(y) );
   // INV_X2 inv_1 ( .I(y), .ZN(y_bar) );
    AO21x1_ASAP7_75t_SL aoi21_1 (y_bar,a,b,d);
endmodule
module AND2_X1 (A,B,Y);
input A,B;
output Y;

AND2x2_ASAP7_75t_SL and2 (Y,A,B);

endmodule 
/* module AND2x2_ASAP7_75t_SL (Y, A, B);
	output Y;
	input A, B;
	// Function
	and (Y, A, B);
endmodule

module AO21x1_ASAP7_75t_SL (Y, A1, A2, B);
	output Y;
	input A1, A2, B;

	// Function
	wire int_fwire_0;

	and (int_fwire_0, A1, A2);
	or (Y, int_fwire_0, B);
endmodule*/
";


   