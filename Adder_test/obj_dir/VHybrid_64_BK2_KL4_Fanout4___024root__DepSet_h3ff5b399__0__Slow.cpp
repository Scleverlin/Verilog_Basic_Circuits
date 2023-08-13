// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHybrid_64_BK2_KL4_Fanout4.h for the primary calling header

#include "verilated.h"

#include "VHybrid_64_BK2_KL4_Fanout4__Syms.h"
#include "VHybrid_64_BK2_KL4_Fanout4___024root.h"

VL_ATTR_COLD void VHybrid_64_BK2_KL4_Fanout4___024root___eval_static(VHybrid_64_BK2_KL4_Fanout4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHybrid_64_BK2_KL4_Fanout4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHybrid_64_BK2_KL4_Fanout4___024root___eval_static\n"); );
}

VL_ATTR_COLD void VHybrid_64_BK2_KL4_Fanout4___024root___eval_initial(VHybrid_64_BK2_KL4_Fanout4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHybrid_64_BK2_KL4_Fanout4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHybrid_64_BK2_KL4_Fanout4___024root___eval_initial\n"); );
}

VL_ATTR_COLD void VHybrid_64_BK2_KL4_Fanout4___024root___eval_final(VHybrid_64_BK2_KL4_Fanout4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHybrid_64_BK2_KL4_Fanout4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHybrid_64_BK2_KL4_Fanout4___024root___eval_final\n"); );
}

VL_ATTR_COLD void VHybrid_64_BK2_KL4_Fanout4___024root___eval_triggers__stl(VHybrid_64_BK2_KL4_Fanout4___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VHybrid_64_BK2_KL4_Fanout4___024root___dump_triggers__stl(VHybrid_64_BK2_KL4_Fanout4___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VHybrid_64_BK2_KL4_Fanout4___024root___eval_stl(VHybrid_64_BK2_KL4_Fanout4___024root* vlSelf);

VL_ATTR_COLD void VHybrid_64_BK2_KL4_Fanout4___024root___eval_settle(VHybrid_64_BK2_KL4_Fanout4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHybrid_64_BK2_KL4_Fanout4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHybrid_64_BK2_KL4_Fanout4___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VHybrid_64_BK2_KL4_Fanout4___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VHybrid_64_BK2_KL4_Fanout4___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/shi/verilog/Adder_test/Hybrid_64_BK2_KL4_Fanout4.v", 14, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VHybrid_64_BK2_KL4_Fanout4___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VHybrid_64_BK2_KL4_Fanout4___024root___dump_triggers__stl(VHybrid_64_BK2_KL4_Fanout4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHybrid_64_BK2_KL4_Fanout4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHybrid_64_BK2_KL4_Fanout4___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VHybrid_64_BK2_KL4_Fanout4___024root___ico_sequent__TOP__0(VHybrid_64_BK2_KL4_Fanout4___024root* vlSelf);

VL_ATTR_COLD void VHybrid_64_BK2_KL4_Fanout4___024root___eval_stl(VHybrid_64_BK2_KL4_Fanout4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHybrid_64_BK2_KL4_Fanout4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHybrid_64_BK2_KL4_Fanout4___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VHybrid_64_BK2_KL4_Fanout4___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VHybrid_64_BK2_KL4_Fanout4___024root___dump_triggers__ico(VHybrid_64_BK2_KL4_Fanout4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHybrid_64_BK2_KL4_Fanout4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHybrid_64_BK2_KL4_Fanout4___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VHybrid_64_BK2_KL4_Fanout4___024root___dump_triggers__act(VHybrid_64_BK2_KL4_Fanout4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHybrid_64_BK2_KL4_Fanout4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHybrid_64_BK2_KL4_Fanout4___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VHybrid_64_BK2_KL4_Fanout4___024root___dump_triggers__nba(VHybrid_64_BK2_KL4_Fanout4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHybrid_64_BK2_KL4_Fanout4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHybrid_64_BK2_KL4_Fanout4___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VHybrid_64_BK2_KL4_Fanout4___024root___ctor_var_reset(VHybrid_64_BK2_KL4_Fanout4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHybrid_64_BK2_KL4_Fanout4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHybrid_64_BK2_KL4_Fanout4___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_Q(64);
    vlSelf->b = VL_RAND_RESET_Q(64);
    vlSelf->cin = VL_RAND_RESET_I(1);
    vlSelf->sum = VL_RAND_RESET_Q(64);
    vlSelf->cout = VL_RAND_RESET_I(1);
}
