#include "VBK_64.h"
#include "verilated.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);
    VBK_64* top = new VBK_64;

    // Initialize random seed
    std::srand(std::time(0));

    for(int i = 0; i < 1000; i++) {
        // Generate two random 64-bit unsigned integers
        uint64_t a = ((uint64_t)std::rand() << 32) | std::rand();
        uint64_t b = ((uint64_t)std::rand() << 32) | std::rand();
        uint64_t cin = std::rand() % 2;
        // Apply inputs
        top->A = a;
        top->B = b;
        top->Cin = cin;

        // Evaluate model
        top->eval();

        // Check result
uint64_t expected_sum = (a + b + cin) % (1ull << 64);
bool expected_cout = a > UINT64_MAX - b || (cin == 1 && a == UINT64_MAX - b);
if (top->cout != expected_cout) {
    std::cout << "Mismatch on iteration " << i << ": "
              << "A = " << a << ", B = " << b << ", Cin = " << cin
              << ", expected Cout = " << expected_cout << ", got Cout = " << top->cout << std::endl;
}

    delete top;
    return 0;

}
}