// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHC_8.h for the primary calling header

#include "verilated.h"

#include "VHC_8__Syms.h"
#include "VHC_8___024root.h"

void VHC_8___024root___ctor_var_reset(VHC_8___024root* vlSelf);

VHC_8___024root::VHC_8___024root(VHC_8__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VHC_8___024root___ctor_var_reset(this);
}

void VHC_8___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VHC_8___024root::~VHC_8___024root() {
}
