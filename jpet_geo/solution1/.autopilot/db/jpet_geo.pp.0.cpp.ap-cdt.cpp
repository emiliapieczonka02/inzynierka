#pragma line 1 "jpet_geo/jpet_geo.cpp"
#pragma line 1 "jpet_geo/jpet_geo.cpp" 1
#pragma line 1 "<built-in>" 1
#pragma line 1 "<built-in>" 3
#pragma line 152 "<built-in>" 3
#pragma line 1 "<command line>" 1
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/common/technology/autopilot\\etc/autopilot_ssdm_op.h" 1
/* autopilot_ssdm_op.h*/
/*
#-  (c) Copyright 2011-2016 Xilinx, Inc. All rights reserved.
#-
#-  This file contains confidential and proprietary information
#-  of Xilinx, Inc. and is protected under U.S. and
#-  international copyright and other intellectual property
#-  laws.
#-
#-  DISCLAIMER
#-  This disclaimer is not a license and does not grant any
#-  rights to the materials distributed herewith. Except as
#-  otherwise provided in a valid license issued to you by
#-  Xilinx, and to the maximum extent permitted by applicable
#-  law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
#-  WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
#-  AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
#-  BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
#-  INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
#-  (2) Xilinx shall not be liable (whether in contract or tort,
#-  including negligence, or under any other theory of
#-  liability) for any loss or damage of any kind or nature
#-  related to, arising under or in connection with these
#-  materials, including for any direct, or any indirect,
#-  special, incidental, or consequential loss or damage
#-  (including loss of data, profits, goodwill, or any type of
#-  loss or damage suffered as a result of any action brought
#-  by a third party) even if such damage or loss was
#-  reasonably foreseeable or Xilinx had been advised of the
#-  possibility of the same.
#-
#-  CRITICAL APPLICATIONS
#-  Xilinx products are not designed or intended to be fail-
#-  safe, or for use in any application requiring fail-safe
#-  performance, such as life-support or safety devices or
#-  systems, Class III medical devices, nuclear facilities,
#-  applications related to the deployment of airbags, or any
#-  other applications that could lead to death, personal
#-  injury, or severe property or environmental damage
#-  (individually and collectively, "Critical
#-  Applications"). Customer assumes the sole risk and
#-  liability of any use of Xilinx products in Critical
#-  Applications, subject only to applicable laws and
#-  regulations governing limitations on product liability.
#-
#-  THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
#-  PART OF THIS FILE AT ALL TIMES. 
#- ************************************************************************
#pragma empty_line
 *
 * $Id$
 */
