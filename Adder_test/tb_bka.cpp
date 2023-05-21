#include <iostream>
#include <cstdlib>
#include "VCLA_new_AO_8bit.h"
#include "verilated.h"

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    VCLA_new_AO_8bit* top = new VCLA_new_AO_8bit;
    int error_count = 0;
    int test_num = 100;
    for (int i = 0; i < test_num; i++) {
        uint8_t a = rand() %0xFF; 
        uint8_t b = rand() %0xFF;  
        uint8_t cin = rand() % 2;     
        top->a = a;
        top->b = b;
        top->cin = cin;

        // 计算预期结果
        uint16_t expected_sum = a + b + cin;

        // 计算输出
        top->eval();

        std::cout << "Input: " << static_cast<int>(a) << " + " << static_cast<int>(b) << " (cin = " << (int)cin << ")"
                  << ", Output: " << (int)(top->sum) << " (cout = " << (int)(top->cout) << ")"
                  << ", Expected: " << (expected_sum & 0xFF)
                  << " (Expected cout: " << (expected_sum >> 8) << ")"
                  << std::endl;

        if ((int)(top->sum) != (expected_sum & 0xFF) || (int)(top->cout) != (expected_sum >> 8)) {
            error_count++;
        }
    }

    std::cout << "Total errors: " << error_count << " out of"<<test_num<<" tests.\n";
    std::cout << "Error rate: " << (double)error_count / test_num * 100.0 << "%\n";

    delete top;
    return 0;
}