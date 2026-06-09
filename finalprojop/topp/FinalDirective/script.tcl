############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project topp
set_top topp
add_files ../finalproj/topp.h
add_files topp.c
add_files -tb ../finalproj/tb_topp.c -cflags "-DHW_COSIM -Wno-unknown-pragmas"
open_solution "FinalDirective"
set_part {xc7z020clg484-1} -tool vivado
create_clock -period 10 -name default
config_compile -no_signed_zeros=0 -unsafe_math_optimizations=0
config_dataflow -default_channel fifo -fifo_depth 16 -scalar_fifo_depth 2 -start_fifo_depth 16 -strict_mode warning
config_export -format ip_catalog -rtl vhdl -version 0.0.0
#source "./topp/FinalDirective/directives.tcl"
csim_design
csynth_design
cosim_design -trace_level all -rtl vhdl
export_design -flow impl -rtl vhdl -format ip_catalog -version "0.0.0"