#pragma line 145 "C:/Xilinx/Vivado_HLS/2016.2/common/technology/autopilot\\etc/autopilot_ssdm_op.h"
/*#define AP_SPEC_ATTR __attribute__ ((pure))*/
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern "C" {
#pragma empty_line
    /****** SSDM Intrinsics: OPERATIONS ***/
    // Interface operations
#pragma empty_line
    //typedef unsigned int __attribute__ ((bitwidth(1))) _uint1_;
    typedef bool _uint1_;
#pragma empty_line
    void _ssdm_op_IfRead(...) __attribute__ ((nothrow));
    void _ssdm_op_IfWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfNbRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfNbWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfCanRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_op_IfCanWrite(...) __attribute__ ((nothrow));
#pragma empty_line
    // Stream Intrinsics
    void _ssdm_StreamRead(...) __attribute__ ((nothrow));
    void _ssdm_StreamWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamNbRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamNbWrite(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamCanRead(...) __attribute__ ((nothrow));
    _uint1_ _ssdm_StreamCanWrite(...) __attribute__ ((nothrow));
    unsigned _ssdm_StreamSize(...) __attribute__ ((nothrow));
#pragma empty_line
    // Misc
    void _ssdm_op_MemShiftRead(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_Wait(...) __attribute__ ((nothrow));
    void _ssdm_op_Poll(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_Return(...) __attribute__ ((nothrow));
#pragma empty_line
    /* SSDM Intrinsics: SPECIFICATIONS */
    void _ssdm_op_SpecSynModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPort(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecReset(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecPlatform(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain(...) __attribute__ ((nothrow));
#pragma empty_line
    int _ssdm_op_SpecRegionBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecLoopName(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecLoopTripCount(...) __attribute__ ((nothrow));
#pragma empty_line
    int _ssdm_op_SpecStateBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecInterface(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecPipeline(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline(...) __attribute__ ((nothrow));
#pragma empty_line
#pragma empty_line
    void _ssdm_op_SpecLatency(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecResource(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecExt(...) __attribute__ ((nothrow));
    /*void* _ssdm_op_SpecProcess(...) SSDM_SPEC_ATTR;
    void* _ssdm_op_SpecEdge(...) SSDM_SPEC_ATTR; */
#pragma empty_line
    /* Presynthesis directive functions */
    void _ssdm_SpecArrayDimSize(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_RegionBegin(...) __attribute__ ((nothrow));
    void _ssdm_RegionEnd(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_Unroll(...) __attribute__ ((nothrow));
    void _ssdm_UnrollRegion(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_InlineAll(...) __attribute__ ((nothrow));
    void _ssdm_InlineLoop(...) __attribute__ ((nothrow));
    void _ssdm_Inline(...) __attribute__ ((nothrow));
    void _ssdm_InlineSelf(...) __attribute__ ((nothrow));
    void _ssdm_InlineRegion(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecArrayMap(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecStream(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecExpr(...) __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecDependence(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecLoopMerge(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecFuncInstantiation(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract(...) __attribute__ ((nothrow));
    void _ssdm_SpecConstant(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_DataPack(...) __attribute__ ((nothrow));
    void _ssdm_SpecDataPack(...) __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecBitsMap(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense(...) __attribute__ ((nothrow));
#pragma empty_line
    void __xilinx_ip_top(...) __attribute__ ((nothrow));
#pragma empty_line
#pragma empty_line
}
#pragma line 407 "C:/Xilinx/Vivado_HLS/2016.2/common/technology/autopilot\\etc/autopilot_ssdm_op.h"
/*#define _ssdm_op_WaitUntil(X) while (!(X)) _ssdm_op_Wait(1);
#define _ssdm_op_Delayed(X) X */
#pragma line 421 "C:/Xilinx/Vivado_HLS/2016.2/common/technology/autopilot\\etc/autopilot_ssdm_op.h"
// XSIP watermark, do not delete 67d7842dbbe25473c3c32b93c0da8047785f30d78e8a024de1b57352245f9689
#pragma line 7 "<command line>" 2
#pragma line 1 "<built-in>" 2
#pragma line 1 "jpet_geo/jpet_geo.cpp" 2
#pragma line 1 "jpet_geo/jpet_geo.h" 1
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath" 1 3
// -*- C++ -*- C forwarding header.
#pragma empty_line
// Copyright (C) 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005,
// 2006, 2007, 2008, 2009, 2010
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file include/cmath
 *  This is a Standard C++ Library file.  You should @c \#include this file
 *  in your programs, rather than any of the @a *.h implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c math.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std (except for names which are defined
 *  as macros in C).
 */
#pragma empty_line
//
// ISO C++ 14882: 26.5  C library
//
#pragma empty_line
#pragma empty_line
#pragma line 41 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath" 3
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-
#pragma empty_line
// Copyright (C) 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005,
// 2006, 2007, 2008, 2009 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file c++config.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
// The current version of the C++ library in compressed ISO date format.
#pragma empty_line
#pragma empty_line
// Macros for visibility.
// _GLIBCXX_HAVE_ATTRIBUTE_VISIBILITY
// _GLIBCXX_VISIBILITY_ATTR
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
// If this is not supplied by the OS-specific or CPU-specific
// headers included below, it will be defined to an empty default.
#pragma empty_line
#pragma empty_line
#pragma empty_line
// Macros for deprecated.
// _GLIBCXX_DEPRECATED
// _GLIBCXX_DEPRECATED_ATTR
#pragma line 63 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 3
// Macros for activating various namespace association modes.
// _GLIBCXX_NAMESPACE_ASSOCIATION_DEBUG
// _GLIBCXX_NAMESPACE_ASSOCIATION_PARALLEL
// _GLIBCXX_NAMESPACE_ASSOCIATION_VERSION
#pragma empty_line
// Guide to libstdc++ namespaces.
/*
  namespace std
  {
    namespace __debug { }
    namespace __parallel { }
    namespace __norm { } // __normative, __shadow, __replaced
    namespace __cxx1998 { }
#pragma empty_line
    namespace tr1 { }
  }
*/
#pragma line 90 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 3
// Namespace association for profile
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
// Defined if any namespace association modes are active.
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
// Macros for namespace scope. Either namespace std:: or the name
// of some nested namespace within it.
// _GLIBCXX_STD
// _GLIBCXX_STD_D
// _GLIBCXX_STD_P
//
// Macros for enclosing namespaces and possibly nested namespaces.
// _GLIBCXX_BEGIN_NAMESPACE
// _GLIBCXX_END_NAMESPACE
// _GLIBCXX_BEGIN_NESTED_NAMESPACE
// _GLIBCXX_END_NESTED_NAMESPACE
#pragma line 187 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 3
// Namespace associations for debug mode.
#pragma line 197 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 3
// Namespace associations for parallel mode.
#pragma line 207 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 3
// Namespace associations for profile mode
#pragma line 217 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 3
// Namespace associations for versioning mode.
#pragma line 238 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 3
// XXX GLIBCXX_ABI Deprecated
// Define if compatibility should be provided for -mlong-double-64
#pragma empty_line
#pragma empty_line
// Namespace associations for long double 128 mode.
#pragma line 258 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 3
// Defines for C compatibility. In particular, define extern "C"
// linkage only when using C++.
#pragma line 272 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 3
// First includes.
#pragma empty_line
// Pick up any OS-specific definitions.
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/os_defines.h" 1 3
// Specific definitions for generic platforms  -*- C++ -*-
#pragma empty_line
// Copyright (C) 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008,
// 2009  Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file os_defines.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
// System-specific #define, typedefs, corrections, etc, go here.  This
// file will come before all others.
#pragma empty_line
//  Define as 0, if you want, to enable inlining of gthread functions.
//  By default, don't pollute libstdc++ with win32api names.
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
// Don't let win32api windef.h define min and max as macros
// if included after c++config.h.
#pragma line 57 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/os_defines.h" 3
// See libstdc++/20806.
#pragma empty_line
#pragma empty_line
// See  libstdc++/37522.
#pragma line 276 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 2 3
#pragma empty_line
// Pick up any CPU-specific definitions.
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/cpu_defines.h" 1 3
// Specific definitions for generic platforms  -*- C++ -*-
#pragma empty_line
// Copyright (C) 2005, 2009 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file cpu_defines.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 */
#pragma line 279 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 2 3
#pragma empty_line
// If platform uses neither visibility nor psuedo-visibility,
// specify empty default for namespace annotation macros.
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
// Allow use of "export template." This is currently not a feature
// that g++ supports.
// #define _GLIBCXX_EXPORT_TEMPLATE 1
#pragma empty_line
// Allow use of the GNU syntax extension, "extern template." This
// extension is fully documented in the g++ manual, but in a nutshell,
// it inhibits all implicit instantiations and is used throughout the
// library to avoid multiple weak definitions for required types that
// are already explicitly instantiated in the library binary. This
// substantially reduces the binary size of resulting executables.
#pragma empty_line
// Special case: _GLIBCXX_EXTERN_TEMPLATE == -1 disallows extern
// templates only in basic_string, thus activating its debug-mode
// checks even at -O0.
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
// Certain function definitions that are meant to be overridable from
// user code are decorated with this macro.  For some targets, this
// macro causes these definitions to be weak.
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
// Assert.
// Avoid the use of assert, because we're trying to keep the <cassert>
// include out of the mix.
#pragma line 339 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 3
// The remainder of the prewritten config is automatic; all the
// user hooks are listed above.
#pragma empty_line
// Create a boolean flag to be used to determine if --fast-math is set.
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
// This marks string literals in header files to be extracted for eventual
// translation.  It is primarily used for messages in thrown exceptions; see
// src/functexcept.cc.  We use __N because the more traditional _N is used
// for something else under certain OSes (see BADNAMES).
#pragma empty_line
#pragma empty_line
// For example, <windows.h> is known to #define min and max as macros...
#pragma line 379 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 3
// End of prewritten config; the discovered settings follow.
/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */
#pragma empty_line
/* Define to 1 if you have the `acosf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `acosl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `asinf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `asinl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if the target assembler supports .symver directive. */
/* #undef _GLIBCXX_HAVE_AS_SYMVER_DIRECTIVE */
#pragma empty_line
/* Define to 1 if you have the `atan2f' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `atan2l' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `atanf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `atanl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if the target assembler supports thread-local storage. */
/* #undef _GLIBCXX_HAVE_CC_TLS */
#pragma empty_line
/* Define to 1 if you have the `ceilf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `ceill' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <complex.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `cosf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `coshf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `coshl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `cosl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef _GLIBCXX_HAVE_DLFCN_H */
#pragma empty_line
/* Define if EBADMSG exists. */
/* #undef _GLIBCXX_HAVE_EBADMSG */
#pragma empty_line
/* Define if ECANCELED exists. */
/* #undef _GLIBCXX_HAVE_ECANCELED */
#pragma empty_line
/* Define if EIDRM exists. */
/* #undef _GLIBCXX_HAVE_EIDRM */
#pragma empty_line
/* Define to 1 if you have the <endian.h> header file. */
/* #undef _GLIBCXX_HAVE_ENDIAN_H */
#pragma empty_line
/* Define if ENODATA exists. */
/* #undef _GLIBCXX_HAVE_ENODATA */
#pragma empty_line
/* Define if ENOLINK exists. */
/* #undef _GLIBCXX_HAVE_ENOLINK */
#pragma empty_line
/* Define if ENOSR exists. */
/* #undef _GLIBCXX_HAVE_ENOSR */
#pragma empty_line
/* Define if ENOSTR exists. */
/* #undef _GLIBCXX_HAVE_ENOSTR */
#pragma empty_line
/* Define if ENOTRECOVERABLE exists. */
/* #undef _GLIBCXX_HAVE_ENOTRECOVERABLE */
#pragma empty_line
/* Define if ENOTSUP exists. */
/* #undef _GLIBCXX_HAVE_ENOTSUP */
#pragma empty_line
/* Define if EOVERFLOW exists. */
/* #undef _GLIBCXX_HAVE_EOVERFLOW */
#pragma empty_line
/* Define if EOWNERDEAD exists. */
/* #undef _GLIBCXX_HAVE_EOWNERDEAD */
#pragma empty_line
/* Define if EPROTO exists. */
/* #undef _GLIBCXX_HAVE_EPROTO */
#pragma empty_line
/* Define if ETIME exists. */
/* #undef _GLIBCXX_HAVE_ETIME */
#pragma empty_line
/* Define if ETXTBSY exists. */
/* #undef _GLIBCXX_HAVE_ETXTBSY */
#pragma empty_line
/* Define to 1 if you have the <execinfo.h> header file. */
/* #undef _GLIBCXX_HAVE_EXECINFO_H */
#pragma empty_line
/* Define to 1 if you have the `expf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `expl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `fabsf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `fabsl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <fenv.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `finite' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `finitef' function. */
/* #undef _GLIBCXX_HAVE_FINITEF */
#pragma empty_line
/* Define to 1 if you have the `finitel' function. */
/* #undef _GLIBCXX_HAVE_FINITEL */
#pragma empty_line
/* Define to 1 if you have the <float.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `floorf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `floorl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `fmodf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `fmodl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `fpclass' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <fp.h> header file. */
/* #undef _GLIBCXX_HAVE_FP_H */
#pragma empty_line
/* Define to 1 if you have the `frexpf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `frexpl' function. */
#pragma empty_line
#pragma empty_line
/* Define if _Unwind_GetIPInfo is available. */
#pragma empty_line
#pragma empty_line
/* Define if gthr-default.h exists (meaning that threading support is
   enabled). */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `hypot' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `hypotf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `hypotl' function. */
#pragma empty_line
#pragma empty_line
/* Define if you have the iconv() function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <ieeefp.h> header file. */
/* #undef _GLIBCXX_HAVE_IEEEFP_H */
#pragma empty_line
/* Define if int64_t is available in <stdint.h>. */
#pragma empty_line
#pragma empty_line
/* Define if int64_t is a long. */
/* #undef _GLIBCXX_HAVE_INT64_T_LONG */
#pragma empty_line
/* Define if int64_t is a long long. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <inttypes.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `isinf' function. */
/* #undef _GLIBCXX_HAVE_ISINF */
#pragma empty_line
/* Define to 1 if you have the `isinff' function. */
/* #undef _GLIBCXX_HAVE_ISINFF */
#pragma empty_line
/* Define to 1 if you have the `isinfl' function. */
/* #undef _GLIBCXX_HAVE_ISINFL */
#pragma empty_line
/* Define to 1 if you have the `isnan' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `isnanf' function. */
/* #undef _GLIBCXX_HAVE_ISNANF */
#pragma empty_line
/* Define to 1 if you have the `isnanl' function. */
/* #undef _GLIBCXX_HAVE_ISNANL */
#pragma empty_line
/* Defined if iswblank exists. */
#pragma empty_line
#pragma empty_line
/* Define if LC_MESSAGES is available in <locale.h>. */
/* #undef _GLIBCXX_HAVE_LC_MESSAGES */
#pragma empty_line
/* Define to 1 if you have the `ldexpf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `ldexpl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <libintl.h> header file. */
/* #undef _GLIBCXX_HAVE_LIBINTL_H */
#pragma empty_line
/* Only used in build directory testsuite_hooks.h. */
/* #undef _GLIBCXX_HAVE_LIMIT_AS */
#pragma empty_line
/* Only used in build directory testsuite_hooks.h. */
/* #undef _GLIBCXX_HAVE_LIMIT_DATA */
#pragma empty_line
/* Only used in build directory testsuite_hooks.h. */
/* #undef _GLIBCXX_HAVE_LIMIT_FSIZE */
#pragma empty_line
/* Only used in build directory testsuite_hooks.h. */
/* #undef _GLIBCXX_HAVE_LIMIT_RSS */
#pragma empty_line
/* Only used in build directory testsuite_hooks.h. */
/* #undef _GLIBCXX_HAVE_LIMIT_VMEM */
#pragma empty_line
/* Define if futex syscall is available. */
/* #undef _GLIBCXX_HAVE_LINUX_FUTEX */
#pragma empty_line
/* Define to 1 if you have the <locale.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `log10f' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `log10l' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `logf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `logl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <machine/endian.h> header file. */
/* #undef _GLIBCXX_HAVE_MACHINE_ENDIAN_H */
#pragma empty_line
/* Define to 1 if you have the <machine/param.h> header file. */
/* #undef _GLIBCXX_HAVE_MACHINE_PARAM_H */
#pragma empty_line
/* Define if mbstate_t exists in wchar.h. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <memory.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `modf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `modff' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `modfl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <nan.h> header file. */
/* #undef _GLIBCXX_HAVE_NAN_H */
#pragma empty_line
/* Define if poll is available in <poll.h>. */
/* #undef _GLIBCXX_HAVE_POLL */
#pragma empty_line
/* Define to 1 if you have the `powf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `powl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `qfpclass' function. */
/* #undef _GLIBCXX_HAVE_QFPCLASS */
#pragma empty_line
/* Define to 1 if you have the `setenv' function. */
/* #undef _GLIBCXX_HAVE_SETENV */
#pragma empty_line
/* Define to 1 if you have the `sincos' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `sincosf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `sincosl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `sinf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `sinhf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `sinhl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `sinl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `sqrtf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `sqrtl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <stdbool.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <stdint.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <stdlib.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define if strerror_l is available in <string.h>. */
/* #undef _GLIBCXX_HAVE_STRERROR_L */
#pragma empty_line
/* Define if strerror_r is available in <string.h>. */
/* #undef _GLIBCXX_HAVE_STRERROR_R */
#pragma empty_line
/* Define to 1 if you have the <strings.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <string.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `strtof' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `strtold' function. */
#pragma empty_line
#pragma empty_line
/* Define if strxfrm_l is available in <string.h>. */
/* #undef _GLIBCXX_HAVE_STRXFRM_L */
#pragma empty_line
/* Define to 1 if you have the <sys/filio.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_FILIO_H */
#pragma empty_line
/* Define to 1 if you have the <sys/ioctl.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_IOCTL_H */
#pragma empty_line
/* Define to 1 if you have the <sys/ipc.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_IPC_H */
#pragma empty_line
/* Define to 1 if you have the <sys/isa_defs.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_ISA_DEFS_H */
#pragma empty_line
/* Define to 1 if you have the <sys/machine.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_MACHINE_H */
#pragma empty_line
/* Define to 1 if you have the <sys/param.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <sys/resource.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_RESOURCE_H */
#pragma empty_line
/* Define to 1 if you have the <sys/sem.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_SEM_H */
#pragma empty_line
/* Define to 1 if you have the <sys/stat.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <sys/time.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <sys/types.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <sys/uio.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_UIO_H */
#pragma empty_line
/* Define if S_IFREG is available in <sys/stat.h>. */
/* #undef _GLIBCXX_HAVE_S_IFREG */
#pragma empty_line
/* Define if S_IFREG is available in <sys/stat.h>. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `tanf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `tanhf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `tanhl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `tanl' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <tgmath.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if the target supports thread-local storage. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <unistd.h> header file. */
#pragma empty_line
#pragma empty_line
/* Defined if vfwscanf exists. */
#pragma empty_line
#pragma empty_line
/* Defined if vswscanf exists. */
#pragma empty_line
#pragma empty_line
/* Defined if vwscanf exists. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <wchar.h> header file. */
#pragma empty_line
#pragma empty_line
/* Defined if wcstof exists. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the <wctype.h> header file. */
#pragma empty_line
#pragma empty_line
/* Define if writev is available in <sys/uio.h>. */
/* #undef _GLIBCXX_HAVE_WRITEV */
#pragma empty_line
/* Define to 1 if you have the `_acosf' function. */
/* #undef _GLIBCXX_HAVE__ACOSF */
#pragma empty_line
/* Define to 1 if you have the `_acosl' function. */
/* #undef _GLIBCXX_HAVE__ACOSL */
#pragma empty_line
/* Define to 1 if you have the `_asinf' function. */
/* #undef _GLIBCXX_HAVE__ASINF */
#pragma empty_line
/* Define to 1 if you have the `_asinl' function. */
/* #undef _GLIBCXX_HAVE__ASINL */
#pragma empty_line
/* Define to 1 if you have the `_atan2f' function. */
/* #undef _GLIBCXX_HAVE__ATAN2F */
#pragma empty_line
/* Define to 1 if you have the `_atan2l' function. */
/* #undef _GLIBCXX_HAVE__ATAN2L */
#pragma empty_line
/* Define to 1 if you have the `_atanf' function. */
/* #undef _GLIBCXX_HAVE__ATANF */
#pragma empty_line
/* Define to 1 if you have the `_atanl' function. */
/* #undef _GLIBCXX_HAVE__ATANL */
#pragma empty_line
/* Define to 1 if you have the `_ceilf' function. */
/* #undef _GLIBCXX_HAVE__CEILF */
#pragma empty_line
/* Define to 1 if you have the `_ceill' function. */
/* #undef _GLIBCXX_HAVE__CEILL */
#pragma empty_line
/* Define to 1 if you have the `_cosf' function. */
/* #undef _GLIBCXX_HAVE__COSF */
#pragma empty_line
/* Define to 1 if you have the `_coshf' function. */
/* #undef _GLIBCXX_HAVE__COSHF */
#pragma empty_line
/* Define to 1 if you have the `_coshl' function. */
/* #undef _GLIBCXX_HAVE__COSHL */
#pragma empty_line
/* Define to 1 if you have the `_cosl' function. */
/* #undef _GLIBCXX_HAVE__COSL */
#pragma empty_line
/* Define to 1 if you have the `_expf' function. */
/* #undef _GLIBCXX_HAVE__EXPF */
#pragma empty_line
/* Define to 1 if you have the `_expl' function. */
/* #undef _GLIBCXX_HAVE__EXPL */
#pragma empty_line
/* Define to 1 if you have the `_fabsf' function. */
/* #undef _GLIBCXX_HAVE__FABSF */
#pragma empty_line
/* Define to 1 if you have the `_fabsl' function. */
/* #undef _GLIBCXX_HAVE__FABSL */
#pragma empty_line
/* Define to 1 if you have the `_finite' function. */
/* #undef _GLIBCXX_HAVE__FINITE */
#pragma empty_line
/* Define to 1 if you have the `_finitef' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `_finitel' function. */
/* #undef _GLIBCXX_HAVE__FINITEL */
#pragma empty_line
/* Define to 1 if you have the `_floorf' function. */
/* #undef _GLIBCXX_HAVE__FLOORF */
#pragma empty_line
/* Define to 1 if you have the `_floorl' function. */
/* #undef _GLIBCXX_HAVE__FLOORL */
#pragma empty_line
/* Define to 1 if you have the `_fmodf' function. */
/* #undef _GLIBCXX_HAVE__FMODF */
#pragma empty_line
/* Define to 1 if you have the `_fmodl' function. */
/* #undef _GLIBCXX_HAVE__FMODL */
#pragma empty_line
/* Define to 1 if you have the `_fpclass' function. */
/* #undef _GLIBCXX_HAVE__FPCLASS */
#pragma empty_line
/* Define to 1 if you have the `_frexpf' function. */
/* #undef _GLIBCXX_HAVE__FREXPF */
#pragma empty_line
/* Define to 1 if you have the `_frexpl' function. */
/* #undef _GLIBCXX_HAVE__FREXPL */
#pragma empty_line
/* Define to 1 if you have the `_hypot' function. */
/* #undef _GLIBCXX_HAVE__HYPOT */
#pragma empty_line
/* Define to 1 if you have the `_hypotf' function. */
/* #undef _GLIBCXX_HAVE__HYPOTF */
#pragma empty_line
/* Define to 1 if you have the `_hypotl' function. */
/* #undef _GLIBCXX_HAVE__HYPOTL */
#pragma empty_line
/* Define to 1 if you have the `_isinf' function. */
/* #undef _GLIBCXX_HAVE__ISINF */
#pragma empty_line
/* Define to 1 if you have the `_isinff' function. */
/* #undef _GLIBCXX_HAVE__ISINFF */
#pragma empty_line
/* Define to 1 if you have the `_isinfl' function. */
/* #undef _GLIBCXX_HAVE__ISINFL */
#pragma empty_line
/* Define to 1 if you have the `_isnan' function. */
/* #undef _GLIBCXX_HAVE__ISNAN */
#pragma empty_line
/* Define to 1 if you have the `_isnanf' function. */
#pragma empty_line
#pragma empty_line
/* Define to 1 if you have the `_isnanl' function. */
/* #undef _GLIBCXX_HAVE__ISNANL */
#pragma empty_line
/* Define to 1 if you have the `_ldexpf' function. */
/* #undef _GLIBCXX_HAVE__LDEXPF */
#pragma empty_line
/* Define to 1 if you have the `_ldexpl' function. */
/* #undef _GLIBCXX_HAVE__LDEXPL */
#pragma empty_line
/* Define to 1 if you have the `_log10f' function. */
/* #undef _GLIBCXX_HAVE__LOG10F */
#pragma empty_line
/* Define to 1 if you have the `_log10l' function. */
/* #undef _GLIBCXX_HAVE__LOG10L */
#pragma empty_line
/* Define to 1 if you have the `_logf' function. */
/* #undef _GLIBCXX_HAVE__LOGF */
#pragma empty_line
/* Define to 1 if you have the `_logl' function. */
/* #undef _GLIBCXX_HAVE__LOGL */
#pragma empty_line
/* Define to 1 if you have the `_modf' function. */
/* #undef _GLIBCXX_HAVE__MODF */
#pragma empty_line
/* Define to 1 if you have the `_modff' function. */
/* #undef _GLIBCXX_HAVE__MODFF */
#pragma empty_line
/* Define to 1 if you have the `_modfl' function. */
/* #undef _GLIBCXX_HAVE__MODFL */
#pragma empty_line
/* Define to 1 if you have the `_powf' function. */
/* #undef _GLIBCXX_HAVE__POWF */
#pragma empty_line
/* Define to 1 if you have the `_powl' function. */
/* #undef _GLIBCXX_HAVE__POWL */
#pragma empty_line
/* Define to 1 if you have the `_qfpclass' function. */
/* #undef _GLIBCXX_HAVE__QFPCLASS */
#pragma empty_line
/* Define to 1 if you have the `_sincos' function. */
/* #undef _GLIBCXX_HAVE__SINCOS */
#pragma empty_line
/* Define to 1 if you have the `_sincosf' function. */
/* #undef _GLIBCXX_HAVE__SINCOSF */
#pragma empty_line
/* Define to 1 if you have the `_sincosl' function. */
/* #undef _GLIBCXX_HAVE__SINCOSL */
#pragma empty_line
/* Define to 1 if you have the `_sinf' function. */
/* #undef _GLIBCXX_HAVE__SINF */
#pragma empty_line
/* Define to 1 if you have the `_sinhf' function. */
/* #undef _GLIBCXX_HAVE__SINHF */
#pragma empty_line
/* Define to 1 if you have the `_sinhl' function. */
/* #undef _GLIBCXX_HAVE__SINHL */
#pragma empty_line
/* Define to 1 if you have the `_sinl' function. */
/* #undef _GLIBCXX_HAVE__SINL */
#pragma empty_line
/* Define to 1 if you have the `_sqrtf' function. */
/* #undef _GLIBCXX_HAVE__SQRTF */
#pragma empty_line
/* Define to 1 if you have the `_sqrtl' function. */
/* #undef _GLIBCXX_HAVE__SQRTL */
#pragma empty_line
/* Define to 1 if you have the `_tanf' function. */
/* #undef _GLIBCXX_HAVE__TANF */
#pragma empty_line
/* Define to 1 if you have the `_tanhf' function. */
/* #undef _GLIBCXX_HAVE__TANHF */
#pragma empty_line
/* Define to 1 if you have the `_tanhl' function. */
/* #undef _GLIBCXX_HAVE__TANHL */
#pragma empty_line
/* Define to 1 if you have the `_tanl' function. */
/* #undef _GLIBCXX_HAVE__TANL */
#pragma empty_line
/* Define as const if the declaration of iconv() needs const. */
#pragma empty_line
#pragma empty_line
/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#pragma empty_line
#pragma empty_line
/* Name of package */
/* #undef _GLIBCXX_PACKAGE */
#pragma empty_line
/* Define to the address where bug reports for this package should be sent. */
#pragma empty_line
#pragma empty_line
/* Define to the full name of this package. */
#pragma empty_line
#pragma empty_line
/* Define to the full name and version of this package. */
#pragma empty_line
#pragma empty_line
/* Define to the one symbol short name of this package. */
#pragma empty_line
#pragma empty_line
/* Define to the home page for this package. */
#pragma empty_line
#pragma empty_line
/* Define to the version of this package. */
#pragma empty_line
#pragma empty_line
/* The size of `char', as computed by sizeof. */
/* #undef SIZEOF_CHAR */
#pragma empty_line
/* The size of `int', as computed by sizeof. */
/* #undef SIZEOF_INT */
#pragma empty_line
/* The size of `long', as computed by sizeof. */
/* #undef SIZEOF_LONG */
#pragma empty_line
/* The size of `short', as computed by sizeof. */
/* #undef SIZEOF_SHORT */
#pragma empty_line
/* The size of `void *', as computed by sizeof. */
/* #undef SIZEOF_VOID_P */
#pragma empty_line
/* Define to 1 if you have the ANSI C header files. */
#pragma empty_line
#pragma empty_line
/* Version number of package */
/* #undef _GLIBCXX_VERSION */
#pragma empty_line
/* Define if builtin atomic operations for bool are supported on this host. */
#pragma empty_line
#pragma empty_line
/* Define if builtin atomic operations for short are supported on this host.
   */
#pragma empty_line
#pragma empty_line
/* Define if builtin atomic operations for int are supported on this host. */
#pragma empty_line
#pragma empty_line
/* Define if builtin atomic operations for long long are supported on this
   host. */
#pragma empty_line
#pragma empty_line
/* Define to use concept checking code from the boost libraries. */
/* #undef _GLIBCXX_CONCEPT_CHECKS */
#pragma empty_line
/* Define if a fully dynamic basic_string is wanted. */
#pragma empty_line
#pragma empty_line
/* Define if gthreads library is available. */
/* #undef _GLIBCXX_HAS_GTHREADS */
#pragma empty_line
/* Define to 1 if a full hosted library is built, or 0 if freestanding. */
#pragma empty_line
#pragma empty_line
/* Define if compatibility should be provided for -mlong-double-64. */
#pragma empty_line
/* Define if ptrdiff_t is int. */
/* #undef _GLIBCXX_PTRDIFF_T_IS_INT */
#pragma empty_line
/* Define if using setrlimit to set resource limits during "make check" */
/* #undef _GLIBCXX_RES_LIMITS */
#pragma empty_line
/* Define if size_t is unsigned int. */
/* #undef _GLIBCXX_SIZE_T_IS_UINT */
#pragma empty_line
/* Define if the compiler is configured for setjmp/longjmp exceptions. */
#pragma empty_line
#pragma empty_line
/* Define if EOF == -1, SEEK_CUR == 1, SEEK_END == 2. */
#pragma empty_line
#pragma empty_line
/* Define to use symbol versioning in the shared library. */
#pragma empty_line
#pragma empty_line
/* Define to use darwin versioning in the shared library. */
/* #undef _GLIBCXX_SYMVER_DARWIN */
#pragma empty_line
/* Define to use GNU versioning in the shared library. */
#pragma empty_line
#pragma empty_line
/* Define to use GNU namespace versioning in the shared library. */
/* #undef _GLIBCXX_SYMVER_GNU_NAMESPACE */
#pragma empty_line
/* Define if C99 functions or macros from <wchar.h>, <math.h>, <complex.h>,
   <stdio.h>, and <stdlib.h> can be used or exposed. */
#pragma empty_line
#pragma empty_line
/* Define if C99 functions in <complex.h> should be used in <complex>. Using
   compiler builtins for these functions requires corresponding C99 library
   functions to be present. */
#pragma empty_line
#pragma empty_line
/* Define if C99 functions in <complex.h> should be used in <tr1/complex>.
   Using compiler builtins for these functions requires corresponding C99
   library functions to be present. */
#pragma empty_line
#pragma empty_line
/* Define if C99 functions in <ctype.h> should be imported in <tr1/cctype> in
   namespace std::tr1. */
#pragma empty_line
#pragma empty_line
/* Define if C99 functions in <fenv.h> should be imported in <tr1/cfenv> in
   namespace std::tr1. */
#pragma empty_line
#pragma empty_line
/* Define if C99 functions in <inttypes.h> should be imported in
   <tr1/cinttypes> in namespace std::tr1. */
#pragma empty_line
#pragma empty_line
/* Define if wchar_t C99 functions in <inttypes.h> should be imported in
   <tr1/cinttypes> in namespace std::tr1. */
#pragma empty_line
#pragma empty_line
/* Define if C99 functions or macros in <math.h> should be imported in <cmath>
   in namespace std. */
#pragma empty_line
#pragma empty_line
/* Define if C99 functions or macros in <math.h> should be imported in
   <tr1/cmath> in namespace std::tr1. */
#pragma empty_line
#pragma empty_line
/* Define if C99 types in <stdint.h> should be imported in <tr1/cstdint> in
   namespace std::tr1. */
#pragma empty_line
#pragma empty_line
/* Defined if clock_gettime has monotonic clock support. */
/* #undef _GLIBCXX_USE_CLOCK_MONOTONIC */
#pragma empty_line
/* Defined if clock_gettime has realtime clock support. */
/* #undef _GLIBCXX_USE_CLOCK_REALTIME */
#pragma empty_line
/* Define if ISO/IEC TR 24733 decimal floating point types are supported on
   this host. */
/* #undef _GLIBCXX_USE_DECIMAL_FLOAT */
#pragma empty_line
/* Defined if gettimeofday is available. */
#pragma empty_line
#pragma empty_line
/* Define if LFS support is available. */
#pragma empty_line
#pragma empty_line
/* Define if code specialized for long long should be used. */
#pragma empty_line
#pragma empty_line
/* Defined if nanosleep is available. */
/* #undef _GLIBCXX_USE_NANOSLEEP */
#pragma empty_line
/* Define if NLS translations are to be used. */
/* #undef _GLIBCXX_USE_NLS */
#pragma empty_line
/* Define if /dev/random and /dev/urandom are available for the random_device
   of TR1 (Chapter 5.1). */
#pragma empty_line
#pragma empty_line
/* Defined if sched_yield is available. */
/* #undef _GLIBCXX_USE_SCHED_YIELD */
#pragma empty_line
/* Define if code specialized for wchar_t should be used. */
#pragma line 43 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath" 2 3
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 1 3
// The  -*- C++ -*- type traits classes for internal use in libstdc++
#pragma empty_line
// Copyright (C) 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2009, 2010
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file cpp_type_traits.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 */
#pragma empty_line
// Written by Gabriel Dos Reis <dosreis@cmla.ens-cachan.fr>
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 36 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
//
// This file provides some compile-time information about various types.
// These representations were designed, on purpose, to be constant-expressions
// and not types as found in <bits/type_traits.h>.  In particular, they
// can be used in control structures and the optimizer hopefully will do
// the obvious thing.
//
// Why integral expressions, and not functions nor types?
// Firstly, these compile-time entities are used as template-arguments
// so function return values won't work:  We need compile-time entities.
// We're left with types and constant  integral expressions.
// Secondly, from the point of view of ease of use, type-based compile-time
// information is -not- *that* convenient.  On has to write lots of
// overloaded functions and to hope that the compiler will select the right
// one. As a net effect, the overall structure isn't very clear at first
// glance.
// Thirdly, partial ordering and overload resolution (of function templates)
// is highly costly in terms of compiler-resource.  It is a Good Thing to
// keep these resource consumption as least as possible.
//
// See valarray_array.h for a case use.
//
// -- Gaby (dosreis@cmla.ens-cachan.fr) 2000-03-06.
//
// Update 2005: types are also provided and <bits/type_traits.h> has been
// removed.
//
#pragma empty_line
// Forward declaration hack, should really include this from somewhere.
namespace __gnu_cxx {
#pragma empty_line
  template<typename _Iterator, typename _Container>
    class __normal_iterator;
#pragma empty_line
}
#pragma empty_line
namespace std {
#pragma empty_line
  struct __true_type { };
  struct __false_type { };
#pragma empty_line
  template<bool>
    struct __truth_type
    { typedef __false_type __type; };
#pragma empty_line
  template<>
    struct __truth_type<true>
    { typedef __true_type __type; };
#pragma empty_line
  // N.B. The conversions to bool are needed due to the issue
  // explained in c++/19404.
  template<class _Sp, class _Tp>
    struct __traitor
    {
      enum { __value = bool(_Sp::__value) || bool(_Tp::__value) };
      typedef typename __truth_type<__value>::__type __type;
    };
#pragma empty_line
  // Compare for equality of types.
  template<typename, typename>
    struct __are_same
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  template<typename _Tp>
    struct __are_same<_Tp, _Tp>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  // Holds if the template-argument is a void type.
  template<typename _Tp>
    struct __is_void
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  template<>
    struct __is_void<void>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  //
  // Integer types
  //
  template<typename _Tp>
    struct __is_integer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  // Thirteen specializations (yes there are eleven standard integer
  // types; <em>long long</em> and <em>unsigned long long</em> are
  // supported as extensions)
  template<>
    struct __is_integer<bool>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
  template<>
    struct __is_integer<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma line 193 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 3
  template<>
    struct __is_integer<short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<unsigned short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<unsigned int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<unsigned long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_integer<unsigned long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  //
  // Floating point types
  //
  template<typename _Tp>
    struct __is_floating
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  // three specializations (float, double and 'long double')
  template<>
    struct __is_floating<float>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_floating<double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_floating<long double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  //
  // Pointer types
  //
  template<typename _Tp>
    struct __is_pointer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  template<typename _Tp>
    struct __is_pointer<_Tp*>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  //
  // Normal iterator type
  //
  template<typename _Tp>
    struct __is_normal_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  template<typename _Iterator, typename _Container>
    struct __is_normal_iterator< __gnu_cxx::__normal_iterator<_Iterator,
             _Container> >
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  //
  // An arithmetic type is an integer type or a floating point type
  //
  template<typename _Tp>
    struct __is_arithmetic
    : public __traitor<__is_integer<_Tp>, __is_floating<_Tp> >
    { };
#pragma empty_line
  //
  // A fundamental type is `void' or and arithmetic type
  //
  template<typename _Tp>
    struct __is_fundamental
    : public __traitor<__is_void<_Tp>, __is_arithmetic<_Tp> >
    { };
#pragma empty_line
  //
  // A scalar type is an arithmetic type or a pointer type
  // 
  template<typename _Tp>
    struct __is_scalar
    : public __traitor<__is_arithmetic<_Tp>, __is_pointer<_Tp> >
    { };
#pragma empty_line
  //
  // For use in std::copy and std::find overloads for streambuf iterators.
  //
  template<typename _Tp>
    struct __is_char
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  template<>
    struct __is_char<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
  template<>
    struct __is_char<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
#pragma empty_line
  template<typename _Tp>
    struct __is_byte
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma empty_line
  template<>
    struct __is_byte<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_byte<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  template<>
    struct __is_byte<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
#pragma empty_line
  //
  // Move iterator type
  //
  template<typename _Tp>
    struct __is_move_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
#pragma line 416 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 3
  template<typename _Tp>
    class __is_iterator_helper
    {
      typedef char __one;
      typedef struct { char __arr[2]; } __two;
#pragma empty_line
      template<typename _Up>
        struct _Wrap_type
 { };
#pragma empty_line
      template<typename _Up>
        static __one __test(_Wrap_type<typename _Up::iterator_category>*);
#pragma empty_line
      template<typename _Up>
        static __two __test(...);
#pragma empty_line
    public:
      static const bool __value = (sizeof(__test<_Tp>(0)) == 1
       || __is_pointer<_Tp>::__value);
    };
#pragma empty_line
  template<typename _Tp>
    struct __is_iterator
    {
      enum { __value = __is_iterator_helper<_Tp>::__value };
      typedef typename __truth_type<__value>::__type __type;
    };
#pragma empty_line
}
#pragma line 44 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath" 2 3
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/type_traits.h" 1 3
// -*- C++ -*-
#pragma empty_line
// Copyright (C) 2005, 2006, 2007, 2009 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the terms
// of the GNU General Public License as published by the Free Software
// Foundation; either version 3, or (at your option) any later
// version.
#pragma empty_line
// This library is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file ext/type_traits.h
 *  This file is a GNU extension to the Standard C++ Library.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 32 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/type_traits.h" 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace __gnu_cxx {
#pragma empty_line
  // Define a nested type if some predicate holds.
  template<bool, typename>
    struct __enable_if
    { };
#pragma empty_line
  template<typename _Tp>
    struct __enable_if<true, _Tp>
    { typedef _Tp __type; };
#pragma empty_line
#pragma empty_line
  // Conditional expression for types. If true, first, if false, second.
  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct __conditional_type
    { typedef _Iftrue __type; };
#pragma empty_line
  template<typename _Iftrue, typename _Iffalse>
    struct __conditional_type<false, _Iftrue, _Iffalse>
    { typedef _Iffalse __type; };
#pragma empty_line
#pragma empty_line
  // Given an integral builtin type, return the corresponding unsigned type.
  template<typename _Tp>
    struct __add_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;
#pragma empty_line
    public:
      typedef typename __if_type::__type __type;
    };
#pragma empty_line
  template<>
    struct __add_unsigned<char>
    { typedef unsigned char __type; };
#pragma empty_line
  template<>
    struct __add_unsigned<signed char>
    { typedef unsigned char __type; };
#pragma empty_line
  template<>
    struct __add_unsigned<short>
    { typedef unsigned short __type; };
#pragma empty_line
  template<>
    struct __add_unsigned<int>
    { typedef unsigned int __type; };
#pragma empty_line
  template<>
    struct __add_unsigned<long>
    { typedef unsigned long __type; };
#pragma empty_line
  template<>
    struct __add_unsigned<long long>
    { typedef unsigned long long __type; };
#pragma empty_line
  // Declare but don't define.
  template<>
    struct __add_unsigned<bool>;
#pragma empty_line
  template<>
    struct __add_unsigned<wchar_t>;
#pragma empty_line
#pragma empty_line
  // Given an integral builtin type, return the corresponding signed type.
  template<typename _Tp>
    struct __remove_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;
#pragma empty_line
    public:
      typedef typename __if_type::__type __type;
    };
#pragma empty_line
  template<>
    struct __remove_unsigned<char>
    { typedef signed char __type; };
#pragma empty_line
  template<>
    struct __remove_unsigned<unsigned char>
    { typedef signed char __type; };
#pragma empty_line
  template<>
    struct __remove_unsigned<unsigned short>
    { typedef short __type; };
#pragma empty_line
  template<>
    struct __remove_unsigned<unsigned int>
    { typedef int __type; };
#pragma empty_line
  template<>
    struct __remove_unsigned<unsigned long>
    { typedef long __type; };
#pragma empty_line
  template<>
    struct __remove_unsigned<unsigned long long>
    { typedef long long __type; };
#pragma empty_line
  // Declare but don't define.
  template<>
    struct __remove_unsigned<bool>;
#pragma empty_line
  template<>
    struct __remove_unsigned<wchar_t>;
#pragma empty_line
#pragma empty_line
  // For use in string and vstring.
  template<typename _Type>
    inline bool
    __is_null_pointer(_Type* __ptr)
    { return __ptr == 0; }
#pragma empty_line
  template<typename _Type>
    inline bool
    __is_null_pointer(_Type)
    { return false; }
#pragma empty_line
#pragma empty_line
  // For complex and cmath
  template<typename _Tp, bool = std::__is_integer<_Tp>::__value>
    struct __promote
    { typedef double __type; };
#pragma empty_line
  template<typename _Tp>
    struct __promote<_Tp, false>
    { typedef _Tp __type; };
#pragma empty_line
  template<typename _Tp, typename _Up>
    struct __promote_2
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;
#pragma empty_line
    public:
      typedef __typeof__(__type1() + __type2()) __type;
    };
#pragma empty_line
  template<typename _Tp, typename _Up, typename _Vp>
    struct __promote_3
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;
      typedef typename __promote<_Vp>::__type __type3;
#pragma empty_line
    public:
      typedef __typeof__(__type1() + __type2() + __type3()) __type;
    };
#pragma empty_line
  template<typename _Tp, typename _Up, typename _Vp, typename _Wp>
    struct __promote_4
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;
      typedef typename __promote<_Vp>::__type __type3;
      typedef typename __promote<_Wp>::__type __type4;
#pragma empty_line
    public:
      typedef __typeof__(__type1() + __type2() + __type3() + __type4()) __type;
    };
#pragma empty_line
}
#pragma line 45 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath" 2 3
extern "C" {
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 10 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/_mingw_mac.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma line 18 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/_mingw_mac.h" 3
/* mingw.org's version macros: these make gcc to define
   MINGW32_SUPPORTS_MT_EH and to use the _CRT_MT global
   and the __mingwthr_key_dtor() function from the MinGW
   CRT in its private gthr-win32.h header. */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* MS does not prefix symbols by underscores for 64-bit.  */
#pragma empty_line
/* As we have to support older gcc version, which are using underscores
   as symbol prefix for x64, we have to check here for the user label
   prefix defined by gcc.  */
#pragma line 62 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/_mingw_mac.h" 3
/* Use alias for msvcr80 export of get/set_output_format.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Set VC specific compiler target macros.  */
#pragma line 10 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3
#pragma empty_line
#pragma empty_line
/* C/C++ specific language defines.  */
#pragma line 32 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
/* Note the extern. This is needed to work around GCC's
limitations in handling dllimport attribute.  */
#pragma line 147 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
/* Attribute `nonnull' was valid as of gcc 3.3.  We don't use GCC's
   variadiac macro facility, because variadic macros cause syntax
   errors with  --traditional-cpp.  */
#pragma line 225 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
/*  High byte is the major version, low byte is the minor. */
#pragma line 247 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
/*typedef int __int128 __attribute__ ((__mode__ (TI)));*/
#pragma line 277 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma line 674 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_directx.h" 1 3
#pragma line 674 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_ddk.h" 1 3
#pragma line 675 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3
#pragma line 13 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma pack(push,_CRT_PACKING)
#pragma empty_line
#pragma empty_line
extern "C" {
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  typedef __builtin_va_list __gnuc_va_list;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  typedef __gnuc_va_list va_list;
#pragma line 46 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3
/* Use GCC builtins */
#pragma line 99 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3
}
#pragma empty_line
#pragma empty_line
#pragma pack(pop)
#pragma line 277 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma pack(push,_CRT_PACKING)
#pragma line 316 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
/* We have to define _DLL for gcc based mingw version. This define is set
   by VC, when DLL-based runtime is used. So, gcc based runtime just have
   DLL-base runtime, therefore this define has to be set.
   As our headers are possibly used by windows compiler having a static
   C-runtime, we make this definition gnu compiler specific here.  */
#pragma line 370 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef unsigned long long size_t;
#pragma line 380 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long ssize_t;
#pragma line 392 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long intptr_t;
#pragma line 405 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef unsigned long long uintptr_t;
#pragma line 418 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long ptrdiff_t;
#pragma line 436 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
typedef unsigned short wint_t;
typedef unsigned short wctype_t;
#pragma line 456 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
typedef int errno_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef long __time32_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
__extension__ typedef long long __time64_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __time64_t time_t;
#pragma line 518 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
/* _dowildcard is an int that controls the globbing of the command line.
 * The MinGW32 (mingw.org) runtime calls it _CRT_glob, so we are adding
 * a compatibility definition here:  you can use either of _CRT_glob or
 * _dowildcard .
 * If _dowildcard is non-zero, the command line will be globbed:  *.*
 * will be expanded to be all files in the startup directory.
 * In the mingw-w64 library a _dowildcard variable is defined as being
 * 0, therefore command line globbing is DISABLED by default. To turn it
 * on and to leave wildcard command line processing MS's globbing code,
 * include a line in one of your source modules defining _dowildcard and
 * setting it to -1, like so:
 * int _dowildcard = -1;
 */
#pragma line 605 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
/* MSVC-isms: */
#pragma empty_line
struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct *pthreadlocinfo;
typedef struct threadmbcinfostruct *pthreadmbcinfo;
struct __lc_time_data;
#pragma empty_line
typedef struct localeinfo_struct {
  pthreadlocinfo locinfo;
  pthreadmbcinfo mbcinfo;
} _locale_tstruct,*_locale_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef struct tagLC_ID {
  unsigned short wLanguage;
  unsigned short wCountry;
  unsigned short wCodePage;
} LC_ID,*LPLC_ID;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef struct threadlocaleinfostruct {
  int refcount;
  unsigned int lc_codepage;
  unsigned int lc_collate_cp;
  unsigned long lc_handle[6];
  LC_ID lc_id[6];
  struct {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
  } lc_category[6];
  int lc_clike;
  int mb_cur_max;
  int *lconv_intl_refcount;
  int *lconv_num_refcount;
  int *lconv_mon_refcount;
  struct lconv *lconv;
  int *ctype1_refcount;
  unsigned short *ctype1;
  const unsigned short *pctype;
  const unsigned char *pclmap;
  const unsigned char *pcumap;
  struct __lc_time_data *lc_time_curr;
} threadlocinfo;
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern "C" {
#pragma empty_line
#pragma empty_line
/* mingw-w64 specific functions: */
const char *__mingw_get_crt_info (void);
#pragma empty_line
#pragma empty_line
}
#pragma empty_line
#pragma empty_line
#pragma pack(pop)
#pragma line 12 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 2 3
#pragma empty_line
#pragma empty_line
struct _exception;
#pragma empty_line
#pragma pack(push,_CRT_PACKING)
#pragma line 55 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
/* See also float.h  */
#pragma empty_line
#pragma empty_line
/* IEEE 754 classication */
#pragma line 75 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
extern "C" {
#pragma empty_line
#pragma empty_line
#pragma empty_line
  extern double * __imp__HUGE;
#pragma line 91 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  struct _exception {
    int type;
    const char *name;
    double arg1;
    double arg2;
    double retval;
  };
#pragma empty_line
  void __mingw_raise_matherr (int typ, const char *name, double a1, double a2,
         double rslt);
  void __mingw_setusermatherr (int ( *)(struct _exception *));
  __attribute__ ((__dllimport__)) void __setusermatherr(int ( *)(struct _exception *));
#pragma empty_line
#pragma empty_line
#pragma empty_line
  double sin(double _X);
  double cos(double _X);
  double tan(double _X);
  double sinh(double _X);
  double cosh(double _X);
  double tanh(double _X);
  double asin(double _X);
  double acos(double _X);
  double atan(double _X);
  double atan2(double _Y,double _X);
  double exp(double _X);
  double log(double _X);
  double log10(double _X);
  double pow(double _X,double _Y);
  double sqrt(double _X);
  double ceil(double _X);
  double floor(double _X);
  double fabs(double _X);
#pragma line 135 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  double ldexp(double _X,int _Y);
  double frexp(double _X,int *_Y);
  double modf(double _X,double *_Y);
  double fmod(double _X,double _Y);
#pragma empty_line
  void sincos (double __x, double *p_sin, double *p_cos);
  void sincosl (long double __x, long double *p_sin, long double *p_cos);
  void sincosf (float __x, float *p_sin, float *p_cos);
#pragma empty_line
#pragma empty_line
#pragma empty_line
  int abs(int _X);
  long labs(long _X);
#pragma empty_line
#pragma empty_line
#pragma empty_line
  double atof(const char *_String);
  double _atof_l(const char *_String,_locale_t _Locale);
#pragma line 162 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  struct _complex {
    double x;
    double y;
  };
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) double _cabs(struct _complex _ComplexA);
  double _hypot(double _X,double _Y);
  __attribute__ ((__dllimport__)) double _j0(double _X);
  __attribute__ ((__dllimport__)) double _j1(double _X);
  __attribute__ ((__dllimport__)) double _jn(int _X,double _Y);
  __attribute__ ((__dllimport__)) double _y0(double _X);
  __attribute__ ((__dllimport__)) double _y1(double _X);
  __attribute__ ((__dllimport__)) double _yn(int _X,double _Y);
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) int _matherr (struct _exception *);
#pragma empty_line
#pragma empty_line
/* These are also declared in Mingw float.h; needed here as well to work 
   around GCC build issues.  */
/* BEGIN FLOAT.H COPY */
/*
 * IEEE recommended functions
 */
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) double _chgsign (double _X);
  __attribute__ ((__dllimport__)) double _copysign (double _Number,double _Sign);
  __attribute__ ((__dllimport__)) double _logb (double);
  __attribute__ ((__dllimport__)) double _nextafter (double, double);
  __attribute__ ((__dllimport__)) double _scalb (double, long);
  __attribute__ ((__dllimport__)) int _finite (double);
  __attribute__ ((__dllimport__)) int _fpclass (double);
  __attribute__ ((__dllimport__)) int _isnan (double);
#pragma empty_line
#pragma empty_line
/* END FLOAT.H COPY */
#pragma empty_line
#pragma empty_line
#pragma empty_line
__attribute__ ((__dllimport__)) double j0 (double) ;
__attribute__ ((__dllimport__)) double j1 (double) ;
__attribute__ ((__dllimport__)) double jn (int, double) ;
__attribute__ ((__dllimport__)) double y0 (double) ;
__attribute__ ((__dllimport__)) double y1 (double) ;
__attribute__ ((__dllimport__)) double yn (int, double) ;
#pragma empty_line
__attribute__ ((__dllimport__)) double chgsign (double);
/*
 * scalb() is a GCC built-in.
 * Exclude this _scalb() stub; the semantics are incompatible
 * with the built-in implementation.
 *
_CRTIMP double __cdecl scalb (double, long);
 *
 */
  __attribute__ ((__dllimport__)) int finite (double);
  __attribute__ ((__dllimport__)) int fpclass (double);
#pragma line 260 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
/* Use the compiler's builtin define for FLT_EVAL_METHOD to
   set float_t and double_t.  */
#pragma empty_line
#pragma empty_line
typedef float float_t;
typedef double double_t;
#pragma line 278 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
/* 7.12.3.1 */
/*
   Return values for fpclassify.
   These are based on Intel x87 fpu condition codes
   in the high byte of status word and differ from
   the return values for MS IEEE 754 extension _fpclass()
*/
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* 0x0200 is signbit mask */
#pragma empty_line
/*
  We can't inline float or double, because we want to ensure truncation
  to semantic type before classification. 
  (A normal long double value might become subnormal when 
  converted to double, and zero when converted to float.)
*/
#pragma empty_line
  extern int __fpclassifyl (long double);
  extern int __fpclassifyf (float);
  extern int __fpclassify (double);
#pragma line 325 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
/* 7.12.3.2 */
#pragma empty_line
#pragma empty_line
/* 7.12.3.3 */
#pragma empty_line
#pragma empty_line
/* 7.12.3.4 */
/* We don't need to worry about truncation here:
   A NaN stays a NaN. */
#pragma empty_line
  extern int __isnan (double);
  extern int __isnanf (float);
  extern int __isnanl (long double);
#pragma line 372 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
/* 7.12.3.5 */
#pragma empty_line
#pragma empty_line
/* 7.12.3.6 The signbit macro */
  extern int __signbit (double);
  extern int __signbitf (float);
  extern int __signbitl (long double);
#pragma line 403 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
/* 7.12.4 Trigonometric functions: Double in C89 */
  extern float sinf(float _X);
  extern long double sinl(long double);
#pragma empty_line
  extern float cosf(float _X);
  extern long double cosl(long double);
#pragma empty_line
  extern float tanf(float _X);
  extern long double tanl(long double);
  extern float asinf(float _X);
  extern long double asinl(long double);
#pragma empty_line
  extern float acosf (float);
  extern long double acosl (long double);
#pragma empty_line
  extern float atanf (float);
  extern long double atanl (long double);
#pragma empty_line
  extern float atan2f (float, float);
  extern long double atan2l (long double, long double);
#pragma empty_line
/* 7.12.5 Hyperbolic functions: Double in C89  */
  extern float sinhf(float _X);
#pragma empty_line
#pragma empty_line
#pragma empty_line
  extern long double sinhl(long double);
#pragma empty_line
  extern float coshf(float _X);
#pragma empty_line
#pragma empty_line
#pragma empty_line
  extern long double coshl(long double);
#pragma empty_line
  extern float tanhf(float _X);
#pragma empty_line
#pragma empty_line
#pragma empty_line
  extern long double tanhl(long double);
#pragma empty_line
/* Inverse hyperbolic trig functions  */
/* 7.12.5.1 */
  extern double acosh (double);
  extern float acoshf (float);
  extern long double acoshl (long double);
#pragma empty_line
/* 7.12.5.2 */
  extern double asinh (double);
  extern float asinhf (float);
  extern long double asinhl (long double);
#pragma empty_line
/* 7.12.5.3 */
  extern double atanh (double);
  extern float atanhf (float);
  extern long double atanhl (long double);
#pragma empty_line
/* Exponentials and logarithms  */
/* 7.12.6.1 Double in C89 */
  extern float expf(float _X);
#pragma empty_line
#pragma empty_line
#pragma empty_line
  extern long double expl(long double);
#pragma empty_line
/* 7.12.6.2 */
  extern double exp2(double);
  extern float exp2f(float);
  extern long double exp2l(long double);
#pragma empty_line
/* 7.12.6.3 The expm1 functions */
/* TODO: These could be inlined */
  extern double expm1(double);
  extern float expm1f(float);
  extern long double expm1l(long double);
#pragma empty_line
/* 7.12.6.4 Double in C89 */
  extern float frexpf(float _X,int *_Y);
#pragma empty_line
#pragma empty_line
#pragma empty_line
  extern long double frexpl(long double,int *);
#pragma empty_line
/* 7.12.6.5 */
#pragma empty_line
#pragma empty_line
  extern int ilogb (double);
  extern int ilogbf (float);
  extern int ilogbl (long double);
#pragma empty_line
/* 7.12.6.6  Double in C89 */
  extern float ldexpf(float _X,int _Y);
#pragma empty_line
#pragma empty_line
#pragma empty_line
  extern long double ldexpl (long double, int);
#pragma empty_line
/* 7.12.6.7 Double in C89 */
  extern float logf (float);
  extern long double logl(long double);
#pragma empty_line
/* 7.12.6.8 Double in C89 */
  extern float log10f (float);
  extern long double log10l(long double);
#pragma empty_line
/* 7.12.6.9 */
  extern double log1p(double);
  extern float log1pf(float);
  extern long double log1pl(long double);
#pragma empty_line
/* 7.12.6.10 */
  extern double log2 (double);
  extern float log2f (float);
  extern long double log2l (long double);
#pragma empty_line
/* 7.12.6.11 */
  extern double logb (double);
  extern float logbf (float);
  extern long double logbl (long double);
#pragma empty_line
/* Inline versions.  GCC-4.0+ can do a better fast-math optimization
   with __builtins. */
#pragma line 552 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
/* 7.12.6.12  Double in C89 */
  extern float modff (float, float*);
  extern long double modfl (long double, long double*);
#pragma empty_line
/* 7.12.6.13 */
  extern double scalbn (double, int);
  extern float scalbnf (float, int);
  extern long double scalbnl (long double, int);
#pragma empty_line
  extern double scalbln (double, long);
  extern float scalblnf (float, long);
  extern long double scalblnl (long double, long);
#pragma empty_line
/* 7.12.7.1 */
/* Implementations adapted from Cephes versions */
  extern double cbrt (double);
  extern float cbrtf (float);
  extern long double cbrtl (long double);
#pragma empty_line
/* 7.12.7.2 The fabs functions: Double in C89 */
  extern float fabsf (float x);
#pragma line 583 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern long double fabsl (long double);
#pragma line 594 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
/* 7.12.7.3  */
  extern double hypot (double, double) ; /* in libmoldname.a */
  extern float hypotf (float x, float y);
#pragma empty_line
#pragma empty_line
#pragma empty_line
  extern long double hypotl (long double, long double);
#pragma empty_line
/* 7.12.7.4 The pow functions. Double in C89 */
  extern float powf(float _X,float _Y);
#pragma empty_line
#pragma empty_line
#pragma empty_line
  extern long double powl (long double, long double);
#pragma empty_line
/* 7.12.7.5 The sqrt functions. Double in C89. */
  extern float sqrtf (float);
  extern long double sqrtl(long double);
#pragma empty_line
/* 7.12.8.1 The erf functions  */
  extern double erf (double);
  extern float erff (float);
  extern long double erfl (long double);
#pragma empty_line
/* 7.12.8.2 The erfc functions  */
  extern double erfc (double);
  extern float erfcf (float);
  extern long double erfcl (long double);
#pragma empty_line
/* 7.12.8.3 The lgamma functions */
  extern double lgamma (double);
  extern float lgammaf (float);
  extern long double lgammal (long double);
#pragma empty_line
/* 7.12.8.4 The tgamma functions */
  extern double tgamma (double);
  extern float tgammaf (float);
  extern long double tgammal (long double);
#pragma empty_line
/* 7.12.9.1 Double in C89 */
  extern float ceilf (float);
  extern long double ceill (long double);
#pragma empty_line
/* 7.12.9.2 Double in C89 */
  extern float floorf (float);
  extern long double floorl (long double);
#pragma empty_line
/* 7.12.9.3 */
  extern double nearbyint ( double);
  extern float nearbyintf (float);
  extern long double nearbyintl (long double);
#pragma empty_line
/* 7.12.9.4 */
/* round, using fpu control word settings */
extern double rint (double);
extern float rintf (float);
extern long double rintl (long double);
#pragma empty_line
/* 7.12.9.5 */
extern long lrint (double);
extern long lrintf (float);
extern long lrintl (long double);
#pragma empty_line
__extension__ long long llrint (double);
__extension__ long long llrintf (float);
__extension__ long long llrintl (long double);
#pragma empty_line
/* Inline versions of above. 
   GCC 4.0+ can do a better fast-math job with __builtins. */
#pragma line 737 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
/* 7.12.9.6 */
/* round away from zero, regardless of fpu control word settings */
  extern double round (double);
  extern float roundf (float);
  extern long double roundl (long double);
#pragma empty_line
/* 7.12.9.7  */
  extern long lround (double);
  extern long lroundf (float);
  extern long lroundl (long double);
  __extension__ long long llround (double);
  __extension__ long long llroundf (float);
  __extension__ long long llroundl (long double);
#pragma empty_line
/* 7.12.9.8 */
/* round towards zero, regardless of fpu control word settings */
  extern double trunc (double);
  extern float truncf (float);
  extern long double truncl (long double);
#pragma empty_line
/* 7.12.10.1 Double in C89 */
  extern float fmodf (float, float);
  extern long double fmodl (long double, long double);
#pragma empty_line
/* 7.12.10.2 */
  extern double remainder (double, double);
  extern float remainderf (float, float);
  extern long double remainderl (long double, long double);
#pragma empty_line
/* 7.12.10.3 */
  extern double remquo(double, double, int *);
  extern float remquof(float, float, int *);
  extern long double remquol(long double, long double, int *);
#pragma empty_line
/* 7.12.11.1 */
  extern double copysign (double, double); /* in libmoldname.a */
  extern float copysignf (float, float);
  extern long double copysignl (long double, long double);
#pragma empty_line
/* 7.12.11.2 Return a NaN */
  extern double nan(const char *tagp);
  extern float nanf(const char *tagp);
  extern long double nanl(const char *tagp);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* 7.12.11.3 */
  extern double nextafter (double, double); /* in libmoldname.a */
  extern float nextafterf (float, float);
  extern long double nextafterl (long double, long double);
#pragma empty_line
/* 7.12.11.4 The nexttoward functions */
  extern double nexttoward (double, long double);
  extern float nexttowardf (float, long double);
  extern long double nexttowardl (long double, long double);
#pragma empty_line
/* 7.12.12.1 */
/*  x > y ? (x - y) : 0.0  */
  extern double fdim (double x, double y);
  extern float fdimf (float x, float y);
  extern long double fdiml (long double x, long double y);
#pragma empty_line
/* fmax and fmin.
   NaN arguments are treated as missing data: if one argument is a NaN
   and the other numeric, then these functions choose the numeric
   value. */
#pragma empty_line
/* 7.12.12.2 */
  extern double fmax (double, double);
  extern float fmaxf (float, float);
  extern long double fmaxl (long double, long double);
#pragma empty_line
/* 7.12.12.3 */
  extern double fmin (double, double);
  extern float fminf (float, float);
  extern long double fminl (long double, long double);
#pragma empty_line
/* 7.12.13.1 */
/* return x * y + z as a ternary op */
  extern double fma (double, double, double);
  extern float fmaf (float, float, float);
  extern long double fmal (long double, long double, long double);
#pragma empty_line
/* 7.12.14 */
/* 
 *  With these functions, comparisons involving quiet NaNs set the FP
 *  condition code to "unordered".  The IEEE floating-point spec
 *  dictates that the result of floating-point comparisons should be
 *  false whenever a NaN is involved, with the exception of the != op, 
 *  which always returns true: yes, (NaN != NaN) is true).
 */
#pragma line 871 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
   __attribute__ ((__dllimport__)) float _copysignf (float _Number,float _Sign);
   __attribute__ ((__dllimport__)) float _chgsignf (float _X);
   __attribute__ ((__dllimport__)) float _logbf(float _X);
   __attribute__ ((__dllimport__)) float _nextafterf(float _X,float _Y);
   __attribute__ ((__dllimport__)) int _finitef(float _X);
   __attribute__ ((__dllimport__)) int _isnanf(float _X);
   __attribute__ ((__dllimport__)) int _fpclassf(float _X);
#pragma empty_line
#pragma empty_line
#pragma empty_line
   extern long double _chgsignl (long double);
#pragma line 893 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
}
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma pack(pop)
#pragma line 46 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath" 2 3
}
#pragma line 46 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath"

#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
// Get rid of those macros defined in <math.h> in lieu of real functions.
#pragma line 76 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath" 3
namespace std {
#pragma empty_line
  // Forward declaration of a helper function.  This really should be
  // an `exported' forward declaration.
  template<typename _Tp>
    _Tp __cmath_power(_Tp, unsigned int);
#pragma empty_line
  template<typename _Tp>
    inline _Tp
    __pow_helper(_Tp __x, int __n)
    {
      return __n < 0
        ? _Tp(1)/__cmath_power(__x, -__n)
        : __cmath_power(__x, __n);
    }
#pragma empty_line
  inline double
  abs(double __x)
  { return __builtin_fabs(__x); }
#pragma empty_line
  inline float
  abs(float __x)
  { return __builtin_fabsf(__x); }
#pragma empty_line
  inline long double
  abs(long double __x)
  { return __builtin_fabsl(__x); }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    abs(_Tp __x)
    { return __builtin_fabs(__x); }
#pragma empty_line
  using ::acos;
#pragma empty_line
  inline float
  acos(float __x)
  { return __builtin_acosf(__x); }
#pragma empty_line
  inline long double
  acos(long double __x)
  { return __builtin_acosl(__x); }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    acos(_Tp __x)
    { return __builtin_acos(__x); }
#pragma empty_line
  using ::asin;
#pragma empty_line
  inline float
  asin(float __x)
  { return __builtin_asinf(__x); }
#pragma empty_line
  inline long double
  asin(long double __x)
  { return __builtin_asinl(__x); }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    asin(_Tp __x)
    { return __builtin_asin(__x); }
#pragma empty_line
  using ::atan;
#pragma empty_line
  inline float
  atan(float __x)
  { return __builtin_atanf(__x); }
#pragma empty_line
  inline long double
  atan(long double __x)
  { return __builtin_atanl(__x); }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    atan(_Tp __x)
    { return __builtin_atan(__x); }
#pragma empty_line
  using ::atan2;
#pragma empty_line
  inline float
  atan2(float __y, float __x)
  { return __builtin_atan2f(__y, __x); }
#pragma empty_line
  inline long double
  atan2(long double __y, long double __x)
  { return __builtin_atan2l(__y, __x); }
#pragma empty_line
  template<typename _Tp, typename _Up>
    inline
    typename __gnu_cxx::__promote_2<
    typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value
        && __is_arithmetic<_Up>::__value,
        _Tp>::__type, _Up>::__type
    atan2(_Tp __y, _Up __x)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return atan2(__type(__y), __type(__x));
    }
#pragma empty_line
  using ::ceil;
#pragma empty_line
  inline float
  ceil(float __x)
  { return __builtin_ceilf(__x); }
#pragma empty_line
  inline long double
  ceil(long double __x)
  { return __builtin_ceill(__x); }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    ceil(_Tp __x)
    { return __builtin_ceil(__x); }
#pragma empty_line
  using ::cos;
#pragma empty_line
  inline float
  cos(float __x)
  { return __builtin_cosf(__x); }
#pragma empty_line
  inline long double
  cos(long double __x)
  { return __builtin_cosl(__x); }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    cos(_Tp __x)
    { return __builtin_cos(__x); }
#pragma empty_line
  using ::cosh;
#pragma empty_line
  inline float
  cosh(float __x)
  { return __builtin_coshf(__x); }
#pragma empty_line
  inline long double
  cosh(long double __x)
  { return __builtin_coshl(__x); }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    cosh(_Tp __x)
    { return __builtin_cosh(__x); }
#pragma empty_line
  using ::exp;
#pragma empty_line
  inline float
  exp(float __x)
  { return __builtin_expf(__x); }
#pragma empty_line
  inline long double
  exp(long double __x)
  { return __builtin_expl(__x); }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    exp(_Tp __x)
    { return __builtin_exp(__x); }
#pragma empty_line
  using ::fabs;
#pragma empty_line
  inline float
  fabs(float __x)
  { return __builtin_fabsf(__x); }
#pragma empty_line
  inline long double
  fabs(long double __x)
  { return __builtin_fabsl(__x); }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    fabs(_Tp __x)
    { return __builtin_fabs(__x); }
#pragma empty_line
  using ::floor;
#pragma empty_line
  inline float
  floor(float __x)
  { return __builtin_floorf(__x); }
#pragma empty_line
  inline long double
  floor(long double __x)
  { return __builtin_floorl(__x); }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    floor(_Tp __x)
    { return __builtin_floor(__x); }
#pragma empty_line
  using ::fmod;
#pragma empty_line
  inline float
  fmod(float __x, float __y)
  { return __builtin_fmodf(__x, __y); }
#pragma empty_line
  inline long double
  fmod(long double __x, long double __y)
  { return __builtin_fmodl(__x, __y); }
#pragma empty_line
  using ::frexp;
#pragma empty_line
  inline float
  frexp(float __x, int* __exp)
  { return __builtin_frexpf(__x, __exp); }
#pragma empty_line
  inline long double
  frexp(long double __x, int* __exp)
  { return __builtin_frexpl(__x, __exp); }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    frexp(_Tp __x, int* __exp)
    { return __builtin_frexp(__x, __exp); }
#pragma empty_line
  using ::ldexp;
#pragma empty_line
  inline float
  ldexp(float __x, int __exp)
  { return __builtin_ldexpf(__x, __exp); }
#pragma empty_line
  inline long double
  ldexp(long double __x, int __exp)
  { return __builtin_ldexpl(__x, __exp); }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
  ldexp(_Tp __x, int __exp)
  { return __builtin_ldexp(__x, __exp); }
#pragma empty_line
  using ::log;
#pragma empty_line
  inline float
  log(float __x)
  { return __builtin_logf(__x); }
#pragma empty_line
  inline long double
  log(long double __x)
  { return __builtin_logl(__x); }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    log(_Tp __x)
    { return __builtin_log(__x); }
#pragma empty_line
  using ::log10;
#pragma empty_line
  inline float
  log10(float __x)
  { return __builtin_log10f(__x); }
#pragma empty_line
  inline long double
  log10(long double __x)
  { return __builtin_log10l(__x); }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    log10(_Tp __x)
    { return __builtin_log10(__x); }
#pragma empty_line
  using ::modf;
#pragma empty_line
  inline float
  modf(float __x, float* __iptr)
  { return __builtin_modff(__x, __iptr); }
#pragma empty_line
  inline long double
  modf(long double __x, long double* __iptr)
  { return __builtin_modfl(__x, __iptr); }
#pragma empty_line
  using ::pow;
#pragma empty_line
  inline float
  pow(float __x, float __y)
  { return __builtin_powf(__x, __y); }
#pragma empty_line
  inline long double
  pow(long double __x, long double __y)
  { return __builtin_powl(__x, __y); }
#pragma empty_line
#pragma empty_line
  // _GLIBCXX_RESOLVE_LIB_DEFECTS
  // DR 550. What should the return type of pow(float,int) be?
  inline double
  pow(double __x, int __i)
  { return __builtin_powi(__x, __i); }
#pragma empty_line
  inline float
  pow(float __x, int __n)
  { return __builtin_powif(__x, __n); }
#pragma empty_line
  inline long double
  pow(long double __x, int __n)
  { return __builtin_powil(__x, __n); }
#pragma empty_line
#pragma empty_line
  template<typename _Tp, typename _Up>
    inline
    typename __gnu_cxx::__promote_2<
    typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value
        && __is_arithmetic<_Up>::__value,
        _Tp>::__type, _Up>::__type
    pow(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return pow(__type(__x), __type(__y));
    }
#pragma empty_line
  using ::sin;
#pragma empty_line
  inline float
  sin(float __x)
  { return __builtin_sinf(__x); }
#pragma empty_line
  inline long double
  sin(long double __x)
  { return __builtin_sinl(__x); }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    sin(_Tp __x)
    { return __builtin_sin(__x); }
#pragma empty_line
  using ::sinh;
#pragma empty_line
  inline float
  sinh(float __x)
  { return __builtin_sinhf(__x); }
#pragma empty_line
  inline long double
  sinh(long double __x)
  { return __builtin_sinhl(__x); }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    sinh(_Tp __x)
    { return __builtin_sinh(__x); }
#pragma empty_line
  using ::sqrt;
#pragma empty_line
  inline float
  sqrt(float __x)
  { return __builtin_sqrtf(__x); }
#pragma empty_line
  inline long double
  sqrt(long double __x)
  { return __builtin_sqrtl(__x); }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    sqrt(_Tp __x)
    { return __builtin_sqrt(__x); }
#pragma empty_line
  using ::tan;
#pragma empty_line
  inline float
  tan(float __x)
  { return __builtin_tanf(__x); }
#pragma empty_line
  inline long double
  tan(long double __x)
  { return __builtin_tanl(__x); }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    tan(_Tp __x)
    { return __builtin_tan(__x); }
#pragma empty_line
  using ::tanh;
#pragma empty_line
  inline float
  tanh(float __x)
  { return __builtin_tanhf(__x); }
#pragma empty_line
  inline long double
  tanh(long double __x)
  { return __builtin_tanhl(__x); }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    tanh(_Tp __x)
    { return __builtin_tanh(__x); }
#pragma empty_line
}
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
// These are possible macros imported from C99-land.
#pragma line 497 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath" 3
namespace std {
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    fpclassify(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_fpclassify(0x0100, (0x0100 | 0x0400), 0x0400,
      (0x0400 | 0x4000), 0x4000, __type(__f));
    }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isfinite(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isfinite(__type(__f));
    }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isinf(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isinf(__type(__f));
    }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isnan(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isnan(__type(__f));
    }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isnormal(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isnormal(__type(__f));
    }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    signbit(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_signbit(__type(__f));
    }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isgreater(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isgreater(__type(__f1), __type(__f2));
    }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isgreaterequal(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isgreaterequal(__type(__f1), __type(__f2));
    }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isless(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isless(__type(__f1), __type(__f2));
    }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    islessequal(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_islessequal(__type(__f1), __type(__f2));
    }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    islessgreater(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_islessgreater(__type(__f1), __type(__f2));
    }
#pragma empty_line
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isunordered(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isunordered(__type(__f1), __type(__f2));
    }
#pragma empty_line
}
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cmath.tcc" 1 3
// -*- C++ -*- C math library.
#pragma empty_line
// Copyright (C) 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2009
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
// This file was written by Gabriel Dos Reis <gdr@codesourcery.com>
#pragma empty_line
/** @file cmath.tcc
 *  This is a Standard C++ Library file.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace std {
#pragma empty_line
  template<typename _Tp>
    inline _Tp
    __cmath_power(_Tp __x, unsigned int __n)
    {
      _Tp __y = __n % 2 ? __x : _Tp(1);
#pragma empty_line
      while (__n >>= 1)
        {
          __x = __x * __x;
          if (__n % 2)
            __y = __y * __x;
        }
#pragma empty_line
      return __y;
    }
#pragma empty_line
}
#pragma line 615 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath" 2 3
#pragma line 2 "jpet_geo/jpet_geo.h" 2
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma line 9 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw_print_push.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma empty_line
/* Undefine __mingw_<printf> macros.  */
#pragma line 11 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma pack(push,_CRT_PACKING)
#pragma empty_line
#pragma empty_line
extern "C" {
#pragma line 26 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
  };
  typedef struct _iobuf FILE;
#pragma line 84 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  typedef long _off_t;
#pragma empty_line
  typedef long off_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __extension__ typedef long long _off64_t;
#pragma empty_line
  __extension__ typedef long long off64_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) FILE * __iob_func(void);
#pragma line 120 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __extension__ typedef long long fpos_t;
#pragma line 157 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) int _filbuf(FILE *_File);
  __attribute__ ((__dllimport__)) int _flsbuf(int _Ch,FILE *_File);
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) FILE * _fsopen(const char *_Filename,const char *_Mode,int _ShFlag);
#pragma empty_line
  void clearerr(FILE *_File);
  int fclose(FILE *_File);
  __attribute__ ((__dllimport__)) int _fcloseall(void);
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) FILE * _fdopen(int _FileHandle,const char *_Mode);
#pragma empty_line
  int feof(FILE *_File);
  int ferror(FILE *_File);
  int fflush(FILE *_File);
  int fgetc(FILE *_File);
  __attribute__ ((__dllimport__)) int _fgetchar(void);
  int fgetpos(FILE * __restrict__ _File ,fpos_t * __restrict__ _Pos);
  char * fgets(char * __restrict__ _Buf,int _MaxCount,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int _fileno(FILE *_File);
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) char * _tempnam(const char *_DirName,const char *_FilePrefix);
  __attribute__ ((__dllimport__)) int _flushall(void);
  FILE * fopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode) ;
  FILE *fopen64(const char * __restrict__ filename,const char * __restrict__ mode);
  int fprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
  int fputc(int _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) int _fputchar(int _Ch);
  int fputs(const char * __restrict__ _Str,FILE * __restrict__ _File);
  size_t fread(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  FILE * freopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode,FILE * __restrict__ _File) ;
  int fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...) ;
  int _fscanf_l(FILE * __restrict__ _File,const char * __restrict__ _Format,_locale_t locale,...) ;
  int fsetpos(FILE *_File,const fpos_t *_Pos);
  int fseek(FILE *_File,long _Offset,int _Origin);
  int fseeko64(FILE* stream, _off64_t offset, int whence);
  long ftell(FILE *_File);
  _off64_t ftello64(FILE * stream);
  __extension__ int _fseeki64(FILE *_File,long long _Offset,int _Origin);
  __extension__ long long _ftelli64(FILE *_File);
  size_t fwrite(const void * __restrict__ _Str,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  int getc(FILE *_File);
  int getchar(void);
  __attribute__ ((__dllimport__)) int _getmaxstdio(void);
  char * gets(char *_Buffer) ;
  int _getw(FILE *_File);
#pragma empty_line
#pragma empty_line
  void perror(const char *_ErrMsg);
#pragma empty_line
  __attribute__ ((__dllimport__)) int _pclose(FILE *_File);
  __attribute__ ((__dllimport__)) FILE * _popen(const char *_Command,const char *_Mode);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  int printf(const char * __restrict__ _Format,...);
  int putc(int _Ch,FILE *_File);
  int putchar(int _Ch);
  int puts(const char *_Str);
  __attribute__ ((__dllimport__)) int _putw(int _Word,FILE *_File);
#pragma empty_line
#pragma empty_line
  int remove(const char *_Filename);
  int rename(const char *_OldFilename,const char *_NewFilename);
  __attribute__ ((__dllimport__)) int _unlink(const char *_Filename);
#pragma empty_line
  int unlink(const char *_Filename) ;
#pragma empty_line
#pragma empty_line
  void rewind(FILE *_File);
  __attribute__ ((__dllimport__)) int _rmtmp(void);
  int scanf(const char * __restrict__ _Format,...) ;
  int _scanf_l(const char * __restrict__ format,_locale_t locale,... ) ;
  void setbuf(FILE * __restrict__ _File,char * __restrict__ _Buffer) ;
  __attribute__ ((__dllimport__)) int _setmaxstdio(int _Max);
  __attribute__ ((__dllimport__)) unsigned int _set_output_format(unsigned int _Format);
  __attribute__ ((__dllimport__)) unsigned int _get_output_format(void);
  unsigned int __mingw_set_output_format(unsigned int _Format);
  unsigned int __mingw_get_output_format(void);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  int setvbuf(FILE * __restrict__ _File,char * __restrict__ _Buf,int _Mode,size_t _Size);
  __attribute__ ((__dllimport__)) int _scprintf(const char * __restrict__ _Format,...);
  int sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...) ;
  int _sscanf_l(const char * __restrict__ buffer,const char * __restrict__ format,_locale_t locale,...) ;
  __attribute__ ((__dllimport__)) int _snscanf(const char * __restrict__ _Src,size_t _MaxCount,const char * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _snscanf_l(const char * __restrict__ input,size_t length,const char * __restrict__ format,_locale_t locale,...) ;
  FILE * tmpfile(void) ;
  char * tmpnam(char *_Buffer);
  int ungetc(int _Ch,FILE *_File);
  int vfprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,va_list _ArgList);
  int vprintf(const char * __restrict__ _Format,va_list _ArgList);
#pragma empty_line
  /* Make sure macros are not defined.  */
  extern
    __attribute__((__format__ (gnu_printf, 3, 0))) __attribute__ ((__nonnull__ (3)))
    int __mingw_vsnprintf(char * __restrict__ _DstBuf,size_t _MaxCount,const char * __restrict__ _Format,
      va_list _ArgList);
  extern
    __attribute__((__format__ (gnu_printf, 3, 4))) __attribute__ ((__nonnull__ (3)))
    int __mingw_snprintf(char * __restrict__ s, size_t n, const char * __restrict__ format, ...);
  extern
    __attribute__((__format__ (gnu_printf, 1, 2))) __attribute__ ((__nonnull__ (1)))
    int __mingw_printf(const char * __restrict__ , ... ) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 1, 0))) __attribute__ ((__nonnull__ (1)))
    int __mingw_vprintf (const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
    int __mingw_fprintf (FILE * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
    int __mingw_vfprintf (FILE * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
    int __mingw_sprintf (char * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
    int __mingw_vsprintf (char * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
#pragma empty_line
  __attribute__ ((__dllimport__)) int _snprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _snprintf_l(char * __restrict__ buffer,size_t count,const char * __restrict__ format,_locale_t locale,...) ;
  __attribute__ ((__dllimport__)) int _vsnprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,va_list _Args) ;
  __attribute__ ((__dllimport__)) int _vsnprintf_l(char * __restrict__ buffer,size_t count,const char * __restrict__ format,_locale_t locale,va_list argptr) ;
  int sprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,...) ;
  int _sprintf_l(char * __restrict__ buffer,const char * __restrict__ format,_locale_t locale,...) ;
  int vsprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,va_list _Args) ;
#pragma empty_line
/* this is here to deal with software defining
 * vsnprintf as _vsnprintf, eg. libxml2.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  int vsnprintf(char * __restrict__ _DstBuf,size_t _MaxCount,const char * __restrict__ _Format,va_list _ArgList) ;
#pragma empty_line
  int snprintf(char * __restrict__ s, size_t n, const char * __restrict__ format, ...);
#pragma line 312 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  int vscanf(const char * __restrict__ Format, va_list argp);
  int vfscanf (FILE * __restrict__ fp, const char * __restrict__ Format,va_list argp);
  int vsscanf (const char * __restrict__ _Str,const char * __restrict__ Format,va_list argp);
#pragma empty_line
  __attribute__ ((__dllimport__)) int _vscprintf(const char * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _set_printf_count_output(int _Value);
  __attribute__ ((__dllimport__)) int _get_printf_count_output(void);
#pragma line 330 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) FILE * _wfsopen(const wchar_t *_Filename,const wchar_t *_Mode,int _ShFlag);
#pragma empty_line
#pragma empty_line
  wint_t fgetwc(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fgetwchar(void);
  wint_t fputwc(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fputwchar(wchar_t _Ch);
  wint_t getwc(FILE *_File);
  wint_t getwchar(void);
  wint_t putwc(wchar_t _Ch,FILE *_File);
  wint_t putwchar(wchar_t _Ch);
  wint_t ungetwc(wint_t _Ch,FILE *_File);
  wchar_t * fgetws(wchar_t * __restrict__ _Dst,int _SizeInWords,FILE * __restrict__ _File);
  int fputws(const wchar_t * __restrict__ _Str,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) wchar_t * _getws(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) int _putws(const wchar_t *_Str);
  int fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  int wprintf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _scwprintf(const wchar_t * __restrict__ _Format,...);
  int vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  int vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int swprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ , ...) ;
  __attribute__ ((__dllimport__)) int _swprintf_l(wchar_t * __restrict__ buffer,size_t count,const wchar_t * __restrict__ format,_locale_t locale,... ) ;
  __attribute__ ((__dllimport__)) int vswprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ ,va_list) ;
  __attribute__ ((__dllimport__)) int _swprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _snwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _vsnwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,va_list _Args) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  int snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...);
  int vsnwprintf (wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , va_list);
#pragma line 373 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  int vwscanf (const wchar_t * __restrict__ , va_list);
  int vfwscanf (FILE * __restrict__ ,const wchar_t * __restrict__ ,va_list);
  int vswscanf (const wchar_t * __restrict__ ,const wchar_t * __restrict__ ,va_list);
#pragma empty_line
  __attribute__ ((__dllimport__)) int _fwprintf_p(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _wprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vfwprintf_p(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _swprintf_p(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf_p(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _scwprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vscwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _wprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _wprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _fwprintf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _fwprintf_p_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vfwprintf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vfwprintf_p_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _swprintf_c_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _swprintf_p_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vswprintf_c_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vswprintf_p_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _scwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _scwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vscwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _snwprintf_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vsnwprintf_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList) ;
  __attribute__ ((__dllimport__)) int _swprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,va_list _Args);
  __attribute__ ((__dllimport__)) int __swprintf_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Plocinfo,...) ;
  __attribute__ ((__dllimport__)) int _vswprintf_l(wchar_t * __restrict__ buffer,size_t count,const wchar_t * __restrict__ format,_locale_t locale,va_list argptr) ;
  __attribute__ ((__dllimport__)) int __vswprintf_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Plocinfo,va_list _Args) ;
#pragma line 417 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) wchar_t * _wtempnam(const wchar_t *_Directory,const wchar_t *_FilePrefix);
  __attribute__ ((__dllimport__)) int _vscwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vscwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  int fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _fwscanf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  int swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _swscanf_l(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) int _snwscanf(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _snwscanf_l(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  int wscanf(const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _wscanf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) FILE * _wfdopen(int _FileHandle ,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) FILE * _wfopen(const wchar_t * __restrict__ _Filename,const wchar_t *__restrict__ _Mode) ;
  __attribute__ ((__dllimport__)) FILE * _wfreopen(const wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode,FILE * __restrict__ _OldFile) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) void _wperror(const wchar_t *_ErrMsg);
#pragma empty_line
  __attribute__ ((__dllimport__)) FILE * _wpopen(const wchar_t *_Command,const wchar_t *_Mode);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) int _wremove(const wchar_t *_Filename);
  __attribute__ ((__dllimport__)) wchar_t * _wtmpnam(wchar_t *_Buffer);
  __attribute__ ((__dllimport__)) wint_t _fgetwc_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fputwc_nolock(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _ungetwc_nolock(wint_t _Ch,FILE *_File);
#pragma line 475 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) void _lock_file(FILE *_File);
  __attribute__ ((__dllimport__)) void _unlock_file(FILE *_File);
  __attribute__ ((__dllimport__)) int _fclose_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) int _fflush_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t _fread_nolock(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int _fseek_nolock(FILE *_File,long _Offset,int _Origin);
  __attribute__ ((__dllimport__)) long _ftell_nolock(FILE *_File);
  __extension__ __attribute__ ((__dllimport__)) int _fseeki64_nolock(FILE *_File,long long _Offset,int _Origin);
  __extension__ __attribute__ ((__dllimport__)) long long _ftelli64_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t _fwrite_nolock(const void * __restrict__ _DstBuf,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int _ungetc_nolock(int _Ch,FILE *_File);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  char * tempnam(const char *_Directory,const char *_FilePrefix) ;
  int fcloseall(void) ;
  FILE * fdopen(int _FileHandle,const char *_Format) ;
  int fgetchar(void) ;
  int fileno(FILE *_File) ;
  int flushall(void) ;
  int fputchar(int _Ch) ;
  int getw(FILE *_File) ;
  int putw(int _Ch,FILE *_File) ;
  int rmtmp(void) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
}
#pragma empty_line
#pragma empty_line
#pragma pack(pop)
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdio_s.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma line 9 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdio_s.h" 2 3
#pragma line 509 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw_print_pop.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma empty_line
/* Define __mingw_<printf> macros.  */
#pragma line 511 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3
#pragma line 3 "jpet_geo/jpet_geo.h" 2
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\map" 1 3
// <map> -*- C++ -*-
#pragma empty_line
// Copyright (C) 2001, 2002, 2009 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996,1997
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */
#pragma empty_line
/** @file include/map
 *  This is a Standard C++ Library header.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 58 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\map" 3
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_tree.h" 1 3
// RB tree implementation -*- C++ -*-
#pragma empty_line
// Copyright (C) 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/*
 *
 * Copyright (c) 1996,1997
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 */
#pragma empty_line
/** @file stl_tree.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 1 3
// Core algorithmic facilities -*- C++ -*-
#pragma empty_line
// Copyright (C) 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996-1998
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */
#pragma empty_line
/** @file stl_algobase.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
// -*- C++ -*- forwarding header.
#pragma empty_line
// Copyright (C) 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005,
// 2006, 2007, 2008, 2009, 2010
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file cstddef
 *  This is a Standard C++ Library file.  You should @c \#include this file
 *  in your programs, rather than any of the @a *.h implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c stddef.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std (except for names which are defined
 *  as macros in C).
 */
#pragma empty_line
//
// ISO C++ 14882: 18.1  Types
//
#pragma empty_line
#pragma empty_line
#pragma line 41 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __typeof__(((int*)0)-((int*)0)) ptrdiff_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __typeof__(sizeof(int)) size_t;
#pragma line 56 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#pragma line 44 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace std {
#pragma empty_line
  using ::ptrdiff_t;
  using ::size_t;
#pragma empty_line
}
#pragma line 62 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/functexcept.h" 1 3
// Function-Based Exception Support -*- C++ -*-
#pragma empty_line
// Copyright (C) 2001, 2004, 2005, 2008, 2009 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file functexcept.h
 *  This header provides support for -fno-exceptions.
 */
#pragma empty_line
//
// ISO C++ 14882: 19.1  Exception classes
//
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception_defines.h" 1 3
// -fno-exceptions Support -*- C++ -*-
#pragma empty_line
// Copyright (C) 2001, 2002, 2003, 2004, 2005, 2006, 2006, 2007, 2008, 2009
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
//
// ISO C++ 14882: 19.1  Exception classes
//
#pragma empty_line
/** @file exception_defines.h
 *  This is a Standard C++ Library header.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
// Iff -fno-exceptions, transform error handling code to work without it.
#pragma line 38 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/functexcept.h" 2 3
#pragma empty_line
namespace std {
#pragma empty_line
  // Helper for exception objects in <except>
  void
  __throw_bad_exception(void) __attribute__((__noreturn__));
#pragma empty_line
  // Helper for exception objects in <new>
  void
  __throw_bad_alloc(void) __attribute__((__noreturn__));
#pragma empty_line
  // Helper for exception objects in <typeinfo>
  void
  __throw_bad_cast(void) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_bad_typeid(void) __attribute__((__noreturn__));
#pragma empty_line
  // Helpers for exception objects in <stdexcept>
  void
  __throw_logic_error(const char*) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_domain_error(const char*) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_invalid_argument(const char*) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_length_error(const char*) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_out_of_range(const char*) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_runtime_error(const char*) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_range_error(const char*) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_overflow_error(const char*) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_underflow_error(const char*) __attribute__((__noreturn__));
#pragma empty_line
  // Helpers for exception objects in <ios>
  void
  __throw_ios_failure(const char*) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_system_error(int) __attribute__((__noreturn__));
#pragma empty_line
  void
  __throw_future_error(int) __attribute__((__noreturn__));
#pragma empty_line
  // Helpers for exception objects in <functional>
  void
  __throw_bad_function_call() __attribute__((__noreturn__));
#pragma empty_line
}
#pragma line 63 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 1 3
// -*- C++ -*-
#pragma empty_line
// Copyright (C) 2007, 2009 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the terms
// of the GNU General Public License as published by the Free Software
// Foundation; either version 3, or (at your option) any later
// version.
#pragma empty_line
// This library is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file ext/numeric_traits.h
 *  This file is a GNU extension to the Standard C++ Library.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 32 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace __gnu_cxx {
#pragma empty_line
  // Compile time constants for builtin types.
  // Sadly std::numeric_limits member functions cannot be used for this.
#pragma line 51 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_integer
    {
      // Only integers for initialization of member constant.
      static const _Value __min = (((_Value)(-1) < 0) ? (_Value)1 << (sizeof(_Value) * 8 - ((_Value)(-1) < 0)) : (_Value)0);
      static const _Value __max = (((_Value)(-1) < 0) ? (((((_Value)1 << ((sizeof(_Value) * 8 - ((_Value)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(_Value)0);
#pragma empty_line
      // NB: these two also available in std::numeric_limits as compile
      // time constants, but <limits> is big and we avoid including it.
      static const bool __is_signed = ((_Value)(-1) < 0);
      static const int __digits = (sizeof(_Value) * 8 - ((_Value)(-1) < 0));
    };
#pragma empty_line
  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__min;
#pragma empty_line
  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__max;
#pragma empty_line
  template<typename _Value>
    const bool __numeric_traits_integer<_Value>::__is_signed;
#pragma empty_line
  template<typename _Value>
    const int __numeric_traits_integer<_Value>::__digits;
#pragma line 96 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_floating
    {
      // Only floating point types. See N1822. 
      static const int __max_digits10 = (2 + (std::__are_same<_Value, float>::__value ? 24 : std::__are_same<_Value, double>::__value ? 53 : 64) * 3010 / 10000);
#pragma empty_line
      // See above comment...
      static const bool __is_signed = true;
      static const int __digits10 = (std::__are_same<_Value, float>::__value ? 6 : std::__are_same<_Value, double>::__value ? 15 : 18);
      static const int __max_exponent10 = (std::__are_same<_Value, float>::__value ? 38 : std::__are_same<_Value, double>::__value ? 308 : 4932);
    };
#pragma empty_line
  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_digits10;
#pragma empty_line
  template<typename _Value>
    const bool __numeric_traits_floating<_Value>::__is_signed;
#pragma empty_line
  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__digits10;
#pragma empty_line
  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_exponent10;
#pragma empty_line
  template<typename _Value>
    struct __numeric_traits
    : public __conditional_type<std::__is_integer<_Value>::__value,
    __numeric_traits_integer<_Value>,
    __numeric_traits_floating<_Value> >::__type
    { };
#pragma empty_line
}
#pragma line 66 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 1 3
// Pair implementation -*- C++ -*-
#pragma empty_line
// Copyright (C) 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996,1997
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */
#pragma empty_line
/** @file stl_pair.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 1 3
// Move, forward and identity for C++0x + swap -*- C++ -*-
#pragma empty_line
// Copyright (C) 2007, 2008, 2009 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file move.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
// -*- C++ -*- forwarding header.
#pragma empty_line
// Copyright (C) 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005,
// 2006, 2007, 2008, 2009, 2010
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file cstddef
 *  This is a Standard C++ Library file.  You should @c \#include this file
 *  in your programs, rather than any of the @a *.h implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c stddef.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std (except for names which are defined
 *  as macros in C).
 */
#pragma empty_line
//
// ISO C++ 14882: 18.1  Types
//
#pragma empty_line
#pragma empty_line
#pragma line 41 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */
#pragma line 56 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#pragma line 44 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
#pragma line 35 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 2 3
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/concept_check.h" 1 3
// Concept-checking control -*- C++ -*-
#pragma empty_line
// Copyright (C) 2001, 2009 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file concept_check.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 33 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/concept_check.h" 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
// All places in libstdc++-v3 where these are used, or /might/ be used, or
// don't need to be used, or perhaps /should/ be used, are commented with
// "concept requirements" (and maybe some more text).  So grep like crazy
// if you're looking for additional places to use these.
#pragma empty_line
// Concept-checking code is off by default unless users turn it on via
// configure options or editing c++config.h.
#pragma line 36 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 2 3
#pragma line 95 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 3
namespace std {
#pragma empty_line
  /**
   *  @brief Swaps two values.
   *  @ingroup mutating_algorithms
   *  @param  __a  A thing of arbitrary type.
   *  @param  __b  Another thing of arbitrary type.
   *  @return   Nothing.
  */
  template<typename _Tp>
    inline void
    swap(_Tp& __a, _Tp& __b)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
      _Tp __tmp = (__a);
      __a = (__b);
      __b = (__tmp);
    }
#pragma empty_line
  // _GLIBCXX_RESOLVE_LIB_DEFECTS
  // DR 809. std::swap should be overloaded for array types.
  template<typename _Tp, size_t _Nm>
    inline void
    swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
    {
      for (size_t __n = 0; __n < _Nm; ++__n)
 swap(__a[__n], __b[__n]);
    }
#pragma empty_line
}
#pragma line 61 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 2 3
 // std::swap
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace std {
#pragma empty_line
  /// pair holds two objects of arbitrary type.
  template<class _T1, class _T2>
    struct pair
    {
      typedef _T1 first_type; ///<  @c first_type is the first bound type
      typedef _T2 second_type; ///<  @c second_type is the second bound type
#pragma empty_line
      _T1 first; ///< @c first is a copy of the first object
      _T2 second; ///< @c second is a copy of the second object
#pragma empty_line
      // _GLIBCXX_RESOLVE_LIB_DEFECTS
      // 265.  std::pair::pair() effects overly restrictive
      /** The default constructor creates @c first and @c second using their
       *  respective default constructors.  */
      pair()
      : first(), second() { }
#pragma empty_line
      /** Two objects may be passed to a @c pair constructor to be copied.  */
      pair(const _T1& __a, const _T2& __b)
      : first(__a), second(__b) { }
#pragma line 112 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 3
      /** There is also a templated copy ctor for the @c pair class itself.  */
      template<class _U1, class _U2>
        pair(const pair<_U1, _U2>& __p)
 : first(__p.first),
   second(__p.second) { }
#pragma line 149 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 3
    };
#pragma empty_line
  /// Two pairs of the same type are equal iff their members are equal.
  template<class _T1, class _T2>
    inline bool
    operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first == __y.first && __x.second == __y.second; }
#pragma empty_line
  /// <http://gcc.gnu.org/onlinedocs/libstdc++/manual/utilities.html>
  template<class _T1, class _T2>
    inline bool
    operator<(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first < __y.first
      || (!(__y.first < __x.first) && __x.second < __y.second); }
#pragma empty_line
  /// Uses @c operator== to find the result.
  template<class _T1, class _T2>
    inline bool
    operator!=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x == __y); }
