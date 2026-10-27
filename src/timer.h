/* THIS IS GENERATED FILE */

        
#ifndef __M2C_TIMER_STUBS_H__
#define __M2C_TIMER_STUBS_H__

#include "asm.h"



	static const int t_18hz = 65535;
static const int t_100hz = 11932;

	#define M2C_MODULE_TIMER 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

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
void   Initializer();
#ifndef M2C_CODE_EQUATE_begin
#define M2C_CODE_EQUATE_begin 1
static const dd kbegin = 0x1001;
#endif
#ifndef M2C_CODE_EQUATE_mainproc
#define M2C_CODE_EQUATE_mainproc 1
static const dd kmainproc = 0x1002;
#endif
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
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x1018;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool installtimer(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool installuser100(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool installuser20(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool restoretimer(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool restoreuser100(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool restoreuser20(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool settimedate(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool timerintr(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);



#endif
