#ifndef __M2C_DRONELIB_DATA_H__
#define __M2C_DRONELIB_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern db& dronecode;

#ifndef atruck2_1
extern dw& atruck2_1;
#endif
#ifndef etrain1_1
extern dw& etrain1_1;
#endif
#ifndef amobkills
extern db& amobkills;
#endif
#ifndef destroyed
extern db& destroyed;
#endif
#ifndef atrain2_1
extern dw& atrain2_1;
#endif
#ifndef atrain1_1
extern dw& atrain1_1;
#endif
#ifndef etruck2_4
extern dw& etruck2_4;
#endif
#ifndef etruckconvoy1
extern dw& etruckconvoy1;
#endif
#ifndef vshake
extern db& vshake;
#endif
#ifndef m_view
extern viewpoint& m_view;
#endif
#ifndef atruck2_4
extern dw& atruck2_4;
#endif
#ifndef shaketimer
extern dw& shaketimer;
#endif
#ifndef twoplayer
extern db& twoplayer;
#endif
#ifndef etrain2_8
extern dw& etrain2_8;
#endif
#ifndef atrain2
extern dw& atrain2;
#endif
#ifndef etrain1
extern dw& etrain1;
#endif
#ifndef m_mobile
extern mobile& m_mobile;
#endif
#ifndef atrain1
extern dw& atrain1;
#endif
#ifndef oppvtas
extern dw& oppvtas;
#endif
#ifndef relflare
extern db& relflare;
#endif
#ifndef emobkills
extern db& emobkills;
#endif
#ifndef etrain1_8
extern dw& etrain1_8;
#endif
#ifndef etruckconvoy2
extern dw& etruckconvoy2;
#endif
#ifndef hshake
extern db& hshake;
#endif
#ifndef shakepriority
extern db& shakepriority;
#endif
#ifndef wpn_weapon
extern weapon& wpn_weapon;
#endif
#ifndef atruck1_4
extern dw& atruck1_4;
#endif
#ifndef opp_mobile
extern mobile& opp_mobile;
#endif
#ifndef etruck2_1
extern dw& etruck2_1;
#endif
#ifndef atruckconvoy2
extern dw& atruckconvoy2;
#endif
#ifndef nocollisions
extern db& nocollisions;
#endif
#ifndef etruck1_4
extern dw& etruck1_4;
#endif
#ifndef atruck1_1
extern dw& atruck1_1;
#endif
#ifndef relchaff
extern db& relchaff;
#endif
#ifndef atrain2_8
extern dw& atrain2_8;
#endif
#ifndef atruckconvoy1
extern dw& atruckconvoy1;
#endif
#ifndef oppflags1
extern db& oppflags1;
#endif
#ifndef etrain2
extern dw& etrain2;
#endif
#ifndef atrain1_8
extern dw& atrain1_8;
#endif
#ifndef etruck1_1
extern dw& etruck1_1;
#endif
#ifndef vtas
extern dw& vtas;
#endif
#ifndef etrain2_1
extern dw& etrain2_1;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_getdronespeed
#define M2C_CODE_EQUATE_getdronespeed 1
static const dd kgetdronespeed = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_exitdronespeed
#define M2C_CODE_EQUATE_exitdronespeed 1
static const dd kexitdronespeed = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_getdronechaff
#define M2C_CODE_EQUATE_getdronechaff 1
static const dd kgetdronechaff = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_setdronechaff
#define M2C_CODE_EQUATE_setdronechaff 1
static const dd ksetdronechaff = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_clrdronechaff
#define M2C_CODE_EQUATE_clrdronechaff 1
static const dd kclrdronechaff = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_getdroneflare
#define M2C_CODE_EQUATE_getdroneflare 1
static const dd kgetdroneflare = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_setdroneflare
#define M2C_CODE_EQUATE_setdroneflare 1
static const dd ksetdroneflare = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_clrdroneflare
#define M2C_CODE_EQUATE_clrdroneflare 1
static const dd kclrdroneflare = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_getdronealive
#define M2C_CODE_EQUATE_getdronealive 1
static const dd kgetdronealive = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_setdronealive
#define M2C_CODE_EQUATE_setdronealive 1
static const dd ksetdronealive = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_clrdronealive
#define M2C_CODE_EQUATE_clrdronealive 1
static const dd kclrdronealive = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_wpnkilldrone
#define M2C_CODE_EQUATE_wpnkilldrone 1
static const dd kwpnkilldrone = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_skipplayerkill
#define M2C_CODE_EQUATE_skipplayerkill 1
static const dd kskipplayerkill = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_1_skip 1
static const dd k__m2c_macrolocal_1_skip = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_2_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_2_skip 1
static const dd k__m2c_macrolocal_2_skip = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_exitkill
#define M2C_CODE_EQUATE_exitkill 1
static const dd kexitkill = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_contplayerkill
#define M2C_CODE_EQUATE_contplayerkill 1
static const dd kcontplayerkill = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_loopstart
#define M2C_CODE_EQUATE_loopstart 1
static const dd kloopstart = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_contdronekill
#define M2C_CODE_EQUATE_contdronekill 1
static const dd kcontdronekill = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_3_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_3_skip 1
static const dd k__m2c_macrolocal_3_skip = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_4_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_4_skip 1
static const dd k__m2c_macrolocal_4_skip = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel13
#define M2C_CODE_EQUATE_dummylabel13 1
static const dd kdummylabel13 = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_skipkillmob
#define M2C_CODE_EQUATE_skipkillmob 1
static const dd kskipkillmob = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel14
#define M2C_CODE_EQUATE_dummylabel14 1
static const dd kdummylabel14 = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_skipkilltruck
#define M2C_CODE_EQUATE_skipkilltruck 1
static const dd kskipkilltruck = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_stopconvoy
#define M2C_CODE_EQUATE_stopconvoy 1
static const dd kstopconvoy = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel15
#define M2C_CODE_EQUATE_dummylabel15 1
static const dd kdummylabel15 = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel16
#define M2C_CODE_EQUATE_dummylabel16 1
static const dd kdummylabel16 = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel17
#define M2C_CODE_EQUATE_dummylabel17 1
static const dd kdummylabel17 = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel18
#define M2C_CODE_EQUATE_dummylabel18 1
static const dd kdummylabel18 = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_skipkilltrain
#define M2C_CODE_EQUATE_skipkilltrain 1
static const dd kskipkilltrain = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel19
#define M2C_CODE_EQUATE_dummylabel19 1
static const dd kdummylabel19 = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel20
#define M2C_CODE_EQUATE_dummylabel20 1
static const dd kdummylabel20 = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel21
#define M2C_CODE_EQUATE_dummylabel21 1
static const dd kdummylabel21 = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel22
#define M2C_CODE_EQUATE_dummylabel22 1
static const dd kdummylabel22 = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_setdronewpnlock
#define M2C_CODE_EQUATE_setdronewpnlock 1
static const dd ksetdronewpnlock = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_exitwpnlock
#define M2C_CODE_EQUATE_exitwpnlock 1
static const dd kexitwpnlock = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_skipaclock
#define M2C_CODE_EQUATE_skipaclock 1
static const dd kskipaclock = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel23
#define M2C_CODE_EQUATE_dummylabel23 1
static const dd kdummylabel23 = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel24
#define M2C_CODE_EQUATE_dummylabel24 1
static const dd kdummylabel24 = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_getdroneillum
#define M2C_CODE_EQUATE_getdroneillum 1
static const dd kgetdroneillum = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_clrdroneillum
#define M2C_CODE_EQUATE_clrdroneillum 1
static const dd kclrdroneillum = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_setdroneillum
#define M2C_CODE_EQUATE_setdroneillum 1
static const dd ksetdroneillum = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel25
#define M2C_CODE_EQUATE_dummylabel25 1
static const dd kdummylabel25 = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel26
#define M2C_CODE_EQUATE_dummylabel26 1
static const dd kdummylabel26 = 0x1049;
#endif
}



#endif
