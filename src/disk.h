/* THIS IS GENERATED FILE */

        
#ifndef __M2C_DISK_STUBS_H__
#define __M2C_DISK_STUBS_H__

#include "asm.h"



	
	#define M2C_MODULE_DISK 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern dw& handle;
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
#ifndef M2C_CODE_EQUATE_createfile
#define M2C_CODE_EQUATE_createfile 1
static const dd kcreatefile = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_createexit
#define M2C_CODE_EQUATE_createexit 1
static const dd kcreateexit = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_createerror
#define M2C_CODE_EQUATE_createerror 1
static const dd kcreateerror = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_openfile
#define M2C_CODE_EQUATE_openfile 1
static const dd kopenfile = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_openexit
#define M2C_CODE_EQUATE_openexit 1
static const dd kopenexit = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_openerror
#define M2C_CODE_EQUATE_openerror 1
static const dd kopenerror = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_closefile
#define M2C_CODE_EQUATE_closefile 1
static const dd kclosefile = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_closeexit
#define M2C_CODE_EQUATE_closeexit 1
static const dd kcloseexit = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_closeerror
#define M2C_CODE_EQUATE_closeerror 1
static const dd kcloseerror = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_fread
#define M2C_CODE_EQUATE_fread 1
static const dd kfread = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_freadexit
#define M2C_CODE_EQUATE_freadexit 1
static const dd kfreadexit = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_freaderror
#define M2C_CODE_EQUATE_freaderror 1
static const dd kfreaderror = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_fwrite
#define M2C_CODE_EQUATE_fwrite 1
static const dd kfwrite = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_fwriteexit
#define M2C_CODE_EQUATE_fwriteexit 1
static const dd kfwriteexit = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_fwriteerror
#define M2C_CODE_EQUATE_fwriteerror 1
static const dd kfwriteerror = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_findfile
#define M2C_CODE_EQUATE_findfile 1
static const dd kfindfile = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_finderror2
#define M2C_CODE_EQUATE_finderror2 1
static const dd kfinderror2 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_finderror1
#define M2C_CODE_EQUATE_finderror1 1
static const dd kfinderror1 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_findexit
#define M2C_CODE_EQUATE_findexit 1
static const dd kfindexit = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_loadfile
#define M2C_CODE_EQUATE_loadfile 1
static const dd kloadfile = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x101d;
#endif
#ifndef M2C_CODE_EQUATE_loadfileexit
#define M2C_CODE_EQUATE_loadfileexit 1
static const dd kloadfileexit = 0x101e;
#endif
#ifndef M2C_CODE_EQUATE_savefile
#define M2C_CODE_EQUATE_savefile 1
static const dd ksavefile = 0x101f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel8
#define M2C_CODE_EQUATE_edummylabel8 1
static const dd kedummylabel8 = 0x1020;
#endif
#ifndef M2C_CODE_EQUATE_savefileexit
#define M2C_CODE_EQUATE_savefileexit 1
static const dd ksavefileexit = 0x1021;
#endif
#ifndef M2C_CODE_EQUATE_fwritedol
#define M2C_CODE_EQUATE_fwritedol 1
static const dd kfwritedol = 0x1022;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel9
#define M2C_CODE_EQUATE_edummylabel9 1
static const dd kedummylabel9 = 0x1023;
#endif
#ifndef M2C_CODE_EQUATE_fwritedolloop
#define M2C_CODE_EQUATE_fwritedolloop 1
static const dd kfwritedolloop = 0x1024;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x1025;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool closefile(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool createfile(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool findfile(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool fread(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool fwrite(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool fwritedol(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool loadfile(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool openfile(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool savefile(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


#ifndef criterrflag
extern db& criterrflag;
#endif
#ifndef criterrcode
extern dw& criterrcode;
#endif

#endif
