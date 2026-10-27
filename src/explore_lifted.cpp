/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "explore.h"

	
 __attribute__((weak)) bool bordercheck(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbordercheck, _state);}

 static bool calcangles(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcangles, _state);}

 __attribute__((weak)) bool calcnewpos(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcnewpos, _state);}

 __attribute__((weak)) bool dispinfobar(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdispinfobar, _state);}

 __attribute__((weak)) bool drawlocator(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawlocator, _state);}

 __attribute__((weak)) bool drawmap(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawmap, _state);}

 static bool expcode_0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexpcode_0_proc, _state);}

 __attribute__((weak)) bool exploreintr100(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexploreintr100, _state);}

 __attribute__((weak)) bool exploremodel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexploremodel, _state);}

 __attribute__((weak)) bool flyview(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kflyview, _state);}

 static bool initctrldevice(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitctrldevice, _state);}

 __attribute__((weak)) bool initexpmodel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitexpmodel, _state);}

 __attribute__((weak)) bool initflyview(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitflyview, _state);}

 __attribute__((weak)) bool initmapexplore(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitmapexplore, _state);}

 __attribute__((weak)) bool initmapview(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitmapview, _state);}

 __attribute__((weak)) bool loadmap(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kloadmap, _state);}

 __attribute__((weak)) bool mapexplore(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmapexplore, _state);}

 static bool mapview(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmapview, _state);}

 __attribute__((weak)) bool mapzoomin(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmapzoomin, _state);}

 __attribute__((weak)) bool mapzoomout(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmapzoomout, _state);}

 __attribute__((weak)) bool savemap(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksavemap, _state);}

 __attribute__((weak)) bool scrollmap(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscrollmap, _state);}

 __attribute__((weak)) bool sortcontrols(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortcontrols, _state);}

 __attribute__((weak)) bool updatekeys(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatekeys, _state);}

 __attribute__((weak)) bool updateposn(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateposn, _state);}

 static bool useroptions(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kuseroptions, _state);}

 static bool __m2c_macrolocal_42_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_42_testhi, _state);}

 static bool __m2c_macrolocal_42_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_42_testok, _state);}

 static bool __m2c_macrolocal_47_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_47_testhi, _state);}

 static bool __m2c_macrolocal_47_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_47_testok, _state);}

 static bool __m2c_macrolocal_50_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_50_testhi, _state);}

 static bool __m2c_macrolocal_50_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_50_testok, _state);}

 static bool __m2c_macrolocal_86_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_86_skip, _state);}

 static bool __m2c_macrolocal_87_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_87_testhi, _state);}

 static bool __m2c_macrolocal_87_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_87_testok, _state);}

 static bool afterjumpz(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kafterjumpz, _state);}

 static bool capvalueto380(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcapvalueto380, _state);}

 static bool capvalueto500(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcapvalueto500, _state);}

 static bool clearinfobar(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclearinfobar, _state);}

 static bool contcalcalt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontcalcalt, _state);}

 static bool contmap(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontmap, _state);}

 static bool decposn(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdecposn, _state);}

 static bool exitdrawmap(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitdrawmap, _state);}

 static bool exitflyview(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitflyview, _state);}

 static bool exitintr100(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitintr100, _state);}

 static bool exitmapview(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitmapview, _state);}

 static bool exitscroll(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitscroll, _state);}

 static bool exploreexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexploreexit, _state);}

 static bool exploreloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexploreloop, _state);}

 static bool flyloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kflyloop, _state);}

 static bool getouttanvg(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgetouttanvg, _state);}

 static bool gounsetnvg(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgounsetnvg, _state);}

 static bool incposn(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kincposn, _state);}

 __attribute__((weak)) bool initjoy1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitjoy1, _state);}

 __attribute__((weak)) bool initjoy2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitjoy2, _state);}

 __attribute__((weak)) bool initkbd(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitkbd, _state);}

 __attribute__((weak)) bool initmouse(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitmouse, _state);}

 static bool jumpz(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kjumpz, _state);}

 static bool maploop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmaploop, _state);}

 static bool setspeed(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetspeed, _state);}

 static bool skipa(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipa, _state);}

 static bool skipalexx1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipalexx1, _state);}

 static bool skipalexx2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipalexx2, _state);}

 static bool skipb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipb, _state);}

 static bool skipc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipc, _state);}

 static bool skipcapvalueto380(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipcapvalueto380, _state);}

 static bool skipcapvalueto500(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipcapvalueto500, _state);}

 static bool skipd(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipd, _state);}

 static bool skipdistscale(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipdistscale, _state);}

 static bool skipjoy(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipjoy, _state);}

 static bool skipkbd(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipkbd, _state);}

 static bool skipmouse(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipmouse, _state);}

 static bool skiprecal(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiprecal, _state);}

 __attribute__((weak)) bool sortctrljoy1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortctrljoy1, _state);}

 __attribute__((weak)) bool sortctrljoy2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortctrljoy2, _state);}

 __attribute__((weak)) bool sortctrlkbd(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortctrlkbd, _state);}

 __attribute__((weak)) bool sortctrlmouse(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortctrlmouse, _state);}

 static bool washpitch(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kwashpitch, _state);}

 static bool washroll(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kwashroll, _state);}

	
	#include "explore_default_seg_lifted.cpp"
