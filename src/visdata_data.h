#ifndef __M2C_VISDATA_DATA_H__
#define __M2C_VISDATA_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern viewpoint& v_view;
extern dw& viewmode;
extern dw& viewrotatemode;
extern dw& zscaled;
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
extern dw& b1;
extern dw& b2;
extern dw& b3;
extern dw& b4;
extern dw& b5;
extern dw& b6;
extern dw& b7;
extern dw& b8;
extern dw& b9;
extern dw& c1;
extern dw& c2;
extern dw& c3;
extern dw& c4;
extern dw& c5;
extern dw& c6;
extern dw& c7;
extern dw& c8;
extern dw& c9;
extern dw& d1;
extern dw& d2;
extern dw& d3;
extern dw& d4;
extern dw& d5;
extern dw& d6;
extern dw& d7;
extern dw& d8;
extern dw& d9;
extern dw (& xsx)[129];
extern dw (& xsy)[129];
extern dw (& xsz)[17];
extern dw (& ysx)[129];
extern dw (& ysy)[129];
extern dw (& ysz)[17];
extern dw (& zsx)[129];
extern dw (& zsy)[129];
extern dw (& zsz)[17];
extern dw (& xgx)[65];
extern dw (& xgy)[65];
extern dw (& xgz)[65];
extern dw (& ygx)[65];
extern dw (& ygy)[65];
extern dw (& ygz)[65];
extern dw (& zgx)[65];
extern dw (& zgy)[65];
extern dw (& zgz)[65];
extern dw (& r_xgx)[65];
extern dw (& r_xgy)[65];
extern dw (& r_xgz)[65];
extern dw (& r_ygx)[65];
extern dw (& r_ygy)[65];
extern dw (& r_ygz)[65];
extern dw (& r_zgx)[65];
extern dw (& r_zgy)[65];
extern dw (& r_zgz)[65];
extern dw& xgridsize;
extern dw& ygridsize;
extern dw& zgridsize;
extern db& objscaleconvert;
extern db& dummyec2367ed_data_1009_589;
extern dw& xgrid1;
extern dw& ygrid1;
extern dw& xrel1;
extern dw& yrel1;
extern dw& zrel1;
extern dw& xe01;
extern dw& ye01;
extern dw& ze01;
extern dw& xe01_2;
extern dw& ye01_2;
extern dw& ze01_2;
extern dw& xe01_4;
extern dw& ye01_4;
extern dw& ze01_4;
extern dw& xe01_8;
extern dw& ye01_8;
extern dw& ze01_8;
extern dw& xe01_16;
extern dw& ye01_16;
extern dw& ze01_16;
extern dw& xpos1;
extern dw& ypos1;
extern dw& zpos1;
extern db& valid1_2;
extern db& valid1_4;
extern db& valid1_8;
extern db& valid1_16;
extern dw& xgrid2;
extern dw& ygrid2;
extern dw& xrel2;
extern dw& yrel2;
extern dw& zrel2;
extern dw& xe02;
extern dw& ye02;
extern dw& ze02;
extern dw& xpos2;
extern dw& ypos2;
extern dw& zpos2;
extern dw& xgrid8;
extern dw& ygrid8;
extern dw& xrel8;
extern dw& yrel8;
extern dw& zrel8;
extern dw& xe08;
extern dw& ye08;
extern dw& ze08;
extern dw& xpos8;
extern dw& ypos8;
extern dw& zpos8;
extern dw& xgrid16;
extern dw& ygrid16;
extern dw& xrel16;
extern dw& yrel16;
extern dw& zrel16;
extern dw& xe016;
extern dw& ye016;
extern dw& ze016;
extern dw& xpos16;
extern dw& ypos16;
extern dw& zpos16;
extern dw& xpos;
extern dw& ypos;
extern dw& zpos;
extern dw (& xe)[128];
extern dw (& ye)[128];
extern dw (& ze)[128];
extern dw (& xcrt)[128];
extern db& ycrt;
extern db& outcode;
extern dw (& dummyec2367ed_data_1486_693)[127];
extern dw (& crtbuffer)[1024];
extern dw& crtbufptr;
extern db& col1;
extern db& col2;
extern db (& stndpoly4)[5];
extern db (& stndpoly3)[4];
extern objectdata (& objectbuffer)[512];
extern dw& objectbufptr;
extern dw (& objectdist1)[65];
extern dw (& objectdist2)[2];
extern dw (& objectdist3)[2];
extern dw (& farobjectdist)[65];
extern dw& sctrscalemode;
extern dw& mapindex;
extern dw& xsecscan;
extern dw& ysecscan;
extern db (& nomansland)[2];
extern dw& numvissctrs;
extern dw& sctrscalefactor;
extern dw& dummyec2367ed_data_46ad_752;
extern dw& dummyec2367ed_data_46af_753;
extern dw& dummyec2367ed_data_46b1_754;
extern dw& sctrscaleypos;
extern dw& dummyec2367ed_data_46b5_758;
extern dw& dummyec2367ed_data_46b7_759;
extern dw& dummyec2367ed_data_46b9_760;
extern dw& secscancnt1;
extern dw& secscanoff1;
extern dw& secscancnt2;
extern dw& secscanoff2;
extern db (& copybuffer)[1500];
extern db (& cyclic)[2];
extern db (& objanimflags)[2];
extern objectdata& flatobject;
extern dw& mobsortptr;
extern mobsort (& mobsortbins)[256];
extern dw& nummobiles;
extern word& colours;
extern word& objectbufend;

