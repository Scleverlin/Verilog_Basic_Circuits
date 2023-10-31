// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSRT_divider_FP32.h for the primary calling header

#ifndef VERILATED_VSRT_DIVIDER_FP32___024ROOT_H_
#define VERILATED_VSRT_DIVIDER_FP32___024ROOT_H_  // guard

#include "verilated.h"

class VSRT_divider_FP32__Syms;

class VSRT_divider_FP32___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*4:0*/ SRT_divider_FP32__DOT__dividend_shift;
    CData/*4:0*/ SRT_divider_FP32__DOT__divisor_shift;
    CData/*4:0*/ SRT_divider_FP32__DOT__final_shift;
    CData/*4:0*/ SRT_divider_FP32__DOT__compl_divisor_shift;
    CData/*4:0*/ SRT_divider_FP32__DOT__compl_dividend_shift;
    CData/*5:0*/ SRT_divider_FP32__DOT__flag;
    CData/*5:0*/ SRT_divider_FP32__DOT__flag_1;
    CData/*0:0*/ SRT_divider_FP32__DOT____VdfgTmp_h1861c662__0;
    CData/*1:0*/ SRT_divider_FP32__DOT____VdfgTmp_h1bae6609__0;
    CData/*0:0*/ SRT_divider_FP32__DOT____VdfgTmp_h7ee64184__0;
    CData/*0:0*/ SRT_divider_FP32__DOT____VdfgTmp_h1bae66c8__0;
    CData/*1:0*/ SRT_divider_FP32__DOT__q_selelct_table__DOT__q;
    CData/*0:0*/ SRT_divider_FP32__DOT__q_selelct_table__DOT__neg;
    CData/*0:0*/ SRT_divider_FP32__DOT__q_selelct_table__DOT__q0;
    CData/*0:0*/ SRT_divider_FP32__DOT__q_selelct_table__DOT__q2;
    CData/*2:0*/ SRT_divider_FP32__DOT__q_selelct_table__DOT__quotient_temp;
    CData/*0:0*/ SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgExtracted_h363dca00__0;
    CData/*0:0*/ SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgExtracted_h3c5012dc__0;
    CData/*0:0*/ SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_2d_3d;
    CData/*0:0*/ SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_d_2d;
    CData/*0:0*/ SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_0_d;
    CData/*4:0*/ SRT_divider_FP32__DOT__dut__DOT__exponent_addend;
    CData/*0:0*/ __VdfgTmp_hba8d3c8c__0;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__rst;
    CData/*0:0*/ __VactContinue;
    VL_IN(dividend,31,0);
    VL_IN(divisor,31,0);
    VL_OUT(quotient,31,0);
    IData/*23:0*/ SRT_divider_FP32__DOT__divisor_mantissa_normalized;
    IData/*25:0*/ SRT_divider_FP32__DOT__current_remainder;
    IData/*25:0*/ SRT_divider_FP32__DOT__current_q_d;
    IData/*25:0*/ SRT_divider_FP32__DOT__next_remainder_p;
    IData/*25:0*/ SRT_divider_FP32__DOT__next_remainder_n;
    IData/*25:0*/ SRT_divider_FP32__DOT__next_remainder_before_shift;
    IData/*25:0*/ SRT_divider_FP32__DOT__Q_pos;
    IData/*25:0*/ SRT_divider_FP32__DOT__Q_neg;
    IData/*25:0*/ SRT_divider_FP32__DOT__Q_pos_next;
    IData/*25:0*/ SRT_divider_FP32__DOT__Q_neg_next;
    IData/*23:0*/ SRT_divider_FP32__DOT__q_rounding;
    IData/*23:0*/ SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp;
    IData/*23:0*/ SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp;
    IData/*31:0*/ SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0;
    IData/*25:0*/ SRT_divider_FP32__DOT__next_remainder_gen1__DOT__next_remainder_p;
    IData/*25:0*/ SRT_divider_FP32__DOT__next_remainder_gen1__DOT____Vcellinp__adder_neg____pinNumber2;
    IData/*25:0*/ SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_r;
    IData/*23:0*/ SRT_divider_FP32__DOT__dut__DOT__result_temp;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VSRT_divider_FP32__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSRT_divider_FP32___024root(VSRT_divider_FP32__Syms* symsp, const char* v__name);
    ~VSRT_divider_FP32___024root();
    VL_UNCOPYABLE(VSRT_divider_FP32___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
