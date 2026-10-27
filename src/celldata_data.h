#ifndef __M2C_CELLDATA_DATA_H__
#define __M2C_CELLDATA_DATA_H__

#include "asm.h"

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
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_crtring1
#define M2C_CODE_EQUATE_crtring1 1
static const dd kcrtring1 = (m2c::near_offset_external(::crtring1));
#endif
#ifndef M2C_CODE_EQUATE_crtcursor1
#define M2C_CODE_EQUATE_crtcursor1 1
static const dd kcrtcursor1 = (m2c::near_offset_external(::crtcursor1));
#endif
}
#ifndef crtring1
#define crtring1 m2c::kcrtring1
#endif
#ifndef crtcursor1
#define crtcursor1 m2c::kcrtcursor1
#endif



#endif