#include "explore_expcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::k__m2c_macrolocal_42_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_42_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_47_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_47_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_50_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_50_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_86_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_87_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_87_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kafterjumpz: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_blockfill
        case m2c::kblockfill: 	if (!blockfill(0, _state)) return false; break;
#endif
        case m2c::kbordercheck: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcangles: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calcdeltatime
        case m2c::kcalcdeltatime: 	if (!calcdeltatime(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcgndheight
        case m2c::kcalcgndheight: 	if (!calcgndheight(0, _state)) return false; break;
#endif
        case m2c::kcalcnewpos: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcapvalueto380: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcapvalueto500: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclearinfobar: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontcalcalt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontmap: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdecposn: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdispinfobar: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_download
        case m2c::kdownload: 	if (!download(0, _state)) return false; break;
#endif
        case m2c::kdrawlocator: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawmap: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_drawmapborder
        case m2c::kdrawmapborder: 	if (!drawmapborder(0, _state)) return false; break;
#endif
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel10: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel11: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel12: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel13: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel14: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel15: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel16: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel17: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel18: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel19: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel20: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel21: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel22: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel23: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel24: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel25: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel26: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel27: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel28: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel29: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel30: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel31: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel32: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel33: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel34: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel35: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel36: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel37: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel38: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel39: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel40: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel41: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel42: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel43: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel44: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel45: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel46: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel47: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel48: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel49: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel50: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel51: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel52: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel53: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel10: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel11: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel12: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel13: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel14: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel15: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel16: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel17: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel18: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel19: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel20: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel21: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel22: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitdrawmap: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitflyview: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitintr100: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitmapview: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitscroll: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexpcode_0_proc: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexploreexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexploreintr100: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexploreloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexploremodel: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_fixirpalette
        case m2c::kfixirpalette: 	if (!fixirpalette(0, _state)) return false; break;
#endif
        case m2c::kflyloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kflyview: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgetouttanvg: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgounsetnvg: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_hlinedraw
        case m2c::khlinedraw: 	if (!hlinedraw(0, _state)) return false; break;
#endif
        case m2c::kincposn: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitctrldevice: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitexpmodel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitflyview: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitjoy1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitjoy2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitkbd: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitmapexplore: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitmapview: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitmouse: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_installuser100
        case m2c::kinstalluser100: 	if (!installuser100(0, _state)) return false; break;
#endif
        case m2c::kjumpz: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kloadmap: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_mapcompass
        case m2c::kmapcompass: 	if (!mapcompass(0, _state)) return false; break;
#endif
        case m2c::kmapexplore: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmaploop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmapview: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmapzoomin: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmapzoomout: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_moveviewpoint
        case m2c::kmoveviewpoint: 	if (!moveviewpoint(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_printdol
        case m2c::kprintdol: 	if (!printdol(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_readjoysticks
        case m2c::kreadjoysticks: 	if (!readjoysticks(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_readmouse
        case m2c::kreadmouse: 	if (!readmouse(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_recaljoysticks
        case m2c::krecaljoysticks: 	if (!recaljoysticks(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_refreshmusic
        case m2c::krefreshmusic: 	if (!refreshmusic(0, _state)) return false; break;
#endif
        case m2c::ksavemap: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscrollmap: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_setirpalette
        case m2c::ksetirpalette: 	if (!setirpalette(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_setmouselimits
        case m2c::ksetmouselimits: 	if (!setmouselimits(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_setmousepos
        case m2c::ksetmousepos: 	if (!setmousepos(0, _state)) return false; break;
#endif
        case m2c::ksetspeed: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_setviewmode
        case m2c::ksetviewmode: 	if (!setviewmode(0, _state)) return false; break;
#endif
        case m2c::kskipa: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipalexx1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipalexx2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipb: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipc: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipcapvalueto380: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipcapvalueto500: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipd: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipdistscale: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipjoy: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipkbd: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipmouse: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiprecal: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortcontrols: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortctrljoy1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortctrljoy2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortctrlkbd: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortctrlmouse: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatekeys: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_updatemovingmap
        case m2c::kupdatemovingmap: 	if (!updatemovingmap(0, _state)) return false; break;
#endif
        case m2c::kupdateposn: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kuseroptions: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_uservisoptions
        case m2c::kuservisoptions: 	if (!uservisoptions(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_visual
        case m2c::kvisual: 	if (!visual(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_vlinedraw
        case m2c::kvlinedraw: 	if (!vlinedraw(0, _state)) return false; break;
#endif
        case m2c::kwashpitch: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kwashroll: 	if (!_group1(__disp, _state)) return false; break;
        default: { bool handled = false; if (!m2c::dispatch_external_code(__disp, _state, &handled)) return false; if (handled) break; if (m2c::m2c_guest_thunk(__disp, _state)) break; m2c::log_error("Don't know how to call to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort(); }
     };
     return true;
}

  static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state){
     // Indirect targets must be claimed by the local switch first: in
     // listing mode a bare offset is cs-relative and para:off keys live
     // only in the local table, while aggregate-space keys fall through
     // the switch's default to m2c::dispatch_external_code anyway.
     // Resolving through the aggregate dispatcher first aliases a packed
     // seg:off key's offset word against unrelated global-offset entries.
     return __dispatch_call(__disp, _state);
}


        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
         #define MYCOPY(x) {m2c::set_type(x);m2c::mycopy((db*)&x,(db*)&tmp999,sizeof(tmp999),#x);}
        #else
         #define MYCOPY(x) memcpy(&x,&tmp999,sizeof(tmp999));
        #endif

         namespace m2c {
          void Initializer_explore()
          {
              {viewpoint tmp999={16,16,0,0,1000,0,0,0};MYCOPY(exp_view)}
    {dw tmp999=map_zoom1;MYCOPY(expmapzoom)}
    {db tmp999[2]={0};MYCOPY(redrawmap)}
    {dw tmp999=160;MYCOPY(locatorx)}
    {dw tmp999=100;MYCOPY(locatory)}
    {gamekey tmp999={0,0,0};MYCOPY(kf_togglemode)}
    {gamekey tmp999={0,0,0};MYCOPY(kf_keyboard)}
    {gamekey tmp999={0,0,0};MYCOPY(kf_joystick)}
    {gamekey tmp999={0,0,0};MYCOPY(kf_mouse)}
    {dw tmp999=ctrl_dev_kbd;MYCOPY(x_ctrldevice)}
    {dw tmp999=0;MYCOPY(x_xfine)}
    {dw tmp999=0;MYCOPY(x_yfine)}
    {dw tmp999=0;MYCOPY(x_zfine)}
    {dw tmp999=0;MYCOPY(x_hfine)}
    {dw tmp999=0;MYCOPY(x_pfine)}
    {dw tmp999=0;MYCOPY(x_rfine)}
    {dw tmp999=0;MYCOPY(x_sinh)}
    {dw tmp999=0;MYCOPY(x_cosh)}
    {dw tmp999=0;MYCOPY(x_sinp)}
    {dw tmp999=0;MYCOPY(x_cosp)}
    {dw tmp999=0;MYCOPY(x_sinr)}
    {dw tmp999=0;MYCOPY(x_cosr)}
    {dw tmp999=0;MYCOPY(x_vtas)}
    {dw tmp999=0;MYCOPY(x_zdot)}
    {dw tmp999=0;MYCOPY(x_eleposn)}
    {dw tmp999=0;MYCOPY(x_ailposn)}
    {dw tmp999=0;MYCOPY(x_throtposn)}
    {dw tmp999=m2c::kglobal_sortctrlkbd;MYCOPY(sortctrlswitch)}
    {dw tmp999=m2c::kglobal_sortctrljoy1;MYCOPY(dummy75a7ae01_data_4c_2519)}
    {dw tmp999=m2c::kglobal_sortctrljoy2;MYCOPY(dummy75a7ae01_data_4e_2520)}
    {dw tmp999=m2c::kglobal_sortctrlmouse;MYCOPY(dummy75a7ae01_data_50_2521)}
    {dw tmp999=m2c::kglobal_initkbd;MYCOPY(initctrlswitch)}
    {dw tmp999=m2c::kglobal_initjoy1;MYCOPY(dummy75a7ae01_data_54_2527)}
    {dw tmp999=m2c::kglobal_initjoy2;MYCOPY(dummy75a7ae01_data_56_2528)}
    {dw tmp999=m2c::kglobal_initmouse;MYCOPY(dummy75a7ae01_data_58_2529)}
    {dw tmp999=0;MYCOPY(dispvkts)}
    {dw tmp999=0;MYCOPY(disphdg)}
    {dw tmp999=0;MYCOPY(dispalt)}
    {dw tmp999=0;MYCOPY(disprange)}
    {db tmp999[7]={6,9,12,16,19,22,25};MYCOPY(visrange)}
    {dw tmp999=offset(data,ctrldevdol);MYCOPY(ctrldevptr)}
    {char tmp999[12]="KEYS:10ZX+-";MYCOPY(dummy75a7ae01_data_6b_2548)}
    {char tmp999[12]="1 JOYSTICK ";MYCOPY(dummy75a7ae01_data_77_2549)}
    {char tmp999[12]="2 JOYSTICKS";MYCOPY(dummy75a7ae01_data_83_2550)}
    {char tmp999[12]="MOUSE      ";MYCOPY(dummy75a7ae01_data_8f_2551)}
    {dw tmp999=offset(data,textcol2);MYCOPY(speedcol)}
    {db tmp999[8]={255,0,255,0,11,0,col_text_norm1,col_black};MYCOPY(textcol1)}
    {db tmp999[8]={255,0,85,0,14,0,col_text_norm2,col_black};MYCOPY(textcol2)}
    {db tmp999[8]={255,0,170,0,12,0,col_text_alert,col_black};MYCOPY(alertcol)}
    {db tmp999=2;MYCOPY(dummy75a7ae01_data_b5_2559)}
    {db tmp999=5;MYCOPY(dummy75a7ae01_data_b6_2560)}
    {db tmp999[2]={p_ext,54};MYCOPY(dummy75a7ae01_data_b7_2561)}
    {dw tmp999=offset(data,textcol1);MYCOPY(dummy75a7ae01_data_b9_2562)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy75a7ae01_data_bb_2563)}
    {dw tmp999[2]={0*4,193};MYCOPY(dummy75a7ae01_data_bd_2564)}
    {char tmp999[14]={'S','P','E','E','D','=','x','x','x','x','K','T','S',' '};MYCOPY(dummy75a7ae01_data_c1_2565)}
    {char tmp999[9]={'H','D','G','=','x','x','x','~',' '};MYCOPY(dummy75a7ae01_data_cf_2566)}
    {char tmp999[12]={'A','L','T','=','x','x','x','x','x','F','T',' '};MYCOPY(dummy75a7ae01_data_d8_2567)}
    {char tmp999[12]={'R','A','N','G','E','=','x','x','M','L','S',' '};MYCOPY(dummy75a7ae01_data_e4_2568)}
    {char tmp999[20]={'C','O','N','T','R','O','L','=','x','x','x','x','x','x','x','x','x','x','x',' '};MYCOPY(dummy75a7ae01_data_f0_2569)}
    {char tmp999[5]={'V','I','E','W','='};MYCOPY(dummy75a7ae01_data_104_2570)}
    {db tmp999[2]={p_ext,54};MYCOPY(dummy75a7ae01_data_109_2571)}
    {dw tmp999=offset(data,textcol2);MYCOPY(dummy75a7ae01_data_10b_2572)}
    {char tmp999[7]={'E','X','P','L','O','R','E'};MYCOPY(dummy75a7ae01_data_10d_2573)}
    {db tmp999=2;MYCOPY(dummy75a7ae01_data_115_2576)}
    {db tmp999=5;MYCOPY(dummy75a7ae01_data_116_2577)}
    {db tmp999[2]={p_ext,86};MYCOPY(dummy75a7ae01_data_117_2578)}
    {dw tmp999=offset(data,speedcol);MYCOPY(dummy75a7ae01_data_119_2579)}
    {db tmp999[2]={15,36};MYCOPY(dummy75a7ae01_data_11b_2580)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy75a7ae01_data_11d_2582)}
    {dw tmp999[2]={6*4,193};MYCOPY(dummy75a7ae01_data_11f_2583)}
    {db tmp999[2]={p_ext,38};MYCOPY(dummy75a7ae01_data_123_2584)}
    {dw tmp999=offset(data,dispvkts);MYCOPY(dummy75a7ae01_data_125_2585)}
    {db tmp999[2]={p_ext,54};MYCOPY(dummy75a7ae01_data_127_2586)}
    {dw tmp999=offset(data,textcol2);MYCOPY(dummy75a7ae01_data_129_2587)}
    {db tmp999[2]={15,35};MYCOPY(dummy75a7ae01_data_12b_2588)}
    {db tmp999[2]={p_ext,16};MYCOPY(dummy75a7ae01_data_12d_2590)}
    {dw tmp999=18*4;MYCOPY(dummy75a7ae01_data_12f_2591)}
    {db tmp999[2]={p_ext,38};MYCOPY(dummy75a7ae01_data_131_2592)}
    {dw tmp999=offset(data,disphdg);MYCOPY(dummy75a7ae01_data_133_2593)}
    {db tmp999[2]={15,37};MYCOPY(dummy75a7ae01_data_135_2594)}
    {db tmp999[2]={p_ext,16};MYCOPY(dummy75a7ae01_data_137_2596)}
    {dw tmp999=27*4;MYCOPY(dummy75a7ae01_data_139_2597)}
    {db tmp999[2]={p_ext,38};MYCOPY(dummy75a7ae01_data_13b_2598)}
    {dw tmp999=offset(data,dispalt);MYCOPY(dummy75a7ae01_data_13d_2599)}
    {db tmp999[2]={15,34};MYCOPY(dummy75a7ae01_data_13f_2600)}
    {db tmp999[2]={p_ext,16};MYCOPY(dummy75a7ae01_data_141_2602)}
    {dw tmp999=41*4;MYCOPY(dummy75a7ae01_data_143_2603)}
    {db tmp999[2]={p_ext,38};MYCOPY(dummy75a7ae01_data_145_2604)}
    {dw tmp999=offset(data,disprange);MYCOPY(dummy75a7ae01_data_147_2605)}
    {db tmp999[2]={p_ext,16};MYCOPY(dummy75a7ae01_data_149_2606)}
    {dw tmp999=55*4;MYCOPY(dummy75a7ae01_data_14b_2607)}
    {db tmp999[2]={p_ext,65};MYCOPY(dummy75a7ae01_data_14d_2608)}
    {dw tmp999=offset(data,ctrldevptr);MYCOPY(dummy75a7ae01_data_14f_2609)}
    {db tmp999[2]={15,0};MYCOPY(dummy75a7ae01_data_151_2610)}
    {db tmp999=0;MYCOPY(timer50)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_explore(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        