#pragma empty_line
  /// Uses @c operator< to find the result.
  template<class _T1, class _T2>
    inline bool
    operator>(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __y < __x; }
#pragma empty_line
  /// Uses @c operator< to find the result.
  template<class _T1, class _T2>
    inline bool
    operator<=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__y < __x); }
#pragma empty_line
  /// Uses @c operator< to find the result.
  template<class _T1, class _T2>
    inline bool
    operator>=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x < __y); }
#pragma line 198 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 3
  /**
   *  @brief A convenience wrapper for creating a pair from two objects.
   *  @param  x  The first object.
   *  @param  y  The second object.
   *  @return   A newly-constructed pair<> object of the appropriate type.
   *
   *  The standard requires that the objects be passed by reference-to-const,
   *  but LWG issue #181 says they should be passed by const value.  We follow
   *  the LWG by default.
   */
  // _GLIBCXX_RESOLVE_LIB_DEFECTS
  // 181.  make_pair() unintended behavior
#pragma empty_line
  template<class _T1, class _T2>
    inline pair<_T1, _T2>
    make_pair(_T1 __x, _T2 __y)
    { return pair<_T1, _T2>(__x, __y); }
#pragma line 257 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 3
}
#pragma line 67 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 1 3
// Types used in iterator implementation -*- C++ -*-
#pragma empty_line
// Copyright (C) 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996-1998
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */
#pragma empty_line
/** @file stl_iterator_base_types.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 *
 *  This file contains all of the general iterator-related utility types,
 *  such as iterator_traits and struct iterator.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 63 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 3
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
// -*- C++ -*- forwarding header.
#pragma empty_line
// Copyright (C) 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005,
// 2006, 2007, 2008, 2009, 2010
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file cstddef
 *  This is a Standard C++ Library file.  You should @c \#include this file
 *  in your programs, rather than any of the @a *.h implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c stddef.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std (except for names which are defined
 *  as macros in C).
 */
#pragma empty_line
//
// ISO C++ 14882: 18.1  Types
//
#pragma empty_line
#pragma empty_line
#pragma line 41 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */
#pragma line 56 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#pragma line 44 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
#pragma line 66 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 2 3
#pragma empty_line
namespace std {
#pragma empty_line
  /**
   *  @defgroup iterators Iterators
   *  Abstractions for uniform iterating through various underlying types.
  */
  //@{ 
#pragma empty_line
  /**
   *  @defgroup iterator_tags Iterator Tags
   *  These are empty types, used to distinguish different iterators.  The
   *  distinction is not made by what they contain, but simply by what they
   *  are.  Different underlying algorithms can then be used based on the
   *  different operations supported by different iterator types.
  */
  //@{ 
  ///  Marking input iterators.
  struct input_iterator_tag { };
#pragma empty_line
  ///  Marking output iterators.
  struct output_iterator_tag { };
#pragma empty_line
  /// Forward iterators support a superset of input iterator operations.
  struct forward_iterator_tag : public input_iterator_tag { };
#pragma empty_line
  /// Bidirectional iterators support a superset of forward iterator
  /// operations.
  struct bidirectional_iterator_tag : public forward_iterator_tag { };
#pragma empty_line
  /// Random-access iterators support a superset of bidirectional
  /// iterator operations.
  struct random_access_iterator_tag : public bidirectional_iterator_tag { };
  //@}
#pragma empty_line
  /**
   *  @brief  Common %iterator class.
   *
   *  This class does nothing but define nested typedefs.  %Iterator classes
   *  can inherit from this class to save some work.  The typedefs are then
   *  used in specializations and overloading.
   *
   *  In particular, there are no default implementations of requirements
   *  such as @c operator++ and the like.  (How could there be?)
  */
  template<typename _Category, typename _Tp, typename _Distance = ptrdiff_t,
           typename _Pointer = _Tp*, typename _Reference = _Tp&>
    struct iterator
    {
      /// One of the @link iterator_tags tag types@endlink.
      typedef _Category iterator_category;
      /// The type "pointed to" by the iterator.
      typedef _Tp value_type;
      /// Distance between iterators is represented as this type.
      typedef _Distance difference_type;
      /// This type represents a pointer-to-value_type.
      typedef _Pointer pointer;
      /// This type represents a reference-to-value_type.
      typedef _Reference reference;
    };
#pragma empty_line
  /**
   *  @brief  Traits class for iterators.
   *
   *  This class does nothing but define nested typedefs.  The general
   *  version simply @a forwards the nested typedefs from the Iterator
   *  argument.  Specialized versions for pointers and pointers-to-const
   *  provide tighter, more correct semantics.
  */
  template<typename _Iterator>
    struct iterator_traits
    {
      typedef typename _Iterator::iterator_category iterator_category;
      typedef typename _Iterator::value_type value_type;
      typedef typename _Iterator::difference_type difference_type;
      typedef typename _Iterator::pointer pointer;
      typedef typename _Iterator::reference reference;
    };
#pragma empty_line
  /// Partial specialization for pointer types.
  template<typename _Tp>
    struct iterator_traits<_Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef _Tp& reference;
    };
