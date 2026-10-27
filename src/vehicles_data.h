#ifndef __M2C_VEHICLES_DATA_H__
#define __M2C_VEHICLES_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& vehicletype;
extern dw& numvehicles;
extern dw& convoyptr;
extern dw& routeptr;
extern dw& dist;
extern dw& distfine;
extern db& leadvehicle;
extern db& stopconvoy;
extern dw& sinslope;
extern dw& dummy8197178e_data_10_2055;
extern dw& cosslope;
extern dw& dummy8197178e_data_14_2059;
extern dw& checkswitch;
extern dw& dummy8197178e_data_18_2069;
extern dw& dummy8197178e_data_1a_2070;
extern dw& dummy8197178e_data_1c_2071;
extern db& secdata1;
extern db& dronecode;

#ifndef droneptrs
extern dw& droneptrs;
#endif
#ifndef sectortable
extern dw& sectortable;
#endif
#ifndef etruckconvoy1
extern dw& etruckconvoy1;
#endif
#ifndef sintable
extern dw& sintable;
#endif
#ifndef deltatime
extern dw& deltatime;
#endif
#ifndef fog
extern db& fog;
#endif
#ifndef atrain2
extern dw& atrain2;
#endif
#ifndef etrain1
extern dw& etrain1;
#endif
#ifndef sectorlayer1
extern db& sectorlayer1;
#endif
#ifndef atrain2route
extern dw& atrain2route;
#endif
#ifndef etrain1route
extern dw& etrain1route;
#endif
#ifndef atrain1
extern dw& atrain1;
#endif
#ifndef etrain2route
extern dw& etrain2route;
#endif
#ifndef costable
extern dw& costable;
#endif
#ifndef etruckconvoy2
extern dw& etruckconvoy2;
#endif
#ifndef atruck2route
extern dw& atruck2route;
#endif
#ifndef atruckconvoy2
extern dw& atruckconvoy2;
#endif
#ifndef etruck1route
extern dw& etruck1route;
#endif
#ifndef atrain1route
extern dw& atrain1route;
#endif
#ifndef atruck1route
extern dw& atruck1route;
#endif
#ifndef atruckconvoy1
extern dw& atruckconvoy1;
#endif
#ifndef etrain2
extern dw& etrain2;
#endif
#ifndef etruck2route
extern dw& etruck2route;
#endif
#ifndef lastframe
extern dw& lastframe;
#endif
#ifndef night
extern db& night;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_initconvoys
#define M2C_CODE_EQUATE_initconvoys 1
static const dd kinitconvoys = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_exitinit
#define M2C_CODE_EQUATE_exitinit 1
static const dd kexitinit = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_initloop
#define M2C_CODE_EQUATE_initloop 1
static const dd kinitloop = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_initnext
#define M2C_CODE_EQUATE_initnext 1
static const dd kinitnext = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_updateconvoys
#define M2C_CODE_EQUATE_updateconvoys 1
static const dd kupdateconvoys = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_1_skip 1
static const dd k__m2c_macrolocal_1_skip = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_exitupdate
#define M2C_CODE_EQUATE_exitupdate 1
static const dd kexitupdate = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_sortdelay
#define M2C_CODE_EQUATE_sortdelay 1
static const dd ksortdelay = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_contspeed
#define M2C_CODE_EQUATE_contspeed 1
static const dd kcontspeed = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_sortspeed
#define M2C_CODE_EQUATE_sortspeed 1
static const dd ksortspeed = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_setspeed
#define M2C_CODE_EQUATE_setspeed 1
static const dd ksetspeed = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_decelerate
#define M2C_CODE_EQUATE_decelerate 1
static const dd kdecelerate = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_accelerate
#define M2C_CODE_EQUATE_accelerate 1
static const dd kaccelerate = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_updateloop
#define M2C_CODE_EQUATE_updateloop 1
static const dd kupdateloop = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_5_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_5_skip 1
static const dd k__m2c_macrolocal_5_skip = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_skipupdate
#define M2C_CODE_EQUATE_skipupdate 1
static const dd kskipupdate = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_lampsok
#define M2C_CODE_EQUATE_lampsok 1
static const dd klampsok = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_overshoot
#define M2C_CODE_EQUATE_overshoot 1
static const dd kovershoot = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_updatenext
#define M2C_CODE_EQUATE_updatenext 1
static const dd kupdatenext = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_setnodeptr
#define M2C_CODE_EQUATE_setnodeptr 1
static const dd ksetnodeptr = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_slopeok
#define M2C_CODE_EQUATE_slopeok 1
static const dd kslopeok = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_skipleader
#define M2C_CODE_EQUATE_skipleader 1
static const dd kskipleader = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_calcdxyz
#define M2C_CODE_EQUATE_calcdxyz 1
static const dd kcalcdxyz = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_9_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_9_skip 1
static const dd k__m2c_macrolocal_9_skip = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_dronecode_0_proc
#define M2C_CODE_EQUATE_dronecode_0_proc 1
static const dd kdronecode_0_proc = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_intocalcdxyz
#define M2C_CODE_EQUATE_intocalcdxyz 1
static const dd kintocalcdxyz = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_skipzcalc
#define M2C_CODE_EQUATE_skipzcalc 1
static const dd kskipzcalc = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_exitslope
#define M2C_CODE_EQUATE_exitslope 1
static const dd kexitslope = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_18_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_18_skip 1
static const dd k__m2c_macrolocal_18_skip = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_exitcheck
#define M2C_CODE_EQUATE_exitcheck 1
static const dd kexitcheck = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_19_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_19_skip 1
static const dd k__m2c_macrolocal_19_skip = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_20_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_20_skip 1
static const dd k__m2c_macrolocal_20_skip = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_gndobjloop
#define M2C_CODE_EQUATE_gndobjloop 1
static const dd kgndobjloop = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_exitgndobj
#define M2C_CODE_EQUATE_exitgndobj 1
static const dd kexitgndobj = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_nextgndobj
#define M2C_CODE_EQUATE_nextgndobj 1
static const dd knextgndobj = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_checkhdgn
#define M2C_CODE_EQUATE_checkhdgn 1
static const dd kcheckhdgn = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_contgndobj
#define M2C_CODE_EQUATE_contgndobj 1
static const dd kcontgndobj = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_checkhdge
#define M2C_CODE_EQUATE_checkhdge 1
static const dd kcheckhdge = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_checkhdgs
#define M2C_CODE_EQUATE_checkhdgs 1
static const dd kcheckhdgs = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_checkhdgw
#define M2C_CODE_EQUATE_checkhdgw 1
static const dd kcheckhdgw = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x1044;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_vehicletype
#define M2C_CODE_EQUATE_vehicletype 1
static const dd kvehicletype = (m2c::near_offset_external(::vehicletype));
#endif
#ifndef M2C_CODE_EQUATE_numvehicles
#define M2C_CODE_EQUATE_numvehicles 1
static const dd knumvehicles = (m2c::near_offset_external(::numvehicles));
#endif
#ifndef M2C_CODE_EQUATE_convoyptr
#define M2C_CODE_EQUATE_convoyptr 1
static const dd kconvoyptr = (m2c::near_offset_external(::convoyptr));
#endif
#ifndef M2C_CODE_EQUATE_routeptr
#define M2C_CODE_EQUATE_routeptr 1
static const dd krouteptr = (m2c::near_offset_external(::routeptr));
#endif
#ifndef M2C_CODE_EQUATE_dist
#define M2C_CODE_EQUATE_dist 1
static const dd kdist = (m2c::near_offset_external(::dist));
#endif
#ifndef M2C_CODE_EQUATE_distfine
#define M2C_CODE_EQUATE_distfine 1
static const dd kdistfine = (m2c::near_offset_external(::distfine));
#endif
#ifndef M2C_CODE_EQUATE_leadvehicle
#define M2C_CODE_EQUATE_leadvehicle 1
static const dd kleadvehicle = (m2c::near_offset_external(::leadvehicle));
#endif
#ifndef M2C_CODE_EQUATE_stopconvoy
#define M2C_CODE_EQUATE_stopconvoy 1
static const dd kstopconvoy = (m2c::near_offset_external(::stopconvoy));
#endif
#ifndef M2C_CODE_EQUATE_sinslope
#define M2C_CODE_EQUATE_sinslope 1
static const dd ksinslope = (m2c::near_offset_external(::sinslope));
#endif
#ifndef M2C_CODE_EQUATE_cosslope
#define M2C_CODE_EQUATE_cosslope 1
static const dd kcosslope = (m2c::near_offset_external(::cosslope));
#endif
#ifndef M2C_CODE_EQUATE_checkswitch
#define M2C_CODE_EQUATE_checkswitch 1
static const dd kcheckswitch = (m2c::near_offset_external(::checkswitch));
#endif
}
#ifndef vehicletype
#define vehicletype m2c::kvehicletype
#endif
#ifndef numvehicles
#define numvehicles m2c::knumvehicles
#endif
#ifndef convoyptr
#define convoyptr m2c::kconvoyptr
#endif
#ifndef routeptr
#define routeptr m2c::krouteptr
#endif
#ifndef dist
#define dist m2c::kdist
#endif
#ifndef distfine
#define distfine m2c::kdistfine
#endif
#ifndef leadvehicle
#define leadvehicle m2c::kleadvehicle
#endif
#ifndef stopconvoy
#define stopconvoy m2c::kstopconvoy
#endif
#ifndef sinslope
#define sinslope m2c::ksinslope
#endif
#ifndef cosslope
#define cosslope m2c::kcosslope
#endif
#ifndef checkswitch
#define checkswitch m2c::kcheckswitch
#endif



#endif
