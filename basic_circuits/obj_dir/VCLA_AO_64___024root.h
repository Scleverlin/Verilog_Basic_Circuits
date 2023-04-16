// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCLA_AO_64.h for the primary calling header

#ifndef VERILATED_VCLA_AO_64___024ROOT_H_
#define VERILATED_VCLA_AO_64___024ROOT_H_  // guard

#include "verilated.h"

class VCLA_AO_64__Syms;

class VCLA_AO_64___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(cin,0,0);
    VL_OUT8(cout,0,0);
    VL_IN64(a,63,0);
    VL_IN64(b,63,0);
    VL_OUT64(sum,63,0);
    QData/*62:0*/ CLA_AO_64__DOT__c;
    QData/*62:0*/ __Vchglast__TOP__CLA_AO_64__DOT__c;

    // INTERNAL VARIABLES
    VCLA_AO_64__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCLA_AO_64___024root(VCLA_AO_64__Syms* symsp, const char* name);
    ~VCLA_AO_64___024root();
    VL_UNCOPYABLE(VCLA_AO_64___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
