/* THIS IS GENERATED FILE */

        
#ifndef __M2C_CMNDLINE_STUBS_H__
#define __M2C_CMNDLINE_STUBS_H__

#include "asm.h"



	static const int debug = 0;
static const int max_args = 32;
static const int asciiz = 0;

	#define M2C_MODULE_CMNDLINE 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern dw& psp;
extern db (& dummy63bae953_data_2_27)[130];
extern dw& argc;
extern dw (& argv)[32];
extern byte& commandline;
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
#ifndef M2C_CODE_EQUATE_parsecmndline
#define M2C_CODE_EQUATE_parsecmndline 1
static const dd kparsecmndline = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_cmndlineexit
#define M2C_CODE_EQUATE_cmndlineexit 1
static const dd kcmndlineexit = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_argsearch
#define M2C_CODE_EQUATE_argsearch 1
static const dd kargsearch = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_checkseperator
#define M2C_CODE_EQUATE_checkseperator 1
static const dd kcheckseperator = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_foundarg
#define M2C_CODE_EQUATE_foundarg 1
static const dd kfoundarg = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_sepsearch
#define M2C_CODE_EQUATE_sepsearch 1
static const dd ksepsearch = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_truncatearg
#define M2C_CODE_EQUATE_truncatearg 1
static const dd ktruncatearg = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_foundsep
#define M2C_CODE_EQUATE_foundsep 1
static const dd kfoundsep = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_seperator
#define M2C_CODE_EQUATE_seperator 1
static const dd kseperator = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_nonseperator
#define M2C_CODE_EQUATE_nonseperator 1
static const dd knonseperator = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x100f;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool checkseperator(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool parsecmndline(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);



#endif
