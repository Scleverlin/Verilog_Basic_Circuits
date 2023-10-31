// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSRT_divider_FP32__Syms.h"


VL_ATTR_COLD void VSRT_divider_FP32___024root__trace_init_sub__TOP__0(VSRT_divider_FP32___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+69,"dividend", false,-1, 31,0);
    tracep->declBus(c+70,"divisor", false,-1, 31,0);
    tracep->declBit(c+71,"clk", false,-1);
    tracep->declBit(c+72,"rst", false,-1);
    tracep->declBus(c+73,"quotient", false,-1, 31,0);
    tracep->pushNamePrefix("SRT_divider_FP32 ");
    tracep->declBus(c+69,"dividend", false,-1, 31,0);
    tracep->declBus(c+70,"divisor", false,-1, 31,0);
    tracep->declBit(c+71,"clk", false,-1);
    tracep->declBit(c+72,"rst", false,-1);
    tracep->declBus(c+73,"quotient", false,-1, 31,0);
    tracep->declBus(c+1,"dividend_mantissa_normalized", false,-1, 23,0);
    tracep->declBus(c+2,"divisor_mantissa_normalized", false,-1, 23,0);
    tracep->declBus(c+74,"current_exponent", false,-1, 7,0);
    tracep->declBit(c+75,"result_sign", false,-1);
    tracep->declBus(c+3,"dividend_shift", false,-1, 4,0);
    tracep->declBus(c+4,"divisor_shift", false,-1, 4,0);
    tracep->declBus(c+5,"final_shift", false,-1, 4,0);
    tracep->declBus(c+6,"compl_divisor_shift", false,-1, 4,0);
    tracep->declBus(c+7,"compl_dividend_shift", false,-1, 4,0);
    tracep->declBit(c+8,"right_shift", false,-1);
    tracep->declBus(c+9,"current_dividend", false,-1, 25,0);
    tracep->declBus(c+10,"current_divisor", false,-1, 25,0);
    tracep->declBus(c+47,"current_remainder", false,-1, 25,0);
    tracep->declBus(c+16,"current_q_d", false,-1, 25,0);
    tracep->declBus(c+17,"next_remainder", false,-1, 25,0);
    tracep->declBus(c+90,"next_remainder_p", false,-1, 25,0);
    tracep->declBus(c+91,"next_remainder_n", false,-1, 25,0);
    tracep->declBus(c+92,"next_remainder_before_shift", false,-1, 25,0);
    tracep->declBus(c+48,"r_idx", false,-1, 4,0);
    tracep->declBus(c+11,"d_idx", false,-1, 4,0);
    tracep->declBus(c+18,"mid_quotient", false,-1, 2,0);
    tracep->declBus(c+49,"Q_pos", false,-1, 25,0);
    tracep->declBus(c+50,"Q_neg", false,-1, 25,0);
    tracep->declBus(c+19,"Q_pos_next", false,-1, 25,0);
    tracep->declBus(c+20,"Q_neg_next", false,-1, 25,0);
    tracep->declBus(c+51,"flag", false,-1, 5,0);
    tracep->declBus(c+52,"flag_1", false,-1, 5,0);
    tracep->declBus(c+21,"q_rounding", false,-1, 23,0);
    tracep->declBus(c+22,"rounding_data", false,-1, 23,0);
    tracep->declBus(c+53,"q_pos_cut", false,-1, 23,0);
    tracep->declBus(c+21,"result_before_ieee", false,-1, 23,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBus(c+21,"result", false,-1, 23,0);
    tracep->declBus(c+5,"shift_nums", false,-1, 4,0);
    tracep->declBit(c+8,"right_shift", false,-1);
    tracep->declBit(c+75,"resultsign", false,-1);
    tracep->declBus(c+74,"current_exponent", false,-1, 7,0);
    tracep->declBus(c+73,"quotient", false,-1, 31,0);
    tracep->declBus(c+23,"result_temp", false,-1, 23,0);
    tracep->declBus(c+24,"exponent_addend", false,-1, 4,0);
    tracep->declBus(c+25,"result_shifted", false,-1, 23,0);
    tracep->declBus(c+76,"exponent_final", false,-1, 7,0);
    tracep->declBus(c+26,"addend_copmplement", false,-1, 7,0);
    tracep->pushNamePrefix("mngen ");
    tracep->declBus(c+23,"data", false,-1, 23,0);
    tracep->declBus(c+25,"outdata", false,-1, 23,0);
    tracep->declBus(c+24,"shift", false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("next_remainder_gen1 ");
    tracep->declBus(c+47,"current_remainder", false,-1, 25,0);
    tracep->declBus(c+16,"current_q_d", false,-1, 25,0);
    tracep->declBus(c+17,"next_remainder", false,-1, 25,0);
    tracep->declBus(c+18,"mid_quotient", false,-1, 2,0);
    tracep->declBus(c+27,"next_remainder_p", false,-1, 25,0);
    tracep->declBus(c+28,"next_remainder_n", false,-1, 25,0);
    tracep->declBit(c+29,"cout", false,-1);
    tracep->declBit(c+30,"cout2", false,-1);
    tracep->declBus(c+31,"next_remainder_before_shift", false,-1, 25,0);
    tracep->pushNamePrefix("adder_neg ");
    tracep->declBus(c+47,"a", false,-1, 25,0);
    tracep->declBus(c+32,"b", false,-1, 25,0);
    tracep->declBit(c+93,"cin", false,-1);
    tracep->declBus(c+28,"sum", false,-1, 25,0);
    tracep->declBit(c+30,"cout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("adder_pos ");
    tracep->declBus(c+47,"a", false,-1, 25,0);
    tracep->declBus(c+16,"b", false,-1, 25,0);
    tracep->declBit(c+94,"cin", false,-1);
    tracep->declBus(c+27,"sum", false,-1, 25,0);
    tracep->declBit(c+29,"cout", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("norm ");
    tracep->declBus(c+69,"dividend", false,-1, 31,0);
    tracep->declBus(c+70,"divisor", false,-1, 31,0);
    tracep->declBus(c+1,"dividend_mantissa_normalized", false,-1, 23,0);
    tracep->declBus(c+2,"divisor_mantissa_normalized", false,-1, 23,0);
    tracep->declBus(c+74,"current_exponent", false,-1, 7,0);
    tracep->declBit(c+75,"result_sign", false,-1);
    tracep->declBus(c+3,"dividend_shift", false,-1, 4,0);
    tracep->declBus(c+4,"divisor_shift", false,-1, 4,0);
    tracep->pushNamePrefix("exp ");
    tracep->declBus(c+69,"dividend", false,-1, 31,0);
    tracep->declBus(c+70,"divisor", false,-1, 31,0);
    tracep->declBus(c+74,"result_exp", false,-1, 7,0);
    tracep->declBus(c+77,"exp_dividend", false,-1, 7,0);
    tracep->declBus(c+78,"exp_divisor", false,-1, 7,0);
    tracep->declBus(c+79,"dividend_sign", false,-1, 8,0);
    tracep->declBus(c+80,"divisor_sign", false,-1, 8,0);
    tracep->declBus(c+81,"divisor_comple", false,-1, 8,0);
    tracep->declBit(c+82,"cout", false,-1);
    tracep->declBit(c+83,"cout2", false,-1);
    tracep->declBus(c+84,"result_tmp", false,-1, 8,0);
    tracep->declBus(c+85,"result_tmp2", false,-1, 8,0);
    tracep->pushNamePrefix("adder ");
    tracep->declBus(c+79,"a", false,-1, 8,0);
    tracep->declBus(c+81,"b", false,-1, 8,0);
    tracep->declBus(c+84,"sum", false,-1, 8,0);
    tracep->declBit(c+82,"cout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("adder2 ");
    tracep->declBus(c+84,"a", false,-1, 8,0);
    tracep->declBus(c+95,"b", false,-1, 8,0);
    tracep->declBus(c+85,"sum", false,-1, 8,0);
    tracep->declBit(c+83,"cout", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mfm ");
    tracep->declBus(c+69,"dividend", false,-1, 31,0);
    tracep->declBus(c+70,"divisor", false,-1, 31,0);
    tracep->declBus(c+1,"dividend_mantissa_normalized", false,-1, 23,0);
    tracep->declBus(c+2,"divisor_mantissa_normalized", false,-1, 23,0);
    tracep->declBus(c+3,"dividend_shift", false,-1, 4,0);
    tracep->declBus(c+4,"divisor_shift", false,-1, 4,0);
    tracep->declBit(c+75,"result_sign", false,-1);
    tracep->declBus(c+77,"dividend_exponent", false,-1, 7,0);
    tracep->declBus(c+78,"divisor_exponent", false,-1, 7,0);
    tracep->declBit(c+86,"dividend_sign", false,-1);
    tracep->declBit(c+87,"divisor_sign", false,-1);
    tracep->declBus(c+88,"dividend_mantissa", false,-1, 22,0);
    tracep->declBus(c+89,"divisor_mantissa", false,-1, 22,0);
    tracep->declBus(c+12,"dividend_tmp", false,-1, 23,0);
    tracep->declBus(c+13,"divisor_tmp", false,-1, 23,0);
    tracep->pushNamePrefix("mng ");
    tracep->declBus(c+12,"data", false,-1, 23,0);
    tracep->declBus(c+1,"outdata", false,-1, 23,0);
    tracep->declBus(c+3,"shift", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mng2 ");
    tracep->declBus(c+13,"data", false,-1, 23,0);
    tracep->declBus(c+2,"outdata", false,-1, 23,0);
    tracep->declBus(c+4,"shift", false,-1, 4,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("q_selelct_table ");
    tracep->declBus(c+48,"r_idx", false,-1, 4,0);
    tracep->declBus(c+11,"d_idx", false,-1, 4,0);
    tracep->declBus(c+18,"quotient", false,-1, 2,0);
    tracep->declBus(c+33,"q", false,-1, 1,0);
    tracep->declBit(c+34,"neg", false,-1);
    tracep->declBit(c+54,"ops_sign", false,-1);
    tracep->declBus(c+55,"r_ori", false,-1, 4,0);
    tracep->declBus(c+11,"d_ori", false,-1, 4,0);
    tracep->declBit(c+56,"r_ge_0010", false,-1);
    tracep->declBit(c+57,"r_ge_0011", false,-1);
    tracep->declBit(c+58,"r_ge_0110", false,-1);
    tracep->declBit(c+59,"r_ge_0111", false,-1);
    tracep->declBit(c+60,"r_ge_1000", false,-1);
    tracep->declBit(c+61,"r_ge_0101", false,-1);
    tracep->declBit(c+62,"r_ge_1001", false,-1);
    tracep->declBit(c+63,"r_ge_1010", false,-1);
    tracep->declBit(c+64,"r_ge_1011", false,-1);
    tracep->declBit(c+65,"r_ge_1100", false,-1);
    tracep->declBit(c+66,"r_ge_1101", false,-1);
    tracep->declBit(c+67,"r_ge_0100", false,-1);
    tracep->declBit(c+35,"q0", false,-1);
    tracep->declBit(c+36,"q2", false,-1);
    tracep->declBus(c+37,"quotient_temp", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("qd_gen1 ");
    tracep->declBus(c+10,"current_divisor", false,-1, 25,0);
    tracep->declBus(c+18,"mid_quotient", false,-1, 2,0);
    tracep->declBus(c+16,"current_q_d", false,-1, 25,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rounding_module_1 ");
    tracep->declBus(c+47,"current_remainder", false,-1, 25,0);
    tracep->declBus(c+10,"current_divisor", false,-1, 25,0);
    tracep->declBus(c+22,"rounding_data", false,-1, 23,0);
    tracep->declBit(c+38,"is_2d_3d", false,-1);
    tracep->declBit(c+39,"is_d_2d", false,-1);
    tracep->declBit(c+40,"is_0_d", false,-1);
    tracep->declBit(c+41,"is_negd_0", false,-1);
    tracep->declBit(c+42,"is_neg2d_negd", false,-1);
    tracep->declBit(c+43,"is_neg3d_neg2d", false,-1);
    tracep->declBus(c+96,"one", false,-1, 23,0);
    tracep->declBus(c+97,"two", false,-1, 23,0);
    tracep->declBus(c+98,"three", false,-1, 23,0);
    tracep->declBus(c+99,"minus_three", false,-1, 23,0);
    tracep->declBus(c+100,"minus_two", false,-1, 23,0);
    tracep->declBus(c+101,"minus_one", false,-1, 23,0);
    tracep->pushNamePrefix("check ");
    tracep->declBus(c+47,"current_remainder", false,-1, 25,0);
    tracep->declBus(c+10,"current_divisor", false,-1, 25,0);
    tracep->declBit(c+38,"is_2d_3d", false,-1);
    tracep->declBit(c+39,"is_d_2d", false,-1);
    tracep->declBit(c+40,"is_0_d", false,-1);
    tracep->declBit(c+41,"is_negd_0", false,-1);
    tracep->declBit(c+42,"is_neg2d_negd", false,-1);
    tracep->declBit(c+43,"is_neg3d_neg2d", false,-1);
    tracep->declBus(c+68,"abs_r", false,-1, 25,0);
    tracep->declBus(c+14,"d2", false,-1, 25,0);
    tracep->declBus(c+15,"d3", false,-1, 25,0);
    tracep->declBit(c+54,"r_is_negative", false,-1);
    tracep->declBus(c+102,"one", false,-1, 25,0);
    tracep->declBit(c+44,"abs_is_2d_3d", false,-1);
    tracep->declBit(c+45,"abs_is_d_2d", false,-1);
    tracep->declBit(c+46,"abs_is_0_d", false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VSRT_divider_FP32___024root__trace_init_top(VSRT_divider_FP32___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root__trace_init_top\n"); );
    // Body
    VSRT_divider_FP32___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSRT_divider_FP32___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSRT_divider_FP32___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSRT_divider_FP32___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSRT_divider_FP32___024root__trace_register(VSRT_divider_FP32___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VSRT_divider_FP32___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VSRT_divider_FP32___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VSRT_divider_FP32___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSRT_divider_FP32___024root__trace_full_sub_0(VSRT_divider_FP32___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSRT_divider_FP32___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root__trace_full_top_0\n"); );
    // Init
    VSRT_divider_FP32___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSRT_divider_FP32___024root*>(voidSelf);
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSRT_divider_FP32___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSRT_divider_FP32___024root__trace_full_sub_0(VSRT_divider_FP32___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSRT_divider_FP32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSRT_divider_FP32___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,((0xffffffU & (vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp 
                                          << (IData)(vlSelf->SRT_divider_FP32__DOT__dividend_shift)))),24);
    bufp->fullIData(oldp+2,(vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized),24);
    bufp->fullCData(oldp+3,(vlSelf->SRT_divider_FP32__DOT__dividend_shift),5);
    bufp->fullCData(oldp+4,(vlSelf->SRT_divider_FP32__DOT__divisor_shift),5);
    bufp->fullCData(oldp+5,(vlSelf->SRT_divider_FP32__DOT__final_shift),5);
    bufp->fullCData(oldp+6,(vlSelf->SRT_divider_FP32__DOT__compl_divisor_shift),5);
    bufp->fullCData(oldp+7,(vlSelf->SRT_divider_FP32__DOT__compl_dividend_shift),5);
    bufp->fullBit(oldp+8,(((IData)(vlSelf->SRT_divider_FP32__DOT__dividend_shift) 
                           >= (IData)(vlSelf->SRT_divider_FP32__DOT__divisor_shift))));
    bufp->fullIData(oldp+9,((0xffffffU & (vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp 
                                          << (IData)(vlSelf->SRT_divider_FP32__DOT__dividend_shift)))),26);
    bufp->fullIData(oldp+10,(vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized),26);
    bufp->fullCData(oldp+11,((0xfU & (vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized 
                                      >> 0x14U))),5);
    bufp->fullIData(oldp+12,(vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__dividend_tmp),24);
    bufp->fullIData(oldp+13,(vlSelf->SRT_divider_FP32__DOT__norm__DOT__mfm__DOT__divisor_tmp),24);
    bufp->fullIData(oldp+14,((0x3ffffffU & (vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized 
                                            << 1U))),26);
    bufp->fullIData(oldp+15,((0x3ffffffU & (vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized 
                                            + (vlSelf->SRT_divider_FP32__DOT__divisor_mantissa_normalized 
                                               << 1U)))),26);
    bufp->fullIData(oldp+16,(vlSelf->SRT_divider_FP32__DOT__current_q_d),26);
    bufp->fullIData(oldp+17,((0x3ffffffU & (vlSelf->SRT_divider_FP32__DOT__next_remainder_gen1__DOT__next_remainder_p 
                                            << 2U))),26);
    bufp->fullCData(oldp+18,(((5U == (IData)(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__quotient_temp))
                               ? 7U : (IData)(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__quotient_temp))),3);
    bufp->fullIData(oldp+19,(((IData)(vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h1861c662__0)
                               ? ((0x3fffffcU & (vlSelf->SRT_divider_FP32__DOT__Q_neg 
                                                 << 2U)) 
                                  | (IData)(vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h1bae6609__0))
                               : ((0x3fffffcU & (vlSelf->SRT_divider_FP32__DOT__Q_pos 
                                                 << 2U)) 
                                  | (IData)(vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h1bae6609__0)))),26);
    bufp->fullIData(oldp+20,((((~ (IData)(vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h1861c662__0)) 
                               & (IData)(vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h7ee64184__0))
                               ? ((0x3fffffcU & (vlSelf->SRT_divider_FP32__DOT__Q_pos 
                                                 << 2U)) 
                                  | ((5U == (IData)(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__quotient_temp))
                                      ? 3U : (((IData)(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__neg) 
                                               << 1U) 
                                              | (IData)(vlSelf->__VdfgTmp_hba8d3c8c__0))))
                               : ((0x3fffffcU & (vlSelf->SRT_divider_FP32__DOT__Q_neg 
                                                 << 2U)) 
                                  | (3U & (~ (((IData)(vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h7ee64184__0) 
                                               << 1U) 
                                              | (IData)(vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h1bae66c8__0))))))),26);
    bufp->fullIData(oldp+21,(vlSelf->SRT_divider_FP32__DOT__q_rounding),24);
    bufp->fullIData(oldp+22,((((~ (vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                   >> 0x19U)) & (IData)(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_2d_3d))
                               ? 2U : (((~ (vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                            >> 0x19U)) 
                                        & (IData)(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_d_2d))
                                        ? 1U : (((~ 
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
    bufp->fullIData(oldp+23,(vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp),24);
    bufp->fullCData(oldp+24,(vlSelf->SRT_divider_FP32__DOT__dut__DOT__exponent_addend),5);
    bufp->fullIData(oldp+25,((0xffffffU & (vlSelf->SRT_divider_FP32__DOT__dut__DOT__result_temp 
                                           << (IData)(vlSelf->SRT_divider_FP32__DOT__dut__DOT__exponent_addend)))),24);
    bufp->fullCData(oldp+26,((0xffU & ((IData)(1U) 
                                       + (~ (IData)(vlSelf->SRT_divider_FP32__DOT__dut__DOT__exponent_addend))))),8);
    bufp->fullIData(oldp+27,(vlSelf->SRT_divider_FP32__DOT__next_remainder_gen1__DOT__next_remainder_p),26);
    bufp->fullIData(oldp+28,((0x3ffffffU & ((IData)(1U) 
                                            + (vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                               + vlSelf->SRT_divider_FP32__DOT__next_remainder_gen1__DOT____Vcellinp__adder_neg____pinNumber2)))),26);
    bufp->fullBit(oldp+29,((1U & ((vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                   + vlSelf->SRT_divider_FP32__DOT__current_q_d) 
                                  >> 0x1aU))));
    bufp->fullBit(oldp+30,((1U & (((IData)(1U) + (vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                                  + vlSelf->SRT_divider_FP32__DOT__next_remainder_gen1__DOT____Vcellinp__adder_neg____pinNumber2)) 
                                  >> 0x1aU))));
    bufp->fullIData(oldp+31,((0x3ffffffU & ((IData)(vlSelf->SRT_divider_FP32__DOT____VdfgTmp_h1861c662__0)
                                             ? ((IData)(1U) 
                                                + (vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                                   + vlSelf->SRT_divider_FP32__DOT__next_remainder_gen1__DOT____Vcellinp__adder_neg____pinNumber2))
                                             : vlSelf->SRT_divider_FP32__DOT__next_remainder_gen1__DOT__next_remainder_p))),26);
    bufp->fullIData(oldp+32,(vlSelf->SRT_divider_FP32__DOT__next_remainder_gen1__DOT____Vcellinp__adder_neg____pinNumber2),26);
    bufp->fullCData(oldp+33,(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__q),2);
    bufp->fullBit(oldp+34,(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__neg));
    bufp->fullBit(oldp+35,(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__q0));
    bufp->fullBit(oldp+36,(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__q2));
    bufp->fullCData(oldp+37,(vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT__quotient_temp),3);
    bufp->fullBit(oldp+38,(((~ (vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                >> 0x19U)) & (IData)(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_2d_3d))));
    bufp->fullBit(oldp+39,(((~ (vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                >> 0x19U)) & (IData)(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_d_2d))));
    bufp->fullBit(oldp+40,(((~ (vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                >> 0x19U)) & (IData)(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_0_d))));
    bufp->fullBit(oldp+41,(((vlSelf->SRT_divider_FP32__DOT__current_remainder 
                             >> 0x19U) & (IData)(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_0_d))));
    bufp->fullBit(oldp+42,(((vlSelf->SRT_divider_FP32__DOT__current_remainder 
                             >> 0x19U) & (IData)(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_d_2d))));
    bufp->fullBit(oldp+43,(((vlSelf->SRT_divider_FP32__DOT__current_remainder 
                             >> 0x19U) & (IData)(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_2d_3d))));
    bufp->fullBit(oldp+44,(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_2d_3d));
    bufp->fullBit(oldp+45,(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_d_2d));
    bufp->fullBit(oldp+46,(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_is_0_d));
    bufp->fullIData(oldp+47,(vlSelf->SRT_divider_FP32__DOT__current_remainder),26);
    bufp->fullCData(oldp+48,((0x1fU & (vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                       >> 0x15U))),5);
    bufp->fullIData(oldp+49,(vlSelf->SRT_divider_FP32__DOT__Q_pos),26);
    bufp->fullIData(oldp+50,(vlSelf->SRT_divider_FP32__DOT__Q_neg),26);
    bufp->fullCData(oldp+51,(vlSelf->SRT_divider_FP32__DOT__flag),6);
    bufp->fullCData(oldp+52,((0x3fU & ((IData)(1U) 
                                       + (IData)(vlSelf->SRT_divider_FP32__DOT__flag)))),6);
    bufp->fullIData(oldp+53,((0xffffffU & (vlSelf->SRT_divider_FP32__DOT__Q_pos 
                                           >> 1U))),24);
    bufp->fullBit(oldp+54,((1U & (vlSelf->SRT_divider_FP32__DOT__current_remainder 
                                  >> 0x19U))));
    bufp->fullCData(oldp+55,((0x1fU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0)),5);
    bufp->fullBit(oldp+56,((2U <= (0xfU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))));
    bufp->fullBit(oldp+57,((3U <= (0xfU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))));
    bufp->fullBit(oldp+58,((6U <= (0xfU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))));
    bufp->fullBit(oldp+59,((7U <= (0xfU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))));
    bufp->fullBit(oldp+60,((8U <= (0xfU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))));
    bufp->fullBit(oldp+61,((5U <= (0xfU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))));
    bufp->fullBit(oldp+62,((9U <= (0xfU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))));
    bufp->fullBit(oldp+63,((0xaU <= (0xfU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))));
    bufp->fullBit(oldp+64,((0xbU <= (0xfU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))));
    bufp->fullBit(oldp+65,((0xcU <= (0xfU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))));
    bufp->fullBit(oldp+66,((0xdU <= (0xfU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))));
    bufp->fullBit(oldp+67,((4U <= (0xfU & vlSelf->SRT_divider_FP32__DOT__q_selelct_table__DOT____VdfgTmp_hb66bca1c__0))));
    bufp->fullIData(oldp+68,(vlSelf->SRT_divider_FP32__DOT__rounding_module_1__DOT__check__DOT__abs_r),26);
    bufp->fullIData(oldp+69,(vlSelf->dividend),32);
    bufp->fullIData(oldp+70,(vlSelf->divisor),32);
    bufp->fullBit(oldp+71,(vlSelf->clk));
    bufp->fullBit(oldp+72,(vlSelf->rst));
    bufp->fullIData(oldp+73,(vlSelf->quotient),32);
    bufp->fullCData(oldp+74,((0xffU & ((IData)(0x80U) 
                                       + ((vlSelf->dividend 
                                           >> 0x17U) 
                                          + (~ (vlSelf->divisor 
                                                >> 0x17U)))))),8);
    bufp->fullBit(oldp+75,(((vlSelf->dividend ^ vlSelf->divisor) 
                            >> 0x1fU)));
    bufp->fullCData(oldp+76,((0xffU & ((IData)(0x81U) 
                                       + (((vlSelf->dividend 
                                            >> 0x17U) 
                                           + (~ (vlSelf->divisor 
                                                 >> 0x17U))) 
                                          + (~ (IData)(vlSelf->SRT_divider_FP32__DOT__dut__DOT__exponent_addend)))))),8);
    bufp->fullCData(oldp+77,((0xffU & (vlSelf->dividend 
                                       >> 0x17U))),8);
    bufp->fullCData(oldp+78,((0xffU & (vlSelf->divisor 
                                       >> 0x17U))),8);
    bufp->fullSData(oldp+79,((0xffU & (vlSelf->dividend 
                                       >> 0x17U))),9);
    bufp->fullSData(oldp+80,((0xffU & (vlSelf->divisor 
                                       >> 0x17U))),9);
    bufp->fullSData(oldp+81,((0x1ffU & ((IData)(1U) 
                                        + (~ (0xffU 
                                              & (vlSelf->divisor 
                                                 >> 0x17U)))))),9);
    bufp->fullBit(oldp+82,((1U & (((0xffU & (vlSelf->dividend 
                                             >> 0x17U)) 
                                   + (0x1ffU & ((IData)(1U) 
                                                + (~ 
                                                   (0xffU 
                                                    & (vlSelf->divisor 
                                                       >> 0x17U)))))) 
                                  >> 9U))));
    bufp->fullBit(oldp+83,((1U & (((IData)(0x7fU) + 
                                   (0x1ffU & ((IData)(1U) 
                                              + ((0xffU 
                                                  & (vlSelf->dividend 
                                                     >> 0x17U)) 
                                                 + 
                                                 (~ 
                                                  (0xffU 
                                                   & (vlSelf->divisor 
                                                      >> 0x17U))))))) 
                                  >> 9U))));
    bufp->fullSData(oldp+84,((0x1ffU & ((IData)(1U) 
                                        + ((0xffU & 
                                            (vlSelf->dividend 
                                             >> 0x17U)) 
                                           + (~ (0xffU 
                                                 & (vlSelf->divisor 
                                                    >> 0x17U))))))),9);
    bufp->fullSData(oldp+85,((0x1ffU & ((IData)(0x80U) 
                                        + ((0xffU & 
                                            (vlSelf->dividend 
                                             >> 0x17U)) 
                                           + (~ (0xffU 
                                                 & (vlSelf->divisor 
                                                    >> 0x17U))))))),9);
    bufp->fullBit(oldp+86,((vlSelf->dividend >> 0x1fU)));
    bufp->fullBit(oldp+87,((vlSelf->divisor >> 0x1fU)));
    bufp->fullIData(oldp+88,((0x7fffffU & vlSelf->dividend)),23);
    bufp->fullIData(oldp+89,((0x7fffffU & vlSelf->divisor)),23);
    bufp->fullIData(oldp+90,(vlSelf->SRT_divider_FP32__DOT__next_remainder_p),26);
    bufp->fullIData(oldp+91,(vlSelf->SRT_divider_FP32__DOT__next_remainder_n),26);
    bufp->fullIData(oldp+92,(vlSelf->SRT_divider_FP32__DOT__next_remainder_before_shift),26);
    bufp->fullBit(oldp+93,(1U));
    bufp->fullBit(oldp+94,(0U));
    bufp->fullSData(oldp+95,(0x7fU),9);
    bufp->fullIData(oldp+96,(1U),24);
    bufp->fullIData(oldp+97,(2U),24);
    bufp->fullIData(oldp+98,(3U),24);
    bufp->fullIData(oldp+99,(0xfffffdU),24);
    bufp->fullIData(oldp+100,(0xfffffeU),24);
    bufp->fullIData(oldp+101,(0xffffffU),24);
    bufp->fullIData(oldp+102,(1U),26);
}
