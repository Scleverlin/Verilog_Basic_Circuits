// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSRT_divider_FP32.h for the primary calling header

#include "verilated.h"

#include "VSRT_divider_FP32___024root.h"

VL_INLINE_OPT void VSRT_divider_FP32___024root___ico_sequent__TOP__0(VSRT_divider_FP32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root___ico_sequent__TOP__0\n"); );
    // Init
    IData/*25:0*/ __VdfgTmp_hbcc55e84__0;
    __VdfgTmp_hbcc55e84__0 = 0;
    // Body
    vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp 
        = ((0U == (0xffU & (vlSelf->dividend >> 0x17U)))
            ? (0x7fffffU & vlSelf->dividend) : (0x800000U 
                                                | (0x7fffffU 
                                                   & vlSelf->dividend)));
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

void VSRT_divider_FP32___024root___eval_ico(VSRT_divider_FP32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VSRT_divider_FP32___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VSRT_divider_FP32___024root___eval_act(VSRT_divider_FP32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root___eval_act\n"); );
}

VL_INLINE_OPT void VSRT_divider_FP32___024root___nba_sequent__TOP__0(VSRT_divider_FP32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->SRT_divider_FP32__DOT__Q_neg = vlSelf->SRT_divider_FP32__DOT__Q_neg_next;
        vlSelf->SRT_divider_FP32__DOT__flag = vlSelf->SRT_divider_FP32__DOT__flag_1;
        vlSelf->SRT_divider_FP32__DOT__Q_pos = vlSelf->SRT_divider_FP32__DOT__Q_pos_next;
        vlSelf->SRT_divider_FP32__DOT__current_remainder 
            = (0x3ffffffU & (vlSelf->SRT_divider_FP32__DOT__next_remainder_gen1__DOT__next_remainder_p 
                             << 2U));
    } else {
        vlSelf->SRT_divider_FP32__DOT__Q_neg = 0U;
        vlSelf->SRT_divider_FP32__DOT__flag = 0U;
        vlSelf->SRT_divider_FP32__DOT__Q_pos = 0U;
        vlSelf->SRT_divider_FP32__DOT__current_remainder 
            = (0x3ffffffU & (0xffffffU & (vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp 
                                          << (IData)(vlSelf->SRT_divider_FP32__DOT__dividend_shift))));
    }
    vlSelf->SRT_divider_FP32__DOT__flag_1 = (0x3fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->SRT_divider_FP32__DOT__flag)));
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
}

VL_INLINE_OPT void VSRT_divider_FP32___024root___nba_sequent__TOP__1(VSRT_divider_FP32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*25:0*/ __VdfgTmp_hbcc55e84__0;
    __VdfgTmp_hbcc55e84__0 = 0;
    // Body
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
    vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp 
        = (0xffffffU & (((IData)(vlSelf->SRT_divider_FP32__DOT__dividend_shift) 
                         >= (IData)(vlSelf->SRT_divider_FP32__DOT__divisor_shift))
                         ? (vlSelf->SRT_divider_FP32__DOT__q_rounding 
                            >> (IData)(vlSelf->SRT_divider_FP32__DOT__final_shift))
                         : (vlSelf->SRT_divider_FP32__DOT__q_rounding 
                            << (IData)(vlSelf->SRT_divider_FP32__DOT__final_shift))));
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

void VSRT_divider_FP32___024root___eval_nba(VSRT_divider_FP32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VSRT_divider_FP32___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VSRT_divider_FP32___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void VSRT_divider_FP32___024root___eval_triggers__ico(VSRT_divider_FP32___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSRT_divider_FP32___024root___dump_triggers__ico(VSRT_divider_FP32___024root* vlSelf);
#endif  // VL_DEBUG
void VSRT_divider_FP32___024root___eval_triggers__act(VSRT_divider_FP32___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSRT_divider_FP32___024root___dump_triggers__act(VSRT_divider_FP32___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSRT_divider_FP32___024root___dump_triggers__nba(VSRT_divider_FP32___024root* vlSelf);
#endif  // VL_DEBUG

void VSRT_divider_FP32___024root___eval(VSRT_divider_FP32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VSRT_divider_FP32___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VSRT_divider_FP32___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("SRT_divider_FP32.sv", 11, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VSRT_divider_FP32___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VSRT_divider_FP32___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VSRT_divider_FP32___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("SRT_divider_FP32.sv", 11, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VSRT_divider_FP32___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VSRT_divider_FP32___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("SRT_divider_FP32.sv", 11, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VSRT_divider_FP32___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VSRT_divider_FP32___024root___eval_debug_assertions(VSRT_divider_FP32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
