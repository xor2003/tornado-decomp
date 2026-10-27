#ifndef __M2C_DAMAGE_DATA_H__
#define __M2C_DAMAGE_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& damagetimer;
extern dw& damageswitch;
extern dw& dummy9d08965c_data_4_1255;
extern dw& dummy9d08965c_data_6_1256;
extern dw& dummy9d08965c_data_8_1257;
extern dw& dummy9d08965c_data_a_1258;
extern dw& dummy9d08965c_data_c_1259;
extern dw& dummy9d08965c_data_e_1260;
extern dw& dummy9d08965c_data_10_1261;
extern dw& dummy9d08965c_data_12_1262;
extern dw& dummy9d08965c_data_14_1263;
extern dw& dummy9d08965c_data_16_1264;
extern dw& dummy9d08965c_data_18_1265;
extern dw& dummy9d08965c_data_1a_1266;
extern dw& dummy9d08965c_data_1c_1267;
extern dw& dummy9d08965c_data_1e_1268;
extern dw& dummy9d08965c_data_20_1269;
extern dw& dummy9d08965c_data_22_1270;
extern dw& dummy9d08965c_data_24_1271;
extern dw& dummy9d08965c_data_26_1272;
extern dw& dummy9d08965c_data_28_1273;
extern db& gencode;

