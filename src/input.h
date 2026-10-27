/* THIS IS GENERATED FILE */

        
#ifndef __M2C_INPUT_STUBS_H__
#define __M2C_INPUT_STUBS_H__

#include "asm.h"


#pragma pack(push, 1)
struct gamekey {
  db k_status;
  db k_lock;
  db k_state;
};

struct menukey {
  db key_num;
  db key_new;
  db key_old;
};

#pragma pack(pop)

static const word k_status = offsetof(struct gamekey, k_status);
static const word k_lock = offsetof(struct gamekey, k_lock);
static const word k_state = offsetof(struct gamekey, k_state);
static const word key_num = offsetof(struct menukey, key_num);
static const word key_new = offsetof(struct menukey, key_new);
static const word key_old = offsetof(struct menukey, key_old);


	static const int nul = 0;
static const int del = 8;
static const int ent = 13;
static const int escp = 27;
static const int k_esc = 1;
static const int k_space = 57;
static const int k_del1 = 14;
static const int k_del2 = 83;
static const int k_del3 = 75;
static const int k_sysreq = 84;
static const int k_numlock = 69;
static const int k_capslock = 58;
static const int k_ctrl = 29;
static const int k_shift = 42;
static const int k_shift1 = 42;
static const int k_shift2 = 54;
static const int k_enter = 28;
static const int k_backspace = 14;
static const int k_alt = 56;
static const int k_tab = 15;
static const int k_plus = 13;
static const int k_minus = 12;
static const int k_lessthan = 51;
static const int k_grtrthan = 52;
static const int k_hash = 43;
static const int k_opn_sq_brkt = 26;
static const int k_cls_sq_brkt = 27;
static const int k_apostrophe = 40;
static const int k_semicolon = 39;
static const int k_backslash = 86;
static const int k_pad_ins = 82;
static const int k_pad_del = 83;
static const int k_pad_plus = 78;
static const int k_pad_minus = 74;
static const int k_pad_star = 55;
static const int k_home = 71;
static const int k_end = 79;
static const int k_pgup = 73;
static const int k_pgdn = 81;
static const int k_crsrlf = 75;
static const int k_crsrrt = 77;
static const int k_crsrup = 72;
static const int k_crsrdn = 80;
static const int k_centre = 76;
static const int k_mouself = 71;
static const int k_mousert = 73;
static const int k_ams_joylf = 122;
static const int k_ams_joyrt = 121;
static const int k_ams_joyup = 124;
static const int k_ams_joydn = 123;
static const int k_ams_joyf1 = 120;
static const int k_ams_joyf2 = 119;
static const int k_ams_mouself = 126;
static const int k_ams_mousert = 125;
static const int k_1 = 2;
static const int k_2 = 3;
static const int k_3 = 4;
static const int k_4 = 5;
static const int k_5 = 6;
static const int k_6 = 7;
static const int k_7 = 8;
static const int k_8 = 9;
static const int k_9 = 10;
static const int k_0 = 11;
static const int k_f1 = 59;
static const int k_f2 = 60;
static const int k_f3 = 61;
static const int k_f4 = 62;
static const int k_f5 = 63;
static const int k_f6 = 64;
static const int k_f7 = 65;
static const int k_f8 = 66;
static const int k_f9 = 67;
static const int k_f10 = 68;
static const int k_f11 = 87;
static const int k_f12 = 88;
static const int k_a = 30;
static const int k_b = 48;
static const int k_c = 46;
static const int k_d = 32;
static const int k_e = 18;
static const int k_f = 33;
static const int k_g = 34;
static const int k_h = 35;
static const int k_i = 23;
static const int k_j = 36;
static const int k_k = 37;
static const int k_l = 38;
static const int k_m = 50;
static const int k_n = 49;
static const int k_o = 24;
static const int k_p = 25;
static const int k_q = 16;
static const int k_r = 19;
static const int k_s = 31;
static const int k_t = 20;
static const int k_u = 22;
static const int k_v = 47;
static const int k_w = 17;
static const int k_x = 45;
static const int k_y = 21;
static const int k_z = 44;
static const int input_all = 0;
static const int input_alpha = 1;
static const int input_num = 2;
static const int p_ext = 31;
static const int mkey_rec_size = 3;

	#define M2C_MODULE_INPUT 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern db (& inputmode)[2];
