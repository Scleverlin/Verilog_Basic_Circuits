#include <iostream>
#include <cstdlib>
#include "VACA_br_version.h"
#include "verilated.h"

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    VACA_br_version* top = new VACA_br_version;
    int error_count = 0;
    int test_num = 10000000;
    for (int i = 0; i < test_num; i++) {
        uint16_t a = rand() % 65536; 
        uint16_t b = rand() % 65536;  
        uint8_t cin = rand() % 2;     
        top->a = a;
        top->b = b;
        top->cin = cin;

        // 计算预期结果
        uint32_t expected_sum = a + b + cin;

        // 计算输出
        top->eval();

        std::cout << "Input: " << a << " + " << b << " (cin = " << (int)cin << ")"
                  << ", Output: " << (int)(top->sum) << " (cout = " << (int)(top->cout) << ")"
                  << ", Expected: " << (expected_sum & 0xFFFF)
                  << " (Expected cout: " << (expected_sum >> 16) << ")"
                  << std::endl;

        if ((int)(top->sum) != (expected_sum & 0xFFFF) || (int)(top->cout) != (expected_sum >> 16)) {
            error_count++;
        }
    }

    std::cout << "Total errors: " << error_count << " out of"<<test_num<<" tests.\n";
    std::cout << "Error rate: " << (double)error_count / test_num * 100.0 << "%\n";

    delete top;
    return 0;
}

