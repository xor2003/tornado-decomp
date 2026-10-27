#ifndef __M2C_INITGAME_DATA_H__
#define __M2C_INITGAME_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern db& code;

#ifndef startwaypoint
extern dw& startwaypoint;
#endif
#ifndef ref_view
extern viewpoint& ref_view;
#endif
#ifndef waylist
extern dw& waylist;
#endif
#ifndef twoplayer
extern db& twoplayer;
#endif
#ifndef droneptrs
extern dw& droneptrs;
#endif
#ifndef opp_mobile
extern mobile& opp_mobile;
#endif
#ifndef airfieldlist
extern dw& airfieldlist;
#endif
#ifndef m_mobile
extern mobile& m_mobile;
#endif
#ifndef ilsdata
extern dw& ilsdata;
#endif
#ifndef m_view
extern viewpoint& m_view;
#endif
#ifndef tornadotype
extern dw& tornadotype;
#endif
#ifndef speciallayer1
extern db& speciallayer1;
#endif
#ifndef clock24
extern struct clock& clock24;
#endif
#ifndef endwpptr
extern dw& endwpptr;
#endif
#ifndef wpptr
extern dw& wpptr;
#endif
#ifndef waytotal
extern dw& waytotal;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_setwaytotal
#define M2C_CODE_EQUATE_setwaytotal 1
static const dd ksetwaytotal = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_initafloop
#define M2C_CODE_EQUATE_initafloop 1
static const dd kinitafloop = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_initnextaf
#define M2C_CODE_EQUATE_initnextaf 1
static const dd kinitnextaf = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_skipclock
#define M2C_CODE_EQUATE_skipclock 1
static const dd kskipclock = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_initgameexit
#define M2C_CODE_EQUATE_initgameexit 1
static const dd kinitgameexit = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_createdronelp
#define M2C_CODE_EQUATE_createdronelp 1
static const dd kcreatedronelp = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1015;
#endif
}



#endif
