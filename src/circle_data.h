#ifndef __M2C_CIRCLE_DATA_H__
#define __M2C_CIRCLE_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& circlexmin;
extern dw& circlexmax;
extern dw& circleymin;
extern dw& circleymax;
extern db (& circleflag)[2];
extern dw& circlevectors;
extern dw& dummy08c42053_data_c_86;
extern dw& dummy08c42053_data_e_87;
extern dw& dummy08c42053_data_10_88;
extern dw& dummy08c42053_data_12_89;
extern dw& dummy08c42053_data_14_90;
extern dw& dummy08c42053_data_16_91;
extern dw& dummy08c42053_data_18_92;
extern dw& dummy08c42053_data_1a_93;
extern dw& dummy08c42053_data_1c_94;
extern dw& dummy08c42053_data_1e_95;
extern dw& dummy08c42053_data_20_96;
extern dw& dummy08c42053_data_22_97;
extern dw& dummy08c42053_data_24_98;
extern dw& dummy08c42053_data_26_99;
extern dw& dummy08c42053_data_28_100;
extern db& gcode;

#ifndef miny
extern dw& miny;
#endif
#ifndef _meshfill
extern dw& _meshfill;
#endif
#ifndef _smokefill
extern dw& _smokefill;
#endif
#ifndef rhsx
extern dw& rhsx;
#endif
#ifndef palette
extern db& palette;
#endif
#ifndef _polyfill
extern dw& _polyfill;
#endif
#ifndef lhsx
extern dw& lhsx;
#endif
#ifndef fillvector
extern dw& fillvector;
#endif
#ifndef polycount
extern dw& polycount;
#endif
#ifndef fillcol
extern db& fillcol;
#endif
#ifndef maxy
extern dw& maxy;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_gcode_0_proc
#define M2C_CODE_EQUATE_gcode_0_proc 1
static const dd kgcode_0_proc = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_circlesmoke
#define M2C_CODE_EQUATE_circlesmoke 1
static const dd kcirclesmoke = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_circleexit
#define M2C_CODE_EQUATE_circleexit 1
static const dd kcircleexit = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_intocirclefill
#define M2C_CODE_EQUATE_intocirclefill 1
static const dd kintocirclefill = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_circlemesh
#define M2C_CODE_EQUATE_circlemesh 1
static const dd kcirclemesh = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_circlefill
#define M2C_CODE_EQUATE_circlefill 1
static const dd kcirclefill = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_clipcirclelink
#define M2C_CODE_EQUATE_clipcirclelink 1
static const dd kclipcirclelink = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_unclippedcircle
#define M2C_CODE_EQUATE_unclippedcircle 1
static const dd kunclippedcircle = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_clippedcircle
#define M2C_CODE_EQUATE_clippedcircle 1
static const dd kclippedcircle = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_circleloop1
#define M2C_CODE_EQUATE_circleloop1 1
static const dd kcircleloop1 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_circledone
#define M2C_CODE_EQUATE_circledone 1
static const dd kcircledone = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_skipxyocts1
#define M2C_CODE_EQUATE_skipxyocts1 1
static const dd kskipxyocts1 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_outsidelink
#define M2C_CODE_EQUATE_outsidelink 1
static const dd koutsidelink = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_insideclip
#define M2C_CODE_EQUATE_insideclip 1
static const dd kinsideclip = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_outsideclip
#define M2C_CODE_EQUATE_outsideclip 1
static const dd koutsideclip = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_ok2_1
#define M2C_CODE_EQUATE_ok2_1 1
static const dd kok2_1 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_ok2_2
#define M2C_CODE_EQUATE_ok2_2 1
static const dd kok2_2 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_circleloop2
#define M2C_CODE_EQUATE_circleloop2 1
static const dd kcircleloop2 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_skip2_1
#define M2C_CODE_EQUATE_skip2_1 1
static const dd kskip2_1 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_ok2_3
#define M2C_CODE_EQUATE_ok2_3 1
static const dd kok2_3 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_ok2_4
#define M2C_CODE_EQUATE_ok2_4 1
static const dd kok2_4 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_skip2_2
#define M2C_CODE_EQUATE_skip2_2 1
static const dd kskip2_2 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_ok2_5
#define M2C_CODE_EQUATE_ok2_5 1
static const dd kok2_5 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_ok2_6
#define M2C_CODE_EQUATE_ok2_6 1
static const dd kok2_6 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_skipxyocts2
#define M2C_CODE_EQUATE_skipxyocts2 1
static const dd kskipxyocts2 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_skip2_3
#define M2C_CODE_EQUATE_skip2_3 1
static const dd kskip2_3 = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_ok2_7
#define M2C_CODE_EQUATE_ok2_7 1
static const dd kok2_7 = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_ok2_8
#define M2C_CODE_EQUATE_ok2_8 1
static const dd kok2_8 = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_skip2_4
#define M2C_CODE_EQUATE_skip2_4 1
static const dd kskip2_4 = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_ok2_9
#define M2C_CODE_EQUATE_ok2_9 1
static const dd kok2_9 = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_ok2_10
#define M2C_CODE_EQUATE_ok2_10 1
static const dd kok2_10 = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_outcode1
#define M2C_CODE_EQUATE_outcode1 1
static const dd koutcode1 = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_outcode2
#define M2C_CODE_EQUATE_outcode2 1
static const dd koutcode2 = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_outcode3
#define M2C_CODE_EQUATE_outcode3 1
static const dd koutcode3 = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_outcode4
#define M2C_CODE_EQUATE_outcode4 1
static const dd koutcode4 = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_abovedone
#define M2C_CODE_EQUATE_abovedone 1
static const dd kabovedone = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_clipabove
#define M2C_CODE_EQUATE_clipabove 1
static const dd kclipabove = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_circleloop3
#define M2C_CODE_EQUATE_circleloop3 1
static const dd kcircleloop3 = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_skip3_1
#define M2C_CODE_EQUATE_skip3_1 1
static const dd kskip3_1 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_ok3_1
#define M2C_CODE_EQUATE_ok3_1 1
static const dd kok3_1 = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_ok3_2
#define M2C_CODE_EQUATE_ok3_2 1
static const dd kok3_2 = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_ok3_3
#define M2C_CODE_EQUATE_ok3_3 1
static const dd kok3_3 = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_skipxyocts3
#define M2C_CODE_EQUATE_skipxyocts3 1
static const dd kskipxyocts3 = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_skip3_2
#define M2C_CODE_EQUATE_skip3_2 1
static const dd kskip3_2 = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_ok3_4
#define M2C_CODE_EQUATE_ok3_4 1
static const dd kok3_4 = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_ok3_5
#define M2C_CODE_EQUATE_ok3_5 1
static const dd kok3_5 = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_ok3_6
#define M2C_CODE_EQUATE_ok3_6 1
static const dd kok3_6 = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_aboverightdone
#define M2C_CODE_EQUATE_aboverightdone 1
static const dd kaboverightdone = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_aboverightskip
#define M2C_CODE_EQUATE_aboverightskip 1
static const dd kaboverightskip = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_clipaboveright
#define M2C_CODE_EQUATE_clipaboveright 1
static const dd kclipaboveright = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_circleloop4
#define M2C_CODE_EQUATE_circleloop4 1
static const dd kcircleloop4 = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_skip4_1
#define M2C_CODE_EQUATE_skip4_1 1
static const dd kskip4_1 = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_ok4_1
#define M2C_CODE_EQUATE_ok4_1 1
static const dd kok4_1 = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_ok4_2
#define M2C_CODE_EQUATE_ok4_2 1
static const dd kok4_2 = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_skipxyocts4
#define M2C_CODE_EQUATE_skipxyocts4 1
static const dd kskipxyocts4 = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_skip4_2
#define M2C_CODE_EQUATE_skip4_2 1
static const dd kskip4_2 = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_ok4_3
#define M2C_CODE_EQUATE_ok4_3 1
static const dd kok4_3 = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_ok4_4
#define M2C_CODE_EQUATE_ok4_4 1
static const dd kok4_4 = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_aboveleftdone
#define M2C_CODE_EQUATE_aboveleftdone 1
static const dd kaboveleftdone = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_aboveleftskip
#define M2C_CODE_EQUATE_aboveleftskip 1
static const dd kaboveleftskip = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_clipaboveleft
#define M2C_CODE_EQUATE_clipaboveleft 1
static const dd kclipaboveleft = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_circleloop5
#define M2C_CODE_EQUATE_circleloop5 1
static const dd kcircleloop5 = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_skip5_1
#define M2C_CODE_EQUATE_skip5_1 1
static const dd kskip5_1 = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_ok5_1
#define M2C_CODE_EQUATE_ok5_1 1
static const dd kok5_1 = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_ok5_2
#define M2C_CODE_EQUATE_ok5_2 1
static const dd kok5_2 = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_skipxyocts5
#define M2C_CODE_EQUATE_skipxyocts5 1
static const dd kskipxyocts5 = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_skip5_2
#define M2C_CODE_EQUATE_skip5_2 1
static const dd kskip5_2 = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_ok5_3
#define M2C_CODE_EQUATE_ok5_3 1
static const dd kok5_3 = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_ok5_4
#define M2C_CODE_EQUATE_ok5_4 1
static const dd kok5_4 = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_belowdone
#define M2C_CODE_EQUATE_belowdone 1
static const dd kbelowdone = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE_clipbelow
#define M2C_CODE_EQUATE_clipbelow 1
static const dd kclipbelow = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE_circleloop6
#define M2C_CODE_EQUATE_circleloop6 1
static const dd kcircleloop6 = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE_skip6_1
#define M2C_CODE_EQUATE_skip6_1 1
static const dd kskip6_1 = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE_ok6_1
#define M2C_CODE_EQUATE_ok6_1 1
static const dd kok6_1 = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE_ok6_2
#define M2C_CODE_EQUATE_ok6_2 1
static const dd kok6_2 = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE_ok6_3
#define M2C_CODE_EQUATE_ok6_3 1
static const dd kok6_3 = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_skipxyocts6
#define M2C_CODE_EQUATE_skipxyocts6 1
static const dd kskipxyocts6 = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_skip6_2
#define M2C_CODE_EQUATE_skip6_2 1
static const dd kskip6_2 = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_ok6_4
#define M2C_CODE_EQUATE_ok6_4 1
static const dd kok6_4 = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE_ok6_5
#define M2C_CODE_EQUATE_ok6_5 1
static const dd kok6_5 = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE_ok6_6
#define M2C_CODE_EQUATE_ok6_6 1
static const dd kok6_6 = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE_belowrightdone
#define M2C_CODE_EQUATE_belowrightdone 1
static const dd kbelowrightdone = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE_belowrightskip
#define M2C_CODE_EQUATE_belowrightskip 1
static const dd kbelowrightskip = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE_clipbelowright
#define M2C_CODE_EQUATE_clipbelowright 1
static const dd kclipbelowright = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE_circleloop7
#define M2C_CODE_EQUATE_circleloop7 1
static const dd kcircleloop7 = 0x1058;
#endif
#ifndef M2C_CODE_EQUATE_skip7_1
#define M2C_CODE_EQUATE_skip7_1 1
static const dd kskip7_1 = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE_ok7_1
#define M2C_CODE_EQUATE_ok7_1 1
static const dd kok7_1 = 0x105a;
#endif
#ifndef M2C_CODE_EQUATE_ok7_2
#define M2C_CODE_EQUATE_ok7_2 1
static const dd kok7_2 = 0x105b;
#endif
#ifndef M2C_CODE_EQUATE_skipxyocts7
#define M2C_CODE_EQUATE_skipxyocts7 1
static const dd kskipxyocts7 = 0x105c;
#endif
#ifndef M2C_CODE_EQUATE_skip7_2
#define M2C_CODE_EQUATE_skip7_2 1
static const dd kskip7_2 = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE_ok7_3
#define M2C_CODE_EQUATE_ok7_3 1
static const dd kok7_3 = 0x105e;
#endif
#ifndef M2C_CODE_EQUATE_ok7_4
#define M2C_CODE_EQUATE_ok7_4 1
static const dd kok7_4 = 0x105f;
#endif
#ifndef M2C_CODE_EQUATE_belowleftdone
#define M2C_CODE_EQUATE_belowleftdone 1
static const dd kbelowleftdone = 0x1060;
#endif
#ifndef M2C_CODE_EQUATE_belowleftskip
#define M2C_CODE_EQUATE_belowleftskip 1
static const dd kbelowleftskip = 0x1061;
#endif
#ifndef M2C_CODE_EQUATE_clipbelowleft
#define M2C_CODE_EQUATE_clipbelowleft 1
static const dd kclipbelowleft = 0x1062;
#endif
#ifndef M2C_CODE_EQUATE_circleloop8
#define M2C_CODE_EQUATE_circleloop8 1
static const dd kcircleloop8 = 0x1063;
#endif
#ifndef M2C_CODE_EQUATE_skip8_1
#define M2C_CODE_EQUATE_skip8_1 1
static const dd kskip8_1 = 0x1064;
#endif
#ifndef M2C_CODE_EQUATE_ok8_1
#define M2C_CODE_EQUATE_ok8_1 1
static const dd kok8_1 = 0x1065;
#endif
#ifndef M2C_CODE_EQUATE_ok8_2
#define M2C_CODE_EQUATE_ok8_2 1
static const dd kok8_2 = 0x1066;
#endif
#ifndef M2C_CODE_EQUATE_skipxyocts8
#define M2C_CODE_EQUATE_skipxyocts8 1
static const dd kskipxyocts8 = 0x1067;
#endif
#ifndef M2C_CODE_EQUATE_skip8_2
#define M2C_CODE_EQUATE_skip8_2 1
static const dd kskip8_2 = 0x1068;
#endif
#ifndef M2C_CODE_EQUATE_ok8_3
#define M2C_CODE_EQUATE_ok8_3 1
static const dd kok8_3 = 0x1069;
#endif
#ifndef M2C_CODE_EQUATE_ok8_4
#define M2C_CODE_EQUATE_ok8_4 1
static const dd kok8_4 = 0x106a;
#endif
#ifndef M2C_CODE_EQUATE_rightdone
#define M2C_CODE_EQUATE_rightdone 1
static const dd krightdone = 0x106b;
#endif
#ifndef M2C_CODE_EQUATE_clipright
#define M2C_CODE_EQUATE_clipright 1
static const dd kclipright = 0x106c;
#endif
#ifndef M2C_CODE_EQUATE_circleloop9
#define M2C_CODE_EQUATE_circleloop9 1
static const dd kcircleloop9 = 0x106d;
#endif
#ifndef M2C_CODE_EQUATE_skip9_2
#define M2C_CODE_EQUATE_skip9_2 1
static const dd kskip9_2 = 0x106e;
#endif
#ifndef M2C_CODE_EQUATE_skip9_1
#define M2C_CODE_EQUATE_skip9_1 1
static const dd kskip9_1 = 0x106f;
#endif
#ifndef M2C_CODE_EQUATE_ok9_1
#define M2C_CODE_EQUATE_ok9_1 1
static const dd kok9_1 = 0x1070;
#endif
#ifndef M2C_CODE_EQUATE_ok9_2
#define M2C_CODE_EQUATE_ok9_2 1
static const dd kok9_2 = 0x1071;
#endif
#ifndef M2C_CODE_EQUATE_ok9_3
#define M2C_CODE_EQUATE_ok9_3 1
static const dd kok9_3 = 0x1072;
#endif
#ifndef M2C_CODE_EQUATE_ok9_4
#define M2C_CODE_EQUATE_ok9_4 1
static const dd kok9_4 = 0x1073;
#endif
#ifndef M2C_CODE_EQUATE_skipxyocts9
#define M2C_CODE_EQUATE_skipxyocts9 1
static const dd kskipxyocts9 = 0x1074;
#endif
#ifndef M2C_CODE_EQUATE_skip9_4
#define M2C_CODE_EQUATE_skip9_4 1
static const dd kskip9_4 = 0x1075;
#endif
#ifndef M2C_CODE_EQUATE_skip9_3
#define M2C_CODE_EQUATE_skip9_3 1
static const dd kskip9_3 = 0x1076;
#endif
#ifndef M2C_CODE_EQUATE_ok9_5
#define M2C_CODE_EQUATE_ok9_5 1
static const dd kok9_5 = 0x1077;
#endif
#ifndef M2C_CODE_EQUATE_ok9_6
#define M2C_CODE_EQUATE_ok9_6 1
static const dd kok9_6 = 0x1078;
#endif
#ifndef M2C_CODE_EQUATE_ok9_7
#define M2C_CODE_EQUATE_ok9_7 1
static const dd kok9_7 = 0x1079;
#endif
#ifndef M2C_CODE_EQUATE_ok9_8
#define M2C_CODE_EQUATE_ok9_8 1
static const dd kok9_8 = 0x107a;
#endif
#ifndef M2C_CODE_EQUATE_leftdone
#define M2C_CODE_EQUATE_leftdone 1
static const dd kleftdone = 0x107b;
#endif
#ifndef M2C_CODE_EQUATE_clipleft
#define M2C_CODE_EQUATE_clipleft 1
static const dd kclipleft = 0x107c;
#endif
#ifndef M2C_CODE_EQUATE_circleloop10
#define M2C_CODE_EQUATE_circleloop10 1
static const dd kcircleloop10 = 0x107d;
#endif
#ifndef M2C_CODE_EQUATE_skip10_2
#define M2C_CODE_EQUATE_skip10_2 1
static const dd kskip10_2 = 0x107e;
#endif
#ifndef M2C_CODE_EQUATE_skip10_1
#define M2C_CODE_EQUATE_skip10_1 1
static const dd kskip10_1 = 0x107f;
#endif
#ifndef M2C_CODE_EQUATE_ok10_1
#define M2C_CODE_EQUATE_ok10_1 1
static const dd kok10_1 = 0x1080;
#endif
#ifndef M2C_CODE_EQUATE_ok10_2
#define M2C_CODE_EQUATE_ok10_2 1
static const dd kok10_2 = 0x1081;
#endif
#ifndef M2C_CODE_EQUATE_ok10_3
#define M2C_CODE_EQUATE_ok10_3 1
static const dd kok10_3 = 0x1082;
#endif
#ifndef M2C_CODE_EQUATE_ok10_4
#define M2C_CODE_EQUATE_ok10_4 1
static const dd kok10_4 = 0x1083;
#endif
#ifndef M2C_CODE_EQUATE_skipxyocts10
#define M2C_CODE_EQUATE_skipxyocts10 1
static const dd kskipxyocts10 = 0x1084;
#endif
#ifndef M2C_CODE_EQUATE_skip10_4
#define M2C_CODE_EQUATE_skip10_4 1
static const dd kskip10_4 = 0x1085;
#endif
#ifndef M2C_CODE_EQUATE_skip10_3
#define M2C_CODE_EQUATE_skip10_3 1
static const dd kskip10_3 = 0x1086;
#endif
#ifndef M2C_CODE_EQUATE_ok10_5
#define M2C_CODE_EQUATE_ok10_5 1
static const dd kok10_5 = 0x1087;
#endif
#ifndef M2C_CODE_EQUATE_ok10_6
#define M2C_CODE_EQUATE_ok10_6 1
static const dd kok10_6 = 0x1088;
#endif
#ifndef M2C_CODE_EQUATE_ok10_7
#define M2C_CODE_EQUATE_ok10_7 1
static const dd kok10_7 = 0x1089;
#endif
#ifndef M2C_CODE_EQUATE_ok10_8
#define M2C_CODE_EQUATE_ok10_8 1
static const dd kok10_8 = 0x108a;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_circlexmin
#define M2C_CODE_EQUATE_circlexmin 1
static const dd kcirclexmin = (m2c::near_offset_external(::circlexmin));
#endif
#ifndef M2C_CODE_EQUATE_circlexmax
#define M2C_CODE_EQUATE_circlexmax 1
static const dd kcirclexmax = (m2c::near_offset_external(::circlexmax));
#endif
#ifndef M2C_CODE_EQUATE_circleymin
#define M2C_CODE_EQUATE_circleymin 1
static const dd kcircleymin = (m2c::near_offset_external(::circleymin));
#endif
#ifndef M2C_CODE_EQUATE_circleymax
#define M2C_CODE_EQUATE_circleymax 1
static const dd kcircleymax = (m2c::near_offset_external(::circleymax));
#endif
#ifndef M2C_CODE_EQUATE_circleflag
#define M2C_CODE_EQUATE_circleflag 1
static const dd kcircleflag = (m2c::near_offset_external(::circleflag));
#endif
#ifndef M2C_CODE_EQUATE_circlevectors
#define M2C_CODE_EQUATE_circlevectors 1
static const dd kcirclevectors = (m2c::near_offset_external(::circlevectors));
#endif
}
#ifndef circlexmin
#define circlexmin m2c::kcirclexmin
#endif
#ifndef circlexmax
#define circlexmax m2c::kcirclexmax
#endif
#ifndef circleymin
#define circleymin m2c::kcircleymin
#endif
#ifndef circleymax
#define circleymax m2c::kcircleymax
#endif
#ifndef circleflag
#define circleflag m2c::kcircleflag
#endif
#ifndef circlevectors
#define circlevectors m2c::kcirclevectors
#endif



#endif
