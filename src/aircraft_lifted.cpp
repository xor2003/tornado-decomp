/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "aircraft.h"

	
 __attribute__((weak)) bool aaactivity(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaaactivity, _state);}

 __attribute__((weak)) bool autoagm(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::kautoagm, _state);}

 __attribute__((weak)) bool autoalarm(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::kautoalarm, _state);}

 __attribute__((weak)) bool autoaltitude(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kautoaltitude, _state);}

 __attribute__((weak)) bool autobomb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::kautobomb, _state);}

 __attribute__((weak)) bool autocannon(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::kautocannon, _state);}

 __attribute__((weak)) bool autoheading(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kautoheading, _state);}

 __attribute__((weak)) bool autojp233(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::kautojp233, _state);}

 __attribute__((weak)) bool autolaydown(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::kautolaydown, _state);}

 __attribute__((weak)) bool autolgb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::kautolgb, _state);}

 __attribute__((weak)) bool automissile(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::kautomissile, _state);}

 __attribute__((weak)) bool autoroute(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kautoroute, _state);}

 __attribute__((weak)) bool autothrottle(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kautothrottle, _state);}

 static bool calcangles(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcangles, _state);}

 __attribute__((weak)) bool calcdeltaxyz(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcdeltaxyz, _state);}

 __attribute__((weak)) bool calcnextwp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcnextwp, _state);}

 __attribute__((weak)) bool calctaxirngbrg(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalctaxirngbrg, _state);}

 __attribute__((weak)) bool calcturndist(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcturndist, _state);}

 __attribute__((weak)) bool checkicavail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcheckicavail, _state);}

 __attribute__((weak)) bool ctrlapproach(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kctrlapproach, _state);}

 __attribute__((weak)) bool ctrlcombat(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kctrlcombat, _state);}

 __attribute__((weak)) bool ctrllanding(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kctrllanding, _state);}

 __attribute__((weak)) bool ctrlnull(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kctrlnull, _state);}

 __attribute__((weak)) bool ctrltakeoff(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kctrltakeoff, _state);}

 __attribute__((weak)) bool ctrltaxi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kctrltaxi, _state);}

 __attribute__((weak)) bool ctrltouchdown(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kctrltouchdown, _state);}

 __attribute__((weak)) bool ctrltrack(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kctrltrack, _state);}

 __attribute__((weak)) bool droneaction(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdroneaction, _state);}

 __attribute__((weak)) bool evasiontactics(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::kevasiontactics, _state);}

 __attribute__((weak)) bool findenemyic(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfindenemyic, _state);}

 __attribute__((weak)) bool groundcheck(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgroundcheck, _state);}

 __attribute__((weak)) bool initoneplane(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitoneplane, _state);}

 __attribute__((weak)) bool initplanes(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitplanes, _state);}

 __attribute__((weak)) bool inittaxi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinittaxi, _state);}

 __attribute__((weak)) bool proxalliedic(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kproxalliedic, _state);}

 __attribute__((weak)) bool proxenemyic(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kproxenemyic, _state);}

 __attribute__((weak)) bool selectbreakwp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kselectbreakwp, _state);}

 __attribute__((weak)) bool selectnextwp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kselectnextwp, _state);}

 __attribute__((weak)) bool setaatimer(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetaatimer, _state);}

 __attribute__((weak)) bool setbreaktimer(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetbreaktimer, _state);}

 __attribute__((weak)) bool setcombatmode(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetcombatmode, _state);}

 __attribute__((weak)) bool setewrtimer(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetewrtimer, _state);}

 __attribute__((weak)) bool setveryfast(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetveryfast, _state);}

 __attribute__((weak)) bool sortcontrolmode(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortcontrolmode, _state);}

 __attribute__((weak)) bool sorttaxixy(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksorttaxixy, _state);}

 __attribute__((weak)) bool tornadoaction(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktornadoaction, _state);}

 __attribute__((weak)) bool updateoneplane(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateoneplane, _state);}

 __attribute__((weak)) bool updateplanes(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateplanes, _state);}

 static bool __m2c_macrolocal_103_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_103_testhi, _state);}

 static bool __m2c_macrolocal_103_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_103_testok, _state);}

 static bool __m2c_macrolocal_109_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_109_skip, _state);}

 static bool __m2c_macrolocal_110_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_110_skip, _state);}

 static bool __m2c_macrolocal_111_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_111_skip, _state);}

 static bool __m2c_macrolocal_112_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_112_skip, _state);}

 static bool __m2c_macrolocal_113_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_113_skip, _state);}

 static bool __m2c_macrolocal_115_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_115_skip, _state);}

 static bool __m2c_macrolocal_117_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_117_skip, _state);}

 static bool __m2c_macrolocal_11_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_11_skip, _state);}

 static bool __m2c_macrolocal_120_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_120_skip, _state);}

 static bool __m2c_macrolocal_146_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_146_skip, _state);}

 static bool __m2c_macrolocal_148_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::k__m2c_macrolocal_148_skip, _state);}

 static bool __m2c_macrolocal_154_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::k__m2c_macrolocal_154_skip, _state);}

 static bool __m2c_macrolocal_155_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::k__m2c_macrolocal_155_skip, _state);}

 static bool __m2c_macrolocal_15_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_15_testhi, _state);}

 static bool __m2c_macrolocal_15_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_15_testok, _state);}

 static bool __m2c_macrolocal_162_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::k__m2c_macrolocal_162_skip, _state);}

 static bool __m2c_macrolocal_163_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::k__m2c_macrolocal_163_skip, _state);}

 static bool __m2c_macrolocal_164_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::k__m2c_macrolocal_164_skip, _state);}

 static bool __m2c_macrolocal_166_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::k__m2c_macrolocal_166_skip, _state);}

 static bool __m2c_macrolocal_167_mvxy1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::k__m2c_macrolocal_167_mvxy1, _state);}

 static bool __m2c_macrolocal_167_mvxy2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::k__m2c_macrolocal_167_mvxy2, _state);}

 static bool __m2c_macrolocal_167_mvxy3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::k__m2c_macrolocal_167_mvxy3, _state);}

 static bool __m2c_macrolocal_167_mvxy4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::k__m2c_macrolocal_167_mvxy4, _state);}

 static bool __m2c_macrolocal_168_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::k__m2c_macrolocal_168_skip, _state);}

 static bool __m2c_macrolocal_169_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::k__m2c_macrolocal_169_skip, _state);}

 static bool __m2c_macrolocal_170_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::k__m2c_macrolocal_170_skip, _state);}

 static bool __m2c_macrolocal_172_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::k__m2c_macrolocal_172_skip, _state);}

 static bool __m2c_macrolocal_173_mvxy1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::k__m2c_macrolocal_173_mvxy1, _state);}

 static bool __m2c_macrolocal_173_mvxy2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::k__m2c_macrolocal_173_mvxy2, _state);}

 static bool __m2c_macrolocal_173_mvxy3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::k__m2c_macrolocal_173_mvxy3, _state);}

 static bool __m2c_macrolocal_173_mvxy4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::k__m2c_macrolocal_173_mvxy4, _state);}

 static bool __m2c_macrolocal_1_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_1_skip, _state);}

 static bool __m2c_macrolocal_20_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_20_testhi, _state);}

 static bool __m2c_macrolocal_20_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_20_testok, _state);}

 static bool __m2c_macrolocal_26_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_26_skip, _state);}

 static bool __m2c_macrolocal_31_mvxy1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_31_mvxy1, _state);}

 static bool __m2c_macrolocal_31_mvxy2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_31_mvxy2, _state);}

 static bool __m2c_macrolocal_31_mvxy3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_31_mvxy3, _state);}

 static bool __m2c_macrolocal_31_mvxy4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_31_mvxy4, _state);}

 static bool __m2c_macrolocal_32_mvxy1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_32_mvxy1, _state);}

 static bool __m2c_macrolocal_32_mvxy2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_32_mvxy2, _state);}

 static bool __m2c_macrolocal_32_mvxy3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_32_mvxy3, _state);}

 static bool __m2c_macrolocal_32_mvxy4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_32_mvxy4, _state);}

 static bool __m2c_macrolocal_34_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_34_testhi, _state);}

 static bool __m2c_macrolocal_34_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_34_testok, _state);}

 static bool __m2c_macrolocal_4_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_4_skip, _state);}

 static bool __m2c_macrolocal_65_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_65_skip, _state);}

 static bool __m2c_macrolocal_67_mvxy1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_67_mvxy1, _state);}

 static bool __m2c_macrolocal_67_mvxy2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_67_mvxy2, _state);}

 static bool __m2c_macrolocal_67_mvxy3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_67_mvxy3, _state);}

 static bool __m2c_macrolocal_67_mvxy4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_67_mvxy4, _state);}

 static bool __m2c_macrolocal_69_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_69_skip, _state);}

 static bool __m2c_macrolocal_70_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_70_skip, _state);}

 static bool __m2c_macrolocal_71_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_71_skip, _state);}

 static bool __m2c_macrolocal_72_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_72_skip, _state);}

 static bool __m2c_macrolocal_78_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_78_skip, _state);}

 static bool __m2c_macrolocal_79_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_79_skip, _state);}

 static bool __m2c_macrolocal_96_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_96_testhi, _state);}

 static bool __m2c_macrolocal_96_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_96_testok, _state);}

 static bool aaexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaaexit, _state);}

 static bool aaok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaaok, _state);}

 static bool accelok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaccelok, _state);}

 static bool accok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaccok, _state);}

 static bool actionexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kactionexit, _state);}

 static bool agmok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::kagmok, _state);}

 static bool alarmok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::kalarmok, _state);}

 static bool altok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaltok, _state);}

 __attribute__((weak)) bool armagm(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::karmagm, _state);}

 __attribute__((weak)) bool armalarm(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::karmalarm, _state);}

 __attribute__((weak)) bool armbl755(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::karmbl755, _state);}

 __attribute__((weak)) bool armgpb1000(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::karmgpb1000, _state);}

 __attribute__((weak)) bool armjp233(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::karmjp233, _state);}

 __attribute__((weak)) bool armlgb1000(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::karmlgb1000, _state);}

 __attribute__((weak)) bool armnull(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::karmnull, _state);}

 __attribute__((weak)) bool armret1000(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::karmret1000, _state);}

 static bool awacsresponse(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kawacsresponse, _state);}

 static bool breakfail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbreakfail, _state);}

 static bool breakpass(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbreakpass, _state);}

 static bool calcaccel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcaccel, _state);}

 static bool casepitchok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcasepitchok, _state);}

 static bool casepull(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcasepull, _state);}

 static bool casepush(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcasepush, _state);}

 static bool checkescort(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcheckescort, _state);}

 static bool contaccel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontaccel, _state);}

 static bool contaction(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontaction, _state);}

 static bool contagm(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::kcontagm, _state);}

 static bool contalarm(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::kcontalarm, _state);}

 static bool contautoalt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontautoalt, _state);}

 static bool contbreak(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontbreak, _state);}

 static bool contevade(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontevade, _state);}

 static bool contheading(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontheading, _state);}

 static bool contjp233(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::kcontjp233, _state);}

 static bool contlgb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::kcontlgb, _state);}

 static bool contpitchrate(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontpitchrate, _state);}

 static bool decerror(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdecerror, _state);}

 static bool dxok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdxok, _state);}

 static bool dyok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdyok, _state);}

 static bool dzok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdzok, _state);}

 static bool exitagm(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::kexitagm, _state);}

 static bool exitalarm(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::kexitalarm, _state);}

 static bool exitbomb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::kexitbomb, _state);}

 static bool exitcombat(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitcombat, _state);}

 static bool exitinittaxi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitinittaxi, _state);}

 static bool exitjp233(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::kexitjp233, _state);}

 static bool exitlanding(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitlanding, _state);}

 static bool exitlaydown(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::kexitlaydown, _state);}

 static bool exitlgb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::kexitlgb, _state);}

 static bool exitnextwp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitnextwp, _state);}

 static bool exitroute(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitroute, _state);}

 static bool exittaxi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexittaxi, _state);}

 static bool exitturndist(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitturndist, _state);}

 static bool gmaxok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgmaxok, _state);}

 static bool gndcheckok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgndcheckok, _state);}

 static bool icavail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kicavail, _state);}

 static bool icresponse(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kicresponse, _state);}

 static bool icunavail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kicunavail, _state);}

 static bool incerror(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kincerror, _state);}

 static bool initoneexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitoneexit, _state);}

 static bool intobreak(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintobreak, _state);}

 static bool intoevade(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintoevade, _state);}

 static bool lgbok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::klgbok, _state);}

 static bool maxrollangle(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmaxrollangle, _state);}

 static bool miscresponse(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmiscresponse, _state);}

 static bool prateok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprateok, _state);}

 static bool proxalliedexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kproxalliedexit, _state);}

 static bool proxenemyexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kproxenemyexit, _state);}

 static bool queque0009(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kqueque0009, _state);}

 static bool queque000b(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kqueque000b, _state);}

 static bool queque000d(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kqueque000d, _state);}

 static bool queque000f(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kqueque000f, _state);}

 static bool queque0032(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::kqueque0032, _state);}

 static bool queque0034(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::kqueque0034, _state);}

 static bool queque003a(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::kqueque003a, _state);}

 static bool queque003c(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::kqueque003c, _state);}

 static bool sameerror(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksameerror, _state);}

 static bool satisfiedwp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksatisfiedwp, _state);}

 static bool setautoalt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetautoalt, _state);}

 static bool setceiling(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetceiling, _state);}

 static bool setcombatspeed(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetcombatspeed, _state);}

 static bool setcosbrgerror(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetcosbrgerror, _state);}

 static bool setctrlmode(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetctrlmode, _state);}

 static bool setdecoytimer(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::ksetdecoytimer, _state);}

 static bool sethdgerror(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksethdgerror, _state);}

 static bool setmaxspeed(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetmaxspeed, _state);}

 static bool setpitcherror(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetpitcherror, _state);}

 static bool setpitchlimit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetpitchlimit, _state);}

 static bool setrolldemand(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetrolldemand, _state);}

 static bool setspeed(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetspeed, _state);}

 static bool skipaawacs(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipaawacs, _state);}

 static bool skiparmlock(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiparmlock, _state);}

 static bool skipawacsprox(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipawacsprox, _state);}

 static bool skipbreak(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipbreak, _state);}

 static bool skipbreaktimer(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipbreaktimer, _state);}

 static bool skipcannon(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipcannon, _state);}

 static bool skipcntrattack(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipcntrattack, _state);}

 static bool skipdeadband(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipdeadband, _state);}

 static bool skipe10(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipe10, _state);}

 static bool skipe11(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipe11, _state);}

 static bool skipe12(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipe12, _state);}

 static bool skipe7(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipe7, _state);}

 static bool skipe8(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipe8, _state);}

 static bool skipe9(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipe9, _state);}

 static bool skipeawacs(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipeawacs, _state);}

 static bool skipescort(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipescort, _state);}

 static bool skipevade(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipevade, _state);}

 static bool skipevasion(m2c::_offsets _i, struct m2c::_STATE* _state){return _group2(_i ? _i : m2c::kskipevasion, _state);}

 static bool skipewr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipewr, _state);}

 static bool skipfiring(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipfiring, _state);}

 static bool skipicprox(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipicprox, _state);}

 static bool skipresponse(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipresponse, _state);}

 static bool skiprestart(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiprestart, _state);}

 static bool skiptf(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiptf, _state);}

 static bool skipupright(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipupright, _state);}

 static bool sortaccel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortaccel, _state);}

 static bool sortbreak(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortbreak, _state);}

 static bool sortdelay(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortdelay, _state);}

 static bool sorthdg(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksorthdg, _state);}

 static bool sorticalt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksorticalt, _state);}

 static bool sortliftvector(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortliftvector, _state);}

 static bool sortlink(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortlink, _state);}

 static bool sortspeed(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortspeed, _state);}

 static bool sorttakeoffanim(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksorttakeoffanim, _state);}

 static bool sorttaxihdg(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksorttaxihdg, _state);}

 __attribute__((weak)) bool sortwpalt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortwpalt, _state);}

 static bool stopevade(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kstopevade, _state);}

 static bool targetwp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktargetwp, _state);}

 static bool taxiaccel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktaxiaccel, _state);}

 static bool taxidecel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktaxidecel, _state);}

 static bool taxispeedok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktaxispeedok, _state);}

 static bool tdistov(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktdistov, _state);}

 static bool timeok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktimeok, _state);}

 static bool updateoneexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateoneexit, _state);}

 static bool wpok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kwpok, _state);}

 static bool zftok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kzftok, _state);}

	
	#include "aircraft_default_seg_lifted.cpp"
