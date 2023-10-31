// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSRT_divider_FP32.h for the primary calling header

#include "verilated.h"

#include "VSRT_divider_FP32___024root.h"

VL_ATTR_COLD void VSRT_divider_FP32___024root___eval_static(VSRT_divider_FP32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root___eval_static\n"); );
}

VL_ATTR_COLD void VSRT_divider_FP32___024root___eval_initial(VSRT_divider_FP32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void VSRT_divider_FP32___024root___eval_final(VSRT_divider_FP32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root___eval_final\n"); );
}

VL_ATTR_COLD void VSRT_divider_FP32___024root___eval_triggers__stl(VSRT_divider_FP32___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSRT_divider_FP32___024root___dump_triggers__stl(VSRT_divider_FP32___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VSRT_divider_FP32___024root___eval_stl(VSRT_divider_FP32___024root* vlSelf);

VL_ATTR_COLD void VSRT_divider_FP32___024root___eval_settle(VSRT_divider_FP32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VSRT_divider_FP32___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VSRT_divider_FP32___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("SRT_divider_FP32.sv", 11, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VSRT_divider_FP32___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSRT_divider_FP32___024root___dump_triggers__stl(VSRT_divider_FP32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSRT_divider_FP32___024root___stl_sequent__TOP__0(VSRT_divider_FP32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*25:0*/ __VdfgTmp_hbcc55e84__0;
    __VdfgTmp_hbcc55e84__0 = 0;
    // Body
    vlSelf->SRT_divider_FP32__DOT__flag_1 = (0x3fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->SRT_divider_FP32__DOT__flag)));
    vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp 
        = ((0U == (0xffU & (vlSelf->dividend >> 0x17U)))
            ? (0x7fffffU & vlSelf->dividend) : (0x800000U 
                                                | (0x7fffffU 
                                                   & vlSelf->dividend)));
    if ((0x2000000U & vlSelf->SRT_divider_FP32__DOT__current_remainder)) {
        vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_r 
            = (0x3ffffffU & ((IData)(1U) + (~ vlSelf->SRT_divider_FP32__DOT__current_remainder)));
        vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0 
            = ((IData)(1U) + (~ (0x1fU & (vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                          >> 0x15U))));
        vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgExtracted_h363dca00__0 
            = (4U > (0xfU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0));
        vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgExtracted_h3c5012dc__0 
            = (5U > (0xfU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0));
    } else {
        vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_r 
            = (0x3ffffffU & vlSelf->SRT_divider_FP32__DOT__current_remainder);
        vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0 
            = (0x1fU & (vlSelf->SRT_divider_FP32__DOT__current_remainder 
                        >> 0x15U));
        vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgExtracted_h363dca00__0 
            = (3U > (0xfU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0));
        vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgExtracted_h3c5012dc__0 
            = (4U > (0xfU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0));
    }
    vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp 
        = ((0U == (0xffU & (vlSelf->divisor >> 0x17U)))
            ? (0x7fffffU & vlSelf->divisor) : (0x800000U 
                                               | (0x7fffffU 
                                                  & vlSelf->divisor)));
    vlSelf->SRT_divider_FP32__DOT__compl_dividend_shift 
        = (0x1fU & ((IData)(1U) + ((0x800000U & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                    ? 0x1fU : ((0x400000U 
                                                & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                ? 0x1eU
                                                : (
                                                   (0x200000U 
                                                    & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                    ? 0x1dU
                                                    : 
                                                   ((0x100000U 
                                                     & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                     ? 0x1cU
                                                     : 
                                                    ((0x80000U 
                                                      & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                      ? 0x1bU
                                                      : 
                                                     ((0x40000U 
                                                       & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                       ? 0x1aU
                                                       : 
                                                      ((0x20000U 
                                                        & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                        ? 0x19U
                                                        : 
                                                       ((0x10000U 
                                                         & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                         ? 0x18U
                                                         : 
                                                        ((0x8000U 
                                                          & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                          ? 0x17U
                                                          : 
                                                         ((0x4000U 
                                                           & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                           ? 0x16U
                                                           : 
                                                          ((0x2000U 
                                                            & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                            ? 0x15U
                                                            : 
                                                           ((0x1000U 
                                                             & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                             ? 0x14U
                                                             : 
                                                            ((0x800U 
                                                              & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                              ? 0x13U
                                                              : 
                                                             ((0x400U 
                                                               & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                               ? 0x12U
                                                               : 
                                                              ((0x200U 
                                                                & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                                ? 0x11U
                                                                : 
                                                               ((0x100U 
                                                                 & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                                 ? 0x10U
                                                                 : 
                                                                ((0x80U 
                                                                  & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                                  ? 0xfU
                                                                  : 
                                                                 ((0x40U 
                                                                   & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                                   ? 0xeU
                                                                   : 
                                                                  ((0x20U 
                                                                    & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                                    ? 0xdU
                                                                    : 
                                                                   ((0x10U 
                                                                     & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                                     ? 0xcU
                                                                     : 
                                                                    ((8U 
                                                                      & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                                      ? 0xbU
                                                                      : 
                                                                     ((4U 
                                                                       & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                                       ? 0xaU
                                                                       : 
                                                                      ((2U 
                                                                        & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                                        ? 9U
                                                                        : 
                                                                       ((1U 
                                                                         & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                                         ? 8U
                                                                         : 0x1fU))))))))))))))))))))))))));
    vlSelf->SRT_divider_FP32__DOT__dividend_shift = 
        ((0x800000U & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
          ? 0U : ((0x400000U & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                   ? 1U : ((0x200000U & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                            ? 2U : ((0x100000U & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                     ? 3U : ((0x80000U 
                                              & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                              ? 4U : 
                                             ((0x40000U 
                                               & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                               ? 5U
                                               : ((0x20000U 
                                                   & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                   ? 6U
                                                   : 
                                                  ((0x10000U 
                                                    & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                    ? 7U
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                     ? 8U
                                                     : 
                                                    ((0x4000U 
                                                      & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                      ? 9U
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                       ? 0xaU
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                        ? 0xbU
                                                        : 
                                                       ((0x800U 
                                                         & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                         ? 0xcU
                                                         : 
                                                        ((0x400U 
                                                          & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                          ? 0xdU
                                                          : 
                                                         ((0x200U 
                                                           & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                           ? 0xeU
                                                           : 
                                                          ((0x100U 
                                                            & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                            ? 0xfU
                                                            : 
                                                           ((0x80U 
                                                             & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                             ? 0x10U
                                                             : 
                                                            ((0x40U 
                                                              & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                              ? 0x11U
                                                              : 
                                                             ((0x20U 
                                                               & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                               ? 0x12U
                                                               : 
                                                              ((0x10U 
                                                                & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                                ? 0x13U
                                                                : 
                                                               ((8U 
                                                                 & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                                 ? 0x14U
                                                                 : 
                                                                ((4U 
                                                                  & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                                  ? 0x15U
                                                                  : 
                                                                 ((2U 
                                                                   & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                                   ? 0x16U
                                                                   : 
                                                                  ((1U 
                                                                    & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp)
                                                                    ? 0x17U
                                                                    : 0U))))))))))))))))))))))));
    vlSelf->SRT_divider_FP32__DOT__compl_divisor_shift 
        = (0x1fU & ((IData)(1U) + ((0x800000U & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                    ? 0x1fU : ((0x400000U 
                                                & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                ? 0x1eU
                                                : (
                                                   (0x200000U 
                                                    & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                    ? 0x1dU
                                                    : 
                                                   ((0x100000U 
                                                     & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                     ? 0x1cU
                                                     : 
                                                    ((0x80000U 
                                                      & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                      ? 0x1bU
                                                      : 
                                                     ((0x40000U 
                                                       & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                       ? 0x1aU
                                                       : 
                                                      ((0x20000U 
                                                        & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                        ? 0x19U
                                                        : 
                                                       ((0x10000U 
                                                         & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                         ? 0x18U
                                                         : 
                                                        ((0x8000U 
                                                          & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                          ? 0x17U
                                                          : 
                                                         ((0x4000U 
                                                           & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                           ? 0x16U
                                                           : 
                                                          ((0x2000U 
                                                            & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                            ? 0x15U
                                                            : 
                                                           ((0x1000U 
                                                             & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                             ? 0x14U
                                                             : 
                                                            ((0x800U 
                                                              & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                              ? 0x13U
                                                              : 
                                                             ((0x400U 
                                                               & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                               ? 0x12U
                                                               : 
                                                              ((0x200U 
                                                                & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                                ? 0x11U
                                                                : 
                                                               ((0x100U 
                                                                 & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                                 ? 0x10U
                                                                 : 
                                                                ((0x80U 
                                                                  & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                                  ? 0xfU
                                                                  : 
                                                                 ((0x40U 
                                                                   & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                                   ? 0xeU
                                                                   : 
                                                                  ((0x20U 
                                                                    & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                                    ? 0xdU
                                                                    : 
                                                                   ((0x10U 
                                                                     & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                                     ? 0xcU
                                                                     : 
                                                                    ((8U 
                                                                      & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                                      ? 0xbU
                                                                      : 
                                                                     ((4U 
                                                                       & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                                       ? 0xaU
                                                                       : 
                                                                      ((2U 
                                                                        & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                                        ? 9U
                                                                        : 
                                                                       ((1U 
                                                                         & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                                         ? 8U
                                                                         : 0x1fU))))))))))))))))))))))))));
    vlSelf->SRT_divider_FP32__DOT__divisor_shift = 
        ((0x800000U & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
          ? 0U : ((0x400000U & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                   ? 1U : ((0x200000U & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                            ? 2U : ((0x100000U & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                     ? 3U : ((0x80000U 
                                              & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                              ? 4U : 
                                             ((0x40000U 
                                               & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                               ? 5U
                                               : ((0x20000U 
                                                   & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                   ? 6U
                                                   : 
                                                  ((0x10000U 
                                                    & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                    ? 7U
                                                    : 
                                                   ((0x8000U 
                                                     & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                     ? 8U
                                                     : 
                                                    ((0x4000U 
                                                      & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                      ? 9U
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                       ? 0xaU
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                        ? 0xbU
                                                        : 
                                                       ((0x800U 
                                                         & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                         ? 0xcU
                                                         : 
                                                        ((0x400U 
                                                          & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                          ? 0xdU
                                                          : 
                                                         ((0x200U 
                                                           & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                           ? 0xeU
                                                           : 
                                                          ((0x100U 
                                                            & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                            ? 0xfU
                                                            : 
                                                           ((0x80U 
                                                             & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                             ? 0x10U
                                                             : 
                                                            ((0x40U 
                                                              & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                              ? 0x11U
                                                              : 
                                                             ((0x20U 
                                                               & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                               ? 0x12U
                                                               : 
                                                              ((0x10U 
                                                                & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                                ? 0x13U
                                                                : 
                                                               ((8U 
                                                                 & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                                 ? 0x14U
                                                                 : 
                                                                ((4U 
                                                                  & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                                  ? 0x15U
                                                                  : 
                                                                 ((2U 
                                                                   & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                                   ? 0x16U
                                                                   : 
                                                                  ((1U 
                                                                    & vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp)
                                                                    ? 0x17U
                                                                    : 0U))))))))))))))))))))))));
    vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized 
        = (0xffffffU & (vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp 
                        << (IData)(vlSelf->SRT_divider_FP32__DOT__divisor_shift)));
    vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_2d_3d 
        = ((vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_r 
            >= (0x3ffffffU & (vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized 
                              << 1U))) & (vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_r 
                                          < (0x3ffffffU 
                                             & (vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized 
                                                + (vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized 
                                                   << 1U)))));
    vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_d_2d 
        = ((vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_r 
            >= vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized) 
           & (vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_r 
              < (0x3ffffffU & (vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized 
                               << 1U))));
    vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_0_d 
        = (vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_r 
           < vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized);
    vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__q2 
        = (IData)(((vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized 
                    >> 0x17U) & ((0x400000U & vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized)
                                  ? ((0x200000U & vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized)
                                      ? ((0x100000U 
                                          & vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized)
                                          ? ((0x2000000U 
                                              & vlSelf->SRT_divider_FP32__DOT__current_remainder)
                                              ? (0xdU 
                                                 <= 
                                                 (0xfU 
                                                  & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))
                                              : (0xcU 
                                                 <= 
                                                 (0xfU 
                                                  & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0)))
                                          : ((0x2000000U 
                                              & vlSelf->SRT_divider_FP32__DOT__current_remainder)
                                              ? (0xcU 
                                                 <= 
                                                 (0xfU 
                                                  & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))
                                              : (0xbU 
                                                 <= 
                                                 (0xfU 
                                                  & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))))
                                      : ((0x100000U 
                                          & vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized)
                                          ? ((0x2000000U 
                                              & vlSelf->SRT_divider_FP32__DOT__current_remainder)
                                              ? (0xbU 
                                                 <= 
                                                 (0xfU 
                                                  & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))
                                              : (0xaU 
                                                 <= 
                                                 (0xfU 
                                                  & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0)))
                                          : ((0x2000000U 
                                              & vlSelf->SRT_divider_FP32__DOT__current_remainder)
                                              ? (0xbU 
                                                 <= 
                                                 (0xfU 
                                                  & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))
                                              : (9U 
                                                 <= 
                                                 (0xfU 
                                                  & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0)))))
                                  : ((0x200000U & vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized)
                                      ? ((0x100000U 
                                          & vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized)
                                          ? ((0x2000000U 
                                              & vlSelf->SRT_divider_FP32__DOT__current_remainder)
                                              ? (0xaU 
                                                 <= 
                                                 (0xfU 
                                                  & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))
                                              : (9U 
                                                 <= 
                                                 (0xfU 
                                                  & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0)))
                                          : ((0x2000000U 
                                              & vlSelf->SRT_divider_FP32__DOT__current_remainder)
                                              ? (9U 
                                                 <= 
                                                 (0xfU 
                                                  & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))
                                              : (8U 
                                                 <= 
                                                 (0xfU 
                                                  & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))))
                                      : ((0x100000U 
                                          & vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized)
                                          ? ((0x2000000U 
                                              & vlSelf->SRT_divider_FP32__DOT__current_remainder)
                                              ? (8U 
                                                 <= 
                                                 (0xfU 
                                                  & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))
                                              : (7U 
                                                 <= 
                                                 (0xfU 
                                                  & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0)))
                                          : ((0x2000000U 
                                              & vlSelf->SRT_divider_FP32__DOT__current_remainder)
                                              ? (7U 
                                                 <= 
                                                 (0xfU 
                                                  & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))
                                              : (6U 
                                                 <= 
                                                 (0xfU 
                                                  & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))))))));
    vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__q0 
        = (1U & ((~ (1U & (vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized 
                           >> 0x17U))) | ((0x400000U 
                                           & vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized)
                                           ? ((0x200000U 
                                               & vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized)
                                               ? ((0x100000U 
                                                   & vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized)
                                                   ? 
                                                  (5U 
                                                   > 
                                                   (0xfU 
                                                    & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))
                                                   : (IData)(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgExtracted_h3c5012dc__0))
                                               : (IData)(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgExtracted_h3c5012dc__0))
                                           : ((0x200000U 
                                               & vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized)
                                               ? (IData)(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgExtracted_h363dca00__0)
                                               : ((0x100000U 
                                                   & vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized)
                                                   ? 
                                                  ((0x2000000U 
                                                    & vlSelf->SRT_divider_FP32__DOT__current_remainder)
                                                    ? 
                                                   (4U 
                                                    > 
                                                    (0xfU 
                                                     & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))
                                                    : 
                                                   (2U 
                                                    > 
                                                    (0xfU 
                                                     & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0)))
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSelf->SRT_divider_FP32__DOT__current_remainder)
                                                    ? 
                                                   (3U 
                                                    > 
                                                    (0xfU 
                                                     & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))
                                                    : 
                                                   (2U 
                                                    > 
                                                    (0xfU 
                                                     & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))))))));
    vlSelf->SRT_divider_FP32__DOT__q_rounding = (0xffffffU 
                                                 & ((0xdU 
                                                     == (IData)(vlSelf->SRT_divider_FP32__DOT__flag))
                                                     ? 
                                                    ((((~ 
                                                        (vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                                         >> 0x19U)) 
                                                       & (IData)(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_2d_3d))
                                                       ? 2U
                                                       : 
                                                      (((~ 
                                                         (vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                                          >> 0x19U)) 
                                                        & (IData)(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_d_2d))
                                                        ? 1U
                                                        : 
                                                       (((~ 
                                                          (vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                                           >> 0x19U)) 
                                                         & (IData)(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_0_d))
                                                         ? 0U
                                                         : 
                                                        (((vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                                           >> 0x19U) 
                                                          & (IData)(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_0_d))
                                                          ? 0xffffffU
                                                          : 
                                                         (((vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                                            >> 0x19U) 
                                                           & (IData)(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_d_2d))
                                                           ? 0xfffffeU
                                                           : 
                                                          (((vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                                             >> 0x19U) 
                                                            & (IData)(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_2d_3d))
                                                            ? 0xfffffdU
                                                            : 0U)))))) 
                                                     + 
                                                     (vlSelf->SRT_divider_FP32__DOT__Q_pos 
                                                      >> 1U))
                                                     : 
                                                    (vlSelf->SRT_divider_FP32__DOT__Q_pos 
                                                     >> 1U)));
    if (((IData)(vlSelf->SRT_divider_FP32__DOT__dividend_shift) 
         >= (IData)(vlSelf->SRT_divider_FP32__DOT__divisor_shift))) {
        vlSelf->SRT_divider_FP32__DOT__final_shift 
            = (0x1fU & ((IData)(vlSelf->SRT_divider_FP32__DOT__dividend_shift) 
                        + (IData)(vlSelf->SRT_divider_FP32__DOT__compl_divisor_shift)));
        vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp 
            = (0xffffffU & (vlSelf->SRT_divider_FP32__DOT__q_rounding 
                            >> (IData)(vlSelf->SRT_divider_FP32__DOT__final_shift)));
    } else {
        vlSelf->SRT_divider_FP32__DOT__final_shift 
            = (0x1fU & ((IData)(vlSelf->SRT_divider_FP32__DOT__divisor_shift) 
                        + (IData)(vlSelf->SRT_divider_FP32__DOT__compl_dividend_shift)));
        vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp 
            = (0xffffffU & (vlSelf->SRT_divider_FP32__DOT__q_rounding 
                            << (IData)(vlSelf->SRT_divider_FP32__DOT__final_shift)));
    }
    vlSelf->__VdfgTmp_hba8d3c8c__0 = ((~ (IData)(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__q0)) 
                                      & (IData)(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__q2));
    vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__neg 
        = ((~ (IData)(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__q0)) 
           & (vlSelf->SRT_divider_FP32__DOT__current_remainder 
              >> 0x19U));
    vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__q 
        = ((IData)(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__q0)
            ? 0U : ((IData)(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__q2)
                     ? 2U : 1U));
    vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__quotient_temp 
        = (((IData)(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__neg) 
            << 2U) | (IData)(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__q));
    vlSelf->SRT_divider_FP32__DOT__dut__DOT__exponent_addend 
        = ((0x800000U & vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp)
            ? 0U : ((0x400000U & vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp)
                     ? 1U : ((0x200000U & vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp)
                              ? 2U : ((0x100000U & vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp)
                                       ? 3U : ((0x80000U 
                                                & vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp)
                                                ? 4U
                                                : (
                                                   (0x40000U 
                                                    & vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp)
                                                    ? 5U
                                                    : 
                                                   ((0x20000U 
                                                     & vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp)
                                                     ? 6U
                                                     : 
                                                    ((0x10000U 
                                                      & vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp)
                                                      ? 7U
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp)
                                                       ? 8U
                                                       : 
                                                      ((0x4000U 
                                                        & vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp)
                                                        ? 9U
                                                        : 
                                                       ((0x2000U 
                                                         & vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp)
                                                         ? 0xaU
                                                         : 
                                                        ((0x1000U 
                                                          & vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp)
                                                          ? 0xbU
                                                          : 
                                                         ((0x800U 
                                                           & vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp)
                                                           ? 0xcU
                                                           : 
                                                          ((0x400U 
                                                            & vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp)
                                                            ? 0xdU
                                                            : 
                                                           ((0x200U 
                                                             & vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp)
                                                             ? 0xeU
                                                             : 
                                                            ((0x100U 
                                                              & vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp)
                                                              ? 0xfU
                                                              : 
                                                             ((0x80U 
                                                               & vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp)
                                                               ? 0x10U
                                                               : 
                                                              ((0x40U 
                                                                & vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp)
                                                                ? 0x11U
                                                                : 
                                                               ((0x20U 
                                                                 & vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp)
                                                                 ? 0x12U
                                                                 : 
                                                                ((0x10U 
                                                                  & vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp)
                                                                  ? 0x13U
                                                                  : 
                                                                 ((8U 
                                                                   & vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp)
                                                                   ? 0x14U
                                                                   : 
                                                                  ((4U 
                                                                    & vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp)
                                                                    ? 0x15U
                                                                    : 
                                                                   ((2U 
                                                                     & vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp)
                                                                     ? 0x16U
                                                                     : 
                                                                    ((1U 
                                                                      & vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp)
                                                                      ? 0x17U
                                                                      : 0U))))))))))))))))))))))));
    vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h1861c662__0 
        = ((5U == (IData)(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__quotient_temp)) 
           | (IData)(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__neg));
    vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h1bae66c8__0 
        = (1U & ((~ ((IData)(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__q0) 
                     | (IData)(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__q2))) 
                 | (5U == (IData)(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__quotient_temp))));
    vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h1bae6609__0 
        = ((5U == (IData)(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__quotient_temp))
            ? 3U : (IData)(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__q));
    vlSelf->quotient = ((0x80000000U & (vlSelf->dividend 
                                        ^ vlSelf->divisor)) 
                        | ((0x7f800000U & (((IData)(0x81U) 
                                            + (((vlSelf->dividend 
                                                 >> 0x17U) 
                                                + (~ 
                                                   (vlSelf->divisor 
                                                    >> 0x17U))) 
                                               + (~ (IData)(vlSelf->SRT_divider_FP32__DOT__dut__DOT__exponent_addend)))) 
                                           << 0x17U)) 
                           | (0x7fffffU & (vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp 
                                           << (IData)(vlSelf->SRT_divider_FP32__DOT__dut__DOT__exponent_addend)))));
    vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h7ee64184__0 
        = (((5U == (IData)(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__quotient_temp)) 
            | (IData)(vlSelf->__VdfgTmp_hba8d3c8c__0)) 
           ^ (IData)(vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h1bae66c8__0));
    vlSelf->SRT_divider_FP32__DOT__Q_pos_next = ((IData)(vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h1861c662__0)
                                                  ? 
                                                 ((0x3fffffcU 
                                                   & (vlSelf->SRT_divider_FP32__DOT__Q_neg 
                                                      << 2U)) 
                                                  | (IData)(vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h1bae6609__0))
                                                  : 
                                                 ((0x3fffffcU 
                                                   & (vlSelf->SRT_divider_FP32__DOT__Q_pos 
                                                      << 2U)) 
                                                  | (IData)(vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h1bae6609__0)));
    __VdfgTmp_hbcc55e84__0 = (0x3ffffffU & ((2U == (IData)(vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h1bae6609__0))
                                             ? (vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized 
                                                << 1U)
                                             : vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized));
    vlSelf->SRT_divider_FP32__DOT__Q_neg_next = (((~ (IData)(vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h1861c662__0)) 
                                                  & (IData)(vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h7ee64184__0))
                                                  ? 
                                                 ((0x3fffffcU 
                                                   & (vlSelf->SRT_divider_FP32__DOT__Q_pos 
                                                      << 2U)) 
                                                  | ((5U 
                                                      == (IData)(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__quotient_temp))
                                                      ? 3U
                                                      : 
                                                     (((IData)(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__neg) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__VdfgTmp_hba8d3c8c__0))))
                                                  : 
                                                 ((0x3fffffcU 
                                                   & (vlSelf->SRT_divider_FP32__DOT__Q_neg 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (~ 
                                                        (((IData)(vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h7ee64184__0) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h1bae66c8__0))))));
    if ((0U == (IData)(vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h1bae6609__0))) {
        vlSelf->SRT_divider_FP32__DOT__next_remainder_gen1__DOT____Vcellinp__adder_neg____pinNumber2 = 0x3ffffffU;
        vlSelf->SRT_divider_FP32__DOT__current_q_d = 0U;
    } else {
        vlSelf->SRT_divider_FP32__DOT__next_remainder_gen1__DOT____Vcellinp__adder_neg____pinNumber2 
            = (0x3ffffffU & (~ __VdfgTmp_hbcc55e84__0));
        vlSelf->SRT_divider_FP32__DOT__current_q_d 
            = __VdfgTmp_hbcc55e84__0;
    }
    vlSelf->SRT_divider_FP32__DOT__next_remainder_gen1__DOT__next_remainder_p 
        = (0x3ffffffU & (vlSelf->SRT_divider_FP32__DOT__current_remainder 
                         + vlSelf->SRT_divider_FP32__DOT__current_q_d));
}

VL_ATTR_COLD void VSRT_divider_FP32___024root___eval_stl(VSRT_divider_FP32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VSRT_divider_FP32___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSRT_divider_FP32___024root___dump_triggers__ico(VSRT_divider_FP32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VSRT_divider_FP32___024root___dump_triggers__act(VSRT_divider_FP32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VSRT_divider_FP32___024root___dump_triggers__nba(VSRT_divider_FP32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSRT_divider_FP32___024root___ctor_var_reset(VSRT_divider_FP32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->dividend = VL_RAND_RESET_I(32);
    vlSelf->divisor = VL_RAND_RESET_I(32);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->quotient = VL_RAND_RESET_I(32);
    vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized = VL_RAND_RESET_I(24);
    vlSelf->SRT_divider_FP32__DOT__dividend_shift = VL_RAND_RESET_I(5);
    vlSelf->SRT_divider_FP32__DOT__divisor_shift = VL_RAND_RESET_I(5);
    vlSelf->SRT_divider_FP32__DOT__final_shift = VL_RAND_RESET_I(5);
    vlSelf->SRT_divider_FP32__DOT__compl_divisor_shift = VL_RAND_RESET_I(5);
    vlSelf->SRT_divider_FP32__DOT__compl_dividend_shift = VL_RAND_RESET_I(5);
    vlSelf->SRT_divider_FP32__DOT__current_remainder = VL_RAND_RESET_I(26);
    vlSelf->SRT_divider_FP32__DOT__current_q_d = VL_RAND_RESET_I(26);
    vlSelf->SRT_divider_FP32__DOT__next_remainder_p = VL_RAND_RESET_I(26);
    vlSelf->SRT_divider_FP32__DOT__next_remainder_n = VL_RAND_RESET_I(26);
    vlSelf->SRT_divider_FP32__DOT__next_remainder_before_shift = VL_RAND_RESET_I(26);
    vlSelf->SRT_divider_FP32__DOT__Q_pos = VL_RAND_RESET_I(26);
    vlSelf->SRT_divider_FP32__DOT__Q_neg = VL_RAND_RESET_I(26);
    vlSelf->SRT_divider_FP32__DOT__Q_pos_next = VL_RAND_RESET_I(26);
    vlSelf->SRT_divider_FP32__DOT__Q_neg_next = VL_RAND_RESET_I(26);
    vlSelf->SRT_divider_FP32__DOT__flag = VL_RAND_RESET_I(6);
    vlSelf->SRT_divider_FP32__DOT__flag_1 = VL_RAND_RESET_I(6);
    vlSelf->SRT_divider_FP32__DOT__q_rounding = VL_RAND_RESET_I(24);
    vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h1861c662__0 = 0;
    vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h1bae6609__0 = 0;
    vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h7ee64184__0 = 0;
    vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h1bae66c8__0 = 0;
    vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp = VL_RAND_RESET_I(24);
    vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp = VL_RAND_RESET_I(24);
    vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__q = VL_RAND_RESET_I(2);
    vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__neg = VL_RAND_RESET_I(1);
    vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__q0 = VL_RAND_RESET_I(1);
    vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__q2 = VL_RAND_RESET_I(1);
    vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__quotient_temp = VL_RAND_RESET_I(3);
    vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgExtracted_h363dca00__0 = VL_RAND_RESET_I(1);
    vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgExtracted_h3c5012dc__0 = VL_RAND_RESET_I(1);
    vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0 = 0;
    vlSelf->SRT_divider_FP32__DOT__next_remainder_gen1__DOT__next_remainder_p = VL_RAND_RESET_I(26);
    vlSelf->SRT_divider_FP32__DOT__next_remainder_gen1__DOT____Vcellinp__adder_neg____pinNumber2 = VL_RAND_RESET_I(26);
    vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_r = VL_RAND_RESET_I(26);
    vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_2d_3d = VL_RAND_RESET_I(1);
    vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_d_2d = VL_RAND_RESET_I(1);
    vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_0_d = VL_RAND_RESET_I(1);
    vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp = VL_RAND_RESET_I(24);
    vlSelf->SRT_divider_FP32__DOT__dut__DOT__exponent_addend = VL_RAND_RESET_I(5);
    vlSelf->__VdfgTmp_hba8d3c8c__0 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
