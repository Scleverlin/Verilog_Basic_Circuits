# Verilog_Basic_Circuits
Basic circuits written in Verilog

# Tools
I use iverilog + gtkwave as the basic simulation for tesetbench, and DesignCompiler for synthesis.

# Root directory
The verilog codes in the root directory are the basic training of coding, such as DFF, latch,multiplexer,etc.

# Testbench 
Prefix "tb" means the testbench of corresponding design, almost every design has a verified testbench. Some test data in testbench is set for easy check, for serious verification, a random number is better.

# Synthesizable_verilog
Files in "./synthesizable_verilog" are some a little complex deisgns selected to do logic synthesis based on DesignCompiler.

Each file in "./synthesizable_verilog" can be successfully synthesized with DesignCompiler version of R2020.

PS: Some codes are changed slightly in structure in order to be implemented logic synthesis.

The cell library I use for Logic Synthesis is CNFET7, an Open-source cell library for carbon-nanotubes FET in 7nm node.

URL:https://github.com/uec-hpc-lab/CNFET-OCL

# Gate_netlist
The gate netlist that DesignCompiler output,
by using commmad:

write -format verilog -output /path

# Single Cycle CPU
There is a directory named "single_cycle_cpu", which is my attempt to design a simple CPU based on the information from internet. 

In this directory, it includes the verilog codes and verified testbench codes of each unit.

The Simple CPU has and wiil have the following components:

An alu: for  + - & |;

A 32bit_Ripple adder;

A program counter;

A program counter adder;

An instruction decoder;

An instrution memory for test : 32bit MIPS ISA;

A data memory(RAM): for sw and lw instructin;

A control unit;

...