#pragma empty_line
  /// Partial specialization for const pointer types.
  template<typename _Tp>
    struct iterator_traits<const _Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef const _Tp* pointer;
      typedef const _Tp& reference;
    };
#pragma empty_line
  /**
   *  This function is not a part of the C++ standard but is syntactic
   *  sugar for internal library use only.
  */
  template<typename _Iter>
    inline typename iterator_traits<_Iter>::iterator_category
    __iterator_category(const _Iter&)
    { return typename iterator_traits<_Iter>::iterator_category(); }
#pragma empty_line
  //@}
#pragma empty_line
}
#pragma line 68 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_funcs.h" 1 3
// Functions used by iterators -*- C++ -*-
#pragma empty_line
// Copyright (C) 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996-1998
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */
#pragma empty_line
/** @file stl_iterator_base_funcs.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 *
 *  This file contains all of the general iterator-related utility
 *  functions, such as distance() and advance().
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 63 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_funcs.h" 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace std {
#pragma empty_line
  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    __distance(_InputIterator __first, _InputIterator __last,
               input_iterator_tag)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
      typename iterator_traits<_InputIterator>::difference_type __n = 0;
      while (__first != __last)
 {
   ++__first;
   ++__n;
 }
      return __n;
    }
#pragma empty_line
  template<typename _RandomAccessIterator>
    inline typename iterator_traits<_RandomAccessIterator>::difference_type
    __distance(_RandomAccessIterator __first, _RandomAccessIterator __last,
               random_access_iterator_tag)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
      return __last - __first;
    }
#pragma empty_line
  /**
   *  @brief A generalization of pointer arithmetic.
   *  @param  first  An input iterator.
   *  @param  last  An input iterator.
   *  @return  The distance between them.
   *
   *  Returns @c n such that first + n == last.  This requires that @p last
   *  must be reachable from @p first.  Note that @c n may be negative.
   *
   *  For random access iterators, this uses their @c + and @c - operations
   *  and are constant time.  For other %iterator classes they are linear time.
  */
  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    distance(_InputIterator __first, _InputIterator __last)
    {
      // concept requirements -- taken care of in __distance
      return std::__distance(__first, __last,
        std::__iterator_category(__first));
    }
#pragma empty_line
  template<typename _InputIterator, typename _Distance>
    inline void
    __advance(_InputIterator& __i, _Distance __n, input_iterator_tag)
    {
      // concept requirements
#pragma empty_line
      while (__n--)
 ++__i;
    }
#pragma empty_line
  template<typename _BidirectionalIterator, typename _Distance>
    inline void
    __advance(_BidirectionalIterator& __i, _Distance __n,
       bidirectional_iterator_tag)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
      if (__n > 0)
        while (__n--)
   ++__i;
      else
        while (__n++)
   --__i;
    }
#pragma empty_line
  template<typename _RandomAccessIterator, typename _Distance>
    inline void
    __advance(_RandomAccessIterator& __i, _Distance __n,
              random_access_iterator_tag)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
      __i += __n;
    }
#pragma empty_line
  /**
   *  @brief A generalization of pointer arithmetic.
   *  @param  i  An input iterator.
   *  @param  n  The @a delta by which to change @p i.
   *  @return  Nothing.
   *
   *  This increments @p i by @p n.  For bidirectional and random access
   *  iterators, @p n may be negative, in which case @p i is decremented.
   *
   *  For random access iterators, this uses their @c + and @c - operations
   *  and are constant time.  For other %iterator classes they are linear time.
  */
  template<typename _InputIterator, typename _Distance>
    inline void
    advance(_InputIterator& __i, _Distance __n)
    {
      // concept requirements -- taken care of in __advance
      typename iterator_traits<_InputIterator>::difference_type __d = __n;
      std::__advance(__i, __d, std::__iterator_category(__i));
    }
#pragma empty_line
}
#pragma line 69 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 1 3
// Iterators -*- C++ -*-
#pragma empty_line
// Copyright (C) 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996-1998
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */
#pragma empty_line
/** @file stl_iterator.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 *
 *  This file implements reverse_iterator, back_insert_iterator,
 *  front_insert_iterator, insert_iterator, __normal_iterator, and their
 *  supporting functions and overloaded operators.
 */
#pragma line 68 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
namespace std {
#pragma empty_line
  /**
   * @addtogroup iterators
   * @{
   */
#pragma empty_line
  // 24.4.1 Reverse iterators
  /**
   *  Bidirectional and random access iterators have corresponding reverse
   *  %iterator adaptors that iterate through the data structure in the
   *  opposite direction.  They have the same signatures as the corresponding
   *  iterators.  The fundamental relation between a reverse %iterator and its
   *  corresponding %iterator @c i is established by the identity:
   *  @code
   *      &*(reverse_iterator(i)) == &*(i - 1)
   *  @endcode
   *
   *  <em>This mapping is dictated by the fact that while there is always a
   *  pointer past the end of an array, there might not be a valid pointer
   *  before the beginning of an array.</em> [24.4.1]/1,2
   *
   *  Reverse iterators can be tricky and surprising at first.  Their
   *  semantics make sense, however, and the trickiness is a side effect of
   *  the requirement that the iterators must be safe.
  */
  template<typename _Iterator>
    class reverse_iterator
    : public iterator<typename iterator_traits<_Iterator>::iterator_category,
        typename iterator_traits<_Iterator>::value_type,
        typename iterator_traits<_Iterator>::difference_type,
        typename iterator_traits<_Iterator>::pointer,
                      typename iterator_traits<_Iterator>::reference>
    {
    protected:
      _Iterator current;
#pragma empty_line
      typedef iterator_traits<_Iterator> __traits_type;
#pragma empty_line
    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::difference_type difference_type;
      typedef typename __traits_type::pointer pointer;
      typedef typename __traits_type::reference reference;
#pragma empty_line
      /**
       *  The default constructor default-initializes member @p current.
       *  If it is a pointer, that means it is zero-initialized.
      */
      // _GLIBCXX_RESOLVE_LIB_DEFECTS
      // 235 No specification of default ctor for reverse_iterator
      reverse_iterator() : current() { }
#pragma empty_line
      /**
       *  This %iterator will move in the opposite direction that @p x does.
      */
      explicit
      reverse_iterator(iterator_type __x) : current(__x) { }
#pragma empty_line
      /**
       *  The copy constructor is normal.
      */
      reverse_iterator(const reverse_iterator& __x)
      : current(__x.current) { }
#pragma empty_line
      /**
       *  A reverse_iterator across other types can be copied in the normal
       *  fashion.
      */
      template<typename _Iter>
        reverse_iterator(const reverse_iterator<_Iter>& __x)
 : current(__x.base()) { }
#pragma empty_line
      /**
       *  @return  @c current, the %iterator used for underlying work.
      */
      iterator_type
      base() const
      { return current; }
#pragma empty_line
      /**
       *  @return  TODO
       *
       *  @doctodo
      */
      reference
      operator*() const
      {
 _Iterator __tmp = current;
 return *--__tmp;
      }
#pragma empty_line
      /**
       *  @return  TODO
       *
       *  @doctodo
      */
      pointer
      operator->() const
      { return &(operator*()); }
#pragma empty_line
      /**
       *  @return  TODO
       *
       *  @doctodo
      */
      reverse_iterator&
      operator++()
      {
 --current;
 return *this;
      }
#pragma empty_line
      /**
       *  @return  TODO
       *
       *  @doctodo
      */
      reverse_iterator
      operator++(int)
      {
 reverse_iterator __tmp = *this;
 --current;
 return __tmp;
      }
#pragma empty_line
      /**
       *  @return  TODO
       *
       *  @doctodo
      */
      reverse_iterator&
      operator--()
      {
 ++current;
 return *this;
      }
#pragma empty_line
      /**
       *  @return  TODO
       *
       *  @doctodo
      */
      reverse_iterator
      operator--(int)
      {
 reverse_iterator __tmp = *this;
 ++current;
 return __tmp;
      }
#pragma empty_line
      /**
       *  @return  TODO
       *
       *  @doctodo
      */
      reverse_iterator
      operator+(difference_type __n) const
      { return reverse_iterator(current - __n); }
#pragma empty_line
      /**
       *  @return  TODO
       *
       *  @doctodo
      */
      reverse_iterator&
      operator+=(difference_type __n)
      {
 current -= __n;
 return *this;
      }
#pragma empty_line
      /**
       *  @return  TODO
       *
       *  @doctodo
      */
      reverse_iterator
      operator-(difference_type __n) const
      { return reverse_iterator(current + __n); }
#pragma empty_line
      /**
       *  @return  TODO
       *
       *  @doctodo
      */
      reverse_iterator&
      operator-=(difference_type __n)
      {
 current += __n;
 return *this;
      }
#pragma empty_line
      /**
       *  @return  TODO
       *
       *  @doctodo
      */
      reference
      operator[](difference_type __n) const
      { return *(*this + __n); }
    };
#pragma empty_line
  //@{
  /**
   *  @param  x  A %reverse_iterator.
   *  @param  y  A %reverse_iterator.
   *  @return  A simple bool.
   *
   *  Reverse iterators forward many operations to their underlying base()
   *  iterators.  Others are implemented in terms of one another.
   *
  */
  template<typename _Iterator>
    inline bool
    operator==(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return __x.base() == __y.base(); }
#pragma empty_line
  template<typename _Iterator>
    inline bool
    operator<(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() < __x.base(); }
#pragma empty_line
  template<typename _Iterator>
    inline bool
    operator!=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x == __y); }
#pragma empty_line
  template<typename _Iterator>
    inline bool
    operator>(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y < __x; }
#pragma empty_line
  template<typename _Iterator>
    inline bool
    operator<=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__y < __x); }
#pragma empty_line
  template<typename _Iterator>
    inline bool
    operator>=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x < __y); }
#pragma empty_line
  template<typename _Iterator>
    inline typename reverse_iterator<_Iterator>::difference_type
    operator-(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() - __x.base(); }
#pragma empty_line
  template<typename _Iterator>
    inline reverse_iterator<_Iterator>
    operator+(typename reverse_iterator<_Iterator>::difference_type __n,
       const reverse_iterator<_Iterator>& __x)
    { return reverse_iterator<_Iterator>(__x.base() - __n); }
#pragma empty_line
  // _GLIBCXX_RESOLVE_LIB_DEFECTS
  // DR 280. Comparison of reverse_iterator to const reverse_iterator.
  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator==(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return __x.base() == __y.base(); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y.base() < __x.base(); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator!=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x == __y); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y < __x; }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__y < __x); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x < __y); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR>
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    inline typename reverse_iterator<_IteratorL>::difference_type
    operator-(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
#pragma empty_line
    { return __y.base() - __x.base(); }
  //@}
#pragma empty_line
  // 24.4.2.2.1 back_insert_iterator
  /**
   *  @brief  Turns assignment into insertion.
   *
   *  These are output iterators, constructed from a container-of-T.
   *  Assigning a T to the iterator appends it to the container using
   *  push_back.
   *
   *  Tip:  Using the back_inserter function to create these iterators can
   *  save typing.
  */
  template<typename _Container>
    class back_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;
#pragma empty_line
    public:
      /// A nested typedef for the type of whatever container you used.
      typedef _Container container_type;
#pragma empty_line
      /// The only way to create this %iterator is with a container.
      explicit
      back_insert_iterator(_Container& __x) : container(&__x) { }
#pragma empty_line
      /**
       *  @param  value  An instance of whatever type
       *                 container_type::const_reference is; presumably a
       *                 reference-to-const T for container<T>.
       *  @return  This %iterator, for chained operations.
       *
       *  This kind of %iterator doesn't really have a @a position in the
       *  container (you can think of the position as being permanently at
       *  the end, if you like).  Assigning a value to the %iterator will
       *  always append the value to the end of the container.
      */
#pragma empty_line
      back_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_back(__value);
 return *this;
      }
#pragma line 442 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      /// Simply returns *this.
      back_insert_iterator&
      operator*()
      { return *this; }
#pragma empty_line
      /// Simply returns *this.  (This %iterator does not @a move.)
      back_insert_iterator&
      operator++()
      { return *this; }
#pragma empty_line
      /// Simply returns *this.  (This %iterator does not @a move.)
      back_insert_iterator
      operator++(int)
      { return *this; }
    };
#pragma empty_line
  /**
   *  @param  x  A container of arbitrary type.
   *  @return  An instance of back_insert_iterator working on @p x.
   *
   *  This wrapper function helps in creating back_insert_iterator instances.
   *  Typing the name of the %iterator requires knowing the precise full
   *  type of the container, which can be tedious and impedes generic
   *  programming.  Using this function lets you take advantage of automatic
   *  template parameter deduction, making the compiler match the correct
   *  types for you.
  */
  template<typename _Container>
    inline back_insert_iterator<_Container>
    back_inserter(_Container& __x)
    { return back_insert_iterator<_Container>(__x); }
#pragma empty_line
  /**
   *  @brief  Turns assignment into insertion.
   *
   *  These are output iterators, constructed from a container-of-T.
   *  Assigning a T to the iterator prepends it to the container using
   *  push_front.
   *
   *  Tip:  Using the front_inserter function to create these iterators can
   *  save typing.
  */
  template<typename _Container>
    class front_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;
#pragma empty_line
    public:
      /// A nested typedef for the type of whatever container you used.
      typedef _Container container_type;
#pragma empty_line
      /// The only way to create this %iterator is with a container.
      explicit front_insert_iterator(_Container& __x) : container(&__x) { }
#pragma empty_line
      /**
       *  @param  value  An instance of whatever type
       *                 container_type::const_reference is; presumably a
       *                 reference-to-const T for container<T>.
       *  @return  This %iterator, for chained operations.
       *
       *  This kind of %iterator doesn't really have a @a position in the
       *  container (you can think of the position as being permanently at
       *  the front, if you like).  Assigning a value to the %iterator will
       *  always prepend the value to the front of the container.
      */
#pragma empty_line
      front_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_front(__value);
 return *this;
      }
#pragma line 532 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      /// Simply returns *this.
      front_insert_iterator&
      operator*()
      { return *this; }
#pragma empty_line
      /// Simply returns *this.  (This %iterator does not @a move.)
      front_insert_iterator&
      operator++()
      { return *this; }
#pragma empty_line
      /// Simply returns *this.  (This %iterator does not @a move.)
      front_insert_iterator
      operator++(int)
      { return *this; }
    };
#pragma empty_line
  /**
   *  @param  x  A container of arbitrary type.
   *  @return  An instance of front_insert_iterator working on @p x.
   *
   *  This wrapper function helps in creating front_insert_iterator instances.
   *  Typing the name of the %iterator requires knowing the precise full
   *  type of the container, which can be tedious and impedes generic
   *  programming.  Using this function lets you take advantage of automatic
   *  template parameter deduction, making the compiler match the correct
   *  types for you.
  */
  template<typename _Container>
    inline front_insert_iterator<_Container>
    front_inserter(_Container& __x)
    { return front_insert_iterator<_Container>(__x); }
#pragma empty_line
  /**
   *  @brief  Turns assignment into insertion.
   *
   *  These are output iterators, constructed from a container-of-T.
   *  Assigning a T to the iterator inserts it in the container at the
   *  %iterator's position, rather than overwriting the value at that
   *  position.
   *
   *  (Sequences will actually insert a @e copy of the value before the
   *  %iterator's position.)
   *
   *  Tip:  Using the inserter function to create these iterators can
   *  save typing.
  */
  template<typename _Container>
    class insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;
      typename _Container::iterator iter;
#pragma empty_line
    public:
      /// A nested typedef for the type of whatever container you used.
      typedef _Container container_type;
#pragma empty_line
      /**
       *  The only way to create this %iterator is with a container and an
       *  initial position (a normal %iterator into the container).
      */
      insert_iterator(_Container& __x, typename _Container::iterator __i)
      : container(&__x), iter(__i) {}
#pragma empty_line
      /**
       *  @param  value  An instance of whatever type
       *                 container_type::const_reference is; presumably a
       *                 reference-to-const T for container<T>.
       *  @return  This %iterator, for chained operations.
       *
       *  This kind of %iterator maintains its own position in the
       *  container.  Assigning a value to the %iterator will insert the
       *  value into the container at the place before the %iterator.
       *
       *  The position is maintained such that subsequent assignments will
       *  insert values immediately after one another.  For example,
       *  @code
       *     // vector v contains A and Z
       *
       *     insert_iterator i (v, ++v.begin());
       *     i = 1;
       *     i = 2;
       *     i = 3;
       *
       *     // vector v contains A, 1, 2, 3, and Z
       *  @endcode
      */
#pragma empty_line
      insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 iter = container->insert(iter, __value);
 ++iter;
 return *this;
      }
#pragma line 646 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      /// Simply returns *this.
      insert_iterator&
      operator*()
      { return *this; }
#pragma empty_line
      /// Simply returns *this.  (This %iterator does not @a move.)
      insert_iterator&
      operator++()
      { return *this; }
#pragma empty_line
      /// Simply returns *this.  (This %iterator does not @a move.)
      insert_iterator&
      operator++(int)
      { return *this; }
    };
#pragma empty_line
  /**
   *  @param  x  A container of arbitrary type.
   *  @return  An instance of insert_iterator working on @p x.
   *
   *  This wrapper function helps in creating insert_iterator instances.
   *  Typing the name of the %iterator requires knowing the precise full
   *  type of the container, which can be tedious and impedes generic
   *  programming.  Using this function lets you take advantage of automatic
   *  template parameter deduction, making the compiler match the correct
   *  types for you.
  */
  template<typename _Container, typename _Iterator>
    inline insert_iterator<_Container>
    inserter(_Container& __x, _Iterator __i)
    {
      return insert_iterator<_Container>(__x,
      typename _Container::iterator(__i));
    }
#pragma empty_line
  // @} group iterators
#pragma empty_line
}
#pragma empty_line
namespace __gnu_cxx {
#pragma empty_line
  // This iterator adapter is @a normal in the sense that it does not
  // change the semantics of any of the operators of its iterator
  // parameter.  Its primary purpose is to convert an iterator that is
  // not a class, e.g. a pointer, into an iterator that is a class.
  // The _Container parameter exists solely so that different containers
  // using this template can instantiate different types, even if the
  // _Iterator parameter is the same.
  using std::iterator_traits;
  using std::iterator;
  template<typename _Iterator, typename _Container>
    class __normal_iterator
    {
    protected:
      _Iterator _M_current;
#pragma empty_line
      typedef iterator_traits<_Iterator> __traits_type;
#pragma empty_line
    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::iterator_category iterator_category;
      typedef typename __traits_type::value_type value_type;
      typedef typename __traits_type::difference_type difference_type;
      typedef typename __traits_type::reference reference;
      typedef typename __traits_type::pointer pointer;
#pragma empty_line
      __normal_iterator() : _M_current(_Iterator()) { }
#pragma empty_line
      explicit
      __normal_iterator(const _Iterator& __i) : _M_current(__i) { }
#pragma empty_line
      // Allow iterator to const_iterator conversion
      template<typename _Iter>
        __normal_iterator(const __normal_iterator<_Iter,
     typename __enable_if<
              (std::__are_same<_Iter, typename _Container::pointer>::__value),
        _Container>::__type>& __i)
        : _M_current(__i.base()) { }
#pragma empty_line
      // Forward iterator requirements
      reference
      operator*() const
      { return *_M_current; }
#pragma empty_line
      pointer
      operator->() const
      { return _M_current; }
#pragma empty_line
      __normal_iterator&
      operator++()
      {
 ++_M_current;
 return *this;
      }
#pragma empty_line
      __normal_iterator
      operator++(int)
      { return __normal_iterator(_M_current++); }
#pragma empty_line
      // Bidirectional iterator requirements
      __normal_iterator&
      operator--()
      {
 --_M_current;
 return *this;
      }
#pragma empty_line
      __normal_iterator
      operator--(int)
      { return __normal_iterator(_M_current--); }
#pragma empty_line
      // Random access iterator requirements
      reference
      operator[](const difference_type& __n) const
      { return _M_current[__n]; }
#pragma empty_line
      __normal_iterator&
      operator+=(const difference_type& __n)
      { _M_current += __n; return *this; }
#pragma empty_line
      __normal_iterator
      operator+(const difference_type& __n) const
      { return __normal_iterator(_M_current + __n); }
#pragma empty_line
      __normal_iterator&
      operator-=(const difference_type& __n)
      { _M_current -= __n; return *this; }
#pragma empty_line
      __normal_iterator
      operator-(const difference_type& __n) const
      { return __normal_iterator(_M_current - __n); }
#pragma empty_line
      const _Iterator&
      base() const
      { return _M_current; }
    };
#pragma empty_line
  // Note: In what follows, the left- and right-hand-side iterators are
  // allowed to vary in types (conceptually in cv-qualification) so that
  // comparison between cv-qualified and non-cv-qualified iterators be
  // valid.  However, the greedy and unfriendly operators in std::rel_ops
  // will make overload resolution ambiguous (when in scope) if we don't
  // provide overloads whose operands are of the same type.  Can someone
  // remind me what generic programming is about? -- Gaby
#pragma empty_line
  // Forward iterator requirements
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator==(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() == __rhs.base(); }
#pragma empty_line
  template<typename _Iterator, typename _Container>
    inline bool
    operator==(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() == __rhs.base(); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() != __rhs.base(); }
#pragma empty_line
  template<typename _Iterator, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() != __rhs.base(); }
#pragma empty_line
  // Random access iterator requirements
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() < __rhs.base(); }
#pragma empty_line
  template<typename _Iterator, typename _Container>
    inline bool
    operator<(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() < __rhs.base(); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() > __rhs.base(); }
#pragma empty_line
  template<typename _Iterator, typename _Container>
    inline bool
    operator>(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() > __rhs.base(); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() <= __rhs.base(); }
#pragma empty_line
  template<typename _Iterator, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() <= __rhs.base(); }
#pragma empty_line
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() >= __rhs.base(); }
#pragma empty_line
  template<typename _Iterator, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() >= __rhs.base(); }
#pragma empty_line
  // _GLIBCXX_RESOLVE_LIB_DEFECTS
  // According to the resolution of DR179 not only the various comparison
  // operators but also operator- must accept mixed iterator/const_iterator
  // parameters.
  template<typename _IteratorL, typename _IteratorR, typename _Container>
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    inline typename __normal_iterator<_IteratorL, _Container>::difference_type
    operator-(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
#pragma empty_line
    { return __lhs.base() - __rhs.base(); }
#pragma empty_line
  template<typename _Iterator, typename _Container>
    inline typename __normal_iterator<_Iterator, _Container>::difference_type
    operator-(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() - __rhs.base(); }
#pragma empty_line
  template<typename _Iterator, typename _Container>
    inline __normal_iterator<_Iterator, _Container>
    operator+(typename __normal_iterator<_Iterator, _Container>::difference_type
       __n, const __normal_iterator<_Iterator, _Container>& __i)
    { return __normal_iterator<_Iterator, _Container>(__i.base() + __n); }
#pragma empty_line
}
#pragma line 70 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\debug/debug.h" 1 3
// Debugging support implementation -*- C++ -*-
#pragma empty_line
// Copyright (C) 2003, 2004, 2005, 2006, 2007, 2008, 2009
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file debug/debug.h
 *  This file is a GNU debug extension to the Standard C++ Library.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/** Macros and namespaces used by the implementation outside of debug
 *  wrappers to verify certain properties. The __glibcxx_requires_xxx
 *  macros are merely wrappers around the __glibcxx_check_xxx wrappers
 *  when we are compiling with debug mode, but disappear when we are
 *  in release mode so that there is no checking performed in, e.g.,
 *  the standard library algorithms.
*/
#pragma empty_line
// Debug mode namespaces.
#pragma empty_line
/**
 * @namespace std::__debug
 * @brief GNU debug code, replaces standard behavior with debug behavior.
 */
namespace std
{
  namespace __debug { }
}
#pragma empty_line
/** @namespace __gnu_debug
 *  @brief GNU debug classes for public use.
*/
namespace __gnu_debug
{
  using namespace std::__debug;
}
#pragma line 72 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
#pragma empty_line
#pragma empty_line
namespace std {
#pragma empty_line
  // See http://gcc.gnu.org/ml/libstdc++/2004-08/msg00167.html: in a
  // nutshell, we are partially implementing the resolution of DR 187,
  // when it's safe, i.e., the value_types are equal.
  template<bool _BoolType>
    struct __iter_swap
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          typedef typename iterator_traits<_ForwardIterator1>::value_type
            _ValueType1;
          _ValueType1 __tmp = (*__a);
          *__a = (*__b);
          *__b = (__tmp);
 }
    };
#pragma empty_line
  template<>
    struct __iter_swap<true>
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          swap(*__a, *__b);
        }
    };
#pragma empty_line
  /**
   *  @brief Swaps the contents of two iterators.
   *  @ingroup mutating_algorithms
   *  @param  a  An iterator.
   *  @param  b  Another iterator.
   *  @return   Nothing.
   *
   *  This function swaps the values pointed to by two iterators, not the
   *  iterators themselves.
  */
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    inline void
    iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
    {
      typedef typename iterator_traits<_ForwardIterator1>::value_type
 _ValueType1;
      typedef typename iterator_traits<_ForwardIterator2>::value_type
 _ValueType2;
#pragma empty_line
      // concept requirements
#pragma line 134 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
      typedef typename iterator_traits<_ForwardIterator1>::reference
 _ReferenceType1;
      typedef typename iterator_traits<_ForwardIterator2>::reference
 _ReferenceType2;
      std::__iter_swap<__are_same<_ValueType1, _ValueType2>::__value
 && __are_same<_ValueType1&, _ReferenceType1>::__value
 && __are_same<_ValueType2&, _ReferenceType2>::__value>::
 iter_swap(__a, __b);
    }
#pragma empty_line
  /**
   *  @brief Swap the elements of two sequences.
   *  @ingroup mutating_algorithms
   *  @param  first1  A forward iterator.
   *  @param  last1   A forward iterator.
   *  @param  first2  A forward iterator.
   *  @return   An iterator equal to @p first2+(last1-first1).
   *
   *  Swaps each element in the range @p [first1,last1) with the
   *  corresponding element in the range @p [first2,(last1-first1)).
   *  The ranges must not overlap.
  */
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    _ForwardIterator2
    swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
  _ForwardIterator2 __first2)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
                                                       ;
#pragma empty_line
      for (; __first1 != __last1; ++__first1, ++__first2)
 std::iter_swap(__first1, __first2);
      return __first2;
    }
#pragma empty_line
  /**
   *  @brief This does what you think it does.
   *  @ingroup sorting_algorithms
   *  @param  a  A thing of arbitrary type.
   *  @param  b  Another thing of arbitrary type.
   *  @return   The lesser of the parameters.
   *
   *  This is the simple classic generic implementation.  It will work on
   *  temporary expressions, since they are only evaluated once, unlike a
   *  preprocessor macro.
  */
  template<typename _Tp>
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b)
    {
      // concept requirements
#pragma empty_line
      //return __b < __a ? __b : __a;
      if (__b < __a)
 return __b;
      return __a;
    }
#pragma empty_line
  /**
   *  @brief This does what you think it does.
   *  @ingroup sorting_algorithms
   *  @param  a  A thing of arbitrary type.
   *  @param  b  Another thing of arbitrary type.
   *  @return   The greater of the parameters.
   *
   *  This is the simple classic generic implementation.  It will work on
   *  temporary expressions, since they are only evaluated once, unlike a
   *  preprocessor macro.
  */
  template<typename _Tp>
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b)
    {
      // concept requirements
#pragma empty_line
      //return  __a < __b ? __b : __a;
      if (__a < __b)
 return __b;
      return __a;
    }
#pragma empty_line
  /**
   *  @brief This does what you think it does.
   *  @ingroup sorting_algorithms
   *  @param  a  A thing of arbitrary type.
   *  @param  b  Another thing of arbitrary type.
   *  @param  comp  A @link comparison_functors comparison functor@endlink.
   *  @return   The lesser of the parameters.
   *
   *  This will work on temporary expressions, since they are only evaluated
   *  once, unlike a preprocessor macro.
  */
  template<typename _Tp, typename _Compare>
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {
      //return __comp(__b, __a) ? __b : __a;
      if (__comp(__b, __a))
 return __b;
      return __a;
    }
#pragma empty_line
  /**
   *  @brief This does what you think it does.
   *  @ingroup sorting_algorithms
   *  @param  a  A thing of arbitrary type.
   *  @param  b  Another thing of arbitrary type.
   *  @param  comp  A @link comparison_functors comparison functor@endlink.
   *  @return   The greater of the parameters.
   *
   *  This will work on temporary expressions, since they are only evaluated
   *  once, unlike a preprocessor macro.
  */
  template<typename _Tp, typename _Compare>
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {
      //return __comp(__a, __b) ? __b : __a;
      if (__comp(__a, __b))
 return __b;
      return __a;
    }
#pragma empty_line
#pragma empty_line
  // If _Iterator has a base returns it otherwise _Iterator is returned
  // untouched
  template<typename _Iterator, bool _HasBase>
    struct _Iter_base
    {
      typedef _Iterator iterator_type;
      static iterator_type
      _S_base(_Iterator __it)
      { return __it; }
    };
#pragma empty_line
  template<typename _Iterator>
    struct _Iter_base<_Iterator, true>
    {
      typedef typename _Iterator::iterator_type iterator_type;
      static iterator_type
      _S_base(_Iterator __it)
      { return __it.base(); }
    };
#pragma empty_line
  // If _Iterator is a __normal_iterator return its base (a plain pointer,
  // normally) otherwise return it untouched.  See copy, fill, ... 
  template<typename _Iterator>
    struct _Niter_base
    : _Iter_base<_Iterator, __is_normal_iterator<_Iterator>::__value>
    { };
#pragma empty_line
  template<typename _Iterator>
    inline typename _Niter_base<_Iterator>::iterator_type
    __niter_base(_Iterator __it)
    { return std::_Niter_base<_Iterator>::_S_base(__it); }
#pragma empty_line
  // Likewise, for move_iterator.
  template<typename _Iterator>
    struct _Miter_base
    : _Iter_base<_Iterator, __is_move_iterator<_Iterator>::__value>
    { };
#pragma empty_line
  template<typename _Iterator>
    inline typename _Miter_base<_Iterator>::iterator_type
    __miter_base(_Iterator __it)
    { return std::_Miter_base<_Iterator>::_S_base(__it); }
#pragma empty_line
  // All of these auxiliary structs serve two purposes.  (1) Replace
  // calls to copy with memmove whenever possible.  (Memmove, not memcpy,
  // because the input and output ranges are permitted to overlap.)
  // (2) If we're using random access iterators, then write the loop as
  // a for loop with an explicit count.
#pragma empty_line
  template<bool, bool, typename>
    struct __copy_move
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   for (; __first != __last; ++__result, ++__first)
     *__result = *__first;
   return __result;
 }
    };
#pragma line 339 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<>
    struct __copy_move<false, false, random_access_iterator_tag>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   typedef typename iterator_traits<_II>::difference_type _Distance;
   for(_Distance __n = __last - __first; __n > 0; --__n)
     {
       *__result = *__first;
       ++__first;
       ++__result;
     }
   return __result;
 }
    };
#pragma line 377 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<bool _IsMove>
    struct __copy_move<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_m(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {
   const ptrdiff_t _Num = __last - __first;
   if (_Num)
     __builtin_memmove(__result, __first, sizeof(_Tp) * _Num);
   return __result + _Num;
 }
    };
#pragma empty_line
  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a(_II __first, _II __last, _OI __result)
    {
      typedef typename iterator_traits<_II>::value_type _ValueTypeI;
      typedef typename iterator_traits<_OI>::value_type _ValueTypeO;
      typedef typename iterator_traits<_II>::iterator_category _Category;
      const bool __simple = (__is_pod(_ValueTypeI)
                      && __is_pointer<_II>::__value
                      && __is_pointer<_OI>::__value
        && __are_same<_ValueTypeI, _ValueTypeO>::__value);
#pragma empty_line
      return std::__copy_move<_IsMove, __simple,
                       _Category>::__copy_m(__first, __last, __result);
    }
#pragma empty_line
  // Helpers for streambuf iterators (either istream or ostream).
  // NB: avoid including <iosfwd>, relatively large.
  template<typename _CharT>
    struct char_traits;
#pragma empty_line
  template<typename _CharT, typename _Traits>
    class istreambuf_iterator;
#pragma empty_line
  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator;
#pragma empty_line
  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(_CharT*, _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);
#pragma empty_line
  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(const _CharT*, const _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);
#pragma empty_line
  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
        _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT, char_traits<_CharT> >,
     istreambuf_iterator<_CharT, char_traits<_CharT> >, _CharT*);
#pragma empty_line
  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a2(_II __first, _II __last, _OI __result)
    {
      return _OI(std::__copy_move_a<_IsMove>(std::__niter_base(__first),
          std::__niter_base(__last),
          std::__niter_base(__result)));
    }
#pragma empty_line
  /**
   *  @brief Copies the range [first,last) into result.
   *  @ingroup mutating_algorithms
   *  @param  first  An input iterator.
   *  @param  last   An input iterator.
   *  @param  result An output iterator.
   *  @return   result + (first - last)
   *
   *  This inline function will boil down to a call to @c memmove whenever
   *  possible.  Failing that, if random access iterators are passed, then the
   *  loop count will be known (and therefore a candidate for compiler
   *  optimizations such as unrolling).  Result may not be contained within
   *  [first,last); the copy_backward function should be used instead.
   *
   *  Note that the end of the output range is permitted to be contained
   *  within [first,last).
  */
  template<typename _II, typename _OI>
    inline _OI
    copy(_II __first, _II __last, _OI __result)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
#pragma empty_line
                                                     ;
#pragma empty_line
      return (std::__copy_move_a2<__is_move_iterator<_II>::__value>
       (std::__miter_base(__first), std::__miter_base(__last),
        __result));
    }
#pragma line 514 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<bool, bool, typename>
    struct __copy_move_backward
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   while (__first != __last)
     *--__result = *--__last;
   return __result;
 }
    };
#pragma line 542 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<>
    struct __copy_move_backward<false, false, random_access_iterator_tag>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   typename iterator_traits<_BI1>::difference_type __n;
   for (__n = __last - __first; __n > 0; --__n)
     *--__result = *--__last;
   return __result;
 }
    };
#pragma line 572 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<bool _IsMove>
    struct __copy_move_backward<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_move_b(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {
   const ptrdiff_t _Num = __last - __first;
   if (_Num)
     __builtin_memmove(__result - _Num, __first, sizeof(_Tp) * _Num);
   return __result - _Num;
 }
    };
#pragma empty_line
  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      typedef typename iterator_traits<_BI1>::value_type _ValueType1;
      typedef typename iterator_traits<_BI2>::value_type _ValueType2;
      typedef typename iterator_traits<_BI1>::iterator_category _Category;
      const bool __simple = (__is_pod(_ValueType1)
                      && __is_pointer<_BI1>::__value
                      && __is_pointer<_BI2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);
