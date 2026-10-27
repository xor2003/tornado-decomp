#ifndef __M2C_JOYSTICK_DATA_H__
#define __M2C_JOYSTICK_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern db& joya_flag;
extern db& joyb_flag;
extern dw& joya_xref;
extern dw& joya_yref;
extern dw& joya_xscale;
extern dw& joya_yscale;
extern dw& joya_xpos;
extern dw& joya_ypos;
extern dw& joya_xval;
extern dw& joya_yval;
extern db& joya_fire1;
extern db& joya_fire2;
extern db& joya_justfired1;
extern db& joya_justfired2;
extern dw& oldjoya_xval;
extern dw& oldjoya_yval;
extern db& oldjoya_fire1;
extern db& oldjoya_fire2;
extern dw& joyb_xref;
extern dw& joyb_yref;
extern dw& joyb_xscale;
extern dw& joyb_yscale;
extern dw& joyb_xpos;
extern dw& joyb_ypos;
extern dw& joyb_xval;
extern dw& joyb_yval;
extern db& joyb_fire1;
extern db& joyb_fire2;
extern db& joyb_justfired1;
extern db& joyb_justfired2;
extern dw& oldjoyb_xval;
extern dw& oldjoyb_yval;
extern db& oldjoyb_fire1;
extern db& oldjoyb_fire2;
extern db& joysensitivity;
extern db& chstick;
extern db& thrustmaster;
extern dw& tm_minx;
extern dw& tm_miny;
extern dw& tm_midx;
extern dw& tm_midy;
extern dw& tm_maxx;
extern dw& tm_maxy;
extern dw& tm_cooliecn;
extern dw& tm_coolielt;
extern dw& tm_cooliedn;
extern dw& tm_cooliert;
extern dw& tm_coolieup;
extern dw& tm_xpos;
extern dw& tm_ypos;
extern dw& tm_xval;
extern dw& tm_yval;
extern dw& tm_cooliepos;
extern db& tm_cooliehat;
extern db& tm_coolieval;
extern db& tm_coolienew;
extern db& tm_coolieold;
extern db& libcode;

