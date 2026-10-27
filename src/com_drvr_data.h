#ifndef __M2C_COM_DRVR_DATA_H__
#define __M2C_COM_DRVR_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& videobufsize;
extern dw& workscrptr;
extern dw& realscrptr;
extern dw& screenmode;
extern dw& screenpage;
extern dw& flipmode;
extern db (& setpaletteflag)[2];
extern dw& polycount;
extern dw& maxframerate;
extern dw& screentypetable;
extern dw& screentype;
extern db (& pixelcol)[2];
extern db (& linecol)[2];
extern db (& fillcol)[2];
extern db (& hrznlhscol)[2];
extern db (& hrznrhscol)[2];
extern db (& palette)[256];
extern dw& palettetable;
extern dw& attrtable;
extern dw& dummy679d9bb8_data_124_354;
extern dw& prtln;
extern dw& prtcl;
extern db (& forecol)[2];
extern db (& backcol)[2];
extern db (& printover)[2];
extern dw& charsetptr1;
extern dw& charsetptr2;
extern dw& charsetptr3;
extern dw& spritex;
extern dw& spritey;
extern dw& spriteptr;
extern db (& clipxtable)[2];
extern dw& clipxmin;
extern dw& clipxmax;
extern dw& clipymin;
extern dw& clipymax;
extern dw& hrznxmin;
extern dw& hrznxmax;
extern dw& jumpinitlist;
extern dw& dummy679d9bb8_data_14c_392;
extern dw& dummy679d9bb8_data_14e_393;
extern dw& dummy679d9bb8_data_150_394;
extern dw& dummy679d9bb8_data_152_395;
extern dw& dummy679d9bb8_data_154_396;
extern dw& dummy679d9bb8_data_156_397;
extern dw& dummy679d9bb8_data_158_398;
extern dw& dummy679d9bb8_data_15a_399;
extern dw& dummy679d9bb8_data_15c_400;
extern dw& dummy679d9bb8_data_15e_401;
extern dw& dummy679d9bb8_data_160_402;
extern dw& dummy679d9bb8_data_162_403;
extern dw& dummy679d9bb8_data_164_404;
extern dw& dummy679d9bb8_data_166_405;
extern dw& dummy679d9bb8_data_168_406;
extern dw& dummy679d9bb8_data_16a_407;
extern dw& dummy679d9bb8_data_16c_408;
extern dw& dummy679d9bb8_data_16e_409;
extern dw& dummy679d9bb8_data_170_410;
extern dw& dummy679d9bb8_data_172_411;
extern dw& dummy679d9bb8_data_174_412;
extern dw& dummy679d9bb8_data_176_413;
extern dw& dummy679d9bb8_data_178_414;
extern dw& dummy679d9bb8_data_17a_415;
extern dw& dummy679d9bb8_data_17c_416;
extern dw& dummy679d9bb8_data_17e_417;
extern dw& _setvideomode;
extern dw& dummy679d9bb8_data_182_419;
extern dw& _download;
extern dw& dummy679d9bb8_data_186_421;
extern dw& _setpixel;
extern dw& dummy679d9bb8_data_18a_423;
extern dw& _linedraw;
extern dw& dummy679d9bb8_data_18e_425;
extern dw& _vlinedraw;
extern dw& dummy679d9bb8_data_192_427;
extern dw& _hlinedraw;
extern dw& dummy679d9bb8_data_196_429;
extern dw& _polyfill;
extern dw& dummy679d9bb8_data_19a_431;
extern dw& _meshfill;
extern dw& dummy679d9bb8_data_19e_433;
extern dw& _smokefill;
extern dw& dummy679d9bb8_data_1a2_435;
extern dw& _printchar1;
extern dw& dummy679d9bb8_data_1a6_437;
extern dw& _printchar2;
extern dw& dummy679d9bb8_data_1aa_439;
extern dw& _printchar3;
extern dw& dummy679d9bb8_data_1ae_441;
extern dw& _ssprite;
extern dw& _msprite;
extern dw& _bsprite;
extern dw& _qsprite;
extern dw& _initssprites;
extern dw& _initmsprites;
extern dw& _initqsprites;
extern dw& _blockfill;
extern dw& dummy679d9bb8_data_1c0_457;
extern dw& _savemousebgnd;
extern dw& dummy679d9bb8_data_1c4_459;
extern dw& _loadmousebgnd;
extern dw& dummy679d9bb8_data_1c8_461;
extern dw& _savescreen;
extern dw& dummy679d9bb8_data_1cc_463;
extern dw& _loadscreen;
extern dw& dummy679d9bb8_data_1d0_465;
extern dw& _uncompresspic;
extern dw& dummy679d9bb8_data_1d4_467;
extern dw& _horizonfill;
extern dw& dummy679d9bb8_data_1d8_469;
extern word& sprite;
extern db& wsdata;
extern db (& workscreen)[32000];
extern db (& copyscreen)[32000];
extern db (& mousehouse)[320];
extern db& gcode;