#pragma empty_line
      return std::__copy_move_backward<_IsMove, __simple,
                                _Category>::__copy_move_b(__first,
         __last,
         __result);
    }
#pragma empty_line
  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a2(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      return _BI2(std::__copy_move_backward_a<_IsMove>
    (std::__niter_base(__first), std::__niter_base(__last),
     std::__niter_base(__result)));
    }
#pragma empty_line
  /**
   *  @brief Copies the range [first,last) into result.
   *  @ingroup mutating_algorithms
   *  @param  first  A bidirectional iterator.
   *  @param  last   A bidirectional iterator.
   *  @param  result A bidirectional iterator.
   *  @return   result - (first - last)
   *
   *  The function has the same effect as copy, but starts at the end of the
   *  range and works its way to the start, returning the start of the result.
   *  This inline function will boil down to a call to @c memmove whenever
   *  possible.  Failing that, if random access iterators are passed, then the
   *  loop count will be known (and therefore a candidate for compiler
   *  optimizations such as unrolling).
   *
   *  Result may not be in the range [first,last).  Use copy instead.  Note
   *  that the start of the output range may overlap [first,last).
  */
  template<typename _BI1, typename _BI2>
    inline _BI2
    copy_backward(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
                                                     ;
#pragma empty_line
      return (std::__copy_move_backward_a2<__is_move_iterator<_BI1>::__value>
       (std::__miter_base(__first), std::__miter_base(__last),
        __result));
    }
#pragma line 689 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
       const _Tp& __value)
    {
      for (; __first != __last; ++__first)
 *__first = __value;
    }
#pragma empty_line
  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
      const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __first != __last; ++__first)
 *__first = __tmp;
    }
#pragma empty_line
  // Specialization: for char types we can use memset.
  template<typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, void>::__type
    __fill_a(_Tp* __first, _Tp* __last, const _Tp& __c)
    {
      const _Tp __tmp = __c;
      __builtin_memset(__first, static_cast<unsigned char>(__tmp),
         __last - __first);
    }
#pragma empty_line
  /**
   *  @brief Fills the range [first,last) with copies of value.
   *  @ingroup mutating_algorithms
   *  @param  first  A forward iterator.
   *  @param  last   A forward iterator.
   *  @param  value  A reference-to-const of arbitrary type.
   *  @return   Nothing.
   *
   *  This function fills a range with copies of the same value.  For char
   *  types filling contiguous areas of memory, this becomes an inline call
   *  to @c memset or @c wmemset.
  */
  template<typename _ForwardIterator, typename _Tp>
    inline void
    fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __value)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
                                                     ;
#pragma empty_line
      std::__fill_a(std::__niter_base(__first), std::__niter_base(__last),
      __value);
    }
#pragma empty_line
  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      for (; __n > 0; --__n, ++__first)
 *__first = __value;
      return __first;
    }
#pragma empty_line
  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __n > 0; --__n, ++__first)
 *__first = __tmp;
      return __first;
    }
#pragma empty_line
  template<typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, _Tp*>::__type
    __fill_n_a(_Tp* __first, _Size __n, const _Tp& __c)
    {
      std::__fill_a(__first, __first + __n, __c);
      return __first + __n;
    }
#pragma empty_line
  /**
   *  @brief Fills the range [first,first+n) with copies of value.
   *  @ingroup mutating_algorithms
   *  @param  first  An output iterator.
   *  @param  n      The count of copies to perform.
   *  @param  value  A reference-to-const of arbitrary type.
   *  @return   The iterator at first+n.
   *
   *  This function fills a range with copies of the same value.  For char
   *  types filling contiguous areas of memory, this becomes an inline call
   *  to @c memset or @ wmemset.
   *
   *  _GLIBCXX_RESOLVE_LIB_DEFECTS
   *  DR 865. More algorithms that throw away information
  */
  template<typename _OI, typename _Size, typename _Tp>
    inline _OI
    fill_n(_OI __first, _Size __n, const _Tp& __value)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
      return _OI(std::__fill_n_a(std::__niter_base(__first), __n, __value));
    }
#pragma empty_line
  template<bool _BoolType>
    struct __equal
    {
      template<typename _II1, typename _II2>
        static bool
        equal(_II1 __first1, _II1 __last1, _II2 __first2)
        {
   for (; __first1 != __last1; ++__first1, ++__first2)
     if (!(*__first1 == *__first2))
       return false;
   return true;
 }
    };
#pragma empty_line
  template<>
    struct __equal<true>
    {
      template<typename _Tp>
        static bool
        equal(const _Tp* __first1, const _Tp* __last1, const _Tp* __first2)
        {
   return !__builtin_memcmp(__first1, __first2, sizeof(_Tp)
       * (__last1 - __first1));
 }
    };
#pragma empty_line
  template<typename _II1, typename _II2>
    inline bool
    __equal_aux(_II1 __first1, _II1 __last1, _II2 __first2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple = (__is_integer<_ValueType1>::__value
                      && __is_pointer<_II1>::__value
                      && __is_pointer<_II2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);
#pragma empty_line
      return std::__equal<__simple>::equal(__first1, __last1, __first2);
    }
#pragma empty_line
#pragma empty_line
  template<typename, typename>
    struct __lc_rai
    {
      template<typename _II1, typename _II2>
        static _II1
        __newlast1(_II1, _II1 __last1, _II2, _II2)
        { return __last1; }
#pragma empty_line
      template<typename _II>
        static bool
        __cnd2(_II __first, _II __last)
        { return __first != __last; }
    };
#pragma empty_line
  template<>
    struct __lc_rai<random_access_iterator_tag, random_access_iterator_tag>
    {
      template<typename _RAI1, typename _RAI2>
        static _RAI1
        __newlast1(_RAI1 __first1, _RAI1 __last1,
     _RAI2 __first2, _RAI2 __last2)
        {
   const typename iterator_traits<_RAI1>::difference_type
     __diff1 = __last1 - __first1;
   const typename iterator_traits<_RAI2>::difference_type
     __diff2 = __last2 - __first2;
   return __diff2 < __diff1 ? __first1 + __diff2 : __last1;
 }
#pragma empty_line
      template<typename _RAI>
        static bool
        __cnd2(_RAI, _RAI)
        { return true; }
    };
#pragma empty_line
  template<bool _BoolType>
    struct __lexicographical_compare
    {
      template<typename _II1, typename _II2>
        static bool __lc(_II1, _II1, _II2, _II2);
    };
#pragma empty_line
  template<bool _BoolType>
    template<typename _II1, typename _II2>
      bool
      __lexicographical_compare<_BoolType>::
      __lc(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
      {
 typedef typename iterator_traits<_II1>::iterator_category _Category1;
 typedef typename iterator_traits<_II2>::iterator_category _Category2;
 typedef std::__lc_rai<_Category1, _Category2> __rai_type;
#pragma empty_line
 __last1 = __rai_type::__newlast1(__first1, __last1,
      __first2, __last2);
 for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
      ++__first1, ++__first2)
   {
     if (*__first1 < *__first2)
       return true;
     if (*__first2 < *__first1)
       return false;
   }
 return __first1 == __last1 && __first2 != __last2;
      }
#pragma empty_line
  template<>
    struct __lexicographical_compare<true>
    {
      template<typename _Tp, typename _Up>
        static bool
        __lc(const _Tp* __first1, const _Tp* __last1,
      const _Up* __first2, const _Up* __last2)
 {
   const size_t __len1 = __last1 - __first1;
   const size_t __len2 = __last2 - __first2;
   const int __result = __builtin_memcmp(__first1, __first2,
      std::min(__len1, __len2));
   return __result != 0 ? __result < 0 : __len1 < __len2;
 }
    };
#pragma empty_line
  template<typename _II1, typename _II2>
    inline bool
    __lexicographical_compare_aux(_II1 __first1, _II1 __last1,
      _II2 __first2, _II2 __last2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple =
 (__is_byte<_ValueType1>::__value && __is_byte<_ValueType2>::__value
  && !__gnu_cxx::__numeric_traits<_ValueType1>::__is_signed
  && !__gnu_cxx::__numeric_traits<_ValueType2>::__is_signed
  && __is_pointer<_II1>::__value
  && __is_pointer<_II2>::__value);
#pragma empty_line
      return std::__lexicographical_compare<__simple>::__lc(__first1, __last1,
           __first2, __last2);
    }
#pragma empty_line
  /**
   *  @brief Finds the first position in which @a val could be inserted
   *         without changing the ordering.
   *  @param  first   An iterator.
   *  @param  last    Another iterator.
   *  @param  val     The search term.
   *  @return         An iterator pointing to the first element <em>not less
   *                  than</em> @a val, or end() if every element is less than 
   *                  @a val.
   *  @ingroup binary_search_algorithms
  */
  template<typename _ForwardIterator, typename _Tp>
    _ForwardIterator
    lower_bound(_ForwardIterator __first, _ForwardIterator __last,
  const _Tp& __val)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;
      typedef typename iterator_traits<_ForwardIterator>::difference_type
 _DistanceType;
#pragma empty_line
      // concept requirements
#pragma empty_line
#pragma empty_line
                                                                  ;
#pragma empty_line
      _DistanceType __len = std::distance(__first, __last);
      _DistanceType __half;
      _ForwardIterator __middle;
#pragma empty_line
      while (__len > 0)
 {
   __half = __len >> 1;
   __middle = __first;
   std::advance(__middle, __half);
   if (*__middle < __val)
     {
       __first = __middle;
       ++__first;
       __len = __len - __half - 1;
     }
   else
     __len = __half;
 }
      return __first;
    }
#pragma empty_line
  /// This is a helper function for the sort routines and for random.tcc.
  //  Precondition: __n > 0.
  template<typename _Size>
    inline _Size
    __lg(_Size __n)
    {
      _Size __k;
      for (__k = 0; __n != 0; __n >>= 1)
 ++__k;
      return __k - 1;
    }
#pragma empty_line
  inline int
  __lg(int __n)
  { return sizeof(int) * 8 - 1 - __builtin_clz(__n); }
#pragma empty_line
  inline long
  __lg(long __n)
  { return sizeof(long) * 8 - 1 - __builtin_clzl(__n); }
#pragma empty_line
  inline long long
  __lg(long long __n)
  { return sizeof(long long) * 8 - 1 - __builtin_clzll(__n); }
#pragma empty_line
}
#pragma empty_line
namespace std {
#pragma empty_line
  /**
   *  @brief Tests a range for element-wise equality.
   *  @ingroup non_mutating_algorithms
   *  @param  first1  An input iterator.
   *  @param  last1   An input iterator.
   *  @param  first2  An input iterator.
   *  @return   A boolean true or false.
   *
   *  This compares the elements of two ranges using @c == and returns true or
   *  false depending on whether all of the corresponding elements of the
   *  ranges are equal.
  */
  template<typename _II1, typename _II2>
    inline bool
    equal(_II1 __first1, _II1 __last1, _II2 __first2)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
                                                       ;
#pragma empty_line
      return std::__equal_aux(std::__niter_base(__first1),
         std::__niter_base(__last1),
         std::__niter_base(__first2));
    }
#pragma empty_line
  /**
   *  @brief Tests a range for element-wise equality.
   *  @ingroup non_mutating_algorithms
   *  @param  first1  An input iterator.
   *  @param  last1   An input iterator.
   *  @param  first2  An input iterator.
   *  @param binary_pred A binary predicate @link functors
   *                  functor@endlink.
   *  @return         A boolean true or false.
   *
   *  This compares the elements of two ranges using the binary_pred
   *  parameter, and returns true or
   *  false depending on whether all of the corresponding elements of the
   *  ranges are equal.
  */
  template<typename _IIter1, typename _IIter2, typename _BinaryPredicate>
    inline bool
    equal(_IIter1 __first1, _IIter1 __last1,
   _IIter2 __first2, _BinaryPredicate __binary_pred)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
                                                       ;
#pragma empty_line
      for (; __first1 != __last1; ++__first1, ++__first2)
 if (!bool(__binary_pred(*__first1, *__first2)))
   return false;
      return true;
    }
#pragma empty_line
  /**
   *  @brief Performs @b dictionary comparison on ranges.
   *  @ingroup sorting_algorithms
   *  @param  first1  An input iterator.
   *  @param  last1   An input iterator.
   *  @param  first2  An input iterator.
   *  @param  last2   An input iterator.
   *  @return   A boolean true or false.
   *
   *  <em>Returns true if the sequence of elements defined by the range
   *  [first1,last1) is lexicographically less than the sequence of elements
   *  defined by the range [first2,last2).  Returns false otherwise.</em>
   *  (Quoted from [25.3.8]/1.)  If the iterators are all character pointers,
   *  then this is an inline call to @c memcmp.
  */
  template<typename _II1, typename _II2>
    inline bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2)
    {
      // concept requirements
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
                                                       ;
                                                       ;
#pragma empty_line
      return std::__lexicographical_compare_aux(std::__niter_base(__first1),
      std::__niter_base(__last1),
      std::__niter_base(__first2),
      std::__niter_base(__last2));
    }
#pragma empty_line
  /**
   *  @brief Performs @b dictionary comparison on ranges.
   *  @ingroup sorting_algorithms
   *  @param  first1  An input iterator.
   *  @param  last1   An input iterator.
   *  @param  first2  An input iterator.
   *  @param  last2   An input iterator.
   *  @param  comp  A @link comparison_functors comparison functor@endlink.
   *  @return   A boolean true or false.
   *
   *  The same as the four-parameter @c lexicographical_compare, but uses the
   *  comp parameter instead of @c <.
  */
  template<typename _II1, typename _II2, typename _Compare>
    bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2, _Compare __comp)
    {
      typedef typename iterator_traits<_II1>::iterator_category _Category1;
      typedef typename iterator_traits<_II2>::iterator_category _Category2;
      typedef std::__lc_rai<_Category1, _Category2> __rai_type;
#pragma empty_line
      // concept requirements
#pragma empty_line
#pragma empty_line
                                                       ;
                                                       ;
#pragma empty_line
      __last1 = __rai_type::__newlast1(__first1, __last1, __first2, __last2);
      for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
    ++__first1, ++__first2)
 {
   if (__comp(*__first1, *__first2))
     return true;
   if (__comp(*__first2, *__first1))
     return false;
 }
      return __first1 == __last1 && __first2 != __last2;
    }
#pragma empty_line
  /**
   *  @brief Finds the places in ranges which don't match.
   *  @ingroup non_mutating_algorithms
   *  @param  first1  An input iterator.
   *  @param  last1   An input iterator.
   *  @param  first2  An input iterator.
   *  @return   A pair of iterators pointing to the first mismatch.
   *
   *  This compares the elements of two ranges using @c == and returns a pair
   *  of iterators.  The first iterator points into the first range, the
   *  second iterator points into the second range, and the elements pointed
   *  to by the iterators are not equal.
  */
  template<typename _InputIterator1, typename _InputIterator2>
    pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
                                                       ;
#pragma empty_line
      while (__first1 != __last1 && *__first1 == *__first2)
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }
#pragma empty_line
  /**
   *  @brief Finds the places in ranges which don't match.
   *  @ingroup non_mutating_algorithms
   *  @param  first1  An input iterator.
   *  @param  last1   An input iterator.
   *  @param  first2  An input iterator.
   *  @param binary_pred A binary predicate @link functors
   *         functor@endlink.
   *  @return   A pair of iterators pointing to the first mismatch.
   *
   *  This compares the elements of two ranges using the binary_pred
   *  parameter, and returns a pair
   *  of iterators.  The first iterator points into the first range, the
   *  second iterator points into the second range, and the elements pointed
   *  to by the iterators are not equal.
  */
  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _BinaryPredicate __binary_pred)
    {
      // concept requirements
#pragma empty_line
#pragma empty_line
                                                       ;
#pragma empty_line
      while (__first1 != __last1 && bool(__binary_pred(*__first1, *__first2)))
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }
#pragma empty_line
}
#pragma empty_line
// NB: This file is included within many other C++ includes, as a way
// of getting the base algorithms. So, make sure that parallel bits
// come in too if requested. 
#pragma line 63 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_tree.h" 2 3
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 1 3
// Allocators -*- C++ -*-
#pragma empty_line
// Copyright (C) 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/*
 * Copyright (c) 1996-1997
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */
#pragma empty_line
/** @file allocator.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
// Define the base class to std::allocator.
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++allocator.h" 1 3
// Base to std::allocator -*- C++ -*-
#pragma empty_line
// Copyright (C) 2004, 2005, 2009 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file c++allocator.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
// Define new_allocator as the base class to std::allocator.
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/new_allocator.h" 1 3
// Allocator that wraps operator new -*- C++ -*-
#pragma empty_line
// Copyright (C) 2001, 2002, 2003, 2004, 2005, 2009
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file ext/new_allocator.h
 *  This file is a GNU extension to the Standard C++ Library.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\new" 1 3
// The -*- C++ -*- dynamic memory management header.
#pragma empty_line
// Copyright (C) 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001, 2002,
// 2003, 2004, 2005, 2006, 2007, 2009, 2010
// Free Software Foundation
#pragma empty_line
// This file is part of GCC.
//
// GCC is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3, or (at your option)
// any later version.
// 
// GCC is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file new
 *  This is a Standard C++ Library header.
 *
 *  The header @c new defines several functions to manage dynamic memory and
 *  handling memory allocation errors; see
 *  http://gcc.gnu.org/onlinedocs/libstdc++/18_support/howto.html#4 for more.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 39 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\new" 3
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
// -*- C++ -*- forwarding header.
#pragma empty_line
// Copyright (C) 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005,
// 2006, 2007, 2008, 2009, 2010
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file cstddef
 *  This is a Standard C++ Library file.  You should @c \#include this file
 *  in your programs, rather than any of the @a *.h implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c stddef.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std (except for names which are defined
 *  as macros in C).
 */
#pragma empty_line
//
// ISO C++ 14882: 18.1  Types
//
#pragma empty_line
#pragma empty_line
#pragma line 41 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */
#pragma line 56 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#pragma line 44 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
#pragma line 41 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\new" 2 3
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 1 3
// Exception Handling support header for -*- C++ -*-
#pragma empty_line
// Copyright (C) 1995, 1996, 1997, 1998, 1999, 2000, 2001, 2002, 2003,
// 2004, 2005, 2006, 2007, 2008, 2009, 2010
// Free Software Foundation
//
// This file is part of GCC.
//
// GCC is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3, or (at your option)
// any later version.
//
// GCC is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file exception
 *  This is a Standard C++ Library header.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 35 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 3
#pragma empty_line
#pragma GCC visibility push(default)
#pragma empty_line
#pragma empty_line
#pragma empty_line
extern "C++" {
#pragma empty_line
namespace std
{
  /**
   * @defgroup exceptions Exceptions
   * @ingroup diagnostics
   *
   * Classes and functions for reporting errors via exception classes.
   * @{
   */
#pragma empty_line
  /**
   *  @brief Base class for all library exceptions.
   *
   *  This is the base class for all exceptions thrown by the standard
   *  library, and by certain language expressions.  You are free to derive
   *  your own %exception classes, or use a different hierarchy, or to
   *  throw non-class data (e.g., fundamental types).
   */
  class exception
  {
  public:
    exception() throw() { }
    virtual ~exception() throw();
#pragma empty_line
    /** Returns a C-style character string describing the general cause
     *  of the current error.  */
    virtual const char* what() const throw();
  };
#pragma empty_line
  /** If an %exception is thrown which is not listed in a function's
   *  %exception specification, one of these may be thrown.  */
  class bad_exception : public exception
  {
  public:
    bad_exception() throw() { }
#pragma empty_line
    // This declaration is not useless:
    // http://gcc.gnu.org/onlinedocs/gcc-3.0.2/gcc_6.html#SEC118
    virtual ~bad_exception() throw();
#pragma empty_line
    // See comment in eh_exception.cc.
    virtual const char* what() const throw();
  };
#pragma empty_line
  /// If you write a replacement %terminate handler, it must be of this type.
  typedef void (*terminate_handler) ();
#pragma empty_line
  /// If you write a replacement %unexpected handler, it must be of this type.
  typedef void (*unexpected_handler) ();
#pragma empty_line
  /// Takes a new handler function as an argument, returns the old function.
  terminate_handler set_terminate(terminate_handler) throw();
#pragma empty_line
  /** The runtime will call this function if %exception handling must be
   *  abandoned for any reason.  It can also be called by the user.  */
  void terminate() throw() __attribute__ ((__noreturn__));
#pragma empty_line
  /// Takes a new handler function as an argument, returns the old function.
  unexpected_handler set_unexpected(unexpected_handler) throw();
#pragma empty_line
  /** The runtime will call this function if an %exception is thrown which
   *  violates the function's %exception specification.  */
  void unexpected() __attribute__ ((__noreturn__));
#pragma empty_line
  /** [18.6.4]/1:  'Returns true after completing evaluation of a
   *  throw-expression until either completing initialization of the
   *  exception-declaration in the matching handler or entering @c unexpected()
   *  due to the throw; or after entering @c terminate() for any reason
   *  other than an explicit call to @c terminate().  [Note: This includes
   *  stack unwinding [15.2].  end note]'
   *
   *  2: 'When @c uncaught_exception() is true, throwing an
   *  %exception can result in a call of @c terminate()
   *  (15.5.1).'
   */
  bool uncaught_exception() throw() __attribute__ ((__pure__));
#pragma empty_line
  // @} group exceptions
} // namespace std
#pragma empty_line
namespace __gnu_cxx {
#pragma empty_line
  /**
   *  @brief A replacement for the standard terminate_handler which
   *  prints more information about the terminating exception (if any)
   *  on stderr.
   *
   *  @ingroup exceptions
   *
   *  Call
   *   @code
   *     std::set_terminate(__gnu_cxx::__verbose_terminate_handler)
   *   @endcode
   *  to use.  For more info, see
   *  http://gcc.gnu.org/onlinedocs/libstdc++/manual/bk01pt02ch06s02.html
   *
   *  In 3.4 and later, this is on by default.
   */
  void __verbose_terminate_handler();
#pragma empty_line
}
#pragma empty_line
} // extern "C++"
#pragma empty_line
#pragma GCC visibility pop
#pragma line 42 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\new" 2 3
#pragma empty_line
#pragma GCC visibility push(default)
#pragma empty_line
extern "C++" {
#pragma empty_line
namespace std
{
  /**
   *  @brief  Exception possibly thrown by @c new.
   *  @ingroup exceptions
   *
   *  @c bad_alloc (or classes derived from it) is used to report allocation
   *  errors from the throwing forms of @c new.  */
  class bad_alloc : public exception
  {
  public:
    bad_alloc() throw() { }
#pragma empty_line
    // This declaration is not useless:
    // http://gcc.gnu.org/onlinedocs/gcc-3.0.2/gcc_6.html#SEC118
    virtual ~bad_alloc() throw();
#pragma empty_line
    // See comment in eh_exception.cc.
    virtual const char* what() const throw();
  };
#pragma empty_line
  struct nothrow_t { };
#pragma empty_line
  extern const nothrow_t nothrow;
#pragma empty_line
  /** If you write your own error handler to be called by @c new, it must
   *  be of this type.  */
  typedef void (*new_handler)();
#pragma empty_line
  /// Takes a replacement handler as the argument, returns the
  /// previous handler.
  new_handler set_new_handler(new_handler) throw();
} // namespace std
#pragma empty_line
//@{
/** These are replaceable signatures:
 *  - normal single new and delete (no arguments, throw @c bad_alloc on error)
 *  - normal array new and delete (same)
 *  - @c nothrow single new and delete (take a @c nothrow argument, return
 *    @c NULL on error)
 *  - @c nothrow array new and delete (same)
 *
 *  Placement new and delete signatures (take a memory address argument,
 *  does nothing) may not be replaced by a user's program.
*/
void* operator new(std::size_t) throw (std::bad_alloc);
void* operator new[](std::size_t) throw (std::bad_alloc);
void operator delete(void*) throw();
void operator delete[](void*) throw();
void* operator new(std::size_t, const std::nothrow_t&) throw();
void* operator new[](std::size_t, const std::nothrow_t&) throw();
void operator delete(void*, const std::nothrow_t&) throw();
void operator delete[](void*, const std::nothrow_t&) throw();
#pragma empty_line
// Default placement versions of operator new.
inline void* operator new(std::size_t, void* __p) throw() { return __p; }
inline void* operator new[](std::size_t, void* __p) throw() { return __p; }
#pragma empty_line
// Default placement versions of operator delete.
inline void operator delete (void*, void*) throw() { }
inline void operator delete[](void*, void*) throw() { }
//@}
} // extern "C++"
#pragma empty_line
#pragma GCC visibility pop
#pragma line 34 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/new_allocator.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace __gnu_cxx {
#pragma empty_line
  using std::size_t;
  using std::ptrdiff_t;
#pragma empty_line
  /**
   *  @brief  An allocator that uses global new, as per [20.4].
   *  @ingroup allocators
   *
   *  This is precisely the allocator defined in the C++ Standard. 
   *    - all allocation calls operator new
   *    - all deallocation calls operator delete
   */
  template<typename _Tp>
    class new_allocator
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;
#pragma empty_line
      template<typename _Tp1>
        struct rebind
        { typedef new_allocator<_Tp1> other; };
#pragma empty_line
      new_allocator() throw() { }
#pragma empty_line
      new_allocator(const new_allocator&) throw() { }
#pragma empty_line
      template<typename _Tp1>
        new_allocator(const new_allocator<_Tp1>&) throw() { }
#pragma empty_line
      ~new_allocator() throw() { }
#pragma empty_line
      pointer
      address(reference __x) const { return &__x; }
#pragma empty_line
      const_pointer
      address(const_reference __x) const { return &__x; }
#pragma empty_line
      // NB: __n is permitted to be 0.  The C++ standard says nothing
      // about what the return value is when __n == 0.
      pointer
      allocate(size_type __n, const void* = 0)
      {
 if (__n > this->max_size())
   std::__throw_bad_alloc();
#pragma empty_line
 return static_cast<_Tp*>(::operator new(__n * sizeof(_Tp)));
      }
#pragma empty_line
      // __p is not permitted to be a null pointer.
      void
      deallocate(pointer __p, size_type)
      { ::operator delete(__p); }
#pragma empty_line
      size_type
      max_size() const throw()
      { return size_t(-1) / sizeof(_Tp); }
#pragma empty_line
      // _GLIBCXX_RESOLVE_LIB_DEFECTS
      // 402. wrong new expression in [some_] allocator::construct
      void
      construct(pointer __p, const _Tp& __val)
      { ::new((void *)__p) _Tp(__val); }
#pragma line 114 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/new_allocator.h" 3
      void
      destroy(pointer __p) { __p->~_Tp(); }
    };
#pragma empty_line
  template<typename _Tp>
    inline bool
    operator==(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return true; }
#pragma empty_line
  template<typename _Tp>
    inline bool
    operator!=(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return false; }
#pragma empty_line
}
#pragma line 35 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++allocator.h" 2 3
#pragma line 49 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 2 3
#pragma empty_line
namespace std {
#pragma empty_line
  /**
   * @defgroup allocators Allocators
   * @ingroup memory
   *
   * Classes encapsulating memory operations.
   */
#pragma empty_line
  template<typename _Tp>
    class allocator;
#pragma empty_line
  /// allocator<void> specialization.
  template<>
    class allocator<void>
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef void* pointer;
      typedef const void* const_pointer;
      typedef void value_type;
#pragma empty_line
      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };
    };
#pragma empty_line
  /**
   * @brief  The @a standard allocator, as per [20.4].
   * @ingroup allocators
   *
   *  Further details:
   *  http://gcc.gnu.org/onlinedocs/libstdc++/manual/bk01pt04ch11.html
   */
  template<typename _Tp>
    class allocator: public __gnu_cxx::new_allocator<_Tp>
    {
   public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;
#pragma empty_line
      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };
#pragma empty_line
      allocator() throw() { }
#pragma empty_line
      allocator(const allocator& __a) throw()
      : __gnu_cxx::new_allocator<_Tp>(__a) { }
#pragma empty_line
      template<typename _Tp1>
        allocator(const allocator<_Tp1>&) throw() { }
#pragma empty_line
      ~allocator() throw() { }
#pragma empty_line
      // Inherit everything else.
    };
#pragma empty_line
  template<typename _T1, typename _T2>
    inline bool
    operator==(const allocator<_T1>&, const allocator<_T2>&)
    { return true; }
#pragma empty_line
  template<typename _Tp>
    inline bool
    operator==(const allocator<_Tp>&, const allocator<_Tp>&)
    { return true; }
#pragma empty_line
  template<typename _T1, typename _T2>
    inline bool
    operator!=(const allocator<_T1>&, const allocator<_T2>&)
    { return false; }
#pragma empty_line
  template<typename _Tp>
    inline bool
    operator!=(const allocator<_Tp>&, const allocator<_Tp>&)
    { return false; }
#pragma empty_line
  // Inhibit implicit instantiations for required instantiations,
  // which are defined via explicit instantiations elsewhere.
  // NB: This syntax is a GNU extension.
#pragma empty_line
  extern template class allocator<char>;
  extern template class allocator<wchar_t>;
#pragma empty_line
#pragma empty_line
  // Undefine.
#pragma empty_line
#pragma empty_line
  // To implement Option 3 of DR 431.
  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_swap
    { static void _S_do_it(_Alloc&, _Alloc&) { } };
#pragma empty_line
  template<typename _Alloc>
    struct __alloc_swap<_Alloc, false>
    {
      static void
      _S_do_it(_Alloc& __one, _Alloc& __two)
      {
 // Precondition: swappable allocators.
 if (__one != __two)
   swap(__one, __two);
      }
    };
#pragma empty_line
  // Optimize for stateless allocators.
  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_neq
    {
      static bool
      _S_do_it(const _Alloc&, const _Alloc&)
      { return false; }
    };
#pragma empty_line
  template<typename _Alloc>
    struct __alloc_neq<_Alloc, false>
    {
      static bool
      _S_do_it(const _Alloc& __one, const _Alloc& __two)
      { return __one != __two; }
    };
#pragma line 204 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 3
}
#pragma line 64 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_tree.h" 2 3
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 1 3
// Functor implementations -*- C++ -*-
#pragma empty_line
// Copyright (C) 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2009, 2010
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996-1998
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */
#pragma empty_line
/** @file stl_function.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace std {
#pragma empty_line
  // 20.3.1 base classes
  /** @defgroup functors Function Objects
   * @ingroup utilities
   *
   *  Function objects, or @e functors, are objects with an @c operator()
   *  defined and accessible.  They can be passed as arguments to algorithm
   *  templates and used in place of a function pointer.  Not only is the
   *  resulting expressiveness of the library increased, but the generated
   *  code can be more efficient than what you might write by hand.  When we
   *  refer to @a functors, then, generally we include function pointers in
   *  the description as well.
   *
   *  Often, functors are only created as temporaries passed to algorithm
   *  calls, rather than being created as named variables.
   *
   *  Two examples taken from the standard itself follow.  To perform a
   *  by-element addition of two vectors @c a and @c b containing @c double,
   *  and put the result in @c a, use
   *  \code
   *  transform (a.begin(), a.end(), b.begin(), a.begin(), plus<double>());
   *  \endcode
   *  To negate every element in @c a, use
   *  \code
   *  transform(a.begin(), a.end(), a.begin(), negate<double>());
   *  \endcode
   *  The addition and negation functions will be inlined directly.
   *
   *  The standard functors are derived from structs named @c unary_function
   *  and @c binary_function.  These two classes contain nothing but typedefs,
   *  to aid in generic (template) programming.  If you write your own
   *  functors, you might consider doing the same.
   *
   *  @{
   */
  /**
   *  This is one of the @link functors functor base classes@endlink.
   */
  template<typename _Arg, typename _Result>
    struct unary_function
    {
      typedef _Arg argument_type; ///< @c argument_type is the type of the
                                    ///     argument (no surprises here)
#pragma empty_line
      typedef _Result result_type; ///< @c result_type is the return type
    };
#pragma empty_line
  /**
   *  This is one of the @link functors functor base classes@endlink.
   */
  template<typename _Arg1, typename _Arg2, typename _Result>
    struct binary_function
    {
      typedef _Arg1 first_argument_type; ///< the type of the first argument
                                           ///  (no surprises here)
#pragma empty_line
      typedef _Arg2 second_argument_type; ///< the type of the second argument
      typedef _Result result_type; ///< type of the return type
    };
  /** @}  */
#pragma empty_line
  // 20.3.2 arithmetic
  /** @defgroup arithmetic_functors Arithmetic Classes
   * @ingroup functors
   *
   *  Because basic math often needs to be done during an algorithm,
   *  the library provides functors for those operations.  See the
   *  documentation for @link functors the base classes@endlink
   *  for examples of their use.
   *
   *  @{
   */
  /// One of the @link arithmetic_functors math functors@endlink.
  template<typename _Tp>
    struct plus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x + __y; }
    };
#pragma empty_line
  /// One of the @link arithmetic_functors math functors@endlink.
  template<typename _Tp>
    struct minus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x - __y; }
    };
#pragma empty_line
  /// One of the @link arithmetic_functors math functors@endlink.
  template<typename _Tp>
    struct multiplies : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x * __y; }
    };
#pragma empty_line
  /// One of the @link arithmetic_functors math functors@endlink.
  template<typename _Tp>
    struct divides : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x / __y; }
    };
#pragma empty_line
  /// One of the @link arithmetic_functors math functors@endlink.
  template<typename _Tp>
    struct modulus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x % __y; }
    };
#pragma empty_line
  /// One of the @link arithmetic_functors math functors@endlink.
  template<typename _Tp>
    struct negate : public unary_function<_Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x) const
      { return -__x; }
    };
  /** @}  */
#pragma empty_line
  // 20.3.3 comparisons
  /** @defgroup comparison_functors Comparison Classes
   * @ingroup functors
   *
   *  The library provides six wrapper functors for all the basic comparisons
   *  in C++, like @c <.
   *
   *  @{
   */
  /// One of the @link comparison_functors comparison functors@endlink.
  template<typename _Tp>
    struct equal_to : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x == __y; }
    };
#pragma empty_line
  /// One of the @link comparison_functors comparison functors@endlink.
  template<typename _Tp>
    struct not_equal_to : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x != __y; }
    };
#pragma empty_line
  /// One of the @link comparison_functors comparison functors@endlink.
  template<typename _Tp>
    struct greater : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x > __y; }
    };
#pragma empty_line
  /// One of the @link comparison_functors comparison functors@endlink.
  template<typename _Tp>
    struct less : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x < __y; }
    };
#pragma empty_line
  /// One of the @link comparison_functors comparison functors@endlink.
  template<typename _Tp>
    struct greater_equal : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x >= __y; }
    };
#pragma empty_line
  /// One of the @link comparison_functors comparison functors@endlink.
  template<typename _Tp>
    struct less_equal : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x <= __y; }
    };
  /** @}  */
#pragma empty_line
  // 20.3.4 logical operations
  /** @defgroup logical_functors Boolean Operations Classes
   * @ingroup functors
   *
   *  Here are wrapper functors for Boolean operations: @c &&, @c ||,
   *  and @c !.
   *
   *  @{
   */
  /// One of the @link logical_functors Boolean operations functors@endlink.
  template<typename _Tp>
    struct logical_and : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x && __y; }
    };
#pragma empty_line
  /// One of the @link logical_functors Boolean operations functors@endlink.
  template<typename _Tp>
    struct logical_or : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x || __y; }
    };
