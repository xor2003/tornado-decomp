/* THIS IS GENERATED FILE */

        
#ifndef __M2C_CHARSETS_STUBS_H__
#define __M2C_CHARSETS_STUBS_H__

#include "asm.h"



	
constexpr int M2C_MODULE_CHARSETS = 1;
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern db (& dummy6128b95f_data_0_57)[32];
extern db (& dummy6128b95f_data_20_89)[32];
extern db (& dummy6128b95f_data_40_121)[32];
extern db (& dummy6128b95f_data_60_153)[32];
extern db (& dummy6128b95f_data_80_185)[32];
extern db (& dummy6128b95f_data_a0_217)[32];
extern db (& dummy6128b95f_data_c0_249)[32];
extern db (& dummy6128b95f_data_e0_281)[32];
extern db (& dummy6128b95f_data_100_313)[32];
extern db (& dummy6128b95f_data_120_345)[32];
extern db (& dummy6128b95f_data_140_377)[32];
extern db (& dummy6128b95f_data_160_409)[32];
extern db (& dummy6128b95f_data_180_441)[32];
extern db (& dummy6128b95f_data_1a0_473)[32];
extern db (& dummy6128b95f_data_1c0_505)[32];
extern byte& standard_7by9;
extern byte& standard_3by5;
extern byte& standard_5by9;

	
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
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);



#endif
