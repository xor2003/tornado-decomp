/* THIS IS GENERATED FILE */

        
#ifndef __M2C_JOYSTICK_STUBS_H__
#define __M2C_JOYSTICK_STUBS_H__

#include "asm.h"



	static const int npos = 32;
enum {
    game_port = 0x00201,
    joy_a_xpos = 0x1,
    joy_a_ypos = 0x2,
    joy_b_xpos = 0x4,
    joy_b_ypos = 0x8,
    joy_a_fire1 = 0x10,
    joy_a_fire2 = 0x20,
    joy_b_fire1 = 0x40,
    joy_b_fire2 = 0x80,
};
static const int coolie_up = 1;
static const int coolie_dn = 2;
static const int coolie_lt = 3;
static const int coolie_rt = 4;
#define tm_fire1 (joy_a_fire1)
#define tm_fire2 (joy_a_fire2)
#define tm_fire3 (joy_b_fire1)
#define tm_fire4 (joy_b_fire2)

	#define M2C_MODULE_JOYSTICK 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

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
void   Initializer();
#ifndef M2C_CODE_EQUATE_begin
#define M2C_CODE_EQUATE_begin 1
static const dd kbegin = 0x1001;
#endif
#ifndef M2C_CODE_EQUATE_mainproc
#define M2C_CODE_EQUATE_mainproc 1
static const dd kmainproc = 0x1002;
#endif
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
#ifndef M2C_CODE_EQUATE_recalthrust
#define M2C_CODE_EQUATE_recalthrust 1
static const dd krecalthrust = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_readanalogue
#define M2C_CODE_EQUATE_readanalogue 1
static const dd kreadanalogue = 0x1007;
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
#ifndef M2C_CODE_EQUATE_readthrust
#define M2C_CODE_EQUATE_readthrust 1
static const dd kreadthrust = 0x100d;
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
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x1065;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool readanalogue(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool readjoysticks(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool readthrust(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool recaljoysticks(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool recalthrust(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);



#endif