extern dw& filter;
extern dw& dummyc380a36f_data_4_228;
extern dw& dummyc380a36f_data_6_229;
extern db (& cursorchar)[2];
extern dw& tableptr;
extern dw& dummyc380a36f_data_c_232;
extern char (& keytable)[8];
extern char (& dummyc380a36f_data_16_234)[8];
extern char (& dummyc380a36f_data_1e_235)[8];
extern char (& dummyc380a36f_data_26_236)[8];
extern char (& dummyc380a36f_data_2e_237)[8];
extern char (& dummyc380a36f_data_36_238)[8];
extern char (& dummyc380a36f_data_3e_239)[8];
extern char (& dummyc380a36f_data_46_240)[8];
extern db (& dummyc380a36f_data_4e_241)[8];
extern char (& dummyc380a36f_data_56_242)[8];
extern db (& dummyc380a36f_data_5e_243)[8];
extern char (& shifttable)[8];
extern char (& dummyc380a36f_data_6e_245)[8];
extern char (& dummyc380a36f_data_76_246)[8];
extern char (& dummyc380a36f_data_7e_247)[8];
extern char (& dummyc380a36f_data_86_248)[8];
extern char (& dummyc380a36f_data_8e_249)[8];
extern char (& dummyc380a36f_data_96_250)[8];
extern char (& dummyc380a36f_data_9e_251)[8];
extern db (& dummyc380a36f_data_a6_252)[8];
extern char (& dummyc380a36f_data_ae_253)[8];
extern db (& dummyc380a36f_data_b6_254)[8];
extern menukey& menukeylist;
extern menukey& __m2c_structrow_c380a36f_269;
extern menukey& __m2c_structrow_c380a36f_270;
extern menukey& __m2c_structrow_c380a36f_271;
extern menukey& __m2c_structrow_c380a36f_272;
extern menukey& __m2c_structrow_c380a36f_273;
extern menukey& __m2c_structrow_c380a36f_274;
extern menukey& __m2c_structrow_c380a36f_275;
extern menukey& __m2c_structrow_c380a36f_276;
extern menukey& __m2c_structrow_c380a36f_277;
extern menukey& __m2c_structrow_c380a36f_278;
extern menukey& __m2c_structrow_c380a36f_279;
extern db& dummyc380a36f_data_e2_280;
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
#ifndef M2C_CODE_EQUATE_readkbd
#define M2C_CODE_EQUATE_readkbd 1
static const dd kreadkbd = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_readloop
#define M2C_CODE_EQUATE_readloop 1
static const dd kreadloop = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_keypressed
#define M2C_CODE_EQUATE_keypressed 1
static const dd kkeypressed = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_contloop
#define M2C_CODE_EQUATE_contloop 1
static const dd kcontloop = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_readkbdexit
#define M2C_CODE_EQUATE_readkbdexit 1
static const dd kreadkbdexit = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_getchar
#define M2C_CODE_EQUATE_getchar 1
static const dd kgetchar = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_keyrelease
#define M2C_CODE_EQUATE_keyrelease 1
static const dd kkeyrelease = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_releaseloop
#define M2C_CODE_EQUATE_releaseloop 1
static const dd kreleaseloop = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_keypress
#define M2C_CODE_EQUATE_keypress 1
static const dd kkeypress = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_inputdol
#define M2C_CODE_EQUATE_inputdol 1
static const dd kinputdol = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_cleartoend
#define M2C_CODE_EQUATE_cleartoend 1
static const dd kcleartoend = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_printinputdol
#define M2C_CODE_EQUATE_printinputdol 1
static const dd kprintinputdol = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_inputloop
#define M2C_CODE_EQUATE_inputloop 1
static const dd kinputloop = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_nocursor
#define M2C_CODE_EQUATE_nocursor 1
static const dd knocursor = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_escape
#define M2C_CODE_EQUATE_escape 1
static const dd kescape = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_asm_delete
#define M2C_CODE_EQUATE_asm_delete 1
static const dd kasm_delete = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_enter
#define M2C_CODE_EQUATE_enter 1
static const dd kenter = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_alphaonly
#define M2C_CODE_EQUATE_alphaonly 1
static const dd kalphaonly = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_rejectchar
#define M2C_CODE_EQUATE_rejectchar 1
static const dd krejectchar = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_setchar
#define M2C_CODE_EQUATE_setchar 1
static const dd ksetchar = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_numonly
#define M2C_CODE_EQUATE_numonly 1
static const dd knumonly = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_skipchar
#define M2C_CODE_EQUATE_skipchar 1
static const dd kskipchar = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_skipdelete
#define M2C_CODE_EQUATE_skipdelete 1
static const dd kskipdelete = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_clearloop
#define M2C_CODE_EQUATE_clearloop 1
static const dd kclearloop = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_cleared
#define M2C_CODE_EQUATE_cleared 1
static const dd kcleared = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_updatemenukeys
#define M2C_CODE_EQUATE_updatemenukeys 1
static const dd kupdatemenukeys = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_updatemkeyslp
#define M2C_CODE_EQUATE_updatemkeyslp 1
static const dd kupdatemkeyslp = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_updatemkeysexit
#define M2C_CODE_EQUATE_updatemkeysexit 1
static const dd kupdatemkeysexit = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_scanmenukeys
#define M2C_CODE_EQUATE_scanmenukeys 1
static const dd kscanmenukeys = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_scanmkeyslp
#define M2C_CODE_EQUATE_scanmkeyslp 1
static const dd kscanmkeyslp = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_scanmkeysfail
#define M2C_CODE_EQUATE_scanmkeysfail 1
static const dd kscanmkeysfail = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_scanmkeyspass
#define M2C_CODE_EQUATE_scanmkeyspass 1
static const dd kscanmkeyspass = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x102a;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool cleartoend(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool getchar(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool inputdol(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool keypress(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool keyrelease(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool printinputdol(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool readkbd(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool scanmenukeys(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool updatemenukeys(m2c::_offsets, struct m2c::_STATE*);
extern bool download(m2c::_offsets, struct m2c::_STATE*);
extern bool printdol(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


#ifndef key
extern db& key;
#endif

#endif
