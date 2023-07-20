// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmultiplier_32.h for the primary calling header

#include "verilated.h"

#include "Vmultiplier_32__Syms.h"
#include "Vmultiplier_32___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier_32___024root___dump_triggers__ico(Vmultiplier_32___024root* vlSelf);
#endif  // VL_DEBUG

void Vmultiplier_32___024root___eval_triggers__ico(Vmultiplier_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_32___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmultiplier_32___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vmultiplier_32___024root___ico_sequent__TOP__1(Vmultiplier_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_32___024root___ico_sequent__TOP__1\n"); );
    // Body
    vlSelf->out = vlSymsp->TOP__multiplier_32__DOT__hc_64_30.sum;
}

void Vmultiplier_32___024root___ico_sequent__TOP__0(Vmultiplier_32___024root* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_0__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_1__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_2__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_3__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_4__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_5__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_6__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_7__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_8__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_9__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_10__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_11__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_12__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_13__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_14__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_15__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_16__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_17__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_18__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_19__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_20__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_21__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_22__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_23__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_24__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_25__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_26__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_27__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_28__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_29__0(Vmultiplier_32_HC_64* vlSelf);
void Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_30__0(Vmultiplier_32_HC_64* vlSelf);

void Vmultiplier_32___024root___eval_ico(Vmultiplier_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_32___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vmultiplier_32___024root___ico_sequent__TOP__0(vlSelf);
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_0__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_0));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_1__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_1));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_2__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_2));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_3__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_3));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_4__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_4));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_5__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_5));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_6__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_6));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_7__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_7));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_8__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_8));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_9__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_9));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_10__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_10));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_11__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_11));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_12__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_12));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_13__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_13));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_14__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_14));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_15__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_15));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_16__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_16));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_17__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_17));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_18__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_18));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_19__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_19));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_20__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_20));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_21__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_21));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_22__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_22));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_23__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_23));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_24__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_24));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_25__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_25));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_26__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_26));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_27__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_27));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_28__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_28));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_29__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_29));
        Vmultiplier_32_HC_64___ico_sequent__TOP__multiplier_32__DOT__hc_64_30__0((&vlSymsp->TOP__multiplier_32__DOT__hc_64_30));
        Vmultiplier_32___024root___ico_sequent__TOP__1(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier_32___024root___dump_triggers__act(Vmultiplier_32___024root* vlSelf);
#endif  // VL_DEBUG

void Vmultiplier_32___024root___eval_triggers__act(Vmultiplier_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmultiplier_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier_32___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmultiplier_32___024root___dump_triggers__act(vlSelf);
    }
#endif
}
