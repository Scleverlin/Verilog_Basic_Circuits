# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VCLA_HAN_PG_16.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VCLA_HAN_PG_16 \
	VCLA_HAN_PG_16___024root__DepSet_h8be88f59__0 \
	VCLA_HAN_PG_16___024root__DepSet_h87924015__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VCLA_HAN_PG_16___024root__Slow \
	VCLA_HAN_PG_16___024root__DepSet_h8be88f59__0__Slow \
	VCLA_HAN_PG_16___024root__DepSet_h87924015__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VCLA_HAN_PG_16__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
