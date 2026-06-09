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
open_solution "solution1pingpong"
set_part {xc7z020clg484-1}
create_clock -period 10 -name default
#source "./topp/solution1pingpong/directives.tcl"
csim_design
csynth_design
cosim_design -trace_level all -rtl vhdl
export_design -flow impl -rtl vhdl -format ip_catalog -version "0.0.0"
