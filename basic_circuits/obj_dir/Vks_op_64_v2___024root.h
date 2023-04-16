// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vks_op_64_v2.h for the primary calling header

#ifndef VERILATED_VKS_OP_64_V2___024ROOT_H_
#define VERILATED_VKS_OP_64_V2___024ROOT_H_  // guard

#include "verilated.h"

class Vks_op_64_v2__Syms;

class Vks_op_64_v2___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(cin,0,0);
    VL_OUT8(cout,0,0);
    VL_IN64(a,63,0);
    VL_IN64(b,63,0);
    VL_OUT64(sum,63,0);
    QData/*62:0*/ ks_op_64_v2__DOT__c;
    QData/*62:0*/ __Vchglast__TOP__ks_op_64_v2__DOT__c;

    // INTERNAL VARIABLES
    Vks_op_64_v2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vks_op_64_v2___024root(Vks_op_64_v2__Syms* symsp, const char* name);
    ~Vks_op_64_v2___024root();
    VL_UNCOPYABLE(Vks_op_64_v2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
