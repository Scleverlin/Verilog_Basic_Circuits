// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCLA_HAN_shi_8.h for the primary calling header

#include "verilated.h"

#include "VCLA_HAN_shi_8___024root.h"

VL_ATTR_COLD void VCLA_HAN_shi_8___024root___eval_static(VCLA_HAN_shi_8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_HAN_shi_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_HAN_shi_8___024root___eval_static\n"); );
}

VL_ATTR_COLD void VCLA_HAN_shi_8___024root___eval_initial(VCLA_HAN_shi_8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_HAN_shi_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_HAN_shi_8___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u0__DOT__gnpg 
        = vlSelf->CLA_HAN_shi_8__DOT__u0__DOT__gnpg;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u0__DOT__pp 
        = vlSelf->CLA_HAN_shi_8__DOT__u0__DOT__pp;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u1__DOT__gnpg 
        = vlSelf->CLA_HAN_shi_8__DOT__u1__DOT__gnpg;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u1__DOT__pp 
        = vlSelf->CLA_HAN_shi_8__DOT__u1__DOT__pp;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u2__DOT__gnpg 
        = vlSelf->CLA_HAN_shi_8__DOT__u2__DOT__gnpg;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u2__DOT__pp 
        = vlSelf->CLA_HAN_shi_8__DOT__u2__DOT__pp;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u3__DOT__gnpg 
        = vlSelf->CLA_HAN_shi_8__DOT__u3__DOT__gnpg;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u3__DOT__pp 
        = vlSelf->CLA_HAN_shi_8__DOT__u3__DOT__pp;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u4__DOT__gnpg 
        = vlSelf->CLA_HAN_shi_8__DOT__u4__DOT__gnpg;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u4__DOT__pp 
        = vlSelf->CLA_HAN_shi_8__DOT__u4__DOT__pp;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u5__DOT__gnpg 
        = vlSelf->CLA_HAN_shi_8__DOT__u5__DOT__gnpg;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u5__DOT__pp 
        = vlSelf->CLA_HAN_shi_8__DOT__u5__DOT__pp;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u6__DOT__gnpg 
        = vlSelf->CLA_HAN_shi_8__DOT__u6__DOT__gnpg;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u6__DOT__pp 
        = vlSelf->CLA_HAN_shi_8__DOT__u6__DOT__pp;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u7__DOT__gnpg 
        = vlSelf->CLA_HAN_shi_8__DOT__u7__DOT__gnpg;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u7__DOT__pp 
        = vlSelf->CLA_HAN_shi_8__DOT__u7__DOT__pp;
}

VL_ATTR_COLD void VCLA_HAN_shi_8___024root___eval_final(VCLA_HAN_shi_8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_HAN_shi_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_HAN_shi_8___024root___eval_final\n"); );
}

