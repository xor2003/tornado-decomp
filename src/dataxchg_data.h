#ifndef __M2C_DATAXCHG_DATA_H__
#define __M2C_DATAXCHG_DATA_H__

#include "asm.h"

extern db& default_seg;
extern db& data;
extern dw& gnddatasize;
extern dw& mobdatasize;
extern char (& gameplayin)[24];
extern char (& layersin)[21];
extern char (& gndobjectsin)[24];
extern char (& mobobjectsin)[23];
extern char (& miscdatain)[24];
extern char (& gameplayout)[25];
extern char (& impactout)[23];
extern char (& gndobjectsout)[25];
extern char (& mobobjectsout)[24];
extern db& code;

#ifndef _cloudbase
extern dd& _cloudbase;
#endif
#ifndef hilltextenabled
extern db& hilltextenabled;
#endif
#ifndef secscancnt2
extern dw& secscancnt2;
#endif
#ifndef starsenabled
extern db& starsenabled;
#endif
#ifndef chstick
extern db& chstick;
#endif
#ifndef gameplaydata
extern db& gameplaydata;
#endif
#ifndef gndtextenabled
extern db& gndtextenabled;
#endif
#ifndef _tm_midx
extern dw& _tm_midx;
#endif
#ifndef tm_cooliecn
extern dw& tm_cooliecn;
#endif
#ifndef tm_cooliert
extern dw& tm_cooliert;
#endif
#ifndef _starsenabled
extern db& _starsenabled;
#endif
#ifndef _tm_miny
extern dw& _tm_miny;
#endif
#ifndef tm_midx
extern dw& tm_midx;
#endif
#ifndef _secscanoff1
extern dw& _secscanoff1;
#endif
#ifndef _tm_coolieup
extern dw& _tm_coolieup;
#endif
#ifndef _gradenabled
extern db& _gradenabled;
#endif
#ifndef secscanoff2
extern dw& secscanoff2;
#endif
#ifndef _night
extern db& _night;
#endif
#ifndef cloudbase
extern dd& cloudbase;
#endif
#ifndef ambwarnings
extern dw& ambwarnings;
#endif
#ifndef tm_miny
extern dw& tm_miny;
#endif
#ifndef _treesenabled
extern db& _treesenabled;
#endif
#ifndef _m_view
extern dw& _m_view;
#endif
#ifndef miscdata
extern db& miscdata;
#endif
#ifndef _fog
extern db& _fog;
#endif
#ifndef tm_midy
extern dw& tm_midy;
#endif
#ifndef _thrustmaster
extern db& _thrustmaster;
#endif
#ifndef miscdatasize
extern dw& miscdatasize;
#endif
#ifndef _cloudsenabled
extern db& _cloudsenabled;
#endif
#ifndef _fuelwt
extern dw& _fuelwt;
#endif
#ifndef tm_cooliedn
extern dw& tm_cooliedn;
#endif
#ifndef tm_coolieup
extern dw& tm_coolieup;
#endif
#ifndef _chstick
extern db& _chstick;
#endif
#ifndef _tm_maxy
extern dw& _tm_maxy;
#endif
#ifndef _tm_coolielt
extern dw& _tm_coolielt;
#endif
#ifndef ambwarnings1
extern dw& ambwarnings1;
#endif
#ifndef impactlist
extern dw& impactlist;
#endif
#ifndef secscanoff1
extern dw& secscanoff1;
#endif
#ifndef _secscanoff2
extern dw& _secscanoff2;
#endif
#ifndef _hilltxtenabled
extern db& _hilltxtenabled;
#endif
#ifndef _tm_cooliert
extern dw& _tm_cooliert;
#endif
#ifndef _clouddepth
extern dw& _clouddepth;
#endif
#ifndef treesenabled
extern db& treesenabled;
#endif
#ifndef _secscancnt2
extern dw& _secscancnt2;
#endif
#ifndef cloudsenabled
extern db& cloudsenabled;
#endif
#ifndef exp_view
extern dw& exp_view;
#endif
#ifndef redwarnings2
extern dw& redwarnings2;
#endif
#ifndef _expmapzoom
extern dw& _expmapzoom;
#endif
#ifndef redwarnings
extern dw& redwarnings;
#endif
#ifndef expmapzoom
extern dw& expmapzoom;
#endif
#ifndef _overcast
extern db& _overcast;
#endif
#ifndef _exp_view
extern dw& _exp_view;
#endif
#ifndef _tm_cooliecn
extern dw& _tm_cooliecn;
#endif
#ifndef msctrdatastart
extern db& msctrdatastart;
#endif
#ifndef dieflag
extern db& dieflag;
#endif
#ifndef redwarnings1
extern dw& redwarnings1;
#endif
#ifndef _secscancnt1
extern dw& _secscancnt1;
#endif
#ifndef overcast
extern db& overcast;
#endif
#ifndef sectordatastart
extern db& sectordatastart;
#endif
#ifndef tm_maxy
extern dw& tm_maxy;
#endif
#ifndef panellight
extern db& panellight;
#endif
#ifndef clouddepth
extern dw& clouddepth;
#endif
#ifndef secscancnt1
extern dw& secscancnt1;
#endif
#ifndef gamedatasize
extern dw& gamedatasize;
#endif
#ifndef _tm_minx
extern dw& _tm_minx;
#endif
#ifndef tm_minx
extern dw& tm_minx;
#endif
#ifndef m_view
extern dw& m_view;
#endif
#ifndef _tm_midy
extern dw& _tm_midy;
#endif
#ifndef thrustmaster
extern db& thrustmaster;
#endif
#ifndef fog
extern db& fog;
#endif
#ifndef tm_coolielt
extern dw& tm_coolielt;
#endif
#ifndef fuelwt
extern dw& fuelwt;
#endif
#ifndef tm_maxx
extern dw& tm_maxx;
#endif
#ifndef _tm_cooliedn
extern dw& _tm_cooliedn;
#endif
#ifndef ambwarnings2
extern dw& ambwarnings2;
#endif
#ifndef _gndtextenabled
extern db& _gndtextenabled;
#endif
#ifndef _tm_maxx
extern dw& _tm_maxx;
#endif
#ifndef _panellight
extern db& _panellight;
#endif
#ifndef maplayers
extern db& maplayers;
#endif
#ifndef gradenabled
extern db& gradenabled;
#endif
#ifndef night
extern db& night;
#endif
#ifndef maplayersize
extern dw& maplayersize;
#endif
namespace m2c{
#ifndef M2C_CODE_EQUATE_loadgamedata
#define M2C_CODE_EQUATE_loadgamedata 1
static const dd kloadgamedata = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_1_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_1_skip 1
static const dd k__m2c_macrolocal_1_skip = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_loadgameerror
#define M2C_CODE_EQUATE_loadgameerror 1
static const dd kloadgameerror = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE___m2c_macrolocal_2_skip
#define M2C_CODE_EQUATE___m2c_macrolocal_2_skip 1
static const dd k__m2c_macrolocal_2_skip = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_savegamedata
#define M2C_CODE_EQUATE_savegamedata 1
static const dd ksavegamedata = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_savegameerror
#define M2C_CODE_EQUATE_savegameerror 1
static const dd ksavegameerror = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_saveimperror
#define M2C_CODE_EQUATE_saveimperror 1
static const dd ksaveimperror = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_loadmapdata
#define M2C_CODE_EQUATE_loadmapdata 1
static const dd kloadmapdata = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_loadmaperror
#define M2C_CODE_EQUATE_loadmaperror 1
static const dd kloadmaperror = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_savemapdata
#define M2C_CODE_EQUATE_savemapdata 1
static const dd ksavemapdata = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE_savemaperror
#define M2C_CODE_EQUATE_savemaperror 1
static const dd ksavemaperror = 0x1014;
#endif
}
namespace m2c{
#ifndef M2C_CODE_EQUATE_gnddatasize
#define M2C_CODE_EQUATE_gnddatasize 1
static const dd kgnddatasize = (m2c::near_offset_external(::gnddatasize));
#endif
#ifndef M2C_CODE_EQUATE_mobdatasize
#define M2C_CODE_EQUATE_mobdatasize 1
static const dd kmobdatasize = (m2c::near_offset_external(::mobdatasize));
#endif
#ifndef M2C_CODE_EQUATE_gameplayin
#define M2C_CODE_EQUATE_gameplayin 1
static const dd kgameplayin = (m2c::near_offset_external(::gameplayin));
#endif
#ifndef M2C_CODE_EQUATE_layersin
#define M2C_CODE_EQUATE_layersin 1
static const dd klayersin = (m2c::near_offset_external(::layersin));
#endif
#ifndef M2C_CODE_EQUATE_gndobjectsin
#define M2C_CODE_EQUATE_gndobjectsin 1
static const dd kgndobjectsin = (m2c::near_offset_external(::gndobjectsin));
#endif
#ifndef M2C_CODE_EQUATE_mobobjectsin
#define M2C_CODE_EQUATE_mobobjectsin 1
static const dd kmobobjectsin = (m2c::near_offset_external(::mobobjectsin));
#endif
#ifndef M2C_CODE_EQUATE_miscdatain
#define M2C_CODE_EQUATE_miscdatain 1
static const dd kmiscdatain = (m2c::near_offset_external(::miscdatain));
#endif
#ifndef M2C_CODE_EQUATE_gameplayout
#define M2C_CODE_EQUATE_gameplayout 1
static const dd kgameplayout = (m2c::near_offset_external(::gameplayout));
#endif
#ifndef M2C_CODE_EQUATE_impactout
#define M2C_CODE_EQUATE_impactout 1
static const dd kimpactout = (m2c::near_offset_external(::impactout));
#endif
#ifndef M2C_CODE_EQUATE_gndobjectsout
#define M2C_CODE_EQUATE_gndobjectsout 1
static const dd kgndobjectsout = (m2c::near_offset_external(::gndobjectsout));
#endif
#ifndef M2C_CODE_EQUATE_mobobjectsout
#define M2C_CODE_EQUATE_mobobjectsout 1
static const dd kmobobjectsout = (m2c::near_offset_external(::mobobjectsout));
#endif
}
#ifndef gnddatasize
#define gnddatasize m2c::kgnddatasize
#endif
#ifndef mobdatasize
#define mobdatasize m2c::kmobdatasize
#endif
#ifndef gameplayin
#define gameplayin m2c::kgameplayin
#endif
#ifndef layersin
#define layersin m2c::klayersin
#endif
#ifndef gndobjectsin
#define gndobjectsin m2c::kgndobjectsin
#endif
#ifndef mobobjectsin
#define mobobjectsin m2c::kmobobjectsin
#endif
#ifndef miscdatain
#define miscdatain m2c::kmiscdatain
#endif
#ifndef gameplayout
#define gameplayout m2c::kgameplayout
#endif
#ifndef impactout
#define impactout m2c::kimpactout
#endif
#ifndef gndobjectsout
#define gndobjectsout m2c::kgndobjectsout
#endif
#ifndef mobobjectsout
#define mobobjectsout m2c::kmobobjectsout
#endif



#endif
