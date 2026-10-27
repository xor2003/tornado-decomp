#ifndef __M2C_TRNSFRM_DATA_H__
#define __M2C_TRNSFRM_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& v_sinh;
extern dw& v_cosh;
extern dw& v_sinp;
extern dw& v_cosp;
extern dw& v_sinr;
extern dw& v_cosr;
extern dw& a1;
extern dw& a2;
extern dw& a3;
extern dw& a4;
extern dw& a5;
extern dw& a6;
extern dw& a7;
extern dw& a8;
extern dw& a9;
extern dd& tmprng;
extern db& gencode;

#ifndef slantdy
extern dd& slantdy;
#endif
#ifndef slantdx
extern dd& slantdx;
#endif
#ifndef m_view
extern viewpoint& m_view;
#endif
#ifndef costable
extern dw& costable;
#endif
#ifndef slantdz
extern dd& slantdz;
#endif
#ifndef sintable
extern dw& sintable;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_calctransmatrix
#define M2C_CODE_EQUATE_calctransmatrix 1
static const dd kcalctransmatrix = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_calceyecoords
#define M2C_CODE_EQUATE_calceyecoords 1
static const dd kcalceyecoords = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_calctgtrelco
#define M2C_CODE_EQUATE_calctgtrelco 1
static const dd kcalctgtrelco = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_zrelok
#define M2C_CODE_EQUATE_zrelok 1
static const dd kzrelok = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_27_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_27_skip 1
static const dd k__m2c_macrolocal_27_skip = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_relcoerror
#define M2C_CODE_EQUATE_relcoerror 1
static const dd krelcoerror = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_28_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_28_skip 1
static const dd k__m2c_macrolocal_28_skip = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel10
#define M2C_CODE_EQUATE_dummylabel10 1
static const dd kdummylabel10 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_calc3doffset
#define M2C_CODE_EQUATE_calc3doffset 1
static const dd kcalc3doffset = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_calcrngrelco
#define M2C_CODE_EQUATE_calcrngrelco 1
static const dd kcalcrngrelco = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel11
#define M2C_CODE_EQUATE_dummylabel11 1
static const dd kdummylabel11 = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel12
#define M2C_CODE_EQUATE_dummylabel12 1
static const dd kdummylabel12 = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel13
#define M2C_CODE_EQUATE_dummylabel13 1
static const dd kdummylabel13 = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel14
#define M2C_CODE_EQUATE_dummylabel14 1
static const dd kdummylabel14 = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel15
#define M2C_CODE_EQUATE_dummylabel15 1
static const dd kdummylabel15 = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel16
#define M2C_CODE_EQUATE_dummylabel16 1
static const dd kdummylabel16 = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel17
#define M2C_CODE_EQUATE_dummylabel17 1
static const dd kdummylabel17 = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel18
#define M2C_CODE_EQUATE_dummylabel18 1
static const dd kdummylabel18 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel19
#define M2C_CODE_EQUATE_dummylabel19 1
static const dd kdummylabel19 = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel20
#define M2C_CODE_EQUATE_dummylabel20 1
static const dd kdummylabel20 = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel21
#define M2C_CODE_EQUATE_dummylabel21 1
static const dd kdummylabel21 = 0x1027;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_v_sinh
#define M2C_CODE_EQUATE_v_sinh 1
static const dd kv_sinh = (m2c::near_offset_external(::v_sinh));
#endif
#ifndef M2C_CODE_EQUATE_v_cosh
#define M2C_CODE_EQUATE_v_cosh 1
static const dd kv_cosh = (m2c::near_offset_external(::v_cosh));
#endif
#ifndef M2C_CODE_EQUATE_v_sinp
#define M2C_CODE_EQUATE_v_sinp 1
static const dd kv_sinp = (m2c::near_offset_external(::v_sinp));
#endif
#ifndef M2C_CODE_EQUATE_v_cosp
#define M2C_CODE_EQUATE_v_cosp 1
static const dd kv_cosp = (m2c::near_offset_external(::v_cosp));
#endif
#ifndef M2C_CODE_EQUATE_v_sinr
#define M2C_CODE_EQUATE_v_sinr 1
static const dd kv_sinr = (m2c::near_offset_external(::v_sinr));
#endif
#ifndef M2C_CODE_EQUATE_v_cosr
#define M2C_CODE_EQUATE_v_cosr 1
static const dd kv_cosr = (m2c::near_offset_external(::v_cosr));
#endif
#ifndef M2C_CODE_EQUATE_a1
#define M2C_CODE_EQUATE_a1 1
static const dd ka1 = (m2c::near_offset_external(::a1));
#endif
#ifndef M2C_CODE_EQUATE_a2
#define M2C_CODE_EQUATE_a2 1
static const dd ka2 = (m2c::near_offset_external(::a2));
#endif
#ifndef M2C_CODE_EQUATE_a3
#define M2C_CODE_EQUATE_a3 1
static const dd ka3 = (m2c::near_offset_external(::a3));
#endif
#ifndef M2C_CODE_EQUATE_a4
#define M2C_CODE_EQUATE_a4 1
static const dd ka4 = (m2c::near_offset_external(::a4));
#endif
#ifndef M2C_CODE_EQUATE_a5
#define M2C_CODE_EQUATE_a5 1
static const dd ka5 = (m2c::near_offset_external(::a5));
#endif
#ifndef M2C_CODE_EQUATE_a6
#define M2C_CODE_EQUATE_a6 1
static const dd ka6 = (m2c::near_offset_external(::a6));
#endif
#ifndef M2C_CODE_EQUATE_a7
#define M2C_CODE_EQUATE_a7 1
static const dd ka7 = (m2c::near_offset_external(::a7));
#endif
#ifndef M2C_CODE_EQUATE_a8
#define M2C_CODE_EQUATE_a8 1
static const dd ka8 = (m2c::near_offset_external(::a8));
#endif
#ifndef M2C_CODE_EQUATE_a9
#define M2C_CODE_EQUATE_a9 1
static const dd ka9 = (m2c::near_offset_external(::a9));
#endif
#ifndef M2C_CODE_EQUATE_tmprng
#define M2C_CODE_EQUATE_tmprng 1
static const dd ktmprng = (m2c::near_offset_external(::tmprng));
#endif
}
#ifndef v_sinh
#define v_sinh m2c::kv_sinh
#endif
#ifndef v_cosh
#define v_cosh m2c::kv_cosh
#endif
#ifndef v_sinp
#define v_sinp m2c::kv_sinp
#endif
#ifndef v_cosp
#define v_cosp m2c::kv_cosp
#endif
#ifndef v_sinr
#define v_sinr m2c::kv_sinr
#endif
#ifndef v_cosr
#define v_cosr m2c::kv_cosr
#endif
#ifndef a1
#define a1 m2c::ka1
#endif
#ifndef a2
#define a2 m2c::ka2
#endif
#ifndef a3
#define a3 m2c::ka3
#endif
#ifndef a4
#define a4 m2c::ka4
#endif
#ifndef a5
#define a5 m2c::ka5
#endif
#ifndef a6
#define a6 m2c::ka6
#endif
#ifndef a7
#define a7 m2c::ka7
#endif
#ifndef a8
#define a8 m2c::ka8
#endif
#ifndef a9
#define a9 m2c::ka9
#endif
#ifndef tmprng
#define tmprng m2c::ktmprng
#endif



#endif
