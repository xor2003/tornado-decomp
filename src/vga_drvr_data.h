#ifndef __M2C_VGA_DRVR_DATA_H__
#define __M2C_VGA_DRVR_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw (& vgascrstart)[2];
extern dw& dloadmode;
extern dw& dummyd1295831_data_6_432;
extern db& colmask;
extern db& dummyd1295831_data_9_434;
extern db& dummyd1295831_data_a_435;
extern db& dummyd1295831_data_b_436;
extern dw& octtable;
extern dw& dummyd1295831_data_e_438;
extern dw& dummyd1295831_data_10_439;
extern dw& dummyd1295831_data_12_440;
extern db (& dummyd1295831_data_14_442)[32];
extern db& dummyd1295831_data_34_490;
extern db& dummyd1295831_data_35_491;
extern db& dummyd1295831_data_36_492;
extern db& dummyd1295831_data_37_493;
extern db& dummyd1295831_data_38_495;
extern db& dummyd1295831_data_39_496;
extern db& dummyd1295831_data_3a_497;
extern db& dummyd1295831_data_3b_498;
extern db& dummyd1295831_data_3c_506;
extern db& dummyd1295831_data_3d_507;
extern db& dummyd1295831_data_3e_508;
extern db& dummyd1295831_data_3f_509;
extern db& dummyd1295831_data_40_511;
extern db& dummyd1295831_data_41_512;
extern db& dummyd1295831_data_42_513;
extern db& dummyd1295831_data_43_514;
extern db& dummyd1295831_data_44_516;
extern db& dummyd1295831_data_45_517;
extern db& dummyd1295831_data_46_518;
extern db& dummyd1295831_data_47_519;
extern db& dummyd1295831_data_48_521;
extern db& dummyd1295831_data_49_522;
extern db& dummyd1295831_data_4a_523;
extern db& dummyd1295831_data_4b_524;
extern dw& smokestart;
extern dw& dummyd1295831_data_4e_530;
extern dw& dummyd1295831_data_50_531;
extern dw& dummyd1295831_data_52_532;
extern db& flipnibble;
extern db& dummyd1295831_data_55_536;
extern db& dummyd1295831_data_56_537;
extern db& dummyd1295831_data_57_538;
extern db& dummyd1295831_data_58_539;
extern db& dummyd1295831_data_59_540;
extern db& dummyd1295831_data_5a_541;
extern db& dummyd1295831_data_5b_542;
extern db& dummyd1295831_data_5c_543;
extern db& dummyd1295831_data_5d_544;
extern db& dummyd1295831_data_5e_545;
extern db& dummyd1295831_data_5f_546;
extern db& dummyd1295831_data_60_547;
extern db& dummyd1295831_data_61_548;
extern db& dummyd1295831_data_62_549;
extern db& dummyd1295831_data_63_550;
extern db& hrznmask;
extern db& dummyd1295831_data_65_554;
extern db& dummyd1295831_data_66_555;
extern db& dummyd1295831_data_67_556;
extern db (& fadeflag)[2];
extern db& fadelevel1;
extern db& fadercol1;
extern db& fadegcol1;
extern db& fadebcol1;
extern db& _fadelevel1;
extern db& _fadercol1;
extern db& _fadegcol1;
extern db& _fadebcol1;
extern dw& fadestart1;
extern dw& fadecount1;
extern db& fadelevel2;
extern db& fadercol2;
extern db& fadegcol2;
extern db& fadebcol2;
extern db& _fadelevel2;
extern db& _fadercol2;
extern db& _fadegcol2;
extern db& _fadebcol2;
extern dw& fadestart2;
extern dw& fadecount2;
extern db& fadelevel3;
extern db& fadercol3;
extern db& fadegcol3;
extern db& fadebcol3;
extern dw& fadestart3;
extern dw& fadecount3;
extern dw& shaketimer;
extern db& hshake;
extern db& vshake;
extern db& vshaketable;
extern db& dummyd1295831_data_8f_622;
extern byte& lmask;
extern byte& rmask;
extern byte& ehatchlmask;
extern byte& ehatchrmask;
extern byte& ohatchlmask;
extern byte& ohatchrmask;
extern byte& esmokelmask1;
extern byte& esmokermask1;
extern byte& osmokelmask1;
extern byte& osmokermask1;
extern byte& esmokelmask2;
extern byte& esmokermask2;
extern byte& osmokelmask2;
extern byte& osmokermask2;
extern word& fadeparams1;
extern word& _fadeparams1;
extern word& fadeparams2;
extern word& _fadeparams2;
extern word& fadeparams3;
extern db& wsdata;
extern db& gcode;

