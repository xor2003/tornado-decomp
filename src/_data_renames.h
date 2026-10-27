#ifndef __M2C_DATA_RENAMES_H__
#define __M2C_DATA_RENAMES_H__

#if defined(M2C_MODULE_TIMER)
#ifndef dosvctrseg
#define dosvctrseg dosvctrseg__timer_5cd_232
#endif
#endif

#if defined(M2C_MODULE_TIMER)
#ifndef dosvctroff
#define dosvctroff dosvctroff__timer_5cf_233
#endif
#endif

#if defined(M2C_MODULE_CRITICAL)
#ifndef dosvctrseg
#define dosvctrseg dosvctrseg__critical_5e1_41
#endif
#endif

#if defined(M2C_MODULE_CRITICAL)
#ifndef dosvctroff
#define dosvctroff dosvctroff__critical_5e3_42
#endif
#endif

#if defined(M2C_MODULE_OVERFLOW)
#ifndef dosvctrseg
#define dosvctrseg dosvctrseg__overflow_5eb_30
#endif
#endif

#if defined(M2C_MODULE_OVERFLOW)
#ifndef dosvctroff
#define dosvctroff dosvctroff__overflow_5ed_31
#endif
#endif

#if defined(M2C_MODULE_PRINT)
#ifndef hexchars
#define hexchars hexchars__print_cb8_429
#endif
#endif

#if defined(M2C_MODULE_MISCLIB)
#ifndef hexchars
#define hexchars hexchars__misclib_ee8_292
#endif
#endif

#if defined(M2C_MODULE_COMMS)
#ifndef dosvctrseg
#define dosvctrseg dosvctrseg__comms_149a_253
#endif
#endif

#if defined(M2C_MODULE_COMMS)
#ifndef dosvctroff
#define dosvctroff dosvctroff__comms_149c_254
#endif
#endif

#if defined(M2C_MODULE_HORIZON)
#ifndef octant
#define octant octant__horizon_6899_1021
#endif
#endif

#if defined(M2C_MODULE_CLOUDS)
#ifndef calcsctrcentre
#define calcsctrcentre calcsctrcentre__clouds_7279_675
#endif
#endif

#if defined(M2C_MODULE_CLOUDS)
#ifndef scanvertexlist
#define scanvertexlist scanvertexlist__clouds_7281_679
#endif
#endif

#if defined(M2C_MODULE_TOWNS)
#ifndef scanvertexlist
#define scanvertexlist scanvertexlist__towns_72d3_982
#endif
#endif

#if defined(M2C_MODULE_RWY_TAXI)
#ifndef scanvertexlist
#define scanvertexlist scanvertexlist__rwy_taxi_7744_1075
#endif
#endif

#if defined(M2C_MODULE_MOBILE)
#ifndef calcobjectpos
#define calcobjectpos calcobjectpos__mobile_77c1_704
#endif
#endif

#if defined(M2C_MODULE_SCANFACE)
#ifndef facedraw
#define facedraw facedraw__scanface_7851_526
#endif
#endif

#if defined(M2C_MODULE_SCANFACE)
#ifndef rvrsfacedraw
#define rvrsfacedraw rvrsfacedraw__scanface_7861_530
#endif
#endif

#if defined(M2C_MODULE_VSCREEN)
#ifndef objectdrawmode
#define objectdrawmode objectdrawmode__vscreen_8189_433
#endif
#endif

#if defined(M2C_MODULE_VSCREEN)
#ifndef polyclipmode
#define polyclipmode polyclipmode__vscreen_818b_434
#endif
#endif

#if defined(M2C_MODULE_VSCREEN)
#ifndef plineclipmode
#define plineclipmode plineclipmode__vscreen_8191_437
#endif
#endif

#if defined(M2C_MODULE_VSCREEN)
#ifndef lastptr
#define lastptr lastptr__vscreen_8197_444
#endif
#endif

