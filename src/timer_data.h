#ifndef __M2C_TIMER_DATA_H__
#define __M2C_TIMER_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& ticker;
extern dw& frames;
extern dw& lastframe;
extern dw& countdown;
extern dd& elapsedtime;
extern dd& frameelaptime;
extern dw& count100;
extern db (& intrcntr)[2];
extern dw& dostimer;
extern dw& dosvctrseg;
extern dw& dosvctroff;
extern db (& uservctr20flag)[2];
extern dd& uservctr20;
extern db (& uservctr100flag)[2];
extern dd& uservctr100;
extern db& libcode;
extern dw& dostimeroff;
extern dw& dostimerseg;

namespace m2c{
#ifndef M2C_CODE_EQUATE_installtimer
#define M2C_CODE_EQUATE_installtimer 1
static const dd kinstalltimer = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_restoretimer
#define M2C_CODE_EQUATE_restoretimer 1
static const dd krestoretimer = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_timerintr
#define M2C_CODE_EQUATE_timerintr 1
static const dd ktimerintr = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_nouser100
#define M2C_CODE_EQUATE_nouser100 1
static const dd knouser100 = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_nouser20
#define M2C_CODE_EQUATE_nouser20 1
static const dd knouser20 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_retviadosintr
#define M2C_CODE_EQUATE_retviadosintr 1
static const dd kretviadosintr = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_installuser20
#define M2C_CODE_EQUATE_installuser20 1
static const dd kinstalluser20 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_restoreuser20
#define M2C_CODE_EQUATE_restoreuser20 1
static const dd krestoreuser20 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_installuser100
#define M2C_CODE_EQUATE_installuser100 1
static const dd kinstalluser100 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_restoreuser100
#define M2C_CODE_EQUATE_restoreuser100 1
static const dd krestoreuser100 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_settimedate
#define M2C_CODE_EQUATE_settimedate 1
static const dd ksettimedate = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_1_skip 1
static const dd k__m2c_macrolocal_1_skip = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_exittimedate
#define M2C_CODE_EQUATE_exittimedate 1
static const dd kexittimedate = 0x1017;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_ticker
#define M2C_CODE_EQUATE_ticker 1
static const dd kticker = (m2c::near_offset_external(::ticker));
#endif
#ifndef M2C_CODE_EQUATE_frames
#define M2C_CODE_EQUATE_frames 1
static const dd kframes = (m2c::near_offset_external(::frames));
#endif
#ifndef M2C_CODE_EQUATE_lastframe
#define M2C_CODE_EQUATE_lastframe 1
static const dd klastframe = (m2c::near_offset_external(::lastframe));
#endif
#ifndef M2C_CODE_EQUATE_countdown
#define M2C_CODE_EQUATE_countdown 1
static const dd kcountdown = (m2c::near_offset_external(::countdown));
#endif
#ifndef M2C_CODE_EQUATE_elapsedtime
#define M2C_CODE_EQUATE_elapsedtime 1
static const dd kelapsedtime = (m2c::near_offset_external(::elapsedtime));
#endif
#ifndef M2C_CODE_EQUATE_frameelaptime
#define M2C_CODE_EQUATE_frameelaptime 1
static const dd kframeelaptime = (m2c::near_offset_external(::frameelaptime));
#endif
#ifndef M2C_CODE_EQUATE_count100
#define M2C_CODE_EQUATE_count100 1
static const dd kcount100 = (m2c::near_offset_external(::count100));
#endif
#ifndef M2C_CODE_EQUATE_intrcntr
#define M2C_CODE_EQUATE_intrcntr 1
static const dd kintrcntr = (m2c::near_offset_external(::intrcntr));
#endif
#ifndef M2C_CODE_EQUATE_dostimer
#define M2C_CODE_EQUATE_dostimer 1
static const dd kdostimer = (m2c::near_offset_external(::dostimer));
#endif
#ifndef M2C_CODE_EQUATE_dosvctrseg
#define M2C_CODE_EQUATE_dosvctrseg 1
static const dd kdosvctrseg = (m2c::near_offset_external(::dosvctrseg));
#endif
#ifndef M2C_CODE_EQUATE_dosvctroff
#define M2C_CODE_EQUATE_dosvctroff 1
static const dd kdosvctroff = (m2c::near_offset_external(::dosvctroff));
#endif
#ifndef M2C_CODE_EQUATE_uservctr20flag
#define M2C_CODE_EQUATE_uservctr20flag 1
static const dd kuservctr20flag = (m2c::near_offset_external(::uservctr20flag));
#endif
#ifndef M2C_CODE_EQUATE_uservctr20
#define M2C_CODE_EQUATE_uservctr20 1
static const dd kuservctr20 = (m2c::near_offset_external(::uservctr20));
#endif
#ifndef M2C_CODE_EQUATE_uservctr100flag
#define M2C_CODE_EQUATE_uservctr100flag 1
static const dd kuservctr100flag = (m2c::near_offset_external(::uservctr100flag));
#endif
#ifndef M2C_CODE_EQUATE_uservctr100
#define M2C_CODE_EQUATE_uservctr100 1
static const dd kuservctr100 = (m2c::near_offset_external(::uservctr100));
#endif
#ifndef M2C_CODE_EQUATE_dostimeroff
#define M2C_CODE_EQUATE_dostimeroff 1
static const dd kdostimeroff = (m2c::near_offset_external(::dostimeroff));
#endif
#ifndef M2C_CODE_EQUATE_dostimerseg
#define M2C_CODE_EQUATE_dostimerseg 1
static const dd kdostimerseg = (m2c::near_offset_external(::dostimerseg));
#endif
}
#ifndef ticker
#define ticker m2c::kticker
#endif
#ifndef frames
#define frames m2c::kframes
#endif
#ifndef lastframe
#define lastframe m2c::klastframe
#endif
#ifndef countdown
#define countdown m2c::kcountdown
#endif
#ifndef elapsedtime
#define elapsedtime m2c::kelapsedtime
#endif
#ifndef frameelaptime
#define frameelaptime m2c::kframeelaptime
#endif
#ifndef count100
#define count100 m2c::kcount100
#endif
#ifndef intrcntr
#define intrcntr m2c::kintrcntr
#endif
#ifndef dostimer
#define dostimer m2c::kdostimer
#endif
#ifndef dosvctrseg
#define dosvctrseg m2c::kdosvctrseg
#endif
#ifndef dosvctroff
#define dosvctroff m2c::kdosvctroff
#endif
#ifndef uservctr20flag
#define uservctr20flag m2c::kuservctr20flag
#endif
#ifndef uservctr20
#define uservctr20 m2c::kuservctr20
#endif
#ifndef uservctr100flag
#define uservctr100flag m2c::kuservctr100flag
#endif
#ifndef uservctr100
#define uservctr100 m2c::kuservctr100
#endif
#ifndef dostimeroff
#define dostimeroff m2c::kdostimeroff
#endif
#ifndef dostimerseg
#define dostimerseg m2c::kdostimerseg
#endif



#endif
