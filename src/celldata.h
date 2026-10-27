/* THIS IS GENERATED FILE */

        
#ifndef __M2C_CELLDATA_STUBS_H__
#define __M2C_CELLDATA_STUBS_H__

#include "asm.h"



	
constexpr int M2C_MODULE_CELLDATA = 1;
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern db& crtring1;
extern db& dummy6ad5fe5c_data_1_21;
extern db& dummy6ad5fe5c_data_2_22;
extern db& dummy6ad5fe5c_data_3_23;
extern db& dummy6ad5fe5c_data_4_24;
extern db& dummy6ad5fe5c_data_5_25;
extern db& dummy6ad5fe5c_data_6_26;
extern db& dummy6ad5fe5c_data_7_27;
extern db& crtcursor1;
extern db& dummy6ad5fe5c_data_9_29;
extern db& dummy6ad5fe5c_data_a_30;
extern db& dummy6ad5fe5c_data_b_31;
extern db& dummy6ad5fe5c_data_c_32;
extern db& dummy6ad5fe5c_data_d_33;
extern db& dummy6ad5fe5c_data_e_34;
extern db& dummy6ad5fe5c_data_f_35;

	
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