#if defined(M2C_MODULE_VSCREEN)
#ifndef lookahead
#define lookahead lookahead__vscreen_8199_445
#endif
#endif

#if defined(M2C_MODULE_VSCREEN)
#ifndef intopolyclip
#define intopolyclip intopolyclip__vscreen_819b_446
#endif
#endif

#if defined(M2C_MODULE_VSCREEN)
#ifndef tempptr1
#define tempptr1 tempptr1__vscreen_81a5_462
#endif
#endif

#if defined(M2C_MODULE_VSCREEN)
#ifndef tempptr2
#define tempptr2 tempptr2__vscreen_81a7_463
#endif
#endif

#if defined(M2C_MODULE_VSCREEN)
#ifndef tempptr3
#define tempptr3 tempptr3__vscreen_81a9_464
#endif
#endif

#if defined(M2C_MODULE_COLLIDE)
#ifndef runwaywidth
#define runwaywidth runwaywidth__collide_8361_1027
#endif
#endif

#if defined(M2C_MODULE_COLLIDE)
#ifndef endtype256
#define endtype256 endtype256__collide_8367_1034
#endif
#endif

#if defined(M2C_MODULE_COLLIDE)
#ifndef endtype192
#define endtype192 endtype192__collide_8387_1054
#endif
#endif

#if defined(M2C_MODULE_COLLIDE)
#ifndef endtype128
#define endtype128 endtype128__collide_83a7_1074
#endif
#endif

#if defined(M2C_MODULE_COLLIDE)
#ifndef endtype64
#define endtype64 endtype64__collide_83c7_1094
#endif
#endif

#if defined(M2C_MODULE_UNKNOWN)
#ifndef tmp_mob
#define tmp_mob tmp_mob__8416_0
#endif
#endif

#if defined(M2C_MODULE_UNKNOWN)
#ifndef tmp_view
#define tmp_view tmp_view__841c_0
#endif
#endif

#if defined(M2C_MODULE_SMOKEDRW)
#ifndef sectoradjust
#define sectoradjust sectoradjust__smokedrw_8430_644
#endif
#endif

#if defined(M2C_MODULE_UNKNOWN)
#ifndef tmp_view
#define tmp_view tmp_view__8464_0
#endif
#endif

#if defined(M2C_MODULE_MAINDATA)
#ifndef commsdevice
#define commsdevice commsdevice__maindata_860a_2276
#endif
#endif

#if defined(M2C_MODULE_MAINDATA)
#ifndef baudrate
#define baudrate baudrate__maindata_860b_2277
#endif
#endif

#if defined(M2C_MODULE_MODEL)
#ifndef xft
#define xft xft__model_b0f5_2431
#endif
#endif

#if defined(M2C_MODULE_MODEL)
#ifndef yft
#define yft yft__model_b0f9_2433
#endif
#endif

#if defined(M2C_MODULE_MODEL)
#ifndef temp1
#define temp1 temp1__model_b16f_2567
#endif
#endif

#if defined(M2C_MODULE_MODEL)
#ifndef temp2
#define temp2 temp2__model_b171_2568
#endif
#endif

#if defined(M2C_MODULE_MODEL)
#ifndef disphdg
#define disphdg disphdg__model_b17d_2578
#endif
#endif

#if defined(M2C_MODULE_MODEL)
#ifndef timer50
#define timer50 timer50__model_b1e0_2653
#endif
#endif

#if defined(M2C_MODULE_MODELLIB)
#ifndef initctrlswitch
#define initctrlswitch initctrlswitch__modellib_b5e5_1704
#endif
#endif

#if defined(M2C_MODULE_NAVIGPAN)
#ifndef tempval
#define tempval tempval__navigpan_b8fd_2405
#endif
#endif

#if defined(M2C_MODULE_NAVIGPAN)
#ifndef armblinktimer
#define armblinktimer armblinktimer__navigpan_b8ff_2415
#endif
#endif

#if defined(M2C_MODULE_NAVIGPAN)
#ifndef armblink
#define armblink armblink__navigpan_b901_2416
#endif
#endif

