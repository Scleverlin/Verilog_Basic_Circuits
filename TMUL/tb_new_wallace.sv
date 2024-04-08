// 文件名：wallace_tree_multiplier_32_tb.sv
`include "_mul_wallace_tree_32.sv"

module wallace_tree_multiplier_32_tb;

    // Testbench 信号声明
    reg [31:0] a, b;
    wire [63:0] out;
    wire [63:0] real_out;

    // 实例化被测模块
    wallace_tree_multiplier_32 dut (
        .a(a),
        .b(b),
        .out(out)
    );
    assign real_out = a*b;
    logic [3:0] segment_list [10:0];
    assign segment_list[0] = {b[2:0],1'b0};
    assign segment_list[1] = {b[5:2]};
    assign segment_list[2] = {b[8:5]};
    assign segment_list[3] = {b[11:8]};
    assign segment_list[4] = {b[14:11]};
    assign segment_list[5] = {b[17:14]};
    assign segment_list[6] = {b[20:17]};
    assign segment_list[7] = {b[23:20]};
    assign segment_list[8] = {b[26:23]};
    assign segment_list[9] = {b[29:26]};
    assign segment_list[10] = {1'b0,b[31:29]};

        // 用于生成测试向量的初始块
    initial begin
   $dumpfile("dump.vcd"); 
   $dumpvars(0, dut); // 0表示记录所有层次，wal_mul_tb是模块的实例名
end
int i;
    initial begin
        // 初始化输入
        a = 0;
        b = 0;
        #10; // 等待一段时间

        // 第一个测试：简单的乘法操作
        // a = 32'h00111112; // 设定a的值
        // b = 32'h00111103; // 设定b的值
        
        for (i=0;i<100;i=i+1)begin
        #10; // 等待乘法操作完成
        a=$random;
        b=$random;

        // 检查输出
        if (out != real_out) begin
            $display("failed:   %d *%d != %b", a,b,out);
            $display("Booth encoder result: one   = %b \n two   = %b \n three = %b \n four  = %b", dut.booth_radix_8_1.one,dut.booth_radix_8_1.two,dut.booth_radix_8_1.three, dut.booth_radix_8_1.four);
            $display("should be:%d *%d  = %b", a,b, real_out);
            $display("a in bit = %b",a);
            $display("segment= %b, pp0=%b",segment_list[0],dut.pp[63:0]);
            $display("segment= %b, pp1=%b",segment_list[1],dut.pp[127:64]);
            $display("segment= %b, pp2=%b",segment_list[2],dut.pp[191:128]);
            $display("segment= %b, pp3=%b",segment_list[3],dut.pp[255:192]);
            $display("segment= %b, pp4=%b",segment_list[4],dut.pp[319:256]);
            $display("segment= %b, pp5=%b",segment_list[5],dut.pp[383:320]);
            $display("segment= %b, pp6=%b",segment_list[6],dut.pp[447:384]);
            $display("segment= %b, pp7=%b",segment_list[7],dut.pp[511:448]);
            $display("segment= %b, pp8=%b",segment_list[8],dut.pp[575:512]);
            $display("segment= %b, pp9=%b",segment_list[9],dut.pp[639:576]);
            $display("segment= %b, pp10=%b",segment_list[11],dut.pp[703:640]);
            $display("different bit = %b",out^real_out);
            $display ("b= %b",b);
        end else begin
            $display("测试成功:%d *%d  = %d", a,b,out);
        end
        end
        // 可以添加更多测试向量来验证乘法器的不同方面

        // 测试完成
        $display("测试完成");
        $finish; // 结束仿真
    end

    // 时钟生成（如果需要的话）
    // 以下代码生成一个周期为20ns的时钟信号，这部分取决于你的设计是否需要时钟信号
    /*
    reg clk = 0;
    always #10 clk = ~clk;
    */

endmodule
