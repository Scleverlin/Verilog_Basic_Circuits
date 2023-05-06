// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbooth_4_8_bit.h for the primary calling header

#include "verilated.h"

#include "Vbooth_4_8_bit___024root.h"

VL_ATTR_COLD void Vbooth_4_8_bit___024root___eval_static(Vbooth_4_8_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbooth_4_8_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_4_8_bit___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vbooth_4_8_bit___024root___eval_initial(Vbooth_4_8_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbooth_4_8_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_4_8_bit___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Vbooth_4_8_bit___024root___eval_final(Vbooth_4_8_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbooth_4_8_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_4_8_bit___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vbooth_4_8_bit___024root___eval_triggers__stl(Vbooth_4_8_bit___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbooth_4_8_bit___024root___dump_triggers__stl(Vbooth_4_8_bit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vbooth_4_8_bit___024root___eval_stl(Vbooth_4_8_bit___024root* vlSelf);

VL_ATTR_COLD void Vbooth_4_8_bit___024root___eval_settle(Vbooth_4_8_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbooth_4_8_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_4_8_bit___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vbooth_4_8_bit___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vbooth_4_8_bit___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("booth_4_8_bit.v", 37, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vbooth_4_8_bit___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbooth_4_8_bit___024root___dump_triggers__stl(Vbooth_4_8_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbooth_4_8_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_4_8_bit___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vbooth_4_8_bit___024root___ico_sequent__TOP__0(Vbooth_4_8_bit___024root* vlSelf);

VL_ATTR_COLD void Vbooth_4_8_bit___024root___eval_stl(Vbooth_4_8_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbooth_4_8_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_4_8_bit___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vbooth_4_8_bit___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbooth_4_8_bit___024root___dump_triggers__ico(Vbooth_4_8_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbooth_4_8_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_4_8_bit___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbooth_4_8_bit___024root___dump_triggers__act(Vbooth_4_8_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbooth_4_8_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_4_8_bit___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbooth_4_8_bit___024root___dump_triggers__nba(Vbooth_4_8_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbooth_4_8_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_4_8_bit___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbooth_4_8_bit___024root___ctor_var_reset(Vbooth_4_8_bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbooth_4_8_bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_4_8_bit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(8);
    vlSelf->b = VL_RAND_RESET_I(8);
    vlSelf->c = VL_RAND_RESET_I(16);
    vlSelf->booth_4_8_bit__DOT____Vcellout__p0____pinNumber3 = VL_RAND_RESET_I(16);
    vlSelf->booth_4_8_bit__DOT____Vcellout__p1____pinNumber3 = VL_RAND_RESET_I(16);
    vlSelf->booth_4_8_bit__DOT____Vcellout__p2____pinNumber3 = VL_RAND_RESET_I(16);
    vlSelf->booth_4_8_bit__DOT____Vcellout__p3____pinNumber3 = VL_RAND_RESET_I(16);
}
