// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCLA_index_4_32.h for the primary calling header

#include "verilated.h"

#include "VCLA_index_4_32__Syms.h"
#include "VCLA_index_4_32___024root.h"

VL_ATTR_COLD void VCLA_index_4_32___024root___eval_static(VCLA_index_4_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_index_4_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_index_4_32___024root___eval_static\n"); );
}

VL_ATTR_COLD void VCLA_index_4_32___024root___eval_initial(VCLA_index_4_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_index_4_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_index_4_32___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__CLA_index_4_32__DOT__shi__DOT__gnpg__0 
        = vlSelf->CLA_index_4_32__DOT__shi__DOT__gnpg;
    vlSelf->__Vtrigprevexpr___TOP__CLA_index_4_32__DOT__shi__DOT__pp__0 
        = vlSelf->CLA_index_4_32__DOT__shi__DOT__pp;
    vlSelf->__Vtrigprevexpr___TOP__CLA_index_4_32__DOT__shi1__DOT__gnpg__0 
        = vlSelf->CLA_index_4_32__DOT__shi1__DOT__gnpg;
    vlSelf->__Vtrigprevexpr___TOP__CLA_index_4_32__DOT__shi1__DOT__pp__0 
        = vlSelf->CLA_index_4_32__DOT__shi1__DOT__pp;
}

VL_ATTR_COLD void VCLA_index_4_32___024root___eval_final(VCLA_index_4_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_index_4_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_index_4_32___024root___eval_final\n"); );
}

VL_ATTR_COLD void VCLA_index_4_32___024root___eval_triggers__stl(VCLA_index_4_32___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_index_4_32___024root___dump_triggers__stl(VCLA_index_4_32___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VCLA_index_4_32___024root___eval_stl(VCLA_index_4_32___024root* vlSelf);

VL_ATTR_COLD void VCLA_index_4_32___024root___eval_settle(VCLA_index_4_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_index_4_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_index_4_32___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VCLA_index_4_32___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VCLA_index_4_32___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/shi/verilog/Adder_test/CLA_index_4_32.v", 6, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VCLA_index_4_32___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_index_4_32___024root___dump_triggers__stl(VCLA_index_4_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_index_4_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_index_4_32___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] CLA_index_4_32.shi.gnpg)\n");
    }
    if ((4ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] CLA_index_4_32.shi.pp)\n");
    }
    if ((8ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] CLA_index_4_32.shi1.gnpg)\n");
    }
    if ((0x10ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] CLA_index_4_32.shi1.pp)\n");
    }
}
#endif  // VL_DEBUG

void VCLA_index_4_32___024root___ico_sequent__TOP__0(VCLA_index_4_32___024root* vlSelf);
void VCLA_index_4_32___024root___ico_comb__TOP__0(VCLA_index_4_32___024root* vlSelf);
void VCLA_index_4_32___024root___ico_comb__TOP__1(VCLA_index_4_32___024root* vlSelf);
void VCLA_index_4_32___024root___ico_comb__TOP__2(VCLA_index_4_32___024root* vlSelf);
void VCLA_index_4_32___024root___ico_comb__TOP__3(VCLA_index_4_32___024root* vlSelf);
void VCLA_index_4_32___024root___ico_comb__TOP__4(VCLA_index_4_32___024root* vlSelf);
void VCLA_index_4_32___024root___ico_comb__TOP__5(VCLA_index_4_32___024root* vlSelf);