#include "aircraft_dronecode_lifted.cpp"
#include "aircraft_weaponcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::k__m2c_macrolocal_103_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_103_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_109_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_110_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_111_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_112_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_113_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_115_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_117_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_11_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_120_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_146_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_148_skip: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_154_skip: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_155_skip: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_15_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_15_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_162_skip: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_163_skip: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_164_skip: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_166_skip: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_167_mvxy1: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_167_mvxy2: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_167_mvxy3: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_167_mvxy4: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_168_skip: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_169_skip: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_170_skip: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_172_skip: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_173_mvxy1: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_173_mvxy2: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_173_mvxy3: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_173_mvxy4: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_1_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_20_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_20_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_26_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_31_mvxy1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_31_mvxy2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_31_mvxy3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_31_mvxy4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_32_mvxy1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_32_mvxy2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_32_mvxy3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_32_mvxy4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_34_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_34_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_4_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_65_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_67_mvxy1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_67_mvxy2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_67_mvxy3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_67_mvxy4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_69_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_70_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_71_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_72_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_78_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_79_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_96_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_96_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaaactivity: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaaexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaaok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaccelok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaccok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kactionexit: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_aerialexplosion
        case m2c::kaerialexplosion: 	if (!aerialexplosion(0, _state)) return false; break;
#endif
        case m2c::kagmok: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kalarmok: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kaltok: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_arctan
        case m2c::karctan: 	if (!arctan(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_arctan2
        case m2c::karctan2: 	if (!arctan2(0, _state)) return false; break;
#endif
        case m2c::karmagm: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::karmalarm: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::karmbl755: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::karmgpb1000: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::karmjp233: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::karmlgb1000: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::karmnull: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::karmret1000: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kautoagm: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kautoalarm: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kautoaltitude: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kautobomb: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kautocannon: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kautoheading: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kautojp233: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kautolaydown: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kautolgb: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kautomissile: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kautoroute: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kautothrottle: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kawacsresponse: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbreakfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbreakpass: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcaccel: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calcangdiff
        case m2c::kcalcangdiff: 	if (!calcangdiff(0, _state)) return false; break;
#endif
        case m2c::kcalcangles: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calcdeltaxy
        case m2c::kcalcdeltaxy: 	if (!calcdeltaxy(0, _state)) return false; break;
#endif
        case m2c::kcalcdeltaxyz: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calceyecoords
        case m2c::kcalceyecoords: 	if (!calceyecoords(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcgndheight
        case m2c::kcalcgndheight: 	if (!calcgndheight(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcintercept
        case m2c::kcalcintercept: 	if (!calcintercept(0, _state)) return false; break;
#endif
        case m2c::kcalcnextwp: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calcrngbrgvp_vp
        case m2c::kcalcrngbrgvp_vp: 	if (!calcrngbrgvp_vp(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcrngbrgvp_wp
        case m2c::kcalcrngbrgvp_wp: 	if (!calcrngbrgvp_wp(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcrngbrgwp_wp
        case m2c::kcalcrngbrgwp_wp: 	if (!calcrngbrgwp_wp(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcrngrelco
        case m2c::kcalcrngrelco: 	if (!calcrngrelco(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcsinefine
        case m2c::kcalcsinefine: 	if (!calcsinefine(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcslantrange
        case m2c::kcalcslantrange: 	if (!calcslantrange(0, _state)) return false; break;
#endif
        case m2c::kcalctaxirngbrg: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calcthrow
        case m2c::kcalcthrow: 	if (!calcthrow(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calctransmatrix
        case m2c::kcalctransmatrix: 	if (!calctransmatrix(0, _state)) return false; break;
#endif
        case m2c::kcalcturndist: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calcvias
        case m2c::kcalcvias: 	if (!calcvias(0, _state)) return false; break;
#endif
        case m2c::kcasepitchok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcasepull: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcasepush: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcheckescort: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcheckicavail: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_checkirlock
        case m2c::kcheckirlock: 	if (!checkirlock(0, _state)) return false; break;
#endif
        case m2c::kcontaccel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontaction: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontagm: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kcontalarm: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kcontautoalt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontbreak: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontevade: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontheading: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontjp233: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kcontlgb: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kcontpitchrate: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kctrlapproach: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kctrlcombat: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kctrllanding: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kctrlnull: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kctrltakeoff: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kctrltaxi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kctrltouchdown: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kctrltrack: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdecerror: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_deletemobile
        case m2c::kdeletemobile: 	if (!deletemobile(0, _state)) return false; break;
#endif
        case m2c::kdroneaction: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel10: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel100: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel101: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel102: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel103: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel104: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel105: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel106: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel107: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel108: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel109: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel11: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel110: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel111: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel112: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel113: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel114: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel115: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel116: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel117: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel118: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel119: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel12: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel120: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel121: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel122: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel123: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel124: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel125: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel126: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel127: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel128: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel129: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel13: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel130: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel131: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel132: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel133: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel134: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kdummylabel135: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kdummylabel136: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kdummylabel137: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kdummylabel138: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kdummylabel139: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kdummylabel14: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel140: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kdummylabel141: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kdummylabel142: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kdummylabel143: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kdummylabel144: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kdummylabel145: 	if (!_group2(__disp, _state)) return false; break;
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
        case m2c::kdummylabel54: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel55: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel56: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel57: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel58: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel59: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel60: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel61: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel62: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel63: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel64: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel65: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel66: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel67: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel68: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel69: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel70: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel71: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel72: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel73: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel74: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel75: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel76: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel77: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel78: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel79: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel80: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel81: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel82: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel83: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel84: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel85: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel86: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel87: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel88: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel89: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel90: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel91: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel92: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel93: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel94: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel95: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel96: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel97: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel98: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel99: 	if (!_group1(__disp, _state)) return false; break;
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
        case m2c::kedummylabel20: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel21: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel22: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel23: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel24: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel25: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel26: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel27: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel28: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel29: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel30: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel31: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel32: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel33: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel34: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel35: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel36: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel37: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel38: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel39: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel40: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kedummylabel41: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kedummylabel42: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kedummylabel43: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kedummylabel44: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kedummylabel45: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kedummylabel46: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kedummylabel47: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kevasiontactics: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kexitagm: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kexitalarm: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kexitbomb: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kexitcombat: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitinittaxi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitjp233: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kexitlanding: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitlaydown: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kexitlgb: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kexitnextwp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitroute: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexittaxi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitturndist: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_fastarccos
        case m2c::kfastarccos: 	if (!fastarccos(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_fastarcsin
        case m2c::kfastarcsin: 	if (!fastarcsin(0, _state)) return false; break;
#endif
        case m2c::kfindenemyic: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_firecannon
        case m2c::kfirecannon: 	if (!firecannon(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_getdronealive
        case m2c::kgetdronealive: 	if (!getdronealive(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_getdronespeed
        case m2c::kgetdronespeed: 	if (!getdronespeed(0, _state)) return false; break;
#endif
        case m2c::kgmaxok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgndcheckok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgroundcheck: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kicavail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kicresponse: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kicunavail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kincerror: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitoneexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitoneplane: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitplanes: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinittaxi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintobreak: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintoevade: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_launchalarm
        case m2c::klaunchalarm: 	if (!launchalarm(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_launchmissile
        case m2c::klaunchmissile: 	if (!launchmissile(0, _state)) return false; break;
#endif
        case m2c::klgbok: 	if (!_group2(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_limitpfine
        case m2c::klimitpfine: 	if (!limitpfine(0, _state)) return false; break;
#endif
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_makesmokeeffect
        case m2c::kmakesmokeeffect: 	if (!makesmokeeffect(0, _state)) return false; break;
#endif
        case m2c::kmaxrollangle: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmiscresponse: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprateok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kproxalliedexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kproxalliedic: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kproxenemyexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kproxenemyic: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kqueque0009: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kqueque000b: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kqueque000d: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kqueque000f: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kqueque0032: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kqueque0034: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kqueque003a: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kqueque003c: 	if (!_group2(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_randx
        case m2c::krandx: 	if (!randx(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_releasedecoy
        case m2c::kreleasedecoy: 	if (!releasedecoy(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_releasepackage
        case m2c::kreleasepackage: 	if (!releasepackage(0, _state)) return false; break;
#endif
        case m2c::ksameerror: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksatisfiedwp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kselectbreakwp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kselectnextwp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetaatimer: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetautoalt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetbreaktimer: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetceiling: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetcombatmode: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetcombatspeed: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetcosbrgerror: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetctrlmode: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetdecoytimer: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::ksetewrtimer: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksethdgerror: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetmaxspeed: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetpitcherror: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetpitchlimit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetrolldemand: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetspeed: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetveryfast: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipaawacs: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiparmlock: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipawacsprox: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipbreak: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipbreaktimer: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipcannon: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipcntrattack: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipdeadband: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipe10: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipe11: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipe12: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipe7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipe8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipe9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipeawacs: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipescort: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipevade: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipevasion: 	if (!_group2(__disp, _state)) return false; break;
        case m2c::kskipewr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipfiring: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipicprox: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipresponse: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiprestart: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiptf: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipupright: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortaccel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortbreak: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortcontrolmode: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortdelay: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksorthdg: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksorticalt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortliftvector: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortlink: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortspeed: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksorttakeoffanim: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksorttaxihdg: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksorttaxixy: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortwpalt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kstopevade: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_tangent
        case m2c::ktangent: 	if (!tangent(0, _state)) return false; break;
#endif
        case m2c::ktargetwp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktaxiaccel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktaxidecel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktaxispeedok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktdistov: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktimeok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktornadoaction: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_updatemobile
        case m2c::kupdatemobile: 	if (!updatemobile(0, _state)) return false; break;
#endif
        case m2c::kupdateoneexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateoneplane: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateplanes: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kwpok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kzftok: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_aircraft()
          {
              aircraftptr = 65535;
    perfdataptr = 65535;
    ac_mobile = mobile{0,0,0,0,65535};
    ac_view = viewpoint{0,0,0,0,0,0,0,0};
    ac_data = aircraft{drone_unknown,dead,0,0,0,0,255,0,65535,0,0,0,0,0,0,0,0,0,0,0,65535,0,0,0,0,0,0,65535,0,0,0,0,0,0,0};
    ac_autohfine = 0;
    ac_autoalt = 0;
    ac_autovtas = 0;
    ac_wprng = 0;
    ac_wpbrg = 0;
    ac_wpbrgfine = 0;
    ac_vmin = 0;
    ac_vmax = 0;
    ac_vtrim = 0;
    ac_thetaab = 0;
    ac_thetabc = 0;
    ac_thetaabc = 0;
    ac_rturn = 0;
    controlmode = m2c::kglobal_ctrlnull;
    dummy21cefb4a_data_78_2049 = m2c::kglobal_ctrltakeoff;
    dummy21cefb4a_data_7a_2050 = m2c::kglobal_ctrltrack;
    dummy21cefb4a_data_7c_2051 = m2c::kglobal_ctrlapproach;
    dummy21cefb4a_data_7e_2052 = m2c::kglobal_ctrltouchdown;
    dummy21cefb4a_data_80_2053 = m2c::kglobal_ctrllanding;
    dummy21cefb4a_data_82_2054 = m2c::kglobal_ctrltaxi;
    dummy21cefb4a_data_84_2055 = m2c::kglobal_ctrlcombat;
    armswitch = m2c::kglobal_armnull;
    dummy21cefb4a_data_88_2061 = m2c::kglobal_armgpb1000;
    dummy21cefb4a_data_8a_2062 = m2c::kglobal_armret1000;
    dummy21cefb4a_data_8c_2063 = m2c::kglobal_armlgb1000;
    dummy21cefb4a_data_8e_2064 = m2c::kglobal_armbl755;
    dummy21cefb4a_data_90_2065 = m2c::kglobal_armjp233;
    dummy21cefb4a_data_92_2066 = m2c::kglobal_armalarm;
    dummy21cefb4a_data_94_2067 = m2c::kglobal_armagm;
    weapontype = 0;
    weaponnum = 0;
    perfdataptrs = offset(data,gr4tornado);
    dummy21cefb4a_data_9c_2087 = offset(data,mig27flogger);
    dummy21cefb4a_data_9e_2088 = offset(data,f3tornado);
    dummy21cefb4a_data_a0_2089 = offset(data,mig31foxhound);
    dummy21cefb4a_data_a2_2090 = offset(data,f15eagle);
    dummy21cefb4a_data_a4_2091 = offset(data,su27flanker);
    dummy21cefb4a_data_a6_2092 = offset(data,f16falcon);
    dummy21cefb4a_data_a8_2093 = offset(data,mig29fulcrum);
    dummy21cefb4a_data_aa_2094 = offset(data,a10thunderbolt);
    dummy21cefb4a_data_ac_2095 = offset(data,su25frogfoot);
    dummy21cefb4a_data_ae_2096 = offset(data,e3dsentry);
    dummy21cefb4a_data_b0_2097 = offset(data,il76mainstay);
    dummy21cefb4a_data_b2_2098 = offset(data,c130hercules);
    dummy21cefb4a_data_b4_2099 = offset(data,il76candid);
    gr4tornado = perf_data{offset(data,takeoff2),offset(data,cruise1),offset(data,landing1),65535};
    mig27flogger = perf_data{offset(data,takeoff2),offset(data,cruise1),offset(data,landing3),65535};
    f3tornado = perf_data{offset(data,takeoff2),offset(data,cruise1),offset(data,landing1),offset(data,combat1)};
    mig31foxhound = perf_data{offset(data,takeoff3),offset(data,cruise1),offset(data,landing3),offset(data,combat2)};
    f15eagle = perf_data{offset(data,takeoff1),offset(data,cruise2),offset(data,landing3),offset(data,combat3)};
    su27flanker = perf_data{offset(data,takeoff1),offset(data,cruise2),offset(data,landing2),offset(data,combat4)};
    f16falcon = perf_data{offset(data,takeoff2),offset(data,cruise2),offset(data,landing2),offset(data,combat5)};
    mig29fulcrum = perf_data{offset(data,takeoff1),offset(data,cruise2),offset(data,landing2),offset(data,combat6)};
    a10thunderbolt = perf_data{offset(data,takeoff2),offset(data,cruise3),offset(data,landing2),65535};
    su25frogfoot = perf_data{offset(data,takeoff2),offset(data,cruise3),offset(data,landing2),65535};
    e3dsentry = perf_data{offset(data,takeoff3),offset(data,cruise4),offset(data,landing3),65535};
    il76mainstay = perf_data{offset(data,takeoff3),offset(data,cruise4),offset(data,landing2),65535};
    c130hercules = perf_data{offset(data,takeoff3),offset(data,cruise4),offset(data,landing2),65535};
    il76candid = perf_data{offset(data,takeoff3),offset(data,cruise4),offset(data,landing2),65535};
    takeoff1 = takeoff{1488,181,1857,273};
    takeoff2 = takeoff{1785,130,1114,164};
    takeoff3 = takeoff{1547,65,644,95};
    cruise1 = cruise{50000,10880,17142,80,0};
    cruise2 = cruise{60000,9520,17142,160,0};
    cruise3 = cruise{22000,4760,9248,80,0};
    cruise4 = cruise{40000,3400,6120,40,1};
    dummy21cefb4a_data_166_2233 = 1768;
    dummy21cefb4a_data_168_2234 = 1796;
    dummy21cefb4a_data_16a_2235 = 1822;
    dummy21cefb4a_data_16c_2236 = 1850;
    dummy21cefb4a_data_16e_2237 = 1880;
    dummy21cefb4a_data_170_2238 = 1909;
    dummy21cefb4a_data_172_2239 = 1939;
    dummy21cefb4a_data_174_2240 = 1969;
    dummy21cefb4a_data_176_2241 = 1999;
    dummy21cefb4a_data_178_2242 = 2032;
    dummy21cefb4a_data_17a_2243 = 2066;
    dummy21cefb4a_data_17c_2244 = 2098;
    dummy21cefb4a_data_17e_2245 = 2133;
    dummy21cefb4a_data_180_2246 = 2169;
    dummy21cefb4a_data_182_2247 = 2206;
    dummy21cefb4a_data_184_2248 = 2243;
    dummy21cefb4a_data_186_2249 = 2280;
    dummy21cefb4a_data_188_2250 = 2318;
    dummy21cefb4a_data_18a_2251 = 2359;
    dummy21cefb4a_data_18c_2252 = 2400;
    dummy21cefb4a_data_18e_2253 = 2441;
    dummy21cefb4a_data_190_2254 = 2485;
    dummy21cefb4a_data_192_2255 = 2531;
    dummy21cefb4a_data_194_2256 = 2576;
    dummy21cefb4a_data_196_2257 = 2623;
    dummy21cefb4a_data_198_2258 = 2681;
    dummy21cefb4a_data_19a_2259 = 2726;
    dummy21cefb4a_data_19c_2260 = 2767;
    dummy21cefb4a_data_19e_2261 = 2820;
    dummy21cefb4a_data_1a0_2262 = 2873;
    dummy21cefb4a_data_1a2_2263 = 2927;
    dummy21cefb4a_data_1a4_2264 = 2986;
    dummy21cefb4a_data_1a6_2265 = 3045;
    dummy21cefb4a_data_1a8_2266 = 3101;
    dummy21cefb4a_data_1aa_2267 = 3163;
    dummy21cefb4a_data_1ac_2268 = 3228;
    dummy21cefb4a_data_1ae_2269 = 3306;
    dummy21cefb4a_data_1b0_2270 = 3385;
    dummy21cefb4a_data_1b2_2271 = 3472;
    dummy21cefb4a_data_1b4_2272 = 3559;
    dummy21cefb4a_data_1b6_2273 = 3642;
    dummy21cefb4a_data_1b8_2274 = 3736;
    dummy21cefb4a_data_1ba_2275 = 3828;
    dummy21cefb4a_data_1bc_2276 = 3923;
    dummy21cefb4a_data_1be_2277 = 4023;
    dummy21cefb4a_data_1c0_2278 = 4120;
    dummy21cefb4a_data_1c2_2279 = 4230;
    dummy21cefb4a_data_1c4_2280 = 4335;
    dummy21cefb4a_data_1c6_2281 = 4437;
    dummy21cefb4a_data_1c8_2282 = 4552;
    dummy21cefb4a_data_1ca_2283 = 4662;
    dummy21cefb4a_data_1cc_2284 = 4779;
    dummy21cefb4a_data_1ce_2285 = 4901;
    dummy21cefb4a_data_1d0_2286 = 5025;
    dummy21cefb4a_data_1d2_2287 = 5149;
    dummy21cefb4a_data_1d4_2288 = 5286;
    dummy21cefb4a_data_1d6_2289 = 5413;
    dummy21cefb4a_data_1d8_2290 = 5541;
    dummy21cefb4a_data_1da_2291 = 5680;
    dummy21cefb4a_data_1dc_2292 = 5822;
    dummy21cefb4a_data_1de_2293 = 5975;
    dummy21cefb4a_data_1e0_2294 = 6123;
    dummy21cefb4a_data_1e2_2295 = 6279;
    dummy21cefb4a_data_1e4_2296 = 6431;
    dummy21cefb4a_data_1e6_2297 = 6591;
    landing1 = landing{130};
    landing2 = landing{98};
    landing3 = landing{65};
    combat1 = combat{50,8,32767,120,256};
    combat2 = combat{50,8,16384,96,256};
    combat3 = combat{100,8,21845,117,256};
    combat4 = combat{100,8,27307,160,256};
    combat5 = combat{75,6,32767,144,256};
    combat6 = combat{75,6,32767,144,256};
    taxiwp = waypoint{'?',0,0,0,0,0,0,0,0,0};
    ac_vias = 0;
    ac_divvias = 1360;
    ac_divvtas = 1360;
    icpoint = viewpoint{0,0,0,0,0,0,0,0};
    scaledrange = 0;
    xt = 0;
    yt = 0;
    zt = 0;
    hdgerror = 0;
    pitcherror = 0;
    brgerror = 0;
    cosbrgerror = 0;
    maxrrate = 0;
    maxprate = 0;
    maxgforce = 0;
    rolldemand = 0;
    dampedroll = 0;
    pitchrate = 0;
    oppvtas = 0;
    tornadooppptr = 65535;
    tmpsrcptr = 65535;
    tmpicptr = 65535;
    tmpicrng = 4294967295;
    responsetimer = 0;
    ewrexposetimer = 0;
    breaktimer = 0;
    very_fast = 0;
    errorscale = 0;
    oppbehind = 0;
    breakflag = 0;

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_aircraft(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        
