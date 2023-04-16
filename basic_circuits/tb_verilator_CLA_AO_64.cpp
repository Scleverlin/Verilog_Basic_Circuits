// #include <iostream>
// #include <ctime>
// #include <cstdlib>
// #include "Vks_adder.h"
// #include "verilated.h"

// int main(int argc, char **argv) {
//     Verilated::commandArgs(argc, argv);
//     Vks_adder* top = new Vks_adder;

//     // Seed the random number generator
//     std::srand(std::time(0));

//     // Perform a certain number of random tests
//     const int num_tests = 1000;

//     for (int test = 0; test < num_tests; ++test) {
//         // Generate random 8-bit numbers
//         uint8_t a = std::rand() % 256;
//         uint8_t b = std::rand() % 256;
//         bool cin = std::rand() % 2;

//         // Apply inputs to the adder
//         top->a = a;
//         top->b = b;
//         top->cin = cin;
//         top->eval();

//         // Evaluate the expected result
//         uint16_t expected_sum = static_cast<uint16_t>(a) + static_cast<uint16_t>(b) + static_cast<uint16_t>(cin);
//         uint8_t expected_cout = (expected_sum >> 8) & 1;

//         // Compare the expected result with the adder output
//         if (top->sum != (expected_sum & 0xFF) || top->cout != expected_cout) {
//             std::cout << "Test failed: a = " << static_cast<int>(a)
//                       << ", b = " << static_cast<int>(b)
//                       << ", cin = " << static_cast<int>(cin)
//                       << ", expected sum = " << static_cast<int>(expected_sum & 0xFF)
//                       << ", expected cout = " << static_cast<int>(expected_cout)
//                       << ", got sum = " << static_cast<int>(top->sum)
//                       << ", got cout = " << static_cast<int>(top->cout) << std::endl;
//             break;
//         }
//     }

//     std::cout << "Random tests completed." << std::endl;

//     top->final();
//     delete top;
//     return 0;
// }
#include <iostream>
#include <iomanip>
#include "VCLA_AO_64.h"
#include "verilated.h"
#include <cstdlib>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    VCLA_AO_64* top = new VCLA_AO_64;

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
