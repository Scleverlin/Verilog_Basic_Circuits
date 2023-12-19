$bit =  $ARGV[1];

$depth = log($bit) / log(2);



open(DATA, ">./adder_loop_${depth}.txt") or die "./adder_loop_${depth}.txt 文件无法打开, $!";

for (my $i=0; $i<=int($depth); $i++ ){
$j=$depth-$i;
print DATA "
perl ./HC_adder_generator.pl -w ${i} ${j} ${bit}
perl ./BK_SA_adder_generator.pl -w ${i} ${j} ${bit}
";}


for (my $k=2;int(log($k)/log(2))<$depth;$k=$k*2){

for (my $i=0; $i<=$depth; $i++ ){
$j=$depth-$i;
if (int(log($k)/log(2)) + $i < int($depth)){
print DATA "
perl ./BK_Knowles_adder_generator.pl -w ${i} ${j} ${k} ${bit}
";}}

}