/* THIS IS GENERATED FILE */

        
#ifndef __M2C_MAIN_STUBS_H__
#define __M2C_MAIN_STUBS_H__

#include "asm.h"



	
	#define M2C_MODULE_MAIN 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern db& videomode;
extern db& returncode;
extern db& code;

	
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
#ifndef M2C_CODE_EQUATE_code_0_proc
#define M2C_CODE_EQUATE_code_0_proc 1
static const dd kcode_0_proc = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_main
#define M2C_CODE_EQUATE_main 1
static const dd kmain = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_aborttodos
#define M2C_CODE_EQUATE_aborttodos 1
static const dd kaborttodos = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_returntodos
#define M2C_CODE_EQUATE_returntodos 1
static const dd kreturntodos = 0x1007;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool code_0_proc(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
extern bool control_proc(m2c::_offsets, struct m2c::_STATE*);
extern bool installcriterr(m2c::_offsets, struct m2c::_STATE*);
extern bool installkbd(m2c::_offsets, struct m2c::_STATE*);
extern bool installmouse(m2c::_offsets, struct m2c::_STATE*);
extern bool installoverflow(m2c::_offsets, struct m2c::_STATE*);
extern bool installtimer(m2c::_offsets, struct m2c::_STATE*);
extern bool normalisemusic(m2c::_offsets, struct m2c::_STATE*);
extern bool normalisesound(m2c::_offsets, struct m2c::_STATE*);
extern bool parsecmndline(m2c::_offsets, struct m2c::_STATE*);
extern bool restorecriterr(m2c::_offsets, struct m2c::_STATE*);
extern bool restorekbd(m2c::_offsets, struct m2c::_STATE*);
extern bool restoremouse(m2c::_offsets, struct m2c::_STATE*);
extern bool restoreoverflow(m2c::_offsets, struct m2c::_STATE*);
extern bool restoretimer(m2c::_offsets, struct m2c::_STATE*);
extern bool settimedate(m2c::_offsets, struct m2c::_STATE*);
extern bool stopcomms(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


#ifndef twoplayer
extern db& twoplayer;
#endif
#ifndef psp
extern dw& psp;
#endif
#ifndef overflowflag
extern db& overflowflag;
#endif
#ifndef sstemp
extern dw& sstemp;
#endif
#ifndef sptemp
extern dw& sptemp;
#endif

#endif
