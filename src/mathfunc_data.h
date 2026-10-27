#ifndef __M2C_MATHFUNC_DATA_H__
#define __M2C_MATHFUNC_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& deltatime;
extern dw& deltatable;
extern dw& dummy526b9c98_data_4_217;
extern dw& dummy526b9c98_data_6_218;
extern dw& dummy526b9c98_data_8_219;
extern dw& dummy526b9c98_data_a_220;
extern dw& dummy526b9c98_data_c_221;
extern dw& dummy526b9c98_data_e_222;
extern dw& dummy526b9c98_data_10_223;
extern dw& dummy526b9c98_data_12_224;
extern dw& dummy526b9c98_data_14_225;
extern dw& dummy526b9c98_data_16_226;
extern dw& dummy526b9c98_data_18_227;
extern dw& dummy526b9c98_data_1a_228;
extern dw& dummy526b9c98_data_1c_229;
extern dw& dummy526b9c98_data_1e_230;
extern dw& dummy526b9c98_data_20_231;
extern dw& dummy526b9c98_data_22_232;
extern dw& dummy526b9c98_data_24_233;
extern dw& dummy526b9c98_data_26_234;
extern dw& dummy526b9c98_data_28_235;
extern dw& dummy526b9c98_data_2a_236;
extern dw& dummy526b9c98_data_2c_237;
extern dw& dummy526b9c98_data_2e_238;
extern dw& dummy526b9c98_data_30_239;
extern dw& dummy526b9c98_data_32_240;
extern dw& dummy526b9c98_data_34_241;
extern dw& dummy526b9c98_data_36_242;
extern dw& dummy526b9c98_data_38_243;
extern dw& dummy526b9c98_data_3a_244;
extern dw& dummy526b9c98_data_3c_245;
extern dw& dummy526b9c98_data_3e_246;
extern dw& dummy526b9c98_data_40_247;
extern dw& dummy526b9c98_data_42_248;
extern dw& dummy526b9c98_data_44_249;
extern dw& dummy526b9c98_data_46_250;
extern dw& dummy526b9c98_data_48_251;
extern dw& dummy526b9c98_data_4a_252;
extern dw& dummy526b9c98_data_4c_253;
extern dw& dummy526b9c98_data_4e_254;
extern dw& dummy526b9c98_data_50_255;
extern dw& dummy526b9c98_data_52_256;
extern dw& dummy526b9c98_data_54_257;
extern dw& dummy526b9c98_data_56_258;
extern dw& dummy526b9c98_data_58_259;
extern dw& dummy526b9c98_data_5a_260;
extern dw& dummy526b9c98_data_5c_261;
extern dw& dummy526b9c98_data_5e_262;
extern dw& dummy526b9c98_data_60_263;
extern dw& dummy526b9c98_data_62_264;
extern dw& dummy526b9c98_data_64_265;
extern dw& dummy526b9c98_data_66_266;
extern dw& dummy526b9c98_data_68_267;
extern dw& dummy526b9c98_data_6a_268;
extern dw& dummy526b9c98_data_6c_269;
extern dw& dummy526b9c98_data_6e_270;
extern dw& dummy526b9c98_data_70_271;
extern dw& dummy526b9c98_data_72_272;
extern dw& dummy526b9c98_data_74_273;
extern dw& dummy526b9c98_data_76_274;
extern dw& dummy526b9c98_data_78_275;
extern dw& dummy526b9c98_data_7a_276;
extern dw& dummy526b9c98_data_7c_277;
extern dw& dummy526b9c98_data_7e_278;
extern dw& dummy526b9c98_data_80_279;
extern dw& dummy526b9c98_data_82_280;
extern dw& dummy526b9c98_data_84_281;
extern dw& dummy526b9c98_data_86_282;
extern dw& dummy526b9c98_data_88_283;
extern dw& dummy526b9c98_data_8a_284;
extern dw& dummy526b9c98_data_8c_285;
extern dw& dummy526b9c98_data_8e_286;
extern dw& dummy526b9c98_data_90_287;
extern dw& dummy526b9c98_data_92_288;
extern dw& dummy526b9c98_data_94_289;
extern dw& dummy526b9c98_data_96_290;
extern dw& dummy526b9c98_data_98_291;
extern dw& dummy526b9c98_data_9a_292;
extern dw& dummy526b9c98_data_9c_293;
extern dw& dummy526b9c98_data_9e_294;
extern dw& dummy526b9c98_data_a0_295;
extern dw& dummy526b9c98_data_a2_296;
extern dw& dummy526b9c98_data_a4_297;
extern dw& dummy526b9c98_data_a6_298;
extern dw& dummy526b9c98_data_a8_299;
extern dw& dummy526b9c98_data_aa_300;
extern dw& dummy526b9c98_data_ac_301;
extern dw& dummy526b9c98_data_ae_302;
extern dw& dummy526b9c98_data_b0_303;
extern dw& dummy526b9c98_data_b2_304;
extern dw& dummy526b9c98_data_b4_305;
extern dw& dummy526b9c98_data_b6_306;
extern dw& dummy526b9c98_data_b8_307;
extern dw& dummy526b9c98_data_ba_308;
extern dw& dummy526b9c98_data_bc_309;
extern dw& dummy526b9c98_data_be_310;
extern dw& dummy526b9c98_data_c0_311;
extern dw& dummy526b9c98_data_c2_312;
extern dw& dummy526b9c98_data_c4_313;
extern dw& dummy526b9c98_data_c6_314;
extern dw& dummy526b9c98_data_c8_315;
extern dw& dummy526b9c98_data_ca_316;
extern db& libcode;

#ifndef octtrigtable
extern dw& octtrigtable;
#endif
#ifndef octsigntable
extern dw& octsigntable;
#endif
#ifndef lastframe
extern dw& lastframe;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_calcdeltatime
#define M2C_CODE_EQUATE_calcdeltatime 1
static const dd kcalcdeltatime = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_timeok
#define M2C_CODE_EQUATE_timeok 1
static const dd ktimeok = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_calcdeltaxy
#define M2C_CODE_EQUATE_calcdeltaxy 1
static const dd kcalcdeltaxy = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_sqrt
#define M2C_CODE_EQUATE_sqrt 1
static const dd ksqrt = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_sqrtexit
#define M2C_CODE_EQUATE_sqrtexit 1
static const dd ksqrtexit = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_sqrt32
#define M2C_CODE_EQUATE_sqrt32 1
static const dd ksqrt32 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_sqrt32exit
#define M2C_CODE_EQUATE_sqrt32exit 1
static const dd ksqrt32exit = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_sqrt32loop1
#define M2C_CODE_EQUATE_sqrt32loop1 1
static const dd ksqrt32loop1 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_sqrt32loop2
#define M2C_CODE_EQUATE_sqrt32loop2 1
static const dd ksqrt32loop2 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_sqrt32result
#define M2C_CODE_EQUATE_sqrt32result 1
static const dd ksqrt32result = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x1017;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_deltatime
#define M2C_CODE_EQUATE_deltatime 1
static const dd kdeltatime = (m2c::near_offset_external(::deltatime));
#endif
#ifndef M2C_CODE_EQUATE_deltatable
#define M2C_CODE_EQUATE_deltatable 1
static const dd kdeltatable = (m2c::near_offset_external(::deltatable));
#endif
}
#ifndef deltatime
#define deltatime m2c::kdeltatime
#endif
#ifndef deltatable
#define deltatable m2c::kdeltatable
#endif



#endif
