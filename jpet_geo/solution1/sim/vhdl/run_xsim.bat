
call xelab xil_defaultlib.apatb_GetLocation_top -prj GetLocation.prj --initfile "C:/Xilinx/Vivado/2016.2/bin/../data/xsim/ip/xsim_ip.ini" --lib "ieee_proposed=./ieee_proposed" -s GetLocation 
call xsim --noieeewarnings GetLocation -tclbatch GetLocation.tcl

