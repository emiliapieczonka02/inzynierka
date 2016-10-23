set C_TypeInfoList {{ 
"GetLocation" : [[], {"return": [[],"0"] }, [{"ExternC" : 0}], [ {"tdc_channel": [[], {"scalar": "short"}] }],[],""], 
"0": [ "detLoc", {"struct": [[{"pack": 0}],[],[{ "x": [[],  {"scalar": "short"}]},{ "y": [[],  {"scalar": "float"}]},{ "module": [[],  {"scalar": "short"}]}],""]}]
}}
set moduleName GetLocation
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName {GetLocation}
set C_modelType { void 0 }
set C_modelArgList {
	{ agg_result_x int 16 regular {pointer 1}  }
	{ agg_result_y float 32 regular {pointer 1}  }
	{ agg_result_module int 16 regular {pointer 1}  }
	{ tdc_channel int 16 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "agg_result_x", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "agg.result.x","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "agg_result_y", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "agg.result.y","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "agg_result_module", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "agg.result.module","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "tdc_channel", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "tdc_channel","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 13
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ agg_result_x sc_out sc_lv 16 signal 0 } 
	{ agg_result_x_ap_vld sc_out sc_logic 1 outvld 0 } 
	{ agg_result_y sc_out sc_lv 32 signal 1 } 
	{ agg_result_y_ap_vld sc_out sc_logic 1 outvld 1 } 
	{ agg_result_module sc_out sc_lv 16 signal 2 } 
	{ agg_result_module_ap_vld sc_out sc_logic 1 outvld 2 } 
	{ tdc_channel sc_in sc_lv 16 signal 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "agg_result_x", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "agg_result_x", "role": "default" }} , 
 	{ "name": "agg_result_x_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "agg_result_x", "role": "ap_vld" }} , 
 	{ "name": "agg_result_y", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "agg_result_y", "role": "default" }} , 
 	{ "name": "agg_result_y_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "agg_result_y", "role": "ap_vld" }} , 
 	{ "name": "agg_result_module", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "agg_result_module", "role": "default" }} , 
 	{ "name": "agg_result_module_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "agg_result_module", "role": "ap_vld" }} , 
 	{ "name": "tdc_channel", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "tdc_channel", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3"], "CDFG" : "GetLocation", "VariableLatency" : "1", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "ProcessNetwork" : "0", "Combinational" : "0", "ControlExist" : "1",
		"Port" : [
		{"Name" : "agg_result_x", "Type" : "Vld", "Direction" : "O", "BlockSignal" : [], "SubConnect" : []}, 
		{"Name" : "agg_result_y", "Type" : "Vld", "Direction" : "O", "BlockSignal" : [], "SubConnect" : []}, 
		{"Name" : "agg_result_module", "Type" : "Vld", "Direction" : "O", "BlockSignal" : [], "SubConnect" : []}, 
		{"Name" : "tdc_channel", "Type" : "None", "Direction" : "I", "BlockSignal" : [], "SubConnect" : []}, 
		{"Name" : "dm_detMap_x", "Type" : "Memory", "Direction" : "I", "BlockSignal" : [], "SubConnect" : []}, 
		{"Name" : "dm_detMap_y", "Type" : "Memory", "Direction" : "I", "BlockSignal" : [], "SubConnect" : []}, 
		{"Name" : "dm_detMap_module", "Type" : "Memory", "Direction" : "I", "BlockSignal" : [], "SubConnect" : []}],
		"WaitState" : [],
		"SubBlockPort" : []},
	{"Level" : "1", "Path" : "`AUTOTB_DUT_INST.dm_detMap_x_U", "Parent" : "0", "Child" : []},
	{"Level" : "1", "Path" : "`AUTOTB_DUT_INST.dm_detMap_y_U", "Parent" : "0", "Child" : []},
	{"Level" : "1", "Path" : "`AUTOTB_DUT_INST.dm_detMap_module_U", "Parent" : "0", "Child" : []}]}

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1", "Max" : "1"}
	, {"Name" : "Interval", "Min" : "2", "Max" : "2"}
]}

set Spec2ImplPortList { 
	agg_result_x { ap_vld {  { agg_result_x out_data 1 16 }  { agg_result_x_ap_vld out_vld 1 1 } } }
	agg_result_y { ap_vld {  { agg_result_y out_data 1 32 }  { agg_result_y_ap_vld out_vld 1 1 } } }
	agg_result_module { ap_vld {  { agg_result_module out_data 1 16 }  { agg_result_module_ap_vld out_vld 1 1 } } }
	tdc_channel { ap_none {  { tdc_channel in_data 0 16 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
