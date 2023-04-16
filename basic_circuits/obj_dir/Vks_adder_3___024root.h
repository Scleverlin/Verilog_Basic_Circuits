// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vks_adder_3.h for the primary calling header

#ifndef VERILATED_VKS_ADDER_3___024ROOT_H_
#define VERILATED_VKS_ADDER_3___024ROOT_H_  // guard

#include "verilated.h"

class Vks_adder_3__Syms;

class Vks_adder_3___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,7,0);
    VL_IN8(b,7,0);
    VL_IN8(cin,0,0);
    VL_OUT8(cout,0,0);
    VL_OUT8(sum,7,0);

    // INTERNAL VARIABLES
    Vks_adder_3__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vks_adder_3___024root(Vks_adder_3__Syms* symsp, const char* name);
    ~Vks_adder_3___024root();
    VL_UNCOPYABLE(Vks_adder_3___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