VL_ATTR_COLD void VCLA_HAN_shi_8___024root___eval_triggers__stl(VCLA_HAN_shi_8___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_HAN_shi_8___024root___dump_triggers__stl(VCLA_HAN_shi_8___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VCLA_HAN_shi_8___024root___eval_stl(VCLA_HAN_shi_8___024root* vlSelf);

VL_ATTR_COLD void VCLA_HAN_shi_8___024root___eval_settle(VCLA_HAN_shi_8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_HAN_shi_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_HAN_shi_8___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VCLA_HAN_shi_8___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VCLA_HAN_shi_8___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("CLA_HAN_shi_8.v", 4, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VCLA_HAN_shi_8___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_HAN_shi_8___024root___dump_triggers__stl(VCLA_HAN_shi_8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_HAN_shi_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_HAN_shi_8___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if (vlSelf->__VstlTriggered.at(1U)) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] CLA_HAN_shi_8.u0.gnpg)\n");
    }
    if (vlSelf->__VstlTriggered.at(2U)) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] CLA_HAN_shi_8.u0.pp)\n");
    }
    if (vlSelf->__VstlTriggered.at(3U)) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] CLA_HAN_shi_8.u1.gnpg)\n");
    }
    if (vlSelf->__VstlTriggered.at(4U)) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] CLA_HAN_shi_8.u1.pp)\n");
    }
    if (vlSelf->__VstlTriggered.at(5U)) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] CLA_HAN_shi_8.u2.gnpg)\n");
    }
    if (vlSelf->__VstlTriggered.at(6U)) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] CLA_HAN_shi_8.u2.pp)\n");
    }
    if (vlSelf->__VstlTriggered.at(7U)) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] CLA_HAN_shi_8.u3.gnpg)\n");
    }
    if (vlSelf->__VstlTriggered.at(8U)) {
        VL_DBG_MSGF("         'stl' region trigger index 8 is active: @([hybrid] CLA_HAN_shi_8.u3.pp)\n");
    }
    if (vlSelf->__VstlTriggered.at(9U)) {
        VL_DBG_MSGF("         'stl' region trigger index 9 is active: @([hybrid] CLA_HAN_shi_8.u4.gnpg)\n");
    }
    if (vlSelf->__VstlTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'stl' region trigger index 10 is active: @([hybrid] CLA_HAN_shi_8.u4.pp)\n");
    }
    if (vlSelf->__VstlTriggered.at(0xbU)) {
        VL_DBG_MSGF("         'stl' region trigger index 11 is active: @([hybrid] CLA_HAN_shi_8.u5.gnpg)\n");
    }
    if (vlSelf->__VstlTriggered.at(0xcU)) {
        VL_DBG_MSGF("         'stl' region trigger index 12 is active: @([hybrid] CLA_HAN_shi_8.u5.pp)\n");
    }
    if (vlSelf->__VstlTriggered.at(0xdU)) {
        VL_DBG_MSGF("         'stl' region trigger index 13 is active: @([hybrid] CLA_HAN_shi_8.u6.gnpg)\n");
    }
    if (vlSelf->__VstlTriggered.at(0xeU)) {
        VL_DBG_MSGF("         'stl' region trigger index 14 is active: @([hybrid] CLA_HAN_shi_8.u6.pp)\n");
    }
    if (vlSelf->__VstlTriggered.at(0xfU)) {
        VL_DBG_MSGF("         'stl' region trigger index 15 is active: @([hybrid] CLA_HAN_shi_8.u7.gnpg)\n");
    }
    if (vlSelf->__VstlTriggered.at(0x10U)) {
        VL_DBG_MSGF("         'stl' region trigger index 16 is active: @([hybrid] CLA_HAN_shi_8.u7.pp)\n");
    }
}
#endif  // VL_DEBUG

