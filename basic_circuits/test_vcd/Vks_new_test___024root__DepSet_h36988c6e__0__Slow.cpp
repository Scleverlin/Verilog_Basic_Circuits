// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vks_new_test.h for the primary calling header

#include "verilated.h"

#include "Vks_new_test___024root.h"

VL_ATTR_COLD void Vks_new_test___024root___eval_static(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vks_new_test___024root___eval_initial(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u8__DOT__c 
        = vlSelf->ks_new_test__DOT__u8__DOT__c;
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u7__DOT__c 
        = vlSelf->ks_new_test__DOT__u7__DOT__c;
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u6__DOT__c 
        = vlSelf->ks_new_test__DOT__u6__DOT__c;
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u5__DOT__c 
        = vlSelf->ks_new_test__DOT__u5__DOT__c;
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u4__DOT__c 
        = vlSelf->ks_new_test__DOT__u4__DOT__c;
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u3__DOT__c 
        = vlSelf->ks_new_test__DOT__u3__DOT__c;
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u2__DOT__c 
        = vlSelf->ks_new_test__DOT__u2__DOT__c;
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u1__DOT__c 
        = vlSelf->ks_new_test__DOT__u1__DOT__c;
}

VL_ATTR_COLD void Vks_new_test___024root___eval_final(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vks_new_test___024root___eval_triggers__stl(Vks_new_test___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vks_new_test___024root___dump_triggers__stl(Vks_new_test___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vks_new_test___024root___eval_stl(Vks_new_test___024root* vlSelf);

VL_ATTR_COLD void Vks_new_test___024root___eval_settle(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vks_new_test___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vks_new_test___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("ks_new_test.v", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vks_new_test___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vks_new_test___024root___dump_triggers__stl(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if (vlSelf->__VstlTriggered.at(1U)) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] ks_new_test.u8.c)\n");
    }
    if (vlSelf->__VstlTriggered.at(2U)) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] ks_new_test.u7.c)\n");
    }
    if (vlSelf->__VstlTriggered.at(3U)) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] ks_new_test.u6.c)\n");
    }
    if (vlSelf->__VstlTriggered.at(4U)) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] ks_new_test.u5.c)\n");
    }
    if (vlSelf->__VstlTriggered.at(5U)) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] ks_new_test.u4.c)\n");
    }
    if (vlSelf->__VstlTriggered.at(6U)) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] ks_new_test.u3.c)\n");
    }
    if (vlSelf->__VstlTriggered.at(7U)) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] ks_new_test.u2.c)\n");
    }
    if (vlSelf->__VstlTriggered.at(8U)) {
        VL_DBG_MSGF("         'stl' region trigger index 8 is active: @([hybrid] ks_new_test.u1.c)\n");
    }
}
#endif  // VL_DEBUG

void Vks_new_test___024root___ico_sequent__TOP__0(Vks_new_test___024root* vlSelf);
void Vks_new_test___024root___ico_comb__TOP__0(Vks_new_test___024root* vlSelf);
void Vks_new_test___024root___ico_comb__TOP__1(Vks_new_test___024root* vlSelf);
void Vks_new_test___024root___ico_comb__TOP__2(Vks_new_test___024root* vlSelf);
void Vks_new_test___024root___ico_comb__TOP__3(Vks_new_test___024root* vlSelf);
void Vks_new_test___024root___ico_comb__TOP__4(Vks_new_test___024root* vlSelf);
void Vks_new_test___024root___ico_comb__TOP__5(Vks_new_test___024root* vlSelf);
void Vks_new_test___024root___ico_comb__TOP__6(Vks_new_test___024root* vlSelf);
void Vks_new_test___024root___ico_comb__TOP__7(Vks_new_test___024root* vlSelf);
void Vks_new_test___024root___ico_comb__TOP__8(Vks_new_test___024root* vlSelf);
void Vks_new_test___024root___ico_comb__TOP__9(Vks_new_test___024root* vlSelf);
void Vks_new_test___024root___ico_comb__TOP__10(Vks_new_test___024root* vlSelf);
void Vks_new_test___024root___ico_comb__TOP__11(Vks_new_test___024root* vlSelf);
void Vks_new_test___024root___ico_comb__TOP__12(Vks_new_test___024root* vlSelf);
void Vks_new_test___024root___ico_comb__TOP__13(Vks_new_test___024root* vlSelf);
void Vks_new_test___024root___ico_comb__TOP__14(Vks_new_test___024root* vlSelf);

