/* THIS IS GENERATED FILE */

        
#ifndef __M2C_NEWMOUSE_STUBS_H__
#define __M2C_NEWMOUSE_STUBS_H__

#include "asm.h"



	static const int mouse_reset = 0;
static const int hide_cursor = 2;
static const int get_position = 3;
static const int set_position = 4;
static const int get_buttons = 5;
static const int set_horiz = 7;
static const int set_vert = 8;
static const int get_motion = 11;

	#define M2C_MODULE_NEWMOUSE 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern db (& mouseflag)[2];
extern dw& mousexmin;
extern dw& mousexmax;
extern dw& mouseymin;
extern dw& mouseymax;
extern dw& mousex;
extern dw& mousey;
extern dw& _mousex;
extern dw& _mousey;
extern db& lhsbutton;
extern db& rhsbutton;
extern db& _lhsbutton;
extern db& _rhsbutton;
extern dw& xmickeys;
extern dw& ymickeys;
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
#ifndef M2C_CODE_EQUATE_installmouse
#define M2C_CODE_EQUATE_installmouse 1
static const dd kinstallmouse = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_installexit
#define M2C_CODE_EQUATE_installexit 1
static const dd kinstallexit = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_setmouselimits
#define M2C_CODE_EQUATE_setmouselimits 1
static const dd ksetmouselimits = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_restoremouse
#define M2C_CODE_EQUATE_restoremouse 1
static const dd krestoremouse = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_resetmouse
#define M2C_CODE_EQUATE_resetmouse 1
static const dd kresetmouse = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_setmousepos
#define M2C_CODE_EQUATE_setmousepos 1
static const dd ksetmousepos = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_readmouse
#define M2C_CODE_EQUATE_readmouse 1
static const dd kreadmouse = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel6
#define M2C_CODE_EQUATE_edummylabel6 1
static const dd kedummylabel6 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_updateexit
#define M2C_CODE_EQUATE_updateexit 1
static const dd kupdateexit = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel7
#define M2C_CODE_EQUATE_dummylabel7 1
static const dd kdummylabel7 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_readmousemotion
#define M2C_CODE_EQUATE_readmousemotion 1
static const dd kreadmousemotion = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel7
#define M2C_CODE_EQUATE_edummylabel7 1
static const dd kedummylabel7 = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_readmotionexit
#define M2C_CODE_EQUATE_readmotionexit 1
static const dd kreadmotionexit = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel8
#define M2C_CODE_EQUATE_dummylabel8 1
static const dd kdummylabel8 = 0x101b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel9
#define M2C_CODE_EQUATE_dummylabel9 1
static const dd kdummylabel9 = 0x101c;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x101d;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool installmouse(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool readmouse(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool readmousemotion(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool resetmouse(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool restoremouse(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool setmouselimits(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool setmousepos(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);



#endif