void VCLA_HAN_shi_8___024root___ico_sequent__TOP__0(VCLA_HAN_shi_8___024root* vlSelf);
void VCLA_HAN_shi_8___024root___ico_comb__TOP__0(VCLA_HAN_shi_8___024root* vlSelf);
void VCLA_HAN_shi_8___024root___ico_comb__TOP__1(VCLA_HAN_shi_8___024root* vlSelf);
void VCLA_HAN_shi_8___024root___ico_comb__TOP__2(VCLA_HAN_shi_8___024root* vlSelf);
void VCLA_HAN_shi_8___024root___ico_comb__TOP__3(VCLA_HAN_shi_8___024root* vlSelf);
void VCLA_HAN_shi_8___024root___ico_comb__TOP__4(VCLA_HAN_shi_8___024root* vlSelf);
void VCLA_HAN_shi_8___024root___ico_comb__TOP__5(VCLA_HAN_shi_8___024root* vlSelf);
void VCLA_HAN_shi_8___024root___ico_comb__TOP__6(VCLA_HAN_shi_8___024root* vlSelf);
void VCLA_HAN_shi_8___024root___ico_comb__TOP__7(VCLA_HAN_shi_8___024root* vlSelf);
void VCLA_HAN_shi_8___024root___ico_comb__TOP__8(VCLA_HAN_shi_8___024root* vlSelf);
void VCLA_HAN_shi_8___024root___ico_comb__TOP__9(VCLA_HAN_shi_8___024root* vlSelf);
void VCLA_HAN_shi_8___024root___ico_comb__TOP__10(VCLA_HAN_shi_8___024root* vlSelf);
void VCLA_HAN_shi_8___024root___ico_comb__TOP__11(VCLA_HAN_shi_8___024root* vlSelf);
void VCLA_HAN_shi_8___024root___ico_comb__TOP__12(VCLA_HAN_shi_8___024root* vlSelf);
void VCLA_HAN_shi_8___024root___ico_comb__TOP__13(VCLA_HAN_shi_8___024root* vlSelf);
void VCLA_HAN_shi_8___024root___ico_comb__TOP__14(VCLA_HAN_shi_8___024root* vlSelf);
void VCLA_HAN_shi_8___024root___ico_comb__TOP__15(VCLA_HAN_shi_8___024root* vlSelf);
void VCLA_HAN_shi_8___024root___ico_comb__TOP__16(VCLA_HAN_shi_8___024root* vlSelf);
void VCLA_HAN_shi_8___024root___ico_comb__TOP__17(VCLA_HAN_shi_8___024root* vlSelf);
void VCLA_HAN_shi_8___024root___ico_comb__TOP__18(VCLA_HAN_shi_8___024root* vlSelf);
void VCLA_HAN_shi_8___024root___ico_comb__TOP__19(VCLA_HAN_shi_8___024root* vlSelf);
void VCLA_HAN_shi_8___024root___ico_comb__TOP__20(VCLA_HAN_shi_8___024root* vlSelf);
void VCLA_HAN_shi_8___024root___ico_comb__TOP__21(VCLA_HAN_shi_8___024root* vlSelf);
void VCLA_HAN_shi_8___024root___ico_comb__TOP__22(VCLA_HAN_shi_8___024root* vlSelf);
void VCLA_HAN_shi_8___024root___ico_comb__TOP__23(VCLA_HAN_shi_8___024root* vlSelf);