#if defined(M2C_MODULE_NAVIGPAN)
#ifndef localxpos
#define localxpos localxpos__navigpan_b914_2435
#endif
#endif

#if defined(M2C_MODULE_NAVIGPAN)
#ifndef glideypos
#define glideypos glideypos__navigpan_b916_2438
#endif
#endif

#if defined(M2C_MODULE_EXTRNPAN)
#ifndef textcol1
#define textcol1 textcol1__extrnpan_bb10_2046
#endif
#endif

#if defined(M2C_MODULE_EXTRNPAN)
#ifndef textcol2
#define textcol2 textcol2__extrnpan_bb18_2047
#endif
#endif

#if defined(M2C_MODULE_EXTRNPAN)
#ifndef alertcol
#define alertcol alertcol__extrnpan_bb20_2048
#endif
#endif

#if defined(M2C_MODULE_LOOKDOWN)
#ifndef _secscancnt1
#define _secscancnt1 _secscancnt1__lookdown_bcd7_1850
#endif
#endif

#if defined(M2C_MODULE_LOOKDOWN)
#ifndef _secscanoff1
#define _secscanoff1 _secscanoff1__lookdown_bcd9_1851
#endif
#endif

#if defined(M2C_MODULE_LOOKDOWN)
#ifndef _secscancnt2
#define _secscancnt2 _secscancnt2__lookdown_bcdb_1852
#endif
#endif

#if defined(M2C_MODULE_LOOKDOWN)
#ifndef _secscanoff2
#define _secscanoff2 _secscanoff2__lookdown_bcdd_1853
#endif
#endif

#if defined(M2C_MODULE_LOOKDOWN)
#ifndef _gndtextenabled
#define _gndtextenabled _gndtextenabled__lookdown_bcdf_1854
#endif
#endif

#if defined(M2C_MODULE_LOOKDOWN)
#ifndef _treesenabled
#define _treesenabled _treesenabled__lookdown_bce0_1855
#endif
#endif

#if defined(M2C_MODULE_LOOKDOWN)
#ifndef _hilltxtenabled
#define _hilltxtenabled _hilltxtenabled__lookdown_bce1_1856
#endif
#endif

#if defined(M2C_MODULE_LOOKDOWN)
#ifndef _cloudsenabled
#define _cloudsenabled _cloudsenabled__lookdown_bce2_1857
#endif
#endif

#if defined(M2C_MODULE_LOOKDOWN)
#ifndef _starsenabled
#define _starsenabled _starsenabled__lookdown_bce3_1858
#endif
#endif

#if defined(M2C_MODULE_LOOKDOWN)
#ifndef _gradenabled
#define _gradenabled _gradenabled__lookdown_bce4_1859
#endif
#endif

#if defined(M2C_MODULE_LOOKDOWN)
#ifndef textcol1
#define textcol1 textcol1__lookdown_bd45_1910
#endif
#endif

#if defined(M2C_MODULE_LOOKDOWN)
#ifndef textcol2
#define textcol2 textcol2__lookdown_bd4d_1911
#endif
#endif

#if defined(M2C_MODULE_UNKNOWN)
#ifndef vp
#define vp vp__bf3d_0
#endif
#endif

#if defined(M2C_MODULE_VIEWS)
#ifndef rotateswitch
#define rotateswitch rotateswitch__views_c513_2294
#endif
#endif

#if defined(M2C_MODULE_AVIONICS)
#ifndef lookahead
#define lookahead lookahead__avionics_c765_2556
#endif
#endif

#if defined(M2C_MODULE_AVIONICS)
#ifndef tmpzerr
#define tmpzerr tmpzerr__avionics_ca2e_2761
#endif
#endif

#if defined(M2C_MODULE_UNKNOWN)
#ifndef vp
#define vp vp__ca6d_0
#endif
#endif

#if defined(M2C_MODULE_MOVEMAP)
#ifndef scansize
#define scansize scansize__movemap_cac9_2515
#endif
#endif

