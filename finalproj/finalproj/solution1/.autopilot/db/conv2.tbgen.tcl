set moduleName conv2
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {conv2}
set C_modelType { void 0 }
set C_modelArgList {
	{ out_0 float 32 regular {fifo 1 volatile }  }
	{ out_1 float 32 regular {fifo 1 volatile }  }
	{ out_2 float 32 regular {fifo 1 volatile }  }
	{ out_3 float 32 regular {fifo 1 volatile }  }
	{ out_4 float 32 regular {fifo 1 volatile }  }
	{ out_5 float 32 regular {fifo 1 volatile }  }
	{ out_6 float 32 regular {fifo 1 volatile }  }
	{ out_7 float 32 regular {fifo 1 volatile }  }
	{ p1_0 float 32 regular {fifo 0 volatile }  }
	{ p1_1 float 32 regular {fifo 0 volatile }  }
	{ p1_2 float 32 regular {fifo 0 volatile }  }
	{ p1_3 float 32 regular {fifo 0 volatile }  }
	{ p1_4 float 32 regular {fifo 0 volatile }  }
	{ p1_5 float 32 regular {fifo 0 volatile }  }
	{ p1_6 float 32 regular {fifo 0 volatile }  }
	{ p1_7 float 32 regular {fifo 0 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "out_0", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_1", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_2", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_3", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_4", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_5", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_6", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "out_7", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "p1_0", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "p1_1", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "p1_2", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "p1_3", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "p1_4", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "p1_5", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "p1_6", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "p1_7", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 58
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ start_full_n sc_in sc_logic 1 signal -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ start_out sc_out sc_logic 1 signal -1 } 
	{ start_write sc_out sc_logic 1 signal -1 } 
	{ out_0_din sc_out sc_lv 32 signal 0 } 
	{ out_0_full_n sc_in sc_logic 1 signal 0 } 
	{ out_0_write sc_out sc_logic 1 signal 0 } 
	{ out_1_din sc_out sc_lv 32 signal 1 } 
	{ out_1_full_n sc_in sc_logic 1 signal 1 } 
	{ out_1_write sc_out sc_logic 1 signal 1 } 
	{ out_2_din sc_out sc_lv 32 signal 2 } 
	{ out_2_full_n sc_in sc_logic 1 signal 2 } 
	{ out_2_write sc_out sc_logic 1 signal 2 } 
	{ out_3_din sc_out sc_lv 32 signal 3 } 
	{ out_3_full_n sc_in sc_logic 1 signal 3 } 
	{ out_3_write sc_out sc_logic 1 signal 3 } 
	{ out_4_din sc_out sc_lv 32 signal 4 } 
	{ out_4_full_n sc_in sc_logic 1 signal 4 } 
	{ out_4_write sc_out sc_logic 1 signal 4 } 
	{ out_5_din sc_out sc_lv 32 signal 5 } 
	{ out_5_full_n sc_in sc_logic 1 signal 5 } 
	{ out_5_write sc_out sc_logic 1 signal 5 } 
	{ out_6_din sc_out sc_lv 32 signal 6 } 
	{ out_6_full_n sc_in sc_logic 1 signal 6 } 
	{ out_6_write sc_out sc_logic 1 signal 6 } 
	{ out_7_din sc_out sc_lv 32 signal 7 } 
	{ out_7_full_n sc_in sc_logic 1 signal 7 } 
	{ out_7_write sc_out sc_logic 1 signal 7 } 
	{ p1_0_dout sc_in sc_lv 32 signal 8 } 
	{ p1_0_empty_n sc_in sc_logic 1 signal 8 } 
	{ p1_0_read sc_out sc_logic 1 signal 8 } 
	{ p1_1_dout sc_in sc_lv 32 signal 9 } 
	{ p1_1_empty_n sc_in sc_logic 1 signal 9 } 
	{ p1_1_read sc_out sc_logic 1 signal 9 } 
	{ p1_2_dout sc_in sc_lv 32 signal 10 } 
	{ p1_2_empty_n sc_in sc_logic 1 signal 10 } 
	{ p1_2_read sc_out sc_logic 1 signal 10 } 
	{ p1_3_dout sc_in sc_lv 32 signal 11 } 
	{ p1_3_empty_n sc_in sc_logic 1 signal 11 } 
	{ p1_3_read sc_out sc_logic 1 signal 11 } 
	{ p1_4_dout sc_in sc_lv 32 signal 12 } 
	{ p1_4_empty_n sc_in sc_logic 1 signal 12 } 
	{ p1_4_read sc_out sc_logic 1 signal 12 } 
	{ p1_5_dout sc_in sc_lv 32 signal 13 } 
	{ p1_5_empty_n sc_in sc_logic 1 signal 13 } 
	{ p1_5_read sc_out sc_logic 1 signal 13 } 
	{ p1_6_dout sc_in sc_lv 32 signal 14 } 
	{ p1_6_empty_n sc_in sc_logic 1 signal 14 } 
	{ p1_6_read sc_out sc_logic 1 signal 14 } 
	{ p1_7_dout sc_in sc_lv 32 signal 15 } 
	{ p1_7_empty_n sc_in sc_logic 1 signal 15 } 
	{ p1_7_read sc_out sc_logic 1 signal 15 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "start_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_full_n", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "start_out", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_out", "role": "default" }} , 
 	{ "name": "start_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_write", "role": "default" }} , 
 	{ "name": "out_0_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_0", "role": "din" }} , 
 	{ "name": "out_0_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_0", "role": "full_n" }} , 
 	{ "name": "out_0_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_0", "role": "write" }} , 
 	{ "name": "out_1_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_1", "role": "din" }} , 
 	{ "name": "out_1_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_1", "role": "full_n" }} , 
 	{ "name": "out_1_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_1", "role": "write" }} , 
 	{ "name": "out_2_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_2", "role": "din" }} , 
 	{ "name": "out_2_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_2", "role": "full_n" }} , 
 	{ "name": "out_2_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_2", "role": "write" }} , 
 	{ "name": "out_3_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_3", "role": "din" }} , 
 	{ "name": "out_3_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_3", "role": "full_n" }} , 
 	{ "name": "out_3_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_3", "role": "write" }} , 
 	{ "name": "out_4_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_4", "role": "din" }} , 
 	{ "name": "out_4_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_4", "role": "full_n" }} , 
 	{ "name": "out_4_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_4", "role": "write" }} , 
 	{ "name": "out_5_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_5", "role": "din" }} , 
 	{ "name": "out_5_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_5", "role": "full_n" }} , 
 	{ "name": "out_5_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_5", "role": "write" }} , 
 	{ "name": "out_6_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_6", "role": "din" }} , 
 	{ "name": "out_6_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_6", "role": "full_n" }} , 
 	{ "name": "out_6_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_6", "role": "write" }} , 
 	{ "name": "out_7_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_7", "role": "din" }} , 
 	{ "name": "out_7_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_7", "role": "full_n" }} , 
 	{ "name": "out_7_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_7", "role": "write" }} , 
 	{ "name": "p1_0_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p1_0", "role": "dout" }} , 
 	{ "name": "p1_0_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p1_0", "role": "empty_n" }} , 
 	{ "name": "p1_0_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p1_0", "role": "read" }} , 
 	{ "name": "p1_1_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p1_1", "role": "dout" }} , 
 	{ "name": "p1_1_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p1_1", "role": "empty_n" }} , 
 	{ "name": "p1_1_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p1_1", "role": "read" }} , 
 	{ "name": "p1_2_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p1_2", "role": "dout" }} , 
 	{ "name": "p1_2_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p1_2", "role": "empty_n" }} , 
 	{ "name": "p1_2_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p1_2", "role": "read" }} , 
 	{ "name": "p1_3_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p1_3", "role": "dout" }} , 
 	{ "name": "p1_3_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p1_3", "role": "empty_n" }} , 
 	{ "name": "p1_3_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p1_3", "role": "read" }} , 
 	{ "name": "p1_4_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p1_4", "role": "dout" }} , 
 	{ "name": "p1_4_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p1_4", "role": "empty_n" }} , 
 	{ "name": "p1_4_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p1_4", "role": "read" }} , 
 	{ "name": "p1_5_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p1_5", "role": "dout" }} , 
 	{ "name": "p1_5_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p1_5", "role": "empty_n" }} , 
 	{ "name": "p1_5_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p1_5", "role": "read" }} , 
 	{ "name": "p1_6_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p1_6", "role": "dout" }} , 
 	{ "name": "p1_6_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p1_6", "role": "empty_n" }} , 
 	{ "name": "p1_6_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p1_6", "role": "read" }} , 
 	{ "name": "p1_7_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p1_7", "role": "dout" }} , 
 	{ "name": "p1_7_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p1_7", "role": "empty_n" }} , 
 	{ "name": "p1_7_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p1_7", "role": "read" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17"],
		"CDFG" : "conv2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "121464", "EstimateLatencyMax" : "121464",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "out_0", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "out_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_1", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "out_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_2", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "out_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "out_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "out_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_5", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "out_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_6", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "out_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_7", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "out_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "p1_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "p1_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "p1_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "p1_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "p1_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "p1_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "p1_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p1_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "p1_7_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fadd_32ns_32bkb_U44", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fadd_32ns_32bkb_U45", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fadd_32ns_32bkb_U46", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fadd_32ns_32bkb_U47", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fadd_32ns_32bkb_U48", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fadd_32ns_32bkb_U49", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fadd_32ns_32bkb_U50", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fadd_32ns_32bkb_U51", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fmul_32ns_32cud_U52", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fmul_32ns_32cud_U53", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fmul_32ns_32cud_U54", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fmul_32ns_32cud_U55", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fmul_32ns_32cud_U56", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fmul_32ns_32cud_U57", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fmul_32ns_32cud_U58", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fmul_32ns_32cud_U59", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_fcmp_32ns_32dEe_U60", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	conv2 {
		out_0 {Type O LastRead -1 FirstWrite 368}
		out_1 {Type O LastRead -1 FirstWrite 368}
		out_2 {Type O LastRead -1 FirstWrite 368}
		out_3 {Type O LastRead -1 FirstWrite 368}
		out_4 {Type O LastRead -1 FirstWrite 368}
		out_5 {Type O LastRead -1 FirstWrite 368}
		out_6 {Type O LastRead -1 FirstWrite 368}
		out_7 {Type O LastRead -1 FirstWrite 368}
		p1_0 {Type I LastRead 10 FirstWrite -1}
		p1_1 {Type I LastRead 10 FirstWrite -1}
		p1_2 {Type I LastRead 10 FirstWrite -1}
		p1_3 {Type I LastRead 10 FirstWrite -1}
		p1_4 {Type I LastRead 10 FirstWrite -1}
		p1_5 {Type I LastRead 10 FirstWrite -1}
		p1_6 {Type I LastRead 10 FirstWrite -1}
		p1_7 {Type I LastRead 10 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "121464", "Max" : "121464"}
	, {"Name" : "Interval", "Min" : "121464", "Max" : "121464"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	out_0 { ap_fifo {  { out_0_din fifo_data 1 32 }  { out_0_full_n fifo_status 0 1 }  { out_0_write fifo_update 1 1 } } }
	out_1 { ap_fifo {  { out_1_din fifo_data 1 32 }  { out_1_full_n fifo_status 0 1 }  { out_1_write fifo_update 1 1 } } }
	out_2 { ap_fifo {  { out_2_din fifo_data 1 32 }  { out_2_full_n fifo_status 0 1 }  { out_2_write fifo_update 1 1 } } }
	out_3 { ap_fifo {  { out_3_din fifo_data 1 32 }  { out_3_full_n fifo_status 0 1 }  { out_3_write fifo_update 1 1 } } }
	out_4 { ap_fifo {  { out_4_din fifo_data 1 32 }  { out_4_full_n fifo_status 0 1 }  { out_4_write fifo_update 1 1 } } }
	out_5 { ap_fifo {  { out_5_din fifo_data 1 32 }  { out_5_full_n fifo_status 0 1 }  { out_5_write fifo_update 1 1 } } }
	out_6 { ap_fifo {  { out_6_din fifo_data 1 32 }  { out_6_full_n fifo_status 0 1 }  { out_6_write fifo_update 1 1 } } }
	out_7 { ap_fifo {  { out_7_din fifo_data 1 32 }  { out_7_full_n fifo_status 0 1 }  { out_7_write fifo_update 1 1 } } }
	p1_0 { ap_fifo {  { p1_0_dout fifo_data 0 32 }  { p1_0_empty_n fifo_status 0 1 }  { p1_0_read fifo_update 1 1 } } }
	p1_1 { ap_fifo {  { p1_1_dout fifo_data 0 32 }  { p1_1_empty_n fifo_status 0 1 }  { p1_1_read fifo_update 1 1 } } }
	p1_2 { ap_fifo {  { p1_2_dout fifo_data 0 32 }  { p1_2_empty_n fifo_status 0 1 }  { p1_2_read fifo_update 1 1 } } }
	p1_3 { ap_fifo {  { p1_3_dout fifo_data 0 32 }  { p1_3_empty_n fifo_status 0 1 }  { p1_3_read fifo_update 1 1 } } }
	p1_4 { ap_fifo {  { p1_4_dout fifo_data 0 32 }  { p1_4_empty_n fifo_status 0 1 }  { p1_4_read fifo_update 1 1 } } }
	p1_5 { ap_fifo {  { p1_5_dout fifo_data 0 32 }  { p1_5_empty_n fifo_status 0 1 }  { p1_5_read fifo_update 1 1 } } }
	p1_6 { ap_fifo {  { p1_6_dout fifo_data 0 32 }  { p1_6_empty_n fifo_status 0 1 }  { p1_6_read fifo_update 1 1 } } }
	p1_7 { ap_fifo {  { p1_7_dout fifo_data 0 32 }  { p1_7_empty_n fifo_status 0 1 }  { p1_7_read fifo_update 1 1 } } }
}
