/* THIS IS GENERATED FILE */

        
#ifndef __M2C_MISCLIB_STUBS_H__
#define __M2C_MISCLIB_STUBS_H__

#include "asm.h"



	static const int col_black = 0;
static const int col_lt_red = 12;
static const int col_yellow = 14;
static const int col_lt_cyan = 11;
static const int col_white = 15;
static const int col_blue = 1;
static const int col_green = 2;
static const int col_cyan = 3;
static const int col_red = 4;
static const int col_magenta = 5;
static const int col_brown = 6;
static const int col_lt_grey = 7;
static const int col_dk_grey = 8;
static const int col_lt_blue = 9;
static const int col_lt_green = 10;
static const int col_lt_magenta = 13;
static const int input_all = 0;
static const int input_alpha = 1;
static const int input_num = 2;
static const int p_ext = 31;
static const int tab = 9;
static const int cr = 13;
static const int lf = 10;

	#define M2C_MODULE_MISCLIB 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern char (& hexchars)[16];
extern db& dummy6cdc3e8c_data_10_298;
extern db& dummy6cdc3e8c_data_11_299;
extern db& dummy6cdc3e8c_data_12_300;
extern db (& dummy6cdc3e8c_data_13_301)[2];
extern dw (& dummy6cdc3e8c_data_15_302)[2];
extern char (& dummy6cdc3e8c_data_19_303)[19];
extern db (& dummy6cdc3e8c_data_2c_304)[2];
extern dw& dummy6cdc3e8c_data_2e_305;
extern dw& dummy6cdc3e8c_data_30_306;
extern db (& dummy6cdc3e8c_data_32_307)[2];
extern dw (& dummy6cdc3e8c_data_34_308)[2];
extern db (& dummy6cdc3e8c_data_38_309)[2];
extern dw& dummy6cdc3e8c_data_3a_310;
extern dw& dummy6cdc3e8c_data_3c_311;
extern db (& dummy6cdc3e8c_data_3e_312)[2];
extern dw (& dummy6cdc3e8c_data_40_313)[2];
extern db (& dummy6cdc3e8c_data_44_314)[2];
extern dw& dummy6cdc3e8c_data_46_315;
extern dw& dummy6cdc3e8c_data_48_316;
extern db (& dummy6cdc3e8c_data_4a_317)[2];
extern dw (& dummy6cdc3e8c_data_4c_318)[2];
extern db (& dummy6cdc3e8c_data_50_319)[2];
extern dw& dummy6cdc3e8c_data_52_320;
extern dw& dummy6cdc3e8c_data_54_321;
extern db (& dummy6cdc3e8c_data_56_322)[2];
extern dw (& dummy6cdc3e8c_data_58_323)[2];
extern db (& dummy6cdc3e8c_data_5c_324)[2];
extern dw& dummy6cdc3e8c_data_5e_325;
extern dw& dummy6cdc3e8c_data_60_326;
extern db (& dummy6cdc3e8c_data_62_327)[2];
extern dw (& dummy6cdc3e8c_data_64_328)[2];
extern db (& dummy6cdc3e8c_data_68_329)[2];
extern dw& dummy6cdc3e8c_data_6a_330;
extern dw& dummy6cdc3e8c_data_6c_331;
extern db (& dummy6cdc3e8c_data_6e_332)[2];
extern dw (& dummy6cdc3e8c_data_70_333)[2];
extern char (& dummy6cdc3e8c_data_74_334)[16];
extern db& dummy6cdc3e8c_data_84_335;
extern char (& promptdol)[23];
extern char (& hgcdol)[21];
extern char (& hemdol)[31];
extern char (& cgadol)[34];
extern char (& egadol)[16];
extern char (& tandol)[28];
extern char (& temdol)[38];
extern char (& v16dol)[26];
extern char (& vgadol)[27];
extern char (& taildol)[3];
extern dw& modedolptrs;
extern dw& dummy6cdc3e8c_data_17e_358;
extern dw& dummy6cdc3e8c_data_180_359;
extern dw& dummy6cdc3e8c_data_182_360;
extern dw& dummy6cdc3e8c_data_184_361;
extern dw& dummy6cdc3e8c_data_186_362;
extern dw& dummy6cdc3e8c_data_188_363;
extern dw& dummy6cdc3e8c_data_18a_364;
extern char& modekeys;
extern char& dummy6cdc3e8c_data_18d_366;
extern char& dummy6cdc3e8c_data_18e_367;
extern char& dummy6cdc3e8c_data_18f_368;
extern char& dummy6cdc3e8c_data_190_369;
extern char& dummy6cdc3e8c_data_191_370;
extern char& dummy6cdc3e8c_data_192_371;
extern char& dummy6cdc3e8c_data_193_372;
extern byte& freedol;
extern db& libcode;

	
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
#ifndef M2C_CODE_EQUATE_printegaspace
#define M2C_CODE_EQUATE_printegaspace 1
static const dd kprintegaspace = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_skipfreespace
#define M2C_CODE_EQUATE_skipfreespace 1
static const dd kskipfreespace = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_selectmode
#define M2C_CODE_EQUATE_selectmode 1
static const dd kselectmode = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_modeprintloop
#define M2C_CODE_EQUATE_modeprintloop 1
static const dd kmodeprintloop = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_skipprint
#define M2C_CODE_EQUATE_skipprint 1
static const dd kskipprint = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_selectloop
#define M2C_CODE_EQUATE_selectloop 1
static const dd kselectloop = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_keytestloop
#define M2C_CODE_EQUATE_keytestloop 1
static const dd kkeytestloop = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_skipkeytest
#define M2C_CODE_EQUATE_skipkeytest 1
static const dd kskipkeytest = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_foundmode
#define M2C_CODE_EQUATE_foundmode 1
static const dd kfoundmode = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_cls
#define M2C_CODE_EQUATE_cls 1
static const dd kcls = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_convpdegdol
#define M2C_CODE_EQUATE_convpdegdol 1
static const dd kconvpdegdol = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_skippdeg360
#define M2C_CODE_EQUATE_skippdeg360 1
static const dd kskippdeg360 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_donepdeg
#define M2C_CODE_EQUATE_donepdeg 1
static const dd kdonepdeg = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_libcode_0_proc
#define M2C_CODE_EQUATE_libcode_0_proc 1
static const dd klibcode_0_proc = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_zdecworddol
#define M2C_CODE_EQUATE_zdecworddol 1
static const dd kzdecworddol = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_clearbuffer
#define M2C_CODE_EQUATE_clearbuffer 1
static const dd kclearbuffer = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_decworddol
#define M2C_CODE_EQUATE_decworddol 1
static const dd kdecworddol = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_zeroword
#define M2C_CODE_EQUATE_zeroword 1
static const dd kzeroword = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_doneword
#define M2C_CODE_EQUATE_doneword 1
static const dd kdoneword = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_hexworddol
#define M2C_CODE_EQUATE_hexworddol 1
static const dd khexworddol = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_hexworddolloop
#define M2C_CODE_EQUATE_hexworddolloop 1
static const dd khexworddolloop = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_hexbytedol
#define M2C_CODE_EQUATE_hexbytedol 1
static const dd khexbytedol = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_convnumdol
#define M2C_CODE_EQUATE_convnumdol 1
static const dd kconvnumdol = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_checknextdigit
#define M2C_CODE_EQUATE_checknextdigit 1
static const dd kchecknextdigit = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_convnumber
#define M2C_CODE_EQUATE_convnumber 1
static const dd kconvnumber = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_convnumloop
#define M2C_CODE_EQUATE_convnumloop 1
static const dd kconvnumloop = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_convnumexit
#define M2C_CODE_EQUATE_convnumexit 1
static const dd kconvnumexit = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_quicksetup
#define M2C_CODE_EQUATE_quicksetup 1
static const dd kquicksetup = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_runlendecode
#define M2C_CODE_EQUATE_runlendecode 1
static const dd krunlendecode = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_nextdata
#define M2C_CODE_EQUATE_nextdata 1
static const dd knextdata = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_testcntrtype
#define M2C_CODE_EQUATE_testcntrtype 1
static const dd ktestcntrtype = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_repeatcopy
#define M2C_CODE_EQUATE_repeatcopy 1
static const dd krepeatcopy = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE_literalcopy
#define M2C_CODE_EQUATE_literalcopy 1
static const dd kliteralcopy = 0x102d;
#endif
#ifndef M2C_CODE_EQUATE_testfordataend
#define M2C_CODE_EQUATE_testfordataend 1
static const dd ktestfordataend = 0x102e;
#endif
#ifndef M2C_CODE_EQUATE_calcbitfieldval
#define M2C_CODE_EQUATE_calcbitfieldval 1
static const dd kcalcbitfieldval = 0x102f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel11
#define M2C_CODE_EQUATE_edummylabel11 1
static const dd kedummylabel11 = 0x1030;
#endif
#ifndef M2C_CODE_EQUATE_statusbitloop
#define M2C_CODE_EQUATE_statusbitloop 1
static const dd kstatusbitloop = 0x1031;
#endif
#ifndef M2C_CODE_EQUATE_foundstatusbit
#define M2C_CODE_EQUATE_foundstatusbit 1
static const dd kfoundstatusbit = 0x1032;
#endif
#ifndef M2C_CODE_EQUATE_firstbitloop
#define M2C_CODE_EQUATE_firstbitloop 1
static const dd kfirstbitloop = 0x1033;
#endif
#ifndef M2C_CODE_EQUATE_foundfirstbit
#define M2C_CODE_EQUATE_foundfirstbit 1
static const dd kfoundfirstbit = 0x1034;
#endif
#ifndef M2C_CODE_EQUATE_testbitstatus
#define M2C_CODE_EQUATE_testbitstatus 1
static const dd ktestbitstatus = 0x1035;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel12
#define M2C_CODE_EQUATE_edummylabel12 1
static const dd kedummylabel12 = 0x1036;
#endif
#ifndef M2C_CODE_EQUATE_testbitexit
#define M2C_CODE_EQUATE_testbitexit 1
static const dd ktestbitexit = 0x1037;
#endif
#ifndef M2C_CODE_EQUATE_drawrectangle
#define M2C_CODE_EQUATE_drawrectangle 1
static const dd kdrawrectangle = 0x1038;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel13
#define M2C_CODE_EQUATE_edummylabel13 1
static const dd kedummylabel13 = 0x1039;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x103a;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool calcbitfieldval(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool cls(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool convnumdol(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool convpdegdol(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool decworddol(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool drawrectangle(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool hexbytedol(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool hexworddol(m2c::_offsets, struct m2c::_STATE*);
static bool libcode_0_proc(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool printegaspace(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool quicksetup(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool runlendecode(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool selectmode(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool testbitstatus(m2c::_offsets, struct m2c::_STATE*);
extern bool blockfill(m2c::_offsets, struct m2c::_STATE*);
extern bool download(m2c::_offsets, struct m2c::_STATE*);
extern bool getchar(m2c::_offsets, struct m2c::_STATE*);
extern bool initmsprites(m2c::_offsets, struct m2c::_STATE*);
extern bool initqsprites(m2c::_offsets, struct m2c::_STATE*);
extern bool initssprites(m2c::_offsets, struct m2c::_STATE*);
extern bool keypress(m2c::_offsets, struct m2c::_STATE*);
extern bool linedraw(m2c::_offsets, struct m2c::_STATE*);
extern bool printdol(m2c::_offsets, struct m2c::_STATE*);
extern bool reseed(m2c::_offsets, struct m2c::_STATE*);
extern bool setsspriteclip(m2c::_offsets, struct m2c::_STATE*);
extern bool setvideomode(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


#ifndef screenmode
extern dw& screenmode;
#endif
#ifndef flipmode
extern dw& flipmode;
#endif
#ifndef egafreespace
extern dw& egafreespace;
#endif

#endif