#if defined(M2C_MODULE_MOVEMAP)
#ifndef scanoffset
#define scanoffset scanoffset__movemap_cacb_2516
#endif
#endif

#if defined(M2C_MODULE_MOVEMAP)
#ifndef xsec
#define xsec xsec__movemap_cb57_2605
#endif
#endif

#if defined(M2C_MODULE_MOVEMAP)
#ifndef ysec
#define ysec ysec__movemap_cb59_2606
#endif
#endif

#if defined(M2C_MODULE_UNKNOWN)
#ifndef vp
#define vp vp__cba4_0
#endif
#endif

#if defined(M2C_MODULE_UNKNOWN)
#ifndef vp_full
#define vp_full vp_full__cbae_0
#endif
#endif

#if defined(M2C_MODULE_TAB)
#ifndef localxpos
#define localxpos localxpos__tab_cebe_2707
#endif
#endif

#if defined(M2C_MODULE_TAB)
#ifndef glideypos
#define glideypos glideypos__tab_cec0_2710
#endif
#endif

#if defined(M2C_MODULE_TAB)
#ifndef xorg
#define xorg xorg__tab_cf5b_2826
#endif
#endif

#if defined(M2C_MODULE_TAB)
#ifndef yorg
#define yorg yorg__tab_cf5d_2827
#endif
#endif

#if defined(M2C_MODULE_TAB)
#ifndef xorg_tiald
#define xorg_tiald xorg_tiald__tab_cf5f_2828
#endif
#endif

#if defined(M2C_MODULE_TAB)
#ifndef yorg_tiald
#define yorg_tiald yorg_tiald__tab_cf61_2829
#endif
#endif

#if defined(M2C_MODULE_TAB)
#ifndef selectswitch
#define selectswitch selectswitch__tab_cf82_2858
#endif
#endif

#if defined(M2C_MODULE_TAB)
#ifndef dispswitch
#define dispswitch dispswitch__tab_cf94_2871
#endif
#endif

#if defined(M2C_MODULE_UNKNOWN)
#ifndef vp
#define vp vp__cfa4_0
#endif
#endif

#if defined(M2C_MODULE_TAB)
#ifndef mapzoom
#define mapzoom mapzoom__tab_cfae_2889
#endif
#endif

#if defined(M2C_MODULE_RNGBRG)
#ifndef octtable
#define octtable octtable__rngbrg_d1d9_1812
#endif
#endif

#if defined(M2C_MODULE_AIRCRAFT)
#ifndef pitchrate
#define pitchrate pitchrate__aircraft_d49f_2408
#endif
#endif

#if defined(M2C_MODULE_HELICOPS)
#ifndef perfdataptr
#define perfdataptr perfdataptr__helicops_d4ba_1832
#endif
#endif

#if defined(M2C_MODULE_HELICOPS)
#ifndef controlmode
#define controlmode controlmode__helicops_d510_1877
#endif
#endif

#if defined(M2C_MODULE_HELICOPS)
#ifndef perfdataptrs
#define perfdataptrs perfdataptrs__helicops_d51a_1886
#endif
#endif

#if defined(M2C_MODULE_UNKNOWN)
#ifndef takeoff1
#define takeoff1 takeoff1__d532_0
#endif
#endif

#if defined(M2C_MODULE_UNKNOWN)
#ifndef takeoff2
#define takeoff2 takeoff2__d534_0
#endif
#endif

#if defined(M2C_MODULE_UNKNOWN)
#ifndef cruise1
#define cruise1 cruise1__d536_0
#endif
#endif

#if defined(M2C_MODULE_UNKNOWN)
#ifndef cruise2
#define cruise2 cruise2__d53e_0
#endif
#endif

#if defined(M2C_MODULE_LOADPIC)
#ifndef fadeflag
#define fadeflag fadeflag__loadpic_d559_1798
#endif
#endif

