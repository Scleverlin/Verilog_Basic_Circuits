
// #include <iostream>
// #include <iomanip>
// #include "Vks_adder_3.h"
// #include "verilated.h"

// int main(int argc, char** argv) {
//     Verilated::commandArgs(argc, argv);
//     Vks_adder_3* top = new Vks_adder_3;

//     for (int test = 0; test < 1000; ++test) {
//         top->a = rand() & 0xFF;
//         top->b = rand() & 0xFF;
//         top->cin = rand() & 0x1;
        
//         top->eval();
        
//         uint16_t expected_sum = static_cast<uint16_t>(top->a) + static_cast<uint16_t>(top->b) + static_cast<uint16_t>(top->cin);
//         uint8_t expected_cout = (expected_sum >> 8) & 0x1;
        
//         // Print the values of a, b, cin, sum, and cout for each test
//         std::cout << "Test " << std::setw(3) << test + 1 << ": a = " << std::setw(3) << static_cast<unsigned>(top->a)
//                   << ", b = " << std::setw(3) << static_cast<unsigned>(top->b) << ", cin = " << static_cast<unsigned>(top->cin)
//                   << ", sum = " << std::setw(3) << static_cast<unsigned>(top->sum) << ", cout = " << static_cast<unsigned>(top->cout)
//                   << std::endl;

//         if (top->sum != (expected_sum & 0xFF) || top->cout != expected_cout) {
//             std::cout << "Mismatch detected!" << std::endl;
//             top->final();
//             delete top;
//             return 1;
//         }
//     }

//     std::cout << "Random tests completed." << std::endl;

//     top->final();
//     delete top;
//     return 0;
// }

#include <iostream>
#include <iomanip>
#include "Vks_adder_op_3_64.h"
#include "verilated.h"
#include <cstdlib>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vks_adder_op_3_64* top = new Vks_adder_op_3_64;

    for (int test = 0; test < 1000; ++test) {
        top->a = static_cast<uint64_t>(rand()) | (static_cast<uint64_t>(rand()) << 32);
        top->b = static_cast<uint64_t>(rand()) | (static_cast<uint64_t>(rand()) << 32);
        top->cin = rand() & 0x1;

        top->eval();

        uint64_t expected_sum = top->a + top->b + top->cin;
        uint8_t expected_cout = (expected_sum >> 64) & 0x1;

        std::cout << "Test " << std::setw(4) << test + 1 << ": a = " << std::setw(20) << top->a
                  << ", b = " << std::setw(20) << top->b << ", cin = " << static_cast<unsigned>(top->cin)
                  << ", sum = " << std::setw(20) << top->sum << ", cout = " << static_cast<unsigned>(top->cout)
                  << std::endl;

        if (top->sum != (expected_sum & 0xFFFFFFFFFFFFFFFF) || top->cout != expected_cout) {
            std::cout << "Mismatch detected!" << std::endl;
            top->final();
            delete top;
            return 1;
        }
    }

    std::cout << "Random tests completed." << std::endl;

    top->final();
    delete top;
    return 0;
}
