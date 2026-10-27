#ifndef __M2C_MISCDATA_DATA_H__
#define __M2C_MISCDATA_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& miscdatasize;
extern db& stack;
extern db (& sctrgamelayer1)[1024];
extern db (& ewrfloorlayer1)[1024];
extern db (& mobradarlayer1)[1024];
extern radars (& radartable)[256];
extern dw (& radarlists)[512];
extern byte& miscdata;
extern byte& endmiscdata;

namespace m2c{
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_miscdatasize
#define M2C_CODE_EQUATE_miscdatasize 1
static const dd kmiscdatasize = (m2c::near_offset_external(::miscdatasize));
#endif
#ifndef M2C_CODE_EQUATE_sctrgamelayer1
#define M2C_CODE_EQUATE_sctrgamelayer1 1
static const dd ksctrgamelayer1 = (m2c::near_offset_external(::sctrgamelayer1));
#endif
#ifndef M2C_CODE_EQUATE_ewrfloorlayer1
#define M2C_CODE_EQUATE_ewrfloorlayer1 1
static const dd kewrfloorlayer1 = (m2c::near_offset_external(::ewrfloorlayer1));
#endif
#ifndef M2C_CODE_EQUATE_mobradarlayer1
#define M2C_CODE_EQUATE_mobradarlayer1 1
static const dd kmobradarlayer1 = (m2c::near_offset_external(::mobradarlayer1));
#endif
#ifndef M2C_CODE_EQUATE_radartable
#define M2C_CODE_EQUATE_radartable 1
static const dd kradartable = (m2c::near_offset_external(::radartable));
#endif
#ifndef M2C_CODE_EQUATE_radarlists
#define M2C_CODE_EQUATE_radarlists 1
static const dd kradarlists = (m2c::near_offset_external(::radarlists));
#endif
}
#ifndef miscdatasize
#define miscdatasize m2c::kmiscdatasize
#endif
#ifndef sctrgamelayer1
#define sctrgamelayer1 m2c::ksctrgamelayer1
#endif
#ifndef ewrfloorlayer1
#define ewrfloorlayer1 m2c::kewrfloorlayer1
#endif
#ifndef mobradarlayer1
#define mobradarlayer1 m2c::kmobradarlayer1
#endif
#ifndef radartable
#define radartable m2c::kradartable
#endif
#ifndef radarlists
#define radarlists m2c::kradarlists
#endif



#endif