#if defined(M2C_MODULE_WEAPONS)
#ifndef weaponnum
#define weaponnum weaponnum__weapons_d57e_2440
#endif
#endif

#if defined(M2C_MODULE_WEAPONS)
#ifndef radarrange
#define radarrange radarrange__weapons_d588_2444
#endif
#endif

#if defined(M2C_MODULE_UNKNOWN)
#ifndef wpn_view
#define wpn_view wpn_view__d593_0
#endif
#endif

#if defined(M2C_MODULE_WEAPONS)
#ifndef armswitch
#define armswitch armswitch__weapons_d758_2788
#endif
#endif

#if defined(M2C_MODULE_AAA)
#ifndef sourceptr
#define sourceptr sourceptr__aaa_d837_1738
#endif
#endif

#if defined(M2C_MODULE_UNKNOWN)
#ifndef aim_view
#define aim_view aim_view__d885_0
#endif
#endif

#if defined(M2C_MODULE_TRNSFRM)
#ifndef v_sinh
#define v_sinh v_sinh__trnsfrm_d970_579
#endif
#endif

#if defined(M2C_MODULE_TRNSFRM)
#ifndef v_cosh
#define v_cosh v_cosh__trnsfrm_d972_580
#endif
#endif

#if defined(M2C_MODULE_TRNSFRM)
#ifndef v_sinp
#define v_sinp v_sinp__trnsfrm_d974_581
#endif
#endif

#if defined(M2C_MODULE_TRNSFRM)
#ifndef v_cosp
#define v_cosp v_cosp__trnsfrm_d976_582
#endif
#endif

#if defined(M2C_MODULE_TRNSFRM)
#ifndef v_sinr
#define v_sinr v_sinr__trnsfrm_d978_583
#endif
#endif

#if defined(M2C_MODULE_TRNSFRM)
#ifndef v_cosr
#define v_cosr v_cosr__trnsfrm_d97a_584
#endif
#endif

#if defined(M2C_MODULE_TRNSFRM)
#ifndef a1
#define a1 a1__trnsfrm_d97c_589
#endif
#endif

#if defined(M2C_MODULE_TRNSFRM)
#ifndef a2
#define a2 a2__trnsfrm_d97e_590
#endif
#endif

#if defined(M2C_MODULE_TRNSFRM)
#ifndef a3
#define a3 a3__trnsfrm_d980_591
#endif
#endif

#if defined(M2C_MODULE_TRNSFRM)
#ifndef a4
#define a4 a4__trnsfrm_d982_592
#endif
#endif

#if defined(M2C_MODULE_TRNSFRM)
#ifndef a5
#define a5 a5__trnsfrm_d984_593
#endif
#endif

#if defined(M2C_MODULE_TRNSFRM)
#ifndef a6
#define a6 a6__trnsfrm_d986_594
#endif
#endif

#if defined(M2C_MODULE_TRNSFRM)
#ifndef a7
#define a7 a7__trnsfrm_d988_595
#endif
#endif

#if defined(M2C_MODULE_TRNSFRM)
#ifndef a8
#define a8 a8__trnsfrm_d98a_596
#endif
#endif

#if defined(M2C_MODULE_TRNSFRM)
#ifndef a9
#define a9 a9__trnsfrm_d98c_597
#endif
#endif

#if defined(M2C_MODULE_MUSIC)
#ifndef installed
#define installed installed__music_da8b_1362
#endif
#endif

#if defined(M2C_MODULE_MUSIC)
#ifndef normalised
#define normalised normalised__music_da8c_1363
#endif
#endif

#if defined(M2C_MODULE_MUSIC)
#ifndef speakerbin
#define speakerbin speakerbin__music_da8d_1372
#endif
#endif

#if defined(M2C_MODULE_MUSIC)
#ifndef adlibbin
#define adlibbin adlibbin__music_da98_1373
#endif
#endif

#if defined(M2C_MODULE_MUSIC)
#ifndef rolandbin
#define rolandbin rolandbin__music_daa3_1374
#endif
#endif

