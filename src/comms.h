/* THIS IS GENERATED FILE */

        
#ifndef __M2C_COMMS_STUBS_H__
#define __M2C_COMMS_STUBS_H__

#include "asm.h"


#pragma pack(push, 1)
struct gamekey {
  db k_status;
  db k_lock;
  db k_state;
};

#pragma pack(pop)

static const word k_status = offsetof(struct gamekey, k_status);
static const word k_lock = offsetof(struct gamekey, k_lock);
static const word k_state = offsetof(struct gamekey, k_state);


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
static const int com1 = 3;
static const int com2 = 2;
enum {
    tx_hold = 0x0f8,
    rx_data = 0x0f8,
    ls_baud = 0x0f8,
    ms_baud = 0x0f9,
    intr_enable = 0x0f9,
    intr_ident = 0x0fa,
    line_ctrl = 0x0fb,
    modem_ctrl = 0x0fc,
    line_stat = 0x0fd,
    modem_stat = 0x0fe,
    intr_cmnd = 0x00020,
    intr_mask = 0x00021,
    eoi = 0x020,
};
static const int com1_vector = 12;
static const int com2_vector = 11;
#define err_tx_ovrflw (0x8000)
#define err_rx_ovrflw (0x4000)
#define err_checksum (0x2000)
#define err_sync_tmout (0x1000)
#define err_sync_abort (0x800)
#define err_data_tmout (0x400)
#define err_no_cable (0x200)
#define err_break (0x10)
#define err_frame (0x8)
#define err_parity (0x4)
#define err_overrun (0x2)
static const int baud50 = 0;
static const int baud300 = 2;
static const int baud600 = 4;
static const int baud1200 = 6;
static const int baud2400 = 8;
static const int baud4800 = 10;
static const int baud9600 = 12;
static const int baud14400 = 14;
static const int baud19200 = 16;
static const int baud38400 = 18;
static const int baud57600 = 20;
static const int baud115200 = 22;

	#define M2C_MODULE_COMMS 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern db (& commsdevice)[2];
extern dw& dosvctrseg;
extern dw& dosvctroff;
extern db (& commsvector)[2];
extern db& txqhead;
extern db& txqtail;
extern dw& txqwtptr;
extern dw& txqrdptr;
extern db& rxqhead;
extern db& rxqtail;
extern dw& rxqwtptr;
extern dw& rxqrdptr;
extern dw& commserror;
extern dw& baudrate;
extern dw& baudtable;
extern dw& dummyfe3a59d1_data_18_319;
extern dw& dummyfe3a59d1_data_1a_320;
extern dw& dummyfe3a59d1_data_1c_321;
extern dw& dummyfe3a59d1_data_1e_322;
extern dw& dummyfe3a59d1_data_20_323;
extern dw& dummyfe3a59d1_data_22_324;
extern dw& dummyfe3a59d1_data_24_325;
extern dw& dummyfe3a59d1_data_26_326;
extern dw& dummyfe3a59d1_data_28_327;
extern dw& dummyfe3a59d1_data_2a_328;
extern dw& dummyfe3a59d1_data_2c_329;
extern db& syncbyte;
extern db& userabort;
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
#ifndef M2C_CODE_EQUATE_initcomms
#define M2C_CODE_EQUATE_initcomms 1
static const dd kinitcomms = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_cleartxqueue
#define M2C_CODE_EQUATE_cleartxqueue 1
static const dd kcleartxqueue = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_clearrxqueue
#define M2C_CODE_EQUATE_clearrxqueue 1
static const dd kclearrxqueue = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_clearerror
#define M2C_CODE_EQUATE_clearerror 1
static const dd kclearerror = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_stopcomms
#define M2C_CODE_EQUATE_stopcomms 1
static const dd kstopcomms = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_commsintr
#define M2C_CODE_EQUATE_commsintr 1
static const dd kcommsintr = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_nextintr
#define M2C_CODE_EQUATE_nextintr 1
static const dd knextintr = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_errorintr
#define M2C_CODE_EQUATE_errorintr 1
static const dd kerrorintr = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_rxintr
#define M2C_CODE_EQUATE_rxintr 1
static const dd krxintr = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_txintr
#define M2C_CODE_EQUATE_txintr 1
static const dd ktxintr = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_intrpending
#define M2C_CODE_EQUATE_intrpending 1
static const dd kintrpending = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_senddata
#define M2C_CODE_EQUATE_senddata 1
static const dd ksenddata = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_addtoqueue
#define M2C_CODE_EQUATE_addtoqueue 1
static const dd kaddtoqueue = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_charsent
#define M2C_CODE_EQUATE_charsent 1
static const dd kcharsent = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_sendpacket
#define M2C_CODE_EQUATE_sendpacket 1
static const dd ksendpacket = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_sendloop
#define M2C_CODE_EQUATE_sendloop 1
static const dd ksendloop = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_readdata
#define M2C_CODE_EQUATE_readdata 1
static const dd kreaddata = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_readdataexit
#define M2C_CODE_EQUATE_readdataexit 1
static const dd kreaddataexit = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_synccomms
#define M2C_CODE_EQUATE_synccomms 1
static const dd ksynccomms = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_emptyloop
#define M2C_CODE_EQUATE_emptyloop 1
static const dd kemptyloop = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_synctimeout
#define M2C_CODE_EQUATE_synctimeout 1
static const dd ksynctimeout = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_syncuserabort
#define M2C_CODE_EQUATE_syncuserabort 1
static const dd ksyncuserabort = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE_intosync
#define M2C_CODE_EQUATE_intosync 1
static const dd kintosync = 0x1025;
#endif
#ifndef M2C_CODE_EQUATE_syncloop
#define M2C_CODE_EQUATE_syncloop 1
static const dd ksyncloop = 0x1026;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x1027;
#endif
#ifndef M2C_CODE_EQUATE_clearcomms
#define M2C_CODE_EQUATE_clearcomms 1
static const dd kclearcomms = 0x1028;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1029;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x102a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x102b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel10
#define M2C_CODE_EQUATE_edummylabel10 1
static const dd kedummylabel10 = 0x102c;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x102d;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool clearcomms(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool clearerror(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool clearrxqueue(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool cleartxqueue(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool commsintr(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool initcomms(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool readdata(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool senddata(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool sendpacket(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool stopcomms(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool synccomms(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


#ifndef countdown
extern dw& countdown;
#endif
#ifndef key
extern db& key;
#endif
#ifndef ticker
extern dw& ticker;
#endif

#endif
