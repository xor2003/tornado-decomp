#ifndef __M2C_COMPANEL_DATA_H__
#define __M2C_COMPANEL_DATA_H__

#include "asm.h"

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

#ifndef screenmode
extern dw& screenmode;
#endif
#ifndef panelmode
extern dw& panelmode;
#endif
#ifndef ironwork
extern db& ironwork;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_setpanelmode
#define M2C_CODE_EQUATE_setpanelmode 1
static const dd ksetpanelmode = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_initpanels
#define M2C_CODE_EQUATE_initpanels 1
static const dd kinitpanels = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_loadpanel
#define M2C_CODE_EQUATE_loadpanel 1
static const dd kloadpanel = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_clearpilotpanel
#define M2C_CODE_EQUATE_clearpilotpanel 1
static const dd kclearpilotpanel = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_clearnavigpanel
#define M2C_CODE_EQUATE_clearnavigpanel 1
static const dd kclearnavigpanel = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_drawpilotpanel
#define M2C_CODE_EQUATE_drawpilotpanel 1
static const dd kdrawpilotpanel = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_drawnavigpanel
#define M2C_CODE_EQUATE_drawnavigpanel 1
static const dd kdrawnavigpanel = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_drawironwork
#define M2C_CODE_EQUATE_drawironwork 1
static const dd kdrawironwork = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_drawbrackets
#define M2C_CODE_EQUATE_drawbrackets 1
static const dd kdrawbrackets = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_updatepanel
#define M2C_CODE_EQUATE_updatepanel 1
static const dd kupdatepanel = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_null
#define M2C_CODE_EQUATE_null 1
static const dd knull = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x1026;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_pilotpanel
#define M2C_CODE_EQUATE_pilotpanel 1
static const dd kpilotpanel = (m2c::near_offset_external(::pilotpanel));
#endif
#ifndef M2C_CODE_EQUATE_psidepanel
#define M2C_CODE_EQUATE_psidepanel 1
static const dd kpsidepanel = (m2c::near_offset_external(::psidepanel));
#endif
#ifndef M2C_CODE_EQUATE_navigpanel
#define M2C_CODE_EQUATE_navigpanel 1
static const dd knavigpanel = (m2c::near_offset_external(::navigpanel));
#endif
#ifndef M2C_CODE_EQUATE_nsidepanel
#define M2C_CODE_EQUATE_nsidepanel 1
static const dd knsidepanel = (m2c::near_offset_external(::nsidepanel));
#endif
#ifndef M2C_CODE_EQUATE_framepanel
#define M2C_CODE_EQUATE_framepanel 1
static const dd kframepanel = (m2c::near_offset_external(::framepanel));
#endif
#ifndef M2C_CODE_EQUATE_extrapanel
#define M2C_CODE_EQUATE_extrapanel 1
static const dd kextrapanel = (m2c::near_offset_external(::extrapanel));
#endif
#ifndef M2C_CODE_EQUATE__initpanels
#define M2C_CODE_EQUATE__initpanels 1
static const dd k_initpanels = (m2c::near_offset_external(::_initpanels));
#endif
#ifndef M2C_CODE_EQUATE__loadpanel
#define M2C_CODE_EQUATE__loadpanel 1
static const dd k_loadpanel = (m2c::near_offset_external(::_loadpanel));
#endif
#ifndef M2C_CODE_EQUATE__clrpilotpanel
#define M2C_CODE_EQUATE__clrpilotpanel 1
static const dd k_clrpilotpanel = (m2c::near_offset_external(::_clrpilotpanel));
#endif
#ifndef M2C_CODE_EQUATE__clrnavigpanel
#define M2C_CODE_EQUATE__clrnavigpanel 1
static const dd k_clrnavigpanel = (m2c::near_offset_external(::_clrnavigpanel));
#endif
#ifndef M2C_CODE_EQUATE__drawpilotpanel
#define M2C_CODE_EQUATE__drawpilotpanel 1
static const dd k_drawpilotpanel = (m2c::near_offset_external(::_drawpilotpanel));
#endif
#ifndef M2C_CODE_EQUATE__drawnavigpanel
#define M2C_CODE_EQUATE__drawnavigpanel 1
static const dd k_drawnavigpanel = (m2c::near_offset_external(::_drawnavigpanel));
#endif
#ifndef M2C_CODE_EQUATE__drawironwork
#define M2C_CODE_EQUATE__drawironwork 1
static const dd k_drawironwork = (m2c::near_offset_external(::_drawironwork));
#endif
#ifndef M2C_CODE_EQUATE__drawbrackets
#define M2C_CODE_EQUATE__drawbrackets 1
static const dd k_drawbrackets = (m2c::near_offset_external(::_drawbrackets));
#endif
#ifndef M2C_CODE_EQUATE_panelload
#define M2C_CODE_EQUATE_panelload 1
static const dd kpanelload = (m2c::near_offset_external(::panelload));
#endif
#ifndef M2C_CODE_EQUATE_countload
#define M2C_CODE_EQUATE_countload 1
static const dd kcountload = (m2c::near_offset_external(::countload));
#endif
#ifndef M2C_CODE_EQUATE__updatepanel
#define M2C_CODE_EQUATE__updatepanel 1
static const dd k_updatepanel = (m2c::near_offset_external(::_updatepanel));
#endif
}
#ifndef pilotpanel
#define pilotpanel m2c::kpilotpanel
#endif
#ifndef psidepanel
#define psidepanel m2c::kpsidepanel
#endif
#ifndef navigpanel
#define navigpanel m2c::knavigpanel
#endif
#ifndef nsidepanel
#define nsidepanel m2c::knsidepanel
#endif
#ifndef framepanel
#define framepanel m2c::kframepanel
#endif
#ifndef extrapanel
#define extrapanel m2c::kextrapanel
#endif
#ifndef _initpanels
#define _initpanels m2c::k_initpanels
#endif
#ifndef _loadpanel
#define _loadpanel m2c::k_loadpanel
#endif
#ifndef _clrpilotpanel
#define _clrpilotpanel m2c::k_clrpilotpanel
#endif
#ifndef _clrnavigpanel
#define _clrnavigpanel m2c::k_clrnavigpanel
#endif
#ifndef _drawpilotpanel
#define _drawpilotpanel m2c::k_drawpilotpanel
#endif
#ifndef _drawnavigpanel
#define _drawnavigpanel m2c::k_drawnavigpanel
#endif
#ifndef _drawironwork
#define _drawironwork m2c::k_drawironwork
#endif
#ifndef _drawbrackets
#define _drawbrackets m2c::k_drawbrackets
#endif
#ifndef panelload
#define panelload m2c::kpanelload
#endif
#ifndef countload
#define countload m2c::kcountload
#endif
#ifndef _updatepanel
#define _updatepanel m2c::k_updatepanel
#endif



#endif