#if defined(M2C_MODULE_PREVIEW)
#ifndef paused
#define paused paused__preview_dac4_2344
#endif
#endif

#if defined(M2C_MODULE_PREVIEW)
#ifndef timer50
#define timer50 timer50__preview_dac6_2346
#endif
#endif

#if defined(M2C_MODULE_UNKNOWN)
#ifndef vp
#define vp vp__dac7_0
#endif
#endif

#if defined(M2C_MODULE_PREVIEW)
#ifndef hfine
#define hfine hfine__preview_daf1_2361
#endif
#endif

#if defined(M2C_MODULE_PREVIEW)
#ifndef pfine
#define pfine pfine__preview_daf3_2362
#endif
#endif

#if defined(M2C_MODULE_PREVIEW)
#ifndef rfine
#define rfine rfine__preview_daf5_2363
#endif
#endif

#if defined(M2C_MODULE_TWOPLYR)
#ifndef oppvtas
#define oppvtas oppvtas__twoplyr_dc52_1829
#endif
#endif

#if defined(M2C_MODULE_CLOUDS)
#ifndef vertexloop1
#define vertexloop1 vertexloop1__clouds_1a_1468
#endif
#endif

#if defined(M2C_MODULE_CLOUDS)
#ifndef vertexloop2
#define vertexloop2 vertexloop2__clouds_1d_1517
#endif
#endif

#if defined(M2C_MODULE_CLOUDS)
#ifndef vertexloop8
#define vertexloop8 vertexloop8__clouds_20_1569
#endif
#endif

#if defined(M2C_MODULE_CLOUDS)
#ifndef vertexloop16
#define vertexloop16 vertexloop16__clouds_23_1627
#endif
#endif

#if defined(M2C_MODULE_TOWNS)
#ifndef vertexloop1
#define vertexloop1 vertexloop1__towns_26_1797
#endif
#endif

#if defined(M2C_MODULE_TOWNS)
#ifndef vertexloop2
#define vertexloop2 vertexloop2__towns_29_1842
#endif
#endif

#if defined(M2C_MODULE_TOWNS)
#ifndef vertexloop8
#define vertexloop8 vertexloop8__towns_2c_1890
#endif
#endif

#if defined(M2C_MODULE_RWY_TAXI)
#ifndef vertexloop1
#define vertexloop1 vertexloop1__rwy_taxi_32_2625
#endif
#endif

#if defined(M2C_MODULE_RWY_TAXI)
#ifndef vertexloop2
#define vertexloop2 vertexloop2__rwy_taxi_35_2680
#endif
#endif

#if defined(M2C_MODULE_RWY_TAXI)
#ifndef vertexloop8
#define vertexloop8 vertexloop8__rwy_taxi_38_2738
#endif
#endif

#if defined(M2C_MODULE_RWY_TAXI)
#ifndef makevertloop1
#define makevertloop1 makevertloop1__rwy_taxi_3b_2805
#endif
#endif

#if defined(M2C_MODULE_COLLIDE)
#ifndef vertexloop1
#define vertexloop1 vertexloop1__collide_53_1390
#endif
#endif

#if defined(M2C_MODULE_MOVEMAP)
#ifndef vertexloop1
#define vertexloop1 vertexloop1__movemap_59_3355
#endif
#endif

#if defined(M2C_MODULE_MOVEMAP)
#ifndef vertexloop2
#define vertexloop2 vertexloop2__movemap_5f_4426
#endif
#endif

#if defined(M2C_MODULE_GRNDOBJ1)
#ifndef nullobject
#define nullobject nullobject__grndobj1_0_723
#endif
#endif

#if defined(M2C_MODULE_FLATOBJ1)
#ifndef nullobject
#define nullobject nullobject__flatobj1_0_659
#endif
#endif

#if defined(M2C_MODULE_MOBOBJ1)
#ifndef nullobject
#define nullobject nullobject__mobobj1_0_667
#endif
#endif

#endif
