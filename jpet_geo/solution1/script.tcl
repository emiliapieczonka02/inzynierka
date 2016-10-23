############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
############################################################
open_project jpet_geo
set_top GetLocation
add_files jpet_geo/jpet_geo.cpp
add_files jpet_geo/jpet_geo.h
add_files -tb jpet_geo/jpet_geo_tb.cpp
open_solution "solution1"
set_part {xc7z020clg484-1}
create_clock -period 10 -name default
#source "./jpet_geo/solution1/directives.tcl"
csim_design -setup
csynth_design
cosim_design -rtl vhdl
export_design -format ip_catalog