namespace m2c{
#ifndef M2C_CODE_EQUATE_recaljoysticks
#define M2C_CODE_EQUATE_recaljoysticks 1
static const dd krecaljoysticks = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_1_skip 1
static const dd k__m2c_macrolocal_1_skip = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_skiprecala
#define M2C_CODE_EQUATE_skiprecala 1
static const dd kskiprecala = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_skiprecalb
#define M2C_CODE_EQUATE_skiprecalb 1
static const dd kskiprecalb = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_readjoysticks
#define M2C_CODE_EQUATE_readjoysticks 1
static const dd kreadjoysticks = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_2_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_2_skip 1
static const dd k__m2c_macrolocal_2_skip = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_readjoya
#define M2C_CODE_EQUATE_readjoya 1
static const dd kreadjoya = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_3_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_3_skip 1
static const dd k__m2c_macrolocal_3_skip = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_joyaopencct
#define M2C_CODE_EQUATE_joyaopencct 1
static const dd kjoyaopencct = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_4_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_4_skip 1
static const dd k__m2c_macrolocal_4_skip = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_joyatimeout
#define M2C_CODE_EQUATE_joyatimeout 1
static const dd kjoyatimeout = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_skipjoya_xsens
#define M2C_CODE_EQUATE_skipjoya_xsens 1
static const dd kskipjoya_xsens = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_xoka
#define M2C_CODE_EQUATE_xoka 1
static const dd kxoka = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_5_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_5_skip 1
static const dd k__m2c_macrolocal_5_skip = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_skipjoya_ysens
#define M2C_CODE_EQUATE_skipjoya_ysens 1
static const dd kskipjoya_ysens = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_yoka
#define M2C_CODE_EQUATE_yoka 1
static const dd kyoka = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_sortchstick
#define M2C_CODE_EQUATE_sortchstick 1
static const dd ksortchstick = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_readjoyb
#define M2C_CODE_EQUATE_readjoyb 1
static const dd kreadjoyb = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_chbuttona1
#define M2C_CODE_EQUATE_chbuttona1 1
static const dd kchbuttona1 = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_chbuttona2
#define M2C_CODE_EQUATE_chbuttona2 1
static const dd kchbuttona2 = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_chbuttonb1
#define M2C_CODE_EQUATE_chbuttonb1 1
static const dd kchbuttonb1 = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_chbuttonb2
#define M2C_CODE_EQUATE_chbuttonb2 1
static const dd kchbuttonb2 = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_chcoolieup
#define M2C_CODE_EQUATE_chcoolieup 1
static const dd kchcoolieup = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_chcooliedn
#define M2C_CODE_EQUATE_chcooliedn 1
static const dd kchcooliedn = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_chcooliert
#define M2C_CODE_EQUATE_chcooliert 1
static const dd kchcooliert = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_chcoolielt
#define M2C_CODE_EQUATE_chcoolielt 1
static const dd kchcoolielt = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_readjoyexit
#define M2C_CODE_EQUATE_readjoyexit 1
static const dd kreadjoyexit = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_chcoolieok
#define M2C_CODE_EQUATE_chcoolieok 1
static const dd kchcoolieok = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_6_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_6_skip 1
static const dd k__m2c_macrolocal_6_skip = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_joybopencct
#define M2C_CODE_EQUATE_joybopencct 1
static const dd kjoybopencct = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_7_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_7_skip 1
static const dd k__m2c_macrolocal_7_skip = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_joybtimeout
#define M2C_CODE_EQUATE_joybtimeout 1
static const dd kjoybtimeout = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_skipjoyb_xsens
#define M2C_CODE_EQUATE_skipjoyb_xsens 1
static const dd kskipjoyb_xsens = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_xokb
#define M2C_CODE_EQUATE_xokb 1
static const dd kxokb = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_skipjoyb_ysens
#define M2C_CODE_EQUATE_skipjoyb_ysens 1
static const dd kskipjoyb_ysens = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_yokb
#define M2C_CODE_EQUATE_yokb 1
static const dd kyokb = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel13
#define M2C_CODE_EQUATE_dummylabel13 1
static const dd kdummylabel13 = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_stableloop
#define M2C_CODE_EQUATE_stableloop 1
static const dd kstableloop = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_unstablestate
#define M2C_CODE_EQUATE_unstablestate 1
static const dd kunstablestate = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_analogueexit
#define M2C_CODE_EQUATE_analogueexit 1
static const dd kanalogueexit = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_unstableloop
#define M2C_CODE_EQUATE_unstableloop 1
static const dd kunstableloop = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_stablestate
#define M2C_CODE_EQUATE_stablestate 1
static const dd kstablestate = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_skiprecalthrust
#define M2C_CODE_EQUATE_skiprecalthrust 1
static const dd kskiprecalthrust = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel14
#define M2C_CODE_EQUATE_dummylabel14 1
static const dd kdummylabel14 = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_11_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_11_skip 1
static const dd k__m2c_macrolocal_11_skip = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_tmopencct
#define M2C_CODE_EQUATE_tmopencct 1
static const dd ktmopencct = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_12_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_12_skip 1
static const dd k__m2c_macrolocal_12_skip = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_tmtimeout
#define M2C_CODE_EQUATE_tmtimeout 1
static const dd ktmtimeout = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_13_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_13_skip 1
static const dd k__m2c_macrolocal_13_skip = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_xright
#define M2C_CODE_EQUATE_xright 1
static const dd kxright = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel15
#define M2C_CODE_EQUATE_dummylabel15 1
static const dd kdummylabel15 = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel16
#define M2C_CODE_EQUATE_dummylabel16 1
static const dd kdummylabel16 = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_xdivov
#define M2C_CODE_EQUATE_xdivov 1
static const dd kxdivov = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE_xok
#define M2C_CODE_EQUATE_xok 1
static const dd kxok = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel17
#define M2C_CODE_EQUATE_dummylabel17 1
static const dd kdummylabel17 = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel18
#define M2C_CODE_EQUATE_dummylabel18 1
static const dd kdummylabel18 = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel19
#define M2C_CODE_EQUATE_dummylabel19 1
static const dd kdummylabel19 = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_ybelow
#define M2C_CODE_EQUATE_ybelow 1
static const dd kybelow = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel20
#define M2C_CODE_EQUATE_dummylabel20 1
static const dd kdummylabel20 = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel21
#define M2C_CODE_EQUATE_dummylabel21 1
static const dd kdummylabel21 = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE_ydivov
#define M2C_CODE_EQUATE_ydivov 1
static const dd kydivov = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE_yok
#define M2C_CODE_EQUATE_yok 1
static const dd kyok = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel22
#define M2C_CODE_EQUATE_dummylabel22 1
static const dd kdummylabel22 = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel23
#define M2C_CODE_EQUATE_dummylabel23 1
static const dd kdummylabel23 = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel24
#define M2C_CODE_EQUATE_dummylabel24 1
static const dd kdummylabel24 = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_22_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_22_skip 1
static const dd k__m2c_macrolocal_22_skip = 0x1058;
#endif
#ifndef M2C_CODE_EQUATE_skipcooliehat
#define M2C_CODE_EQUATE_skipcooliehat 1
static const dd kskipcooliehat = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_23_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_23_skip 1
static const dd k__m2c_macrolocal_23_skip = 0x105a;
#endif
#ifndef M2C_CODE_EQUATE_contcoolie
#define M2C_CODE_EQUATE_contcoolie 1
static const dd kcontcoolie = 0x105b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel25
#define M2C_CODE_EQUATE_dummylabel25 1
static const dd kdummylabel25 = 0x105c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel26
#define M2C_CODE_EQUATE_dummylabel26 1
static const dd kdummylabel26 = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel27
#define M2C_CODE_EQUATE_dummylabel27 1
static const dd kdummylabel27 = 0x105e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel28
#define M2C_CODE_EQUATE_dummylabel28 1
static const dd kdummylabel28 = 0x105f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel29
#define M2C_CODE_EQUATE_dummylabel29 1
static const dd kdummylabel29 = 0x1060;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel30
#define M2C_CODE_EQUATE_dummylabel30 1
static const dd kdummylabel30 = 0x1061;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel31
#define M2C_CODE_EQUATE_dummylabel31 1
static const dd kdummylabel31 = 0x1062;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel32
#define M2C_CODE_EQUATE_dummylabel32 1
static const dd kdummylabel32 = 0x1063;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel33
#define M2C_CODE_EQUATE_dummylabel33 1
static const dd kdummylabel33 = 0x1064;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_joya_flag
#define M2C_CODE_EQUATE_joya_flag 1
static const dd kjoya_flag = (m2c::near_offset_external(::joya_flag));
#endif
#ifndef M2C_CODE_EQUATE_joyb_flag
#define M2C_CODE_EQUATE_joyb_flag 1
static const dd kjoyb_flag = (m2c::near_offset_external(::joyb_flag));
#endif
#ifndef M2C_CODE_EQUATE_joya_xref
#define M2C_CODE_EQUATE_joya_xref 1
static const dd kjoya_xref = (m2c::near_offset_external(::joya_xref));
#endif
#ifndef M2C_CODE_EQUATE_joya_yref
#define M2C_CODE_EQUATE_joya_yref 1
static const dd kjoya_yref = (m2c::near_offset_external(::joya_yref));
#endif
#ifndef M2C_CODE_EQUATE_joya_xscale
#define M2C_CODE_EQUATE_joya_xscale 1
static const dd kjoya_xscale = (m2c::near_offset_external(::joya_xscale));
#endif
#ifndef M2C_CODE_EQUATE_joya_yscale
#define M2C_CODE_EQUATE_joya_yscale 1
static const dd kjoya_yscale = (m2c::near_offset_external(::joya_yscale));
#endif
#ifndef M2C_CODE_EQUATE_joya_xpos
#define M2C_CODE_EQUATE_joya_xpos 1
static const dd kjoya_xpos = (m2c::near_offset_external(::joya_xpos));
#endif
#ifndef M2C_CODE_EQUATE_joya_ypos
#define M2C_CODE_EQUATE_joya_ypos 1
static const dd kjoya_ypos = (m2c::near_offset_external(::joya_ypos));
#endif
#ifndef M2C_CODE_EQUATE_joya_xval
#define M2C_CODE_EQUATE_joya_xval 1
static const dd kjoya_xval = (m2c::near_offset_external(::joya_xval));
#endif
#ifndef M2C_CODE_EQUATE_joya_yval
#define M2C_CODE_EQUATE_joya_yval 1
static const dd kjoya_yval = (m2c::near_offset_external(::joya_yval));
#endif
#ifndef M2C_CODE_EQUATE_joya_fire1
#define M2C_CODE_EQUATE_joya_fire1 1
static const dd kjoya_fire1 = (m2c::near_offset_external(::joya_fire1));
#endif
#ifndef M2C_CODE_EQUATE_joya_fire2
#define M2C_CODE_EQUATE_joya_fire2 1
static const dd kjoya_fire2 = (m2c::near_offset_external(::joya_fire2));
#endif
#ifndef M2C_CODE_EQUATE_joya_justfired1
#define M2C_CODE_EQUATE_joya_justfired1 1
static const dd kjoya_justfired1 = (m2c::near_offset_external(::joya_justfired1));
#endif
#ifndef M2C_CODE_EQUATE_joya_justfired2
#define M2C_CODE_EQUATE_joya_justfired2 1
static const dd kjoya_justfired2 = (m2c::near_offset_external(::joya_justfired2));
#endif
#ifndef M2C_CODE_EQUATE_oldjoya_xval
#define M2C_CODE_EQUATE_oldjoya_xval 1
static const dd koldjoya_xval = (m2c::near_offset_external(::oldjoya_xval));
#endif
#ifndef M2C_CODE_EQUATE_oldjoya_yval
#define M2C_CODE_EQUATE_oldjoya_yval 1
static const dd koldjoya_yval = (m2c::near_offset_external(::oldjoya_yval));
#endif
#ifndef M2C_CODE_EQUATE_oldjoya_fire1
#define M2C_CODE_EQUATE_oldjoya_fire1 1
static const dd koldjoya_fire1 = (m2c::near_offset_external(::oldjoya_fire1));
#endif
#ifndef M2C_CODE_EQUATE_oldjoya_fire2
#define M2C_CODE_EQUATE_oldjoya_fire2 1
static const dd koldjoya_fire2 = (m2c::near_offset_external(::oldjoya_fire2));
#endif
#ifndef M2C_CODE_EQUATE_joyb_xref
#define M2C_CODE_EQUATE_joyb_xref 1
static const dd kjoyb_xref = (m2c::near_offset_external(::joyb_xref));
#endif
#ifndef M2C_CODE_EQUATE_joyb_yref
#define M2C_CODE_EQUATE_joyb_yref 1
static const dd kjoyb_yref = (m2c::near_offset_external(::joyb_yref));
#endif
#ifndef M2C_CODE_EQUATE_joyb_xscale
#define M2C_CODE_EQUATE_joyb_xscale 1
static const dd kjoyb_xscale = (m2c::near_offset_external(::joyb_xscale));
#endif
#ifndef M2C_CODE_EQUATE_joyb_yscale
#define M2C_CODE_EQUATE_joyb_yscale 1
static const dd kjoyb_yscale = (m2c::near_offset_external(::joyb_yscale));
#endif
#ifndef M2C_CODE_EQUATE_joyb_xpos
#define M2C_CODE_EQUATE_joyb_xpos 1
static const dd kjoyb_xpos = (m2c::near_offset_external(::joyb_xpos));
#endif
#ifndef M2C_CODE_EQUATE_joyb_ypos
#define M2C_CODE_EQUATE_joyb_ypos 1
static const dd kjoyb_ypos = (m2c::near_offset_external(::joyb_ypos));
#endif
#ifndef M2C_CODE_EQUATE_joyb_xval
#define M2C_CODE_EQUATE_joyb_xval 1
static const dd kjoyb_xval = (m2c::near_offset_external(::joyb_xval));
#endif
#ifndef M2C_CODE_EQUATE_joyb_yval
#define M2C_CODE_EQUATE_joyb_yval 1
static const dd kjoyb_yval = (m2c::near_offset_external(::joyb_yval));
#endif
#ifndef M2C_CODE_EQUATE_joyb_fire1
#define M2C_CODE_EQUATE_joyb_fire1 1
static const dd kjoyb_fire1 = (m2c::near_offset_external(::joyb_fire1));
#endif
#ifndef M2C_CODE_EQUATE_joyb_fire2
#define M2C_CODE_EQUATE_joyb_fire2 1
static const dd kjoyb_fire2 = (m2c::near_offset_external(::joyb_fire2));
#endif
#ifndef M2C_CODE_EQUATE_joyb_justfired1
#define M2C_CODE_EQUATE_joyb_justfired1 1
static const dd kjoyb_justfired1 = (m2c::near_offset_external(::joyb_justfired1));
#endif
#ifndef M2C_CODE_EQUATE_joyb_justfired2
#define M2C_CODE_EQUATE_joyb_justfired2 1
static const dd kjoyb_justfired2 = (m2c::near_offset_external(::joyb_justfired2));
#endif
#ifndef M2C_CODE_EQUATE_oldjoyb_xval
#define M2C_CODE_EQUATE_oldjoyb_xval 1
static const dd koldjoyb_xval = (m2c::near_offset_external(::oldjoyb_xval));
#endif
#ifndef M2C_CODE_EQUATE_oldjoyb_yval
#define M2C_CODE_EQUATE_oldjoyb_yval 1
static const dd koldjoyb_yval = (m2c::near_offset_external(::oldjoyb_yval));
#endif
#ifndef M2C_CODE_EQUATE_oldjoyb_fire1
#define M2C_CODE_EQUATE_oldjoyb_fire1 1
static const dd koldjoyb_fire1 = (m2c::near_offset_external(::oldjoyb_fire1));
#endif
#ifndef M2C_CODE_EQUATE_oldjoyb_fire2
#define M2C_CODE_EQUATE_oldjoyb_fire2 1
static const dd koldjoyb_fire2 = (m2c::near_offset_external(::oldjoyb_fire2));
#endif
#ifndef M2C_CODE_EQUATE_joysensitivity
#define M2C_CODE_EQUATE_joysensitivity 1
static const dd kjoysensitivity = (m2c::near_offset_external(::joysensitivity));
#endif
#ifndef M2C_CODE_EQUATE_chstick
#define M2C_CODE_EQUATE_chstick 1
static const dd kchstick = (m2c::near_offset_external(::chstick));
#endif
#ifndef M2C_CODE_EQUATE_thrustmaster
#define M2C_CODE_EQUATE_thrustmaster 1
static const dd kthrustmaster = (m2c::near_offset_external(::thrustmaster));
#endif
#ifndef M2C_CODE_EQUATE_tm_minx
#define M2C_CODE_EQUATE_tm_minx 1
static const dd ktm_minx = (m2c::near_offset_external(::tm_minx));
#endif
#ifndef M2C_CODE_EQUATE_tm_miny
#define M2C_CODE_EQUATE_tm_miny 1
static const dd ktm_miny = (m2c::near_offset_external(::tm_miny));
#endif
#ifndef M2C_CODE_EQUATE_tm_midx
#define M2C_CODE_EQUATE_tm_midx 1
static const dd ktm_midx = (m2c::near_offset_external(::tm_midx));
#endif
#ifndef M2C_CODE_EQUATE_tm_midy
#define M2C_CODE_EQUATE_tm_midy 1
static const dd ktm_midy = (m2c::near_offset_external(::tm_midy));
#endif
#ifndef M2C_CODE_EQUATE_tm_maxx
#define M2C_CODE_EQUATE_tm_maxx 1
static const dd ktm_maxx = (m2c::near_offset_external(::tm_maxx));
#endif
#ifndef M2C_CODE_EQUATE_tm_maxy
#define M2C_CODE_EQUATE_tm_maxy 1
static const dd ktm_maxy = (m2c::near_offset_external(::tm_maxy));
#endif
#ifndef M2C_CODE_EQUATE_tm_cooliecn
#define M2C_CODE_EQUATE_tm_cooliecn 1
static const dd ktm_cooliecn = (m2c::near_offset_external(::tm_cooliecn));
#endif
#ifndef M2C_CODE_EQUATE_tm_coolielt
#define M2C_CODE_EQUATE_tm_coolielt 1
static const dd ktm_coolielt = (m2c::near_offset_external(::tm_coolielt));
#endif
#ifndef M2C_CODE_EQUATE_tm_cooliedn
#define M2C_CODE_EQUATE_tm_cooliedn 1
static const dd ktm_cooliedn = (m2c::near_offset_external(::tm_cooliedn));
#endif
#ifndef M2C_CODE_EQUATE_tm_cooliert
#define M2C_CODE_EQUATE_tm_cooliert 1
static const dd ktm_cooliert = (m2c::near_offset_external(::tm_cooliert));
#endif
#ifndef M2C_CODE_EQUATE_tm_coolieup
#define M2C_CODE_EQUATE_tm_coolieup 1
static const dd ktm_coolieup = (m2c::near_offset_external(::tm_coolieup));
#endif
#ifndef M2C_CODE_EQUATE_tm_xpos
#define M2C_CODE_EQUATE_tm_xpos 1
static const dd ktm_xpos = (m2c::near_offset_external(::tm_xpos));
#endif
#ifndef M2C_CODE_EQUATE_tm_ypos
#define M2C_CODE_EQUATE_tm_ypos 1
static const dd ktm_ypos = (m2c::near_offset_external(::tm_ypos));
#endif
#ifndef M2C_CODE_EQUATE_tm_xval
#define M2C_CODE_EQUATE_tm_xval 1
static const dd ktm_xval = (m2c::near_offset_external(::tm_xval));
#endif
#ifndef M2C_CODE_EQUATE_tm_yval
#define M2C_CODE_EQUATE_tm_yval 1
static const dd ktm_yval = (m2c::near_offset_external(::tm_yval));
#endif
#ifndef M2C_CODE_EQUATE_tm_cooliepos
#define M2C_CODE_EQUATE_tm_cooliepos 1
static const dd ktm_cooliepos = (m2c::near_offset_external(::tm_cooliepos));
#endif
#ifndef M2C_CODE_EQUATE_tm_cooliehat
#define M2C_CODE_EQUATE_tm_cooliehat 1
static const dd ktm_cooliehat = (m2c::near_offset_external(::tm_cooliehat));
#endif
#ifndef M2C_CODE_EQUATE_tm_coolieval
#define M2C_CODE_EQUATE_tm_coolieval 1
static const dd ktm_coolieval = (m2c::near_offset_external(::tm_coolieval));
#endif
#ifndef M2C_CODE_EQUATE_tm_coolienew
#define M2C_CODE_EQUATE_tm_coolienew 1
static const dd ktm_coolienew = (m2c::near_offset_external(::tm_coolienew));
#endif
#ifndef M2C_CODE_EQUATE_tm_coolieold
#define M2C_CODE_EQUATE_tm_coolieold 1
static const dd ktm_coolieold = (m2c::near_offset_external(::tm_coolieold));
#endif
}
#ifndef joya_flag
#define joya_flag m2c::kjoya_flag
#endif
#ifndef joyb_flag
#define joyb_flag m2c::kjoyb_flag
#endif
#ifndef joya_xref
#define joya_xref m2c::kjoya_xref
#endif
#ifndef joya_yref
#define joya_yref m2c::kjoya_yref
#endif
#ifndef joya_xscale
#define joya_xscale m2c::kjoya_xscale
#endif
#ifndef joya_yscale
#define joya_yscale m2c::kjoya_yscale
#endif
#ifndef joya_xpos
#define joya_xpos m2c::kjoya_xpos
#endif
#ifndef joya_ypos
#define joya_ypos m2c::kjoya_ypos
#endif
#ifndef joya_xval
#define joya_xval m2c::kjoya_xval
#endif
#ifndef joya_yval
#define joya_yval m2c::kjoya_yval
#endif
#ifndef joya_fire1
#define joya_fire1 m2c::kjoya_fire1
#endif
#ifndef joya_fire2
#define joya_fire2 m2c::kjoya_fire2
#endif
#ifndef joya_justfired1
#define joya_justfired1 m2c::kjoya_justfired1
#endif
#ifndef joya_justfired2
#define joya_justfired2 m2c::kjoya_justfired2
#endif
#ifndef oldjoya_xval
#define oldjoya_xval m2c::koldjoya_xval
#endif
#ifndef oldjoya_yval
#define oldjoya_yval m2c::koldjoya_yval
#endif
#ifndef oldjoya_fire1
#define oldjoya_fire1 m2c::koldjoya_fire1
#endif
#ifndef oldjoya_fire2
#define oldjoya_fire2 m2c::koldjoya_fire2
#endif
#ifndef joyb_xref
#define joyb_xref m2c::kjoyb_xref
#endif
#ifndef joyb_yref
#define joyb_yref m2c::kjoyb_yref
#endif
#ifndef joyb_xscale
#define joyb_xscale m2c::kjoyb_xscale
#endif
#ifndef joyb_yscale
#define joyb_yscale m2c::kjoyb_yscale
#endif
#ifndef joyb_xpos
#define joyb_xpos m2c::kjoyb_xpos
#endif
#ifndef joyb_ypos
#define joyb_ypos m2c::kjoyb_ypos
#endif
#ifndef joyb_xval
#define joyb_xval m2c::kjoyb_xval
#endif
#ifndef joyb_yval
#define joyb_yval m2c::kjoyb_yval
#endif
#ifndef joyb_fire1
#define joyb_fire1 m2c::kjoyb_fire1
#endif
#ifndef joyb_fire2
#define joyb_fire2 m2c::kjoyb_fire2
#endif
#ifndef joyb_justfired1
#define joyb_justfired1 m2c::kjoyb_justfired1
#endif
#ifndef joyb_justfired2
#define joyb_justfired2 m2c::kjoyb_justfired2
#endif
#ifndef oldjoyb_xval
#define oldjoyb_xval m2c::koldjoyb_xval
#endif
#ifndef oldjoyb_yval
#define oldjoyb_yval m2c::koldjoyb_yval
#endif
#ifndef oldjoyb_fire1
#define oldjoyb_fire1 m2c::koldjoyb_fire1
#endif
#ifndef oldjoyb_fire2
#define oldjoyb_fire2 m2c::koldjoyb_fire2
#endif
#ifndef joysensitivity
#define joysensitivity m2c::kjoysensitivity
#endif
#ifndef chstick
#define chstick m2c::kchstick
#endif
#ifndef thrustmaster
#define thrustmaster m2c::kthrustmaster
#endif
#ifndef tm_minx
#define tm_minx m2c::ktm_minx
#endif
#ifndef tm_miny
#define tm_miny m2c::ktm_miny
#endif
#ifndef tm_midx
#define tm_midx m2c::ktm_midx
#endif
#ifndef tm_midy
#define tm_midy m2c::ktm_midy
#endif
#ifndef tm_maxx
#define tm_maxx m2c::ktm_maxx
#endif
#ifndef tm_maxy
#define tm_maxy m2c::ktm_maxy
#endif
#ifndef tm_cooliecn
#define tm_cooliecn m2c::ktm_cooliecn
#endif
#ifndef tm_coolielt
#define tm_coolielt m2c::ktm_coolielt
#endif
#ifndef tm_cooliedn
#define tm_cooliedn m2c::ktm_cooliedn
#endif
#ifndef tm_cooliert
#define tm_cooliert m2c::ktm_cooliert
#endif
#ifndef tm_coolieup
#define tm_coolieup m2c::ktm_coolieup
#endif
#ifndef tm_xpos
#define tm_xpos m2c::ktm_xpos
#endif
#ifndef tm_ypos
#define tm_ypos m2c::ktm_ypos
#endif
#ifndef tm_xval
#define tm_xval m2c::ktm_xval
#endif
#ifndef tm_yval
#define tm_yval m2c::ktm_yval
#endif
#ifndef tm_cooliepos
#define tm_cooliepos m2c::ktm_cooliepos
#endif
#ifndef tm_cooliehat
#define tm_cooliehat m2c::ktm_cooliehat
#endif
#ifndef tm_coolieval
#define tm_coolieval m2c::ktm_coolieval
#endif
#ifndef tm_coolienew
#define tm_coolienew m2c::ktm_coolienew
#endif
#ifndef tm_coolieold
#define tm_coolieold m2c::ktm_coolieold
#endif



#endif
