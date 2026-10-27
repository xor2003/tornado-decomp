#ifndef __M2C_CMNDLINE_DATA_H__
#define __M2C_CMNDLINE_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& psp;
extern db (& dummy63bae953_data_2_27)[130];
extern dw& argc;
extern dw (& argv)[32];
extern byte& commandline;
extern db& libcode;

namespace m2c{
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
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_psp
#define M2C_CODE_EQUATE_psp 1
static const dd kpsp = (m2c::near_offset_external(::psp));
#endif
#ifndef M2C_CODE_EQUATE_argc
#define M2C_CODE_EQUATE_argc 1
static const dd kargc = (m2c::near_offset_external(::argc));
#endif
#ifndef M2C_CODE_EQUATE_argv
#define M2C_CODE_EQUATE_argv 1
static const dd kargv = (m2c::near_offset_external(::argv));
#endif
}
#ifndef psp
#define psp m2c::kpsp
#endif
#ifndef argc
#define argc m2c::kargc
#endif
#ifndef argv
#define argv m2c::kargv
#endif



#endif
