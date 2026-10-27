#ifndef __M2C_POLYFILL_DATA_H__
#define __M2C_POLYFILL_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& miny;
extern dw& maxy;
extern dw& lhsptr;
extern dw& rhsptr;
extern dw (& lhsx)[200];
extern dw (& rhsx)[200];
extern dw& oldx;
extern dw& oldy;
extern dw& newx;
extern dw& newy;
extern dw& fillvector;
extern dw& octantbase;
extern dw& octant;
extern dw& dummy91ec39fc_data_336_60;
extern dw& dummy91ec39fc_data_338_61;
extern dw& dummy91ec39fc_data_33a_62;
extern dw& dummy91ec39fc_data_33c_63;
extern dw& dummy91ec39fc_data_33e_64;
extern dw& dummy91ec39fc_data_340_65;
extern dw& dummy91ec39fc_data_342_66;
extern dw& rvrsoctant;
extern dw& dummy91ec39fc_data_346_68;
extern dw& dummy91ec39fc_data_348_69;
extern dw& dummy91ec39fc_data_34a_70;
extern dw& dummy91ec39fc_data_34c_71;
extern dw& dummy91ec39fc_data_34e_72;
extern dw& dummy91ec39fc_data_350_73;
extern dw& dummy91ec39fc_data_352_74;
extern db (& tempcol)[2];
extern db& gcode;

