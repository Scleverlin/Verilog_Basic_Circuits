# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vmultiplier_32.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vmultiplier_32 \
	Vmultiplier_32___024root__DepSet_h75aa69bd__0 \
	Vmultiplier_32___024root__DepSet_h92922032__0 \
	Vmultiplier_32_HC_64__DepSet_hb76e6609__0 \
	Vmultiplier_32_HC_64__DepSet_hb76e6609__1 \
	Vmultiplier_32_HC_64__DepSet_hb76e6609__2 \
	Vmultiplier_32_HC_64__DepSet_hb76e6609__3 \
	Vmultiplier_32_HC_64__DepSet_hb76e6609__4 \
	Vmultiplier_32_HC_64__DepSet_hb76e6609__5 \
	Vmultiplier_32_HC_64__DepSet_hb76e6609__6 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vmultiplier_32___024root__Slow \
	Vmultiplier_32___024root__DepSet_h75aa69bd__0__Slow \
	Vmultiplier_32___024root__DepSet_h92922032__0__Slow \
	Vmultiplier_32_HC_64__Slow \
	Vmultiplier_32_HC_64__DepSet_hcdcebe3c__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vmultiplier_32__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