#pragma empty_line
  /// One of the @link logical_functors Boolean operations functors@endlink.
  template<typename _Tp>
    struct logical_not : public unary_function<_Tp, bool>
    {
      bool
      operator()(const _Tp& __x) const
      { return !__x; }
    };
  /** @}  */
#pragma empty_line
  // _GLIBCXX_RESOLVE_LIB_DEFECTS
  // DR 660. Missing Bitwise Operations.
  template<typename _Tp>
    struct bit_and : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x & __y; }
    };
#pragma empty_line
  template<typename _Tp>
    struct bit_or : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x | __y; }
    };
#pragma empty_line
  template<typename _Tp>
    struct bit_xor : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x ^ __y; }
    };
#pragma empty_line
  // 20.3.5 negators
  /** @defgroup negators Negators
   * @ingroup functors
   *
   *  The functions @c not1 and @c not2 each take a predicate functor
   *  and return an instance of @c unary_negate or
   *  @c binary_negate, respectively.  These classes are functors whose
   *  @c operator() performs the stored predicate function and then returns
   *  the negation of the result.
   *
   *  For example, given a vector of integers and a trivial predicate,
   *  \code
   *  struct IntGreaterThanThree
   *    : public std::unary_function<int, bool>
   *  {
   *      bool operator() (int x) { return x > 3; }
   *  };
   *
   *  std::find_if (v.begin(), v.end(), not1(IntGreaterThanThree()));
   *  \endcode
   *  The call to @c find_if will locate the first index (i) of @c v for which
   *  <code>!(v[i] > 3)</code> is true.
   *
   *  The not1/unary_negate combination works on predicates taking a single
   *  argument.  The not2/binary_negate combination works on predicates which
   *  take two arguments.
   *
   *  @{
   */
  /// One of the @link negators negation functors@endlink.
  template<typename _Predicate>
    class unary_negate
    : public unary_function<typename _Predicate::argument_type, bool>
    {
    protected:
      _Predicate _M_pred;
#pragma empty_line
    public:
      explicit
      unary_negate(const _Predicate& __x) : _M_pred(__x) { }
#pragma empty_line
      bool
      operator()(const typename _Predicate::argument_type& __x) const
      { return !_M_pred(__x); }
    };
#pragma empty_line
  /// One of the @link negators negation functors@endlink.
  template<typename _Predicate>
    inline unary_negate<_Predicate>
    not1(const _Predicate& __pred)
    { return unary_negate<_Predicate>(__pred); }
#pragma empty_line
  /// One of the @link negators negation functors@endlink.
  template<typename _Predicate>
    class binary_negate
    : public binary_function<typename _Predicate::first_argument_type,
        typename _Predicate::second_argument_type, bool>
    {
    protected:
      _Predicate _M_pred;
#pragma empty_line
    public:
      explicit
      binary_negate(const _Predicate& __x) : _M_pred(__x) { }
#pragma empty_line
      bool
      operator()(const typename _Predicate::first_argument_type& __x,
   const typename _Predicate::second_argument_type& __y) const
      { return !_M_pred(__x, __y); }
    };
#pragma empty_line
  /// One of the @link negators negation functors@endlink.
  template<typename _Predicate>
    inline binary_negate<_Predicate>
    not2(const _Predicate& __pred)
    { return binary_negate<_Predicate>(__pred); }
  /** @}  */
#pragma empty_line
  // 20.3.7 adaptors pointers functions
  /** @defgroup pointer_adaptors Adaptors for pointers to functions
   * @ingroup functors
   *
   *  The advantage of function objects over pointers to functions is that
   *  the objects in the standard library declare nested typedefs describing
   *  their argument and result types with uniform names (e.g., @c result_type
   *  from the base classes @c unary_function and @c binary_function).
   *  Sometimes those typedefs are required, not just optional.
   *
   *  Adaptors are provided to turn pointers to unary (single-argument) and
   *  binary (double-argument) functions into function objects.  The
   *  long-winded functor @c pointer_to_unary_function is constructed with a
   *  function pointer @c f, and its @c operator() called with argument @c x
   *  returns @c f(x).  The functor @c pointer_to_binary_function does the same
   *  thing, but with a double-argument @c f and @c operator().
   *
   *  The function @c ptr_fun takes a pointer-to-function @c f and constructs
   *  an instance of the appropriate functor.
   *
   *  @{
   */
  /// One of the @link pointer_adaptors adaptors for function pointers@endlink.
  template<typename _Arg, typename _Result>
    class pointer_to_unary_function : public unary_function<_Arg, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg);
#pragma empty_line
    public:
      pointer_to_unary_function() { }
#pragma empty_line
      explicit
      pointer_to_unary_function(_Result (*__x)(_Arg))
      : _M_ptr(__x) { }
#pragma empty_line
      _Result
      operator()(_Arg __x) const
      { return _M_ptr(__x); }
    };
#pragma empty_line
  /// One of the @link pointer_adaptors adaptors for function pointers@endlink.
  template<typename _Arg, typename _Result>
    inline pointer_to_unary_function<_Arg, _Result>
    ptr_fun(_Result (*__x)(_Arg))
    { return pointer_to_unary_function<_Arg, _Result>(__x); }
#pragma empty_line
  /// One of the @link pointer_adaptors adaptors for function pointers@endlink.
  template<typename _Arg1, typename _Arg2, typename _Result>
    class pointer_to_binary_function
    : public binary_function<_Arg1, _Arg2, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg1, _Arg2);
#pragma empty_line
    public:
      pointer_to_binary_function() { }
#pragma empty_line
      explicit
      pointer_to_binary_function(_Result (*__x)(_Arg1, _Arg2))
      : _M_ptr(__x) { }
#pragma empty_line
      _Result
      operator()(_Arg1 __x, _Arg2 __y) const
      { return _M_ptr(__x, __y); }
    };
#pragma empty_line
  /// One of the @link pointer_adaptors adaptors for function pointers@endlink.
  template<typename _Arg1, typename _Arg2, typename _Result>
    inline pointer_to_binary_function<_Arg1, _Arg2, _Result>
    ptr_fun(_Result (*__x)(_Arg1, _Arg2))
    { return pointer_to_binary_function<_Arg1, _Arg2, _Result>(__x); }
  /** @}  */
#pragma empty_line
  template<typename _Tp>
    struct _Identity : public unary_function<_Tp,_Tp>
    {
      _Tp&
      operator()(_Tp& __x) const
      { return __x; }
#pragma empty_line
      const _Tp&
      operator()(const _Tp& __x) const
      { return __x; }
    };
#pragma empty_line
  template<typename _Pair>
    struct _Select1st : public unary_function<_Pair,
           typename _Pair::first_type>
    {
      typename _Pair::first_type&
      operator()(_Pair& __x) const
      { return __x.first; }
#pragma empty_line
      const typename _Pair::first_type&
      operator()(const _Pair& __x) const
      { return __x.first; }
    };
#pragma empty_line
  template<typename _Pair>
    struct _Select2nd : public unary_function<_Pair,
           typename _Pair::second_type>
    {
      typename _Pair::second_type&
      operator()(_Pair& __x) const
      { return __x.second; }
#pragma empty_line
      const typename _Pair::second_type&
      operator()(const _Pair& __x) const
      { return __x.second; }
    };
#pragma empty_line
  // 20.3.8 adaptors pointers members
  /** @defgroup memory_adaptors Adaptors for pointers to members
   * @ingroup functors
   *
   *  There are a total of 8 = 2^3 function objects in this family.
   *   (1) Member functions taking no arguments vs member functions taking
   *        one argument.
   *   (2) Call through pointer vs call through reference.
   *   (3) Const vs non-const member function.
   *
   *  All of this complexity is in the function objects themselves.  You can
   *   ignore it by using the helper function mem_fun and mem_fun_ref,
   *   which create whichever type of adaptor is appropriate.
   *
   *  @{
   */
  /// One of the @link memory_adaptors adaptors for member
  /// pointers@endlink.
  template<typename _Ret, typename _Tp>
    class mem_fun_t : public unary_function<_Tp*, _Ret>
    {
    public:
      explicit
      mem_fun_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }
#pragma empty_line
      _Ret
      operator()(_Tp* __p) const
      { return (__p->*_M_f)(); }
#pragma empty_line
    private:
      _Ret (_Tp::*_M_f)();
    };
#pragma empty_line
  /// One of the @link memory_adaptors adaptors for member
  /// pointers@endlink.
  template<typename _Ret, typename _Tp>
    class const_mem_fun_t : public unary_function<const _Tp*, _Ret>
    {
    public:
      explicit
      const_mem_fun_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }
#pragma empty_line
      _Ret
      operator()(const _Tp* __p) const
      { return (__p->*_M_f)(); }
#pragma empty_line
    private:
      _Ret (_Tp::*_M_f)() const;
    };
#pragma empty_line
  /// One of the @link memory_adaptors adaptors for member
  /// pointers@endlink.
  template<typename _Ret, typename _Tp>
    class mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      mem_fun_ref_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }
#pragma empty_line
      _Ret
      operator()(_Tp& __r) const
      { return (__r.*_M_f)(); }
#pragma empty_line
    private:
      _Ret (_Tp::*_M_f)();
  };
#pragma empty_line
  /// One of the @link memory_adaptors adaptors for member
  /// pointers@endlink.
  template<typename _Ret, typename _Tp>
    class const_mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      const_mem_fun_ref_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }
#pragma empty_line
      _Ret
      operator()(const _Tp& __r) const
      { return (__r.*_M_f)(); }
#pragma empty_line
    private:
      _Ret (_Tp::*_M_f)() const;
    };
#pragma empty_line
  /// One of the @link memory_adaptors adaptors for member
  /// pointers@endlink.
  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_t : public binary_function<_Tp*, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }
#pragma empty_line
      _Ret
      operator()(_Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }
#pragma empty_line
    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };
#pragma empty_line
  /// One of the @link memory_adaptors adaptors for member
  /// pointers@endlink.
  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_t : public binary_function<const _Tp*, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }
#pragma empty_line
      _Ret
      operator()(const _Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }
#pragma empty_line
    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };
#pragma empty_line
  /// One of the @link memory_adaptors adaptors for member
  /// pointers@endlink.
  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }
#pragma empty_line
      _Ret
      operator()(_Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }
#pragma empty_line
    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };
#pragma empty_line
  /// One of the @link memory_adaptors adaptors for member
  /// pointers@endlink.
  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }
#pragma empty_line
      _Ret
      operator()(const _Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }
#pragma empty_line
    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };
#pragma empty_line
  // Mem_fun adaptor helper functions.  There are only two:
  // mem_fun and mem_fun_ref.
  template<typename _Ret, typename _Tp>
    inline mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)())
    { return mem_fun_t<_Ret, _Tp>(__f); }
#pragma empty_line
  template<typename _Ret, typename _Tp>
    inline const_mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_t<_Ret, _Tp>(__f); }
#pragma empty_line
  template<typename _Ret, typename _Tp>
    inline mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)())
    { return mem_fun_ref_t<_Ret, _Tp>(__f); }
#pragma empty_line
  template<typename _Ret, typename _Tp>
    inline const_mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_ref_t<_Ret, _Tp>(__f); }
#pragma empty_line
  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_t<_Ret, _Tp, _Arg>(__f); }
#pragma empty_line
  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_t<_Ret, _Tp, _Arg>(__f); }
#pragma empty_line
  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }
#pragma empty_line
  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }
#pragma empty_line
  /** @}  */
#pragma empty_line
}
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\backward/binders.h" 1 3
// Functor implementations -*- C++ -*-
#pragma empty_line
// Copyright (C) 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2009, 2010
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996-1998
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */
#pragma empty_line
/** @file backward/binders.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace std {
#pragma empty_line
  // 20.3.6 binders
  /** @defgroup binders Binder Classes
   * @ingroup functors
   *
   *  Binders turn functions/functors with two arguments into functors
   *  with a single argument, storing an argument to be applied later.
   *  For example, a variable @c B of type @c binder1st is constructed
   *  from a functor @c f and an argument @c x. Later, B's @c
   *  operator() is called with a single argument @c y. The return
   *  value is the value of @c f(x,y). @c B can be @a called with
   *  various arguments (y1, y2, ...) and will in turn call @c
   *  f(x,y1), @c f(x,y2), ...
   *
   *  The function @c bind1st is provided to save some typing. It takes the
   *  function and an argument as parameters, and returns an instance of
   *  @c binder1st.
   *
   *  The type @c binder2nd and its creator function @c bind2nd do the same
   *  thing, but the stored argument is passed as the second parameter instead
   *  of the first, e.g., @c bind2nd(std::minus<float>,1.3) will create a
   *  functor whose @c operator() accepts a floating-point number, subtracts
   *  1.3 from it, and returns the result. (If @c bind1st had been used,
   *  the functor would perform <em>1.3 - x</em> instead.
   *
   *  Creator-wrapper functions like @c bind1st are intended to be used in
   *  calling algorithms. Their return values will be temporary objects.
   *  (The goal is to not require you to type names like
   *  @c std::binder1st<std::plus<int>> for declaring a variable to hold the
   *  return value from @c bind1st(std::plus<int>,5).
   *
   *  These become more useful when combined with the composition functions.
   *
   *  @{
   */
  /// One of the @link binders binder functors@endlink.
  template<typename _Operation>
    class binder1st
    : public unary_function<typename _Operation::second_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::first_argument_type value;
#pragma empty_line
    public:
      binder1st(const _Operation& __x,
  const typename _Operation::first_argument_type& __y)
      : op(__x), value(__y) { }
#pragma empty_line
      typename _Operation::result_type
      operator()(const typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }
#pragma empty_line
      // _GLIBCXX_RESOLVE_LIB_DEFECTS
      // 109.  Missing binders for non-const sequence elements
      typename _Operation::result_type
      operator()(typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }
    } ;
#pragma empty_line
  /// One of the @link binders binder functors@endlink.
  template<typename _Operation, typename _Tp>
    inline binder1st<_Operation>
    bind1st(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::first_argument_type _Arg1_type;
      return binder1st<_Operation>(__fn, _Arg1_type(__x));
    }
#pragma empty_line
  /// One of the @link binders binder functors@endlink.
  template<typename _Operation>
    class binder2nd
    : public unary_function<typename _Operation::first_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::second_argument_type value;
#pragma empty_line
    public:
      binder2nd(const _Operation& __x,
  const typename _Operation::second_argument_type& __y)
      : op(__x), value(__y) { }
#pragma empty_line
      typename _Operation::result_type
      operator()(const typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }
#pragma empty_line
      // _GLIBCXX_RESOLVE_LIB_DEFECTS
      // 109.  Missing binders for non-const sequence elements
      typename _Operation::result_type
      operator()(typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }
    } ;
#pragma empty_line
  /// One of the @link binders binder functors@endlink.
  template<typename _Operation, typename _Tp>
    inline binder2nd<_Operation>
    bind2nd(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::second_argument_type _Arg2_type;
      return binder2nd<_Operation>(__fn, _Arg2_type(__x));
    }
  /** @}  */
