// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSRT_divider_FP32__Syms.h"


void VSRT_divider_FP32___024root__trace_chg_sub_0(VSRT_divider_FP32___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSRT_divider_FP32___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root__trace_chg_top_0\n"); );
    // Init
    VSRT_divider_FP32___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSRT_divider_FP32___024root*>(voidSelf);
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSRT_divider_FP32___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VSRT_divider_FP32___024root__trace_chg_sub_0(VSRT_divider_FP32___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,((0xffffffU & (vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp 
                                             << (IData)(vlSelf->SRT_divider_FP32__DOT__dividend_shift)))),24);
        bufp->chgIData(oldp+1,(vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized),24);
        bufp->chgCData(oldp+2,(vlSelf->SRT_divider_FP32__DOT__dividend_shift),5);
        bufp->chgCData(oldp+3,(vlSelf->SRT_divider_FP32__DOT__divisor_shift),5);
        bufp->chgCData(oldp+4,(vlSelf->SRT_divider_FP32__DOT__final_shift),5);
        bufp->chgCData(oldp+5,(vlSelf->SRT_divider_FP32__DOT__compl_divisor_shift),5);
        bufp->chgCData(oldp+6,(vlSelf->SRT_divider_FP32__DOT__compl_dividend_shift),5);
        bufp->chgBit(oldp+7,(((IData)(vlSelf->SRT_divider_FP32__DOT__dividend_shift) 
                              >= (IData)(vlSelf->SRT_divider_FP32__DOT__divisor_shift))));
        bufp->chgIData(oldp+8,((0xffffffU & (vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp 
                                             << (IData)(vlSelf->SRT_divider_FP32__DOT__dividend_shift)))),26);
        bufp->chgIData(oldp+9,(vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized),26);
        bufp->chgCData(oldp+10,((0xfU & (vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized 
                                         >> 0x14U))),5);
        bufp->chgIData(oldp+11,(vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp),24);
        bufp->chgIData(oldp+12,(vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp),24);
        bufp->chgIData(oldp+13,((0x3ffffffU & (vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized 
                                               << 1U))),26);
        bufp->chgIData(oldp+14,((0x3ffffffU & (vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized 
                                               + (vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized 
                                                  << 1U)))),26);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+15,(vlSelf->SRT_divider_FP32__DOT__current_q_d),26);
        bufp->chgIData(oldp+16,((0x3ffffffU & (vlSelf->SRT_divider_FP32__DOT__next_remainder_gen1__DOT__next_remainder_p 
                                               << 2U))),26);
        bufp->chgCData(oldp+17,(((5U == (IData)(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__quotient_temp))
                                  ? 7U : (IData)(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__quotient_temp))),3);
        bufp->chgIData(oldp+18,(((IData)(vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h1861c662__0)
                                  ? ((0x3fffffcU & 
                                      (vlSelf->SRT_divider_FP32__DOT__Q_neg 
                                       << 2U)) | (IData)(vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h1bae6609__0))
                                  : ((0x3fffffcU & 
                                      (vlSelf->SRT_divider_FP32__DOT__Q_pos 
                                       << 2U)) | (IData)(vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h1bae6609__0)))),26);
        bufp->chgIData(oldp+19,((((~ (IData)(vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h1861c662__0)) 
                                  & (IData)(vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h7ee64184__0))
                                  ? ((0x3fffffcU & 
                                      (vlSelf->SRT_divider_FP32__DOT__Q_pos 
                                       << 2U)) | ((5U 
                                                   == (IData)(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__quotient_temp))
                                                   ? 3U
                                                   : 
                                                  (((IData)(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__neg) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__VdfgTmp_hba8d3c8c__0))))
                                  : ((0x3fffffcU & 
                                      (vlSelf->SRT_divider_FP32__DOT__Q_neg 
                                       << 2U)) | (3U 
                                                  & (~ 
                                                     (((IData)(vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h7ee64184__0) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h1bae66c8__0))))))),26);
        bufp->chgIData(oldp+20,(vlSelf->SRT_divider_FP32__DOT__q_rounding),24);
        bufp->chgIData(oldp+21,((((~ (vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                      >> 0x19U)) & (IData)(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_2d_3d))
                                  ? 2U : (((~ (vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                               >> 0x19U)) 
                                           & (IData)(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_d_2d))
                                           ? 1U : (
                                                   ((~ 
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
                                                       : 0U))))))),24);
        bufp->chgIData(oldp+22,(vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp),24);
        bufp->chgCData(oldp+23,(vlSelf->SRT_divider_FP32__DOT__dut__DOT__exponent_addend),5);
        bufp->chgIData(oldp+24,((0xffffffU & (vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp 
                                              << (IData)(vlSelf->SRT_divider_FP32__DOT__dut__DOT__exponent_addend)))),24);
        bufp->chgCData(oldp+25,((0xffU & ((IData)(1U) 
                                          + (~ (IData)(vlSelf->SRT_divider_FP32__DOT__dut__DOT__exponent_addend))))),8);
        bufp->chgIData(oldp+26,(vlSelf->SRT_divider_FP32__DOT__next_remainder_gen1__DOT__next_remainder_p),26);
        bufp->chgIData(oldp+27,((0x3ffffffU & ((IData)(1U) 
                                               + (vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                                  + vlSelf->SRT_divider_FP32__DOT__next_remainder_gen1__DOT____Vcellinp__adder_neg____pinNumber2)))),26);
        bufp->chgBit(oldp+28,((1U & ((vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                      + vlSelf->SRT_divider_FP32__DOT__current_q_d) 
                                     >> 0x1aU))));
        bufp->chgBit(oldp+29,((1U & (((IData)(1U) + 
                                      (vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                       + vlSelf->SRT_divider_FP32__DOT__next_remainder_gen1__DOT____Vcellinp__adder_neg____pinNumber2)) 
                                     >> 0x1aU))));
        bufp->chgIData(oldp+30,((0x3ffffffU & ((IData)(vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h1861c662__0)
                                                ? ((IData)(1U) 
                                                   + 
                                                   (vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                                    + vlSelf->SRT_divider_FP32__DOT__next_remainder_gen1__DOT____Vcellinp__adder_neg____pinNumber2))
                                                : vlSelf->SRT_divider_FP32__DOT__next_remainder_gen1__DOT__next_remainder_p))),26);
        bufp->chgIData(oldp+31,(vlSelf->SRT_divider_FP32__DOT__next_remainder_gen1__DOT____Vcellinp__adder_neg____pinNumber2),26);
        bufp->chgCData(oldp+32,(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__q),2);
        bufp->chgBit(oldp+33,(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__neg));
        bufp->chgBit(oldp+34,(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__q0));
        bufp->chgBit(oldp+35,(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__q2));
        bufp->chgCData(oldp+36,(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__quotient_temp),3);
        bufp->chgBit(oldp+37,(((~ (vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                   >> 0x19U)) & (IData)(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_2d_3d))));
        bufp->chgBit(oldp+38,(((~ (vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                   >> 0x19U)) & (IData)(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_d_2d))));
        bufp->chgBit(oldp+39,(((~ (vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                   >> 0x19U)) & (IData)(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_0_d))));
        bufp->chgBit(oldp+40,(((vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                >> 0x19U) & (IData)(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_0_d))));
        bufp->chgBit(oldp+41,(((vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                >> 0x19U) & (IData)(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_d_2d))));
        bufp->chgBit(oldp+42,(((vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                >> 0x19U) & (IData)(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_2d_3d))));
        bufp->chgBit(oldp+43,(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_2d_3d));
        bufp->chgBit(oldp+44,(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_d_2d));
        bufp->chgBit(oldp+45,(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_0_d));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+46,(vlSelf->SRT_divider_FP32__DOT__current_remainder),26);
        bufp->chgCData(oldp+47,((0x1fU & (vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                          >> 0x15U))),5);
        bufp->chgIData(oldp+48,(vlSelf->SRT_divider_FP32__DOT__Q_pos),26);
        bufp->chgIData(oldp+49,(vlSelf->SRT_divider_FP32__DOT__Q_neg),26);
        bufp->chgCData(oldp+50,(vlSelf->SRT_divider_FP32__DOT__flag),6);
        bufp->chgCData(oldp+51,((0x3fU & ((IData)(1U) 
                                          + (IData)(vlSelf->SRT_divider_FP32__DOT__flag)))),6);
        bufp->chgIData(oldp+52,((0xffffffU & (vlSelf->SRT_divider_FP32__DOT__Q_pos 
                                              >> 1U))),24);
        bufp->chgBit(oldp+53,((1U & (vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                     >> 0x19U))));
        bufp->chgCData(oldp+54,((0x1fU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0)),5);
        bufp->chgBit(oldp+55,((2U <= (0xfU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))));
        bufp->chgBit(oldp+56,((3U <= (0xfU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))));
        bufp->chgBit(oldp+57,((6U <= (0xfU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))));
        bufp->chgBit(oldp+58,((7U <= (0xfU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))));
        bufp->chgBit(oldp+59,((8U <= (0xfU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))));
        bufp->chgBit(oldp+60,((5U <= (0xfU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))));
        bufp->chgBit(oldp+61,((9U <= (0xfU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))));
        bufp->chgBit(oldp+62,((0xaU <= (0xfU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))));
        bufp->chgBit(oldp+63,((0xbU <= (0xfU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))));
        bufp->chgBit(oldp+64,((0xcU <= (0xfU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))));
        bufp->chgBit(oldp+65,((0xdU <= (0xfU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))));
        bufp->chgBit(oldp+66,((4U <= (0xfU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))));
        bufp->chgIData(oldp+67,(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_r),26);
    }
    bufp->chgIData(oldp+68,(vlSelf->dividend),32);
    bufp->chgIData(oldp+69,(vlSelf->divisor),32);
    bufp->chgBit(oldp+70,(vlSelf->clk));
    bufp->chgBit(oldp+71,(vlSelf->rst));
    bufp->chgIData(oldp+72,(vlSelf->quotient),32);
    bufp->chgCData(oldp+73,((0xffU & ((IData)(0x80U) 
                                      + ((vlSelf->dividend 
                                          >> 0x17U) 
                                         + (~ (vlSelf->divisor 
                                               >> 0x17U)))))),8);
    bufp->chgBit(oldp+74,(((vlSelf->dividend ^ vlSelf->divisor) 
                           >> 0x1fU)));
    bufp->chgCData(oldp+75,((0xffU & ((IData)(0x81U) 
                                      + (((vlSelf->dividend 
                                           >> 0x17U) 
                                          + (~ (vlSelf->divisor 
                                                >> 0x17U))) 
                                         + (~ (IData)(vlSelf->SRT_divider_FP32__DOT__dut__DOT__exponent_addend)))))),8);
    bufp->chgCData(oldp+76,((0xffU & (vlSelf->dividend 
                                      >> 0x17U))),8);
    bufp->chgCData(oldp+77,((0xffU & (vlSelf->divisor 
                                      >> 0x17U))),8);
    bufp->chgSData(oldp+78,((0xffU & (vlSelf->dividend 
                                      >> 0x17U))),9);
    bufp->chgSData(oldp+79,((0xffU & (vlSelf->divisor 
                                      >> 0x17U))),9);
    bufp->chgSData(oldp+80,((0x1ffU & ((IData)(1U) 
                                       + (~ (0xffU 
                                             & (vlSelf->divisor 
                                                >> 0x17U)))))),9);
    bufp->chgBit(oldp+81,((1U & (((0xffU & (vlSelf->dividend 
                                            >> 0x17U)) 
                                  + (0x1ffU & ((IData)(1U) 
                                               + (~ 
                                                  (0xffU 
                                                   & (vlSelf->divisor 
                                                      >> 0x17U)))))) 
                                 >> 9U))));
    bufp->chgBit(oldp+82,((1U & (((IData)(0x7fU) + 
                                  (0x1ffU & ((IData)(1U) 
                                             + ((0xffU 
                                                 & (vlSelf->dividend 
                                                    >> 0x17U)) 
                                                + (~ 
                                                   (0xffU 
                                                    & (vlSelf->divisor 
                                                       >> 0x17U))))))) 
                                 >> 9U))));
    bufp->chgSData(oldp+83,((0x1ffU & ((IData)(1U) 
                                       + ((0xffU & 
                                           (vlSelf->dividend 
                                            >> 0x17U)) 
                                          + (~ (0xffU 
                                                & (vlSelf->divisor 
                                                   >> 0x17U))))))),9);
    bufp->chgSData(oldp+84,((0x1ffU & ((IData)(0x80U) 
                                       + ((0xffU & 
                                           (vlSelf->dividend 
                                            >> 0x17U)) 
                                          + (~ (0xffU 
                                                & (vlSelf->divisor 
                                                   >> 0x17U))))))),9);
    bufp->chgBit(oldp+85,((vlSelf->dividend >> 0x1fU)));
    bufp->chgBit(oldp+86,((vlSelf->divisor >> 0x1fU)));
    bufp->chgIData(oldp+87,((0x7fffffU & vlSelf->dividend)),23);
    bufp->chgIData(oldp+88,((0x7fffffU & vlSelf->divisor)),23);
}

void VSRT_divider_FP32___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root__trace_cleanup\n"); );
    // Init
    VSRT_divider_FP32___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSRT_divider_FP32___024root*>(voidSelf);
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
