// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBK_64.h for the primary calling header

#ifndef VERILATED_VBK_64_PARALLEL_PREFIX_TREE_FIRST_HALF__VRCM__PI3_H_
#define VERILATED_VBK_64_PARALLEL_PREFIX_TREE_FIRST_HALF__VRCM__PI3_H_  // guard

#include "verilated.h"

class VBK_64__Syms;

class VBK_64_parallel_prefix_tree_first_half__Vrcm__pi3 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN64(q,63,0);
    VL_OUT64(r,63,0);

    // INTERNAL VARIABLES
    VBK_64__Syms* const vlSymsp;

    // CONSTRUCTORS
    VBK_64_parallel_prefix_tree_first_half__Vrcm__pi3(VBK_64__Syms* symsp, const char* v__name);
    ~VBK_64_parallel_prefix_tree_first_half__Vrcm__pi3();
    VL_UNCOPYABLE(VBK_64_parallel_prefix_tree_first_half__Vrcm__pi3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
