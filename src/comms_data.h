#ifndef __M2C_COMMS_DATA_H__
#define __M2C_COMMS_DATA_H__

#include "asm.h"

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

#ifndef countdown
extern dw& countdown;
#endif
#ifndef key
extern db& key;
#endif
#ifndef ticker
extern dw& ticker;
#endif
namespace m2c{
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
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_commsdevice
#define M2C_CODE_EQUATE_commsdevice 1
static const dd kcommsdevice = (m2c::near_offset_external(::commsdevice));
#endif
#ifndef M2C_CODE_EQUATE_dosvctrseg
#define M2C_CODE_EQUATE_dosvctrseg 1
static const dd kdosvctrseg = (m2c::near_offset_external(::dosvctrseg));
#endif
#ifndef M2C_CODE_EQUATE_dosvctroff
#define M2C_CODE_EQUATE_dosvctroff 1
static const dd kdosvctroff = (m2c::near_offset_external(::dosvctroff));
#endif
#ifndef M2C_CODE_EQUATE_commsvector
#define M2C_CODE_EQUATE_commsvector 1
static const dd kcommsvector = (m2c::near_offset_external(::commsvector));
#endif
#ifndef M2C_CODE_EQUATE_txqhead
#define M2C_CODE_EQUATE_txqhead 1
static const dd ktxqhead = (m2c::near_offset_external(::txqhead));
#endif
#ifndef M2C_CODE_EQUATE_txqtail
#define M2C_CODE_EQUATE_txqtail 1
static const dd ktxqtail = (m2c::near_offset_external(::txqtail));
#endif
#ifndef M2C_CODE_EQUATE_txqwtptr
#define M2C_CODE_EQUATE_txqwtptr 1
static const dd ktxqwtptr = (m2c::near_offset_external(::txqwtptr));
#endif
#ifndef M2C_CODE_EQUATE_txqrdptr
#define M2C_CODE_EQUATE_txqrdptr 1
static const dd ktxqrdptr = (m2c::near_offset_external(::txqrdptr));
#endif
#ifndef M2C_CODE_EQUATE_rxqhead
#define M2C_CODE_EQUATE_rxqhead 1
static const dd krxqhead = (m2c::near_offset_external(::rxqhead));
#endif
#ifndef M2C_CODE_EQUATE_rxqtail
#define M2C_CODE_EQUATE_rxqtail 1
static const dd krxqtail = (m2c::near_offset_external(::rxqtail));
#endif
#ifndef M2C_CODE_EQUATE_rxqwtptr
#define M2C_CODE_EQUATE_rxqwtptr 1
static const dd krxqwtptr = (m2c::near_offset_external(::rxqwtptr));
#endif
#ifndef M2C_CODE_EQUATE_rxqrdptr
#define M2C_CODE_EQUATE_rxqrdptr 1
static const dd krxqrdptr = (m2c::near_offset_external(::rxqrdptr));
#endif
#ifndef M2C_CODE_EQUATE_commserror
#define M2C_CODE_EQUATE_commserror 1
static const dd kcommserror = (m2c::near_offset_external(::commserror));
#endif
#ifndef M2C_CODE_EQUATE_baudrate
#define M2C_CODE_EQUATE_baudrate 1
static const dd kbaudrate = (m2c::near_offset_external(::baudrate));
#endif
#ifndef M2C_CODE_EQUATE_baudtable
#define M2C_CODE_EQUATE_baudtable 1
static const dd kbaudtable = (m2c::near_offset_external(::baudtable));
#endif
#ifndef M2C_CODE_EQUATE_syncbyte
#define M2C_CODE_EQUATE_syncbyte 1
static const dd ksyncbyte = (m2c::near_offset_external(::syncbyte));
#endif
#ifndef M2C_CODE_EQUATE_userabort
#define M2C_CODE_EQUATE_userabort 1
static const dd kuserabort = (m2c::near_offset_external(::userabort));
#endif
}
#ifndef commsdevice
#define commsdevice m2c::kcommsdevice
#endif
#ifndef dosvctrseg
#define dosvctrseg m2c::kdosvctrseg
#endif
#ifndef dosvctroff
#define dosvctroff m2c::kdosvctroff
#endif
#ifndef commsvector
#define commsvector m2c::kcommsvector
#endif
#ifndef txqhead
#define txqhead m2c::ktxqhead
#endif
#ifndef txqtail
#define txqtail m2c::ktxqtail
#endif
#ifndef txqwtptr
#define txqwtptr m2c::ktxqwtptr
#endif
#ifndef txqrdptr
#define txqrdptr m2c::ktxqrdptr
#endif
#ifndef rxqhead
#define rxqhead m2c::krxqhead
#endif
#ifndef rxqtail
#define rxqtail m2c::krxqtail
#endif
#ifndef rxqwtptr
#define rxqwtptr m2c::krxqwtptr
#endif
#ifndef rxqrdptr
#define rxqrdptr m2c::krxqrdptr
#endif
#ifndef commserror
#define commserror m2c::kcommserror
#endif
#ifndef baudrate
#define baudrate m2c::kbaudrate
#endif
#ifndef baudtable
#define baudtable m2c::kbaudtable
#endif
#ifndef syncbyte
#define syncbyte m2c::ksyncbyte
#endif
#ifndef userabort
#define userabort m2c::kuserabort
#endif



#endif