VL_ATTR_COLD void VCLA_HAN_shi_8___024root___eval_stl(VCLA_HAN_shi_8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_HAN_shi_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_HAN_shi_8___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VCLA_HAN_shi_8___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(0x10U))) {
        VCLA_HAN_shi_8___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(0xfU))) {
        VCLA_HAN_shi_8___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(0xeU))) {
        VCLA_HAN_shi_8___024root___ico_comb__TOP__2(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(0xdU))) {
        VCLA_HAN_shi_8___024root___ico_comb__TOP__3(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(0xcU))) {
        VCLA_HAN_shi_8___024root___ico_comb__TOP__4(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(0xbU))) {
        VCLA_HAN_shi_8___024root___ico_comb__TOP__5(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(0xaU))) {
        VCLA_HAN_shi_8___024root___ico_comb__TOP__6(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(9U))) {
        VCLA_HAN_shi_8___024root___ico_comb__TOP__7(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(8U))) {
        VCLA_HAN_shi_8___024root___ico_comb__TOP__8(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(7U))) {
        VCLA_HAN_shi_8___024root___ico_comb__TOP__9(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(6U))) {
        VCLA_HAN_shi_8___024root___ico_comb__TOP__10(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(5U))) {
        VCLA_HAN_shi_8___024root___ico_comb__TOP__11(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(4U))) {
        VCLA_HAN_shi_8___024root___ico_comb__TOP__12(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(3U))) {
        VCLA_HAN_shi_8___024root___ico_comb__TOP__13(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(2U))) {
        VCLA_HAN_shi_8___024root___ico_comb__TOP__14(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U))) {
        VCLA_HAN_shi_8___024root___ico_comb__TOP__15(vlSelf);
    }
    if (((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U)) 
         | vlSelf->__VstlTriggered.at(2U))) {
        VCLA_HAN_shi_8___024root___ico_comb__TOP__16(vlSelf);
    }
    if (((((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U)) 
           | vlSelf->__VstlTriggered.at(2U)) | vlSelf->__VstlTriggered.at(3U)) 
         | vlSelf->__VstlTriggered.at(4U))) {
        VCLA_HAN_shi_8___024root___ico_comb__TOP__17(vlSelf);
    }
    if (((((((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U)) 
             | vlSelf->__VstlTriggered.at(2U)) | vlSelf->__VstlTriggered.at(3U)) 
           | vlSelf->__VstlTriggered.at(4U)) | vlSelf->__VstlTriggered.at(5U)) 
         | vlSelf->__VstlTriggered.at(6U))) {
        VCLA_HAN_shi_8___024root___ico_comb__TOP__18(vlSelf);
    }
    if (((((((((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U)) 
               | vlSelf->__VstlTriggered.at(2U)) | vlSelf->__VstlTriggered.at(3U)) 
             | vlSelf->__VstlTriggered.at(4U)) | vlSelf->__VstlTriggered.at(5U)) 
           | vlSelf->__VstlTriggered.at(6U)) | vlSelf->__VstlTriggered.at(7U)) 
         | vlSelf->__VstlTriggered.at(8U))) {
        VCLA_HAN_shi_8___024root___ico_comb__TOP__19(vlSelf);
    }
    if (((((((((((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U)) 
                 | vlSelf->__VstlTriggered.at(2U)) 
                | vlSelf->__VstlTriggered.at(3U)) | vlSelf->__VstlTriggered.at(4U)) 
              | vlSelf->__VstlTriggered.at(5U)) | vlSelf->__VstlTriggered.at(6U)) 
            | vlSelf->__VstlTriggered.at(7U)) | vlSelf->__VstlTriggered.at(8U)) 
          | vlSelf->__VstlTriggered.at(9U)) | vlSelf->__VstlTriggered.at(0xaU))) {
        VCLA_HAN_shi_8___024root___ico_comb__TOP__20(vlSelf);
    }
    if (((((((((((((vlSelf->__VstlTriggered.at(0U) 
                    | vlSelf->__VstlTriggered.at(1U)) 
                   | vlSelf->__VstlTriggered.at(2U)) 
                  | vlSelf->__VstlTriggered.at(3U)) 
                 | vlSelf->__VstlTriggered.at(4U)) 
                | vlSelf->__VstlTriggered.at(5U)) | vlSelf->__VstlTriggered.at(6U)) 
              | vlSelf->__VstlTriggered.at(7U)) | vlSelf->__VstlTriggered.at(8U)) 
            | vlSelf->__VstlTriggered.at(9U)) | vlSelf->__VstlTriggered.at(0xaU)) 
          | vlSelf->__VstlTriggered.at(0xbU)) | vlSelf->__VstlTriggered.at(0xcU))) {
        VCLA_HAN_shi_8___024root___ico_comb__TOP__21(vlSelf);
    }
    if (((((((((((((((vlSelf->__VstlTriggered.at(0U) 
                      | vlSelf->__VstlTriggered.at(1U)) 
                     | vlSelf->__VstlTriggered.at(2U)) 
                    | vlSelf->__VstlTriggered.at(3U)) 
                   | vlSelf->__VstlTriggered.at(4U)) 
                  | vlSelf->__VstlTriggered.at(5U)) 
                 | vlSelf->__VstlTriggered.at(6U)) 
                | vlSelf->__VstlTriggered.at(7U)) | vlSelf->__VstlTriggered.at(8U)) 
              | vlSelf->__VstlTriggered.at(9U)) | vlSelf->__VstlTriggered.at(0xaU)) 
            | vlSelf->__VstlTriggered.at(0xbU)) | vlSelf->__VstlTriggered.at(0xcU)) 
          | vlSelf->__VstlTriggered.at(0xdU)) | vlSelf->__VstlTriggered.at(0xeU))) {
        VCLA_HAN_shi_8___024root___ico_comb__TOP__22(vlSelf);
    }
    if (((((((((((((((((vlSelf->__VstlTriggered.at(0U) 
                        | vlSelf->__VstlTriggered.at(1U)) 
                       | vlSelf->__VstlTriggered.at(2U)) 
                      | vlSelf->__VstlTriggered.at(3U)) 
                     | vlSelf->__VstlTriggered.at(4U)) 
                    | vlSelf->__VstlTriggered.at(5U)) 
                   | vlSelf->__VstlTriggered.at(6U)) 
                  | vlSelf->__VstlTriggered.at(7U)) 
                 | vlSelf->__VstlTriggered.at(8U)) 
                | vlSelf->__VstlTriggered.at(9U)) | vlSelf->__VstlTriggered.at(0xaU)) 
              | vlSelf->__VstlTriggered.at(0xbU)) | vlSelf->__VstlTriggered.at(0xcU)) 
            | vlSelf->__VstlTriggered.at(0xdU)) | vlSelf->__VstlTriggered.at(0xeU)) 
          | vlSelf->__VstlTriggered.at(0xfU)) | vlSelf->__VstlTriggered.at(0x10U))) {
        VCLA_HAN_shi_8___024root___ico_comb__TOP__23(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_HAN_shi_8___024root___dump_triggers__ico(VCLA_HAN_shi_8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_HAN_shi_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_HAN_shi_8___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if (vlSelf->__VicoTriggered.at(1U)) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] CLA_HAN_shi_8.u0.gnpg)\n");
    }
    if (vlSelf->__VicoTriggered.at(2U)) {
        VL_DBG_MSGF("         'ico' region trigger index 2 is active: @([hybrid] CLA_HAN_shi_8.u0.pp)\n");
    }
    if (vlSelf->__VicoTriggered.at(3U)) {
        VL_DBG_MSGF("         'ico' region trigger index 3 is active: @([hybrid] CLA_HAN_shi_8.u1.gnpg)\n");
    }
    if (vlSelf->__VicoTriggered.at(4U)) {
        VL_DBG_MSGF("         'ico' region trigger index 4 is active: @([hybrid] CLA_HAN_shi_8.u1.pp)\n");
    }
    if (vlSelf->__VicoTriggered.at(5U)) {
        VL_DBG_MSGF("         'ico' region trigger index 5 is active: @([hybrid] CLA_HAN_shi_8.u2.gnpg)\n");
    }
    if (vlSelf->__VicoTriggered.at(6U)) {
        VL_DBG_MSGF("         'ico' region trigger index 6 is active: @([hybrid] CLA_HAN_shi_8.u2.pp)\n");
    }
    if (vlSelf->__VicoTriggered.at(7U)) {
        VL_DBG_MSGF("         'ico' region trigger index 7 is active: @([hybrid] CLA_HAN_shi_8.u3.gnpg)\n");
    }
    if (vlSelf->__VicoTriggered.at(8U)) {
        VL_DBG_MSGF("         'ico' region trigger index 8 is active: @([hybrid] CLA_HAN_shi_8.u3.pp)\n");
    }
    if (vlSelf->__VicoTriggered.at(9U)) {
        VL_DBG_MSGF("         'ico' region trigger index 9 is active: @([hybrid] CLA_HAN_shi_8.u4.gnpg)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'ico' region trigger index 10 is active: @([hybrid] CLA_HAN_shi_8.u4.pp)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xbU)) {
        VL_DBG_MSGF("         'ico' region trigger index 11 is active: @([hybrid] CLA_HAN_shi_8.u5.gnpg)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xcU)) {
        VL_DBG_MSGF("         'ico' region trigger index 12 is active: @([hybrid] CLA_HAN_shi_8.u5.pp)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xdU)) {
        VL_DBG_MSGF("         'ico' region trigger index 13 is active: @([hybrid] CLA_HAN_shi_8.u6.gnpg)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xeU)) {
        VL_DBG_MSGF("         'ico' region trigger index 14 is active: @([hybrid] CLA_HAN_shi_8.u6.pp)\n");
    }
    if (vlSelf->__VicoTriggered.at(0xfU)) {
        VL_DBG_MSGF("         'ico' region trigger index 15 is active: @([hybrid] CLA_HAN_shi_8.u7.gnpg)\n");
    }
    if (vlSelf->__VicoTriggered.at(0x10U)) {
        VL_DBG_MSGF("         'ico' region trigger index 16 is active: @([hybrid] CLA_HAN_shi_8.u7.pp)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_HAN_shi_8___024root___dump_triggers__act(VCLA_HAN_shi_8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_HAN_shi_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_HAN_shi_8___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] CLA_HAN_shi_8.u0.gnpg)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] CLA_HAN_shi_8.u0.pp)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] CLA_HAN_shi_8.u1.gnpg)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] CLA_HAN_shi_8.u1.pp)\n");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] CLA_HAN_shi_8.u2.gnpg)\n");
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] CLA_HAN_shi_8.u2.pp)\n");
    }
    if (vlSelf->__VactTriggered.at(6U)) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] CLA_HAN_shi_8.u3.gnpg)\n");
    }
    if (vlSelf->__VactTriggered.at(7U)) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([hybrid] CLA_HAN_shi_8.u3.pp)\n");
    }
    if (vlSelf->__VactTriggered.at(8U)) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([hybrid] CLA_HAN_shi_8.u4.gnpg)\n");
    }
    if (vlSelf->__VactTriggered.at(9U)) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([hybrid] CLA_HAN_shi_8.u4.pp)\n");
    }
    if (vlSelf->__VactTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([hybrid] CLA_HAN_shi_8.u5.gnpg)\n");
    }
    if (vlSelf->__VactTriggered.at(0xbU)) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @([hybrid] CLA_HAN_shi_8.u5.pp)\n");
    }
    if (vlSelf->__VactTriggered.at(0xcU)) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @([hybrid] CLA_HAN_shi_8.u6.gnpg)\n");
    }
    if (vlSelf->__VactTriggered.at(0xdU)) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @([hybrid] CLA_HAN_shi_8.u6.pp)\n");
    }
    if (vlSelf->__VactTriggered.at(0xeU)) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @([hybrid] CLA_HAN_shi_8.u7.gnpg)\n");
    }
    if (vlSelf->__VactTriggered.at(0xfU)) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @([hybrid] CLA_HAN_shi_8.u7.pp)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_HAN_shi_8___024root___dump_triggers__nba(VCLA_HAN_shi_8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_HAN_shi_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_HAN_shi_8___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] CLA_HAN_shi_8.u0.gnpg)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] CLA_HAN_shi_8.u0.pp)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] CLA_HAN_shi_8.u1.gnpg)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] CLA_HAN_shi_8.u1.pp)\n");
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] CLA_HAN_shi_8.u2.gnpg)\n");
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] CLA_HAN_shi_8.u2.pp)\n");
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] CLA_HAN_shi_8.u3.gnpg)\n");
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([hybrid] CLA_HAN_shi_8.u3.pp)\n");
    }
    if (vlSelf->__VnbaTriggered.at(8U)) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([hybrid] CLA_HAN_shi_8.u4.gnpg)\n");
    }
    if (vlSelf->__VnbaTriggered.at(9U)) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([hybrid] CLA_HAN_shi_8.u4.pp)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([hybrid] CLA_HAN_shi_8.u5.gnpg)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xbU)) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @([hybrid] CLA_HAN_shi_8.u5.pp)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xcU)) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @([hybrid] CLA_HAN_shi_8.u6.gnpg)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xdU)) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @([hybrid] CLA_HAN_shi_8.u6.pp)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xeU)) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @([hybrid] CLA_HAN_shi_8.u7.gnpg)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xfU)) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @([hybrid] CLA_HAN_shi_8.u7.pp)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCLA_HAN_shi_8___024root___ctor_var_reset(VCLA_HAN_shi_8___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_HAN_shi_8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_HAN_shi_8___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_Q(64);
    vlSelf->b = VL_RAND_RESET_Q(64);
    vlSelf->cin = VL_RAND_RESET_I(1);
    vlSelf->sum = VL_RAND_RESET_Q(64);
    vlSelf->cout = VL_RAND_RESET_I(1);
    vlSelf->CLA_HAN_shi_8__DOT____Vcellinp__u1____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->CLA_HAN_shi_8__DOT____Vcellinp__u2____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->CLA_HAN_shi_8__DOT____Vcellinp__u3____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->CLA_HAN_shi_8__DOT____Vcellinp__u4____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->CLA_HAN_shi_8__DOT____Vcellinp__u5____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->CLA_HAN_shi_8__DOT____Vcellinp__u6____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->CLA_HAN_shi_8__DOT____Vcellinp__u7____pinNumber3 = VL_RAND_RESET_I(1);
    vlSelf->CLA_HAN_shi_8__DOT__u0__DOT__p = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u0__DOT__gnpg = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u0__DOT__pp = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u0__DOT__u0__DOT__g = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u0__DOT__u0__DOT__gnpg_level3 = VL_RAND_RESET_I(2);
    vlSelf->CLA_HAN_shi_8__DOT__u0__DOT__u0__DOT__pp_level3 = VL_RAND_RESET_I(2);
    vlSelf->CLA_HAN_shi_8__DOT__u0__DOT__u0__DOT____VdfgTmp_h55e07b0e__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u0__DOT__u0__DOT____VdfgTmp_h74ff2efc__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u0__DOT__u0__DOT____VdfgTmp_h3e6b2a3c__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u0__DOT__u0__DOT____VdfgTmp_h4f12603b__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u1__DOT__p = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u1__DOT__gnpg = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u1__DOT__pp = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u1__DOT__u0__DOT__g = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u1__DOT__u0__DOT__gnpg_level3 = VL_RAND_RESET_I(2);
    vlSelf->CLA_HAN_shi_8__DOT__u1__DOT__u0__DOT__pp_level3 = VL_RAND_RESET_I(2);
    vlSelf->CLA_HAN_shi_8__DOT__u1__DOT__u0__DOT____VdfgTmp_h55e07b0e__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u1__DOT__u0__DOT____VdfgTmp_h74ff2efc__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u1__DOT__u0__DOT____VdfgTmp_h3e6b2a3c__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u1__DOT__u0__DOT____VdfgTmp_h4f12603b__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u2__DOT__p = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u2__DOT__gnpg = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u2__DOT__pp = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u2__DOT__u0__DOT__g = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u2__DOT__u0__DOT__gnpg_level3 = VL_RAND_RESET_I(2);
    vlSelf->CLA_HAN_shi_8__DOT__u2__DOT__u0__DOT__pp_level3 = VL_RAND_RESET_I(2);
    vlSelf->CLA_HAN_shi_8__DOT__u2__DOT__u0__DOT____VdfgTmp_h55e07b0e__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u2__DOT__u0__DOT____VdfgTmp_h74ff2efc__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u2__DOT__u0__DOT____VdfgTmp_h3e6b2a3c__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u2__DOT__u0__DOT____VdfgTmp_h4f12603b__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u3__DOT__p = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u3__DOT__gnpg = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u3__DOT__pp = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u3__DOT__u0__DOT__g = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u3__DOT__u0__DOT__gnpg_level3 = VL_RAND_RESET_I(2);
    vlSelf->CLA_HAN_shi_8__DOT__u3__DOT__u0__DOT__pp_level3 = VL_RAND_RESET_I(2);
    vlSelf->CLA_HAN_shi_8__DOT__u3__DOT__u0__DOT____VdfgTmp_h55e07b0e__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u3__DOT__u0__DOT____VdfgTmp_h74ff2efc__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u3__DOT__u0__DOT____VdfgTmp_h3e6b2a3c__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u3__DOT__u0__DOT____VdfgTmp_h4f12603b__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u4__DOT__p = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u4__DOT__gnpg = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u4__DOT__pp = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u4__DOT__u0__DOT__g = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u4__DOT__u0__DOT__gnpg_level3 = VL_RAND_RESET_I(2);
    vlSelf->CLA_HAN_shi_8__DOT__u4__DOT__u0__DOT__pp_level3 = VL_RAND_RESET_I(2);
    vlSelf->CLA_HAN_shi_8__DOT__u4__DOT__u0__DOT____VdfgTmp_h55e07b0e__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u4__DOT__u0__DOT____VdfgTmp_h74ff2efc__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u4__DOT__u0__DOT____VdfgTmp_h3e6b2a3c__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u4__DOT__u0__DOT____VdfgTmp_h4f12603b__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u5__DOT__p = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u5__DOT__gnpg = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u5__DOT__pp = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u5__DOT__u0__DOT__g = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u5__DOT__u0__DOT__gnpg_level3 = VL_RAND_RESET_I(2);
    vlSelf->CLA_HAN_shi_8__DOT__u5__DOT__u0__DOT__pp_level3 = VL_RAND_RESET_I(2);
    vlSelf->CLA_HAN_shi_8__DOT__u5__DOT__u0__DOT____VdfgTmp_h55e07b0e__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u5__DOT__u0__DOT____VdfgTmp_h74ff2efc__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u5__DOT__u0__DOT____VdfgTmp_h3e6b2a3c__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u5__DOT__u0__DOT____VdfgTmp_h4f12603b__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u6__DOT__p = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u6__DOT__gnpg = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u6__DOT__pp = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u6__DOT__u0__DOT__g = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u6__DOT__u0__DOT__gnpg_level3 = VL_RAND_RESET_I(2);
    vlSelf->CLA_HAN_shi_8__DOT__u6__DOT__u0__DOT__pp_level3 = VL_RAND_RESET_I(2);
    vlSelf->CLA_HAN_shi_8__DOT__u6__DOT__u0__DOT____VdfgTmp_h55e07b0e__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u6__DOT__u0__DOT____VdfgTmp_h74ff2efc__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u6__DOT__u0__DOT____VdfgTmp_h3e6b2a3c__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u6__DOT__u0__DOT____VdfgTmp_h4f12603b__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u7__DOT__p = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u7__DOT__gnpg = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u7__DOT__pp = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u7__DOT__u0__DOT__g = VL_RAND_RESET_I(8);
    vlSelf->CLA_HAN_shi_8__DOT__u7__DOT__u0__DOT__gnpg_level3 = VL_RAND_RESET_I(2);
    vlSelf->CLA_HAN_shi_8__DOT__u7__DOT__u0__DOT__pp_level3 = VL_RAND_RESET_I(2);
    vlSelf->CLA_HAN_shi_8__DOT__u7__DOT__u0__DOT____VdfgTmp_h55e07b0e__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u7__DOT__u0__DOT____VdfgTmp_h74ff2efc__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u7__DOT__u0__DOT____VdfgTmp_h3e6b2a3c__0 = 0;
    vlSelf->CLA_HAN_shi_8__DOT__u7__DOT__u0__DOT____VdfgTmp_h4f12603b__0 = 0;
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u0__DOT__gnpg = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u0__DOT__pp = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u1__DOT__gnpg = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u1__DOT__pp = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u2__DOT__gnpg = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u2__DOT__pp = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u3__DOT__gnpg = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u3__DOT__pp = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u4__DOT__gnpg = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u4__DOT__pp = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u5__DOT__gnpg = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u5__DOT__pp = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u6__DOT__gnpg = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u6__DOT__pp = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u7__DOT__gnpg = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigrprev__TOP__CLA_HAN_shi_8__DOT__u7__DOT__pp = VL_RAND_RESET_I(8);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__VicoDidInit = 0;
    vlSelf->__VactDidInit = 0;
}
