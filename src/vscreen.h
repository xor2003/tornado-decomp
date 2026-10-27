/* THIS IS GENERATED FILE */

        
#ifndef __M2C_VSCREEN_STUBS_H__
#define __M2C_VSCREEN_STUBS_H__

#include "asm.h"


#pragma pack(push, 1)
struct viewport {
  dw v_x_org;
  dw v_y_org;
  dw v_width;
  dw v_depth;
  db v_scale_up;
  db v_scale_dn;
};

#pragma pack(pop)

static const word v_x_org = offsetof(struct viewport, v_x_org);
static const word v_y_org = offsetof(struct viewport, v_y_org);
static const word v_width = offsetof(struct viewport, v_width);
static const word v_depth = offsetof(struct viewport, v_depth);
static const word v_scale_up = offsetof(struct viewport, v_scale_up);
static const word v_scale_dn = offsetof(struct viewport, v_scale_dn);


	static const int vp_rec_size = 10;
enum {
    ocodel = 0x1,
    ocoder = 0x2,
    ocodeb = 0x4,
    ocodea = 0x8,
};
static const int draw_object = 0;
static const int clip_object = 2;
static const int skip_object = 4;
static const int xa = 0;
static const int ya = 2;
static const int xb = -6;
static const int yb = -4;
static const int xc = 0;
static const int yc = 2;
static const int oc = 4;

	#define M2C_MODULE_VSCREEN 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern viewport& vp;
