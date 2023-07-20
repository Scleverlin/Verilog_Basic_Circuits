// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmultiplier_32.h for the primary calling header

#ifndef VERILATED_VMULTIPLIER_32_HC_64_H_
#define VERILATED_VMULTIPLIER_32_HC_64_H_  // guard

#include "verilated.h"

class Vmultiplier_32__Syms;

class Vmultiplier_32_HC_64 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(cin,0,0);
    VL_OUT8(cout,0,0);
    VL_IN64(a,64,1);
    VL_IN64(b,64,1);
    VL_OUT64(sum,64,1);

    // INTERNAL VARIABLES
    Vmultiplier_32__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmultiplier_32_HC_64(Vmultiplier_32__Syms* symsp, const char* v__name);
    ~Vmultiplier_32_HC_64();
    VL_UNCOPYABLE(Vmultiplier_32_HC_64);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
