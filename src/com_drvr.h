/* THIS IS GENERATED FILE */

        
#ifndef __M2C_COM_DRVR_STUBS_H__
#define __M2C_COM_DRVR_STUBS_H__

#include "asm.h"



	static const int cga_model = 16000;
static const int ega_model = 32000;
#define video_buf_size (ega_model)
static const int sprites_on = 1;
static const int vga = 0;
static const int hem = 2;
static const int cga = 4;
static const int ega = 6;
static const int asm_tan = 8;
static const int tem = 10;
static const int v16 = 12;
static const int hgc = 14;
static const int game_mode = 0;
static const int menu_mode = 2;
static const int free_frame_rate = 1;
static const int fast_frame_rate = 5;
static const int medm_frame_rate = 10;
static const int slow_frame_rate = 20;
static const int scr_type_0 = 0;
static const int scr_type_1 = 1;
static const int scr_type_2 = 2;

	#define M2C_MODULE_COM_DRVR 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

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
#ifndef M2C_CODE_EQUATE_setvideomode
#define M2C_CODE_EQUATE_setvideomode 1
static const dd ksetvideomode = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_setvideoloop
#define M2C_CODE_EQUATE_setvideoloop 1
static const dd ksetvideoloop = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_initpalette
#define M2C_CODE_EQUATE_initpalette 1
static const dd kinitpalette = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_setpalette
#define M2C_CODE_EQUATE_setpalette 1
static const dd ksetpalette = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_download
#define M2C_CODE_EQUATE_download 1
static const dd kdownload = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_framewait
#define M2C_CODE_EQUATE_framewait 1
static const dd kframewait = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_setpixel
#define M2C_CODE_EQUATE_setpixel 1
static const dd ksetpixel = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_linedraw
#define M2C_CODE_EQUATE_linedraw 1
static const dd klinedraw = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_vlinedraw
#define M2C_CODE_EQUATE_vlinedraw 1
static const dd kvlinedraw = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_hlinedraw
#define M2C_CODE_EQUATE_hlinedraw 1
static const dd khlinedraw = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_printchar1
#define M2C_CODE_EQUATE_printchar1 1
static const dd kprintchar1 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_printchar2
#define M2C_CODE_EQUATE_printchar2 1
static const dd kprintchar2 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_printchar3
#define M2C_CODE_EQUATE_printchar3 1
static const dd kprintchar3 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_ssprite
#define M2C_CODE_EQUATE_ssprite 1
static const dd kssprite = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_msprite
#define M2C_CODE_EQUATE_msprite 1
static const dd kmsprite = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_bsprite
#define M2C_CODE_EQUATE_bsprite 1
static const dd kbsprite = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_qsprite
#define M2C_CODE_EQUATE_qsprite 1
static const dd kqsprite = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_initssprites
#define M2C_CODE_EQUATE_initssprites 1
static const dd kinitssprites = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_initmsprites
#define M2C_CODE_EQUATE_initmsprites 1
static const dd kinitmsprites = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel14
#define M2C_CODE_EQUATE_edummylabel14 1
static const dd kedummylabel14 = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_initqsprites
#define M2C_CODE_EQUATE_initqsprites 1
static const dd kinitqsprites = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel15
#define M2C_CODE_EQUATE_edummylabel15 1
static const dd kedummylabel15 = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_blockfill
#define M2C_CODE_EQUATE_blockfill 1
static const dd kblockfill = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel16
#define M2C_CODE_EQUATE_edummylabel16 1
static const dd kedummylabel16 = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel17
#define M2C_CODE_EQUATE_edummylabel17 1
static const dd kedummylabel17 = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_savemousebgnd
#define M2C_CODE_EQUATE_savemousebgnd 1
static const dd ksavemousebgnd = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel18
#define M2C_CODE_EQUATE_edummylabel18 1
static const dd kedummylabel18 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_loadmousebgnd
#define M2C_CODE_EQUATE_loadmousebgnd 1
static const dd kloadmousebgnd = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel19
#define M2C_CODE_EQUATE_edummylabel19 1
static const dd kedummylabel19 = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_savescreen
#define M2C_CODE_EQUATE_savescreen 1
static const dd ksavescreen = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel20
#define M2C_CODE_EQUATE_edummylabel20 1
static const dd kedummylabel20 = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_loadscreen
#define M2C_CODE_EQUATE_loadscreen 1
static const dd kloadscreen = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel21
#define M2C_CODE_EQUATE_edummylabel21 1
static const dd kedummylabel21 = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_uncompresspic
#define M2C_CODE_EQUATE_uncompresspic 1
static const dd kuncompresspic = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel22
#define M2C_CODE_EQUATE_edummylabel22 1
static const dd kedummylabel22 = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_horizonfill
#define M2C_CODE_EQUATE_horizonfill 1
static const dd khorizonfill = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel23
#define M2C_CODE_EQUATE_edummylabel23 1
static const dd kedummylabel23 = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_null
#define M2C_CODE_EQUATE_null 1
static const dd knull = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_setattributes
#define M2C_CODE_EQUATE_setattributes 1
static const dd ksetattributes = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel24
#define M2C_CODE_EQUATE_edummylabel24 1
static const dd kedummylabel24 = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel25
#define M2C_CODE_EQUATE_edummylabel25 1
static const dd kedummylabel25 = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_setsspriteclip
#define M2C_CODE_EQUATE_setsspriteclip 1
static const dd ksetsspriteclip = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel26
#define M2C_CODE_EQUATE_edummylabel26 1
static const dd kedummylabel26 = 0x103a;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x103b;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool blockfill(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool bsprite(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool download(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool hlinedraw(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool horizonfill(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool initmsprites(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool initqsprites(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool initssprites(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool linedraw(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool loadmousebgnd(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool loadscreen(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool msprite(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool null(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool printchar1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool printchar2(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool printchar3(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool qsprite(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool savemousebgnd(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool savescreen(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool setattributes(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool setpalette(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool setpixel(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool setsspriteclip(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool setvideomode(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool ssprite(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool uncompresspic(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool vlinedraw(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_bfill(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_dload(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_hfill(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_hline(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_line(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_loadmouse(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_loadscreen(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_mfill(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_pfill(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_prtc1(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_prtc2(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_prtc3(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_savemouse(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_savescreen(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_setpx(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_sfill(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_vline(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_vmode(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


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

#endif