extern dw& clipl;
extern dw& clipr;
extern dw& clipb;
extern dw& clipa;
extern dw& xadjust;
extern dw& yadjust;
extern dw& x_org;
extern dw& y_org;
extern dw& xcrtmax;
extern dw& ycrtmax;
extern dw& vsinr;
extern dw& vcosr;
extern dw& objectdrawmode;
extern dw& polyclipmode;
extern dw& dummy36e2d4b2_data_26_435;
extern dw& dummy36e2d4b2_data_28_436;
extern dw& plineclipmode;
extern dw& dummy36e2d4b2_data_2c_438;
extern dw& dummy36e2d4b2_data_2e_439;
extern dw& lastptr;
extern db (& lookahead)[2];
extern dw& intopolyclip;
extern dw& dummy36e2d4b2_data_36_447;
extern dw& dummy36e2d4b2_data_38_448;
extern dw& dummy36e2d4b2_data_3a_449;
extern dw& dummy36e2d4b2_data_3c_450;
extern dw& tempptr1;
extern dw& tempptr2;
extern dw& tempptr3;
extern db& viscode;

	
namespace m2c{
void   Initializer();
#ifndef M2C_CODE_EQUATE_begin
#define M2C_CODE_EQUATE_begin 1
static const dd kbegin = 0x1001;
#endif
#ifndef M2C_CODE_EQUATE_mainproc
#define M2C_CODE_EQUATE_mainproc 1
static const dd kmainproc = 0x1002;
#endif
#ifndef M2C_CODE_EQUATE_vsetviewport
#define M2C_CODE_EQUATE_vsetviewport 1
static const dd kvsetviewport = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_vsetrotation
#define M2C_CODE_EQUATE_vsetrotation 1
static const dd kvsetrotation = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_vcalcoutcodes
#define M2C_CODE_EQUATE_vcalcoutcodes 1
static const dd kvcalcoutcodes = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_ocodeloop
#define M2C_CODE_EQUATE_ocodeloop 1
static const dd kocodeloop = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_vtransform
#define M2C_CODE_EQUATE_vtransform 1
static const dd kvtransform = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_3_ocode1
#define M2C_CODE_EQUATE___m2c_macrolocal_3_ocode1 1
static const dd k__m2c_macrolocal_3_ocode1 = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_3_ocode2
#define M2C_CODE_EQUATE___m2c_macrolocal_3_ocode2 1
static const dd k__m2c_macrolocal_3_ocode2 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_3_ocode3
#define M2C_CODE_EQUATE___m2c_macrolocal_3_ocode3 1
static const dd k__m2c_macrolocal_3_ocode3 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_3_ocode4
#define M2C_CODE_EQUATE___m2c_macrolocal_3_ocode4 1
static const dd k__m2c_macrolocal_3_ocode4 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_skipobject
#define M2C_CODE_EQUATE_skipobject 1
static const dd kskipobject = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_drawobject
#define M2C_CODE_EQUATE_drawobject 1
static const dd kdrawobject = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_clipobject
#define M2C_CODE_EQUATE_clipobject 1
static const dd kclipobject = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_genxycrtloop
#define M2C_CODE_EQUATE_genxycrtloop 1
static const dd kgenxycrtloop = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_4_xcrtok
#define M2C_CODE_EQUATE___m2c_macrolocal_4_xcrtok 1
static const dd k__m2c_macrolocal_4_xcrtok = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_4_ycrtok
#define M2C_CODE_EQUATE___m2c_macrolocal_4_ycrtok 1
static const dd k__m2c_macrolocal_4_ycrtok = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_vquickoutcodes
#define M2C_CODE_EQUATE_vquickoutcodes 1
static const dd kvquickoutcodes = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_quickocodeloop
#define M2C_CODE_EQUATE_quickocodeloop 1
static const dd kquickocodeloop = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_5_ocode1
#define M2C_CODE_EQUATE___m2c_macrolocal_5_ocode1 1
static const dd k__m2c_macrolocal_5_ocode1 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_5_ocode2
#define M2C_CODE_EQUATE___m2c_macrolocal_5_ocode2 1
static const dd k__m2c_macrolocal_5_ocode2 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_5_ocode3
#define M2C_CODE_EQUATE___m2c_macrolocal_5_ocode3 1
static const dd k__m2c_macrolocal_5_ocode3 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_5_ocode4
#define M2C_CODE_EQUATE___m2c_macrolocal_5_ocode4 1
static const dd k__m2c_macrolocal_5_ocode4 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_vpolyclip
#define M2C_CODE_EQUATE_vpolyclip 1
static const dd kvpolyclip = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_drawpoly
#define M2C_CODE_EQUATE_drawpoly 1
static const dd kdrawpoly = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_drawpolyloop
#define M2C_CODE_EQUATE_drawpolyloop 1
static const dd kdrawpolyloop = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_sortpolyterm
#define M2C_CODE_EQUATE_sortpolyterm 1
static const dd ksortpolyterm = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_drawpolyfail
#define M2C_CODE_EQUATE_drawpolyfail 1
static const dd kdrawpolyfail = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_clippoly
#define M2C_CODE_EQUATE_clippoly 1
static const dd kclippoly = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_nextpolycoord
#define M2C_CODE_EQUATE_nextpolycoord 1
static const dd knextpolycoord = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_sortpolyvis
#define M2C_CODE_EQUATE_sortpolyvis 1
static const dd ksortpolyvis = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_clippolyfaillnk
#define M2C_CODE_EQUATE_clippolyfaillnk 1
static const dd kclippolyfaillnk = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_clipswitch
#define M2C_CODE_EQUATE_clipswitch 1
static const dd kclipswitch = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_clippolyfail
#define M2C_CODE_EQUATE_clippolyfail 1
static const dd kclippolyfail = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_intoleftclip
#define M2C_CODE_EQUATE_intoleftclip 1
static const dd kintoleftclip = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_leftcliploop
#define M2C_CODE_EQUATE_leftcliploop 1
static const dd kleftcliploop = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_skipleftclip
#define M2C_CODE_EQUATE_skipleftclip 1
static const dd kskipleftclip = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_polyclipleft
#define M2C_CODE_EQUATE_polyclipleft 1
static const dd kpolyclipleft = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_skipleftpoint
#define M2C_CODE_EQUATE_skipleftpoint 1
static const dd kskipleftpoint = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_nextleftclip
#define M2C_CODE_EQUATE_nextleftclip 1
static const dd knextleftclip = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_rightclipstart
#define M2C_CODE_EQUATE_rightclipstart 1
static const dd krightclipstart = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_leftfail
#define M2C_CODE_EQUATE_leftfail 1
static const dd kleftfail = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_belowclipstart
#define M2C_CODE_EQUATE_belowclipstart 1
static const dd kbelowclipstart = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_intorightclip
#define M2C_CODE_EQUATE_intorightclip 1
static const dd kintorightclip = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_rightcliploop
#define M2C_CODE_EQUATE_rightcliploop 1
static const dd krightcliploop = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_skiprightclip
#define M2C_CODE_EQUATE_skiprightclip 1
static const dd kskiprightclip = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_polyclipright
#define M2C_CODE_EQUATE_polyclipright 1
static const dd kpolyclipright = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_skiprightpoint
#define M2C_CODE_EQUATE_skiprightpoint 1
static const dd kskiprightpoint = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_nextrightclip
#define M2C_CODE_EQUATE_nextrightclip 1
static const dd knextrightclip = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_rightfail
#define M2C_CODE_EQUATE_rightfail 1
static const dd krightfail = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE_aboveclipstart
#define M2C_CODE_EQUATE_aboveclipstart 1
static const dd kaboveclipstart = 0x103b;
#endif
#ifndef M2C_CODE_EQUATE_intobelowclip
#define M2C_CODE_EQUATE_intobelowclip 1
static const dd kintobelowclip = 0x103c;
#endif
#ifndef M2C_CODE_EQUATE_belowcliploop
#define M2C_CODE_EQUATE_belowcliploop 1
static const dd kbelowcliploop = 0x103d;
#endif
#ifndef M2C_CODE_EQUATE_skipbelowclip
#define M2C_CODE_EQUATE_skipbelowclip 1
static const dd kskipbelowclip = 0x103e;
#endif
#ifndef M2C_CODE_EQUATE_polyclipbelow
#define M2C_CODE_EQUATE_polyclipbelow 1
static const dd kpolyclipbelow = 0x103f;
#endif
#ifndef M2C_CODE_EQUATE_skipbelowpoint
#define M2C_CODE_EQUATE_skipbelowpoint 1
static const dd kskipbelowpoint = 0x1040;
#endif
#ifndef M2C_CODE_EQUATE_nextbelowclip
#define M2C_CODE_EQUATE_nextbelowclip 1
static const dd knextbelowclip = 0x1041;
#endif
#ifndef M2C_CODE_EQUATE_belowfail
#define M2C_CODE_EQUATE_belowfail 1
static const dd kbelowfail = 0x1042;
#endif
#ifndef M2C_CODE_EQUATE_sortpolycrt
#define M2C_CODE_EQUATE_sortpolycrt 1
static const dd ksortpolycrt = 0x1043;
#endif
#ifndef M2C_CODE_EQUATE_intoaboveclip
#define M2C_CODE_EQUATE_intoaboveclip 1
static const dd kintoaboveclip = 0x1044;
#endif
#ifndef M2C_CODE_EQUATE_abovecliploop
#define M2C_CODE_EQUATE_abovecliploop 1
static const dd kabovecliploop = 0x1045;
#endif
#ifndef M2C_CODE_EQUATE_skipaboveclip
#define M2C_CODE_EQUATE_skipaboveclip 1
static const dd kskipaboveclip = 0x1046;
#endif
#ifndef M2C_CODE_EQUATE_polyclipabove
#define M2C_CODE_EQUATE_polyclipabove 1
static const dd kpolyclipabove = 0x1047;
#endif
#ifndef M2C_CODE_EQUATE_skipabovepoint
#define M2C_CODE_EQUATE_skipabovepoint 1
static const dd kskipabovepoint = 0x1048;
#endif
#ifndef M2C_CODE_EQUATE_nextaboveclip
#define M2C_CODE_EQUATE_nextaboveclip 1
static const dd knextaboveclip = 0x1049;
#endif
#ifndef M2C_CODE_EQUATE_polycrtloop
#define M2C_CODE_EQUATE_polycrtloop 1
static const dd kpolycrtloop = 0x104a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_10_xcrtok
#define M2C_CODE_EQUATE___m2c_macrolocal_10_xcrtok 1
static const dd k__m2c_macrolocal_10_xcrtok = 0x104b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_10_ycrtok
#define M2C_CODE_EQUATE___m2c_macrolocal_10_ycrtok 1
static const dd k__m2c_macrolocal_10_ycrtok = 0x104c;
#endif
#ifndef M2C_CODE_EQUATE_polyclipcheck
#define M2C_CODE_EQUATE_polyclipcheck 1
static const dd kpolyclipcheck = 0x104d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x104e;
#endif
#ifndef M2C_CODE_EQUATE_clipdiverror
#define M2C_CODE_EQUATE_clipdiverror 1
static const dd kclipdiverror = 0x104f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1050;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1051;
#endif
#ifndef M2C_CODE_EQUATE_viscode_0_proc
#define M2C_CODE_EQUATE_viscode_0_proc 1
static const dd kviscode_0_proc = 0x1052;
#endif
#ifndef M2C_CODE_EQUATE_pclipabovefail
#define M2C_CODE_EQUATE_pclipabovefail 1
static const dd kpclipabovefail = 0x1053;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x1054;
#endif
#ifndef M2C_CODE_EQUATE_pclipa_eq
#define M2C_CODE_EQUATE_pclipa_eq 1
static const dd kpclipa_eq = 0x1055;
#endif
#ifndef M2C_CODE_EQUATE_pclipa_gt
#define M2C_CODE_EQUATE_pclipa_gt 1
static const dd kpclipa_gt = 0x1056;
#endif
#ifndef M2C_CODE_EQUATE_pclipa_lt
#define M2C_CODE_EQUATE_pclipa_lt 1
static const dd kpclipa_lt = 0x1057;
#endif
#ifndef M2C_CODE_EQUATE_pclipacont
#define M2C_CODE_EQUATE_pclipacont 1
static const dd kpclipacont = 0x1058;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_13_ocode1
#define M2C_CODE_EQUATE___m2c_macrolocal_13_ocode1 1
static const dd k__m2c_macrolocal_13_ocode1 = 0x1059;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_13_ocode2
#define M2C_CODE_EQUATE___m2c_macrolocal_13_ocode2 1
static const dd k__m2c_macrolocal_13_ocode2 = 0x105a;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_13_ocode3
#define M2C_CODE_EQUATE___m2c_macrolocal_13_ocode3 1
static const dd k__m2c_macrolocal_13_ocode3 = 0x105b;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_13_ocode4
#define M2C_CODE_EQUATE___m2c_macrolocal_13_ocode4 1
static const dd k__m2c_macrolocal_13_ocode4 = 0x105c;
#endif
#ifndef M2C_CODE_EQUATE_pclipbelowfail
#define M2C_CODE_EQUATE_pclipbelowfail 1
static const dd kpclipbelowfail = 0x105d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x105e;
#endif
#ifndef M2C_CODE_EQUATE_pclipb_eq
#define M2C_CODE_EQUATE_pclipb_eq 1
static const dd kpclipb_eq = 0x105f;
#endif
#ifndef M2C_CODE_EQUATE_pclipb_gt
#define M2C_CODE_EQUATE_pclipb_gt 1
static const dd kpclipb_gt = 0x1060;
#endif
#ifndef M2C_CODE_EQUATE_pclipb_lt
#define M2C_CODE_EQUATE_pclipb_lt 1
static const dd kpclipb_lt = 0x1061;
#endif
#ifndef M2C_CODE_EQUATE_pclipbcont
#define M2C_CODE_EQUATE_pclipbcont 1
static const dd kpclipbcont = 0x1062;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_16_ocode1
#define M2C_CODE_EQUATE___m2c_macrolocal_16_ocode1 1
static const dd k__m2c_macrolocal_16_ocode1 = 0x1063;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_16_ocode2
#define M2C_CODE_EQUATE___m2c_macrolocal_16_ocode2 1
static const dd k__m2c_macrolocal_16_ocode2 = 0x1064;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_16_ocode3
#define M2C_CODE_EQUATE___m2c_macrolocal_16_ocode3 1
static const dd k__m2c_macrolocal_16_ocode3 = 0x1065;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_16_ocode4
#define M2C_CODE_EQUATE___m2c_macrolocal_16_ocode4 1
static const dd k__m2c_macrolocal_16_ocode4 = 0x1066;
#endif
#ifndef M2C_CODE_EQUATE_pcliprightfail
#define M2C_CODE_EQUATE_pcliprightfail 1
static const dd kpcliprightfail = 0x1067;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x1068;
#endif
#ifndef M2C_CODE_EQUATE_pclipr_eq
#define M2C_CODE_EQUATE_pclipr_eq 1
static const dd kpclipr_eq = 0x1069;
#endif
#ifndef M2C_CODE_EQUATE_pclipr_gt
#define M2C_CODE_EQUATE_pclipr_gt 1
static const dd kpclipr_gt = 0x106a;
#endif
#ifndef M2C_CODE_EQUATE_pclipr_lt
#define M2C_CODE_EQUATE_pclipr_lt 1
static const dd kpclipr_lt = 0x106b;
#endif
#ifndef M2C_CODE_EQUATE_pcliprcont
#define M2C_CODE_EQUATE_pcliprcont 1
static const dd kpcliprcont = 0x106c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_19_ocode1
#define M2C_CODE_EQUATE___m2c_macrolocal_19_ocode1 1
static const dd k__m2c_macrolocal_19_ocode1 = 0x106d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_19_ocode2
#define M2C_CODE_EQUATE___m2c_macrolocal_19_ocode2 1
static const dd k__m2c_macrolocal_19_ocode2 = 0x106e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_19_ocode3
#define M2C_CODE_EQUATE___m2c_macrolocal_19_ocode3 1
static const dd k__m2c_macrolocal_19_ocode3 = 0x106f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_19_ocode4
#define M2C_CODE_EQUATE___m2c_macrolocal_19_ocode4 1
static const dd k__m2c_macrolocal_19_ocode4 = 0x1070;
#endif
#ifndef M2C_CODE_EQUATE_pclipleftfail
#define M2C_CODE_EQUATE_pclipleftfail 1
static const dd kpclipleftfail = 0x1071;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x1072;
#endif
#ifndef M2C_CODE_EQUATE_pclipl_eq
#define M2C_CODE_EQUATE_pclipl_eq 1
static const dd kpclipl_eq = 0x1073;
#endif
#ifndef M2C_CODE_EQUATE_pclipl_gt
#define M2C_CODE_EQUATE_pclipl_gt 1
static const dd kpclipl_gt = 0x1074;
#endif
#ifndef M2C_CODE_EQUATE_pclipl_lt
#define M2C_CODE_EQUATE_pclipl_lt 1
static const dd kpclipl_lt = 0x1075;
#endif
#ifndef M2C_CODE_EQUATE_pcliplcont
#define M2C_CODE_EQUATE_pcliplcont 1
static const dd kpcliplcont = 0x1076;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_22_ocode1
#define M2C_CODE_EQUATE___m2c_macrolocal_22_ocode1 1
static const dd k__m2c_macrolocal_22_ocode1 = 0x1077;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_22_ocode2
#define M2C_CODE_EQUATE___m2c_macrolocal_22_ocode2 1
static const dd k__m2c_macrolocal_22_ocode2 = 0x1078;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_22_ocode3
#define M2C_CODE_EQUATE___m2c_macrolocal_22_ocode3 1
static const dd k__m2c_macrolocal_22_ocode3 = 0x1079;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_22_ocode4
#define M2C_CODE_EQUATE___m2c_macrolocal_22_ocode4 1
static const dd k__m2c_macrolocal_22_ocode4 = 0x107a;
#endif
#ifndef M2C_CODE_EQUATE_nullpoly
#define M2C_CODE_EQUATE_nullpoly 1
static const dd knullpoly = 0x107b;
#endif
#ifndef M2C_CODE_EQUATE_nullpolyloop
#define M2C_CODE_EQUATE_nullpolyloop 1
static const dd knullpolyloop = 0x107c;
#endif
#ifndef M2C_CODE_EQUATE_cliplineend
#define M2C_CODE_EQUATE_cliplineend 1
static const dd kcliplineend = 0x107d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x107e;
#endif
#ifndef M2C_CODE_EQUATE_skiplineleft
#define M2C_CODE_EQUATE_skiplineleft 1
static const dd kskiplineleft = 0x107f;
#endif
#ifndef M2C_CODE_EQUATE_lineclipleft
#define M2C_CODE_EQUATE_lineclipleft 1
static const dd klineclipleft = 0x1080;
#endif
#ifndef M2C_CODE_EQUATE_clipendexit
#define M2C_CODE_EQUATE_clipendexit 1
static const dd kclipendexit = 0x1081;
#endif
#ifndef M2C_CODE_EQUATE_skiplineright
#define M2C_CODE_EQUATE_skiplineright 1
static const dd kskiplineright = 0x1082;
#endif
#ifndef M2C_CODE_EQUATE_lineclipright
#define M2C_CODE_EQUATE_lineclipright 1
static const dd klineclipright = 0x1083;
#endif
#ifndef M2C_CODE_EQUATE_skiplinebelow
#define M2C_CODE_EQUATE_skiplinebelow 1
static const dd kskiplinebelow = 0x1084;
#endif
#ifndef M2C_CODE_EQUATE_lineclipbelow
#define M2C_CODE_EQUATE_lineclipbelow 1
static const dd klineclipbelow = 0x1085;
#endif
#ifndef M2C_CODE_EQUATE_clipendfail
#define M2C_CODE_EQUATE_clipendfail 1
static const dd kclipendfail = 0x1086;
#endif
#ifndef M2C_CODE_EQUATE_lineclipabove
#define M2C_CODE_EQUATE_lineclipabove 1
static const dd klineclipabove = 0x1087;
#endif
#ifndef M2C_CODE_EQUATE_lineclipcheck
#define M2C_CODE_EQUATE_lineclipcheck 1
static const dd klineclipcheck = 0x1088;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x1089;
#endif
#ifndef M2C_CODE_EQUATE_lclipdiverror
#define M2C_CODE_EQUATE_lclipdiverror 1
static const dd klclipdiverror = 0x108a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x108b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x108c;
#endif
#ifndef M2C_CODE_EQUATE_lclipabovefail
#define M2C_CODE_EQUATE_lclipabovefail 1
static const dd klclipabovefail = 0x108d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel16
#define M2C_CODE_EQUATE_edummylabel16 1
static const dd kedummylabel16 = 0x108e;
#endif
#ifndef M2C_CODE_EQUATE_lclipa_eq
#define M2C_CODE_EQUATE_lclipa_eq 1
static const dd klclipa_eq = 0x108f;
#endif
#ifndef M2C_CODE_EQUATE_lclipa_gt
#define M2C_CODE_EQUATE_lclipa_gt 1
static const dd klclipa_gt = 0x1090;
#endif
#ifndef M2C_CODE_EQUATE_lclipa_lt
#define M2C_CODE_EQUATE_lclipa_lt 1
static const dd klclipa_lt = 0x1091;
#endif
#ifndef M2C_CODE_EQUATE_lclipacont
#define M2C_CODE_EQUATE_lclipacont 1
static const dd klclipacont = 0x1092;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_25_ocode1
#define M2C_CODE_EQUATE___m2c_macrolocal_25_ocode1 1
static const dd k__m2c_macrolocal_25_ocode1 = 0x1093;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_25_ocode2
#define M2C_CODE_EQUATE___m2c_macrolocal_25_ocode2 1
static const dd k__m2c_macrolocal_25_ocode2 = 0x1094;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_25_ocode3
#define M2C_CODE_EQUATE___m2c_macrolocal_25_ocode3 1
static const dd k__m2c_macrolocal_25_ocode3 = 0x1095;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_25_ocode4
#define M2C_CODE_EQUATE___m2c_macrolocal_25_ocode4 1
static const dd k__m2c_macrolocal_25_ocode4 = 0x1096;
#endif
#ifndef M2C_CODE_EQUATE_lclipbelowfail
#define M2C_CODE_EQUATE_lclipbelowfail 1
static const dd klclipbelowfail = 0x1097;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel17
#define M2C_CODE_EQUATE_edummylabel17 1
static const dd kedummylabel17 = 0x1098;
#endif
#ifndef M2C_CODE_EQUATE_lclipb_eq
#define M2C_CODE_EQUATE_lclipb_eq 1
static const dd klclipb_eq = 0x1099;
#endif
#ifndef M2C_CODE_EQUATE_lclipb_gt
#define M2C_CODE_EQUATE_lclipb_gt 1
static const dd klclipb_gt = 0x109a;
#endif
#ifndef M2C_CODE_EQUATE_lclipb_lt
#define M2C_CODE_EQUATE_lclipb_lt 1
static const dd klclipb_lt = 0x109b;
#endif
#ifndef M2C_CODE_EQUATE_lclipbcont
#define M2C_CODE_EQUATE_lclipbcont 1
static const dd klclipbcont = 0x109c;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_28_ocode1
#define M2C_CODE_EQUATE___m2c_macrolocal_28_ocode1 1
static const dd k__m2c_macrolocal_28_ocode1 = 0x109d;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_28_ocode2
#define M2C_CODE_EQUATE___m2c_macrolocal_28_ocode2 1
static const dd k__m2c_macrolocal_28_ocode2 = 0x109e;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_28_ocode3
#define M2C_CODE_EQUATE___m2c_macrolocal_28_ocode3 1
static const dd k__m2c_macrolocal_28_ocode3 = 0x109f;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_28_ocode4
#define M2C_CODE_EQUATE___m2c_macrolocal_28_ocode4 1
static const dd k__m2c_macrolocal_28_ocode4 = 0x10a0;
#endif
#ifndef M2C_CODE_EQUATE_lcliprightfail
#define M2C_CODE_EQUATE_lcliprightfail 1
static const dd klcliprightfail = 0x10a1;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel18
#define M2C_CODE_EQUATE_edummylabel18 1
static const dd kedummylabel18 = 0x10a2;
#endif
#ifndef M2C_CODE_EQUATE_lclipr_eq
#define M2C_CODE_EQUATE_lclipr_eq 1
static const dd klclipr_eq = 0x10a3;
#endif
#ifndef M2C_CODE_EQUATE_lclipr_gt
#define M2C_CODE_EQUATE_lclipr_gt 1
static const dd klclipr_gt = 0x10a4;
#endif
#ifndef M2C_CODE_EQUATE_lclipr_lt
#define M2C_CODE_EQUATE_lclipr_lt 1
static const dd klclipr_lt = 0x10a5;
#endif
#ifndef M2C_CODE_EQUATE_lcliprcont
#define M2C_CODE_EQUATE_lcliprcont 1
static const dd klcliprcont = 0x10a6;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_31_ocode1
#define M2C_CODE_EQUATE___m2c_macrolocal_31_ocode1 1
static const dd k__m2c_macrolocal_31_ocode1 = 0x10a7;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_31_ocode2
#define M2C_CODE_EQUATE___m2c_macrolocal_31_ocode2 1
static const dd k__m2c_macrolocal_31_ocode2 = 0x10a8;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_31_ocode3
#define M2C_CODE_EQUATE___m2c_macrolocal_31_ocode3 1
static const dd k__m2c_macrolocal_31_ocode3 = 0x10a9;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_31_ocode4
#define M2C_CODE_EQUATE___m2c_macrolocal_31_ocode4 1
static const dd k__m2c_macrolocal_31_ocode4 = 0x10aa;
#endif
#ifndef M2C_CODE_EQUATE_lclipleftfail
#define M2C_CODE_EQUATE_lclipleftfail 1
static const dd klclipleftfail = 0x10ab;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel19
#define M2C_CODE_EQUATE_edummylabel19 1
static const dd kedummylabel19 = 0x10ac;
#endif
#ifndef M2C_CODE_EQUATE_lclipl_eq
#define M2C_CODE_EQUATE_lclipl_eq 1
static const dd klclipl_eq = 0x10ad;
#endif
#ifndef M2C_CODE_EQUATE_lclipl_gt
#define M2C_CODE_EQUATE_lclipl_gt 1
static const dd klclipl_gt = 0x10ae;
#endif
#ifndef M2C_CODE_EQUATE_lclipl_lt
#define M2C_CODE_EQUATE_lclipl_lt 1
static const dd klclipl_lt = 0x10af;
#endif
#ifndef M2C_CODE_EQUATE_lcliplcont
#define M2C_CODE_EQUATE_lcliplcont 1
static const dd klcliplcont = 0x10b0;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_34_ocode1
#define M2C_CODE_EQUATE___m2c_macrolocal_34_ocode1 1
static const dd k__m2c_macrolocal_34_ocode1 = 0x10b1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_34_ocode2
#define M2C_CODE_EQUATE___m2c_macrolocal_34_ocode2 1
static const dd k__m2c_macrolocal_34_ocode2 = 0x10b2;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_34_ocode3
#define M2C_CODE_EQUATE___m2c_macrolocal_34_ocode3 1
static const dd k__m2c_macrolocal_34_ocode3 = 0x10b3;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_34_ocode4
#define M2C_CODE_EQUATE___m2c_macrolocal_34_ocode4 1
static const dd k__m2c_macrolocal_34_ocode4 = 0x10b4;
#endif
#ifndef M2C_CODE_EQUATE_vpolylineclip
#define M2C_CODE_EQUATE_vpolylineclip 1
static const dd kvpolylineclip = 0x10b5;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel20
#define M2C_CODE_EQUATE_edummylabel20 1
static const dd kedummylabel20 = 0x10b6;
#endif
#ifndef M2C_CODE_EQUATE_drawpolyline
#define M2C_CODE_EQUATE_drawpolyline 1
static const dd kdrawpolyline = 0x10b7;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel21
#define M2C_CODE_EQUATE_edummylabel21 1
static const dd kedummylabel21 = 0x10b8;
#endif
#ifndef M2C_CODE_EQUATE_drawplineexit
#define M2C_CODE_EQUATE_drawplineexit 1
static const dd kdrawplineexit = 0x10b9;
#endif
#ifndef M2C_CODE_EQUATE_drawplineloop
#define M2C_CODE_EQUATE_drawplineloop 1
static const dd kdrawplineloop = 0x10ba;
#endif
#ifndef M2C_CODE_EQUATE_drawplinefail
#define M2C_CODE_EQUATE_drawplinefail 1
static const dd kdrawplinefail = 0x10bb;
#endif
#ifndef M2C_CODE_EQUATE_clipplineexit
#define M2C_CODE_EQUATE_clipplineexit 1
static const dd kclipplineexit = 0x10bc;
#endif
#ifndef M2C_CODE_EQUATE_clipplinefail
#define M2C_CODE_EQUATE_clipplinefail 1
static const dd kclipplinefail = 0x10bd;
#endif
#ifndef M2C_CODE_EQUATE_clippolyline
#define M2C_CODE_EQUATE_clippolyline 1
static const dd kclippolyline = 0x10be;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel22
#define M2C_CODE_EQUATE_edummylabel22 1
static const dd kedummylabel22 = 0x10bf;
#endif
#ifndef M2C_CODE_EQUATE_clipplineloop
#define M2C_CODE_EQUATE_clipplineloop 1
static const dd kclipplineloop = 0x10c0;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_35_xcrtok
#define M2C_CODE_EQUATE___m2c_macrolocal_35_xcrtok 1
static const dd k__m2c_macrolocal_35_xcrtok = 0x10c1;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_35_ycrtok
#define M2C_CODE_EQUATE___m2c_macrolocal_35_ycrtok 1
static const dd k__m2c_macrolocal_35_ycrtok = 0x10c2;
#endif
#ifndef M2C_CODE_EQUATE_plinevistest
#define M2C_CODE_EQUATE_plinevistest 1
static const dd kplinevistest = 0x10c3;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_36_xcrtok
#define M2C_CODE_EQUATE___m2c_macrolocal_36_xcrtok 1
static const dd k__m2c_macrolocal_36_xcrtok = 0x10c4;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_36_ycrtok
#define M2C_CODE_EQUATE___m2c_macrolocal_36_ycrtok 1
static const dd k__m2c_macrolocal_36_ycrtok = 0x10c5;
#endif
#ifndef M2C_CODE_EQUATE_plinenonvis
#define M2C_CODE_EQUATE_plinenonvis 1
static const dd kplinenonvis = 0x10c6;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x10c7;
#endif
#ifndef M2C_CODE_EQUATE_clipplinedraw
#define M2C_CODE_EQUATE_clipplinedraw 1
static const dd kclipplinedraw = 0x10c8;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x10c9;
#endif
#ifndef M2C_CODE_EQUATE_clipplineendb
#define M2C_CODE_EQUATE_clipplineendb 1
static const dd kclipplineendb = 0x10ca;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x10cb;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_37_xcrtok
#define M2C_CODE_EQUATE___m2c_macrolocal_37_xcrtok 1
static const dd k__m2c_macrolocal_37_xcrtok = 0x10cc;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_37_ycrtok
#define M2C_CODE_EQUATE___m2c_macrolocal_37_ycrtok 1
static const dd k__m2c_macrolocal_37_ycrtok = 0x10cd;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_38_xcrtok
#define M2C_CODE_EQUATE___m2c_macrolocal_38_xcrtok 1
static const dd k__m2c_macrolocal_38_xcrtok = 0x10ce;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_38_ycrtok
#define M2C_CODE_EQUATE___m2c_macrolocal_38_ycrtok 1
static const dd k__m2c_macrolocal_38_ycrtok = 0x10cf;
#endif
#ifndef M2C_CODE_EQUATE_nullpolyline
#define M2C_CODE_EQUATE_nullpolyline 1
static const dd knullpolyline = 0x10d0;
#endif
#ifndef M2C_CODE_EQUATE_nullplineloop
#define M2C_CODE_EQUATE_nullplineloop 1
static const dd knullplineloop = 0x10d1;
#endif
#ifndef M2C_CODE_EQUATE_vquicklineclip
#define M2C_CODE_EQUATE_vquicklineclip 1
static const dd kvquicklineclip = 0x10d2;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel23
#define M2C_CODE_EQUATE_edummylabel23 1
static const dd kedummylabel23 = 0x10d3;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_39_ocode1
#define M2C_CODE_EQUATE___m2c_macrolocal_39_ocode1 1
static const dd k__m2c_macrolocal_39_ocode1 = 0x10d4;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_39_ocode2
#define M2C_CODE_EQUATE___m2c_macrolocal_39_ocode2 1
static const dd k__m2c_macrolocal_39_ocode2 = 0x10d5;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_39_ocode3
#define M2C_CODE_EQUATE___m2c_macrolocal_39_ocode3 1
static const dd k__m2c_macrolocal_39_ocode3 = 0x10d6;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_39_ocode4
#define M2C_CODE_EQUATE___m2c_macrolocal_39_ocode4 1
static const dd k__m2c_macrolocal_39_ocode4 = 0x10d7;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_40_ocode1
#define M2C_CODE_EQUATE___m2c_macrolocal_40_ocode1 1
static const dd k__m2c_macrolocal_40_ocode1 = 0x10d8;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_40_ocode2
#define M2C_CODE_EQUATE___m2c_macrolocal_40_ocode2 1
static const dd k__m2c_macrolocal_40_ocode2 = 0x10d9;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_40_ocode3
#define M2C_CODE_EQUATE___m2c_macrolocal_40_ocode3 1
static const dd k__m2c_macrolocal_40_ocode3 = 0x10da;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_40_ocode4
#define M2C_CODE_EQUATE___m2c_macrolocal_40_ocode4 1
static const dd k__m2c_macrolocal_40_ocode4 = 0x10db;
#endif
#ifndef M2C_CODE_EQUATE_qlineclipfail
#define M2C_CODE_EQUATE_qlineclipfail 1
static const dd kqlineclipfail = 0x10dc;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x10dd;
#endif
#ifndef M2C_CODE_EQUATE_clipenda
#define M2C_CODE_EQUATE_clipenda 1
static const dd kclipenda = 0x10de;
#endif
#ifndef M2C_CODE_EQUATE_calcendacrt
#define M2C_CODE_EQUATE_calcendacrt 1
static const dd kcalcendacrt = 0x10df;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_41_xcrtok
#define M2C_CODE_EQUATE___m2c_macrolocal_41_xcrtok 1
static const dd k__m2c_macrolocal_41_xcrtok = 0x10e0;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_41_ycrtok
#define M2C_CODE_EQUATE___m2c_macrolocal_41_ycrtok 1
static const dd k__m2c_macrolocal_41_ycrtok = 0x10e1;
#endif
#ifndef M2C_CODE_EQUATE_clipendb
#define M2C_CODE_EQUATE_clipendb 1
static const dd kclipendb = 0x10e2;
#endif
#ifndef M2C_CODE_EQUATE_calcendbcrt
#define M2C_CODE_EQUATE_calcendbcrt 1
static const dd kcalcendbcrt = 0x10e3;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_42_xcrtok
#define M2C_CODE_EQUATE___m2c_macrolocal_42_xcrtok 1
static const dd k__m2c_macrolocal_42_xcrtok = 0x10e4;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_42_ycrtok
#define M2C_CODE_EQUATE___m2c_macrolocal_42_ycrtok 1
static const dd k__m2c_macrolocal_42_ycrtok = 0x10e5;
#endif
#ifndef M2C_CODE_EQUATE_vdotclip
#define M2C_CODE_EQUATE_vdotclip 1
static const dd kvdotclip = 0x10e6;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel24
#define M2C_CODE_EQUATE_edummylabel24 1
static const dd kedummylabel24 = 0x10e7;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_43_ocode1
#define M2C_CODE_EQUATE___m2c_macrolocal_43_ocode1 1
static const dd k__m2c_macrolocal_43_ocode1 = 0x10e8;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_43_ocode2
#define M2C_CODE_EQUATE___m2c_macrolocal_43_ocode2 1
static const dd k__m2c_macrolocal_43_ocode2 = 0x10e9;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_43_ocode3
#define M2C_CODE_EQUATE___m2c_macrolocal_43_ocode3 1
static const dd k__m2c_macrolocal_43_ocode3 = 0x10ea;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_43_ocode4
#define M2C_CODE_EQUATE___m2c_macrolocal_43_ocode4 1
static const dd k__m2c_macrolocal_43_ocode4 = 0x10eb;
#endif
#ifndef M2C_CODE_EQUATE_dotclipfail
#define M2C_CODE_EQUATE_dotclipfail 1
static const dd kdotclipfail = 0x10ec;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_44_xcrtok
#define M2C_CODE_EQUATE___m2c_macrolocal_44_xcrtok 1
static const dd k__m2c_macrolocal_44_xcrtok = 0x10ed;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_44_ycrtok
#define M2C_CODE_EQUATE___m2c_macrolocal_44_ycrtok 1
static const dd k__m2c_macrolocal_44_ycrtok = 0x10ee;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x10ef;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
static bool cliplineend(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool clippoly(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool clippolyline(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawpoly(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawpolyline(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool lineclipabove(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool lineclipbelow(m2c::_offsets, struct m2c::_STATE*);
static bool lineclipcheck(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool lineclipleft(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool lineclipright(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool nullpoly(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool nullpolyline(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool polyclipabove(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool polyclipbelow(m2c::_offsets, struct m2c::_STATE*);
static bool polyclipcheck(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool polyclipleft(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool polyclipright(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool vcalcoutcodes(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool vdotclip(m2c::_offsets, struct m2c::_STATE*);
static bool viscode_0_proc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool vpolyclip(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool vpolylineclip(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool vquicklineclip(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool vquickoutcodes(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool vsetrotation(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool vsetviewport(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool vtransform(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


#ifndef sintable
extern dw& sintable;
#endif
#ifndef xe
extern dw& xe;
#endif
#ifndef xcrt
extern dw& xcrt;
#endif
#ifndef ye
extern dw& ye;
#endif
#ifndef costable
extern dw& costable;
#endif
#ifndef cliprecover
extern dw& cliprecover;
#endif
#ifndef ycrt
extern db& ycrt;
#endif
#ifndef clipbuffer
extern dw& clipbuffer;
#endif
#ifndef outcode
extern db& outcode;
#endif

#endif
