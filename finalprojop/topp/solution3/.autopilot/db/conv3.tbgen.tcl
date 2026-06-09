set moduleName conv3
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
set C_modelName {conv3}
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
	{ p2_0 float 32 regular {fifo 0 volatile }  }
	{ p2_1 float 32 regular {fifo 0 volatile }  }
	{ p2_2 float 32 regular {fifo 0 volatile }  }
	{ p2_3 float 32 regular {fifo 0 volatile }  }
	{ p2_4 float 32 regular {fifo 0 volatile }  }
	{ p2_5 float 32 regular {fifo 0 volatile }  }
	{ p2_6 float 32 regular {fifo 0 volatile }  }
	{ p2_7 float 32 regular {fifo 0 volatile }  }
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
 	{ "Name" : "p2_0", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "p2_1", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "p2_2", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "p2_3", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "p2_4", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "p2_5", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "p2_6", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "p2_7", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} ]}
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
	{ p2_0_dout sc_in sc_lv 32 signal 8 } 
	{ p2_0_empty_n sc_in sc_logic 1 signal 8 } 
	{ p2_0_read sc_out sc_logic 1 signal 8 } 
	{ p2_1_dout sc_in sc_lv 32 signal 9 } 
	{ p2_1_empty_n sc_in sc_logic 1 signal 9 } 
	{ p2_1_read sc_out sc_logic 1 signal 9 } 
	{ p2_2_dout sc_in sc_lv 32 signal 10 } 
	{ p2_2_empty_n sc_in sc_logic 1 signal 10 } 
	{ p2_2_read sc_out sc_logic 1 signal 10 } 
	{ p2_3_dout sc_in sc_lv 32 signal 11 } 
	{ p2_3_empty_n sc_in sc_logic 1 signal 11 } 
	{ p2_3_read sc_out sc_logic 1 signal 11 } 
	{ p2_4_dout sc_in sc_lv 32 signal 12 } 
	{ p2_4_empty_n sc_in sc_logic 1 signal 12 } 
	{ p2_4_read sc_out sc_logic 1 signal 12 } 
	{ p2_5_dout sc_in sc_lv 32 signal 13 } 
	{ p2_5_empty_n sc_in sc_logic 1 signal 13 } 
	{ p2_5_read sc_out sc_logic 1 signal 13 } 
	{ p2_6_dout sc_in sc_lv 32 signal 14 } 
	{ p2_6_empty_n sc_in sc_logic 1 signal 14 } 
	{ p2_6_read sc_out sc_logic 1 signal 14 } 
	{ p2_7_dout sc_in sc_lv 32 signal 15 } 
	{ p2_7_empty_n sc_in sc_logic 1 signal 15 } 
	{ p2_7_read sc_out sc_logic 1 signal 15 } 
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
 	{ "name": "p2_0_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p2_0", "role": "dout" }} , 
 	{ "name": "p2_0_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p2_0", "role": "empty_n" }} , 
 	{ "name": "p2_0_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p2_0", "role": "read" }} , 
 	{ "name": "p2_1_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p2_1", "role": "dout" }} , 
 	{ "name": "p2_1_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p2_1", "role": "empty_n" }} , 
 	{ "name": "p2_1_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p2_1", "role": "read" }} , 
 	{ "name": "p2_2_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p2_2", "role": "dout" }} , 
 	{ "name": "p2_2_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p2_2", "role": "empty_n" }} , 
 	{ "name": "p2_2_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p2_2", "role": "read" }} , 
 	{ "name": "p2_3_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p2_3", "role": "dout" }} , 
 	{ "name": "p2_3_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p2_3", "role": "empty_n" }} , 
 	{ "name": "p2_3_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p2_3", "role": "read" }} , 
 	{ "name": "p2_4_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p2_4", "role": "dout" }} , 
 	{ "name": "p2_4_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p2_4", "role": "empty_n" }} , 
 	{ "name": "p2_4_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p2_4", "role": "read" }} , 
 	{ "name": "p2_5_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p2_5", "role": "dout" }} , 
 	{ "name": "p2_5_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p2_5", "role": "empty_n" }} , 
 	{ "name": "p2_5_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p2_5", "role": "read" }} , 
 	{ "name": "p2_6_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p2_6", "role": "dout" }} , 
 	{ "name": "p2_6_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p2_6", "role": "empty_n" }} , 
 	{ "name": "p2_6_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p2_6", "role": "read" }} , 
 	{ "name": "p2_7_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p2_7", "role": "dout" }} , 
 	{ "name": "p2_7_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p2_7", "role": "empty_n" }} , 
 	{ "name": "p2_7_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p2_7", "role": "read" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97"],
		"CDFG" : "conv3",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "25705", "EstimateLatencyMax" : "2001385",
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
			{"Name" : "p2_0", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "p2_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_1", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "p2_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_2", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "p2_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "p2_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "p2_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_5", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "p2_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_6", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "p2_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p2_7", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "p2_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "linbu_6_0_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_0_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_0_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_0_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_0_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_0_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_0_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_0_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "linbu_6_1_7", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linbu_6_0_0_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linbu_6_0_1_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linbu_6_0_2_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linbu_6_0_3_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linbu_6_0_4_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linbu_6_0_5_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linbu_6_0_6_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linbu_6_0_7_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linbu_6_1_0_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linbu_6_1_1_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linbu_6_1_2_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linbu_6_1_3_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linbu_6_1_4_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linbu_6_1_5_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linbu_6_1_6_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.linbu_6_1_7_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_0_0_0_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_0_0_1_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_0_0_2_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_0_0_3_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_0_0_4_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_0_0_5_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_0_0_6_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_0_0_7_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_0_1_0_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_0_1_1_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_0_1_2_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_0_1_3_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_0_1_4_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_0_1_5_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_0_1_6_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_0_1_7_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_0_2_0_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_0_2_1_U", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_0_2_2_U", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_0_2_3_U", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_0_2_4_U", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_0_2_5_U", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_0_2_6_U", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_0_2_7_U", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_1_0_0_U", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_1_0_1_U", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_1_0_2_U", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_1_0_3_U", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_1_0_4_U", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_1_0_5_U", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_1_0_6_U", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_1_0_7_U", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_1_1_0_U", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_1_1_1_U", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_1_1_2_U", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_1_1_3_U", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_1_1_4_U", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_1_1_5_U", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_1_1_6_U", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_1_1_7_U", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_1_2_0_U", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_1_2_1_U", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_1_2_2_U", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_1_2_3_U", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_1_2_4_U", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_1_2_5_U", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_1_2_6_U", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_1_2_7_U", "Parent" : "0"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_2_0_0_U", "Parent" : "0"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_2_0_1_U", "Parent" : "0"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_2_0_2_U", "Parent" : "0"},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_2_0_3_U", "Parent" : "0"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_2_0_4_U", "Parent" : "0"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_2_0_5_U", "Parent" : "0"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_2_0_6_U", "Parent" : "0"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_2_0_7_U", "Parent" : "0"},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_2_1_0_U", "Parent" : "0"},
	{"ID" : "74", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_2_1_1_U", "Parent" : "0"},
	{"ID" : "75", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_2_1_2_U", "Parent" : "0"},
	{"ID" : "76", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_2_1_3_U", "Parent" : "0"},
	{"ID" : "77", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_2_1_4_U", "Parent" : "0"},
	{"ID" : "78", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_2_1_5_U", "Parent" : "0"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_2_1_6_U", "Parent" : "0"},
	{"ID" : "80", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_2_1_7_U", "Parent" : "0"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_2_2_0_U", "Parent" : "0"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_2_2_1_U", "Parent" : "0"},
	{"ID" : "83", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_2_2_2_U", "Parent" : "0"},
	{"ID" : "84", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_2_2_3_U", "Parent" : "0"},
	{"ID" : "85", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_2_2_4_U", "Parent" : "0"},
	{"ID" : "86", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_2_2_5_U", "Parent" : "0"},
	{"ID" : "87", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_2_2_6_U", "Parent" : "0"},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.win_buf_2_2_7_U", "Parent" : "0"},
	{"ID" : "89", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_mux_832_32_1_1_U82", "Parent" : "0"},
	{"ID" : "90", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_mux_832_32_1_1_U83", "Parent" : "0"},
	{"ID" : "91", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_mux_832_32_1_1_U84", "Parent" : "0"},
	{"ID" : "92", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_mux_832_32_1_1_U85", "Parent" : "0"},
	{"ID" : "93", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_mux_832_32_1_1_U86", "Parent" : "0"},
	{"ID" : "94", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_mux_832_32_1_1_U87", "Parent" : "0"},
	{"ID" : "95", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_mux_832_32_1_1_U88", "Parent" : "0"},
	{"ID" : "96", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_mux_832_32_1_1_U89", "Parent" : "0"},
	{"ID" : "97", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.topp_mux_727_32_1_1_U90", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	conv3 {
		out_0 {Type O LastRead -1 FirstWrite 5}
		out_1 {Type O LastRead -1 FirstWrite 5}
		out_2 {Type O LastRead -1 FirstWrite 5}
		out_3 {Type O LastRead -1 FirstWrite 5}
		out_4 {Type O LastRead -1 FirstWrite 5}
		out_5 {Type O LastRead -1 FirstWrite 5}
		out_6 {Type O LastRead -1 FirstWrite 5}
		out_7 {Type O LastRead -1 FirstWrite 5}
		p2_0 {Type I LastRead 10 FirstWrite -1}
		p2_1 {Type I LastRead 10 FirstWrite -1}
		p2_2 {Type I LastRead 10 FirstWrite -1}
		p2_3 {Type I LastRead 10 FirstWrite -1}
		p2_4 {Type I LastRead 10 FirstWrite -1}
		p2_5 {Type I LastRead 10 FirstWrite -1}
		p2_6 {Type I LastRead 10 FirstWrite -1}
		p2_7 {Type I LastRead 10 FirstWrite -1}
		linbu_6_0_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_4 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_5 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_6 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_0_7 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_0 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_1 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_2 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_3 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_4 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_5 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_6 {Type IO LastRead -1 FirstWrite -1}
		linbu_6_1_7 {Type IO LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "25705", "Max" : "2001385"}
	, {"Name" : "Interval", "Min" : "25705", "Max" : "2001385"}
]}

set PipelineEnableSignalInfo {[
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
	p2_0 { ap_fifo {  { p2_0_dout fifo_data 0 32 }  { p2_0_empty_n fifo_status 0 1 }  { p2_0_read fifo_update 1 1 } } }
	p2_1 { ap_fifo {  { p2_1_dout fifo_data 0 32 }  { p2_1_empty_n fifo_status 0 1 }  { p2_1_read fifo_update 1 1 } } }
	p2_2 { ap_fifo {  { p2_2_dout fifo_data 0 32 }  { p2_2_empty_n fifo_status 0 1 }  { p2_2_read fifo_update 1 1 } } }
	p2_3 { ap_fifo {  { p2_3_dout fifo_data 0 32 }  { p2_3_empty_n fifo_status 0 1 }  { p2_3_read fifo_update 1 1 } } }
	p2_4 { ap_fifo {  { p2_4_dout fifo_data 0 32 }  { p2_4_empty_n fifo_status 0 1 }  { p2_4_read fifo_update 1 1 } } }
	p2_5 { ap_fifo {  { p2_5_dout fifo_data 0 32 }  { p2_5_empty_n fifo_status 0 1 }  { p2_5_read fifo_update 1 1 } } }
	p2_6 { ap_fifo {  { p2_6_dout fifo_data 0 32 }  { p2_6_empty_n fifo_status 0 1 }  { p2_6_read fifo_update 1 1 } } }
	p2_7 { ap_fifo {  { p2_7_dout fifo_data 0 32 }  { p2_7_empty_n fifo_status 0 1 }  { p2_7_read fifo_update 1 1 } } }
}