VL_ATTR_COLD void VCLA_index_4_32___024root___eval_stl(VCLA_index_4_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_index_4_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_index_4_32___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VCLA_index_4_32___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((0x11ULL & vlSelf->__VstlTriggered.word(0U))) {
        VCLA_index_4_32___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((9ULL & vlSelf->__VstlTriggered.word(0U))) {
        VCLA_index_4_32___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((5ULL & vlSelf->__VstlTriggered.word(0U))) {
        VCLA_index_4_32___024root___ico_comb__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        VCLA_index_4_32___024root___ico_comb__TOP__3(vlSelf);
    }
    if ((7ULL & vlSelf->__VstlTriggered.word(0U))) {
        VCLA_index_4_32___024root___ico_comb__TOP__4(vlSelf);
    }
    if ((0x1fULL & vlSelf->__VstlTriggered.word(0U))) {
        VCLA_index_4_32___024root___ico_comb__TOP__5(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_index_4_32___024root___dump_triggers__ico(VCLA_index_4_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_index_4_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_index_4_32___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] CLA_index_4_32.shi.gnpg)\n");
    }
    if ((4ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 2 is active: @([hybrid] CLA_index_4_32.shi.pp)\n");
    }
    if ((8ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 3 is active: @([hybrid] CLA_index_4_32.shi1.gnpg)\n");
    }
    if ((0x10ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 4 is active: @([hybrid] CLA_index_4_32.shi1.pp)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_index_4_32___024root___dump_triggers__act(VCLA_index_4_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_index_4_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_index_4_32___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] CLA_index_4_32.shi.gnpg)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] CLA_index_4_32.shi.pp)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] CLA_index_4_32.shi1.gnpg)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] CLA_index_4_32.shi1.pp)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCLA_index_4_32___024root___dump_triggers__nba(VCLA_index_4_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_index_4_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_index_4_32___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] CLA_index_4_32.shi.gnpg)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] CLA_index_4_32.shi.pp)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] CLA_index_4_32.shi1.gnpg)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] CLA_index_4_32.shi1.pp)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCLA_index_4_32___024root___ctor_var_reset(VCLA_index_4_32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLA_index_4_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLA_index_4_32___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_Q(64);
    vlSelf->b = VL_RAND_RESET_Q(64);
    vlSelf->cin = VL_RAND_RESET_I(1);
    vlSelf->sum = VL_RAND_RESET_Q(64);
    vlSelf->cout = VL_RAND_RESET_I(1);
    vlSelf->CLA_index_4_32__DOT__c = VL_RAND_RESET_I(1);
    vlSelf->CLA_index_4_32__DOT____Vcellout__shi____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->CLA_index_4_32__DOT__shi__DOT__p = VL_RAND_RESET_I(32);
    vlSelf->CLA_index_4_32__DOT__shi__DOT__gnpg = VL_RAND_RESET_I(32);
    vlSelf->CLA_index_4_32__DOT__shi__DOT__pp = VL_RAND_RESET_I(32);
    vlSelf->CLA_index_4_32__DOT__shi__DOT__u0__DOT__g = VL_RAND_RESET_I(32);
    vlSelf->CLA_index_4_32__DOT__shi__DOT__u0__DOT__gnpg_level1 = VL_RAND_RESET_I(16);
    vlSelf->CLA_index_4_32__DOT__shi__DOT__u0__DOT__pp_level1 = VL_RAND_RESET_I(16);
    vlSelf->CLA_index_4_32__DOT__shi__DOT__u0__DOT__gnpg_level4 = VL_RAND_RESET_I(8);
    vlSelf->CLA_index_4_32__DOT__shi__DOT__u0__DOT__pp_level4 = VL_RAND_RESET_I(8);
    vlSelf->CLA_index_4_32__DOT__shi__DOT__u0__DOT__gnpg_level5 = VL_RAND_RESET_I(4);
    vlSelf->CLA_index_4_32__DOT__shi__DOT__u0__DOT__pp_level5 = VL_RAND_RESET_I(4);
    vlSelf->CLA_index_4_32__DOT__shi1__DOT__p = VL_RAND_RESET_I(32);
    vlSelf->CLA_index_4_32__DOT__shi1__DOT__gnpg = VL_RAND_RESET_I(32);
    vlSelf->CLA_index_4_32__DOT__shi1__DOT__pp = VL_RAND_RESET_I(32);
    vlSelf->CLA_index_4_32__DOT__shi1__DOT__u0__DOT__g = VL_RAND_RESET_I(32);
    vlSelf->CLA_index_4_32__DOT__shi1__DOT__u0__DOT__gnpg_level1 = VL_RAND_RESET_I(16);
    vlSelf->CLA_index_4_32__DOT__shi1__DOT__u0__DOT__pp_level1 = VL_RAND_RESET_I(16);
    vlSelf->CLA_index_4_32__DOT__shi1__DOT__u0__DOT__gnpg_level4 = VL_RAND_RESET_I(8);
    vlSelf->CLA_index_4_32__DOT__shi1__DOT__u0__DOT__pp_level4 = VL_RAND_RESET_I(8);
    vlSelf->CLA_index_4_32__DOT__shi1__DOT__u0__DOT__gnpg_level5 = VL_RAND_RESET_I(4);
    vlSelf->CLA_index_4_32__DOT__shi1__DOT__u0__DOT__pp_level5 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__CLA_index_4_32__DOT__shi__DOT__gnpg__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__CLA_index_4_32__DOT__shi__DOT__pp__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__CLA_index_4_32__DOT__shi1__DOT__gnpg__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__CLA_index_4_32__DOT__shi1__DOT__pp__0 = VL_RAND_RESET_I(32);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__VicoDidInit = 0;
    vlSelf->__VactDidInit = 0;
}
