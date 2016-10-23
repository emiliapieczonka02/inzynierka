# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 0
set MemName GetLocation_dm_detMap_x
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 8
set AddrRange 96
set AddrWd 7
set TrueReset 0
set IsROM 1
set ROMData { "00000000" "00000000" "00000101" "00001010" "00001111" "00010100" "00011001" "00011110" "00100011" "00101000" "00101101" "00110010" "00110111" "00111100" "01000001" "01000110" "01001011" "01010000" "01010101" "01011010" "01011111" "01100100" "01101001" "01101110" "01110011" "01111000" "01111101" "10000010" "10000111" "10001100" "10010001" "10010110" "10011011" "00000000" "00000101" "00001010" "00001111" "00010100" "00011001" "00011110" "00100011" "00101000" "00101101" "00110010" "00110111" "00111100" "01000001" "01000110" "01001011" "01010000" "01010101" "01011010" "01011111" "01100100" "01101001" "01101110" "01110011" "01111000" "01111101" "10000010" "10000111" "10001100" "10010001" "10010110" "10011011" "00000000" "00000101" "00001010" "00001111" "00010100" "00011001" "00011110" "00100011" "00101000" "00101101" "00110010" "00110111" "00111100" "01000001" "01000110" "01001011" "01010000" "01010101" "01011010" "01011111" "01100100" "01101001" "01101110" "01110011" "01111000" "01111101" "10000010" "10000111" "10001100" "10010001" "10010110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.39
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 1
set MemName GetLocation_dm_detMap_y
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 32
set AddrRange 96
set AddrWd 7
set TrueReset 0
set IsROM 1
set ROMData { "00000000000000000000000000000000" "01000001000010111111001110110110" "00000000000000000000000000000000" "01000001000010111111001110110110" "00000000000000000000000000000000" "01000001000010111111001110110110" "00000000000000000000000000000000" "01000001000010111111001110110110" "00000000000000000000000000000000" "01000001000010111111001110110110" "00000000000000000000000000000000" "01000001000010111111001110110110" "00000000000000000000000000000000" "01000001000010111111001110110110" "00000000000000000000000000000000" "01000001000010111111001110110110" "00000000000000000000000000000000" "01000001000010111111001110110110" "00000000000000000000000000000000" "01000001000010111111001110110110" "00000000000000000000000000000000" "01000001000010111111001110110110" "00000000000000000000000000000000" "01000001000010111111001110110110" "00000000000000000000000000000000" "01000001000010111111001110110110" "00000000000000000000000000000000" "01000001000010111111001110110110" "00000000000000000000000000000000" "01000001000010111111001110110110" "00000000000000000000000000000000" "01000001000010111111001110110110" "00000000000000000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" "01000010110010000000000000000000" "01000010110110010111111001110111" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.39
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 2
set MemName GetLocation_dm_detMap_module
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 1
set AddrRange 96
set AddrWd 7
set TrueReset 0
set IsROM 1
set ROMData { "0" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" "1" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.39
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3 \
    name agg_result_x \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_agg_result_x \
    op interface \
    ports { agg_result_x { O 16 vector } agg_result_x_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4 \
    name agg_result_y \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_agg_result_y \
    op interface \
    ports { agg_result_y { O 32 vector } agg_result_y_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 5 \
    name agg_result_module \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_agg_result_module \
    op interface \
    ports { agg_result_module { O 16 vector } agg_result_module_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 6 \
    name tdc_channel \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_tdc_channel \
    op interface \
    ports { tdc_channel { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