#ifndef miny
extern dw& miny;
#endif
#ifndef hrznrhscol
extern db& hrznrhscol;
#endif
#ifndef clipxmax
extern dw& clipxmax;
#endif
#ifndef screenpage
extern dw& screenpage;
#endif
#ifndef realscrptr
extern dw& realscrptr;
#endif
#ifndef vga_rgb_data
extern db& vga_rgb_data;
#endif
#ifndef flipmode
extern dw& flipmode;
#endif
#ifndef charsetptr1
extern dw& charsetptr1;
#endif
#ifndef rhsx
extern dw& rhsx;
#endif
#ifndef charsetptr2
extern dw& charsetptr2;
#endif
#ifndef mousehouse
extern db& mousehouse;
#endif
#ifndef forecol
extern db& forecol;
#endif
#ifndef hrznlhscol
extern db& hrznlhscol;
#endif
#ifndef fillcol
extern db& fillcol;
#endif
#ifndef sspritelist
extern dw& sspritelist;
#endif
#ifndef prtcl
extern dw& prtcl;
#endif
#ifndef clipxmin
extern dw& clipxmin;
#endif
#ifndef hrznxmax
extern dw& hrznxmax;
#endif
#ifndef countdown
extern dw& countdown;
#endif
#ifndef linecol
extern db& linecol;
#endif
#ifndef vga_rgb_fade
extern db& vga_rgb_fade;
#endif
#ifndef qspriteid
extern db& qspriteid;
#endif
#ifndef lhsx
extern dw& lhsx;
#endif
#ifndef prtln
extern dw& prtln;
#endif
#ifndef printover
extern db& printover;
#endif
#ifndef clipymax
extern dw& clipymax;
#endif
#ifndef workscrptr
extern dw& workscrptr;
#endif
#ifndef setpaletteflag
extern db& setpaletteflag;
#endif
#ifndef mspriteid
extern db& mspriteid;
#endif
#ifndef hrznxmin
extern dw& hrznxmin;
#endif
#ifndef workscreen
extern db& workscreen;
#endif
#ifndef frames
extern dw& frames;
#endif
#ifndef pixelcol
extern db& pixelcol;
#endif
#ifndef backcol
extern db& backcol;
#endif
#ifndef sspriteid
extern db& sspriteid;
#endif
#ifndef charsetptr3
extern dw& charsetptr3;
#endif
#ifndef qspritelist
extern dw& qspritelist;
#endif
#ifndef maxy
extern dw& maxy;
#endif
#ifndef clipymin
extern dw& clipymin;
#endif
#ifndef mspritelist
extern dw& mspritelist;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_vga_vmode
#define M2C_CODE_EQUATE_vga_vmode 1
static const dd kvga_vmode = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_vga_dload
#define M2C_CODE_EQUATE_vga_dload 1
static const dd kvga_dload = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_contfade
#define M2C_CODE_EQUATE_contfade 1
static const dd kcontfade = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_skipfade
#define M2C_CODE_EQUATE_skipfade 1
static const dd kskipfade = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_dloadcopy
#define M2C_CODE_EQUATE_dloadcopy 1
static const dd kdloadcopy = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_sortpalette
#define M2C_CODE_EQUATE_sortpalette 1
static const dd ksortpalette = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_dloadflip
#define M2C_CODE_EQUATE_dloadflip 1
static const dd kdloadflip = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_vloop1
#define M2C_CODE_EQUATE_vloop1 1
static const dd kvloop1 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_vloop2
#define M2C_CODE_EQUATE_vloop2 1
static const dd kvloop2 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_skipload
#define M2C_CODE_EQUATE_skipload 1
static const dd kskipload = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_vga_setpx
#define M2C_CODE_EQUATE_vga_setpx 1
static const dd kvga_setpx = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_vga_line
#define M2C_CODE_EQUATE_vga_line 1
static const dd kvga_line = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_vlinelink
#define M2C_CODE_EQUATE_vlinelink 1
static const dd kvlinelink = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_hlinelink
#define M2C_CODE_EQUATE_hlinelink 1
static const dd khlinelink = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_noswap
#define M2C_CODE_EQUATE_noswap 1
static const dd knoswap = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_intovline
#define M2C_CODE_EQUATE_intovline 1
static const dd kintovline = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_intohline
#define M2C_CODE_EQUATE_intohline 1
static const dd kintohline = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_oct1
#define M2C_CODE_EQUATE_oct1 1
static const dd koct1 = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_oct1lp
#define M2C_CODE_EQUATE_oct1lp 1
static const dd koct1lp = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_oct1end
#define M2C_CODE_EQUATE_oct1end 1
static const dd koct1end = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_oct1ov
#define M2C_CODE_EQUATE_oct1ov 1
static const dd koct1ov = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_oct1ok
#define M2C_CODE_EQUATE_oct1ok 1
static const dd koct1ok = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_oct2
#define M2C_CODE_EQUATE_oct2 1
static const dd koct2 = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_oct2lp
#define M2C_CODE_EQUATE_oct2lp 1
static const dd koct2lp = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_oct2end
#define M2C_CODE_EQUATE_oct2end 1
static const dd koct2end = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_oct7
#define M2C_CODE_EQUATE_oct7 1
static const dd koct7 = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_oct7lp
#define M2C_CODE_EQUATE_oct7lp 1
static const dd koct7lp = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_oct7end
#define M2C_CODE_EQUATE_oct7end 1
static const dd koct7end = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_oct8
#define M2C_CODE_EQUATE_oct8 1
static const dd koct8 = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_oct8lp
#define M2C_CODE_EQUATE_oct8lp 1
static const dd koct8lp = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_oct8end
#define M2C_CODE_EQUATE_oct8end 1
static const dd koct8end = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_oct8ov
#define M2C_CODE_EQUATE_oct8ov 1
static const dd koct8ov = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_oct8ok
#define M2C_CODE_EQUATE_oct8ok 1
static const dd koct8ok = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_vga_vline
#define M2C_CODE_EQUATE_vga_vline 1
static const dd kvga_vline = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_vlineyok
#define M2C_CODE_EQUATE_vlineyok 1
static const dd kvlineyok = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_vlineloop
#define M2C_CODE_EQUATE_vlineloop 1
static const dd kvlineloop = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_vga_hline
#define M2C_CODE_EQUATE_vga_hline 1
static const dd kvga_hline = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_hlinexok
#define M2C_CODE_EQUATE_hlinexok 1
static const dd khlinexok = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_shorthline
#define M2C_CODE_EQUATE_shorthline 1
static const dd kshorthline = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_hlineexit
#define M2C_CODE_EQUATE_hlineexit 1
static const dd khlineexit = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_vga_pfill
#define M2C_CODE_EQUATE_vga_pfill 1
static const dd kvga_pfill = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_nextfillline
#define M2C_CODE_EQUATE_nextfillline 1
static const dd knextfillline = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_fixpoints
#define M2C_CODE_EQUATE_fixpoints 1
static const dd kfixpoints = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_pointsfixed
#define M2C_CODE_EQUATE_pointsfixed 1
static const dd kpointsfixed = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_shortline
#define M2C_CODE_EQUATE_shortline 1
static const dd kshortline = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_fillendloop
#define M2C_CODE_EQUATE_fillendloop 1
static const dd kfillendloop = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_vga_mfill
#define M2C_CODE_EQUATE_vga_mfill 1
static const dd kvga_mfill = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_nextemeshline
#define M2C_CODE_EQUATE_nextemeshline 1
static const dd knextemeshline = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_nextomeshline
#define M2C_CODE_EQUATE_nextomeshline 1
static const dd knextomeshline = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_fixemeshpoints
#define M2C_CODE_EQUATE_fixemeshpoints 1
static const dd kfixemeshpoints = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_emeshptsfixed
#define M2C_CODE_EQUATE_emeshptsfixed 1
static const dd kemeshptsfixed = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_shortemeshline
#define M2C_CODE_EQUATE_shortemeshline 1
static const dd kshortemeshline = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_emeshendloop
#define M2C_CODE_EQUATE_emeshendloop 1
static const dd kemeshendloop = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_meshfillexit
#define M2C_CODE_EQUATE_meshfillexit 1
static const dd kmeshfillexit = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_fixomeshpoints
#define M2C_CODE_EQUATE_fixomeshpoints 1
static const dd kfixomeshpoints = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_omeshptsfixed
#define M2C_CODE_EQUATE_omeshptsfixed 1
static const dd komeshptsfixed = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_shortomeshline
#define M2C_CODE_EQUATE_shortomeshline 1
static const dd kshortomeshline = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE_omeshendloop
#define M2C_CODE_EQUATE_omeshendloop 1
static const dd komeshendloop = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_vga_sfill
#define M2C_CODE_EQUATE_vga_sfill 1
static const dd kvga_sfill = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE_nextesmokeline
#define M2C_CODE_EQUATE_nextesmokeline 1
static const dd knextesmokeline = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE_fixesmokepoints
#define M2C_CODE_EQUATE_fixesmokepoints 1
static const dd kfixesmokepoints = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE_esmokeptsfixed
#define M2C_CODE_EQUATE_esmokeptsfixed 1
static const dd kesmokeptsfixed = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_shortesmokeline
#define M2C_CODE_EQUATE_shortesmokeline 1
static const dd kshortesmokeline = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_esmokeendloop
#define M2C_CODE_EQUATE_esmokeendloop 1
static const dd kesmokeendloop = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_nextosmokeline
#define M2C_CODE_EQUATE_nextosmokeline 1
static const dd knextosmokeline = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE_smokefillexit
#define M2C_CODE_EQUATE_smokefillexit 1
static const dd ksmokefillexit = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE_fixosmokepoints
#define M2C_CODE_EQUATE_fixosmokepoints 1
static const dd kfixosmokepoints = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE_osmokeptsfixed
#define M2C_CODE_EQUATE_osmokeptsfixed 1
static const dd kosmokeptsfixed = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE_shortosmokeline
#define M2C_CODE_EQUATE_shortosmokeline 1
static const dd kshortosmokeline = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE_osmokeendloop
#define M2C_CODE_EQUATE_osmokeendloop 1
static const dd kosmokeendloop = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE_nextesmkline
#define M2C_CODE_EQUATE_nextesmkline 1
static const dd knextesmkline = 0x1058;
#endif
#ifndef M2C_CODE_EQUATE_fixesmkpoints
#define M2C_CODE_EQUATE_fixesmkpoints 1
static const dd kfixesmkpoints = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE_esmkptsfixed
#define M2C_CODE_EQUATE_esmkptsfixed 1
static const dd kesmkptsfixed = 0x105a;
#endif
#ifndef M2C_CODE_EQUATE_shortesmkline
#define M2C_CODE_EQUATE_shortesmkline 1
static const dd kshortesmkline = 0x105b;
#endif
#ifndef M2C_CODE_EQUATE_esmkendloop
#define M2C_CODE_EQUATE_esmkendloop 1
static const dd kesmkendloop = 0x105c;
#endif
#ifndef M2C_CODE_EQUATE_nextosmkline
#define M2C_CODE_EQUATE_nextosmkline 1
static const dd knextosmkline = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE_smkfillexit
#define M2C_CODE_EQUATE_smkfillexit 1
static const dd ksmkfillexit = 0x105e;
#endif
#ifndef M2C_CODE_EQUATE_fixosmkpoints
#define M2C_CODE_EQUATE_fixosmkpoints 1
static const dd kfixosmkpoints = 0x105f;
#endif
#ifndef M2C_CODE_EQUATE_osmkptsfixed
#define M2C_CODE_EQUATE_osmkptsfixed 1
static const dd kosmkptsfixed = 0x1060;
#endif
#ifndef M2C_CODE_EQUATE_shortosmkline
#define M2C_CODE_EQUATE_shortosmkline 1
static const dd kshortosmkline = 0x1061;
#endif
#ifndef M2C_CODE_EQUATE_osmkendloop
#define M2C_CODE_EQUATE_osmkendloop 1
static const dd kosmkendloop = 0x1062;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x1063;
#endif
#ifndef M2C_CODE_EQUATE_vga_prtc1
#define M2C_CODE_EQUATE_vga_prtc1 1
static const dd kvga_prtc1 = 0x1064;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x1065;
#endif
#ifndef M2C_CODE_EQUATE_prtc1loop
#define M2C_CODE_EQUATE_prtc1loop 1
static const dd kprtc1loop = 0x1066;
#endif
#ifndef M2C_CODE_EQUATE_prtc1over
#define M2C_CODE_EQUATE_prtc1over 1
static const dd kprtc1over = 0x1067;
#endif
#ifndef M2C_CODE_EQUATE_prtc1exit
#define M2C_CODE_EQUATE_prtc1exit 1
static const dd kprtc1exit = 0x1068;
#endif
#ifndef M2C_CODE_EQUATE_vga_prtc2
#define M2C_CODE_EQUATE_vga_prtc2 1
static const dd kvga_prtc2 = 0x1069;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x106a;
#endif
#ifndef M2C_CODE_EQUATE_vga_prtc2norm
#define M2C_CODE_EQUATE_vga_prtc2norm 1
static const dd kvga_prtc2norm = 0x106b;
#endif
#ifndef M2C_CODE_EQUATE_vga_prtc2com
#define M2C_CODE_EQUATE_vga_prtc2com 1
static const dd kvga_prtc2com = 0x106c;
#endif
#ifndef M2C_CODE_EQUATE_vga_prtc3
#define M2C_CODE_EQUATE_vga_prtc3 1
static const dd kvga_prtc3 = 0x106d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x106e;
#endif
#ifndef M2C_CODE_EQUATE_prtc3loop
#define M2C_CODE_EQUATE_prtc3loop 1
static const dd kprtc3loop = 0x106f;
#endif
#ifndef M2C_CODE_EQUATE_prtc3over
#define M2C_CODE_EQUATE_prtc3over 1
static const dd kprtc3over = 0x1070;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1071;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x1072;
#endif
#ifndef M2C_CODE_EQUATE_prtc3exit
#define M2C_CODE_EQUATE_prtc3exit 1
static const dd kprtc3exit = 0x1073;
#endif
#ifndef M2C_CODE_EQUATE_gcode_0_proc
#define M2C_CODE_EQUATE_gcode_0_proc 1
static const dd kgcode_0_proc = 0x1074;
#endif
#ifndef M2C_CODE_EQUATE_sspriteout
#define M2C_CODE_EQUATE_sspriteout 1
static const dd ksspriteout = 0x1075;
#endif
#ifndef M2C_CODE_EQUATE_sspriteexit
#define M2C_CODE_EQUATE_sspriteexit 1
static const dd ksspriteexit = 0x1076;
#endif
#ifndef M2C_CODE_EQUATE_vga_ssprite
#define M2C_CODE_EQUATE_vga_ssprite 1
static const dd kvga_ssprite = 0x1077;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x1078;
#endif
#ifndef M2C_CODE_EQUATE_offsetok
#define M2C_CODE_EQUATE_offsetok 1
static const dd koffsetok = 0x1079;
#endif
#ifndef M2C_CODE_EQUATE_contbsprite
#define M2C_CODE_EQUATE_contbsprite 1
static const dd kcontbsprite = 0x107a;
#endif
#ifndef M2C_CODE_EQUATE_aboveclip
#define M2C_CODE_EQUATE_aboveclip 1
static const dd kaboveclip = 0x107b;
#endif
#ifndef M2C_CODE_EQUATE_belowclip
#define M2C_CODE_EQUATE_belowclip 1
static const dd kbelowclip = 0x107c;
#endif
#ifndef M2C_CODE_EQUATE_leftclip
#define M2C_CODE_EQUATE_leftclip 1
static const dd kleftclip = 0x107d;
#endif
#ifndef M2C_CODE_EQUATE_rightclip
#define M2C_CODE_EQUATE_rightclip 1
static const dd krightclip = 0x107e;
#endif
#ifndef M2C_CODE_EQUATE_clipdone
#define M2C_CODE_EQUATE_clipdone 1
static const dd kclipdone = 0x107f;
#endif
#ifndef M2C_CODE_EQUATE_contmsprite
#define M2C_CODE_EQUATE_contmsprite 1
static const dd kcontmsprite = 0x1080;
#endif
#ifndef M2C_CODE_EQUATE_sspritedone
#define M2C_CODE_EQUATE_sspritedone 1
static const dd ksspritedone = 0x1082;
#endif
#ifndef M2C_CODE_EQUATE_vga_msprite
#define M2C_CODE_EQUATE_vga_msprite 1
static const dd kvga_msprite = 0x1083;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x1084;
#endif
#ifndef M2C_CODE_EQUATE_vga_bsprite
#define M2C_CODE_EQUATE_vga_bsprite 1
static const dd kvga_bsprite = 0x1085;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel16
#define M2C_CODE_EQUATE_edummylabel16 1
static const dd kedummylabel16 = 0x1086;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel17
#define M2C_CODE_EQUATE_edummylabel17 1
static const dd kedummylabel17 = 0x1087;
#endif
#ifndef M2C_CODE_EQUATE_wspriteloop
#define M2C_CODE_EQUATE_wspriteloop 1
static const dd kwspriteloop = 0x1088;
#endif
#ifndef M2C_CODE_EQUATE_wspritebytes
#define M2C_CODE_EQUATE_wspritebytes 1
static const dd kwspritebytes = 0x1089;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x108a;
#endif
#ifndef M2C_CODE_EQUATE_wspritedone
#define M2C_CODE_EQUATE_wspritedone 1
static const dd kwspritedone = 0x108b;
#endif
#ifndef M2C_CODE_EQUATE_vga_qsprite
#define M2C_CODE_EQUATE_vga_qsprite 1
static const dd kvga_qsprite = 0x108c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel18
#define M2C_CODE_EQUATE_edummylabel18 1
static const dd kedummylabel18 = 0x108d;
#endif
#ifndef M2C_CODE_EQUATE_qsloop1
#define M2C_CODE_EQUATE_qsloop1 1
static const dd kqsloop1 = 0x108e;
#endif
#ifndef M2C_CODE_EQUATE_qsloop2
#define M2C_CODE_EQUATE_qsloop2 1
static const dd kqsloop2 = 0x108f;
#endif
#ifndef M2C_CODE_EQUATE_qsloop3
#define M2C_CODE_EQUATE_qsloop3 1
static const dd kqsloop3 = 0x1090;
#endif
#ifndef M2C_CODE_EQUATE_qsloop4
#define M2C_CODE_EQUATE_qsloop4 1
static const dd kqsloop4 = 0x1091;
#endif
#ifndef M2C_CODE_EQUATE_vga_initss
#define M2C_CODE_EQUATE_vga_initss 1
static const dd kvga_initss = 0x1092;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel19
#define M2C_CODE_EQUATE_edummylabel19 1
static const dd kedummylabel19 = 0x1093;
#endif
#ifndef M2C_CODE_EQUATE_initssloop
#define M2C_CODE_EQUATE_initssloop 1
static const dd kinitssloop = 0x1094;
#endif
#ifndef M2C_CODE_EQUATE_initssexit
#define M2C_CODE_EQUATE_initssexit 1
static const dd kinitssexit = 0x1095;
#endif
#ifndef M2C_CODE_EQUATE_copyssloop
#define M2C_CODE_EQUATE_copyssloop 1
static const dd kcopyssloop = 0x1096;
#endif
#ifndef M2C_CODE_EQUATE_vga_initms
#define M2C_CODE_EQUATE_vga_initms 1
static const dd kvga_initms = 0x1098;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel20
#define M2C_CODE_EQUATE_edummylabel20 1
static const dd kedummylabel20 = 0x1099;
#endif
#ifndef M2C_CODE_EQUATE_initmsloop
#define M2C_CODE_EQUATE_initmsloop 1
static const dd kinitmsloop = 0x109a;
#endif
#ifndef M2C_CODE_EQUATE_initmsexit
#define M2C_CODE_EQUATE_initmsexit 1
static const dd kinitmsexit = 0x109b;
#endif
#ifndef M2C_CODE_EQUATE_vga_initqs
#define M2C_CODE_EQUATE_vga_initqs 1
static const dd kvga_initqs = 0x109c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel21
#define M2C_CODE_EQUATE_edummylabel21 1
static const dd kedummylabel21 = 0x109d;
#endif
#ifndef M2C_CODE_EQUATE_initqsloop
#define M2C_CODE_EQUATE_initqsloop 1
static const dd kinitqsloop = 0x109e;
#endif
#ifndef M2C_CODE_EQUATE_initqsexit
#define M2C_CODE_EQUATE_initqsexit 1
static const dd kinitqsexit = 0x109f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel22
#define M2C_CODE_EQUATE_edummylabel22 1
static const dd kedummylabel22 = 0x10a0;
#endif
#ifndef M2C_CODE_EQUATE_convloop0
#define M2C_CODE_EQUATE_convloop0 1
static const dd kconvloop0 = 0x10a1;
#endif
#ifndef M2C_CODE_EQUATE_convloop1
#define M2C_CODE_EQUATE_convloop1 1
static const dd kconvloop1 = 0x10a2;
#endif
#ifndef M2C_CODE_EQUATE_convloop2
#define M2C_CODE_EQUATE_convloop2 1
static const dd kconvloop2 = 0x10a3;
#endif
#ifndef M2C_CODE_EQUATE_convloop3
#define M2C_CODE_EQUATE_convloop3 1
static const dd kconvloop3 = 0x10a4;
#endif
#ifndef M2C_CODE_EQUATE_vga_bfill
#define M2C_CODE_EQUATE_vga_bfill 1
static const dd kvga_bfill = 0x10a5;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel23
#define M2C_CODE_EQUATE_edummylabel23 1
static const dd kedummylabel23 = 0x10a6;
#endif
#ifndef M2C_CODE_EQUATE_vga_bfillloop
#define M2C_CODE_EQUATE_vga_bfillloop 1
static const dd kvga_bfillloop = 0x10a7;
#endif
#ifndef M2C_CODE_EQUATE_vga_savemouse
#define M2C_CODE_EQUATE_vga_savemouse 1
static const dd kvga_savemouse = 0x10a8;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel24
#define M2C_CODE_EQUATE_edummylabel24 1
static const dd kedummylabel24 = 0x10a9;
#endif
#ifndef M2C_CODE_EQUATE_vga_svmsemaplp
#define M2C_CODE_EQUATE_vga_svmsemaplp 1
static const dd kvga_svmsemaplp = 0x10aa;
#endif
#ifndef M2C_CODE_EQUATE_vga_svmseloop1
#define M2C_CODE_EQUATE_vga_svmseloop1 1
static const dd kvga_svmseloop1 = 0x10ab;
#endif
#ifndef M2C_CODE_EQUATE_vga_svmseloop2
#define M2C_CODE_EQUATE_vga_svmseloop2 1
static const dd kvga_svmseloop2 = 0x10ac;
#endif
#ifndef M2C_CODE_EQUATE_vga_svmseexit
#define M2C_CODE_EQUATE_vga_svmseexit 1
static const dd kvga_svmseexit = 0x10ad;
#endif
#ifndef M2C_CODE_EQUATE_vga_loadmouse
#define M2C_CODE_EQUATE_vga_loadmouse 1
static const dd kvga_loadmouse = 0x10ae;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel25
#define M2C_CODE_EQUATE_edummylabel25 1
static const dd kedummylabel25 = 0x10af;
#endif
#ifndef M2C_CODE_EQUATE_vga_ldmsemaplp
#define M2C_CODE_EQUATE_vga_ldmsemaplp 1
static const dd kvga_ldmsemaplp = 0x10b0;
#endif
#ifndef M2C_CODE_EQUATE_vga_ldmseloop1
#define M2C_CODE_EQUATE_vga_ldmseloop1 1
static const dd kvga_ldmseloop1 = 0x10b1;
#endif
#ifndef M2C_CODE_EQUATE_vga_ldmseloop2
#define M2C_CODE_EQUATE_vga_ldmseloop2 1
static const dd kvga_ldmseloop2 = 0x10b2;
#endif
#ifndef M2C_CODE_EQUATE_vga_ldmseexit
#define M2C_CODE_EQUATE_vga_ldmseexit 1
static const dd kvga_ldmseexit = 0x10b3;
#endif
#ifndef M2C_CODE_EQUATE_vga_savescreen
#define M2C_CODE_EQUATE_vga_savescreen 1
static const dd kvga_savescreen = 0x10b4;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel26
#define M2C_CODE_EQUATE_edummylabel26 1
static const dd kedummylabel26 = 0x10b5;
#endif
#ifndef M2C_CODE_EQUATE_vga_loadscreen
#define M2C_CODE_EQUATE_vga_loadscreen 1
static const dd kvga_loadscreen = 0x10b6;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel27
#define M2C_CODE_EQUATE_edummylabel27 1
static const dd kedummylabel27 = 0x10b7;
#endif
#ifndef M2C_CODE_EQUATE_vga_hfill
#define M2C_CODE_EQUATE_vga_hfill 1
static const dd kvga_hfill = 0x10b8;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel28
#define M2C_CODE_EQUATE_edummylabel28 1
static const dd kedummylabel28 = 0x10b9;
#endif
#ifndef M2C_CODE_EQUATE_vga_hfilllp
#define M2C_CODE_EQUATE_vga_hfilllp 1
static const dd kvga_hfilllp = 0x10ba;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel29
#define M2C_CODE_EQUATE_edummylabel29 1
static const dd kedummylabel29 = 0x10bb;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x10bc;
#endif
#ifndef M2C_CODE_EQUATE_readdacblock
#define M2C_CODE_EQUATE_readdacblock 1
static const dd kreaddacblock = 0x10bd;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel30
#define M2C_CODE_EQUATE_edummylabel30 1
static const dd kedummylabel30 = 0x10be;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x10bf;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel31
#define M2C_CODE_EQUATE_edummylabel31 1
static const dd kedummylabel31 = 0x10c0;
#endif
#ifndef M2C_CODE_EQUATE_fadedone1
#define M2C_CODE_EQUATE_fadedone1 1
static const dd kfadedone1 = 0x10c1;
#endif
#ifndef M2C_CODE_EQUATE_fadeloop1
#define M2C_CODE_EQUATE_fadeloop1 1
static const dd kfadeloop1 = 0x10c2;
#endif
#ifndef M2C_CODE_EQUATE_fadedone2
#define M2C_CODE_EQUATE_fadedone2 1
static const dd kfadedone2 = 0x10c3;
#endif
#ifndef M2C_CODE_EQUATE_fadeloop2
#define M2C_CODE_EQUATE_fadeloop2 1
static const dd kfadeloop2 = 0x10c4;
#endif
#ifndef M2C_CODE_EQUATE_fadedone3
#define M2C_CODE_EQUATE_fadedone3 1
static const dd kfadedone3 = 0x10c5;
#endif
#ifndef M2C_CODE_EQUATE_fadeloop3
#define M2C_CODE_EQUATE_fadeloop3 1
static const dd kfadeloop3 = 0x10c6;
#endif
#ifndef M2C_CODE_EQUATE_fadeout
#define M2C_CODE_EQUATE_fadeout 1
static const dd kfadeout = 0x10c7;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel32
#define M2C_CODE_EQUATE_edummylabel32 1
static const dd kedummylabel32 = 0x10c8;
#endif
#ifndef M2C_CODE_EQUATE_fadeoutloop
#define M2C_CODE_EQUATE_fadeoutloop 1
static const dd kfadeoutloop = 0x10c9;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x10cb;
#endif
#ifndef M2C_CODE_EQUATE_qfadeout
#define M2C_CODE_EQUATE_qfadeout 1
static const dd kqfadeout = 0x10cc;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel33
#define M2C_CODE_EQUATE_edummylabel33 1
static const dd kedummylabel33 = 0x10cd;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x10ce;
#endif
#ifndef M2C_CODE_EQUATE_fadein
#define M2C_CODE_EQUATE_fadein 1
static const dd kfadein = 0x10cf;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel34
#define M2C_CODE_EQUATE_edummylabel34 1
static const dd kedummylabel34 = 0x10d0;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x10d1;
#endif
#ifndef M2C_CODE_EQUATE_qfadein
#define M2C_CODE_EQUATE_qfadein 1
static const dd kqfadein = 0x10d2;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel35
#define M2C_CODE_EQUATE_edummylabel35 1
static const dd kedummylabel35 = 0x10d3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x10d4;
#endif
#ifndef M2C_CODE_EQUATE_instantfadeout
#define M2C_CODE_EQUATE_instantfadeout 1
static const dd kinstantfadeout = 0x10d5;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel36
#define M2C_CODE_EQUATE_edummylabel36 1
static const dd kedummylabel36 = 0x10d6;
#endif
#ifndef M2C_CODE_EQUATE_instantfadein
#define M2C_CODE_EQUATE_instantfadein 1
static const dd kinstantfadein = 0x10d7;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel37
#define M2C_CODE_EQUATE_edummylabel37 1
static const dd kedummylabel37 = 0x10d8;
#endif
#ifndef M2C_CODE_EQUATE_fadedown
#define M2C_CODE_EQUATE_fadedown 1
static const dd kfadedown = 0x10d9;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel38
#define M2C_CODE_EQUATE_edummylabel38 1
static const dd kedummylabel38 = 0x10da;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x10db;
#endif
#ifndef M2C_CODE_EQUATE_fadeup
#define M2C_CODE_EQUATE_fadeup 1
static const dd kfadeup = 0x10dc;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel39
#define M2C_CODE_EQUATE_edummylabel39 1
static const dd kedummylabel39 = 0x10dd;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x10de;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel13
#define M2C_CODE_EQUATE_dummylabel13 1
static const dd kdummylabel13 = 0x10df;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel14
#define M2C_CODE_EQUATE_dummylabel14 1
static const dd kdummylabel14 = 0x10e0;
#endif
#ifndef M2C_CODE_EQUATE_unpackdeltapic
#define M2C_CODE_EQUATE_unpackdeltapic 1
static const dd kunpackdeltapic = 0x10e1;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel40
#define M2C_CODE_EQUATE_edummylabel40 1
static const dd kedummylabel40 = 0x10e2;
#endif
#ifndef M2C_CODE_EQUATE_unpackloop
#define M2C_CODE_EQUATE_unpackloop 1
static const dd kunpackloop = 0x10e3;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel15
#define M2C_CODE_EQUATE_dummylabel15 1
static const dd kdummylabel15 = 0x10e4;
#endif
#ifndef M2C_CODE_EQUATE_sortdelta
#define M2C_CODE_EQUATE_sortdelta 1
static const dd ksortdelta = 0x10e5;
#endif
#ifndef M2C_CODE_EQUATE_pixelok
#define M2C_CODE_EQUATE_pixelok 1
static const dd kpixelok = 0x10e6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel16
#define M2C_CODE_EQUATE_dummylabel16 1
static const dd kdummylabel16 = 0x10e7;
#endif
#ifndef M2C_CODE_EQUATE_screenshaker
#define M2C_CODE_EQUATE_screenshaker 1
static const dd kscreenshaker = 0x10e8;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel41
#define M2C_CODE_EQUATE_edummylabel41 1
static const dd kedummylabel41 = 0x10e9;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_vgascrstart
#define M2C_CODE_EQUATE_vgascrstart 1
static const dd kvgascrstart = (m2c::near_offset_external(::vgascrstart));
#endif
#ifndef M2C_CODE_EQUATE_dloadmode
#define M2C_CODE_EQUATE_dloadmode 1
static const dd kdloadmode = (m2c::near_offset_external(::dloadmode));
#endif
#ifndef M2C_CODE_EQUATE_colmask
#define M2C_CODE_EQUATE_colmask 1
static const dd kcolmask = (m2c::near_offset_external(::colmask));
#endif
#ifndef M2C_CODE_EQUATE_octtable
#define M2C_CODE_EQUATE_octtable 1
static const dd kocttable = (m2c::near_offset_external(::octtable));
#endif
#ifndef M2C_CODE_EQUATE_smokestart
#define M2C_CODE_EQUATE_smokestart 1
static const dd ksmokestart = (m2c::near_offset_external(::smokestart));
#endif
#ifndef M2C_CODE_EQUATE_flipnibble
#define M2C_CODE_EQUATE_flipnibble 1
static const dd kflipnibble = (m2c::near_offset_external(::flipnibble));
#endif
#ifndef M2C_CODE_EQUATE_hrznmask
#define M2C_CODE_EQUATE_hrznmask 1
static const dd khrznmask = (m2c::near_offset_external(::hrznmask));
#endif
#ifndef M2C_CODE_EQUATE_fadeflag
#define M2C_CODE_EQUATE_fadeflag 1
static const dd kfadeflag = (m2c::near_offset_external(::fadeflag));
#endif
#ifndef M2C_CODE_EQUATE_fadelevel1
#define M2C_CODE_EQUATE_fadelevel1 1
static const dd kfadelevel1 = (m2c::near_offset_external(::fadelevel1));
#endif
#ifndef M2C_CODE_EQUATE_fadercol1
#define M2C_CODE_EQUATE_fadercol1 1
static const dd kfadercol1 = (m2c::near_offset_external(::fadercol1));
#endif
#ifndef M2C_CODE_EQUATE_fadegcol1
#define M2C_CODE_EQUATE_fadegcol1 1
static const dd kfadegcol1 = (m2c::near_offset_external(::fadegcol1));
#endif
#ifndef M2C_CODE_EQUATE_fadebcol1
#define M2C_CODE_EQUATE_fadebcol1 1
static const dd kfadebcol1 = (m2c::near_offset_external(::fadebcol1));
#endif
#ifndef M2C_CODE_EQUATE__fadelevel1
#define M2C_CODE_EQUATE__fadelevel1 1
static const dd k_fadelevel1 = (m2c::near_offset_external(::_fadelevel1));
#endif
#ifndef M2C_CODE_EQUATE__fadercol1
#define M2C_CODE_EQUATE__fadercol1 1
static const dd k_fadercol1 = (m2c::near_offset_external(::_fadercol1));
#endif
#ifndef M2C_CODE_EQUATE__fadegcol1
#define M2C_CODE_EQUATE__fadegcol1 1
static const dd k_fadegcol1 = (m2c::near_offset_external(::_fadegcol1));
#endif
#ifndef M2C_CODE_EQUATE__fadebcol1
#define M2C_CODE_EQUATE__fadebcol1 1
static const dd k_fadebcol1 = (m2c::near_offset_external(::_fadebcol1));
#endif
#ifndef M2C_CODE_EQUATE_fadestart1
#define M2C_CODE_EQUATE_fadestart1 1
static const dd kfadestart1 = (m2c::near_offset_external(::fadestart1));
#endif
#ifndef M2C_CODE_EQUATE_fadecount1
#define M2C_CODE_EQUATE_fadecount1 1
static const dd kfadecount1 = (m2c::near_offset_external(::fadecount1));
#endif
#ifndef M2C_CODE_EQUATE_fadelevel2
#define M2C_CODE_EQUATE_fadelevel2 1
static const dd kfadelevel2 = (m2c::near_offset_external(::fadelevel2));
#endif
#ifndef M2C_CODE_EQUATE_fadercol2
#define M2C_CODE_EQUATE_fadercol2 1
static const dd kfadercol2 = (m2c::near_offset_external(::fadercol2));
#endif
#ifndef M2C_CODE_EQUATE_fadegcol2
#define M2C_CODE_EQUATE_fadegcol2 1
static const dd kfadegcol2 = (m2c::near_offset_external(::fadegcol2));
#endif
#ifndef M2C_CODE_EQUATE_fadebcol2
#define M2C_CODE_EQUATE_fadebcol2 1
static const dd kfadebcol2 = (m2c::near_offset_external(::fadebcol2));
#endif
#ifndef M2C_CODE_EQUATE__fadelevel2
#define M2C_CODE_EQUATE__fadelevel2 1
static const dd k_fadelevel2 = (m2c::near_offset_external(::_fadelevel2));
#endif
#ifndef M2C_CODE_EQUATE__fadercol2
#define M2C_CODE_EQUATE__fadercol2 1
static const dd k_fadercol2 = (m2c::near_offset_external(::_fadercol2));
#endif
#ifndef M2C_CODE_EQUATE__fadegcol2
#define M2C_CODE_EQUATE__fadegcol2 1
static const dd k_fadegcol2 = (m2c::near_offset_external(::_fadegcol2));
#endif
#ifndef M2C_CODE_EQUATE__fadebcol2
#define M2C_CODE_EQUATE__fadebcol2 1
static const dd k_fadebcol2 = (m2c::near_offset_external(::_fadebcol2));
#endif
#ifndef M2C_CODE_EQUATE_fadestart2
#define M2C_CODE_EQUATE_fadestart2 1
static const dd kfadestart2 = (m2c::near_offset_external(::fadestart2));
#endif
#ifndef M2C_CODE_EQUATE_fadecount2
#define M2C_CODE_EQUATE_fadecount2 1
static const dd kfadecount2 = (m2c::near_offset_external(::fadecount2));
#endif
#ifndef M2C_CODE_EQUATE_fadelevel3
#define M2C_CODE_EQUATE_fadelevel3 1
static const dd kfadelevel3 = (m2c::near_offset_external(::fadelevel3));
#endif
#ifndef M2C_CODE_EQUATE_fadercol3
#define M2C_CODE_EQUATE_fadercol3 1
static const dd kfadercol3 = (m2c::near_offset_external(::fadercol3));
#endif
#ifndef M2C_CODE_EQUATE_fadegcol3
#define M2C_CODE_EQUATE_fadegcol3 1
static const dd kfadegcol3 = (m2c::near_offset_external(::fadegcol3));
#endif
#ifndef M2C_CODE_EQUATE_fadebcol3
#define M2C_CODE_EQUATE_fadebcol3 1
static const dd kfadebcol3 = (m2c::near_offset_external(::fadebcol3));
#endif
#ifndef M2C_CODE_EQUATE_fadestart3
#define M2C_CODE_EQUATE_fadestart3 1
static const dd kfadestart3 = (m2c::near_offset_external(::fadestart3));
#endif
#ifndef M2C_CODE_EQUATE_fadecount3
#define M2C_CODE_EQUATE_fadecount3 1
static const dd kfadecount3 = (m2c::near_offset_external(::fadecount3));
#endif
#ifndef M2C_CODE_EQUATE_shaketimer
#define M2C_CODE_EQUATE_shaketimer 1
static const dd kshaketimer = (m2c::near_offset_external(::shaketimer));
#endif
#ifndef M2C_CODE_EQUATE_hshake
#define M2C_CODE_EQUATE_hshake 1
static const dd khshake = (m2c::near_offset_external(::hshake));
#endif
#ifndef M2C_CODE_EQUATE_vshake
#define M2C_CODE_EQUATE_vshake 1
static const dd kvshake = (m2c::near_offset_external(::vshake));
#endif
#ifndef M2C_CODE_EQUATE_vshaketable
#define M2C_CODE_EQUATE_vshaketable 1
static const dd kvshaketable = (m2c::near_offset_external(::vshaketable));
#endif
}
#ifndef vgascrstart
#define vgascrstart m2c::kvgascrstart
#endif
#ifndef dloadmode
#define dloadmode m2c::kdloadmode
#endif
#ifndef colmask
#define colmask m2c::kcolmask
#endif
#ifndef octtable
#define octtable m2c::kocttable
#endif
#ifndef smokestart
#define smokestart m2c::ksmokestart
#endif
#ifndef flipnibble
#define flipnibble m2c::kflipnibble
#endif
#ifndef hrznmask
#define hrznmask m2c::khrznmask
#endif
#ifndef fadeflag
#define fadeflag m2c::kfadeflag
#endif
#ifndef fadelevel1
#define fadelevel1 m2c::kfadelevel1
#endif
#ifndef fadercol1
#define fadercol1 m2c::kfadercol1
#endif
#ifndef fadegcol1
#define fadegcol1 m2c::kfadegcol1
#endif
#ifndef fadebcol1
#define fadebcol1 m2c::kfadebcol1
#endif
#ifndef _fadelevel1
#define _fadelevel1 m2c::k_fadelevel1
#endif
#ifndef _fadercol1
#define _fadercol1 m2c::k_fadercol1
#endif
#ifndef _fadegcol1
#define _fadegcol1 m2c::k_fadegcol1
#endif
#ifndef _fadebcol1
#define _fadebcol1 m2c::k_fadebcol1
#endif
#ifndef fadestart1
#define fadestart1 m2c::kfadestart1
#endif
#ifndef fadecount1
#define fadecount1 m2c::kfadecount1
#endif
#ifndef fadelevel2
#define fadelevel2 m2c::kfadelevel2
#endif
#ifndef fadercol2
#define fadercol2 m2c::kfadercol2
#endif
#ifndef fadegcol2
#define fadegcol2 m2c::kfadegcol2
#endif
#ifndef fadebcol2
#define fadebcol2 m2c::kfadebcol2
#endif
#ifndef _fadelevel2
#define _fadelevel2 m2c::k_fadelevel2
#endif
#ifndef _fadercol2
#define _fadercol2 m2c::k_fadercol2
#endif
#ifndef _fadegcol2
#define _fadegcol2 m2c::k_fadegcol2
#endif
#ifndef _fadebcol2
#define _fadebcol2 m2c::k_fadebcol2
#endif
#ifndef fadestart2
#define fadestart2 m2c::kfadestart2
#endif
#ifndef fadecount2
#define fadecount2 m2c::kfadecount2
#endif
#ifndef fadelevel3
#define fadelevel3 m2c::kfadelevel3
#endif
#ifndef fadercol3
#define fadercol3 m2c::kfadercol3
#endif
#ifndef fadegcol3
#define fadegcol3 m2c::kfadegcol3
#endif
#ifndef fadebcol3
#define fadebcol3 m2c::kfadebcol3
#endif
#ifndef fadestart3
#define fadestart3 m2c::kfadestart3
#endif
#ifndef fadecount3
#define fadecount3 m2c::kfadecount3
#endif
#ifndef shaketimer
#define shaketimer m2c::kshaketimer
#endif
#ifndef hshake
#define hshake m2c::khshake
#endif
#ifndef vshake
#define vshake m2c::kvshake
#endif
#ifndef vshaketable
#define vshaketable m2c::kvshaketable
#endif



#endif
