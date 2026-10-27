#ifndef __M2C_MESSAGES_DATA_H__
#define __M2C_MESSAGES_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw (& msgqueue)[32];
extern dw& msgqueueindex;
extern dw& msgptr;
extern dw& msgtimer;
extern db (& msgdelay)[2];
extern db (& lcdattr)[8];
extern db& dummyacba704c_data_50_531;
extern db& dummyacba704c_data_51_532;
extern db (& dummyacba704c_data_52_533)[2];
extern dw (& dummyacba704c_data_54_534)[2];
extern db (& dummyacba704c_data_58_535)[2];
extern dw& dummyacba704c_data_5a_536;
extern db& dummyacba704c_data_5c_537;
extern db& dummyacba704c_data_5d_539;
extern db& dummyacba704c_data_5e_540;
extern db (& dummyacba704c_data_5f_541)[2];
extern dw (& dummyacba704c_data_61_542)[2];
extern db (& dummyacba704c_data_65_543)[2];
extern dw& dummyacba704c_data_67_544;
extern db& dummyacba704c_data_69_545;
extern db& dummyacba704c_data_6a_564;
extern byte& pilotsetupdol;
extern byte& navigsetupdol;
extern byte& nullmsgdol;
extern db& pancode;

#ifndef ssf_commsrx
extern db& ssf_commsrx;
#endif
#ifndef lastframe
extern dw& lastframe;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_pancode_0_proc
#define M2C_CODE_EQUATE_pancode_0_proc 1
static const dd kpancode_0_proc = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_updatenavigmsg
#define M2C_CODE_EQUATE_updatenavigmsg 1
static const dd kupdatenavigmsg = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_contupdatemsg
#define M2C_CODE_EQUATE_contupdatemsg 1
static const dd kcontupdatemsg = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_updatepilotmsg
#define M2C_CODE_EQUATE_updatepilotmsg 1
static const dd kupdatepilotmsg = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_dispmsg
#define M2C_CODE_EQUATE_dispmsg 1
static const dd kdispmsg = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_nextmsg
#define M2C_CODE_EQUATE_nextmsg 1
static const dd knextmsg = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_dispmessage
#define M2C_CODE_EQUATE_dispmessage 1
static const dd kdispmessage = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_msgok
#define M2C_CODE_EQUATE_msgok 1
static const dd kmsgok = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_lowpriority
#define M2C_CODE_EQUATE_lowpriority 1
static const dd klowpriority = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_queuefull
#define M2C_CODE_EQUATE_queuefull 1
static const dd kqueuefull = 0x1012;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_msgqueue
#define M2C_CODE_EQUATE_msgqueue 1
static const dd kmsgqueue = (m2c::near_offset_external(::msgqueue));
#endif
#ifndef M2C_CODE_EQUATE_msgqueueindex
#define M2C_CODE_EQUATE_msgqueueindex 1
static const dd kmsgqueueindex = (m2c::near_offset_external(::msgqueueindex));
#endif
#ifndef M2C_CODE_EQUATE_msgptr
#define M2C_CODE_EQUATE_msgptr 1
static const dd kmsgptr = (m2c::near_offset_external(::msgptr));
#endif
#ifndef M2C_CODE_EQUATE_msgtimer
#define M2C_CODE_EQUATE_msgtimer 1
static const dd kmsgtimer = (m2c::near_offset_external(::msgtimer));
#endif
#ifndef M2C_CODE_EQUATE_msgdelay
#define M2C_CODE_EQUATE_msgdelay 1
static const dd kmsgdelay = (m2c::near_offset_external(::msgdelay));
#endif
#ifndef M2C_CODE_EQUATE_lcdattr
#define M2C_CODE_EQUATE_lcdattr 1
static const dd klcdattr = (m2c::near_offset_external(::lcdattr));
#endif
}
#ifndef msgqueue
#define msgqueue m2c::kmsgqueue
#endif
#ifndef msgqueueindex
#define msgqueueindex m2c::kmsgqueueindex
#endif
#ifndef msgptr
#define msgptr m2c::kmsgptr
#endif
#ifndef msgtimer
#define msgtimer m2c::kmsgtimer
#endif
#ifndef msgdelay
#define msgdelay m2c::kmsgdelay
#endif
#ifndef lcdattr
#define lcdattr m2c::klcdattr
#endif



#endif
