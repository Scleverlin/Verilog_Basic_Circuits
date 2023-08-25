`include "TMUL.sv"

module wal_mul_tb;

reg [31:0] a [7:0];
reg [255:0] b [7:0];
reg clk, rst;
wire [63:0] c [7:0];
integer i, j, k; 
TMUL_32_8mul8 u0 (a, b, c);

// 时钟生成器
always begin
    #5 clk = ~clk;
end
initial begin
   $dumpfile("dump.vcd"); 
   $dumpvars;
end
// 测试向量生成
initial begin
    // 初始化
    clk = 0;
    rst = 1;
    #10 rst = 0; // 在10个时间单位后释放复位

    // 初始化a和b为0
    for(j = 0; j < 8; j++) begin
        a[j] = 0;
        for(k = 0; k < 8; k++) begin
            b[j][k*32+31:k*32] = 0;
        end
    end

    // 每个时钟周期提供新的输入
    for(i = 0; i <10; i = i+1) begin // 替换test_duration为测试时长
        // 为a和b赋递增值
        for(j = 0; j < 8; j++) begin
            a[j] = j + 1 + i; // 这将为a赋值 1,2,3...等
            for(k = 0; k < 8; k++) begin
                b[j][k*32+31:k*32] = k + 1 + i; // 这将为b的每个元素赋值1,2,3...等
            end
        #10; // 等待一个时钟周期
    end

    $stop; // 结束仿真
end
end

endmodule