#ifndef _meshfill
extern dw& _meshfill;
#endif
#ifndef _smokefill
extern dw& _smokefill;
#endif
#ifndef palette
extern db& palette;
#endif
#ifndef _polyfill
extern dw& _polyfill;
#endif
#ifndef polycount
extern dw& polycount;
#endif
#ifndef fillcol
extern db& fillcol;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_gcode_0_proc
#define M2C_CODE_EQUATE_gcode_0_proc 1
static const dd kgcode_0_proc = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_polydone
#define M2C_CODE_EQUATE_polydone 1
static const dd kpolydone = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_polyfill
#define M2C_CODE_EQUATE_polyfill 1
static const dd kpolyfill = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_intopolyfill
#define M2C_CODE_EQUATE_intopolyfill 1
static const dd kintopolyfill = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_polyloop
#define M2C_CODE_EQUATE_polyloop 1
static const dd kpolyloop = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_notmin
#define M2C_CODE_EQUATE_notmin 1
static const dd knotmin = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_notmax
#define M2C_CODE_EQUATE_notmax 1
static const dd knotmax = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_horizontal
#define M2C_CODE_EQUATE_horizontal 1
static const dd khorizontal = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_polycont
#define M2C_CODE_EQUATE_polycont 1
static const dd kpolycont = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_rhshoz
#define M2C_CODE_EQUATE_rhshoz 1
static const dd krhshoz = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_lhshoz
#define M2C_CODE_EQUATE_lhshoz 1
static const dd klhshoz = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_setlhpoint
#define M2C_CODE_EQUATE_setlhpoint 1
static const dd ksetlhpoint = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_setrhpoint
#define M2C_CODE_EQUATE_setrhpoint 1
static const dd ksetrhpoint = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_meshfill
#define M2C_CODE_EQUATE_meshfill 1
static const dd kmeshfill = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_smokefill
#define M2C_CODE_EQUATE_smokefill 1
static const dd ksmokefill = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_rvrspolyfill
#define M2C_CODE_EQUATE_rvrspolyfill 1
static const dd krvrspolyfill = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_rvrsmeshfill
#define M2C_CODE_EQUATE_rvrsmeshfill 1
static const dd krvrsmeshfill = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_rvrssmokefill
#define M2C_CODE_EQUATE_rvrssmokefill 1
static const dd krvrssmokefill = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_octant1
#define M2C_CODE_EQUATE_octant1 1
static const dd koctant1 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_intooct1
#define M2C_CODE_EQUATE_intooct1 1
static const dd kintooct1 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_oct1lp
#define M2C_CODE_EQUATE_oct1lp 1
static const dd koct1lp = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_octant2
#define M2C_CODE_EQUATE_octant2 1
static const dd koctant2 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_oct2lpb
#define M2C_CODE_EQUATE_oct2lpb 1
static const dd koct2lpb = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_oct2lpa
#define M2C_CODE_EQUATE_oct2lpa 1
static const dd koct2lpa = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_octant3
#define M2C_CODE_EQUATE_octant3 1
static const dd koctant3 = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_oct3lpb
#define M2C_CODE_EQUATE_oct3lpb 1
static const dd koct3lpb = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_oct3lpa
#define M2C_CODE_EQUATE_oct3lpa 1
static const dd koct3lpa = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_octant4
#define M2C_CODE_EQUATE_octant4 1
static const dd koctant4 = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_oct4lp
#define M2C_CODE_EQUATE_oct4lp 1
static const dd koct4lp = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_octant5
#define M2C_CODE_EQUATE_octant5 1
static const dd koctant5 = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_intooct5
#define M2C_CODE_EQUATE_intooct5 1
static const dd kintooct5 = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_oct5lp
#define M2C_CODE_EQUATE_oct5lp 1
static const dd koct5lp = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_octant6
#define M2C_CODE_EQUATE_octant6 1
static const dd koctant6 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_oct6lpb
#define M2C_CODE_EQUATE_oct6lpb 1
static const dd koct6lpb = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_oct6lpa
#define M2C_CODE_EQUATE_oct6lpa 1
static const dd koct6lpa = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_octant7
#define M2C_CODE_EQUATE_octant7 1
static const dd koctant7 = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_oct7lpb
#define M2C_CODE_EQUATE_oct7lpb 1
static const dd koct7lpb = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_oct7lpa
#define M2C_CODE_EQUATE_oct7lpa 1
static const dd koct7lpa = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_octant8
#define M2C_CODE_EQUATE_octant8 1
static const dd koctant8 = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_oct8lp
#define M2C_CODE_EQUATE_oct8lp 1
static const dd koct8lp = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_rvrsoctant1
#define M2C_CODE_EQUATE_rvrsoctant1 1
static const dd krvrsoctant1 = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_rvrsoct1lp
#define M2C_CODE_EQUATE_rvrsoct1lp 1
static const dd krvrsoct1lp = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_rvrsoctant2
#define M2C_CODE_EQUATE_rvrsoctant2 1
static const dd krvrsoctant2 = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_rvrsoct2lpb
#define M2C_CODE_EQUATE_rvrsoct2lpb 1
static const dd krvrsoct2lpb = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_rvrsoct2lpa
#define M2C_CODE_EQUATE_rvrsoct2lpa 1
static const dd krvrsoct2lpa = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_rvrsoctant3
#define M2C_CODE_EQUATE_rvrsoctant3 1
static const dd krvrsoctant3 = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_rvrsoct3lpb
#define M2C_CODE_EQUATE_rvrsoct3lpb 1
static const dd krvrsoct3lpb = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_rvrsoct3lpa
#define M2C_CODE_EQUATE_rvrsoct3lpa 1
static const dd krvrsoct3lpa = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_rvrsoctant4
#define M2C_CODE_EQUATE_rvrsoctant4 1
static const dd krvrsoctant4 = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_intorvrsoct4
#define M2C_CODE_EQUATE_intorvrsoct4 1
static const dd kintorvrsoct4 = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_rvrsoct4lp
#define M2C_CODE_EQUATE_rvrsoct4lp 1
static const dd krvrsoct4lp = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_rvrsoctant5
#define M2C_CODE_EQUATE_rvrsoctant5 1
static const dd krvrsoctant5 = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_rvrsoct5lp
#define M2C_CODE_EQUATE_rvrsoct5lp 1
static const dd krvrsoct5lp = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_rvrsoctant6
#define M2C_CODE_EQUATE_rvrsoctant6 1
static const dd krvrsoctant6 = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_rvrsoct6lpb
#define M2C_CODE_EQUATE_rvrsoct6lpb 1
static const dd krvrsoct6lpb = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE_rvrsoct6lpa
#define M2C_CODE_EQUATE_rvrsoct6lpa 1
static const dd krvrsoct6lpa = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_rvrsoctant7
#define M2C_CODE_EQUATE_rvrsoctant7 1
static const dd krvrsoctant7 = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel16
#define M2C_CODE_EQUATE_edummylabel16 1
static const dd kedummylabel16 = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE_rvrsoct7lpb
#define M2C_CODE_EQUATE_rvrsoct7lpb 1
static const dd krvrsoct7lpb = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE_rvrsoct7lpa
#define M2C_CODE_EQUATE_rvrsoct7lpa 1
static const dd krvrsoct7lpa = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE_rvrsoctant8
#define M2C_CODE_EQUATE_rvrsoctant8 1
static const dd krvrsoctant8 = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel17
#define M2C_CODE_EQUATE_edummylabel17 1
static const dd kedummylabel17 = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_intorvrsoct8
#define M2C_CODE_EQUATE_intorvrsoct8 1
static const dd kintorvrsoct8 = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_rvrsoct8lp
#define M2C_CODE_EQUATE_rvrsoct8lp 1
static const dd krvrsoct8lp = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE_polyline
#define M2C_CODE_EQUATE_polyline 1
static const dd kpolyline = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE_polylineloop
#define M2C_CODE_EQUATE_polylineloop 1
static const dd kpolylineloop = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE_polylineexit
#define M2C_CODE_EQUATE_polylineexit 1
static const dd kpolylineexit = 0x1055;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_miny
#define M2C_CODE_EQUATE_miny 1
static const dd kminy = (m2c::near_offset_external(::miny));
#endif
#ifndef M2C_CODE_EQUATE_maxy
#define M2C_CODE_EQUATE_maxy 1
static const dd kmaxy = (m2c::near_offset_external(::maxy));
#endif
#ifndef M2C_CODE_EQUATE_lhsptr
#define M2C_CODE_EQUATE_lhsptr 1
static const dd klhsptr = (m2c::near_offset_external(::lhsptr));
#endif
#ifndef M2C_CODE_EQUATE_rhsptr
#define M2C_CODE_EQUATE_rhsptr 1
static const dd krhsptr = (m2c::near_offset_external(::rhsptr));
#endif
#ifndef M2C_CODE_EQUATE_lhsx
#define M2C_CODE_EQUATE_lhsx 1
static const dd klhsx = (m2c::near_offset_external(::lhsx));
#endif
#ifndef M2C_CODE_EQUATE_rhsx
#define M2C_CODE_EQUATE_rhsx 1
static const dd krhsx = (m2c::near_offset_external(::rhsx));
#endif
#ifndef M2C_CODE_EQUATE_oldx
#define M2C_CODE_EQUATE_oldx 1
static const dd koldx = (m2c::near_offset_external(::oldx));
#endif
#ifndef M2C_CODE_EQUATE_oldy
#define M2C_CODE_EQUATE_oldy 1
static const dd koldy = (m2c::near_offset_external(::oldy));
#endif
#ifndef M2C_CODE_EQUATE_newx
#define M2C_CODE_EQUATE_newx 1
static const dd knewx = (m2c::near_offset_external(::newx));
#endif
#ifndef M2C_CODE_EQUATE_newy
#define M2C_CODE_EQUATE_newy 1
static const dd knewy = (m2c::near_offset_external(::newy));
#endif
#ifndef M2C_CODE_EQUATE_fillvector
#define M2C_CODE_EQUATE_fillvector 1
static const dd kfillvector = (m2c::near_offset_external(::fillvector));
#endif
#ifndef M2C_CODE_EQUATE_octantbase
#define M2C_CODE_EQUATE_octantbase 1
static const dd koctantbase = (m2c::near_offset_external(::octantbase));
#endif
#ifndef M2C_CODE_EQUATE_octant
#define M2C_CODE_EQUATE_octant 1
static const dd koctant = (m2c::near_offset_external(::octant));
#endif
#ifndef M2C_CODE_EQUATE_rvrsoctant
#define M2C_CODE_EQUATE_rvrsoctant 1
static const dd krvrsoctant = (m2c::near_offset_external(::rvrsoctant));
#endif
#ifndef M2C_CODE_EQUATE_tempcol
#define M2C_CODE_EQUATE_tempcol 1
static const dd ktempcol = (m2c::near_offset_external(::tempcol));
#endif
}
#ifndef miny
#define miny m2c::kminy
#endif
#ifndef maxy
#define maxy m2c::kmaxy
#endif
#ifndef lhsptr
#define lhsptr m2c::klhsptr
#endif
#ifndef rhsptr
#define rhsptr m2c::krhsptr
#endif
#ifndef lhsx
#define lhsx m2c::klhsx
#endif
#ifndef rhsx
#define rhsx m2c::krhsx
#endif
#ifndef oldx
#define oldx m2c::koldx
#endif
#ifndef oldy
#define oldy m2c::koldy
#endif
#ifndef newx
#define newx m2c::knewx
#endif
#ifndef newy
#define newy m2c::knewy
#endif
#ifndef fillvector
#define fillvector m2c::kfillvector
#endif
#ifndef octantbase
#define octantbase m2c::koctantbase
#endif
#ifndef octant
#define octant m2c::koctant
#endif
#ifndef rvrsoctant
#define rvrsoctant m2c::krvrsoctant
#endif
#ifndef tempcol
#define tempcol m2c::ktempcol
#endif



#endif