VL_ATTR_COLD void Vks_new_test___024root___eval_stl(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vks_new_test___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(8U))) {
        Vks_new_test___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(7U))) {
        Vks_new_test___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(6U))) {
        Vks_new_test___024root___ico_comb__TOP__2(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(5U))) {
        Vks_new_test___024root___ico_comb__TOP__3(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(4U))) {
        Vks_new_test___024root___ico_comb__TOP__4(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(3U))) {
        Vks_new_test___024root___ico_comb__TOP__5(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(2U))) {
        Vks_new_test___024root___ico_comb__TOP__6(vlSelf);
    }
    if (((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(7U)) 
         | vlSelf->__VstlTriggered.at(8U))) {
        Vks_new_test___024root___ico_comb__TOP__7(vlSelf);
    }
    if (((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(6U)) 
         | vlSelf->__VstlTriggered.at(7U))) {
        Vks_new_test___024root___ico_comb__TOP__8(vlSelf);
    }
    if (((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(5U)) 
         | vlSelf->__VstlTriggered.at(6U))) {
        Vks_new_test___024root___ico_comb__TOP__9(vlSelf);
    }
    if (((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(4U)) 
         | vlSelf->__VstlTriggered.at(5U))) {
        Vks_new_test___024root___ico_comb__TOP__10(vlSelf);
    }
    if (((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(3U)) 
         | vlSelf->__VstlTriggered.at(4U))) {
        Vks_new_test___024root___ico_comb__TOP__11(vlSelf);
    }
    if (((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(2U)) 
         | vlSelf->__VstlTriggered.at(3U))) {
        Vks_new_test___024root___ico_comb__TOP__12(vlSelf);
    }
    if (((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U)) 
         | vlSelf->__VstlTriggered.at(2U))) {
        Vks_new_test___024root___ico_comb__TOP__13(vlSelf);
    }
    if (((((((((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U)) 
               | vlSelf->__VstlTriggered.at(2U)) | vlSelf->__VstlTriggered.at(3U)) 
             | vlSelf->__VstlTriggered.at(4U)) | vlSelf->__VstlTriggered.at(5U)) 
           | vlSelf->__VstlTriggered.at(6U)) | vlSelf->__VstlTriggered.at(7U)) 
         | vlSelf->__VstlTriggered.at(8U))) {
        Vks_new_test___024root___ico_comb__TOP__14(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vks_new_test___024root___dump_triggers__ico(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if (vlSelf->__VicoTriggered.at(1U)) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] ks_new_test.u8.c)\n");
    }
    if (vlSelf->__VicoTriggered.at(2U)) {
        VL_DBG_MSGF("         'ico' region trigger index 2 is active: @([hybrid] ks_new_test.u7.c)\n");
    }
    if (vlSelf->__VicoTriggered.at(3U)) {
        VL_DBG_MSGF("         'ico' region trigger index 3 is active: @([hybrid] ks_new_test.u6.c)\n");
    }
    if (vlSelf->__VicoTriggered.at(4U)) {
        VL_DBG_MSGF("         'ico' region trigger index 4 is active: @([hybrid] ks_new_test.u5.c)\n");
    }
    if (vlSelf->__VicoTriggered.at(5U)) {
        VL_DBG_MSGF("         'ico' region trigger index 5 is active: @([hybrid] ks_new_test.u4.c)\n");
    }
    if (vlSelf->__VicoTriggered.at(6U)) {
        VL_DBG_MSGF("         'ico' region trigger index 6 is active: @([hybrid] ks_new_test.u3.c)\n");
    }
    if (vlSelf->__VicoTriggered.at(7U)) {
        VL_DBG_MSGF("         'ico' region trigger index 7 is active: @([hybrid] ks_new_test.u2.c)\n");
    }
    if (vlSelf->__VicoTriggered.at(8U)) {
        VL_DBG_MSGF("         'ico' region trigger index 8 is active: @([hybrid] ks_new_test.u1.c)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vks_new_test___024root___dump_triggers__act(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] ks_new_test.u8.c)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] ks_new_test.u7.c)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] ks_new_test.u6.c)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] ks_new_test.u5.c)\n");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] ks_new_test.u4.c)\n");
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] ks_new_test.u3.c)\n");
    }
    if (vlSelf->__VactTriggered.at(6U)) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] ks_new_test.u2.c)\n");
    }
    if (vlSelf->__VactTriggered.at(7U)) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([hybrid] ks_new_test.u1.c)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vks_new_test___024root___dump_triggers__nba(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] ks_new_test.u8.c)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] ks_new_test.u7.c)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] ks_new_test.u6.c)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] ks_new_test.u5.c)\n");
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] ks_new_test.u4.c)\n");
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] ks_new_test.u3.c)\n");
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] ks_new_test.u2.c)\n");
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([hybrid] ks_new_test.u1.c)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vks_new_test___024root___ctor_var_reset(Vks_new_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vks_new_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vks_new_test___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_Q(64);
    vlSelf->b = VL_RAND_RESET_Q(64);
    vlSelf->cin = VL_RAND_RESET_I(1);
    vlSelf->sum = VL_RAND_RESET_Q(64);
    vlSelf->cout = VL_RAND_RESET_I(1);
    vlSelf->ks_new_test__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->ks_new_test__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->ks_new_test__DOT__c3 = VL_RAND_RESET_I(1);
    vlSelf->ks_new_test__DOT__c4 = VL_RAND_RESET_I(1);
    vlSelf->ks_new_test__DOT__c5 = VL_RAND_RESET_I(1);
    vlSelf->ks_new_test__DOT__c6 = VL_RAND_RESET_I(1);
    vlSelf->ks_new_test__DOT__c7 = VL_RAND_RESET_I(1);
    vlSelf->ks_new_test__DOT__u1__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->ks_new_test__DOT__u1__DOT__g = VL_RAND_RESET_I(8);
    vlSelf->ks_new_test__DOT__u1__DOT__p = VL_RAND_RESET_I(8);
    vlSelf->ks_new_test__DOT__u2__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->ks_new_test__DOT__u2__DOT__g = VL_RAND_RESET_I(8);
    vlSelf->ks_new_test__DOT__u2__DOT__p = VL_RAND_RESET_I(8);
    vlSelf->ks_new_test__DOT__u3__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->ks_new_test__DOT__u3__DOT__g = VL_RAND_RESET_I(8);
    vlSelf->ks_new_test__DOT__u3__DOT__p = VL_RAND_RESET_I(8);
    vlSelf->ks_new_test__DOT__u4__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->ks_new_test__DOT__u4__DOT__g = VL_RAND_RESET_I(8);
    vlSelf->ks_new_test__DOT__u4__DOT__p = VL_RAND_RESET_I(8);
    vlSelf->ks_new_test__DOT__u5__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->ks_new_test__DOT__u5__DOT__g = VL_RAND_RESET_I(8);
    vlSelf->ks_new_test__DOT__u5__DOT__p = VL_RAND_RESET_I(8);
    vlSelf->ks_new_test__DOT__u6__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->ks_new_test__DOT__u6__DOT__g = VL_RAND_RESET_I(8);
    vlSelf->ks_new_test__DOT__u6__DOT__p = VL_RAND_RESET_I(8);
    vlSelf->ks_new_test__DOT__u7__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->ks_new_test__DOT__u7__DOT__g = VL_RAND_RESET_I(8);
    vlSelf->ks_new_test__DOT__u7__DOT__p = VL_RAND_RESET_I(8);
    vlSelf->ks_new_test__DOT__u8__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->ks_new_test__DOT__u8__DOT__g = VL_RAND_RESET_I(8);
    vlSelf->ks_new_test__DOT__u8__DOT__p = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u8__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u7__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u6__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u5__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u4__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u3__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u2__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigrprev__TOP__ks_new_test__DOT__u1__DOT__c = VL_RAND_RESET_I(7);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__VicoDidInit = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
