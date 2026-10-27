/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "helicops.h"

	
 __attribute__((weak)) bool autoaltitude(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kautoaltitude, _state);}

 __attribute__((weak)) bool autoheading(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kautoheading, _state);}

 __attribute__((weak)) bool autoroute(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kautoroute, _state);}

 __attribute__((weak)) bool autothrottle(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kautothrottle, _state);}

 static bool calcangles(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcangles, _state);}

 __attribute__((weak)) bool calcdeltaxyz(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcdeltaxyz, _state);}

 __attribute__((weak)) bool calcnextwp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcnextwp, _state);}

 __attribute__((weak)) bool calcturndist(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcturndist, _state);}

 __attribute__((weak)) bool ctrlapproach(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kctrlapproach, _state);}

 __attribute__((weak)) bool ctrlnull(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kctrlnull, _state);}

 __attribute__((weak)) bool ctrltakeoff(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kctrltakeoff, _state);}

 __attribute__((weak)) bool ctrltouchdown(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kctrltouchdown, _state);}

 __attribute__((weak)) bool ctrltrack(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kctrltrack, _state);}

 __attribute__((weak)) bool groundcheck(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgroundcheck, _state);}

 __attribute__((weak)) bool inithelicops(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinithelicops, _state);}

 __attribute__((weak)) bool initoneheli(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitoneheli, _state);}

 __attribute__((weak)) bool selectnextwp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kselectnextwp, _state);}

 __attribute__((weak)) bool sortcontrolmode(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortcontrolmode, _state);}

 __attribute__((weak)) bool updatehelicops(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatehelicops, _state);}

 __attribute__((weak)) bool updateoneheli(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateoneheli, _state);}

 static bool __m2c_macrolocal_13_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_13_testhi, _state);}

 static bool __m2c_macrolocal_13_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_13_testok, _state);}

 static bool __m2c_macrolocal_19_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_19_skip, _state);}

 static bool __m2c_macrolocal_1_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_1_skip, _state);}

 static bool __m2c_macrolocal_24_mvxy1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_24_mvxy1, _state);}

 static bool __m2c_macrolocal_24_mvxy2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_24_mvxy2, _state);}

 static bool __m2c_macrolocal_24_mvxy3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_24_mvxy3, _state);}

 static bool __m2c_macrolocal_24_mvxy4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_24_mvxy4, _state);}

 static bool __m2c_macrolocal_25_mvxy1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_25_mvxy1, _state);}

 static bool __m2c_macrolocal_25_mvxy2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_25_mvxy2, _state);}

 static bool __m2c_macrolocal_25_mvxy3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_25_mvxy3, _state);}

 static bool __m2c_macrolocal_25_mvxy4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_25_mvxy4, _state);}

 static bool __m2c_macrolocal_26_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_26_testhi, _state);}

 static bool __m2c_macrolocal_26_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_26_testok, _state);}

 static bool __m2c_macrolocal_4_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_4_skip, _state);}

 static bool __m2c_macrolocal_8_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_8_testhi, _state);}

 static bool __m2c_macrolocal_8_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_8_testok, _state);}

 static bool accelok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaccelok, _state);}

 static bool accelzdot(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaccelzdot, _state);}

 static bool contaccel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontaccel, _state);}

 static bool contautoalt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontautoalt, _state);}

 static bool contheading(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontheading, _state);}

 static bool conttouchdown(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kconttouchdown, _state);}

 static bool deceltouchdown(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdeceltouchdown, _state);}

 static bool decelzdot(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdecelzdot, _state);}

 static bool dxok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdxok, _state);}

 static bool dyok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdyok, _state);}

 static bool dzok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdzok, _state);}

 static bool exitnextwp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitnextwp, _state);}

 static bool exitroute(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitroute, _state);}

 static bool exittakeoff(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexittakeoff, _state);}

 static bool exittouchdown(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexittouchdown, _state);}

 static bool exitturndist(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitturndist, _state);}

 static bool initoneexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitoneexit, _state);}

 static bool landzdotok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klandzdotok, _state);}

 static bool maxrollangle(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmaxrollangle, _state);}

 static bool prateok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprateok, _state);}

 static bool queque0008(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kqueque0008, _state);}

 static bool queque000a(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kqueque000a, _state);}

 static bool queque000c(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kqueque000c, _state);}

 static bool queque000e(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kqueque000e, _state);}

 static bool satisfiedwp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksatisfiedwp, _state);}

 static bool setautoalt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetautoalt, _state);}

 static bool setctrlmode(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetctrlmode, _state);}

 static bool setdecoytimer(m2c::_offsets _i, struct m2c::_STATE* _state){return evasiontactics(_i ? _i : m2c::ksetdecoytimer, _state);}

 static bool setmaxspeed(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetmaxspeed, _state);}

 static bool setpitchlimit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetpitchlimit, _state);}

 static bool setspeed(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetspeed, _state);}

 static bool skipevasion(m2c::_offsets _i, struct m2c::_STATE* _state){return evasiontactics(_i ? _i : m2c::kskipevasion, _state);}

 static bool sortdelay(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortdelay, _state);}

 static bool sortlink(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortlink, _state);}

 __attribute__((weak)) bool sortwpalt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortwpalt, _state);}

 static bool targetwp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktargetwp, _state);}

 static bool tdistov(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktdistov, _state);}

 static bool timeok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktimeok, _state);}

 static bool updateoneexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateoneexit, _state);}

 static bool wpok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kwpok, _state);}

 static bool zdotok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kzdotok, _state);}

	
	#include "helicops_default_seg_lifted.cpp"
