// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMULTIPLIER_32__SYMS_H_
#define VERILATED_VMULTIPLIER_32__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmultiplier_32.h"

// INCLUDE MODULE CLASSES
#include "Vmultiplier_32___024root.h"
#include "Vmultiplier_32_HC_64.h"

// SYMS CLASS (contains all model state)
class Vmultiplier_32__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmultiplier_32* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmultiplier_32___024root       TOP;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_0;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_1;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_10;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_11;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_12;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_13;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_14;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_15;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_16;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_17;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_18;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_19;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_2;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_20;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_21;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_22;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_23;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_24;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_25;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_26;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_27;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_28;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_29;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_3;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_30;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_4;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_5;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_6;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_7;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_8;
    Vmultiplier_32_HC_64           TOP__multiplier_32__DOT__hc_64_9;

    // CONSTRUCTORS
    Vmultiplier_32__Syms(VerilatedContext* contextp, const char* namep, Vmultiplier_32* modelp);
    ~Vmultiplier_32__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
