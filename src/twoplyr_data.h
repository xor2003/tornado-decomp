#ifndef __M2C_TWOPLYR_DATA_H__
#define __M2C_TWOPLYR_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern mobile& opp_mobile;
extern viewpoint& opp_view;
extern drone_data& opp_drone;
extern dw& oppvtas;
extern db& oppflags1;
extern db& oppflags2;
extern db& oppflags3;
extern comms& tx;
extern comms& rx;
extern db& rxflag;
extern db& txgameend;
extern db& rxgameend;
extern db& twocode;
extern db& weaponcode;

#ifndef countdown
extern dw& countdown;
#endif
#ifndef destroyed
extern db& destroyed;
#endif
#ifndef airarmmode
extern dw& airarmmode;
#endif
#ifndef ecmactive
extern db& ecmactive;
#endif
#ifndef infiniteweapons
extern db& infiniteweapons;
#endif
#ifndef m_mobile
extern mobile& m_mobile;
#endif
#ifndef radarmode
extern dw& radarmode;
#endif
#ifndef dieflag
extern db& dieflag;
#endif
#ifndef vtas
extern dw& vtas;
#endif
#ifndef extstores
extern dw& extstores;
#endif
#ifndef ejected
extern db& ejected;
#endif
#ifndef numradartracks
extern dw& numradartracks;
#endif
#ifndef m_view
extern viewpoint& m_view;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_inittwoplayer
#define M2C_CODE_EQUATE_inittwoplayer 1
static const dd kinittwoplayer = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_txtornadodata
#define M2C_CODE_EQUATE_txtornadodata 1
static const dd ktxtornadodata = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_rxopponentdata
#define M2C_CODE_EQUATE_rxopponentdata 1
static const dd krxopponentdata = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_rxloop1
#define M2C_CODE_EQUATE_rxloop1 1
static const dd krxloop1 = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_1_skip 1
static const dd k__m2c_macrolocal_1_skip = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_rxtimeout
#define M2C_CODE_EQUATE_rxtimeout 1
static const dd krxtimeout = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_rxloop2
#define M2C_CODE_EQUATE_rxloop2 1
static const dd krxloop2 = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel13
#define M2C_CODE_EQUATE_dummylabel13 1
static const dd kdummylabel13 = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_2_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_2_skip 1
static const dd k__m2c_macrolocal_2_skip = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel14
#define M2C_CODE_EQUATE_dummylabel14 1
static const dd kdummylabel14 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_3_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_3_skip 1
static const dd k__m2c_macrolocal_3_skip = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_rxinvalid
#define M2C_CODE_EQUATE_rxinvalid 1
static const dd krxinvalid = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel15
#define M2C_CODE_EQUATE_dummylabel15 1
static const dd kdummylabel15 = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel16
#define M2C_CODE_EQUATE_dummylabel16 1
static const dd kdummylabel16 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel17
#define M2C_CODE_EQUATE_dummylabel17 1
static const dd kdummylabel17 = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel18
#define M2C_CODE_EQUATE_dummylabel18 1
static const dd kdummylabel18 = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel19
#define M2C_CODE_EQUATE_dummylabel19 1
static const dd kdummylabel19 = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel20
#define M2C_CODE_EQUATE_dummylabel20 1
static const dd kdummylabel20 = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel21
#define M2C_CODE_EQUATE_dummylabel21 1
static const dd kdummylabel21 = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel22
#define M2C_CODE_EQUATE_dummylabel22 1
static const dd kdummylabel22 = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel23
#define M2C_CODE_EQUATE_dummylabel23 1
static const dd kdummylabel23 = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_rxoppexit
#define M2C_CODE_EQUATE_rxoppexit 1
static const dd krxoppexit = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1036;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_opp_mobile
#define M2C_CODE_EQUATE_opp_mobile 1
static const dd kopp_mobile = (m2c::near_offset_external(::opp_mobile));
#endif
#ifndef M2C_CODE_EQUATE_opp_view
#define M2C_CODE_EQUATE_opp_view 1
static const dd kopp_view = (m2c::near_offset_external(::opp_view));
#endif
#ifndef M2C_CODE_EQUATE_opp_drone
#define M2C_CODE_EQUATE_opp_drone 1
static const dd kopp_drone = (m2c::near_offset_external(::opp_drone));
#endif
#ifndef M2C_CODE_EQUATE_oppvtas
#define M2C_CODE_EQUATE_oppvtas 1
static const dd koppvtas = (m2c::near_offset_external(::oppvtas));
#endif
#ifndef M2C_CODE_EQUATE_oppflags1
#define M2C_CODE_EQUATE_oppflags1 1
static const dd koppflags1 = (m2c::near_offset_external(::oppflags1));
#endif
#ifndef M2C_CODE_EQUATE_oppflags2
#define M2C_CODE_EQUATE_oppflags2 1
static const dd koppflags2 = (m2c::near_offset_external(::oppflags2));
#endif
#ifndef M2C_CODE_EQUATE_oppflags3
#define M2C_CODE_EQUATE_oppflags3 1
static const dd koppflags3 = (m2c::near_offset_external(::oppflags3));
#endif
#ifndef M2C_CODE_EQUATE_tx
#define M2C_CODE_EQUATE_tx 1
static const dd ktx = (m2c::near_offset_external(::tx));
#endif
#ifndef M2C_CODE_EQUATE_rx
#define M2C_CODE_EQUATE_rx 1
static const dd krx = (m2c::near_offset_external(::rx));
#endif
#ifndef M2C_CODE_EQUATE_rxflag
#define M2C_CODE_EQUATE_rxflag 1
static const dd krxflag = (m2c::near_offset_external(::rxflag));
#endif
#ifndef M2C_CODE_EQUATE_txgameend
#define M2C_CODE_EQUATE_txgameend 1
static const dd ktxgameend = (m2c::near_offset_external(::txgameend));
#endif
#ifndef M2C_CODE_EQUATE_rxgameend
#define M2C_CODE_EQUATE_rxgameend 1
static const dd krxgameend = (m2c::near_offset_external(::rxgameend));
#endif
}
#ifndef opp_mobile
#define opp_mobile m2c::kopp_mobile
#endif
#ifndef opp_view
#define opp_view m2c::kopp_view
#endif
#ifndef opp_drone
#define opp_drone m2c::kopp_drone
#endif
#ifndef oppvtas
#define oppvtas m2c::koppvtas
#endif
#ifndef oppflags1
#define oppflags1 m2c::koppflags1
#endif
#ifndef oppflags2
#define oppflags2 m2c::koppflags2
#endif
#ifndef oppflags3
#define oppflags3 m2c::koppflags3
#endif
#ifndef tx
#define tx m2c::ktx
#endif
#ifndef rx
#define rx m2c::krx
#endif
#ifndef rxflag
#define rxflag m2c::krxflag
#endif
#ifndef txgameend
#define txgameend m2c::ktxgameend
#endif
#ifndef rxgameend
#define rxgameend m2c::krxgameend
#endif



#endif
