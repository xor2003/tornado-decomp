#ifndef __M2C_USERVIS_DATA_H__
#define __M2C_USERVIS_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern db& viscode;

#ifndef sectortable
extern dw& sectortable;
#endif
#ifndef rxflag
extern db& rxflag;
#endif
#ifndef m_mobile
extern dw& m_mobile;
#endif
#ifndef incockpit
extern db& incockpit;
#endif
#ifndef sectordatastart
extern dw& sectordatastart;
#endif
#ifndef fog
extern db& fog;
#endif
#ifndef v_view
extern viewpoint& v_view;
#endif
#ifndef night
extern db& night;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_uservisual
#define M2C_CODE_EQUATE_uservisual 1
static const dd kuservisual = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_scanyloop
#define M2C_CODE_EQUATE_scanyloop 1
static const dd kscanyloop = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_scanxloop
#define M2C_CODE_EQUATE_scanxloop 1
static const dd kscanxloop = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_skipsector
#define M2C_CODE_EQUATE_skipsector 1
static const dd kskipsector = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_mobloop
#define M2C_CODE_EQUATE_mobloop 1
static const dd kmobloop = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_contmob
#define M2C_CODE_EQUATE_contmob 1
static const dd kcontmob = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_nextmob
#define M2C_CODE_EQUATE_nextmob 1
static const dd knextmob = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_switchonlights
#define M2C_CODE_EQUATE_switchonlights 1
static const dd kswitchonlights = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_exitswitchon
#define M2C_CODE_EQUATE_exitswitchon 1
static const dd kexitswitchon = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_switchonloop
#define M2C_CODE_EQUATE_switchonloop 1
static const dd kswitchonloop = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x1015;
#endif
}



#endif