#pragma empty_line
}
#pragma line 713 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 2 3
#pragma line 65 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_tree.h" 2 3
#pragma empty_line
#pragma empty_line
namespace std {
#pragma empty_line
  // Red-black tree class, designed for use in implementing STL
  // associative containers (set, multiset, map, and multimap). The
  // insertion and deletion algorithms are based on those in Cormen,
  // Leiserson, and Rivest, Introduction to Algorithms (MIT Press,
  // 1990), except that
  //
  // (1) the header cell is maintained with links not only to the root
  // but also to the leftmost node of the tree, to enable constant
  // time begin(), and to the rightmost node of the tree, to enable
  // linear time performance when used with the generic set algorithms
  // (set_union, etc.)
  // 
  // (2) when a node being deleted has two children its successor node
  // is relinked into its place, rather than copied, so that the only
  // iterators invalidated are those referring to the deleted node.
#pragma empty_line
  enum _Rb_tree_color { _S_red = false, _S_black = true };
#pragma empty_line
  struct _Rb_tree_node_base
  {
    typedef _Rb_tree_node_base* _Base_ptr;
    typedef const _Rb_tree_node_base* _Const_Base_ptr;
#pragma empty_line
    _Rb_tree_color _M_color;
    _Base_ptr _M_parent;
    _Base_ptr _M_left;
    _Base_ptr _M_right;
#pragma empty_line
    static _Base_ptr
    _S_minimum(_Base_ptr __x)
    {
      while (__x->_M_left != 0) __x = __x->_M_left;
      return __x;
    }
#pragma empty_line
    static _Const_Base_ptr
    _S_minimum(_Const_Base_ptr __x)
    {
      while (__x->_M_left != 0) __x = __x->_M_left;
      return __x;
    }
#pragma empty_line
    static _Base_ptr
    _S_maximum(_Base_ptr __x)
    {
      while (__x->_M_right != 0) __x = __x->_M_right;
      return __x;
    }
#pragma empty_line
    static _Const_Base_ptr
    _S_maximum(_Const_Base_ptr __x)
    {
      while (__x->_M_right != 0) __x = __x->_M_right;
      return __x;
    }
  };
#pragma empty_line
  template<typename _Val>
    struct _Rb_tree_node : public _Rb_tree_node_base
    {
      typedef _Rb_tree_node<_Val>* _Link_type;
      _Val _M_value_field;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    };
#pragma empty_line
  __attribute__ ((__pure__)) _Rb_tree_node_base*
  _Rb_tree_increment(_Rb_tree_node_base* __x) throw ();
#pragma empty_line
  __attribute__ ((__pure__)) const _Rb_tree_node_base*
  _Rb_tree_increment(const _Rb_tree_node_base* __x) throw ();
#pragma empty_line
  __attribute__ ((__pure__)) _Rb_tree_node_base*
  _Rb_tree_decrement(_Rb_tree_node_base* __x) throw ();
#pragma empty_line
  __attribute__ ((__pure__)) const _Rb_tree_node_base*
  _Rb_tree_decrement(const _Rb_tree_node_base* __x) throw ();
#pragma empty_line
  template<typename _Tp>
    struct _Rb_tree_iterator
    {
      typedef _Tp value_type;
      typedef _Tp& reference;
      typedef _Tp* pointer;
#pragma empty_line
      typedef bidirectional_iterator_tag iterator_category;
      typedef ptrdiff_t difference_type;
#pragma empty_line
      typedef _Rb_tree_iterator<_Tp> _Self;
      typedef _Rb_tree_node_base::_Base_ptr _Base_ptr;
      typedef _Rb_tree_node<_Tp>* _Link_type;
#pragma empty_line
      _Rb_tree_iterator()
      : _M_node() { }
#pragma empty_line
      explicit
      _Rb_tree_iterator(_Link_type __x)
      : _M_node(__x) { }
#pragma empty_line
      reference
      operator*() const
      { return static_cast<_Link_type>(_M_node)->_M_value_field; }
#pragma empty_line
      pointer
      operator->() const
      { return &static_cast<_Link_type>(_M_node)->_M_value_field; }
#pragma empty_line
      _Self&
      operator++()
      {
 _M_node = _Rb_tree_increment(_M_node);
 return *this;
      }
#pragma empty_line
      _Self
      operator++(int)
      {
 _Self __tmp = *this;
 _M_node = _Rb_tree_increment(_M_node);
 return __tmp;
      }
#pragma empty_line
      _Self&
      operator--()
      {
 _M_node = _Rb_tree_decrement(_M_node);
 return *this;
      }
#pragma empty_line
      _Self
      operator--(int)
      {
 _Self __tmp = *this;
 _M_node = _Rb_tree_decrement(_M_node);
 return __tmp;
      }
#pragma empty_line
      bool
      operator==(const _Self& __x) const
      { return _M_node == __x._M_node; }
#pragma empty_line
      bool
      operator!=(const _Self& __x) const
      { return _M_node != __x._M_node; }
#pragma empty_line
      _Base_ptr _M_node;
  };
#pragma empty_line
  template<typename _Tp>
    struct _Rb_tree_const_iterator
    {
      typedef _Tp value_type;
      typedef const _Tp& reference;
      typedef const _Tp* pointer;
#pragma empty_line
      typedef _Rb_tree_iterator<_Tp> iterator;
#pragma empty_line
      typedef bidirectional_iterator_tag iterator_category;
      typedef ptrdiff_t difference_type;
#pragma empty_line
      typedef _Rb_tree_const_iterator<_Tp> _Self;
      typedef _Rb_tree_node_base::_Const_Base_ptr _Base_ptr;
      typedef const _Rb_tree_node<_Tp>* _Link_type;
#pragma empty_line
      _Rb_tree_const_iterator()
      : _M_node() { }
#pragma empty_line
      explicit
      _Rb_tree_const_iterator(_Link_type __x)
      : _M_node(__x) { }
#pragma empty_line
      _Rb_tree_const_iterator(const iterator& __it)
      : _M_node(__it._M_node) { }
#pragma empty_line
      reference
      operator*() const
      { return static_cast<_Link_type>(_M_node)->_M_value_field; }
#pragma empty_line
      pointer
      operator->() const
      { return &static_cast<_Link_type>(_M_node)->_M_value_field; }
#pragma empty_line
      _Self&
      operator++()
      {
 _M_node = _Rb_tree_increment(_M_node);
 return *this;
      }
#pragma empty_line
      _Self
      operator++(int)
      {
 _Self __tmp = *this;
 _M_node = _Rb_tree_increment(_M_node);
 return __tmp;
      }
#pragma empty_line
      _Self&
      operator--()
      {
 _M_node = _Rb_tree_decrement(_M_node);
 return *this;
      }
#pragma empty_line
      _Self
      operator--(int)
      {
 _Self __tmp = *this;
 _M_node = _Rb_tree_decrement(_M_node);
 return __tmp;
      }
#pragma empty_line
      bool
      operator==(const _Self& __x) const
      { return _M_node == __x._M_node; }
#pragma empty_line
      bool
      operator!=(const _Self& __x) const
      { return _M_node != __x._M_node; }
#pragma empty_line
      _Base_ptr _M_node;
    };
#pragma empty_line
  template<typename _Val>
    inline bool
    operator==(const _Rb_tree_iterator<_Val>& __x,
               const _Rb_tree_const_iterator<_Val>& __y)
    { return __x._M_node == __y._M_node; }
#pragma empty_line
  template<typename _Val>
    inline bool
    operator!=(const _Rb_tree_iterator<_Val>& __x,
               const _Rb_tree_const_iterator<_Val>& __y)
    { return __x._M_node != __y._M_node; }
#pragma empty_line
  void
  _Rb_tree_insert_and_rebalance(const bool __insert_left,
                                _Rb_tree_node_base* __x,
                                _Rb_tree_node_base* __p,
                                _Rb_tree_node_base& __header) throw ();
#pragma empty_line
  _Rb_tree_node_base*
  _Rb_tree_rebalance_for_erase(_Rb_tree_node_base* const __z,
          _Rb_tree_node_base& __header) throw ();
#pragma empty_line
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc = allocator<_Val> >
    class _Rb_tree
    {
      typedef typename _Alloc::template rebind<_Rb_tree_node<_Val> >::other
              _Node_allocator;
#pragma empty_line
    protected:
      typedef _Rb_tree_node_base* _Base_ptr;
      typedef const _Rb_tree_node_base* _Const_Base_ptr;
#pragma empty_line
    public:
      typedef _Key key_type;
      typedef _Val value_type;
      typedef value_type* pointer;
      typedef const value_type* const_pointer;
      typedef value_type& reference;
      typedef const value_type& const_reference;
      typedef _Rb_tree_node<_Val>* _Link_type;
      typedef const _Rb_tree_node<_Val>* _Const_Link_type;
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Alloc allocator_type;
#pragma empty_line
      _Node_allocator&
      _M_get_Node_allocator()
      { return *static_cast<_Node_allocator*>(&this->_M_impl); }
#pragma empty_line
      const _Node_allocator&
      _M_get_Node_allocator() const
      { return *static_cast<const _Node_allocator*>(&this->_M_impl); }
#pragma empty_line
      allocator_type
      get_allocator() const
      { return allocator_type(_M_get_Node_allocator()); }
#pragma empty_line
    protected:
      _Link_type
      _M_get_node()
      { return _M_impl._Node_allocator::allocate(1); }
#pragma empty_line
      void
      _M_put_node(_Link_type __p)
      { _M_impl._Node_allocator::deallocate(__p, 1); }
#pragma empty_line
#pragma empty_line
      _Link_type
      _M_create_node(const value_type& __x)
      {
 _Link_type __tmp = _M_get_node();
 if (true)
   { get_allocator().construct(&__tmp->_M_value_field, __x); }
 if (false)
   {
     _M_put_node(__tmp);
                            ;
   }
 return __tmp;
      }
#pragma empty_line
      void
      _M_destroy_node(_Link_type __p)
      {
 get_allocator().destroy(&__p->_M_value_field);
 _M_put_node(__p);
      }
#pragma line 413 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_tree.h" 3
      _Link_type
      _M_clone_node(_Const_Link_type __x)
      {
 _Link_type __tmp = _M_create_node(__x->_M_value_field);
 __tmp->_M_color = __x->_M_color;
 __tmp->_M_left = 0;
 __tmp->_M_right = 0;
 return __tmp;
      }
#pragma empty_line
    protected:
      template<typename _Key_compare,
        bool _Is_pod_comparator = __is_pod(_Key_compare)>
        struct _Rb_tree_impl : public _Node_allocator
        {
   _Key_compare _M_key_compare;
   _Rb_tree_node_base _M_header;
   size_type _M_node_count; // Keeps track of size of tree.
#pragma empty_line
   _Rb_tree_impl()
   : _Node_allocator(), _M_key_compare(), _M_header(),
     _M_node_count(0)
   { _M_initialize(); }
#pragma empty_line
   _Rb_tree_impl(const _Key_compare& __comp, const _Node_allocator& __a)
   : _Node_allocator(__a), _M_key_compare(__comp), _M_header(),
     _M_node_count(0)
   { _M_initialize(); }
#pragma empty_line
 private:
   void
   _M_initialize()
   {
     this->_M_header._M_color = _S_red;
     this->_M_header._M_parent = 0;
     this->_M_header._M_left = &this->_M_header;
     this->_M_header._M_right = &this->_M_header;
   }
 };
#pragma empty_line
      _Rb_tree_impl<_Compare> _M_impl;
#pragma empty_line
    protected:
      _Base_ptr&
      _M_root()
      { return this->_M_impl._M_header._M_parent; }
#pragma empty_line
      _Const_Base_ptr
      _M_root() const
      { return this->_M_impl._M_header._M_parent; }
#pragma empty_line
      _Base_ptr&
      _M_leftmost()
      { return this->_M_impl._M_header._M_left; }
#pragma empty_line
      _Const_Base_ptr
      _M_leftmost() const
      { return this->_M_impl._M_header._M_left; }
#pragma empty_line
      _Base_ptr&
      _M_rightmost()
      { return this->_M_impl._M_header._M_right; }
#pragma empty_line
      _Const_Base_ptr
      _M_rightmost() const
      { return this->_M_impl._M_header._M_right; }
#pragma empty_line
      _Link_type
      _M_begin()
      { return static_cast<_Link_type>(this->_M_impl._M_header._M_parent); }
#pragma empty_line
      _Const_Link_type
      _M_begin() const
      {
 return static_cast<_Const_Link_type>
   (this->_M_impl._M_header._M_parent);
      }
#pragma empty_line
      _Link_type
      _M_end()
      { return static_cast<_Link_type>(&this->_M_impl._M_header); }
#pragma empty_line
      _Const_Link_type
      _M_end() const
      { return static_cast<_Const_Link_type>(&this->_M_impl._M_header); }
#pragma empty_line
      static const_reference
      _S_value(_Const_Link_type __x)
      { return __x->_M_value_field; }
#pragma empty_line
      static const _Key&
      _S_key(_Const_Link_type __x)
      { return _KeyOfValue()(_S_value(__x)); }
#pragma empty_line
      static _Link_type
      _S_left(_Base_ptr __x)
      { return static_cast<_Link_type>(__x->_M_left); }
#pragma empty_line
      static _Const_Link_type
      _S_left(_Const_Base_ptr __x)
      { return static_cast<_Const_Link_type>(__x->_M_left); }
#pragma empty_line
      static _Link_type
      _S_right(_Base_ptr __x)
      { return static_cast<_Link_type>(__x->_M_right); }
#pragma empty_line
      static _Const_Link_type
      _S_right(_Const_Base_ptr __x)
      { return static_cast<_Const_Link_type>(__x->_M_right); }
#pragma empty_line
      static const_reference
      _S_value(_Const_Base_ptr __x)
      { return static_cast<_Const_Link_type>(__x)->_M_value_field; }
#pragma empty_line
      static const _Key&
      _S_key(_Const_Base_ptr __x)
      { return _KeyOfValue()(_S_value(__x)); }
#pragma empty_line
      static _Base_ptr
      _S_minimum(_Base_ptr __x)
      { return _Rb_tree_node_base::_S_minimum(__x); }
#pragma empty_line
      static _Const_Base_ptr
      _S_minimum(_Const_Base_ptr __x)
      { return _Rb_tree_node_base::_S_minimum(__x); }
#pragma empty_line
      static _Base_ptr
      _S_maximum(_Base_ptr __x)
      { return _Rb_tree_node_base::_S_maximum(__x); }
#pragma empty_line
      static _Const_Base_ptr
      _S_maximum(_Const_Base_ptr __x)
      { return _Rb_tree_node_base::_S_maximum(__x); }
#pragma empty_line
    public:
      typedef _Rb_tree_iterator<value_type> iterator;
      typedef _Rb_tree_const_iterator<value_type> const_iterator;
#pragma empty_line
      typedef std::reverse_iterator<iterator> reverse_iterator;
      typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
#pragma empty_line
    private:
      iterator
      _M_insert_(_Const_Base_ptr __x, _Const_Base_ptr __y,
   const value_type& __v);
#pragma empty_line
      // _GLIBCXX_RESOLVE_LIB_DEFECTS
      // 233. Insertion hints in associative containers.
      iterator
      _M_insert_lower(_Base_ptr __x, _Base_ptr __y, const value_type& __v);
#pragma empty_line
      iterator
      _M_insert_equal_lower(const value_type& __x);
#pragma empty_line
      _Link_type
      _M_copy(_Const_Link_type __x, _Link_type __p);
#pragma empty_line
      void
      _M_erase(_Link_type __x);
#pragma empty_line
      iterator
      _M_lower_bound(_Link_type __x, _Link_type __y,
       const _Key& __k);
#pragma empty_line
      const_iterator
      _M_lower_bound(_Const_Link_type __x, _Const_Link_type __y,
       const _Key& __k) const;
#pragma empty_line
      iterator
      _M_upper_bound(_Link_type __x, _Link_type __y,
       const _Key& __k);
#pragma empty_line
      const_iterator
      _M_upper_bound(_Const_Link_type __x, _Const_Link_type __y,
       const _Key& __k) const;
#pragma empty_line
    public:
      // allocation/deallocation
      _Rb_tree() { }
#pragma empty_line
      _Rb_tree(const _Compare& __comp,
        const allocator_type& __a = allocator_type())
      : _M_impl(__comp, __a) { }
#pragma empty_line
      _Rb_tree(const _Rb_tree& __x)
      : _M_impl(__x._M_impl._M_key_compare, __x._M_get_Node_allocator())
      {
 if (__x._M_root() != 0)
   {
     _M_root() = _M_copy(__x._M_begin(), _M_end());
     _M_leftmost() = _S_minimum(_M_root());
     _M_rightmost() = _S_maximum(_M_root());
     _M_impl._M_node_count = __x._M_impl._M_node_count;
   }
      }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
      ~_Rb_tree()
      { _M_erase(_M_begin()); }
#pragma empty_line
      _Rb_tree&
      operator=(const _Rb_tree& __x);
#pragma empty_line
      // Accessors.
      _Compare
      key_comp() const
      { return _M_impl._M_key_compare; }
#pragma empty_line
      iterator
      begin()
      {
 return iterator(static_cast<_Link_type>
   (this->_M_impl._M_header._M_left));
      }
#pragma empty_line
      const_iterator
      begin() const
      {
 return const_iterator(static_cast<_Const_Link_type>
         (this->_M_impl._M_header._M_left));
      }
#pragma empty_line
      iterator
      end()
      { return iterator(static_cast<_Link_type>(&this->_M_impl._M_header)); }
#pragma empty_line
      const_iterator
      end() const
      {
 return const_iterator(static_cast<_Const_Link_type>
         (&this->_M_impl._M_header));
      }
#pragma empty_line
      reverse_iterator
      rbegin()
      { return reverse_iterator(end()); }
#pragma empty_line
      const_reverse_iterator
      rbegin() const
      { return const_reverse_iterator(end()); }
#pragma empty_line
      reverse_iterator
      rend()
      { return reverse_iterator(begin()); }
#pragma empty_line
      const_reverse_iterator
      rend() const
      { return const_reverse_iterator(begin()); }
#pragma empty_line
      bool
      empty() const
      { return _M_impl._M_node_count == 0; }
#pragma empty_line
      size_type
      size() const
      { return _M_impl._M_node_count; }
#pragma empty_line
      size_type
      max_size() const
      { return _M_get_Node_allocator().max_size(); }
#pragma empty_line
      void
      swap(_Rb_tree& __t);
#pragma empty_line
      // Insert/erase.
      pair<iterator, bool>
      _M_insert_unique(const value_type& __x);
#pragma empty_line
      iterator
      _M_insert_equal(const value_type& __x);
#pragma empty_line
      iterator
      _M_insert_unique_(const_iterator __position, const value_type& __x);
#pragma empty_line
      iterator
      _M_insert_equal_(const_iterator __position, const value_type& __x);
#pragma empty_line
      template<typename _InputIterator>
        void
        _M_insert_unique(_InputIterator __first, _InputIterator __last);
#pragma empty_line
      template<typename _InputIterator>
        void
        _M_insert_equal(_InputIterator __first, _InputIterator __last);
#pragma line 712 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_tree.h" 3
      void
      erase(iterator __position);
#pragma empty_line
      void
      erase(const_iterator __position);
#pragma empty_line
      size_type
      erase(const key_type& __x);
#pragma line 732 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_tree.h" 3
      void
      erase(iterator __first, iterator __last);
#pragma empty_line
      void
      erase(const_iterator __first, const_iterator __last);
#pragma empty_line
      void
      erase(const key_type* __first, const key_type* __last);
#pragma empty_line
      void
      clear()
      {
        _M_erase(_M_begin());
        _M_leftmost() = _M_end();
        _M_root() = 0;
        _M_rightmost() = _M_end();
        _M_impl._M_node_count = 0;
      }
#pragma empty_line
      // Set operations.
      iterator
      find(const key_type& __k);
#pragma empty_line
      const_iterator
      find(const key_type& __k) const;
#pragma empty_line
      size_type
      count(const key_type& __k) const;
#pragma empty_line
      iterator
      lower_bound(const key_type& __k)
      { return _M_lower_bound(_M_begin(), _M_end(), __k); }
#pragma empty_line
      const_iterator
      lower_bound(const key_type& __k) const
      { return _M_lower_bound(_M_begin(), _M_end(), __k); }
#pragma empty_line
      iterator
      upper_bound(const key_type& __k)
      { return _M_upper_bound(_M_begin(), _M_end(), __k); }
#pragma empty_line
      const_iterator
      upper_bound(const key_type& __k) const
      { return _M_upper_bound(_M_begin(), _M_end(), __k); }
#pragma empty_line
      pair<iterator, iterator>
      equal_range(const key_type& __k);
#pragma empty_line
      pair<const_iterator, const_iterator>
      equal_range(const key_type& __k) const;
#pragma empty_line
      // Debugging.
      bool
      __rb_verify() const;
    };
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    inline bool
    operator==(const _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>& __x,
        const _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>& __y)
    {
      return __x.size() == __y.size()
      && std::equal(__x.begin(), __x.end(), __y.begin());
    }
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    inline bool
    operator<(const _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>& __x,
       const _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>& __y)
    {
      return std::lexicographical_compare(__x.begin(), __x.end(),
       __y.begin(), __y.end());
    }
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    inline bool
    operator!=(const _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>& __x,
        const _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>& __y)
    { return !(__x == __y); }
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    inline bool
    operator>(const _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>& __x,
       const _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>& __y)
    { return __y < __x; }
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    inline bool
    operator<=(const _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>& __x,
        const _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>& __y)
    { return !(__y < __x); }
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    inline bool
    operator>=(const _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>& __x,
        const _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>& __y)
    { return !(__x < __y); }
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    inline void
    swap(_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>& __x,
  _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>& __y)
    { __x.swap(__y); }
#pragma line 867 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_tree.h" 3
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>&
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    operator=(const _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>& __x)
    {
      if (this != &__x)
 {
   // Note that _Key may be a constant type.
   clear();
   _M_impl._M_key_compare = __x._M_impl._M_key_compare;
   if (__x._M_root() != 0)
     {
       _M_root() = _M_copy(__x._M_begin(), _M_end());
       _M_leftmost() = _S_minimum(_M_root());
       _M_rightmost() = _S_maximum(_M_root());
       _M_impl._M_node_count = __x._M_impl._M_node_count;
     }
 }
      return *this;
    }
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::iterator
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    _M_insert_(_Const_Base_ptr __x, _Const_Base_ptr __p, const _Val& __v)
    {
      bool __insert_left = (__x != 0 || __p == _M_end()
       || _M_impl._M_key_compare(_KeyOfValue()(__v),
            _S_key(__p)));
#pragma empty_line
      _Link_type __z = _M_create_node(__v);
#pragma empty_line
      _Rb_tree_insert_and_rebalance(__insert_left, __z,
        const_cast<_Base_ptr>(__p),
        this->_M_impl._M_header);
      ++_M_impl._M_node_count;
      return iterator(__z);
    }
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::iterator
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    _M_insert_lower(_Base_ptr __x, _Base_ptr __p, const _Val& __v)
    {
      bool __insert_left = (__x != 0 || __p == _M_end()
       || !_M_impl._M_key_compare(_S_key(__p),
             _KeyOfValue()(__v)));
#pragma empty_line
      _Link_type __z = _M_create_node(__v);
#pragma empty_line
      _Rb_tree_insert_and_rebalance(__insert_left, __z, __p,
        this->_M_impl._M_header);
      ++_M_impl._M_node_count;
      return iterator(__z);
    }
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::iterator
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    _M_insert_equal_lower(const _Val& __v)
    {
      _Link_type __x = _M_begin();
      _Link_type __y = _M_end();
      while (__x != 0)
 {
   __y = __x;
   __x = !_M_impl._M_key_compare(_S_key(__x), _KeyOfValue()(__v)) ?
         _S_left(__x) : _S_right(__x);
 }
      return _M_insert_lower(__x, __y, __v);
    }
#pragma empty_line
  template<typename _Key, typename _Val, typename _KoV,
           typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key, _Val, _KoV, _Compare, _Alloc>::_Link_type
    _Rb_tree<_Key, _Val, _KoV, _Compare, _Alloc>::
    _M_copy(_Const_Link_type __x, _Link_type __p)
    {
      // Structural copy.  __x and __p must be non-null.
      _Link_type __top = _M_clone_node(__x);
      __top->_M_parent = __p;
#pragma empty_line
      if (true)
 {
   if (__x->_M_right)
     __top->_M_right = _M_copy(_S_right(__x), __top);
   __p = __top;
   __x = _S_left(__x);
#pragma empty_line
   while (__x != 0)
     {
       _Link_type __y = _M_clone_node(__x);
       __p->_M_left = __y;
       __y->_M_parent = __p;
       if (__x->_M_right)
  __y->_M_right = _M_copy(_S_right(__x), __y);
       __p = __y;
       __x = _S_left(__x);
     }
 }
      if (false)
 {
   _M_erase(__top);
                          ;
 }
      return __top;
    }
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    void
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    _M_erase(_Link_type __x)
    {
      // Erase without rebalancing.
      while (__x != 0)
 {
   _M_erase(_S_right(__x));
   _Link_type __y = _S_left(__x);
   _M_destroy_node(__x);
   __x = __y;
 }
    }
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key, _Val, _KeyOfValue,
        _Compare, _Alloc>::iterator
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    _M_lower_bound(_Link_type __x, _Link_type __y,
     const _Key& __k)
    {
      while (__x != 0)
 if (!_M_impl._M_key_compare(_S_key(__x), __k))
   __y = __x, __x = _S_left(__x);
 else
   __x = _S_right(__x);
      return iterator(__y);
    }
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key, _Val, _KeyOfValue,
        _Compare, _Alloc>::const_iterator
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    _M_lower_bound(_Const_Link_type __x, _Const_Link_type __y,
     const _Key& __k) const
    {
      while (__x != 0)
 if (!_M_impl._M_key_compare(_S_key(__x), __k))
   __y = __x, __x = _S_left(__x);
 else
   __x = _S_right(__x);
      return const_iterator(__y);
    }
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key, _Val, _KeyOfValue,
        _Compare, _Alloc>::iterator
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    _M_upper_bound(_Link_type __x, _Link_type __y,
     const _Key& __k)
    {
      while (__x != 0)
 if (_M_impl._M_key_compare(__k, _S_key(__x)))
   __y = __x, __x = _S_left(__x);
 else
   __x = _S_right(__x);
      return iterator(__y);
    }
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key, _Val, _KeyOfValue,
        _Compare, _Alloc>::const_iterator
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    _M_upper_bound(_Const_Link_type __x, _Const_Link_type __y,
     const _Key& __k) const
    {
      while (__x != 0)
 if (_M_impl._M_key_compare(__k, _S_key(__x)))
   __y = __x, __x = _S_left(__x);
 else
   __x = _S_right(__x);
      return const_iterator(__y);
    }
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    pair<typename _Rb_tree<_Key, _Val, _KeyOfValue,
      _Compare, _Alloc>::iterator,
  typename _Rb_tree<_Key, _Val, _KeyOfValue,
      _Compare, _Alloc>::iterator>
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    equal_range(const _Key& __k)
    {
      _Link_type __x = _M_begin();
      _Link_type __y = _M_end();
      while (__x != 0)
 {
   if (_M_impl._M_key_compare(_S_key(__x), __k))
     __x = _S_right(__x);
   else if (_M_impl._M_key_compare(__k, _S_key(__x)))
     __y = __x, __x = _S_left(__x);
   else
     {
       _Link_type __xu(__x), __yu(__y);
       __y = __x, __x = _S_left(__x);
       __xu = _S_right(__xu);
       return pair<iterator,
            iterator>(_M_lower_bound(__x, __y, __k),
        _M_upper_bound(__xu, __yu, __k));
     }
 }
      return pair<iterator, iterator>(iterator(__y),
          iterator(__y));
    }
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    pair<typename _Rb_tree<_Key, _Val, _KeyOfValue,
      _Compare, _Alloc>::const_iterator,
  typename _Rb_tree<_Key, _Val, _KeyOfValue,
      _Compare, _Alloc>::const_iterator>
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    equal_range(const _Key& __k) const
    {
      _Const_Link_type __x = _M_begin();
      _Const_Link_type __y = _M_end();
      while (__x != 0)
 {
   if (_M_impl._M_key_compare(_S_key(__x), __k))
     __x = _S_right(__x);
   else if (_M_impl._M_key_compare(__k, _S_key(__x)))
     __y = __x, __x = _S_left(__x);
   else
     {
       _Const_Link_type __xu(__x), __yu(__y);
       __y = __x, __x = _S_left(__x);
       __xu = _S_right(__xu);
       return pair<const_iterator,
            const_iterator>(_M_lower_bound(__x, __y, __k),
       _M_upper_bound(__xu, __yu, __k));
     }
 }
      return pair<const_iterator, const_iterator>(const_iterator(__y),
        const_iterator(__y));
    }
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    void
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    swap(_Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>& __t)
    {
      if (_M_root() == 0)
 {
   if (__t._M_root() != 0)
     {
       _M_root() = __t._M_root();
       _M_leftmost() = __t._M_leftmost();
       _M_rightmost() = __t._M_rightmost();
       _M_root()->_M_parent = _M_end();
#pragma empty_line
       __t._M_root() = 0;
       __t._M_leftmost() = __t._M_end();
       __t._M_rightmost() = __t._M_end();
     }
 }
      else if (__t._M_root() == 0)
 {
   __t._M_root() = _M_root();
   __t._M_leftmost() = _M_leftmost();
   __t._M_rightmost() = _M_rightmost();
   __t._M_root()->_M_parent = __t._M_end();
#pragma empty_line
   _M_root() = 0;
   _M_leftmost() = _M_end();
   _M_rightmost() = _M_end();
 }
      else
 {
   std::swap(_M_root(),__t._M_root());
   std::swap(_M_leftmost(),__t._M_leftmost());
   std::swap(_M_rightmost(),__t._M_rightmost());
#pragma empty_line
   _M_root()->_M_parent = _M_end();
   __t._M_root()->_M_parent = __t._M_end();
 }
      // No need to swap header's color as it does not change.
      std::swap(this->_M_impl._M_node_count, __t._M_impl._M_node_count);
      std::swap(this->_M_impl._M_key_compare, __t._M_impl._M_key_compare);
#pragma empty_line
      // _GLIBCXX_RESOLVE_LIB_DEFECTS
      // 431. Swapping containers with unequal allocators.
      std::__alloc_swap<_Node_allocator>::
 _S_do_it(_M_get_Node_allocator(), __t._M_get_Node_allocator());
    }
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    pair<typename _Rb_tree<_Key, _Val, _KeyOfValue,
      _Compare, _Alloc>::iterator, bool>
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    _M_insert_unique(const _Val& __v)
    {
      _Link_type __x = _M_begin();
      _Link_type __y = _M_end();
      bool __comp = true;
      while (__x != 0)
 {
   __y = __x;
   __comp = _M_impl._M_key_compare(_KeyOfValue()(__v), _S_key(__x));
   __x = __comp ? _S_left(__x) : _S_right(__x);
 }
      iterator __j = iterator(__y);
      if (__comp)
 {
   if (__j == begin())
     return pair<iterator, bool>(_M_insert_(__x, __y, __v), true);
   else
     --__j;
 }
      if (_M_impl._M_key_compare(_S_key(__j._M_node), _KeyOfValue()(__v)))
 return pair<iterator, bool>(_M_insert_(__x, __y, __v), true);
      return pair<iterator, bool>(__j, false);
    }
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::iterator
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    _M_insert_equal(const _Val& __v)
    {
      _Link_type __x = _M_begin();
      _Link_type __y = _M_end();
      while (__x != 0)
 {
   __y = __x;
   __x = _M_impl._M_key_compare(_KeyOfValue()(__v), _S_key(__x)) ?
         _S_left(__x) : _S_right(__x);
 }
      return _M_insert_(__x, __y, __v);
    }
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::iterator
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    _M_insert_unique_(const_iterator __position, const _Val& __v)
    {
      // end()
      if (__position._M_node == _M_end())
 {
   if (size() > 0
       && _M_impl._M_key_compare(_S_key(_M_rightmost()),
     _KeyOfValue()(__v)))
     return _M_insert_(0, _M_rightmost(), __v);
   else
     return _M_insert_unique(__v).first;
 }
      else if (_M_impl._M_key_compare(_KeyOfValue()(__v),
          _S_key(__position._M_node)))
 {
   // First, try before...
   const_iterator __before = __position;
   if (__position._M_node == _M_leftmost()) // begin()
     return _M_insert_(_M_leftmost(), _M_leftmost(), __v);
   else if (_M_impl._M_key_compare(_S_key((--__before)._M_node),
       _KeyOfValue()(__v)))
     {
       if (_S_right(__before._M_node) == 0)
  return _M_insert_(0, __before._M_node, __v);
       else
  return _M_insert_(__position._M_node,
      __position._M_node, __v);
     }
   else
     return _M_insert_unique(__v).first;
 }
      else if (_M_impl._M_key_compare(_S_key(__position._M_node),
          _KeyOfValue()(__v)))
 {
   // ... then try after.
   const_iterator __after = __position;
   if (__position._M_node == _M_rightmost())
     return _M_insert_(0, _M_rightmost(), __v);
   else if (_M_impl._M_key_compare(_KeyOfValue()(__v),
       _S_key((++__after)._M_node)))
     {
       if (_S_right(__position._M_node) == 0)
  return _M_insert_(0, __position._M_node, __v);
       else
  return _M_insert_(__after._M_node, __after._M_node, __v);
     }
   else
     return _M_insert_unique(__v).first;
 }
      else
 // Equivalent keys.
 return iterator(static_cast<_Link_type>
   (const_cast<_Base_ptr>(__position._M_node)));
    }
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::iterator
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    _M_insert_equal_(const_iterator __position, const _Val& __v)
    {
      // end()
      if (__position._M_node == _M_end())
 {
   if (size() > 0
       && !_M_impl._M_key_compare(_KeyOfValue()(__v),
      _S_key(_M_rightmost())))
     return _M_insert_(0, _M_rightmost(), __v);
   else
     return _M_insert_equal(__v);
 }
      else if (!_M_impl._M_key_compare(_S_key(__position._M_node),
           _KeyOfValue()(__v)))
 {
   // First, try before...
   const_iterator __before = __position;
   if (__position._M_node == _M_leftmost()) // begin()
     return _M_insert_(_M_leftmost(), _M_leftmost(), __v);
   else if (!_M_impl._M_key_compare(_KeyOfValue()(__v),
        _S_key((--__before)._M_node)))
     {
       if (_S_right(__before._M_node) == 0)
  return _M_insert_(0, __before._M_node, __v);
       else
  return _M_insert_(__position._M_node,
      __position._M_node, __v);
     }
   else
     return _M_insert_equal(__v);
 }
      else
 {
   // ... then try after.  
   const_iterator __after = __position;
   if (__position._M_node == _M_rightmost())
     return _M_insert_(0, _M_rightmost(), __v);
   else if (!_M_impl._M_key_compare(_S_key((++__after)._M_node),
        _KeyOfValue()(__v)))
     {
       if (_S_right(__position._M_node) == 0)
  return _M_insert_(0, __position._M_node, __v);
       else
  return _M_insert_(__after._M_node, __after._M_node, __v);
     }
   else
     return _M_insert_equal_lower(__v);
 }
    }
#pragma empty_line
  template<typename _Key, typename _Val, typename _KoV,
           typename _Cmp, typename _Alloc>
    template<class _II>
      void
      _Rb_tree<_Key, _Val, _KoV, _Cmp, _Alloc>::
      _M_insert_unique(_II __first, _II __last)
      {
 for (; __first != __last; ++__first)
   _M_insert_unique_(end(), *__first);
      }
#pragma empty_line
  template<typename _Key, typename _Val, typename _KoV,
           typename _Cmp, typename _Alloc>
    template<class _II>
      void
      _Rb_tree<_Key, _Val, _KoV, _Cmp, _Alloc>::
      _M_insert_equal(_II __first, _II __last)
      {
 for (; __first != __last; ++__first)
   _M_insert_equal_(end(), *__first);
      }
#pragma line 1391 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_tree.h" 3
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    inline void
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    erase(iterator __position)
    {
      _Link_type __y =
 static_cast<_Link_type>(_Rb_tree_rebalance_for_erase
    (__position._M_node,
     this->_M_impl._M_header));
      _M_destroy_node(__y);
      --_M_impl._M_node_count;
    }
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    inline void
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    erase(const_iterator __position)
    {
      _Link_type __y =
 static_cast<_Link_type>(_Rb_tree_rebalance_for_erase
    (const_cast<_Base_ptr>(__position._M_node),
     this->_M_impl._M_header));
      _M_destroy_node(__y);
      --_M_impl._M_node_count;
    }
#pragma empty_line
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::size_type
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    erase(const _Key& __x)
    {
      pair<iterator, iterator> __p = equal_range(__x);
      const size_type __old_size = size();
      erase(__p.first, __p.second);
      return __old_size - size();
    }
#pragma line 1475 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_tree.h" 3
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    void
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    erase(iterator __first, iterator __last)
    {
      if (__first == begin() && __last == end())
 clear();
      else
 while (__first != __last)
   erase(__first++);
    }
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    void
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    erase(const_iterator __first, const_iterator __last)
    {
      if (__first == begin() && __last == end())
 clear();
      else
 while (__first != __last)
   erase(__first++);
    }
#pragma empty_line
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    void
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    erase(const _Key* __first, const _Key* __last)
    {
      while (__first != __last)
 erase(*__first++);
    }
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key, _Val, _KeyOfValue,
        _Compare, _Alloc>::iterator
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    find(const _Key& __k)
    {
      iterator __j = _M_lower_bound(_M_begin(), _M_end(), __k);
      return (__j == end()
       || _M_impl._M_key_compare(__k,
     _S_key(__j._M_node))) ? end() : __j;
    }
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key, _Val, _KeyOfValue,
        _Compare, _Alloc>::const_iterator
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    find(const _Key& __k) const
    {
      const_iterator __j = _M_lower_bound(_M_begin(), _M_end(), __k);
      return (__j == end()
       || _M_impl._M_key_compare(__k,
     _S_key(__j._M_node))) ? end() : __j;
    }
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::size_type
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    count(const _Key& __k) const
    {
      pair<const_iterator, const_iterator> __p = equal_range(__k);
      const size_type __n = std::distance(__p.first, __p.second);
      return __n;
    }
#pragma empty_line
  __attribute__ ((__pure__)) unsigned int
  _Rb_tree_black_count(const _Rb_tree_node_base* __node,
                       const _Rb_tree_node_base* __root) throw ();
#pragma empty_line
  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    bool
    _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::__rb_verify() const
    {
      if (_M_impl._M_node_count == 0 || begin() == end())
 return _M_impl._M_node_count == 0 && begin() == end()
        && this->_M_impl._M_header._M_left == _M_end()
        && this->_M_impl._M_header._M_right == _M_end();
#pragma empty_line
      unsigned int __len = _Rb_tree_black_count(_M_leftmost(), _M_root());
      for (const_iterator __it = begin(); __it != end(); ++__it)
 {
   _Const_Link_type __x = static_cast<_Const_Link_type>(__it._M_node);
   _Const_Link_type __L = _S_left(__x);
   _Const_Link_type __R = _S_right(__x);
#pragma empty_line
   if (__x->_M_color == _S_red)
     if ((__L && __L->_M_color == _S_red)
  || (__R && __R->_M_color == _S_red))
       return false;
#pragma empty_line
   if (__L && _M_impl._M_key_compare(_S_key(__x), _S_key(__L)))
     return false;
   if (__R && _M_impl._M_key_compare(_S_key(__R), _S_key(__x)))
     return false;
#pragma empty_line
   if (!__L && !__R && _Rb_tree_black_count(__x, _M_root()) != __len)
     return false;
 }
#pragma empty_line
      if (_M_leftmost() != _Rb_tree_node_base::_S_minimum(_M_root()))
 return false;
      if (_M_rightmost() != _Rb_tree_node_base::_S_maximum(_M_root()))
 return false;
      return true;
    }
#pragma empty_line
}
#pragma line 60 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\map" 2 3
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_map.h" 1 3
// Map implementation -*- C++ -*-
#pragma empty_line
// Copyright (C) 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996,1997
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */
#pragma empty_line
/** @file stl_map.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\initializer_list" 1 3
// std::initializer_list support -*- C++ -*-
#pragma empty_line
// Copyright (C) 2008, 2009, 2010 Free Software Foundation, Inc.
//
// This file is part of GCC.
//
// GCC is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3, or (at your option)
// any later version.
//
// GCC is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/** @file initializer_list
 *  This is a Standard C++ Library header.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 33 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\initializer_list" 3
#pragma line 63 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_map.h" 2 3
#pragma empty_line
namespace std {
#pragma empty_line
  /**
   *  @brief A standard container made up of (key,value) pairs, which can be
   *  retrieved based on a key, in logarithmic time.
   *
   *  @ingroup associative_containers
   *
   *  Meets the requirements of a <a href="tables.html#65">container</a>, a
   *  <a href="tables.html#66">reversible container</a>, and an
   *  <a href="tables.html#69">associative container</a> (using unique keys).
   *  For a @c map<Key,T> the key_type is Key, the mapped_type is T, and the
   *  value_type is std::pair<const Key,T>.
   *
   *  Maps support bidirectional iterators.
   *
   *  The private tree data is declared exactly the same way for map and
   *  multimap; the distinction is made entirely in how the tree functions are
   *  called (*_unique versus *_equal, same as the standard).
  */
  template <typename _Key, typename _Tp, typename _Compare = std::less<_Key>,
            typename _Alloc = std::allocator<std::pair<const _Key, _Tp> > >
    class map
    {
    public:
      typedef _Key key_type;
      typedef _Tp mapped_type;
      typedef std::pair<const _Key, _Tp> value_type;
      typedef _Compare key_compare;
      typedef _Alloc allocator_type;
#pragma empty_line
    private:
      // concept requirements
      typedef typename _Alloc::value_type _Alloc_value_type;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    public:
      class value_compare
      : public std::binary_function<value_type, value_type, bool>
      {
 friend class map<_Key, _Tp, _Compare, _Alloc>;
      protected:
 _Compare comp;
#pragma empty_line
 value_compare(_Compare __c)
 : comp(__c) { }
#pragma empty_line
      public:
 bool operator()(const value_type& __x, const value_type& __y) const
 { return comp(__x.first, __y.first); }
      };
#pragma empty_line
    private:
      /// This turns a red-black tree into a [multi]map. 
      typedef typename _Alloc::template rebind<value_type>::other
        _Pair_alloc_type;
#pragma empty_line
      typedef _Rb_tree<key_type, value_type, _Select1st<value_type>,
         key_compare, _Pair_alloc_type> _Rep_type;
#pragma empty_line
      /// The actual tree structure.
      _Rep_type _M_t;
#pragma empty_line
    public:
      // many of these are specified differently in ISO, but the following are
      // "functionally equivalent"
      typedef typename _Pair_alloc_type::pointer pointer;
      typedef typename _Pair_alloc_type::const_pointer const_pointer;
      typedef typename _Pair_alloc_type::reference reference;
      typedef typename _Pair_alloc_type::const_reference const_reference;
      typedef typename _Rep_type::iterator iterator;
      typedef typename _Rep_type::const_iterator const_iterator;
      typedef typename _Rep_type::size_type size_type;
      typedef typename _Rep_type::difference_type difference_type;
      typedef typename _Rep_type::reverse_iterator reverse_iterator;
      typedef typename _Rep_type::const_reverse_iterator const_reverse_iterator;
#pragma empty_line
      // [23.3.1.1] construct/copy/destroy
      // (get_allocator() is normally listed in this section, but seems to have
      // been accidentally omitted in the printed standard)
      /**
       *  @brief  Default constructor creates no elements.
       */
      map()
      : _M_t() { }
#pragma empty_line
      /**
       *  @brief  Creates a %map with no elements.
       *  @param  comp  A comparison object.
       *  @param  a  An allocator object.
       */
      explicit
      map(const _Compare& __comp,
   const allocator_type& __a = allocator_type())
      : _M_t(__comp, __a) { }
#pragma empty_line
      /**
       *  @brief  %Map copy constructor.
       *  @param  x  A %map of identical element and allocator types.
       *
       *  The newly-created %map uses a copy of the allocation object
       *  used by @a x.
       */
      map(const map& __x)
      : _M_t(__x._M_t) { }
#pragma line 202 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_map.h" 3
      /**
       *  @brief  Builds a %map from a range.
       *  @param  first  An input iterator.
       *  @param  last  An input iterator.
       *
       *  Create a %map consisting of copies of the elements from [first,last).
       *  This is linear in N if the range is already sorted, and NlogN
       *  otherwise (where N is distance(first,last)).
       */
      template<typename _InputIterator>
        map(_InputIterator __first, _InputIterator __last)
 : _M_t()
        { _M_t._M_insert_unique(__first, __last); }
#pragma empty_line
      /**
       *  @brief  Builds a %map from a range.
       *  @param  first  An input iterator.
       *  @param  last  An input iterator.
       *  @param  comp  A comparison functor.
       *  @param  a  An allocator object.
       *
       *  Create a %map consisting of copies of the elements from [first,last).
       *  This is linear in N if the range is already sorted, and NlogN
       *  otherwise (where N is distance(first,last)).
       */
      template<typename _InputIterator>
        map(_InputIterator __first, _InputIterator __last,
     const _Compare& __comp,
     const allocator_type& __a = allocator_type())
 : _M_t(__comp, __a)
        { _M_t._M_insert_unique(__first, __last); }
#pragma empty_line
      // FIXME There is no dtor declared, but we should have something
      // generated by Doxygen.  I don't know what tags to add to this
      // paragraph to make that happen:
      /**
       *  The dtor only erases the elements, and note that if the elements
       *  themselves are pointers, the pointed-to memory is not touched in any
       *  way.  Managing the pointer is the user's responsibility.
       */
#pragma empty_line
      /**
       *  @brief  %Map assignment operator.
       *  @param  x  A %map of identical element and allocator types.
       *
       *  All the elements of @a x are copied, but unlike the copy constructor,
       *  the allocator object is not copied.
       */
      map&
      operator=(const map& __x)
      {
 _M_t = __x._M_t;
 return *this;
      }
#pragma line 295 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_map.h" 3
      /// Get a copy of the memory allocation object.
      allocator_type
      get_allocator() const
      { return _M_t.get_allocator(); }
#pragma empty_line
      // iterators
      /**
       *  Returns a read/write iterator that points to the first pair in the
       *  %map.
       *  Iteration is done in ascending order according to the keys.
       */
      iterator
      begin()
      { return _M_t.begin(); }
#pragma empty_line
      /**
       *  Returns a read-only (constant) iterator that points to the first pair
       *  in the %map.  Iteration is done in ascending order according to the
       *  keys.
       */
      const_iterator
      begin() const
      { return _M_t.begin(); }
#pragma empty_line
      /**
       *  Returns a read/write iterator that points one past the last
       *  pair in the %map.  Iteration is done in ascending order
       *  according to the keys.
       */
      iterator
      end()
      { return _M_t.end(); }
#pragma empty_line
      /**
       *  Returns a read-only (constant) iterator that points one past the last
       *  pair in the %map.  Iteration is done in ascending order according to
       *  the keys.
       */
      const_iterator
      end() const
      { return _M_t.end(); }
#pragma empty_line
      /**
       *  Returns a read/write reverse iterator that points to the last pair in
       *  the %map.  Iteration is done in descending order according to the
       *  keys.
       */
      reverse_iterator
      rbegin()
      { return _M_t.rbegin(); }
#pragma empty_line
      /**
       *  Returns a read-only (constant) reverse iterator that points to the
       *  last pair in the %map.  Iteration is done in descending order
       *  according to the keys.
       */
      const_reverse_iterator
      rbegin() const
      { return _M_t.rbegin(); }
#pragma empty_line
      /**
       *  Returns a read/write reverse iterator that points to one before the
       *  first pair in the %map.  Iteration is done in descending order
       *  according to the keys.
       */
      reverse_iterator
      rend()
      { return _M_t.rend(); }
#pragma empty_line
      /**
       *  Returns a read-only (constant) reverse iterator that points to one
       *  before the first pair in the %map.  Iteration is done in descending
       *  order according to the keys.
       */
      const_reverse_iterator
      rend() const
      { return _M_t.rend(); }
#pragma line 411 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_map.h" 3
      // capacity
      /** Returns true if the %map is empty.  (Thus begin() would equal
       *  end().)
      */
      bool
      empty() const
      { return _M_t.empty(); }
#pragma empty_line
      /** Returns the size of the %map.  */
      size_type
      size() const
      { return _M_t.size(); }
#pragma empty_line
      /** Returns the maximum size of the %map.  */
      size_type
      max_size() const
      { return _M_t.max_size(); }
#pragma empty_line
      // [23.3.1.2] element access
      /**
       *  @brief  Subscript ( @c [] ) access to %map data.
       *  @param  k  The key for which data should be retrieved.
       *  @return  A reference to the data of the (key,data) %pair.
       *
       *  Allows for easy lookup with the subscript ( @c [] )
       *  operator.  Returns data associated with the key specified in
       *  subscript.  If the key does not exist, a pair with that key
       *  is created using default values, which is then returned.
       *
       *  Lookup requires logarithmic time.
       */
      mapped_type&
      operator[](const key_type& __k)
      {
 // concept requirements
#pragma empty_line
#pragma empty_line
 iterator __i = lower_bound(__k);
 // __i->first is greater than or equivalent to __k.
 if (__i == end() || key_comp()(__k, (*__i).first))
          __i = insert(__i, value_type(__k, mapped_type()));
 return (*__i).second;
      }
#pragma empty_line
      // _GLIBCXX_RESOLVE_LIB_DEFECTS
      // DR 464. Suggestion for new member functions in standard containers.
      /**
       *  @brief  Access to %map data.
       *  @param  k  The key for which data should be retrieved.
       *  @return  A reference to the data whose key is equivalent to @a k, if
       *           such a data is present in the %map.
       *  @throw  std::out_of_range  If no such data is present.
       */
      mapped_type&
      at(const key_type& __k)
      {
 iterator __i = lower_bound(__k);
 if (__i == end() || key_comp()(__k, (*__i).first))
   __throw_out_of_range(("map::at"));
 return (*__i).second;
      }
#pragma empty_line
      const mapped_type&
      at(const key_type& __k) const
      {
 const_iterator __i = lower_bound(__k);
 if (__i == end() || key_comp()(__k, (*__i).first))
   __throw_out_of_range(("map::at"));
 return (*__i).second;
      }
#pragma empty_line
      // modifiers
      /**
       *  @brief Attempts to insert a std::pair into the %map.
#pragma empty_line
       *  @param  x  Pair to be inserted (see std::make_pair for easy creation 
       *	     of pairs).
#pragma empty_line
       *  @return  A pair, of which the first element is an iterator that 
       *           points to the possibly inserted pair, and the second is 
       *           a bool that is true if the pair was actually inserted.
       *
       *  This function attempts to insert a (key, value) %pair into the %map.
       *  A %map relies on unique keys and thus a %pair is only inserted if its
       *  first element (the key) is not already present in the %map.
       *
       *  Insertion requires logarithmic time.
       */
      std::pair<iterator, bool>
      insert(const value_type& __x)
      { return _M_t._M_insert_unique(__x); }
#pragma line 516 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_map.h" 3
      /**
       *  @brief Attempts to insert a std::pair into the %map.
       *  @param  position  An iterator that serves as a hint as to where the
       *                    pair should be inserted.
       *  @param  x  Pair to be inserted (see std::make_pair for easy creation
       *             of pairs).
       *  @return  An iterator that points to the element with key of @a x (may
       *           or may not be the %pair passed in).
       *
#pragma empty_line
       *  This function is not concerned about whether the insertion
       *  took place, and thus does not return a boolean like the
       *  single-argument insert() does.  Note that the first
       *  parameter is only a hint and can potentially improve the
       *  performance of the insertion process.  A bad hint would
       *  cause no gains in efficiency.
       *
       *  See
       *  http://gcc.gnu.org/onlinedocs/libstdc++/manual/bk01pt07ch17.html
       *  for more on @a hinting.
       *
       *  Insertion requires logarithmic time (if the hint is not taken).
       */
      iterator
      insert(iterator __position, const value_type& __x)
      { return _M_t._M_insert_unique_(__position, __x); }
#pragma empty_line
      /**
       *  @brief Template function that attempts to insert a range of elements.
       *  @param  first  Iterator pointing to the start of the range to be
       *                 inserted.
       *  @param  last  Iterator pointing to the end of the range.
       *
       *  Complexity similar to that of the range constructor.
       */
      template<typename _InputIterator>
        void
        insert(_InputIterator __first, _InputIterator __last)
        { _M_t._M_insert_unique(__first, __last); }
#pragma line 576 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_map.h" 3
      /**
       *  @brief Erases an element from a %map.
       *  @param  position  An iterator pointing to the element to be erased.
       *
       *  This function erases an element, pointed to by the given
       *  iterator, from a %map.  Note that this function only erases
       *  the element, and that if the element is itself a pointer,
       *  the pointed-to memory is not touched in any way.  Managing
       *  the pointer is the user's responsibility.
       */
      void
      erase(iterator __position)
      { _M_t.erase(__position); }
#pragma empty_line
#pragma empty_line
      /**
       *  @brief Erases elements according to the provided key.
       *  @param  x  Key of element to be erased.
       *  @return  The number of elements erased.
       *
       *  This function erases all the elements located by the given key from
       *  a %map.
       *  Note that this function only erases the element, and that if
       *  the element is itself a pointer, the pointed-to memory is not touched
       *  in any way.  Managing the pointer is the user's responsibility.
       */
      size_type
      erase(const key_type& __x)
      { return _M_t.erase(__x); }
#pragma line 625 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_map.h" 3
      /**
       *  @brief Erases a [first,last) range of elements from a %map.
       *  @param  first  Iterator pointing to the start of the range to be
       *                 erased.
       *  @param  last  Iterator pointing to the end of the range to be erased.
       *
       *  This function erases a sequence of elements from a %map.
       *  Note that this function only erases the element, and that if
       *  the element is itself a pointer, the pointed-to memory is not touched
       *  in any way.  Managing the pointer is the user's responsibility.
       */
      void
      erase(iterator __first, iterator __last)
      { _M_t.erase(__first, __last); }
#pragma empty_line
#pragma empty_line
      /**
       *  @brief  Swaps data with another %map.
       *  @param  x  A %map of the same element and allocator types.
       *
       *  This exchanges the elements between two maps in constant
       *  time.  (It is only swapping a pointer, an integer, and an
       *  instance of the @c Compare type (which itself is often
       *  stateless and empty), so it should be quite fast.)  Note
       *  that the global std::swap() function is specialized such
       *  that std::swap(m1,m2) will feed to this function.
       */
      void
      swap(map& __x)
      { _M_t.swap(__x._M_t); }
#pragma empty_line
      /**
       *  Erases all elements in a %map.  Note that this function only
       *  erases the elements, and that if the elements themselves are
       *  pointers, the pointed-to memory is not touched in any way.
       *  Managing the pointer is the user's responsibility.
       */
      void
      clear()
      { _M_t.clear(); }
#pragma empty_line
      // observers
      /**
       *  Returns the key comparison object out of which the %map was
       *  constructed.
       */
      key_compare
      key_comp() const
      { return _M_t.key_comp(); }
#pragma empty_line
      /**
       *  Returns a value comparison object, built from the key comparison
       *  object out of which the %map was constructed.
       */
      value_compare
      value_comp() const
      { return value_compare(_M_t.key_comp()); }
#pragma empty_line
      // [23.3.1.3] map operations
      /**
       *  @brief Tries to locate an element in a %map.
       *  @param  x  Key of (key, value) %pair to be located.
       *  @return  Iterator pointing to sought-after element, or end() if not
       *           found.
       *
       *  This function takes a key and tries to locate the element with which
       *  the key matches.  If successful the function returns an iterator
       *  pointing to the sought after %pair.  If unsuccessful it returns the
       *  past-the-end ( @c end() ) iterator.
       */
      iterator
      find(const key_type& __x)
      { return _M_t.find(__x); }
#pragma empty_line
      /**
       *  @brief Tries to locate an element in a %map.
       *  @param  x  Key of (key, value) %pair to be located.
       *  @return  Read-only (constant) iterator pointing to sought-after
       *           element, or end() if not found.
       *
       *  This function takes a key and tries to locate the element with which
       *  the key matches.  If successful the function returns a constant
       *  iterator pointing to the sought after %pair. If unsuccessful it
       *  returns the past-the-end ( @c end() ) iterator.
       */
      const_iterator
      find(const key_type& __x) const
      { return _M_t.find(__x); }
#pragma empty_line
      /**
       *  @brief  Finds the number of elements with given key.
       *  @param  x  Key of (key, value) pairs to be located.
       *  @return  Number of elements with specified key.
       *
       *  This function only makes sense for multimaps; for map the result will
       *  either be 0 (not present) or 1 (present).
       */
      size_type
      count(const key_type& __x) const
      { return _M_t.find(__x) == _M_t.end() ? 0 : 1; }
#pragma empty_line
      /**
       *  @brief Finds the beginning of a subsequence matching given key.
       *  @param  x  Key of (key, value) pair to be located.
       *  @return  Iterator pointing to first element equal to or greater
       *           than key, or end().
       *
       *  This function returns the first element of a subsequence of elements
       *  that matches the given key.  If unsuccessful it returns an iterator
       *  pointing to the first element that has a greater value than given key
       *  or end() if no such element exists.
       */
      iterator
      lower_bound(const key_type& __x)
      { return _M_t.lower_bound(__x); }
#pragma empty_line
      /**
       *  @brief Finds the beginning of a subsequence matching given key.
       *  @param  x  Key of (key, value) pair to be located.
       *  @return  Read-only (constant) iterator pointing to first element
       *           equal to or greater than key, or end().
       *
       *  This function returns the first element of a subsequence of elements
       *  that matches the given key.  If unsuccessful it returns an iterator
       *  pointing to the first element that has a greater value than given key
       *  or end() if no such element exists.
       */
      const_iterator
      lower_bound(const key_type& __x) const
      { return _M_t.lower_bound(__x); }
#pragma empty_line
      /**
       *  @brief Finds the end of a subsequence matching given key.
       *  @param  x  Key of (key, value) pair to be located.
       *  @return Iterator pointing to the first element
       *          greater than key, or end().
       */
      iterator
      upper_bound(const key_type& __x)
      { return _M_t.upper_bound(__x); }
#pragma empty_line
      /**
       *  @brief Finds the end of a subsequence matching given key.
       *  @param  x  Key of (key, value) pair to be located.
       *  @return  Read-only (constant) iterator pointing to first iterator
       *           greater than key, or end().
       */
      const_iterator
      upper_bound(const key_type& __x) const
      { return _M_t.upper_bound(__x); }
#pragma empty_line
      /**
       *  @brief Finds a subsequence matching given key.
       *  @param  x  Key of (key, value) pairs to be located.
       *  @return  Pair of iterators that possibly points to the subsequence
       *           matching given key.
       *
       *  This function is equivalent to
       *  @code
       *    std::make_pair(c.lower_bound(val),
       *                   c.upper_bound(val))
       *  @endcode
       *  (but is faster than making the calls separately).
       *
       *  This function probably only makes sense for multimaps.
       */
      std::pair<iterator, iterator>
      equal_range(const key_type& __x)
      { return _M_t.equal_range(__x); }
#pragma empty_line
      /**
       *  @brief Finds a subsequence matching given key.
       *  @param  x  Key of (key, value) pairs to be located.
       *  @return  Pair of read-only (constant) iterators that possibly points
       *           to the subsequence matching given key.
       *
       *  This function is equivalent to
       *  @code
       *    std::make_pair(c.lower_bound(val),
       *                   c.upper_bound(val))
       *  @endcode
       *  (but is faster than making the calls separately).
       *
       *  This function probably only makes sense for multimaps.
       */
      std::pair<const_iterator, const_iterator>
      equal_range(const key_type& __x) const
      { return _M_t.equal_range(__x); }
#pragma empty_line
      template<typename _K1, typename _T1, typename _C1, typename _A1>
        friend bool
        operator==(const map<_K1, _T1, _C1, _A1>&,
     const map<_K1, _T1, _C1, _A1>&);
#pragma empty_line
      template<typename _K1, typename _T1, typename _C1, typename _A1>
        friend bool
        operator<(const map<_K1, _T1, _C1, _A1>&,
    const map<_K1, _T1, _C1, _A1>&);
    };
