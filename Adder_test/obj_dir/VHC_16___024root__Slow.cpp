// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHC_16.h for the primary calling header

#include "verilated.h"

#include "VHC_16__Syms.h"
#include "VHC_16___024root.h"

void VHC_16___024root___ctor_var_reset(VHC_16___024root* vlSelf);

VHC_16___024root::VHC_16___024root(VHC_16__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VHC_16___024root___ctor_var_reset(this);
}

void VHC_16___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VHC_16___024root::~VHC_16___024root() {
}
