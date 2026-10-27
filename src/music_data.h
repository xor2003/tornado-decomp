#ifndef __M2C_MUSIC_DATA_H__
#define __M2C_MUSIC_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern db& installed;
extern db& normalised;
extern char (& speakerbin)[11];
extern char (& adlibbin)[11];
extern char (& rolandbin)[11];
extern dw& musicdriveroff;
extern dw& musicdriverseg;
extern dw& _installmusic;
extern dw& dummy24ce8f3e_data_29_1398;
extern dw& dummy24ce8f3e_data_2b_1399;
extern dw& dummy24ce8f3e_data_2d_1400;
extern dw& dummy24ce8f3e_data_2f_1401;
extern dword& musicdriver;
extern db& sndcode;

#ifndef dieflag
extern db& dieflag;
#endif
#ifndef musiccard
extern dw& musiccard;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_installmusic
#define M2C_CODE_EQUATE_installmusic 1
static const dd kinstallmusic = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_installnull
#define M2C_CODE_EQUATE_installnull 1
static const dd kinstallnull = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_installspkr
#define M2C_CODE_EQUATE_installspkr 1
static const dd kinstallspkr = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_1_skip 1
static const dd k__m2c_macrolocal_1_skip = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_installmemerr
#define M2C_CODE_EQUATE_installmemerr 1
static const dd kinstallmemerr = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_installfileerr
#define M2C_CODE_EQUATE_installfileerr 1
static const dd kinstallfileerr = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_continstall
#define M2C_CODE_EQUATE_continstall 1
static const dd kcontinstall = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_installblst
#define M2C_CODE_EQUATE_installblst 1
static const dd kinstallblst = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_installadlb
#define M2C_CODE_EQUATE_installadlb 1
static const dd kinstalladlb = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_installrlnd
#define M2C_CODE_EQUATE_installrlnd 1
static const dd kinstallrlnd = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_installcarderr
#define M2C_CODE_EQUATE_installcarderr 1
static const dd kinstallcarderr = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_normalisemusic
#define M2C_CODE_EQUATE_normalisemusic 1
static const dd knormalisemusic = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_suspendmusic
#define M2C_CODE_EQUATE_suspendmusic 1
static const dd ksuspendmusic = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1014;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x1015;
#endif
#ifndef M2C_CODE_EQUATE_resumemusic
#define M2C_CODE_EQUATE_resumemusic 1
static const dd kresumemusic = 0x1016;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1017;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x1018;
#endif
#ifndef M2C_CODE_EQUATE_refreshmusic
#define M2C_CODE_EQUATE_refreshmusic 1
static const dd krefreshmusic = 0x1019;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel5
#define M2C_CODE_EQUATE_edummylabel5 1
static const dd kedummylabel5 = 0x101a;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x101b;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_installed
#define M2C_CODE_EQUATE_installed 1
static const dd kinstalled = (m2c::near_offset_external(::installed));
#endif
#ifndef M2C_CODE_EQUATE_normalised
#define M2C_CODE_EQUATE_normalised 1
static const dd knormalised = (m2c::near_offset_external(::normalised));
#endif
#ifndef M2C_CODE_EQUATE_speakerbin
#define M2C_CODE_EQUATE_speakerbin 1
static const dd kspeakerbin = (m2c::near_offset_external(::speakerbin));
#endif
#ifndef M2C_CODE_EQUATE_adlibbin
#define M2C_CODE_EQUATE_adlibbin 1
static const dd kadlibbin = (m2c::near_offset_external(::adlibbin));
#endif
#ifndef M2C_CODE_EQUATE_rolandbin
#define M2C_CODE_EQUATE_rolandbin 1
static const dd krolandbin = (m2c::near_offset_external(::rolandbin));
#endif
#ifndef M2C_CODE_EQUATE_musicdriveroff
#define M2C_CODE_EQUATE_musicdriveroff 1
static const dd kmusicdriveroff = (m2c::near_offset_external(::musicdriveroff));
#endif
#ifndef M2C_CODE_EQUATE_musicdriverseg
#define M2C_CODE_EQUATE_musicdriverseg 1
static const dd kmusicdriverseg = (m2c::near_offset_external(::musicdriverseg));
#endif
#ifndef M2C_CODE_EQUATE__installmusic
#define M2C_CODE_EQUATE__installmusic 1
static const dd k_installmusic = (m2c::near_offset_external(::_installmusic));
#endif
}
#ifndef installed
#define installed m2c::kinstalled
#endif
#ifndef normalised
#define normalised m2c::knormalised
#endif
#ifndef speakerbin
#define speakerbin m2c::kspeakerbin
#endif
#ifndef adlibbin
#define adlibbin m2c::kadlibbin
#endif
#ifndef rolandbin
#define rolandbin m2c::krolandbin
#endif
#ifndef musicdriveroff
#define musicdriveroff m2c::kmusicdriveroff
#endif
#ifndef musicdriverseg
#define musicdriverseg m2c::kmusicdriverseg
#endif
#ifndef _installmusic
#define _installmusic m2c::k_installmusic
#endif



#endif
