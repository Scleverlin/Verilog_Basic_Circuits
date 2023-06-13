// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VKS_16.h for the primary calling header

#include "verilated.h"

#include "VKS_16__Syms.h"
#include "VKS_16___024root.h"

void VKS_16___024root___ctor_var_reset(VKS_16___024root* vlSelf);

VKS_16___024root::VKS_16___024root(VKS_16__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VKS_16___024root___ctor_var_reset(this);
}

void VKS_16___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VKS_16___024root::~VKS_16___024root() {
}