#pragma empty_line
  /**
   *  @brief  Map equality comparison.
   *  @param  x  A %map.
   *  @param  y  A %map of the same type as @a x.
   *  @return  True iff the size and elements of the maps are equal.
   *
   *  This is an equivalence relation.  It is linear in the size of the
   *  maps.  Maps are considered equivalent if their sizes are equal,
   *  and if corresponding elements compare equal.
  */
  template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator==(const map<_Key, _Tp, _Compare, _Alloc>& __x,
               const map<_Key, _Tp, _Compare, _Alloc>& __y)
    { return __x._M_t == __y._M_t; }
#pragma empty_line
  /**
   *  @brief  Map ordering relation.
   *  @param  x  A %map.
   *  @param  y  A %map of the same type as @a x.
   *  @return  True iff @a x is lexicographically less than @a y.
   *
   *  This is a total ordering relation.  It is linear in the size of the
   *  maps.  The elements must be comparable with @c <.
   *
   *  See std::lexicographical_compare() for how the determination is made.
  */
  template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator<(const map<_Key, _Tp, _Compare, _Alloc>& __x,
              const map<_Key, _Tp, _Compare, _Alloc>& __y)
    { return __x._M_t < __y._M_t; }
#pragma empty_line
  /// Based on operator==
  template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator!=(const map<_Key, _Tp, _Compare, _Alloc>& __x,
               const map<_Key, _Tp, _Compare, _Alloc>& __y)
    { return !(__x == __y); }
#pragma empty_line
  /// Based on operator<
  template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator>(const map<_Key, _Tp, _Compare, _Alloc>& __x,
              const map<_Key, _Tp, _Compare, _Alloc>& __y)
    { return __y < __x; }
#pragma empty_line
  /// Based on operator<
  template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator<=(const map<_Key, _Tp, _Compare, _Alloc>& __x,
               const map<_Key, _Tp, _Compare, _Alloc>& __y)
    { return !(__y < __x); }
#pragma empty_line
  /// Based on operator<
  template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator>=(const map<_Key, _Tp, _Compare, _Alloc>& __x,
               const map<_Key, _Tp, _Compare, _Alloc>& __y)
    { return !(__x < __y); }
#pragma empty_line
  /// See std::map::swap().
  template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline void
    swap(map<_Key, _Tp, _Compare, _Alloc>& __x,
  map<_Key, _Tp, _Compare, _Alloc>& __y)
    { __x.swap(__y); }
#pragma empty_line
}
#pragma line 61 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\map" 2 3
#pragma line 1 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_multimap.h" 1 3
// Multimap implementation -*- C++ -*-
#pragma empty_line
// Copyright (C) 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010
// Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
#pragma empty_line
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
#pragma empty_line
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
#pragma empty_line
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.
#pragma empty_line
/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996,1997
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */
#pragma empty_line
/** @file stl_multimap.h
 *  This is an internal header file, included by other library headers.
 *  You should not attempt to use it directly.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
namespace std {
#pragma empty_line
  /**
   *  @brief A standard container made up of (key,value) pairs, which can be
   *  retrieved based on a key, in logarithmic time.
   *
   *  @ingroup associative_containers
   *
   *  Meets the requirements of a <a href="tables.html#65">container</a>, a
   *  <a href="tables.html#66">reversible container</a>, and an
   *  <a href="tables.html#69">associative container</a> (using equivalent
   *  keys).  For a @c multimap<Key,T> the key_type is Key, the mapped_type
   *  is T, and the value_type is std::pair<const Key,T>.
   *
   *  Multimaps support bidirectional iterators.
   *
   *  The private tree data is declared exactly the same way for map and
   *  multimap; the distinction is made entirely in how the tree functions are
   *  called (*_unique versus *_equal, same as the standard).
  */
  template <typename _Key, typename _Tp,
     typename _Compare = std::less<_Key>,
     typename _Alloc = std::allocator<std::pair<const _Key, _Tp> > >
    class multimap
    {
    public:
      typedef _Key key_type;
      typedef _Tp mapped_type;
      typedef std::pair<const _Key, _Tp> value_type;
      typedef _Compare key_compare;
      typedef _Alloc allocator_type;
#pragma empty_line
    private:
      // concept requirements
      typedef typename _Alloc::value_type _Alloc_value_type;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    public:
      class value_compare
      : public std::binary_function<value_type, value_type, bool>
      {
 friend class multimap<_Key, _Tp, _Compare, _Alloc>;
      protected:
 _Compare comp;
#pragma empty_line
 value_compare(_Compare __c)
 : comp(__c) { }
#pragma empty_line
      public:
 bool operator()(const value_type& __x, const value_type& __y) const
 { return comp(__x.first, __y.first); }
      };
#pragma empty_line
    private:
      /// This turns a red-black tree into a [multi]map.
      typedef typename _Alloc::template rebind<value_type>::other
        _Pair_alloc_type;
#pragma empty_line
      typedef _Rb_tree<key_type, value_type, _Select1st<value_type>,
         key_compare, _Pair_alloc_type> _Rep_type;
      /// The actual tree structure.
      _Rep_type _M_t;
#pragma empty_line
    public:
      // many of these are specified differently in ISO, but the following are
      // "functionally equivalent"
      typedef typename _Pair_alloc_type::pointer pointer;
      typedef typename _Pair_alloc_type::const_pointer const_pointer;
      typedef typename _Pair_alloc_type::reference reference;
      typedef typename _Pair_alloc_type::const_reference const_reference;
      typedef typename _Rep_type::iterator iterator;
      typedef typename _Rep_type::const_iterator const_iterator;
      typedef typename _Rep_type::size_type size_type;
      typedef typename _Rep_type::difference_type difference_type;
      typedef typename _Rep_type::reverse_iterator reverse_iterator;
      typedef typename _Rep_type::const_reverse_iterator const_reverse_iterator;
#pragma empty_line
      // [23.3.2] construct/copy/destroy
      // (get_allocator() is also listed in this section)
      /**
       *  @brief  Default constructor creates no elements.
       */
      multimap()
      : _M_t() { }
#pragma empty_line
      /**
       *  @brief  Creates a %multimap with no elements.
       *  @param  comp  A comparison object.
       *  @param  a  An allocator object.
       */
      explicit
      multimap(const _Compare& __comp,
        const allocator_type& __a = allocator_type())
      : _M_t(__comp, __a) { }
#pragma empty_line
      /**
       *  @brief  %Multimap copy constructor.
       *  @param  x  A %multimap of identical element and allocator types.
       *
       *  The newly-created %multimap uses a copy of the allocation object
       *  used by @a x.
       */
      multimap(const multimap& __x)
      : _M_t(__x._M_t) { }
#pragma line 199 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_multimap.h" 3
      /**
       *  @brief  Builds a %multimap from a range.
       *  @param  first  An input iterator.
       *  @param  last  An input iterator.
       *
       *  Create a %multimap consisting of copies of the elements from
       *  [first,last).  This is linear in N if the range is already sorted,
       *  and NlogN otherwise (where N is distance(first,last)).
       */
      template<typename _InputIterator>
        multimap(_InputIterator __first, _InputIterator __last)
 : _M_t()
        { _M_t._M_insert_equal(__first, __last); }
#pragma empty_line
      /**
       *  @brief  Builds a %multimap from a range.
       *  @param  first  An input iterator.
       *  @param  last  An input iterator.
       *  @param  comp  A comparison functor.
       *  @param  a  An allocator object.
       *
       *  Create a %multimap consisting of copies of the elements from
       *  [first,last).  This is linear in N if the range is already sorted,
       *  and NlogN otherwise (where N is distance(first,last)).
       */
      template<typename _InputIterator>
        multimap(_InputIterator __first, _InputIterator __last,
   const _Compare& __comp,
   const allocator_type& __a = allocator_type())
        : _M_t(__comp, __a)
        { _M_t._M_insert_equal(__first, __last); }
#pragma empty_line
      // FIXME There is no dtor declared, but we should have something generated
      // by Doxygen.  I don't know what tags to add to this paragraph to make
      // that happen:
      /**
       *  The dtor only erases the elements, and note that if the elements
       *  themselves are pointers, the pointed-to memory is not touched in any
       *  way.  Managing the pointer is the user's responsibility.
       */
#pragma empty_line
      /**
       *  @brief  %Multimap assignment operator.
       *  @param  x  A %multimap of identical element and allocator types.
       *
       *  All the elements of @a x are copied, but unlike the copy constructor,
       *  the allocator object is not copied.
       */
      multimap&
      operator=(const multimap& __x)
      {
 _M_t = __x._M_t;
 return *this;
      }
#pragma line 292 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_multimap.h" 3
      /// Get a copy of the memory allocation object.
      allocator_type
      get_allocator() const
      { return _M_t.get_allocator(); }
#pragma empty_line
      // iterators
      /**
       *  Returns a read/write iterator that points to the first pair in the
       *  %multimap.  Iteration is done in ascending order according to the
       *  keys.
       */
      iterator
      begin()
      { return _M_t.begin(); }
#pragma empty_line
      /**
       *  Returns a read-only (constant) iterator that points to the first pair
       *  in the %multimap.  Iteration is done in ascending order according to
       *  the keys.
       */
      const_iterator
      begin() const
      { return _M_t.begin(); }
#pragma empty_line
      /**
       *  Returns a read/write iterator that points one past the last pair in
       *  the %multimap.  Iteration is done in ascending order according to the
       *  keys.
       */
      iterator
      end()
      { return _M_t.end(); }
#pragma empty_line
      /**
       *  Returns a read-only (constant) iterator that points one past the last
       *  pair in the %multimap.  Iteration is done in ascending order according
       *  to the keys.
       */
      const_iterator
      end() const
      { return _M_t.end(); }
#pragma empty_line
      /**
       *  Returns a read/write reverse iterator that points to the last pair in
       *  the %multimap.  Iteration is done in descending order according to the
       *  keys.
       */
      reverse_iterator
      rbegin()
      { return _M_t.rbegin(); }
#pragma empty_line
      /**
       *  Returns a read-only (constant) reverse iterator that points to the
       *  last pair in the %multimap.  Iteration is done in descending order
       *  according to the keys.
       */
      const_reverse_iterator
      rbegin() const
      { return _M_t.rbegin(); }
#pragma empty_line
      /**
       *  Returns a read/write reverse iterator that points to one before the
       *  first pair in the %multimap.  Iteration is done in descending order
       *  according to the keys.
       */
      reverse_iterator
      rend()
      { return _M_t.rend(); }
#pragma empty_line
      /**
       *  Returns a read-only (constant) reverse iterator that points to one
       *  before the first pair in the %multimap.  Iteration is done in
       *  descending order according to the keys.
       */
      const_reverse_iterator
      rend() const
      { return _M_t.rend(); }
#pragma line 408 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_multimap.h" 3
      // capacity
      /** Returns true if the %multimap is empty.  */
      bool
      empty() const
      { return _M_t.empty(); }
#pragma empty_line
      /** Returns the size of the %multimap.  */
      size_type
      size() const
      { return _M_t.size(); }
#pragma empty_line
      /** Returns the maximum size of the %multimap.  */
      size_type
      max_size() const
      { return _M_t.max_size(); }
#pragma empty_line
      // modifiers
      /**
       *  @brief Inserts a std::pair into the %multimap.
       *  @param  x  Pair to be inserted (see std::make_pair for easy creation
       *             of pairs).
       *  @return An iterator that points to the inserted (key,value) pair.
       *
       *  This function inserts a (key, value) pair into the %multimap.
       *  Contrary to a std::map the %multimap does not rely on unique keys and
       *  thus multiple pairs with the same key can be inserted.
       *
       *  Insertion requires logarithmic time.
       */
      iterator
      insert(const value_type& __x)
      { return _M_t._M_insert_equal(__x); }
#pragma empty_line
      /**
       *  @brief Inserts a std::pair into the %multimap.
       *  @param  position  An iterator that serves as a hint as to where the
       *                    pair should be inserted.
       *  @param  x  Pair to be inserted (see std::make_pair for easy creation
       *             of pairs).
       *  @return An iterator that points to the inserted (key,value) pair.
       *
       *  This function inserts a (key, value) pair into the %multimap.
       *  Contrary to a std::map the %multimap does not rely on unique keys and
       *  thus multiple pairs with the same key can be inserted.
       *  Note that the first parameter is only a hint and can potentially
       *  improve the performance of the insertion process.  A bad hint would
       *  cause no gains in efficiency.
       *
       *  For more on @a hinting, see:
       *  http://gcc.gnu.org/onlinedocs/libstdc++/manual/bk01pt07ch17.html
       *
       *  Insertion requires logarithmic time (if the hint is not taken).
       */
      iterator
      insert(iterator __position, const value_type& __x)
      { return _M_t._M_insert_equal_(__position, __x); }
#pragma empty_line
      /**
       *  @brief A template function that attempts to insert a range
       *  of elements.
       *  @param  first  Iterator pointing to the start of the range to be
       *                 inserted.
       *  @param  last  Iterator pointing to the end of the range.
       *
       *  Complexity similar to that of the range constructor.
       */
      template<typename _InputIterator>
        void
        insert(_InputIterator __first, _InputIterator __last)
        { _M_t._M_insert_equal(__first, __last); }
#pragma line 512 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_multimap.h" 3
      /**
       *  @brief Erases an element from a %multimap.
       *  @param  position  An iterator pointing to the element to be erased.
       *
       *  This function erases an element, pointed to by the given iterator,
       *  from a %multimap.  Note that this function only erases the element,
       *  and that if the element is itself a pointer, the pointed-to memory is
       *  not touched in any way.  Managing the pointer is the user's
       *  responsibility.
       */
      void
      erase(iterator __position)
      { _M_t.erase(__position); }
#pragma empty_line
#pragma empty_line
      /**
       *  @brief Erases elements according to the provided key.
       *  @param  x  Key of element to be erased.
       *  @return  The number of elements erased.
       *
       *  This function erases all elements located by the given key from a
       *  %multimap.
       *  Note that this function only erases the element, and that if
       *  the element is itself a pointer, the pointed-to memory is not touched
       *  in any way.  Managing the pointer is the user's responsibility.
       */
      size_type
      erase(const key_type& __x)
      { return _M_t.erase(__x); }
#pragma line 561 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_multimap.h" 3
      // _GLIBCXX_RESOLVE_LIB_DEFECTS
      // DR 130. Associative erase should return an iterator.
      /**
       *  @brief Erases a [first,last) range of elements from a %multimap.
       *  @param  first  Iterator pointing to the start of the range to be
       *                 erased.
       *  @param  last  Iterator pointing to the end of the range to be erased.
       *
       *  This function erases a sequence of elements from a %multimap.
       *  Note that this function only erases the elements, and that if
       *  the elements themselves are pointers, the pointed-to memory is not
       *  touched in any way.  Managing the pointer is the user's responsibility.
       */
      void
      erase(iterator __first, iterator __last)
      { _M_t.erase(__first, __last); }
#pragma empty_line
#pragma empty_line
      /**
       *  @brief  Swaps data with another %multimap.
       *  @param  x  A %multimap of the same element and allocator types.
       *
       *  This exchanges the elements between two multimaps in constant time.
       *  (It is only swapping a pointer, an integer, and an instance of
       *  the @c Compare type (which itself is often stateless and empty), so it
       *  should be quite fast.)
       *  Note that the global std::swap() function is specialized such that
       *  std::swap(m1,m2) will feed to this function.
       */
      void
      swap(multimap& __x)
      { _M_t.swap(__x._M_t); }
#pragma empty_line
      /**
       *  Erases all elements in a %multimap.  Note that this function only
       *  erases the elements, and that if the elements themselves are pointers,
       *  the pointed-to memory is not touched in any way.  Managing the pointer
       *  is the user's responsibility.
       */
      void
      clear()
      { _M_t.clear(); }
#pragma empty_line
      // observers
      /**
       *  Returns the key comparison object out of which the %multimap
       *  was constructed.
       */
      key_compare
      key_comp() const
      { return _M_t.key_comp(); }
#pragma empty_line
      /**
       *  Returns a value comparison object, built from the key comparison
       *  object out of which the %multimap was constructed.
       */
      value_compare
      value_comp() const
      { return value_compare(_M_t.key_comp()); }
#pragma empty_line
      // multimap operations
      /**
       *  @brief Tries to locate an element in a %multimap.
       *  @param  x  Key of (key, value) pair to be located.
       *  @return  Iterator pointing to sought-after element,
       *           or end() if not found.
       *
       *  This function takes a key and tries to locate the element with which
       *  the key matches.  If successful the function returns an iterator
       *  pointing to the sought after %pair.  If unsuccessful it returns the
       *  past-the-end ( @c end() ) iterator.
       */
      iterator
      find(const key_type& __x)
      { return _M_t.find(__x); }
#pragma empty_line
      /**
       *  @brief Tries to locate an element in a %multimap.
       *  @param  x  Key of (key, value) pair to be located.
       *  @return  Read-only (constant) iterator pointing to sought-after
       *           element, or end() if not found.
       *
       *  This function takes a key and tries to locate the element with which
       *  the key matches.  If successful the function returns a constant
       *  iterator pointing to the sought after %pair.  If unsuccessful it
       *  returns the past-the-end ( @c end() ) iterator.
       */
      const_iterator
      find(const key_type& __x) const
      { return _M_t.find(__x); }
#pragma empty_line
      /**
       *  @brief Finds the number of elements with given key.
       *  @param  x  Key of (key, value) pairs to be located.
       *  @return Number of elements with specified key.
       */
      size_type
      count(const key_type& __x) const
      { return _M_t.count(__x); }
#pragma empty_line
      /**
       *  @brief Finds the beginning of a subsequence matching given key.
       *  @param  x  Key of (key, value) pair to be located.
       *  @return  Iterator pointing to first element equal to or greater
       *           than key, or end().
       *
       *  This function returns the first element of a subsequence of elements
       *  that matches the given key.  If unsuccessful it returns an iterator
       *  pointing to the first element that has a greater value than given key
       *  or end() if no such element exists.
       */
      iterator
      lower_bound(const key_type& __x)
      { return _M_t.lower_bound(__x); }
#pragma empty_line
      /**
       *  @brief Finds the beginning of a subsequence matching given key.
       *  @param  x  Key of (key, value) pair to be located.
       *  @return  Read-only (constant) iterator pointing to first element
       *           equal to or greater than key, or end().
       *
       *  This function returns the first element of a subsequence of elements
       *  that matches the given key.  If unsuccessful the iterator will point
       *  to the next greatest element or, if no such greater element exists, to
       *  end().
       */
      const_iterator
      lower_bound(const key_type& __x) const
      { return _M_t.lower_bound(__x); }
#pragma empty_line
      /**
       *  @brief Finds the end of a subsequence matching given key.
       *  @param  x  Key of (key, value) pair to be located.
       *  @return Iterator pointing to the first element
       *          greater than key, or end().
       */
      iterator
      upper_bound(const key_type& __x)
      { return _M_t.upper_bound(__x); }
#pragma empty_line
      /**
       *  @brief Finds the end of a subsequence matching given key.
       *  @param  x  Key of (key, value) pair to be located.
       *  @return  Read-only (constant) iterator pointing to first iterator
       *           greater than key, or end().
       */
      const_iterator
      upper_bound(const key_type& __x) const
      { return _M_t.upper_bound(__x); }
#pragma empty_line
      /**
       *  @brief Finds a subsequence matching given key.
       *  @param  x  Key of (key, value) pairs to be located.
       *  @return  Pair of iterators that possibly points to the subsequence
       *           matching given key.
       *
       *  This function is equivalent to
       *  @code
       *    std::make_pair(c.lower_bound(val),
       *                   c.upper_bound(val))
       *  @endcode
       *  (but is faster than making the calls separately).
       */
      std::pair<iterator, iterator>
      equal_range(const key_type& __x)
      { return _M_t.equal_range(__x); }
#pragma empty_line
      /**
       *  @brief Finds a subsequence matching given key.
       *  @param  x  Key of (key, value) pairs to be located.
       *  @return  Pair of read-only (constant) iterators that possibly points
       *           to the subsequence matching given key.
       *
       *  This function is equivalent to
       *  @code
       *    std::make_pair(c.lower_bound(val),
       *                   c.upper_bound(val))
       *  @endcode
       *  (but is faster than making the calls separately).
       */
      std::pair<const_iterator, const_iterator>
      equal_range(const key_type& __x) const
      { return _M_t.equal_range(__x); }
#pragma empty_line
      template<typename _K1, typename _T1, typename _C1, typename _A1>
        friend bool
        operator==(const multimap<_K1, _T1, _C1, _A1>&,
     const multimap<_K1, _T1, _C1, _A1>&);
#pragma empty_line
      template<typename _K1, typename _T1, typename _C1, typename _A1>
        friend bool
        operator<(const multimap<_K1, _T1, _C1, _A1>&,
    const multimap<_K1, _T1, _C1, _A1>&);
  };
#pragma empty_line
  /**
   *  @brief  Multimap equality comparison.
   *  @param  x  A %multimap.
   *  @param  y  A %multimap of the same type as @a x.
   *  @return  True iff the size and elements of the maps are equal.
   *
   *  This is an equivalence relation.  It is linear in the size of the
   *  multimaps.  Multimaps are considered equivalent if their sizes are equal,
   *  and if corresponding elements compare equal.
  */
  template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator==(const multimap<_Key, _Tp, _Compare, _Alloc>& __x,
               const multimap<_Key, _Tp, _Compare, _Alloc>& __y)
    { return __x._M_t == __y._M_t; }
#pragma empty_line
  /**
   *  @brief  Multimap ordering relation.
   *  @param  x  A %multimap.
   *  @param  y  A %multimap of the same type as @a x.
   *  @return  True iff @a x is lexicographically less than @a y.
   *
   *  This is a total ordering relation.  It is linear in the size of the
   *  multimaps.  The elements must be comparable with @c <.
   *
   *  See std::lexicographical_compare() for how the determination is made.
  */
  template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator<(const multimap<_Key, _Tp, _Compare, _Alloc>& __x,
              const multimap<_Key, _Tp, _Compare, _Alloc>& __y)
    { return __x._M_t < __y._M_t; }
#pragma empty_line
  /// Based on operator==
  template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator!=(const multimap<_Key, _Tp, _Compare, _Alloc>& __x,
               const multimap<_Key, _Tp, _Compare, _Alloc>& __y)
    { return !(__x == __y); }
#pragma empty_line
  /// Based on operator<
  template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator>(const multimap<_Key, _Tp, _Compare, _Alloc>& __x,
              const multimap<_Key, _Tp, _Compare, _Alloc>& __y)
    { return __y < __x; }
#pragma empty_line
  /// Based on operator<
  template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator<=(const multimap<_Key, _Tp, _Compare, _Alloc>& __x,
               const multimap<_Key, _Tp, _Compare, _Alloc>& __y)
    { return !(__y < __x); }
#pragma empty_line
  /// Based on operator<
  template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator>=(const multimap<_Key, _Tp, _Compare, _Alloc>& __x,
               const multimap<_Key, _Tp, _Compare, _Alloc>& __y)
    { return !(__x < __y); }
#pragma empty_line
  /// See std::multimap::swap().
  template<typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline void
    swap(multimap<_Key, _Tp, _Compare, _Alloc>& __x,
         multimap<_Key, _Tp, _Compare, _Alloc>& __y)
    { __x.swap(__y); }
#pragma empty_line
}
#pragma line 62 "C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\map" 2 3
#pragma line 4 "jpet_geo/jpet_geo.h" 2
#pragma empty_line
#pragma empty_line
using namespace std;
#pragma empty_line
struct detLoc {
  detLoc(){};
#pragma empty_line
  detLoc(short p_x, float p_y, short p_module){
    x = p_x;
    y = p_y;
    module = p_module;
  }
  short x;
  float y;
  short module;
};
#pragma empty_line
struct detectorMap {
 detLoc detMap[96];
#pragma empty_line
 detectorMap()
 {
     const short D = 10; //diameter of a straw in [mm]
        const short R = 5; //radius of a pipe in [mm]
        float SHORTER_LENGTH = 8.747; //74685657822 distance between the heights of centres of pipes
                                      //in the same layer but in different levels in [mm]
        const short LONGER_LENGTH = 100; //distance between the centres of bottom level pipes
                                   //in two neighbouring layers in [mm]
  // MODULE 1
  // LAYER 1
#pragma empty_line
   detMap[1] = detLoc(0, SHORTER_LENGTH, 1); // pierwsza s³omka: R, shorter_lenght, rz¹d, nr w rzêdzie
   detMap[2] = detLoc(R, 0, 1);
   detMap[3] = detLoc(D, SHORTER_LENGTH, 1);
   detMap[4] = detLoc(R+D, 0, 1);
#pragma empty_line
   detMap[5] = detLoc(2*D, SHORTER_LENGTH, 1);
   detMap[6] = detLoc(R+2*D, 0, 1);
   detMap[7] = detLoc(3*D, SHORTER_LENGTH, 1);
   detMap[8] = detLoc(R+3*D, 0, 1);
#pragma empty_line
   detMap[9] = detLoc(4*D, SHORTER_LENGTH, 1);
   detMap[10] = detLoc(R+4*D, 0, 1);
   detMap[11] = detLoc(5*D, SHORTER_LENGTH, 1);
   detMap[12] = detLoc(R+5*D, 0, 1);
#pragma empty_line
   detMap[13] = detLoc(6*D, SHORTER_LENGTH, 1);
   detMap[14] = detLoc(R+6*D, 0, 1);
   detMap[15] = detLoc(7*D, SHORTER_LENGTH, 1);
   detMap[16] = detLoc(R+7*D, 0, 1);
#pragma empty_line
   detMap[17] = detLoc(8*D, SHORTER_LENGTH, 1);
   detMap[18] = detLoc(R+8*D, 0, 1);
   detMap[19] = detLoc(9*D, SHORTER_LENGTH, 1);
   detMap[20] = detLoc(R+9*D, 0, 1);
#pragma empty_line
   detMap[21] = detLoc(10*D, SHORTER_LENGTH, 1);
   detMap[22] = detLoc(R+10*D, 0, 1);
   detMap[23] = detLoc(11*D, SHORTER_LENGTH, 1);
   detMap[24] = detLoc(R+11*D, 0, 1);
#pragma empty_line
   detMap[25] = detLoc(12*D, SHORTER_LENGTH, 1);
   detMap[26] = detLoc(R+12*D, 0, 1);
   detMap[27] = detLoc(13*D, SHORTER_LENGTH, 1);
   detMap[28] = detLoc(R+13*D, 0, 1);
#pragma empty_line
   detMap[29] = detLoc(14*D, SHORTER_LENGTH, 1);
   detMap[30] = detLoc(R+14*D, 0, 1);
   detMap[31] = detLoc(15*D, SHORTER_LENGTH, 1);
   detMap[32] = detLoc(R+15*D, 0, 1);
#pragma empty_line
        // LAYER 2
#pragma empty_line
   detMap[33] = detLoc(0, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[34] = detLoc(R, LONGER_LENGTH, 1);
   detMap[35] = detLoc(D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[36] = detLoc(R+D, LONGER_LENGTH, 1);
#pragma empty_line
   detMap[37] = detLoc(2*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[38] = detLoc(R+2*D, LONGER_LENGTH, 1);
   detMap[39] = detLoc(3*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[40] = detLoc(R+3*D, LONGER_LENGTH, 1);
#pragma empty_line
   detMap[41] = detLoc(4*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[42] = detLoc(R+4*D, LONGER_LENGTH, 1);
   detMap[43] = detLoc(5*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[44] = detLoc(R+5*D, LONGER_LENGTH, 1);
#pragma empty_line
   detMap[45] = detLoc(6*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[46] = detLoc(R+6*D, LONGER_LENGTH, 1);
   detMap[47] = detLoc(7*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[48] = detLoc(R+7*D, LONGER_LENGTH, 1);
#pragma empty_line
        // MODULE 2
#pragma empty_line
            detMap[49] = detLoc(8*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[50] = detLoc(R+8*D, LONGER_LENGTH, 1);
   detMap[51] = detLoc(9*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[52] = detLoc(R+9*D, LONGER_LENGTH, 1);
#pragma empty_line
   detMap[53] = detLoc(10*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[54] = detLoc(R+10*D, LONGER_LENGTH, 1);
   detMap[55] = detLoc(11*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[56] = detLoc(R+11*D, LONGER_LENGTH, 1);
#pragma empty_line
   detMap[57] = detLoc(12*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[58] = detLoc(R+12*D, LONGER_LENGTH, 1);
   detMap[59] = detLoc(13*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[60] = detLoc(R+13*D, LONGER_LENGTH, 1);
#pragma empty_line
   detMap[61] = detLoc(14*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[62] = detLoc(R+14*D, LONGER_LENGTH, 1);
   detMap[63] = detLoc(15*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[64] = detLoc(R+15*D, LONGER_LENGTH, 1);
#pragma empty_line
        // LAYER 3
#pragma empty_line
   detMap[65] = detLoc(0, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[66] = detLoc(R, LONGER_LENGTH, 1);
   detMap[67] = detLoc(D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[68] = detLoc(R+D, LONGER_LENGTH, 1);
#pragma empty_line
   detMap[69] = detLoc(2*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[70] = detLoc(R+2*D, LONGER_LENGTH, 1);
   detMap[71] = detLoc(3*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[72] = detLoc(R+3*D, LONGER_LENGTH, 1);
#pragma empty_line
   detMap[73] = detLoc(4*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[74] = detLoc(R+4*D, LONGER_LENGTH, 1);
   detMap[75] = detLoc(5*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[76] = detLoc(R+5*D, LONGER_LENGTH, 1);
#pragma empty_line
   detMap[77] = detLoc(6*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[78] = detLoc(R+6*D, LONGER_LENGTH, 1);
   detMap[79] = detLoc(7*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[80] = detLoc(R+7*D, LONGER_LENGTH, 1);
#pragma empty_line
   detMap[81] = detLoc(8*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[82] = detLoc(R+8*D, LONGER_LENGTH, 1);
   detMap[83] = detLoc(9*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[84] = detLoc(R+9*D, LONGER_LENGTH, 1);
#pragma empty_line
   detMap[85] = detLoc(10*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[86] = detLoc(R+10*D, LONGER_LENGTH, 1);
   detMap[87] = detLoc(11*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[88] = detLoc(R+11*D, LONGER_LENGTH, 1);
#pragma empty_line
   detMap[89] = detLoc(12*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[90] = detLoc(R+12*D, LONGER_LENGTH, 1);
   detMap[91] = detLoc(13*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[92] = detLoc(R+13*D, LONGER_LENGTH, 1);
#pragma empty_line
   detMap[93] = detLoc(14*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[94] = detLoc(R+14*D, LONGER_LENGTH, 1);
   detMap[95] = detLoc(15*D, LONGER_LENGTH+SHORTER_LENGTH, 1);
   detMap[96] = detLoc(R+15*D, LONGER_LENGTH, 1);
 }
};
#pragma empty_line
detLoc GetLocation(short tdc_channel);
#pragma line 2 "jpet_geo/jpet_geo.cpp" 2
#pragma empty_line
using namespace std;
#pragma empty_line
#pragma empty_line
detectorMap dm;
#pragma empty_line
detLoc GetLocation(short tdc_channel) {
#pragma empty_line
 return dm.detMap[tdc_channel];
}
