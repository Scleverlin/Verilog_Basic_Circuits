// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHC_64.h for the primary calling header

#include "verilated.h"

#include "VHC_64__Syms.h"
#include "VHC_64___024root.h"

void VHC_64___024root___ctor_var_reset(VHC_64___024root* vlSelf);

VHC_64___024root::VHC_64___024root(VHC_64__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VHC_64___024root___ctor_var_reset(this);
}

void VHC_64___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VHC_64___024root::~VHC_64___024root() {
}
