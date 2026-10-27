/* THIS IS GENERATED FILE */

        
#ifndef __M2C_COMPANEL_STUBS_H__
#define __M2C_COMPANEL_STUBS_H__

#include "asm.h"



	
	#define M2C_MODULE_COMPANEL 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern char (& pilotpanel)[13];
extern char (& psidepanel)[13];
extern char (& navigpanel)[13];
extern char (& nsidepanel)[13];
extern char (& framepanel)[13];
extern char (& extrapanel)[13];
extern dw& _initpanels;
extern dw& dummyf26f4877_data_50_130;
extern dw& dummyf26f4877_data_52_131;
extern dw& dummyf26f4877_data_54_132;
extern dw& dummyf26f4877_data_56_133;
extern dw& dummyf26f4877_data_58_134;
extern dw& dummyf26f4877_data_5a_135;
extern dw& _loadpanel;
extern dw& dummyf26f4877_data_5e_142;
extern dw& dummyf26f4877_data_60_143;
extern dw& dummyf26f4877_data_62_144;
extern dw& dummyf26f4877_data_64_145;
extern dw& dummyf26f4877_data_66_146;
extern dw& dummyf26f4877_data_68_147;
extern dw& _clrpilotpanel;
extern dw& dummyf26f4877_data_6c_154;
extern dw& dummyf26f4877_data_6e_155;
extern dw& dummyf26f4877_data_70_156;
extern dw& dummyf26f4877_data_72_157;
extern dw& dummyf26f4877_data_74_158;
extern dw& dummyf26f4877_data_76_159;
extern dw& _clrnavigpanel;
extern dw& dummyf26f4877_data_7a_166;
extern dw& dummyf26f4877_data_7c_167;
extern dw& dummyf26f4877_data_7e_168;
extern dw& dummyf26f4877_data_80_169;
extern dw& dummyf26f4877_data_82_170;
extern dw& dummyf26f4877_data_84_171;
extern dw& _drawpilotpanel;
extern dw& dummyf26f4877_data_88_178;
extern dw& dummyf26f4877_data_8a_179;
extern dw& dummyf26f4877_data_8c_180;
extern dw& dummyf26f4877_data_8e_181;
extern dw& dummyf26f4877_data_90_182;
extern dw& dummyf26f4877_data_92_183;
extern dw& _drawnavigpanel;
extern dw& dummyf26f4877_data_96_190;
extern dw& dummyf26f4877_data_98_191;
extern dw& dummyf26f4877_data_9a_192;
extern dw& dummyf26f4877_data_9c_193;
extern dw& dummyf26f4877_data_9e_194;
extern dw& dummyf26f4877_data_a0_195;
extern dw& _drawironwork;
extern dw& dummyf26f4877_data_a4_201;
extern dw& dummyf26f4877_data_a6_202;
extern dw& dummyf26f4877_data_a8_203;
extern dw& dummyf26f4877_data_aa_204;
extern dw& dummyf26f4877_data_ac_205;
extern dw& dummyf26f4877_data_ae_206;
extern dw& _drawbrackets;
extern dw& dummyf26f4877_data_b2_213;
extern dw& dummyf26f4877_data_b4_214;
extern dw& dummyf26f4877_data_b6_215;
extern dw& dummyf26f4877_data_b8_216;
extern dw& dummyf26f4877_data_ba_217;
extern dw& dummyf26f4877_data_bc_218;
extern db (& panelload)[2];
extern db& countload;
extern dw& _updatepanel;
extern dw& dummyf26f4877_data_c3_236;
extern dw& dummyf26f4877_data_c5_237;
extern dw& dummyf26f4877_data_c7_238;
extern dw& dummyf26f4877_data_c9_239;
extern dw& dummyf26f4877_data_cb_240;
extern dw& dummyf26f4877_data_cd_241;
extern dw& dummyf26f4877_data_cf_242;
extern db& pancode;

	
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
#ifndef M2C_CODE_EQUATE_setpanelmode
#define M2C_CODE_EQUATE_setpanelmode 1
static const dd ksetpanelmode = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_initpanels
#define M2C_CODE_EQUATE_initpanels 1
static const dd kinitpanels = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_loadpanel
#define M2C_CODE_EQUATE_loadpanel 1
static const dd kloadpanel = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_clearpilotpanel
#define M2C_CODE_EQUATE_clearpilotpanel 1
static const dd kclearpilotpanel = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_clearnavigpanel
#define M2C_CODE_EQUATE_clearnavigpanel 1
static const dd kclearnavigpanel = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_drawpilotpanel
#define M2C_CODE_EQUATE_drawpilotpanel 1
static const dd kdrawpilotpanel = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_drawnavigpanel
#define M2C_CODE_EQUATE_drawnavigpanel 1
static const dd kdrawnavigpanel = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_drawironwork
#define M2C_CODE_EQUATE_drawironwork 1
static const dd kdrawironwork = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_drawbrackets
#define M2C_CODE_EQUATE_drawbrackets 1
static const dd kdrawbrackets = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_updatepanel
#define M2C_CODE_EQUATE_updatepanel 1
static const dd kupdatepanel = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_null
#define M2C_CODE_EQUATE_null 1
static const dd knull = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x101a;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool clearnavigpanel(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool clearpilotpanel(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawbrackets(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawironwork(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawnavigpanel(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawpilotpanel(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool initpanels(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool loadpanel(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool null(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool setpanelmode(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updatepanel(m2c::_offsets, struct m2c::_STATE*);
extern bool updateextrn(m2c::_offsets, struct m2c::_STATE*);
extern bool updateframe(m2c::_offsets, struct m2c::_STATE*);
extern bool updatelookdown(m2c::_offsets, struct m2c::_STATE*);
extern bool updatenavig(m2c::_offsets, struct m2c::_STATE*);
extern bool updatepilot(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_brackets(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_clrnavigpan(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_clrpilotpan(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_drwnavigpan(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_drwpilotpan(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_initpanels(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_ironwork(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_loadpanel(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


#ifndef screenmode
extern dw& screenmode;
#endif
#ifndef panelmode
extern dw& panelmode;
#endif
#ifndef ironwork
extern db& ironwork;
#endif

#endif