#ifndef ssf_tab2
extern db& ssf_tab2;
#endif
#ifndef ssf_flaps
extern db& ssf_flaps;
#endif
#ifndef ssf_airbrakes
extern db& ssf_airbrakes;
#endif
#ifndef ssf_rwr
extern db& ssf_rwr;
#endif
#ifndef ecmactive
extern db& ecmactive;
#endif
#ifndef ssf_hud
extern db& ssf_hud;
#endif
#ifndef vshake
extern db& vshake;
#endif
#ifndef ssf_engine2
extern db& ssf_engine2;
#endif
#ifndef shaketimer
extern dw& shaketimer;
#endif
#ifndef redwarnings2
extern dw& redwarnings2;
#endif
#ifndef ssf_spils
extern db& ssf_spils;
#endif
#ifndef ssf_tab1
extern db& ssf_tab1;
#endif
#ifndef ambwarnings2
extern dw& ambwarnings2;
#endif
#ifndef engfire2
extern db& engfire2;
#endif
#ifndef ssf_gear
extern db& ssf_gear;
#endif
#ifndef hshake
extern db& hshake;
#endif
#ifndef shakepriority
extern db& shakepriority;
#endif
#ifndef ssf_oxygen
extern db& ssf_oxygen;
#endif
#ifndef ecmfitted
extern db& ecmfitted;
#endif
#ifndef ssf_pilotmfd
extern db& ssf_pilotmfd;
#endif
#ifndef engfire1
extern db& engfire1;
#endif
#ifndef ssf_radar
extern db& ssf_radar;
#endif
#ifndef ssf_ecm
extern db& ssf_ecm;
#endif
#ifndef ssf_engine1
extern db& ssf_engine1;
#endif
#ifndef ssf_navigmfd
extern db& ssf_navigmfd;
#endif
#ifndef ssf_adc
extern db& ssf_adc;
#endif
#ifndef lastframe
extern dw& lastframe;
#endif
#ifndef ssf_thrustrvrs
extern db& ssf_thrustrvrs;
#endif
#ifndef ssf_wheelbrakes
extern db& ssf_wheelbrakes;
#endif
#ifndef ssf_sweep
extern db& ssf_sweep;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_maxdamage
#define M2C_CODE_EQUATE_maxdamage 1
static const dd kmaxdamage = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_intodamage
#define M2C_CODE_EQUATE_intodamage 1
static const dd kintodamage = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_meddamage
#define M2C_CODE_EQUATE_meddamage 1
static const dd kmeddamage = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_mindamage
#define M2C_CODE_EQUATE_mindamage 1
static const dd kmindamage = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_damgear
#define M2C_CODE_EQUATE_damgear 1
static const dd kdamgear = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_1_skip 1
static const dd k__m2c_macrolocal_1_skip = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_damwheelbrakes
#define M2C_CODE_EQUATE_damwheelbrakes 1
static const dd kdamwheelbrakes = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_2_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_2_skip 1
static const dd k__m2c_macrolocal_2_skip = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_damairbrakes
#define M2C_CODE_EQUATE_damairbrakes 1
static const dd kdamairbrakes = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_3_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_3_skip 1
static const dd k__m2c_macrolocal_3_skip = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_damengine1
#define M2C_CODE_EQUATE_damengine1 1
static const dd kdamengine1 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_4_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_4_skip 1
static const dd k__m2c_macrolocal_4_skip = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_damengine2
#define M2C_CODE_EQUATE_damengine2 1
static const dd kdamengine2 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_5_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_5_skip 1
static const dd k__m2c_macrolocal_5_skip = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_damwingsweep
#define M2C_CODE_EQUATE_damwingsweep 1
static const dd kdamwingsweep = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_6_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_6_skip 1
static const dd k__m2c_macrolocal_6_skip = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_damflaps
#define M2C_CODE_EQUATE_damflaps 1
static const dd kdamflaps = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_7_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_7_skip 1
static const dd k__m2c_macrolocal_7_skip = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_damthrustrvrs
#define M2C_CODE_EQUATE_damthrustrvrs 1
static const dd kdamthrustrvrs = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_8_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_8_skip 1
static const dd k__m2c_macrolocal_8_skip = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_damspils
#define M2C_CODE_EQUATE_damspils 1
static const dd kdamspils = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_9_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_9_skip 1
static const dd k__m2c_macrolocal_9_skip = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_damhud
#define M2C_CODE_EQUATE_damhud 1
static const dd kdamhud = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_10_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_10_skip 1
static const dd k__m2c_macrolocal_10_skip = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_dampilotmfd
#define M2C_CODE_EQUATE_dampilotmfd 1
static const dd kdampilotmfd = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_11_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_11_skip 1
static const dd k__m2c_macrolocal_11_skip = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_damnavigmfd
#define M2C_CODE_EQUATE_damnavigmfd 1
static const dd kdamnavigmfd = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_12_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_12_skip 1
static const dd k__m2c_macrolocal_12_skip = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_damtab1
#define M2C_CODE_EQUATE_damtab1 1
static const dd kdamtab1 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_13_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_13_skip 1
static const dd k__m2c_macrolocal_13_skip = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_damtab2
#define M2C_CODE_EQUATE_damtab2 1
static const dd kdamtab2 = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_14_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_14_skip 1
static const dd k__m2c_macrolocal_14_skip = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_damoxygen
#define M2C_CODE_EQUATE_damoxygen 1
static const dd kdamoxygen = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_15_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_15_skip 1
static const dd k__m2c_macrolocal_15_skip = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_damradar
#define M2C_CODE_EQUATE_damradar 1
static const dd kdamradar = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_16_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_16_skip 1
static const dd k__m2c_macrolocal_16_skip = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_damecm
#define M2C_CODE_EQUATE_damecm 1
static const dd kdamecm = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_17_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_17_skip 1
static const dd k__m2c_macrolocal_17_skip = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_damrwr
#define M2C_CODE_EQUATE_damrwr 1
static const dd kdamrwr = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_18_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_18_skip 1
static const dd k__m2c_macrolocal_18_skip = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_damadc
#define M2C_CODE_EQUATE_damadc 1
static const dd kdamadc = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_19_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_19_skip 1
static const dd k__m2c_macrolocal_19_skip = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_damenginefire
#define M2C_CODE_EQUATE_damenginefire 1
static const dd kdamenginefire = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_skipfire
#define M2C_CODE_EQUATE_skipfire 1
static const dd kskipfire = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_20_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_20_skip 1
static const dd k__m2c_macrolocal_20_skip = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_21_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_21_skip 1
static const dd k__m2c_macrolocal_21_skip = 0x1037;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_damagetimer
#define M2C_CODE_EQUATE_damagetimer 1
static const dd kdamagetimer = (m2c::near_offset_external(::damagetimer));
#endif
#ifndef M2C_CODE_EQUATE_damageswitch
#define M2C_CODE_EQUATE_damageswitch 1
static const dd kdamageswitch = (m2c::near_offset_external(::damageswitch));
#endif
}
#ifndef damagetimer
#define damagetimer m2c::kdamagetimer
#endif
#ifndef damageswitch
#define damageswitch m2c::kdamageswitch
#endif



#endif
