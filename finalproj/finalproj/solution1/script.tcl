############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project finalproj
set_top topp
add_files topp.h
add_files topp.c
add_files -tb tb_topp.c -cflags "-DHW_COSIM -Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7z020clg484-1}
create_clock -period 10 -name default
config_dataflow -default_channel fifo -fifo_depth 16 -scalar_fifo_depth 2 -start_fifo_depth 16 -strict_mode warning
#source "./finalproj/solution1/directives.tcl"
csim_design
csynth_design
cosim_design -rtl vhdl
export_design -flow impl -rtl vhdl -format ip_catalog -version "0.0.0"
