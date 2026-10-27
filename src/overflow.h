/* THIS IS GENERATED FILE */

        
#ifndef __M2C_OVERFLOW_STUBS_H__
#define __M2C_OVERFLOW_STUBS_H__

#include "asm.h"



	static const int cr = 13;
static const int lf = 10;

	#define M2C_MODULE_OVERFLOW 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern dw& sstemp;
extern dw& sptemp;
extern db (& overflowflag)[2];
extern dw& dosvctrseg;
extern dw& dosvctroff;
extern char (& hexchars)[16];
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
#ifndef M2C_CODE_EQUATE_installoverflow
#define M2C_CODE_EQUATE_installoverflow 1
static const dd kinstalloverflow = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_restoreoverflow
#define M2C_CODE_EQUATE_restoreoverflow 1
static const dd krestoreoverflow = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_overflowintr
#define M2C_CODE_EQUATE_overflowintr 1
static const dd koverflowintr = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_printword
#define M2C_CODE_EQUATE_printword 1
static const dd kprintword = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_newline
#define M2C_CODE_EQUATE_newline 1
static const dd knewline = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x100d;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool installoverflow(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool newline(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool overflowintr(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool printword(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool restoreoverflow(m2c::_offsets, struct m2c::_STATE*);
extern bool aborttodos(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);



#endif
