# ==============================================================
# File generated on Tue Jun 09 11:31:31 +0700 2026
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
# SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
# IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
# Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
# ==============================================================
add_files -tb ../../../finalproj/tb_topp.c -cflags { -DHW_COSIM -Wno-unknown-pragmas}
add_files topp.c
add_files ../finalproj/topp.h
set_part xc7z020clg484-1
create_clock -name default -period 10
config_dataflow -default_channel=fifo
config_dataflow -fifo_depth=16
config_dataflow -scalar_fifo_depth=2
config_dataflow -start_fifo_depth=16
config_dataflow -strict_mode=warning