#include "helicops_dronecode_lifted.cpp"
#include "helicops_weaponcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::k__m2c_macrolocal_13_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_13_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_19_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_1_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_24_mvxy1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_24_mvxy2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_24_mvxy3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_24_mvxy4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_25_mvxy1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_25_mvxy2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_25_mvxy3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_25_mvxy4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_26_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_26_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_4_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_8_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_8_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaccelok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaccelzdot: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_arctan
        case m2c::karctan: 	if (!arctan(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_arctan2
        case m2c::karctan2: 	if (!arctan2(0, _state)) return false; break;
#endif
        case m2c::kautoaltitude: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kautoheading: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kautoroute: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kautothrottle: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calcangdiff
        case m2c::kcalcangdiff: 	if (!calcangdiff(0, _state)) return false; break;
#endif
        case m2c::kcalcangles: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calcdeltaxy
        case m2c::kcalcdeltaxy: 	if (!calcdeltaxy(0, _state)) return false; break;
#endif
        case m2c::kcalcdeltaxyz: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calcgndheight
        case m2c::kcalcgndheight: 	if (!calcgndheight(0, _state)) return false; break;
#endif
        case m2c::kcalcnextwp: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calcrngbrgvp_wp
        case m2c::kcalcrngbrgvp_wp: 	if (!calcrngbrgvp_wp(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcrngbrgwp_wp
        case m2c::kcalcrngbrgwp_wp: 	if (!calcrngbrgwp_wp(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcsinefine
        case m2c::kcalcsinefine: 	if (!calcsinefine(0, _state)) return false; break;
#endif
        case m2c::kcalcturndist: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontaccel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontautoalt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontheading: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kconttouchdown: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kctrlapproach: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kctrlnull: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kctrltakeoff: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kctrltouchdown: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kctrltrack: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdeceltouchdown: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdecelzdot: 	if (!_group1(__disp, _state)) return false; break;
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
        case m2c::kdummylabel37: 	if (!evasiontactics(__disp, _state)) return false; break;
        case m2c::kdummylabel38: 	if (!evasiontactics(__disp, _state)) return false; break;
        case m2c::kdummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdxok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdyok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdzok: 	if (!_group1(__disp, _state)) return false; break;
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
        case m2c::kedummylabel20: 	if (!evasiontactics(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kevasiontactics: 	if (!evasiontactics(0, _state)) return false; break;
        case m2c::kexitnextwp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitroute: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexittakeoff: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexittouchdown: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitturndist: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgroundcheck: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinithelicops: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitoneexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitoneheli: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klandzdotok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::kmaxrollangle: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprateok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kqueque0008: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kqueque000a: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kqueque000c: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kqueque000e: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_randx
        case m2c::krandx: 	if (!randx(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_releasedecoy
        case m2c::kreleasedecoy: 	if (!releasedecoy(0, _state)) return false; break;
#endif
        case m2c::ksatisfiedwp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kselectnextwp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetautoalt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetctrlmode: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetdecoytimer: 	if (!evasiontactics(__disp, _state)) return false; break;
        case m2c::ksetmaxspeed: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetpitchlimit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetspeed: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipevasion: 	if (!evasiontactics(__disp, _state)) return false; break;
        case m2c::ksortcontrolmode: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortdelay: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortlink: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortwpalt: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_tangent
        case m2c::ktangent: 	if (!tangent(0, _state)) return false; break;
#endif
        case m2c::ktargetwp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktdistov: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktimeok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatehelicops: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_updatemobile
        case m2c::kupdatemobile: 	if (!updatemobile(0, _state)) return false; break;
#endif
        case m2c::kupdateoneexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateoneheli: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kwpok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kzdotok: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_helicops()
          {
              {dw tmp999=65535;MYCOPY(helicopterptr)}
    {dw tmp999=65535;MYCOPY(perfdataptr)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(hc_mobile)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(hc_view)}
    {helicopter tmp999={drone_unknown,dead,0,0,0,0,255,0,65535,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(hc_data)}
    {dw tmp999=0;MYCOPY(hc_autohfine)}
    {dw tmp999=0;MYCOPY(hc_autoalt)}
    {dw tmp999=0;MYCOPY(hc_autovtas)}
    {dd tmp999=0;MYCOPY(hc_wprng)}
    {dw tmp999=0;MYCOPY(hc_wpbrg)}
    {dw tmp999=0;MYCOPY(hc_wpbrgfine)}
    {dw tmp999=0;MYCOPY(hc_thetaab)}
    {dw tmp999=0;MYCOPY(hc_thetabc)}
    {dw tmp999=0;MYCOPY(hc_thetaabc)}
    {dw tmp999=0;MYCOPY(hc_rturn)}
    {dw tmp999=m2c::kglobal_ctrlnull;MYCOPY(controlmode)}
    {dw tmp999=m2c::kglobal_ctrltakeoff;MYCOPY(dummyd90eb516_data_5a_1878)}
    {dw tmp999=m2c::kglobal_ctrltrack;MYCOPY(dummyd90eb516_data_5c_1879)}
    {dw tmp999=m2c::kglobal_ctrlapproach;MYCOPY(dummyd90eb516_data_5e_1880)}
    {dw tmp999=m2c::kglobal_ctrltouchdown;MYCOPY(dummyd90eb516_data_60_1881)}
    {dw tmp999=offset(data,ah64apache);MYCOPY(perfdataptrs)}
    {dw tmp999=offset(data,mi24hind);MYCOPY(dummyd90eb516_data_64_1887)}
    {dw tmp999=offset(data,ch47chinook);MYCOPY(dummyd90eb516_data_66_1888)}
    {dw tmp999=offset(data,mi26halo);MYCOPY(dummyd90eb516_data_68_1889)}
    {perf_data tmp999={offset(data,takeoff1),offset(data,cruise1)};MYCOPY(ah64apache)}
    {perf_data tmp999={offset(data,takeoff1),offset(data,cruise1)};MYCOPY(mi24hind)}
    {perf_data tmp999={offset(data,takeoff2),offset(data,cruise2)};MYCOPY(ch47chinook)}
    {perf_data tmp999={offset(data,takeoff2),offset(data,cruise2)};MYCOPY(mi26halo)}
    {takeoff tmp999={333};MYCOPY(takeoff1)}
    {takeoff tmp999={200};MYCOPY(takeoff2)}
    {cruise tmp999={15000,2176,96,0};MYCOPY(cruise1)}
    {cruise tmp999={15000,1836,64,1};MYCOPY(cruise2)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_helicops(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        
