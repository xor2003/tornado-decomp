#ifndef __M2C_INPUT_DATA_H__
#define __M2C_INPUT_DATA_H__

#include "asm.h"

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

#ifndef key
extern db& key;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_readkbd
#define M2C_CODE_EQUATE_readkbd 1
static const dd kreadkbd = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_readloop
#define M2C_CODE_EQUATE_readloop 1
static const dd kreadloop = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_keypressed
#define M2C_CODE_EQUATE_keypressed 1
static const dd kkeypressed = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_contloop
#define M2C_CODE_EQUATE_contloop 1
static const dd kcontloop = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_readkbdexit
#define M2C_CODE_EQUATE_readkbdexit 1
static const dd kreadkbdexit = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_getchar
#define M2C_CODE_EQUATE_getchar 1
static const dd kgetchar = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_keyrelease
#define M2C_CODE_EQUATE_keyrelease 1
static const dd kkeyrelease = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_releaseloop
#define M2C_CODE_EQUATE_releaseloop 1
static const dd kreleaseloop = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_keypress
#define M2C_CODE_EQUATE_keypress 1
static const dd kkeypress = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_inputdol
#define M2C_CODE_EQUATE_inputdol 1
static const dd kinputdol = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_inputloop
#define M2C_CODE_EQUATE_inputloop 1
static const dd kinputloop = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_nocursor
#define M2C_CODE_EQUATE_nocursor 1
static const dd knocursor = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_escape
#define M2C_CODE_EQUATE_escape 1
static const dd kescape = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_asm_delete
#define M2C_CODE_EQUATE_asm_delete 1
static const dd kasm_delete = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_enter
#define M2C_CODE_EQUATE_enter 1
static const dd kenter = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_alphaonly
#define M2C_CODE_EQUATE_alphaonly 1
static const dd kalphaonly = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_rejectchar
#define M2C_CODE_EQUATE_rejectchar 1
static const dd krejectchar = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_setchar
#define M2C_CODE_EQUATE_setchar 1
static const dd ksetchar = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_numonly
#define M2C_CODE_EQUATE_numonly 1
static const dd knumonly = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_skipchar
#define M2C_CODE_EQUATE_skipchar 1
static const dd kskipchar = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_skipdelete
#define M2C_CODE_EQUATE_skipdelete 1
static const dd kskipdelete = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_clearloop
#define M2C_CODE_EQUATE_clearloop 1
static const dd kclearloop = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_cleared
#define M2C_CODE_EQUATE_cleared 1
static const dd kcleared = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_updatemenukeys
#define M2C_CODE_EQUATE_updatemenukeys 1
static const dd kupdatemenukeys = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_updatemkeyslp
#define M2C_CODE_EQUATE_updatemkeyslp 1
static const dd kupdatemkeyslp = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_updatemkeysexit
#define M2C_CODE_EQUATE_updatemkeysexit 1
static const dd kupdatemkeysexit = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_scanmenukeys
#define M2C_CODE_EQUATE_scanmenukeys 1
static const dd kscanmenukeys = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_scanmkeyslp
#define M2C_CODE_EQUATE_scanmkeyslp 1
static const dd kscanmkeyslp = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_scanmkeysfail
#define M2C_CODE_EQUATE_scanmkeysfail 1
static const dd kscanmkeysfail = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_scanmkeyspass
#define M2C_CODE_EQUATE_scanmkeyspass 1
static const dd kscanmkeyspass = 0x102b;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_inputmode
#define M2C_CODE_EQUATE_inputmode 1
static const dd kinputmode = (m2c::near_offset_external(::inputmode));
#endif
#ifndef M2C_CODE_EQUATE_filter
#define M2C_CODE_EQUATE_filter 1
static const dd kfilter = (m2c::near_offset_external(::filter));
#endif
#ifndef M2C_CODE_EQUATE_cursorchar
#define M2C_CODE_EQUATE_cursorchar 1
static const dd kcursorchar = (m2c::near_offset_external(::cursorchar));
#endif
#ifndef M2C_CODE_EQUATE_tableptr
#define M2C_CODE_EQUATE_tableptr 1
static const dd ktableptr = (m2c::near_offset_external(::tableptr));
#endif
#ifndef M2C_CODE_EQUATE_keytable
#define M2C_CODE_EQUATE_keytable 1
static const dd kkeytable = (m2c::near_offset_external(::keytable));
#endif
#ifndef M2C_CODE_EQUATE_shifttable
#define M2C_CODE_EQUATE_shifttable 1
static const dd kshifttable = (m2c::near_offset_external(::shifttable));
#endif
#ifndef M2C_CODE_EQUATE_menukeylist
#define M2C_CODE_EQUATE_menukeylist 1
static const dd kmenukeylist = (m2c::near_offset_external(::menukeylist));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_c380a36f_269
#define M2C_CODE_EQUATE___m2c_structrow_c380a36f_269 1
static const dd k__m2c_structrow_c380a36f_269 = (m2c::near_offset_external(::__m2c_structrow_c380a36f_269));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_c380a36f_270
#define M2C_CODE_EQUATE___m2c_structrow_c380a36f_270 1
static const dd k__m2c_structrow_c380a36f_270 = (m2c::near_offset_external(::__m2c_structrow_c380a36f_270));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_c380a36f_271
#define M2C_CODE_EQUATE___m2c_structrow_c380a36f_271 1
static const dd k__m2c_structrow_c380a36f_271 = (m2c::near_offset_external(::__m2c_structrow_c380a36f_271));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_c380a36f_272
#define M2C_CODE_EQUATE___m2c_structrow_c380a36f_272 1
static const dd k__m2c_structrow_c380a36f_272 = (m2c::near_offset_external(::__m2c_structrow_c380a36f_272));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_c380a36f_273
#define M2C_CODE_EQUATE___m2c_structrow_c380a36f_273 1
static const dd k__m2c_structrow_c380a36f_273 = (m2c::near_offset_external(::__m2c_structrow_c380a36f_273));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_c380a36f_274
#define M2C_CODE_EQUATE___m2c_structrow_c380a36f_274 1
static const dd k__m2c_structrow_c380a36f_274 = (m2c::near_offset_external(::__m2c_structrow_c380a36f_274));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_c380a36f_275
#define M2C_CODE_EQUATE___m2c_structrow_c380a36f_275 1
static const dd k__m2c_structrow_c380a36f_275 = (m2c::near_offset_external(::__m2c_structrow_c380a36f_275));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_c380a36f_276
#define M2C_CODE_EQUATE___m2c_structrow_c380a36f_276 1
static const dd k__m2c_structrow_c380a36f_276 = (m2c::near_offset_external(::__m2c_structrow_c380a36f_276));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_c380a36f_277
#define M2C_CODE_EQUATE___m2c_structrow_c380a36f_277 1
static const dd k__m2c_structrow_c380a36f_277 = (m2c::near_offset_external(::__m2c_structrow_c380a36f_277));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_c380a36f_278
#define M2C_CODE_EQUATE___m2c_structrow_c380a36f_278 1
static const dd k__m2c_structrow_c380a36f_278 = (m2c::near_offset_external(::__m2c_structrow_c380a36f_278));
#endif
#ifndef M2C_CODE_EQUATE___m2c_structrow_c380a36f_279
#define M2C_CODE_EQUATE___m2c_structrow_c380a36f_279 1
static const dd k__m2c_structrow_c380a36f_279 = (m2c::near_offset_external(::__m2c_structrow_c380a36f_279));
#endif
}
#ifndef inputmode
#define inputmode m2c::kinputmode
#endif
#ifndef filter
#define filter m2c::kfilter
#endif
#ifndef cursorchar
#define cursorchar m2c::kcursorchar
#endif
#ifndef tableptr
#define tableptr m2c::ktableptr
#endif
#ifndef keytable
#define keytable m2c::kkeytable
#endif
#ifndef shifttable
#define shifttable m2c::kshifttable
#endif
#ifndef menukeylist
#define menukeylist m2c::kmenukeylist
#endif
#ifndef __m2c_structrow_c380a36f_269
#define __m2c_structrow_c380a36f_269 m2c::k__m2c_structrow_c380a36f_269
#endif
#ifndef __m2c_structrow_c380a36f_270
#define __m2c_structrow_c380a36f_270 m2c::k__m2c_structrow_c380a36f_270
#endif
#ifndef __m2c_structrow_c380a36f_271
#define __m2c_structrow_c380a36f_271 m2c::k__m2c_structrow_c380a36f_271
#endif
#ifndef __m2c_structrow_c380a36f_272
#define __m2c_structrow_c380a36f_272 m2c::k__m2c_structrow_c380a36f_272
#endif
#ifndef __m2c_structrow_c380a36f_273
#define __m2c_structrow_c380a36f_273 m2c::k__m2c_structrow_c380a36f_273
#endif
#ifndef __m2c_structrow_c380a36f_274
#define __m2c_structrow_c380a36f_274 m2c::k__m2c_structrow_c380a36f_274
#endif
#ifndef __m2c_structrow_c380a36f_275
#define __m2c_structrow_c380a36f_275 m2c::k__m2c_structrow_c380a36f_275
#endif
#ifndef __m2c_structrow_c380a36f_276
#define __m2c_structrow_c380a36f_276 m2c::k__m2c_structrow_c380a36f_276
#endif
#ifndef __m2c_structrow_c380a36f_277
#define __m2c_structrow_c380a36f_277 m2c::k__m2c_structrow_c380a36f_277
#endif
#ifndef __m2c_structrow_c380a36f_278
#define __m2c_structrow_c380a36f_278 m2c::k__m2c_structrow_c380a36f_278
#endif
#ifndef __m2c_structrow_c380a36f_279
#define __m2c_structrow_c380a36f_279 m2c::k__m2c_structrow_c380a36f_279
#endif



#endif
