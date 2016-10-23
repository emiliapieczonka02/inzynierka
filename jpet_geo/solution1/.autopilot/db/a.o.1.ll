; ModuleID = 'C:/Users/Emilia/Desktop/majne/inz/inzynierskie/jpet_geo/solution1/.autopilot/db/a.g.1.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-w64-mingw32"

%struct.detectorMap.1 = type { [96 x %struct.detLoc.0] }
%struct.detLoc.0 = type { i16, float, i16 }

@llvm.global_ctors = appending global [1 x { i32, void ()* }] [{ i32, void ()* } { i32 65535, void ()* @_GLOBAL__I_a }] ; [#uses=0 type=[1 x { i32, void ()* }]*]
@dm = constant %struct.detectorMap.1 { [96 x %struct.detLoc.0] [%struct.detLoc.0 zeroinitializer, %struct.detLoc.0 { i16 0, float 0x40217E76C0000000, i16 1 }, %struct.detLoc.0 { i16 5, float 0.000000e+00, i16 1 }, %struct.detLoc.0 { i16 10, float 0x40217E76C0000000, i16 1 }, %struct.detLoc.0 { i16 15, float 0.000000e+00, i16 1 }, %struct.detLoc.0 { i16 20, float 0x40217E76C0000000, i16 1 }, %struct.detLoc.0 { i16 25, float 0.000000e+00, i16 1 }, %struct.detLoc.0 { i16 30, float 0x40217E76C0000000, i16 1 }, %struct.detLoc.0 { i16 35, float 0.000000e+00, i16 1 }, %struct.detLoc.0 { i16 40, float 0x40217E76C0000000, i16 1 }, %struct.detLoc.0 { i16 45, float 0.000000e+00, i16 1 }, %struct.detLoc.0 { i16 50, float 0x40217E76C0000000, i16 1 }, %struct.detLoc.0 { i16 55, float 0.000000e+00, i16 1 }, %struct.detLoc.0 { i16 60, float 0x40217E76C0000000, i16 1 }, %struct.detLoc.0 { i16 65, float 0.000000e+00, i16 1 }, %struct.detLoc.0 { i16 70, float 0x40217E76C0000000, i16 1 }, %struct.detLoc.0 { i16 75, float 0.000000e+00, i16 1 }, %struct.detLoc.0 { i16 80, float 0x40217E76C0000000, i16 1 }, %struct.detLoc.0 { i16 85, float 0.000000e+00, i16 1 }, %struct.detLoc.0 { i16 90, float 0x40217E76C0000000, i16 1 }, %struct.detLoc.0 { i16 95, float 0.000000e+00, i16 1 }, %struct.detLoc.0 { i16 100, float 0x40217E76C0000000, i16 1 }, %struct.detLoc.0 { i16 105, float 0.000000e+00, i16 1 }, %struct.detLoc.0 { i16 110, float 0x40217E76C0000000, i16 1 }, %struct.detLoc.0 { i16 115, float 0.000000e+00, i16 1 }, %struct.detLoc.0 { i16 120, float 0x40217E76C0000000, i16 1 }, %struct.detLoc.0 { i16 125, float 0.000000e+00, i16 1 }, %struct.detLoc.0 { i16 130, float 0x40217E76C0000000, i16 1 }, %struct.detLoc.0 { i16 135, float 0.000000e+00, i16 1 }, %struct.detLoc.0 { i16 140, float 0x40217E76C0000000, i16 1 }, %struct.detLoc.0 { i16 145, float 0.000000e+00, i16 1 }, %struct.detLoc.0 { i16 150, float 0x40217E76C0000000, i16 1 }, %struct.detLoc.0 { i16 155, float 0.000000e+00, i16 1 }, %struct.detLoc.0 { i16 0, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 5, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 10, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 15, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 20, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 25, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 30, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 35, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 40, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 45, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 50, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 55, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 60, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 65, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 70, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 75, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 80, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 85, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 90, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 95, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 100, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 105, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 110, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 115, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 120, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 125, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 130, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 135, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 140, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 145, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 150, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 155, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 0, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 5, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 10, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 15, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 20, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 25, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 30, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 35, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 40, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 45, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 50, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 55, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 60, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 65, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 70, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 75, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 80, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 85, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 90, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 95, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 100, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 105, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 110, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 115, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 120, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 125, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 130, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 135, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 140, float 0x405B2FCEE0000000, i16 1 }, %struct.detLoc.0 { i16 145, float 1.000000e+02, i16 1 }, %struct.detLoc.0 { i16 150, float 0x405B2FCEE0000000, i16 1 }] }, align 4 ; [#uses=3 type=%struct.detectorMap.1*]
@GetLocation.str = internal unnamed_addr constant [12 x i8] c"GetLocation\00" ; [#uses=1 type=[12 x i8]*]

; [#uses=1]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=3]
declare void @_ssdm_SpecKeepArrayLoad(...)

; [#uses=1]
declare void @_GLOBAL__I_a() nounwind

; [#uses=0]
define void @GetLocation(%struct.detLoc.0* noalias sret %agg.result, i16 signext %tdc_channel) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecTopModule([12 x i8]* @GetLocation.str) nounwind
  call void @llvm.dbg.value(metadata !{i16 %tdc_channel}, i64 0, metadata !61), !dbg !62 ; [debug line = 8:26] [debug variable = tdc_channel]
  %tmp = sext i16 %tdc_channel to i64, !dbg !63   ; [#uses=3 type=i64] [debug line = 10:2]
  %agg.result.addr = getelementptr inbounds %struct.detLoc.0* %agg.result, i64 0, i32 0, !dbg !63 ; [#uses=1 type=i16*] [debug line = 10:2]
  %dm.addr = getelementptr inbounds %struct.detectorMap.1* @dm, i64 0, i32 0, i64 %tmp, i32 0, !dbg !63 ; [#uses=1 type=i16*] [debug line = 10:2]
  %dm.load = load i16* %dm.addr, align 4, !dbg !63 ; [#uses=2 type=i16] [debug line = 10:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i16 %dm.load) nounwind
  store i16 %dm.load, i16* %agg.result.addr, align 2, !dbg !63 ; [debug line = 10:2]
  %agg.result.addr.1 = getelementptr inbounds %struct.detLoc.0* %agg.result, i64 0, i32 1, !dbg !63 ; [#uses=1 type=float*] [debug line = 10:2]
  %dm.addr.1 = getelementptr inbounds %struct.detectorMap.1* @dm, i64 0, i32 0, i64 %tmp, i32 1, !dbg !63 ; [#uses=1 type=float*] [debug line = 10:2]
  %dm.load.1 = load float* %dm.addr.1, align 4, !dbg !63 ; [#uses=2 type=float] [debug line = 10:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(float %dm.load.1) nounwind
  store float %dm.load.1, float* %agg.result.addr.1, align 4, !dbg !63 ; [debug line = 10:2]
  %agg.result.addr.2 = getelementptr inbounds %struct.detLoc.0* %agg.result, i64 0, i32 2, !dbg !63 ; [#uses=1 type=i16*] [debug line = 10:2]
  %dm.addr.2 = getelementptr inbounds %struct.detectorMap.1* @dm, i64 0, i32 0, i64 %tmp, i32 2, !dbg !63 ; [#uses=1 type=i16*] [debug line = 10:2]
  %dm.load.2 = load i16* %dm.addr.2, align 4, !dbg !63 ; [#uses=2 type=i16] [debug line = 10:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i16 %dm.load.2) nounwind
  store i16 %dm.load.2, i16* %agg.result.addr.2, align 2, !dbg !63 ; [debug line = 10:2]
  ret void, !dbg !63                              ; [debug line = 10:2]
}

!llvm.dbg.cu = !{!0}
!hls.encrypted.func = !{}

!0 = metadata !{i32 786449, i32 0, i32 4, metadata !"C:/Users/Emilia/Desktop/majne/inz/inzynierskie/jpet_geo/solution1/.autopilot/db/jpet_geo.pragma.2.cpp", metadata !"C:\5CUsers\5CEmilia\5CDesktop\5Cmajne\5Cinz\5Cinzynierskie", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !49} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5, metadata !33, metadata !44, metadata !45, metadata !46, metadata !47, metadata !48}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"GetLocation", metadata !"GetLocation", metadata !"_Z11GetLocations", metadata !6, i32 8, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (%struct.detLoc.0*, i16)* @GetLocation, null, null, metadata !21, i32 8} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"jpet_geo/jpet_geo.cpp", metadata !"C:\5CUsers\5CEmilia\5CDesktop\5Cmajne\5Cinz\5Cinzynierskie", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{metadata !9, metadata !13}
!9 = metadata !{i32 786434, null, metadata !"detLoc", metadata !10, i32 8, i64 96, i64 32, i32 0, i32 0, null, metadata !11, i32 0, null, null} ; [ DW_TAG_class_type ]
!10 = metadata !{i32 786473, metadata !"jpet_geo/jpet_geo.h", metadata !"C:\5CUsers\5CEmilia\5CDesktop\5Cmajne\5Cinz\5Cinzynierskie", null} ; [ DW_TAG_file_type ]
!11 = metadata !{metadata !12, metadata !14, metadata !16, metadata !17, metadata !23, metadata !26, metadata !27}
!12 = metadata !{i32 786445, metadata !9, metadata !"x", metadata !10, i32 16, i64 16, i64 16, i64 0, i32 0, metadata !13} ; [ DW_TAG_member ]
!13 = metadata !{i32 786468, null, metadata !"short", null, i32 0, i64 16, i64 16, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!14 = metadata !{i32 786445, metadata !9, metadata !"y", metadata !10, i32 17, i64 32, i64 32, i64 32, i32 0, metadata !15} ; [ DW_TAG_member ]
!15 = metadata !{i32 786468, null, metadata !"float", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 4} ; [ DW_TAG_base_type ]
!16 = metadata !{i32 786445, metadata !9, metadata !"module", metadata !10, i32 18, i64 16, i64 16, i64 64, i32 0, metadata !13} ; [ DW_TAG_member ]
!17 = metadata !{i32 786478, i32 0, metadata !9, metadata !"detLoc", metadata !"detLoc", metadata !"", metadata !10, i32 9, metadata !18, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !21, i32 9} ; [ DW_TAG_subprogram ]
!18 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !19, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!19 = metadata !{null, metadata !20}
!20 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !9} ; [ DW_TAG_pointer_type ]
!21 = metadata !{metadata !22}
!22 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!23 = metadata !{i32 786478, i32 0, metadata !9, metadata !"detLoc", metadata !"detLoc", metadata !"", metadata !10, i32 11, metadata !24, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !21, i32 11} ; [ DW_TAG_subprogram ]
!24 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !25, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!25 = metadata !{null, metadata !20, metadata !13, metadata !15, metadata !13}
!26 = metadata !{i32 786478, i32 0, metadata !9, metadata !"~detLoc", metadata !"~detLoc", metadata !"", metadata !10, i32 8, metadata !18, i1 false, i1 false, i32 0, i32 0, null, i32 320, i1 false, null, null, i32 0, metadata !21, i32 8} ; [ DW_TAG_subprogram ]
!27 = metadata !{i32 786478, i32 0, metadata !9, metadata !"operator=", metadata !"operator=", metadata !"_ZN6detLocaSERKS_", metadata !10, i32 8, metadata !28, i1 false, i1 false, i32 0, i32 0, null, i32 320, i1 false, null, null, i32 0, metadata !21, i32 8} ; [ DW_TAG_subprogram ]
!28 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !29, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!29 = metadata !{metadata !30, metadata !20, metadata !31}
!30 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !9} ; [ DW_TAG_reference_type ]
!31 = metadata !{i32 786448, null, null, null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !32} ; [ DW_TAG_reference_type ]
!32 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !9} ; [ DW_TAG_const_type ]
!33 = metadata !{i32 786478, i32 0, null, metadata !"detectorMap", metadata !"detectorMap", metadata !"_ZN11detectorMapC1Ev", metadata !10, i32 24, metadata !34, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !43, metadata !21, i32 25} ; [ DW_TAG_subprogram ]
!34 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !35, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!35 = metadata !{null, metadata !36}
!36 = metadata !{i32 786447, i32 0, metadata !"", i32 0, i32 0, i64 64, i64 64, i64 0, i32 64, metadata !37} ; [ DW_TAG_pointer_type ]
!37 = metadata !{i32 786434, null, metadata !"detectorMap", metadata !10, i32 21, i64 9216, i64 32, i32 0, i32 0, null, metadata !38, i32 0, null, null} ; [ DW_TAG_class_type ]
!38 = metadata !{metadata !39, metadata !43}
!39 = metadata !{i32 786445, metadata !37, metadata !"detMap", metadata !10, i32 22, i64 9216, i64 32, i64 0, i32 0, metadata !40} ; [ DW_TAG_member ]
!40 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 9216, i64 32, i32 0, i32 0, metadata !9, metadata !41, i32 0, i32 0} ; [ DW_TAG_array_type ]
!41 = metadata !{metadata !42}
!42 = metadata !{i32 786465, i64 0, i64 95}       ; [ DW_TAG_subrange_type ]
!43 = metadata !{i32 786478, i32 0, metadata !37, metadata !"detectorMap", metadata !"detectorMap", metadata !"", metadata !10, i32 24, metadata !34, i1 false, i1 false, i32 0, i32 0, null, i32 256, i1 false, null, null, i32 0, metadata !21, i32 24} ; [ DW_TAG_subprogram ]
!44 = metadata !{i32 786478, i32 0, null, metadata !"detectorMap", metadata !"detectorMap", metadata !"_ZN11detectorMapC2Ev", metadata !10, i32 24, metadata !34, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !43, metadata !21, i32 25} ; [ DW_TAG_subprogram ]
!45 = metadata !{i32 786478, i32 0, null, metadata !"detLoc", metadata !"detLoc", metadata !"_ZN6detLocC1Esfs", metadata !10, i32 11, metadata !24, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !23, metadata !21, i32 11} ; [ DW_TAG_subprogram ]
!46 = metadata !{i32 786478, i32 0, null, metadata !"detLoc", metadata !"detLoc", metadata !"_ZN6detLocC2Esfs", metadata !10, i32 11, metadata !24, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !23, metadata !21, i32 11} ; [ DW_TAG_subprogram ]
!47 = metadata !{i32 786478, i32 0, null, metadata !"detLoc", metadata !"detLoc", metadata !"_ZN6detLocC1Ev", metadata !10, i32 9, metadata !18, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !17, metadata !21, i32 9} ; [ DW_TAG_subprogram ]
!48 = metadata !{i32 786478, i32 0, null, metadata !"detLoc", metadata !"detLoc", metadata !"_ZN6detLocC2Ev", metadata !10, i32 9, metadata !18, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, metadata !17, metadata !21, i32 9} ; [ DW_TAG_subprogram ]
!49 = metadata !{metadata !50}
!50 = metadata !{metadata !51, metadata !52, metadata !57, metadata !59, metadata !57, metadata !59, metadata !59, metadata !57, metadata !59, metadata !59, metadata !57, metadata !59, metadata !59, metadata !57, metadata !59, metadata !59, metadata !57, metadata !59, metadata !59, metadata !57, metadata !59, metadata !59, metadata !57, metadata !59, metadata !59, metadata !57, metadata !59, metadata !59, metadata !57, metadata !59, metadata !59, metadata !57, metadata !59, metadata !59, metadata !57, metadata !59, metadata !59, metadata !57, metadata !59, metadata !59, metadata !57, metadata !59, metadata !59, metadata !57, metadata !59, metadata !59, metadata !57, metadata !59, metadata !60, metadata !57, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60, metadata !60, metadata !57, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60, metadata !59, metadata !60, metadata !57, metadata !59, metadata !60}
!51 = metadata !{i32 786484, i32 0, null, metadata !"dm", metadata !"dm", metadata !"", metadata !6, i32 6, metadata !37, i32 0, i32 1, %struct.detectorMap.1* @dm} ; [ DW_TAG_variable ]
!52 = metadata !{i32 786484, i32 0, metadata !53, metadata !"nothrow", metadata !"nothrow", metadata !"_ZSt7nothrow", metadata !54, i32 70, metadata !55, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!53 = metadata !{i32 786489, null, metadata !"std", metadata !54, i32 47} ; [ DW_TAG_namespace ]
!54 = metadata !{i32 786473, metadata !"C:/Xilinx/Vivado_HLS/2016.2/win64/tools/clang/bin\5C..\5Clib\5Cclang\5C3.1/../../../include/c++/4.5.2\5Cnew", metadata !"C:\5CUsers\5CEmilia\5CDesktop\5Cmajne\5Cinz\5Cinzynierskie", null} ; [ DW_TAG_file_type ]
!55 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !56} ; [ DW_TAG_const_type ]
!56 = metadata !{i32 786434, metadata !53, metadata !"nothrow_t", metadata !54, i32 68, i64 8, i64 8, i32 0, i32 0, null, metadata !2, i32 0, null, null} ; [ DW_TAG_class_type ]
!57 = metadata !{i32 786484, i32 0, metadata !10, metadata !"R", metadata !"R", metadata !"R", metadata !10, i32 27, metadata !58, i32 1, i32 1, i16 5} ; [ DW_TAG_variable ]
!58 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !13} ; [ DW_TAG_const_type ]
!59 = metadata !{i32 786484, i32 0, metadata !10, metadata !"D", metadata !"D", metadata !"D", metadata !10, i32 26, metadata !58, i32 1, i32 1, i16 10} ; [ DW_TAG_variable ]
!60 = metadata !{i32 786484, i32 0, metadata !10, metadata !"LONGER_LENGTH", metadata !"LONGER_LENGTH", metadata !"LONGER_LENGTH", metadata !10, i32 30, metadata !58, i32 1, i32 1, i16 100} ; [ DW_TAG_variable ]
!61 = metadata !{i32 786689, metadata !5, metadata !"tdc_channel", metadata !6, i32 16777224, metadata !13, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!62 = metadata !{i32 8, i32 26, metadata !5, null}
!63 = metadata !{i32 10, i32 2, metadata !64, null}
!64 = metadata !{i32 786443, metadata !5, i32 8, i32 39, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
