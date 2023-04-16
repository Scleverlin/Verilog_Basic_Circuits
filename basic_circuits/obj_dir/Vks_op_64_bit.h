// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VKS_OP_64_BIT_H_
#define VERILATED_VKS_OP_64_BIT_H_  // guard

#include "verilated.h"

class Vks_op_64_bit__Syms;
class Vks_op_64_bit___024root;
class Vks_op_64_bit_ks_adder_2;


// This class is the main interface to the Verilated model
class Vks_op_64_bit VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vks_op_64_bit__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&cin,0,0);
    VL_OUT8(&cout,0,0);
    VL_IN64(&a,63,0);
    VL_IN64(&b,63,0);
    VL_OUT64(&sum,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vks_op_64_bit_ks_adder_2* const __PVT__ks_op_64_bit__DOT__u1;
    Vks_op_64_bit_ks_adder_2* const __PVT__ks_op_64_bit__DOT__u2;
    Vks_op_64_bit_ks_adder_2* const __PVT__ks_op_64_bit__DOT__u3;
    Vks_op_64_bit_ks_adder_2* const __PVT__ks_op_64_bit__DOT__u4;
    Vks_op_64_bit_ks_adder_2* const __PVT__ks_op_64_bit__DOT__u5;
    Vks_op_64_bit_ks_adder_2* const __PVT__ks_op_64_bit__DOT__u6;
    Vks_op_64_bit_ks_adder_2* const __PVT__ks_op_64_bit__DOT__u7;
    Vks_op_64_bit_ks_adder_2* const __PVT__ks_op_64_bit__DOT__u8;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vks_op_64_bit___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vks_op_64_bit(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vks_op_64_bit(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vks_op_64_bit();
  private:
    VL_UNCOPYABLE(Vks_op_64_bit);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