namespace m2c{
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_v_view
#define M2C_CODE_EQUATE_v_view 1
static const dd kv_view = (m2c::near_offset_external(::v_view));
#endif
#ifndef M2C_CODE_EQUATE_viewmode
#define M2C_CODE_EQUATE_viewmode 1
static const dd kviewmode = (m2c::near_offset_external(::viewmode));
#endif
#ifndef M2C_CODE_EQUATE_viewrotatemode
#define M2C_CODE_EQUATE_viewrotatemode 1
static const dd kviewrotatemode = (m2c::near_offset_external(::viewrotatemode));
#endif
#ifndef M2C_CODE_EQUATE_zscaled
#define M2C_CODE_EQUATE_zscaled 1
static const dd kzscaled = (m2c::near_offset_external(::zscaled));
#endif
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
#ifndef M2C_CODE_EQUATE_b1
#define M2C_CODE_EQUATE_b1 1
static const dd kb1 = (m2c::near_offset_external(::b1));
#endif
#ifndef M2C_CODE_EQUATE_b2
#define M2C_CODE_EQUATE_b2 1
static const dd kb2 = (m2c::near_offset_external(::b2));
#endif
#ifndef M2C_CODE_EQUATE_b3
#define M2C_CODE_EQUATE_b3 1
static const dd kb3 = (m2c::near_offset_external(::b3));
#endif
#ifndef M2C_CODE_EQUATE_b4
#define M2C_CODE_EQUATE_b4 1
static const dd kb4 = (m2c::near_offset_external(::b4));
#endif
#ifndef M2C_CODE_EQUATE_b5
#define M2C_CODE_EQUATE_b5 1
static const dd kb5 = (m2c::near_offset_external(::b5));
#endif
#ifndef M2C_CODE_EQUATE_b6
#define M2C_CODE_EQUATE_b6 1
static const dd kb6 = (m2c::near_offset_external(::b6));
#endif
#ifndef M2C_CODE_EQUATE_b7
#define M2C_CODE_EQUATE_b7 1
static const dd kb7 = (m2c::near_offset_external(::b7));
#endif
#ifndef M2C_CODE_EQUATE_b8
#define M2C_CODE_EQUATE_b8 1
static const dd kb8 = (m2c::near_offset_external(::b8));
#endif
#ifndef M2C_CODE_EQUATE_b9
#define M2C_CODE_EQUATE_b9 1
static const dd kb9 = (m2c::near_offset_external(::b9));
#endif
#ifndef M2C_CODE_EQUATE_c1
#define M2C_CODE_EQUATE_c1 1
static const dd kc1 = (m2c::near_offset_external(::c1));
#endif
#ifndef M2C_CODE_EQUATE_c2
#define M2C_CODE_EQUATE_c2 1
static const dd kc2 = (m2c::near_offset_external(::c2));
#endif
#ifndef M2C_CODE_EQUATE_c3
#define M2C_CODE_EQUATE_c3 1
static const dd kc3 = (m2c::near_offset_external(::c3));
#endif
#ifndef M2C_CODE_EQUATE_c4
#define M2C_CODE_EQUATE_c4 1
static const dd kc4 = (m2c::near_offset_external(::c4));
#endif
#ifndef M2C_CODE_EQUATE_c5
#define M2C_CODE_EQUATE_c5 1
static const dd kc5 = (m2c::near_offset_external(::c5));
#endif
#ifndef M2C_CODE_EQUATE_c6
#define M2C_CODE_EQUATE_c6 1
static const dd kc6 = (m2c::near_offset_external(::c6));
#endif
#ifndef M2C_CODE_EQUATE_c7
#define M2C_CODE_EQUATE_c7 1
static const dd kc7 = (m2c::near_offset_external(::c7));
#endif
#ifndef M2C_CODE_EQUATE_c8
#define M2C_CODE_EQUATE_c8 1
static const dd kc8 = (m2c::near_offset_external(::c8));
#endif
#ifndef M2C_CODE_EQUATE_c9
#define M2C_CODE_EQUATE_c9 1
static const dd kc9 = (m2c::near_offset_external(::c9));
#endif
#ifndef M2C_CODE_EQUATE_d1
#define M2C_CODE_EQUATE_d1 1
static const dd kd1 = (m2c::near_offset_external(::d1));
#endif
#ifndef M2C_CODE_EQUATE_d2
#define M2C_CODE_EQUATE_d2 1
static const dd kd2 = (m2c::near_offset_external(::d2));
#endif
#ifndef M2C_CODE_EQUATE_d3
#define M2C_CODE_EQUATE_d3 1
static const dd kd3 = (m2c::near_offset_external(::d3));
#endif
#ifndef M2C_CODE_EQUATE_d4
#define M2C_CODE_EQUATE_d4 1
static const dd kd4 = (m2c::near_offset_external(::d4));
#endif
#ifndef M2C_CODE_EQUATE_d5
#define M2C_CODE_EQUATE_d5 1
static const dd kd5 = (m2c::near_offset_external(::d5));
#endif
#ifndef M2C_CODE_EQUATE_d6
#define M2C_CODE_EQUATE_d6 1
static const dd kd6 = (m2c::near_offset_external(::d6));
#endif
#ifndef M2C_CODE_EQUATE_d7
#define M2C_CODE_EQUATE_d7 1
static const dd kd7 = (m2c::near_offset_external(::d7));
#endif
#ifndef M2C_CODE_EQUATE_d8
#define M2C_CODE_EQUATE_d8 1
static const dd kd8 = (m2c::near_offset_external(::d8));
#endif
#ifndef M2C_CODE_EQUATE_d9
#define M2C_CODE_EQUATE_d9 1
static const dd kd9 = (m2c::near_offset_external(::d9));
#endif
#ifndef M2C_CODE_EQUATE_xsx
#define M2C_CODE_EQUATE_xsx 1
static const dd kxsx = (m2c::near_offset_external(::xsx));
#endif
#ifndef M2C_CODE_EQUATE_xsy
#define M2C_CODE_EQUATE_xsy 1
static const dd kxsy = (m2c::near_offset_external(::xsy));
#endif
#ifndef M2C_CODE_EQUATE_xsz
#define M2C_CODE_EQUATE_xsz 1
static const dd kxsz = (m2c::near_offset_external(::xsz));
#endif
#ifndef M2C_CODE_EQUATE_ysx
#define M2C_CODE_EQUATE_ysx 1
static const dd kysx = (m2c::near_offset_external(::ysx));
#endif
#ifndef M2C_CODE_EQUATE_ysy
#define M2C_CODE_EQUATE_ysy 1
static const dd kysy = (m2c::near_offset_external(::ysy));
#endif
#ifndef M2C_CODE_EQUATE_ysz
#define M2C_CODE_EQUATE_ysz 1
static const dd kysz = (m2c::near_offset_external(::ysz));
#endif
#ifndef M2C_CODE_EQUATE_zsx
#define M2C_CODE_EQUATE_zsx 1
static const dd kzsx = (m2c::near_offset_external(::zsx));
#endif
#ifndef M2C_CODE_EQUATE_zsy
#define M2C_CODE_EQUATE_zsy 1
static const dd kzsy = (m2c::near_offset_external(::zsy));
#endif
#ifndef M2C_CODE_EQUATE_zsz
#define M2C_CODE_EQUATE_zsz 1
static const dd kzsz = (m2c::near_offset_external(::zsz));
#endif
#ifndef M2C_CODE_EQUATE_xgx
#define M2C_CODE_EQUATE_xgx 1
static const dd kxgx = (m2c::near_offset_external(::xgx));
#endif
#ifndef M2C_CODE_EQUATE_xgy
#define M2C_CODE_EQUATE_xgy 1
static const dd kxgy = (m2c::near_offset_external(::xgy));
#endif
#ifndef M2C_CODE_EQUATE_xgz
#define M2C_CODE_EQUATE_xgz 1
static const dd kxgz = (m2c::near_offset_external(::xgz));
#endif
#ifndef M2C_CODE_EQUATE_ygx
#define M2C_CODE_EQUATE_ygx 1
static const dd kygx = (m2c::near_offset_external(::ygx));
#endif
#ifndef M2C_CODE_EQUATE_ygy
#define M2C_CODE_EQUATE_ygy 1
static const dd kygy = (m2c::near_offset_external(::ygy));
#endif
#ifndef M2C_CODE_EQUATE_ygz
#define M2C_CODE_EQUATE_ygz 1
static const dd kygz = (m2c::near_offset_external(::ygz));
#endif
#ifndef M2C_CODE_EQUATE_zgx
#define M2C_CODE_EQUATE_zgx 1
static const dd kzgx = (m2c::near_offset_external(::zgx));
#endif
#ifndef M2C_CODE_EQUATE_zgy
#define M2C_CODE_EQUATE_zgy 1
static const dd kzgy = (m2c::near_offset_external(::zgy));
#endif
#ifndef M2C_CODE_EQUATE_zgz
#define M2C_CODE_EQUATE_zgz 1
static const dd kzgz = (m2c::near_offset_external(::zgz));
#endif
#ifndef M2C_CODE_EQUATE_r_xgx
#define M2C_CODE_EQUATE_r_xgx 1
static const dd kr_xgx = (m2c::near_offset_external(::r_xgx));
#endif
#ifndef M2C_CODE_EQUATE_r_xgy
#define M2C_CODE_EQUATE_r_xgy 1
static const dd kr_xgy = (m2c::near_offset_external(::r_xgy));
#endif
#ifndef M2C_CODE_EQUATE_r_xgz
#define M2C_CODE_EQUATE_r_xgz 1
static const dd kr_xgz = (m2c::near_offset_external(::r_xgz));
#endif
#ifndef M2C_CODE_EQUATE_r_ygx
#define M2C_CODE_EQUATE_r_ygx 1
static const dd kr_ygx = (m2c::near_offset_external(::r_ygx));
#endif
#ifndef M2C_CODE_EQUATE_r_ygy
#define M2C_CODE_EQUATE_r_ygy 1
static const dd kr_ygy = (m2c::near_offset_external(::r_ygy));
#endif
#ifndef M2C_CODE_EQUATE_r_ygz
#define M2C_CODE_EQUATE_r_ygz 1
static const dd kr_ygz = (m2c::near_offset_external(::r_ygz));
#endif
#ifndef M2C_CODE_EQUATE_r_zgx
#define M2C_CODE_EQUATE_r_zgx 1
static const dd kr_zgx = (m2c::near_offset_external(::r_zgx));
#endif
#ifndef M2C_CODE_EQUATE_r_zgy
#define M2C_CODE_EQUATE_r_zgy 1
static const dd kr_zgy = (m2c::near_offset_external(::r_zgy));
#endif
#ifndef M2C_CODE_EQUATE_r_zgz
#define M2C_CODE_EQUATE_r_zgz 1
static const dd kr_zgz = (m2c::near_offset_external(::r_zgz));
#endif
#ifndef M2C_CODE_EQUATE_xgridsize
#define M2C_CODE_EQUATE_xgridsize 1
static const dd kxgridsize = (m2c::near_offset_external(::xgridsize));
#endif
#ifndef M2C_CODE_EQUATE_ygridsize
#define M2C_CODE_EQUATE_ygridsize 1
static const dd kygridsize = (m2c::near_offset_external(::ygridsize));
#endif
#ifndef M2C_CODE_EQUATE_zgridsize
#define M2C_CODE_EQUATE_zgridsize 1
static const dd kzgridsize = (m2c::near_offset_external(::zgridsize));
#endif
#ifndef M2C_CODE_EQUATE_objscaleconvert
#define M2C_CODE_EQUATE_objscaleconvert 1
static const dd kobjscaleconvert = (m2c::near_offset_external(::objscaleconvert));
#endif
#ifndef M2C_CODE_EQUATE_xgrid1
#define M2C_CODE_EQUATE_xgrid1 1
static const dd kxgrid1 = (m2c::near_offset_external(::xgrid1));
#endif
#ifndef M2C_CODE_EQUATE_ygrid1
#define M2C_CODE_EQUATE_ygrid1 1
static const dd kygrid1 = (m2c::near_offset_external(::ygrid1));
#endif
#ifndef M2C_CODE_EQUATE_xrel1
#define M2C_CODE_EQUATE_xrel1 1
static const dd kxrel1 = (m2c::near_offset_external(::xrel1));
#endif
#ifndef M2C_CODE_EQUATE_yrel1
#define M2C_CODE_EQUATE_yrel1 1
static const dd kyrel1 = (m2c::near_offset_external(::yrel1));
#endif
#ifndef M2C_CODE_EQUATE_zrel1
#define M2C_CODE_EQUATE_zrel1 1
static const dd kzrel1 = (m2c::near_offset_external(::zrel1));
#endif
#ifndef M2C_CODE_EQUATE_xe01
#define M2C_CODE_EQUATE_xe01 1
static const dd kxe01 = (m2c::near_offset_external(::xe01));
#endif
#ifndef M2C_CODE_EQUATE_ye01
#define M2C_CODE_EQUATE_ye01 1
static const dd kye01 = (m2c::near_offset_external(::ye01));
#endif
#ifndef M2C_CODE_EQUATE_ze01
#define M2C_CODE_EQUATE_ze01 1
static const dd kze01 = (m2c::near_offset_external(::ze01));
#endif
#ifndef M2C_CODE_EQUATE_xe01_2
#define M2C_CODE_EQUATE_xe01_2 1
static const dd kxe01_2 = (m2c::near_offset_external(::xe01_2));
#endif
#ifndef M2C_CODE_EQUATE_ye01_2
#define M2C_CODE_EQUATE_ye01_2 1
static const dd kye01_2 = (m2c::near_offset_external(::ye01_2));
#endif
#ifndef M2C_CODE_EQUATE_ze01_2
#define M2C_CODE_EQUATE_ze01_2 1
static const dd kze01_2 = (m2c::near_offset_external(::ze01_2));
#endif
#ifndef M2C_CODE_EQUATE_xe01_4
#define M2C_CODE_EQUATE_xe01_4 1
static const dd kxe01_4 = (m2c::near_offset_external(::xe01_4));
#endif
#ifndef M2C_CODE_EQUATE_ye01_4
#define M2C_CODE_EQUATE_ye01_4 1
static const dd kye01_4 = (m2c::near_offset_external(::ye01_4));
#endif
#ifndef M2C_CODE_EQUATE_ze01_4
#define M2C_CODE_EQUATE_ze01_4 1
static const dd kze01_4 = (m2c::near_offset_external(::ze01_4));
#endif
#ifndef M2C_CODE_EQUATE_xe01_8
#define M2C_CODE_EQUATE_xe01_8 1
static const dd kxe01_8 = (m2c::near_offset_external(::xe01_8));
#endif
#ifndef M2C_CODE_EQUATE_ye01_8
#define M2C_CODE_EQUATE_ye01_8 1
static const dd kye01_8 = (m2c::near_offset_external(::ye01_8));
#endif
#ifndef M2C_CODE_EQUATE_ze01_8
#define M2C_CODE_EQUATE_ze01_8 1
static const dd kze01_8 = (m2c::near_offset_external(::ze01_8));
#endif
#ifndef M2C_CODE_EQUATE_xe01_16
#define M2C_CODE_EQUATE_xe01_16 1
static const dd kxe01_16 = (m2c::near_offset_external(::xe01_16));
#endif
#ifndef M2C_CODE_EQUATE_ye01_16
#define M2C_CODE_EQUATE_ye01_16 1
static const dd kye01_16 = (m2c::near_offset_external(::ye01_16));
#endif
#ifndef M2C_CODE_EQUATE_ze01_16
#define M2C_CODE_EQUATE_ze01_16 1
static const dd kze01_16 = (m2c::near_offset_external(::ze01_16));
#endif
#ifndef M2C_CODE_EQUATE_xpos1
#define M2C_CODE_EQUATE_xpos1 1
static const dd kxpos1 = (m2c::near_offset_external(::xpos1));
#endif
#ifndef M2C_CODE_EQUATE_ypos1
#define M2C_CODE_EQUATE_ypos1 1
static const dd kypos1 = (m2c::near_offset_external(::ypos1));
#endif
#ifndef M2C_CODE_EQUATE_zpos1
#define M2C_CODE_EQUATE_zpos1 1
static const dd kzpos1 = (m2c::near_offset_external(::zpos1));
#endif
#ifndef M2C_CODE_EQUATE_valid1_2
#define M2C_CODE_EQUATE_valid1_2 1
static const dd kvalid1_2 = (m2c::near_offset_external(::valid1_2));
#endif
#ifndef M2C_CODE_EQUATE_valid1_4
#define M2C_CODE_EQUATE_valid1_4 1
static const dd kvalid1_4 = (m2c::near_offset_external(::valid1_4));
#endif
#ifndef M2C_CODE_EQUATE_valid1_8
#define M2C_CODE_EQUATE_valid1_8 1
static const dd kvalid1_8 = (m2c::near_offset_external(::valid1_8));
#endif
#ifndef M2C_CODE_EQUATE_valid1_16
#define M2C_CODE_EQUATE_valid1_16 1
static const dd kvalid1_16 = (m2c::near_offset_external(::valid1_16));
#endif
#ifndef M2C_CODE_EQUATE_xgrid2
#define M2C_CODE_EQUATE_xgrid2 1
static const dd kxgrid2 = (m2c::near_offset_external(::xgrid2));
#endif
#ifndef M2C_CODE_EQUATE_ygrid2
#define M2C_CODE_EQUATE_ygrid2 1
static const dd kygrid2 = (m2c::near_offset_external(::ygrid2));
#endif
#ifndef M2C_CODE_EQUATE_xrel2
#define M2C_CODE_EQUATE_xrel2 1
static const dd kxrel2 = (m2c::near_offset_external(::xrel2));
#endif
#ifndef M2C_CODE_EQUATE_yrel2
#define M2C_CODE_EQUATE_yrel2 1
static const dd kyrel2 = (m2c::near_offset_external(::yrel2));
#endif
#ifndef M2C_CODE_EQUATE_zrel2
#define M2C_CODE_EQUATE_zrel2 1
static const dd kzrel2 = (m2c::near_offset_external(::zrel2));
#endif
#ifndef M2C_CODE_EQUATE_xe02
#define M2C_CODE_EQUATE_xe02 1
static const dd kxe02 = (m2c::near_offset_external(::xe02));
#endif
#ifndef M2C_CODE_EQUATE_ye02
#define M2C_CODE_EQUATE_ye02 1
static const dd kye02 = (m2c::near_offset_external(::ye02));
#endif
#ifndef M2C_CODE_EQUATE_ze02
#define M2C_CODE_EQUATE_ze02 1
static const dd kze02 = (m2c::near_offset_external(::ze02));
#endif
#ifndef M2C_CODE_EQUATE_xpos2
#define M2C_CODE_EQUATE_xpos2 1
static const dd kxpos2 = (m2c::near_offset_external(::xpos2));
#endif
#ifndef M2C_CODE_EQUATE_ypos2
#define M2C_CODE_EQUATE_ypos2 1
static const dd kypos2 = (m2c::near_offset_external(::ypos2));
#endif
#ifndef M2C_CODE_EQUATE_zpos2
#define M2C_CODE_EQUATE_zpos2 1
static const dd kzpos2 = (m2c::near_offset_external(::zpos2));
#endif
#ifndef M2C_CODE_EQUATE_xgrid8
#define M2C_CODE_EQUATE_xgrid8 1
static const dd kxgrid8 = (m2c::near_offset_external(::xgrid8));
#endif
#ifndef M2C_CODE_EQUATE_ygrid8
#define M2C_CODE_EQUATE_ygrid8 1
static const dd kygrid8 = (m2c::near_offset_external(::ygrid8));
#endif
#ifndef M2C_CODE_EQUATE_xrel8
#define M2C_CODE_EQUATE_xrel8 1
static const dd kxrel8 = (m2c::near_offset_external(::xrel8));
#endif
#ifndef M2C_CODE_EQUATE_yrel8
#define M2C_CODE_EQUATE_yrel8 1
static const dd kyrel8 = (m2c::near_offset_external(::yrel8));
#endif
#ifndef M2C_CODE_EQUATE_zrel8
#define M2C_CODE_EQUATE_zrel8 1
static const dd kzrel8 = (m2c::near_offset_external(::zrel8));
#endif
#ifndef M2C_CODE_EQUATE_xe08
#define M2C_CODE_EQUATE_xe08 1
static const dd kxe08 = (m2c::near_offset_external(::xe08));
#endif
#ifndef M2C_CODE_EQUATE_ye08
#define M2C_CODE_EQUATE_ye08 1
static const dd kye08 = (m2c::near_offset_external(::ye08));
#endif
#ifndef M2C_CODE_EQUATE_ze08
#define M2C_CODE_EQUATE_ze08 1
static const dd kze08 = (m2c::near_offset_external(::ze08));
#endif
#ifndef M2C_CODE_EQUATE_xpos8
#define M2C_CODE_EQUATE_xpos8 1
static const dd kxpos8 = (m2c::near_offset_external(::xpos8));
#endif
#ifndef M2C_CODE_EQUATE_ypos8
#define M2C_CODE_EQUATE_ypos8 1
static const dd kypos8 = (m2c::near_offset_external(::ypos8));
#endif
#ifndef M2C_CODE_EQUATE_zpos8
#define M2C_CODE_EQUATE_zpos8 1
static const dd kzpos8 = (m2c::near_offset_external(::zpos8));
#endif
#ifndef M2C_CODE_EQUATE_xgrid16
#define M2C_CODE_EQUATE_xgrid16 1
static const dd kxgrid16 = (m2c::near_offset_external(::xgrid16));
#endif
#ifndef M2C_CODE_EQUATE_ygrid16
#define M2C_CODE_EQUATE_ygrid16 1
static const dd kygrid16 = (m2c::near_offset_external(::ygrid16));
#endif
#ifndef M2C_CODE_EQUATE_xrel16
#define M2C_CODE_EQUATE_xrel16 1
static const dd kxrel16 = (m2c::near_offset_external(::xrel16));
#endif
#ifndef M2C_CODE_EQUATE_yrel16
#define M2C_CODE_EQUATE_yrel16 1
static const dd kyrel16 = (m2c::near_offset_external(::yrel16));
#endif
#ifndef M2C_CODE_EQUATE_zrel16
#define M2C_CODE_EQUATE_zrel16 1
static const dd kzrel16 = (m2c::near_offset_external(::zrel16));
#endif
#ifndef M2C_CODE_EQUATE_xe016
#define M2C_CODE_EQUATE_xe016 1
static const dd kxe016 = (m2c::near_offset_external(::xe016));
#endif
#ifndef M2C_CODE_EQUATE_ye016
#define M2C_CODE_EQUATE_ye016 1
static const dd kye016 = (m2c::near_offset_external(::ye016));
#endif
#ifndef M2C_CODE_EQUATE_ze016
#define M2C_CODE_EQUATE_ze016 1
static const dd kze016 = (m2c::near_offset_external(::ze016));
#endif
#ifndef M2C_CODE_EQUATE_xpos16
#define M2C_CODE_EQUATE_xpos16 1
static const dd kxpos16 = (m2c::near_offset_external(::xpos16));
#endif
#ifndef M2C_CODE_EQUATE_ypos16
#define M2C_CODE_EQUATE_ypos16 1
static const dd kypos16 = (m2c::near_offset_external(::ypos16));
#endif
#ifndef M2C_CODE_EQUATE_zpos16
#define M2C_CODE_EQUATE_zpos16 1
static const dd kzpos16 = (m2c::near_offset_external(::zpos16));
#endif
#ifndef M2C_CODE_EQUATE_xpos
#define M2C_CODE_EQUATE_xpos 1
static const dd kxpos = (m2c::near_offset_external(::xpos));
#endif
#ifndef M2C_CODE_EQUATE_ypos
#define M2C_CODE_EQUATE_ypos 1
static const dd kypos = (m2c::near_offset_external(::ypos));
#endif
#ifndef M2C_CODE_EQUATE_zpos
#define M2C_CODE_EQUATE_zpos 1
static const dd kzpos = (m2c::near_offset_external(::zpos));
#endif
#ifndef M2C_CODE_EQUATE_xe
#define M2C_CODE_EQUATE_xe 1
static const dd kxe = (m2c::near_offset_external(::xe));
#endif
#ifndef M2C_CODE_EQUATE_ye
#define M2C_CODE_EQUATE_ye 1
static const dd kye = (m2c::near_offset_external(::ye));
#endif
#ifndef M2C_CODE_EQUATE_ze
#define M2C_CODE_EQUATE_ze 1
static const dd kze = (m2c::near_offset_external(::ze));
#endif
#ifndef M2C_CODE_EQUATE_xcrt
#define M2C_CODE_EQUATE_xcrt 1
static const dd kxcrt = (m2c::near_offset_external(::xcrt));
#endif
#ifndef M2C_CODE_EQUATE_ycrt
#define M2C_CODE_EQUATE_ycrt 1
static const dd kycrt = (m2c::near_offset_external(::ycrt));
#endif
#ifndef M2C_CODE_EQUATE_outcode
#define M2C_CODE_EQUATE_outcode 1
static const dd koutcode = (m2c::near_offset_external(::outcode));
#endif
#ifndef M2C_CODE_EQUATE_crtbuffer
#define M2C_CODE_EQUATE_crtbuffer 1
static const dd kcrtbuffer = (m2c::near_offset_external(::crtbuffer));
#endif
#ifndef M2C_CODE_EQUATE_crtbufptr
#define M2C_CODE_EQUATE_crtbufptr 1
static const dd kcrtbufptr = (m2c::near_offset_external(::crtbufptr));
#endif
#ifndef M2C_CODE_EQUATE_col1
#define M2C_CODE_EQUATE_col1 1
static const dd kcol1 = (m2c::near_offset_external(::col1));
#endif
#ifndef M2C_CODE_EQUATE_col2
#define M2C_CODE_EQUATE_col2 1
static const dd kcol2 = (m2c::near_offset_external(::col2));
#endif
#ifndef M2C_CODE_EQUATE_stndpoly4
#define M2C_CODE_EQUATE_stndpoly4 1
static const dd kstndpoly4 = (m2c::near_offset_external(::stndpoly4));
#endif
#ifndef M2C_CODE_EQUATE_stndpoly3
#define M2C_CODE_EQUATE_stndpoly3 1
static const dd kstndpoly3 = (m2c::near_offset_external(::stndpoly3));
#endif
#ifndef M2C_CODE_EQUATE_objectbuffer
#define M2C_CODE_EQUATE_objectbuffer 1
static const dd kobjectbuffer = (m2c::near_offset_external(::objectbuffer));
#endif
#ifndef M2C_CODE_EQUATE_objectbufptr
#define M2C_CODE_EQUATE_objectbufptr 1
static const dd kobjectbufptr = (m2c::near_offset_external(::objectbufptr));
#endif
#ifndef M2C_CODE_EQUATE_objectdist1
#define M2C_CODE_EQUATE_objectdist1 1
static const dd kobjectdist1 = (m2c::near_offset_external(::objectdist1));
#endif
#ifndef M2C_CODE_EQUATE_objectdist2
#define M2C_CODE_EQUATE_objectdist2 1
static const dd kobjectdist2 = (m2c::near_offset_external(::objectdist2));
#endif
#ifndef M2C_CODE_EQUATE_objectdist3
#define M2C_CODE_EQUATE_objectdist3 1
static const dd kobjectdist3 = (m2c::near_offset_external(::objectdist3));
#endif
#ifndef M2C_CODE_EQUATE_farobjectdist
#define M2C_CODE_EQUATE_farobjectdist 1
static const dd kfarobjectdist = (m2c::near_offset_external(::farobjectdist));
#endif
#ifndef M2C_CODE_EQUATE_sctrscalemode
#define M2C_CODE_EQUATE_sctrscalemode 1
static const dd ksctrscalemode = (m2c::near_offset_external(::sctrscalemode));
#endif
#ifndef M2C_CODE_EQUATE_mapindex
#define M2C_CODE_EQUATE_mapindex 1
static const dd kmapindex = (m2c::near_offset_external(::mapindex));
#endif
#ifndef M2C_CODE_EQUATE_xsecscan
#define M2C_CODE_EQUATE_xsecscan 1
static const dd kxsecscan = (m2c::near_offset_external(::xsecscan));
#endif
#ifndef M2C_CODE_EQUATE_ysecscan
#define M2C_CODE_EQUATE_ysecscan 1
static const dd kysecscan = (m2c::near_offset_external(::ysecscan));
#endif
#ifndef M2C_CODE_EQUATE_nomansland
#define M2C_CODE_EQUATE_nomansland 1
static const dd knomansland = (m2c::near_offset_external(::nomansland));
#endif
#ifndef M2C_CODE_EQUATE_numvissctrs
#define M2C_CODE_EQUATE_numvissctrs 1
static const dd knumvissctrs = (m2c::near_offset_external(::numvissctrs));
#endif
#ifndef M2C_CODE_EQUATE_sctrscalefactor
#define M2C_CODE_EQUATE_sctrscalefactor 1
static const dd ksctrscalefactor = (m2c::near_offset_external(::sctrscalefactor));
#endif
#ifndef M2C_CODE_EQUATE_sctrscaleypos
#define M2C_CODE_EQUATE_sctrscaleypos 1
static const dd ksctrscaleypos = (m2c::near_offset_external(::sctrscaleypos));
#endif
#ifndef M2C_CODE_EQUATE_secscancnt1
#define M2C_CODE_EQUATE_secscancnt1 1
static const dd ksecscancnt1 = (m2c::near_offset_external(::secscancnt1));
#endif
#ifndef M2C_CODE_EQUATE_secscanoff1
#define M2C_CODE_EQUATE_secscanoff1 1
static const dd ksecscanoff1 = (m2c::near_offset_external(::secscanoff1));
#endif
#ifndef M2C_CODE_EQUATE_secscancnt2
#define M2C_CODE_EQUATE_secscancnt2 1
static const dd ksecscancnt2 = (m2c::near_offset_external(::secscancnt2));
#endif
#ifndef M2C_CODE_EQUATE_secscanoff2
#define M2C_CODE_EQUATE_secscanoff2 1
static const dd ksecscanoff2 = (m2c::near_offset_external(::secscanoff2));
#endif
#ifndef M2C_CODE_EQUATE_copybuffer
#define M2C_CODE_EQUATE_copybuffer 1
static const dd kcopybuffer = (m2c::near_offset_external(::copybuffer));
#endif
#ifndef M2C_CODE_EQUATE_cyclic
#define M2C_CODE_EQUATE_cyclic 1
static const dd kcyclic = (m2c::near_offset_external(::cyclic));
#endif
#ifndef M2C_CODE_EQUATE_objanimflags
#define M2C_CODE_EQUATE_objanimflags 1
static const dd kobjanimflags = (m2c::near_offset_external(::objanimflags));
#endif
#ifndef M2C_CODE_EQUATE_flatobject
#define M2C_CODE_EQUATE_flatobject 1
static const dd kflatobject = (m2c::near_offset_external(::flatobject));
#endif
#ifndef M2C_CODE_EQUATE_mobsortptr
#define M2C_CODE_EQUATE_mobsortptr 1
static const dd kmobsortptr = (m2c::near_offset_external(::mobsortptr));
#endif
#ifndef M2C_CODE_EQUATE_mobsortbins
#define M2C_CODE_EQUATE_mobsortbins 1
static const dd kmobsortbins = (m2c::near_offset_external(::mobsortbins));
#endif
#ifndef M2C_CODE_EQUATE_nummobiles
#define M2C_CODE_EQUATE_nummobiles 1
static const dd knummobiles = (m2c::near_offset_external(::nummobiles));
#endif
}
#ifndef v_view
#define v_view m2c::kv_view
#endif
#ifndef viewmode
#define viewmode m2c::kviewmode
#endif
#ifndef viewrotatemode
#define viewrotatemode m2c::kviewrotatemode
#endif
#ifndef zscaled
#define zscaled m2c::kzscaled
#endif
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
#ifndef b1
#define b1 m2c::kb1
#endif
#ifndef b2
#define b2 m2c::kb2
#endif
#ifndef b3
#define b3 m2c::kb3
#endif
#ifndef b4
#define b4 m2c::kb4
#endif
#ifndef b5
#define b5 m2c::kb5
#endif
#ifndef b6
#define b6 m2c::kb6
#endif
#ifndef b7
#define b7 m2c::kb7
#endif
#ifndef b8
#define b8 m2c::kb8
#endif
#ifndef b9
#define b9 m2c::kb9
#endif
#ifndef c1
#define c1 m2c::kc1
#endif
#ifndef c2
#define c2 m2c::kc2
#endif
#ifndef c3
#define c3 m2c::kc3
#endif
#ifndef c4
#define c4 m2c::kc4
#endif
#ifndef c5
#define c5 m2c::kc5
#endif
#ifndef c6
#define c6 m2c::kc6
#endif
#ifndef c7
#define c7 m2c::kc7
#endif
#ifndef c8
#define c8 m2c::kc8
#endif
#ifndef c9
#define c9 m2c::kc9
#endif
#ifndef d1
#define d1 m2c::kd1
#endif
#ifndef d2
#define d2 m2c::kd2
#endif
#ifndef d3
#define d3 m2c::kd3
#endif
#ifndef d4
#define d4 m2c::kd4
#endif
#ifndef d5
#define d5 m2c::kd5
#endif
#ifndef d6
#define d6 m2c::kd6
#endif
#ifndef d7
#define d7 m2c::kd7
#endif
#ifndef d8
#define d8 m2c::kd8
#endif
#ifndef d9
#define d9 m2c::kd9
#endif
#ifndef xsx
#define xsx m2c::kxsx
#endif
#ifndef xsy
#define xsy m2c::kxsy
#endif
#ifndef xsz
#define xsz m2c::kxsz
#endif
#ifndef ysx
#define ysx m2c::kysx
#endif
#ifndef ysy
#define ysy m2c::kysy
#endif
#ifndef ysz
#define ysz m2c::kysz
#endif
#ifndef zsx
#define zsx m2c::kzsx
#endif
#ifndef zsy
#define zsy m2c::kzsy
#endif
#ifndef zsz
#define zsz m2c::kzsz
#endif
#ifndef xgx
#define xgx m2c::kxgx
#endif
#ifndef xgy
#define xgy m2c::kxgy
#endif
#ifndef xgz
#define xgz m2c::kxgz
#endif
#ifndef ygx
#define ygx m2c::kygx
#endif
#ifndef ygy
#define ygy m2c::kygy
#endif
#ifndef ygz
#define ygz m2c::kygz
#endif
#ifndef zgx
#define zgx m2c::kzgx
#endif
#ifndef zgy
#define zgy m2c::kzgy
#endif
#ifndef zgz
#define zgz m2c::kzgz
#endif
#ifndef r_xgx
#define r_xgx m2c::kr_xgx
#endif
#ifndef r_xgy
#define r_xgy m2c::kr_xgy
#endif
#ifndef r_xgz
#define r_xgz m2c::kr_xgz
#endif
#ifndef r_ygx
#define r_ygx m2c::kr_ygx
#endif
#ifndef r_ygy
#define r_ygy m2c::kr_ygy
#endif
#ifndef r_ygz
#define r_ygz m2c::kr_ygz
#endif
#ifndef r_zgx
#define r_zgx m2c::kr_zgx
#endif
#ifndef r_zgy
#define r_zgy m2c::kr_zgy
#endif
#ifndef r_zgz
#define r_zgz m2c::kr_zgz
#endif
#ifndef xgridsize
#define xgridsize m2c::kxgridsize
#endif
#ifndef ygridsize
#define ygridsize m2c::kygridsize
#endif
#ifndef zgridsize
#define zgridsize m2c::kzgridsize
#endif
#ifndef objscaleconvert
#define objscaleconvert m2c::kobjscaleconvert
#endif
#ifndef xgrid1
#define xgrid1 m2c::kxgrid1
#endif
#ifndef ygrid1
#define ygrid1 m2c::kygrid1
#endif
#ifndef xrel1
#define xrel1 m2c::kxrel1
#endif
#ifndef yrel1
#define yrel1 m2c::kyrel1
#endif
#ifndef zrel1
#define zrel1 m2c::kzrel1
#endif
#ifndef xe01
#define xe01 m2c::kxe01
#endif
#ifndef ye01
#define ye01 m2c::kye01
#endif
#ifndef ze01
#define ze01 m2c::kze01
#endif
#ifndef xe01_2
#define xe01_2 m2c::kxe01_2
#endif
#ifndef ye01_2
#define ye01_2 m2c::kye01_2
#endif
#ifndef ze01_2
#define ze01_2 m2c::kze01_2
#endif
#ifndef xe01_4
#define xe01_4 m2c::kxe01_4
#endif
#ifndef ye01_4
#define ye01_4 m2c::kye01_4
#endif
#ifndef ze01_4
#define ze01_4 m2c::kze01_4
#endif
#ifndef xe01_8
#define xe01_8 m2c::kxe01_8
#endif
#ifndef ye01_8
#define ye01_8 m2c::kye01_8
#endif
#ifndef ze01_8
#define ze01_8 m2c::kze01_8
#endif
#ifndef xe01_16
#define xe01_16 m2c::kxe01_16
#endif
#ifndef ye01_16
#define ye01_16 m2c::kye01_16
#endif
#ifndef ze01_16
#define ze01_16 m2c::kze01_16
#endif
#ifndef xpos1
#define xpos1 m2c::kxpos1
#endif
#ifndef ypos1
#define ypos1 m2c::kypos1
#endif
#ifndef zpos1
#define zpos1 m2c::kzpos1
#endif
#ifndef valid1_2
#define valid1_2 m2c::kvalid1_2
#endif
#ifndef valid1_4
#define valid1_4 m2c::kvalid1_4
#endif
#ifndef valid1_8
#define valid1_8 m2c::kvalid1_8
#endif
#ifndef valid1_16
#define valid1_16 m2c::kvalid1_16
#endif
#ifndef xgrid2
#define xgrid2 m2c::kxgrid2
#endif
#ifndef ygrid2
#define ygrid2 m2c::kygrid2
#endif
#ifndef xrel2
#define xrel2 m2c::kxrel2
#endif
#ifndef yrel2
#define yrel2 m2c::kyrel2
#endif
#ifndef zrel2
#define zrel2 m2c::kzrel2
#endif
#ifndef xe02
#define xe02 m2c::kxe02
#endif
#ifndef ye02
#define ye02 m2c::kye02
#endif
#ifndef ze02
#define ze02 m2c::kze02
#endif
#ifndef xpos2
#define xpos2 m2c::kxpos2
#endif
#ifndef ypos2
#define ypos2 m2c::kypos2
#endif
#ifndef zpos2
#define zpos2 m2c::kzpos2
#endif
#ifndef xgrid8
#define xgrid8 m2c::kxgrid8
#endif
#ifndef ygrid8
#define ygrid8 m2c::kygrid8
#endif
#ifndef xrel8
#define xrel8 m2c::kxrel8
#endif
#ifndef yrel8
#define yrel8 m2c::kyrel8
#endif
#ifndef zrel8
#define zrel8 m2c::kzrel8
#endif
#ifndef xe08
#define xe08 m2c::kxe08
#endif
#ifndef ye08
#define ye08 m2c::kye08
#endif
#ifndef ze08
#define ze08 m2c::kze08
#endif
#ifndef xpos8
#define xpos8 m2c::kxpos8
#endif
#ifndef ypos8
#define ypos8 m2c::kypos8
#endif
#ifndef zpos8
#define zpos8 m2c::kzpos8
#endif
#ifndef xgrid16
#define xgrid16 m2c::kxgrid16
#endif
#ifndef ygrid16
#define ygrid16 m2c::kygrid16
#endif
#ifndef xrel16
#define xrel16 m2c::kxrel16
#endif
#ifndef yrel16
#define yrel16 m2c::kyrel16
#endif
#ifndef zrel16
#define zrel16 m2c::kzrel16
#endif
#ifndef xe016
#define xe016 m2c::kxe016
#endif
#ifndef ye016
#define ye016 m2c::kye016
#endif
#ifndef ze016
#define ze016 m2c::kze016
#endif
#ifndef xpos16
#define xpos16 m2c::kxpos16
#endif
#ifndef ypos16
#define ypos16 m2c::kypos16
#endif
#ifndef zpos16
#define zpos16 m2c::kzpos16
#endif
#ifndef xpos
#define xpos m2c::kxpos
#endif
#ifndef ypos
#define ypos m2c::kypos
#endif
#ifndef zpos
#define zpos m2c::kzpos
#endif
#ifndef xe
#define xe m2c::kxe
#endif
#ifndef ye
#define ye m2c::kye
#endif
#ifndef ze
#define ze m2c::kze
#endif
#ifndef xcrt
#define xcrt m2c::kxcrt
#endif
#ifndef ycrt
#define ycrt m2c::kycrt
#endif
#ifndef outcode
#define outcode m2c::koutcode
#endif
#ifndef crtbuffer
#define crtbuffer m2c::kcrtbuffer
#endif
#ifndef crtbufptr
#define crtbufptr m2c::kcrtbufptr
#endif
#ifndef col1
#define col1 m2c::kcol1
#endif
#ifndef col2
#define col2 m2c::kcol2
#endif
#ifndef stndpoly4
#define stndpoly4 m2c::kstndpoly4
#endif
#ifndef stndpoly3
#define stndpoly3 m2c::kstndpoly3
#endif
#ifndef objectbuffer
#define objectbuffer m2c::kobjectbuffer
#endif
#ifndef objectbufptr
#define objectbufptr m2c::kobjectbufptr
#endif
#ifndef objectdist1
#define objectdist1 m2c::kobjectdist1
#endif
#ifndef objectdist2
#define objectdist2 m2c::kobjectdist2
#endif
#ifndef objectdist3
#define objectdist3 m2c::kobjectdist3
#endif
#ifndef farobjectdist
#define farobjectdist m2c::kfarobjectdist
#endif
#ifndef sctrscalemode
#define sctrscalemode m2c::ksctrscalemode
#endif
#ifndef mapindex
#define mapindex m2c::kmapindex
#endif
#ifndef xsecscan
#define xsecscan m2c::kxsecscan
#endif
#ifndef ysecscan
#define ysecscan m2c::kysecscan
#endif
#ifndef nomansland
#define nomansland m2c::knomansland
#endif
#ifndef numvissctrs
#define numvissctrs m2c::knumvissctrs
#endif
#ifndef sctrscalefactor
#define sctrscalefactor m2c::ksctrscalefactor
#endif
#ifndef sctrscaleypos
#define sctrscaleypos m2c::ksctrscaleypos
#endif
#ifndef secscancnt1
#define secscancnt1 m2c::ksecscancnt1
#endif
#ifndef secscanoff1
#define secscanoff1 m2c::ksecscanoff1
#endif
#ifndef secscancnt2
#define secscancnt2 m2c::ksecscancnt2
#endif
#ifndef secscanoff2
#define secscanoff2 m2c::ksecscanoff2
#endif
#ifndef copybuffer
#define copybuffer m2c::kcopybuffer
#endif
#ifndef cyclic
#define cyclic m2c::kcyclic
#endif
#ifndef objanimflags
#define objanimflags m2c::kobjanimflags
#endif
#ifndef flatobject
#define flatobject m2c::kflatobject
#endif
#ifndef mobsortptr
#define mobsortptr m2c::kmobsortptr
#endif
#ifndef mobsortbins
#define mobsortbins m2c::kmobsortbins
#endif
#ifndef nummobiles
#define nummobiles m2c::knummobiles
#endif



#endif