#ifndef mousex
extern dw& mousex;
#endif
#ifndef tan_palette1
extern db& tan_palette1;
#endif
#ifndef elapsedtime
extern dd& elapsedtime;
#endif
#ifndef frames
extern dw& frames;
#endif
#ifndef frameelaptime
extern dd& frameelaptime;
#endif
#ifndef standard_7by9
extern db& standard_7by9;
#endif
#ifndef standard_5by9
extern db& standard_5by9;
#endif
#ifndef mousey
extern dw& mousey;
#endif
#ifndef vga_palette1
extern db& vga_palette1;
#endif
#ifndef lastframe
extern dw& lastframe;
#endif
#ifndef standard_3by5
extern db& standard_3by5;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_setvideomode
#define M2C_CODE_EQUATE_setvideomode 1
static const dd ksetvideomode = 0x106d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x106e;
#endif
#ifndef M2C_CODE_EQUATE_setvideoloop
#define M2C_CODE_EQUATE_setvideoloop 1
static const dd ksetvideoloop = 0x106f;
#endif
#ifndef M2C_CODE_EQUATE_initpalette
#define M2C_CODE_EQUATE_initpalette 1
static const dd kinitpalette = 0x1070;
#endif
#ifndef M2C_CODE_EQUATE_download
#define M2C_CODE_EQUATE_download 1
static const dd kdownload = 0x1072;
#endif
#ifndef M2C_CODE_EQUATE_framewait
#define M2C_CODE_EQUATE_framewait 1
static const dd kframewait = 0x1073;
#endif
#ifndef M2C_CODE_EQUATE_setpixel
#define M2C_CODE_EQUATE_setpixel 1
static const dd ksetpixel = 0x1074;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1075;
#endif
#ifndef M2C_CODE_EQUATE_linedraw
#define M2C_CODE_EQUATE_linedraw 1
static const dd klinedraw = 0x1076;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1077;
#endif
#ifndef M2C_CODE_EQUATE_vlinedraw
#define M2C_CODE_EQUATE_vlinedraw 1
static const dd kvlinedraw = 0x1078;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1079;
#endif
#ifndef M2C_CODE_EQUATE_hlinedraw
#define M2C_CODE_EQUATE_hlinedraw 1
static const dd khlinedraw = 0x107a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x107b;
#endif
#ifndef M2C_CODE_EQUATE_printchar1
#define M2C_CODE_EQUATE_printchar1 1
static const dd kprintchar1 = 0x107c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x107d;
#endif
#ifndef M2C_CODE_EQUATE_printchar2
#define M2C_CODE_EQUATE_printchar2 1
static const dd kprintchar2 = 0x107e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x107f;
#endif
#ifndef M2C_CODE_EQUATE_printchar3
#define M2C_CODE_EQUATE_printchar3 1
static const dd kprintchar3 = 0x1080;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x1081;
#endif
#ifndef M2C_CODE_EQUATE_ssprite
#define M2C_CODE_EQUATE_ssprite 1
static const dd kssprite = 0x1082;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x1083;
#endif
#ifndef M2C_CODE_EQUATE_msprite
#define M2C_CODE_EQUATE_msprite 1
static const dd kmsprite = 0x1084;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x1085;
#endif
#ifndef M2C_CODE_EQUATE_bsprite
#define M2C_CODE_EQUATE_bsprite 1
static const dd kbsprite = 0x1086;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x1087;
#endif
#ifndef M2C_CODE_EQUATE_qsprite
#define M2C_CODE_EQUATE_qsprite 1
static const dd kqsprite = 0x1088;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x1089;
#endif
#ifndef M2C_CODE_EQUATE_initssprites
#define M2C_CODE_EQUATE_initssprites 1
static const dd kinitssprites = 0x108a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x108b;
#endif
#ifndef M2C_CODE_EQUATE_initmsprites
#define M2C_CODE_EQUATE_initmsprites 1
static const dd kinitmsprites = 0x108c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x108d;
#endif
#ifndef M2C_CODE_EQUATE_initqsprites
#define M2C_CODE_EQUATE_initqsprites 1
static const dd kinitqsprites = 0x108e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x108f;
#endif
#ifndef M2C_CODE_EQUATE_blockfill
#define M2C_CODE_EQUATE_blockfill 1
static const dd kblockfill = 0x1090;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel16
#define M2C_CODE_EQUATE_edummylabel16 1
static const dd kedummylabel16 = 0x1091;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel17
#define M2C_CODE_EQUATE_edummylabel17 1
static const dd kedummylabel17 = 0x1092;
#endif
#ifndef M2C_CODE_EQUATE_savemousebgnd
#define M2C_CODE_EQUATE_savemousebgnd 1
static const dd ksavemousebgnd = 0x1093;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel18
#define M2C_CODE_EQUATE_edummylabel18 1
static const dd kedummylabel18 = 0x1094;
#endif
#ifndef M2C_CODE_EQUATE_loadmousebgnd
#define M2C_CODE_EQUATE_loadmousebgnd 1
static const dd kloadmousebgnd = 0x1095;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel19
#define M2C_CODE_EQUATE_edummylabel19 1
static const dd kedummylabel19 = 0x1096;
#endif
#ifndef M2C_CODE_EQUATE_savescreen
#define M2C_CODE_EQUATE_savescreen 1
static const dd ksavescreen = 0x1097;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel20
#define M2C_CODE_EQUATE_edummylabel20 1
static const dd kedummylabel20 = 0x1098;
#endif
#ifndef M2C_CODE_EQUATE_loadscreen
#define M2C_CODE_EQUATE_loadscreen 1
static const dd kloadscreen = 0x1099;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel21
#define M2C_CODE_EQUATE_edummylabel21 1
static const dd kedummylabel21 = 0x109a;
#endif
#ifndef M2C_CODE_EQUATE_uncompresspic
#define M2C_CODE_EQUATE_uncompresspic 1
static const dd kuncompresspic = 0x109b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel22
#define M2C_CODE_EQUATE_edummylabel22 1
static const dd kedummylabel22 = 0x109c;
#endif
#ifndef M2C_CODE_EQUATE_horizonfill
#define M2C_CODE_EQUATE_horizonfill 1
static const dd khorizonfill = 0x109d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel23
#define M2C_CODE_EQUATE_edummylabel23 1
static const dd kedummylabel23 = 0x109e;
#endif
#ifndef M2C_CODE_EQUATE_null
#define M2C_CODE_EQUATE_null 1
static const dd knull = 0x109f;
#endif
#ifndef M2C_CODE_EQUATE_setattributes
#define M2C_CODE_EQUATE_setattributes 1
static const dd ksetattributes = 0x10a0;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel24
#define M2C_CODE_EQUATE_edummylabel24 1
static const dd kedummylabel24 = 0x10a1;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel25
#define M2C_CODE_EQUATE_edummylabel25 1
static const dd kedummylabel25 = 0x10a2;
#endif
#ifndef M2C_CODE_EQUATE_setsspriteclip
#define M2C_CODE_EQUATE_setsspriteclip 1
static const dd ksetsspriteclip = 0x10a3;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel26
#define M2C_CODE_EQUATE_edummylabel26 1
static const dd kedummylabel26 = 0x10a4;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_videobufsize
#define M2C_CODE_EQUATE_videobufsize 1
static const dd kvideobufsize = (m2c::near_offset_external(::videobufsize));
#endif
#ifndef M2C_CODE_EQUATE_workscrptr
#define M2C_CODE_EQUATE_workscrptr 1
static const dd kworkscrptr = (m2c::near_offset_external(::workscrptr));
#endif
#ifndef M2C_CODE_EQUATE_realscrptr
#define M2C_CODE_EQUATE_realscrptr 1
static const dd krealscrptr = (m2c::near_offset_external(::realscrptr));
#endif
#ifndef M2C_CODE_EQUATE_screenmode
#define M2C_CODE_EQUATE_screenmode 1
static const dd kscreenmode = (m2c::near_offset_external(::screenmode));
#endif
#ifndef M2C_CODE_EQUATE_screenpage
#define M2C_CODE_EQUATE_screenpage 1
static const dd kscreenpage = (m2c::near_offset_external(::screenpage));
#endif
#ifndef M2C_CODE_EQUATE_flipmode
#define M2C_CODE_EQUATE_flipmode 1
static const dd kflipmode = (m2c::near_offset_external(::flipmode));
#endif
#ifndef M2C_CODE_EQUATE_setpaletteflag
#define M2C_CODE_EQUATE_setpaletteflag 1
static const dd ksetpaletteflag = (m2c::near_offset_external(::setpaletteflag));
#endif
#ifndef M2C_CODE_EQUATE_polycount
#define M2C_CODE_EQUATE_polycount 1
static const dd kpolycount = (m2c::near_offset_external(::polycount));
#endif
#ifndef M2C_CODE_EQUATE_maxframerate
#define M2C_CODE_EQUATE_maxframerate 1
static const dd kmaxframerate = (m2c::near_offset_external(::maxframerate));
#endif
#ifndef M2C_CODE_EQUATE_screentypetable
#define M2C_CODE_EQUATE_screentypetable 1
static const dd kscreentypetable = (m2c::near_offset_external(::screentypetable));
#endif
#ifndef M2C_CODE_EQUATE_screentype
#define M2C_CODE_EQUATE_screentype 1
static const dd kscreentype = (m2c::near_offset_external(::screentype));
#endif
#ifndef M2C_CODE_EQUATE_pixelcol
#define M2C_CODE_EQUATE_pixelcol 1
static const dd kpixelcol = (m2c::near_offset_external(::pixelcol));
#endif
#ifndef M2C_CODE_EQUATE_linecol
#define M2C_CODE_EQUATE_linecol 1
static const dd klinecol = (m2c::near_offset_external(::linecol));
#endif
#ifndef M2C_CODE_EQUATE_fillcol
#define M2C_CODE_EQUATE_fillcol 1
static const dd kfillcol = (m2c::near_offset_external(::fillcol));
#endif
#ifndef M2C_CODE_EQUATE_hrznlhscol
#define M2C_CODE_EQUATE_hrznlhscol 1
static const dd khrznlhscol = (m2c::near_offset_external(::hrznlhscol));
#endif
#ifndef M2C_CODE_EQUATE_hrznrhscol
#define M2C_CODE_EQUATE_hrznrhscol 1
static const dd khrznrhscol = (m2c::near_offset_external(::hrznrhscol));
#endif
#ifndef M2C_CODE_EQUATE_palette
#define M2C_CODE_EQUATE_palette 1
static const dd kpalette = (m2c::near_offset_external(::palette));
#endif
#ifndef M2C_CODE_EQUATE_palettetable
#define M2C_CODE_EQUATE_palettetable 1
static const dd kpalettetable = (m2c::near_offset_external(::palettetable));
#endif
#ifndef M2C_CODE_EQUATE_attrtable
#define M2C_CODE_EQUATE_attrtable 1
static const dd kattrtable = (m2c::near_offset_external(::attrtable));
#endif
#ifndef M2C_CODE_EQUATE_prtln
#define M2C_CODE_EQUATE_prtln 1
static const dd kprtln = (m2c::near_offset_external(::prtln));
#endif
#ifndef M2C_CODE_EQUATE_prtcl
#define M2C_CODE_EQUATE_prtcl 1
static const dd kprtcl = (m2c::near_offset_external(::prtcl));
#endif
#ifndef M2C_CODE_EQUATE_forecol
#define M2C_CODE_EQUATE_forecol 1
static const dd kforecol = (m2c::near_offset_external(::forecol));
#endif
#ifndef M2C_CODE_EQUATE_backcol
#define M2C_CODE_EQUATE_backcol 1
static const dd kbackcol = (m2c::near_offset_external(::backcol));
#endif
#ifndef M2C_CODE_EQUATE_printover
#define M2C_CODE_EQUATE_printover 1
static const dd kprintover = (m2c::near_offset_external(::printover));
#endif
#ifndef M2C_CODE_EQUATE_charsetptr1
#define M2C_CODE_EQUATE_charsetptr1 1
static const dd kcharsetptr1 = (m2c::near_offset_external(::charsetptr1));
#endif
#ifndef M2C_CODE_EQUATE_charsetptr2
#define M2C_CODE_EQUATE_charsetptr2 1
static const dd kcharsetptr2 = (m2c::near_offset_external(::charsetptr2));
#endif
#ifndef M2C_CODE_EQUATE_charsetptr3
#define M2C_CODE_EQUATE_charsetptr3 1
static const dd kcharsetptr3 = (m2c::near_offset_external(::charsetptr3));
#endif
#ifndef M2C_CODE_EQUATE_spritex
#define M2C_CODE_EQUATE_spritex 1
static const dd kspritex = (m2c::near_offset_external(::spritex));
#endif
#ifndef M2C_CODE_EQUATE_spritey
#define M2C_CODE_EQUATE_spritey 1
static const dd kspritey = (m2c::near_offset_external(::spritey));
#endif
#ifndef M2C_CODE_EQUATE_spriteptr
#define M2C_CODE_EQUATE_spriteptr 1
static const dd kspriteptr = (m2c::near_offset_external(::spriteptr));
#endif
#ifndef M2C_CODE_EQUATE_clipxtable
#define M2C_CODE_EQUATE_clipxtable 1
static const dd kclipxtable = (m2c::near_offset_external(::clipxtable));
#endif
#ifndef M2C_CODE_EQUATE_clipxmin
#define M2C_CODE_EQUATE_clipxmin 1
static const dd kclipxmin = (m2c::near_offset_external(::clipxmin));
#endif
#ifndef M2C_CODE_EQUATE_clipxmax
#define M2C_CODE_EQUATE_clipxmax 1
static const dd kclipxmax = (m2c::near_offset_external(::clipxmax));
#endif
#ifndef M2C_CODE_EQUATE_clipymin
#define M2C_CODE_EQUATE_clipymin 1
static const dd kclipymin = (m2c::near_offset_external(::clipymin));
#endif
#ifndef M2C_CODE_EQUATE_clipymax
#define M2C_CODE_EQUATE_clipymax 1
static const dd kclipymax = (m2c::near_offset_external(::clipymax));
#endif
#ifndef M2C_CODE_EQUATE_hrznxmin
#define M2C_CODE_EQUATE_hrznxmin 1
static const dd khrznxmin = (m2c::near_offset_external(::hrznxmin));
#endif
#ifndef M2C_CODE_EQUATE_hrznxmax
#define M2C_CODE_EQUATE_hrznxmax 1
static const dd khrznxmax = (m2c::near_offset_external(::hrznxmax));
#endif
#ifndef M2C_CODE_EQUATE_jumpinitlist
#define M2C_CODE_EQUATE_jumpinitlist 1
static const dd kjumpinitlist = (m2c::near_offset_external(::jumpinitlist));
#endif
#ifndef M2C_CODE_EQUATE__setvideomode
#define M2C_CODE_EQUATE__setvideomode 1
static const dd k_setvideomode = (m2c::near_offset_external(::_setvideomode));
#endif
#ifndef M2C_CODE_EQUATE__download
#define M2C_CODE_EQUATE__download 1
static const dd k_download = (m2c::near_offset_external(::_download));
#endif
#ifndef M2C_CODE_EQUATE__setpixel
#define M2C_CODE_EQUATE__setpixel 1
static const dd k_setpixel = (m2c::near_offset_external(::_setpixel));
#endif
#ifndef M2C_CODE_EQUATE__linedraw
#define M2C_CODE_EQUATE__linedraw 1
static const dd k_linedraw = (m2c::near_offset_external(::_linedraw));
#endif
#ifndef M2C_CODE_EQUATE__vlinedraw
#define M2C_CODE_EQUATE__vlinedraw 1
static const dd k_vlinedraw = (m2c::near_offset_external(::_vlinedraw));
#endif
#ifndef M2C_CODE_EQUATE__hlinedraw
#define M2C_CODE_EQUATE__hlinedraw 1
static const dd k_hlinedraw = (m2c::near_offset_external(::_hlinedraw));
#endif
#ifndef M2C_CODE_EQUATE__polyfill
#define M2C_CODE_EQUATE__polyfill 1
static const dd k_polyfill = (m2c::near_offset_external(::_polyfill));
#endif
#ifndef M2C_CODE_EQUATE__meshfill
#define M2C_CODE_EQUATE__meshfill 1
static const dd k_meshfill = (m2c::near_offset_external(::_meshfill));
#endif
#ifndef M2C_CODE_EQUATE__smokefill
#define M2C_CODE_EQUATE__smokefill 1
static const dd k_smokefill = (m2c::near_offset_external(::_smokefill));
#endif
#ifndef M2C_CODE_EQUATE__printchar1
#define M2C_CODE_EQUATE__printchar1 1
static const dd k_printchar1 = (m2c::near_offset_external(::_printchar1));
#endif
#ifndef M2C_CODE_EQUATE__printchar2
#define M2C_CODE_EQUATE__printchar2 1
static const dd k_printchar2 = (m2c::near_offset_external(::_printchar2));
#endif
#ifndef M2C_CODE_EQUATE__printchar3
#define M2C_CODE_EQUATE__printchar3 1
static const dd k_printchar3 = (m2c::near_offset_external(::_printchar3));
#endif
#ifndef M2C_CODE_EQUATE__ssprite
#define M2C_CODE_EQUATE__ssprite 1
static const dd k_ssprite = (m2c::near_offset_external(::_ssprite));
#endif
#ifndef M2C_CODE_EQUATE__msprite
#define M2C_CODE_EQUATE__msprite 1
static const dd k_msprite = (m2c::near_offset_external(::_msprite));
#endif
#ifndef M2C_CODE_EQUATE__bsprite
#define M2C_CODE_EQUATE__bsprite 1
static const dd k_bsprite = (m2c::near_offset_external(::_bsprite));
#endif
#ifndef M2C_CODE_EQUATE__qsprite
#define M2C_CODE_EQUATE__qsprite 1
static const dd k_qsprite = (m2c::near_offset_external(::_qsprite));
#endif
#ifndef M2C_CODE_EQUATE__initssprites
#define M2C_CODE_EQUATE__initssprites 1
static const dd k_initssprites = (m2c::near_offset_external(::_initssprites));
#endif
#ifndef M2C_CODE_EQUATE__initmsprites
#define M2C_CODE_EQUATE__initmsprites 1
static const dd k_initmsprites = (m2c::near_offset_external(::_initmsprites));
#endif
#ifndef M2C_CODE_EQUATE__initqsprites
#define M2C_CODE_EQUATE__initqsprites 1
static const dd k_initqsprites = (m2c::near_offset_external(::_initqsprites));
#endif
#ifndef M2C_CODE_EQUATE__blockfill
#define M2C_CODE_EQUATE__blockfill 1
static const dd k_blockfill = (m2c::near_offset_external(::_blockfill));
#endif
#ifndef M2C_CODE_EQUATE__savemousebgnd
#define M2C_CODE_EQUATE__savemousebgnd 1
static const dd k_savemousebgnd = (m2c::near_offset_external(::_savemousebgnd));
#endif
#ifndef M2C_CODE_EQUATE__loadmousebgnd
#define M2C_CODE_EQUATE__loadmousebgnd 1
static const dd k_loadmousebgnd = (m2c::near_offset_external(::_loadmousebgnd));
#endif
#ifndef M2C_CODE_EQUATE__savescreen
#define M2C_CODE_EQUATE__savescreen 1
static const dd k_savescreen = (m2c::near_offset_external(::_savescreen));
#endif
#ifndef M2C_CODE_EQUATE__loadscreen
#define M2C_CODE_EQUATE__loadscreen 1
static const dd k_loadscreen = (m2c::near_offset_external(::_loadscreen));
#endif
#ifndef M2C_CODE_EQUATE__uncompresspic
#define M2C_CODE_EQUATE__uncompresspic 1
static const dd k_uncompresspic = (m2c::near_offset_external(::_uncompresspic));
#endif
#ifndef M2C_CODE_EQUATE__horizonfill
#define M2C_CODE_EQUATE__horizonfill 1
static const dd k_horizonfill = (m2c::near_offset_external(::_horizonfill));
#endif
#ifndef M2C_CODE_EQUATE_workscreen
#define M2C_CODE_EQUATE_workscreen 1
static const dd kworkscreen = (m2c::near_offset_external(::workscreen));
#endif
#ifndef M2C_CODE_EQUATE_copyscreen
#define M2C_CODE_EQUATE_copyscreen 1
static const dd kcopyscreen = (m2c::near_offset_external(::copyscreen));
#endif
#ifndef M2C_CODE_EQUATE_mousehouse
#define M2C_CODE_EQUATE_mousehouse 1
static const dd kmousehouse = (m2c::near_offset_external(::mousehouse));
#endif
}
#ifndef videobufsize
#define videobufsize m2c::kvideobufsize
#endif
#ifndef workscrptr
#define workscrptr m2c::kworkscrptr
#endif
#ifndef realscrptr
#define realscrptr m2c::krealscrptr
#endif
#ifndef screenmode
#define screenmode m2c::kscreenmode
#endif
#ifndef screenpage
#define screenpage m2c::kscreenpage
#endif
#ifndef flipmode
#define flipmode m2c::kflipmode
#endif
#ifndef setpaletteflag
#define setpaletteflag m2c::ksetpaletteflag
#endif
#ifndef polycount
#define polycount m2c::kpolycount
#endif
#ifndef maxframerate
#define maxframerate m2c::kmaxframerate
#endif
#ifndef screentypetable
#define screentypetable m2c::kscreentypetable
#endif
#ifndef screentype
#define screentype m2c::kscreentype
#endif
#ifndef pixelcol
#define pixelcol m2c::kpixelcol
#endif
#ifndef linecol
#define linecol m2c::klinecol
#endif
#ifndef fillcol
#define fillcol m2c::kfillcol
#endif
#ifndef hrznlhscol
#define hrznlhscol m2c::khrznlhscol
#endif
#ifndef hrznrhscol
#define hrznrhscol m2c::khrznrhscol
#endif
#ifndef palette
#define palette m2c::kpalette
#endif
#ifndef palettetable
#define palettetable m2c::kpalettetable
#endif
#ifndef attrtable
#define attrtable m2c::kattrtable
#endif
#ifndef prtln
#define prtln m2c::kprtln
#endif
#ifndef prtcl
#define prtcl m2c::kprtcl
#endif
#ifndef forecol
#define forecol m2c::kforecol
#endif
#ifndef backcol
#define backcol m2c::kbackcol
#endif
#ifndef printover
#define printover m2c::kprintover
#endif
#ifndef charsetptr1
#define charsetptr1 m2c::kcharsetptr1
#endif
#ifndef charsetptr2
#define charsetptr2 m2c::kcharsetptr2
#endif
#ifndef charsetptr3
#define charsetptr3 m2c::kcharsetptr3
#endif
#ifndef spritex
#define spritex m2c::kspritex
#endif
#ifndef spritey
#define spritey m2c::kspritey
#endif
#ifndef spriteptr
#define spriteptr m2c::kspriteptr
#endif
#ifndef clipxtable
#define clipxtable m2c::kclipxtable
#endif
#ifndef clipxmin
#define clipxmin m2c::kclipxmin
#endif
#ifndef clipxmax
#define clipxmax m2c::kclipxmax
#endif
#ifndef clipymin
#define clipymin m2c::kclipymin
#endif
#ifndef clipymax
#define clipymax m2c::kclipymax
#endif
#ifndef hrznxmin
#define hrznxmin m2c::khrznxmin
#endif
#ifndef hrznxmax
#define hrznxmax m2c::khrznxmax
#endif
#ifndef jumpinitlist
#define jumpinitlist m2c::kjumpinitlist
#endif
#ifndef _setvideomode
#define _setvideomode m2c::k_setvideomode
#endif
#ifndef _download
#define _download m2c::k_download
#endif
#ifndef _setpixel
#define _setpixel m2c::k_setpixel
#endif
#ifndef _linedraw
#define _linedraw m2c::k_linedraw
#endif
#ifndef _vlinedraw
#define _vlinedraw m2c::k_vlinedraw
#endif
#ifndef _hlinedraw
#define _hlinedraw m2c::k_hlinedraw
#endif
#ifndef _polyfill
#define _polyfill m2c::k_polyfill
#endif
#ifndef _meshfill
#define _meshfill m2c::k_meshfill
#endif
#ifndef _smokefill
#define _smokefill m2c::k_smokefill
#endif
#ifndef _printchar1
#define _printchar1 m2c::k_printchar1
#endif
#ifndef _printchar2
#define _printchar2 m2c::k_printchar2
#endif
#ifndef _printchar3
#define _printchar3 m2c::k_printchar3
#endif
#ifndef _ssprite
#define _ssprite m2c::k_ssprite
#endif
#ifndef _msprite
#define _msprite m2c::k_msprite
#endif
#ifndef _bsprite
#define _bsprite m2c::k_bsprite
#endif
#ifndef _qsprite
#define _qsprite m2c::k_qsprite
#endif
#ifndef _initssprites
#define _initssprites m2c::k_initssprites
#endif
#ifndef _initmsprites
#define _initmsprites m2c::k_initmsprites
#endif
#ifndef _initqsprites
#define _initqsprites m2c::k_initqsprites
#endif
#ifndef _blockfill
#define _blockfill m2c::k_blockfill
#endif
#ifndef _savemousebgnd
#define _savemousebgnd m2c::k_savemousebgnd
#endif
#ifndef _loadmousebgnd
#define _loadmousebgnd m2c::k_loadmousebgnd
#endif
#ifndef _savescreen
#define _savescreen m2c::k_savescreen
#endif
#ifndef _loadscreen
#define _loadscreen m2c::k_loadscreen
#endif
#ifndef _uncompresspic
#define _uncompresspic m2c::k_uncompresspic
#endif
#ifndef _horizonfill
#define _horizonfill m2c::k_horizonfill
#endif
#ifndef workscreen
#define workscreen m2c::kworkscreen
#endif
#ifndef copyscreen
#define copyscreen m2c::kcopyscreen
#endif
#ifndef mousehouse
#define mousehouse m2c::kmousehouse
#endif



#endif
