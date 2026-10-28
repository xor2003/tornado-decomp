/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "weapons.h"

	
 __attribute__((weak)) bool aerialexplosion(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaerialexplosion, _state);}

 __attribute__((weak)) bool alarmguidance(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kalarmguidance, _state);}

 __attribute__((weak)) bool alarmguideabove(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kalarmguideabove, _state);}

 __attribute__((weak)) bool alarmguidebelow(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kalarmguidebelow, _state);}

 __attribute__((weak)) bool alarmmovement(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kalarmmovement, _state);}

 __attribute__((weak)) bool alarmradarscan(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kalarmradarscan, _state);}

 __attribute__((weak)) bool bombballistics(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbombballistics, _state);}

 __attribute__((weak)) bool calcbombccip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcbombccip, _state);}

 __attribute__((weak)) bool calcdecoypos(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcdecoypos, _state);}

 __attribute__((weak)) bool calcpylonpos(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcpylonpos, _state);}

 __attribute__((weak)) bool calcstoreswt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcstoreswt, _state);}

 __attribute__((weak)) bool calcthrow(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcthrow, _state);}

 __attribute__((weak)) bool checkalarmtimer(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcheckalarmtimer, _state);}

 __attribute__((weak)) bool checkirlock(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcheckirlock, _state);}

 __attribute__((weak)) bool checkradartgt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcheckradartgt, _state);}

 __attribute__((weak)) bool createairburst(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcreateairburst, _state);}

 __attribute__((weak)) bool createbomblet(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcreatebomblet, _state);}

 __attribute__((weak)) bool createexplosion(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcreateexplosion, _state);}

 __attribute__((weak)) bool findavailweapon(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfindavailweapon, _state);}

 __attribute__((weak)) bool firecannon(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfirecannon, _state);}

 __attribute__((weak)) bool grounddamage(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgrounddamage, _state);}

 __attribute__((weak)) bool initweapons(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitweapons, _state);}

 __attribute__((weak)) bool killgndobjects(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kkillgndobjects, _state);}

 __attribute__((weak)) bool killmobiles(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kkillmobiles, _state);}

 __attribute__((weak)) bool killstatmobiles(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kkillstatmobiles, _state);}

 __attribute__((weak)) bool killtrees(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kkilltrees, _state);}

 __attribute__((weak)) bool launchalarm(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klaunchalarm, _state);}

 __attribute__((weak)) bool launchmissile(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klaunchmissile, _state);}

 __attribute__((weak)) bool lgbguidance(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klgbguidance, _state);}

 __attribute__((weak)) bool missileguidance(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmissileguidance, _state);}

 __attribute__((weak)) bool proximitykill(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kproximitykill, _state);}

 __attribute__((weak)) bool recordrwydamage(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krecordrwydamage, _state);}

 __attribute__((weak)) bool releasebomb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreleasebomb, _state);}

 __attribute__((weak)) bool releasedecoy(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreleasedecoy, _state);}

 __attribute__((weak)) bool releasepackage(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreleasepackage, _state);}

 __attribute__((weak)) bool retardbombvel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kretardbombvel, _state);}

 static bool scantrees(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscantrees, _state);}

 __attribute__((weak)) bool selectairwpn(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kselectairwpn, _state);}

 __attribute__((weak)) bool selectnextpack(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kselectnextpack, _state);}

 __attribute__((weak)) bool shellballistics(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kshellballistics, _state);}

 __attribute__((weak)) bool storeimpact(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kstoreimpact, _state);}

 __attribute__((weak)) bool updateairburst(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateairburst, _state);}

 __attribute__((weak)) bool updatealarm(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatealarm, _state);}

 __attribute__((weak)) bool updatebl755(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatebl755, _state);}

 __attribute__((weak)) bool updatecannon(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatecannon, _state);}

 __attribute__((weak)) bool updatedecoy(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatedecoy, _state);}

 __attribute__((weak)) bool updategpb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdategpb, _state);}

 __attribute__((weak)) bool updatejp233(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatejp233, _state);}

 __attribute__((weak)) bool updatelgb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatelgb, _state);}

 __attribute__((weak)) bool updatemissile(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatemissile, _state);}

 __attribute__((weak)) bool updateret(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateret, _state);}

 __attribute__((weak)) bool updatesplash(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatesplash, _state);}

 __attribute__((weak)) bool updateweapons(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateweapons, _state);}

 __attribute__((weak)) bool weaponscontrol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kweaponscontrol, _state);}

 __attribute__((weak)) bool wpnhittarget(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kwpnhittarget, _state);}

 static bool __m2c_macrolocal_100_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_100_skip, _state);}

 static bool __m2c_macrolocal_101_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_101_skip, _state);}

 static bool __m2c_macrolocal_102_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_102_skip, _state);}

 static bool __m2c_macrolocal_104_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_104_skip, _state);}

 static bool __m2c_macrolocal_106_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_106_skip, _state);}

 static bool __m2c_macrolocal_10_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_10_skip, _state);}

 static bool __m2c_macrolocal_115_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_115_skip, _state);}

 static bool __m2c_macrolocal_118_mvxy1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_118_mvxy1, _state);}

 static bool __m2c_macrolocal_118_mvxy2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_118_mvxy2, _state);}

 static bool __m2c_macrolocal_118_mvxy3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_118_mvxy3, _state);}

 static bool __m2c_macrolocal_118_mvxy4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_118_mvxy4, _state);}

 static bool __m2c_macrolocal_119_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_119_skip, _state);}

 static bool __m2c_macrolocal_11_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_11_skip, _state);}

 static bool __m2c_macrolocal_120_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_120_skip, _state);}

 static bool __m2c_macrolocal_121_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_121_skip, _state);}

 static bool __m2c_macrolocal_122_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_122_skip, _state);}

 static bool __m2c_macrolocal_128_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_128_skip, _state);}

 static bool __m2c_macrolocal_12_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_12_skip, _state);}

 static bool __m2c_macrolocal_130_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_130_skip, _state);}

 static bool __m2c_macrolocal_131_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_131_skip, _state);}

 static bool __m2c_macrolocal_132_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_132_skip, _state);}

 static bool __m2c_macrolocal_139_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_139_skip, _state);}

 static bool __m2c_macrolocal_13_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_13_skip, _state);}

 static bool __m2c_macrolocal_140_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_140_skip, _state);}

 static bool __m2c_macrolocal_141_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_141_skip, _state);}

 static bool __m2c_macrolocal_145_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_145_skip, _state);}

 static bool __m2c_macrolocal_146_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_146_skip, _state);}

 static bool __m2c_macrolocal_147_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_147_skip, _state);}

 static bool __m2c_macrolocal_148_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_148_skip, _state);}

 static bool __m2c_macrolocal_149_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_149_skip, _state);}

 static bool __m2c_macrolocal_14_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_14_skip, _state);}

 static bool __m2c_macrolocal_155_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_155_skip, _state);}

 static bool __m2c_macrolocal_156_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_156_skip, _state);}

 static bool __m2c_macrolocal_157_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_157_skip, _state);}

 static bool __m2c_macrolocal_158_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_158_skip, _state);}

 static bool __m2c_macrolocal_159_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_159_skip, _state);}

 static bool __m2c_macrolocal_15_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_15_skip, _state);}

 static bool __m2c_macrolocal_166_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_166_skip, _state);}

 static bool __m2c_macrolocal_168_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_168_skip, _state);}

 static bool __m2c_macrolocal_169_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_169_skip, _state);}

 static bool __m2c_macrolocal_16_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_16_skip, _state);}

 static bool __m2c_macrolocal_170_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_170_skip, _state);}

 static bool __m2c_macrolocal_171_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_171_skip, _state);}

 static bool __m2c_macrolocal_172_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_172_skip, _state);}

 static bool __m2c_macrolocal_176_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_176_skip, _state);}

 static bool __m2c_macrolocal_177_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_177_skip, _state);}

 static bool __m2c_macrolocal_17_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_17_skip, _state);}

 static bool __m2c_macrolocal_181_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_181_skip, _state);}

 static bool __m2c_macrolocal_182_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_182_skip, _state);}

 static bool __m2c_macrolocal_184_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_184_skip, _state);}

 static bool __m2c_macrolocal_18_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_18_skip, _state);}

 static bool __m2c_macrolocal_190_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_190_skip, _state);}

 static bool __m2c_macrolocal_195_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_195_skip, _state);}

 static bool __m2c_macrolocal_19_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_19_skip, _state);}

 static bool __m2c_macrolocal_206_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_206_skip, _state);}

 static bool __m2c_macrolocal_20_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_20_skip, _state);}

 static bool __m2c_macrolocal_212_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_212_skip, _state);}

 static bool __m2c_macrolocal_215_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_215_skip, _state);}

 static bool __m2c_macrolocal_21_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_21_skip, _state);}

 static bool __m2c_macrolocal_221_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_221_skip, _state);}

 static bool __m2c_macrolocal_225_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_225_skip, _state);}

 static bool __m2c_macrolocal_231_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_231_skip, _state);}

 static bool __m2c_macrolocal_233_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_233_skip, _state);}

 static bool __m2c_macrolocal_234_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_234_skip, _state);}

 static bool __m2c_macrolocal_235_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_235_skip, _state);}

 static bool __m2c_macrolocal_236_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_236_skip, _state);}

 static bool __m2c_macrolocal_239_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_239_skip, _state);}

 static bool __m2c_macrolocal_23_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_23_skip, _state);}

 static bool __m2c_macrolocal_240_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_240_skip, _state);}

 static bool __m2c_macrolocal_241_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_241_skip, _state);}

 static bool __m2c_macrolocal_242_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_242_skip, _state);}

 static bool __m2c_macrolocal_243_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_243_skip, _state);}

 static bool __m2c_macrolocal_246_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_246_skip, _state);}

 static bool __m2c_macrolocal_247_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_247_skip, _state);}

 static bool __m2c_macrolocal_248_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_248_skip, _state);}

 static bool __m2c_macrolocal_249_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_249_skip, _state);}

 static bool __m2c_macrolocal_250_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_250_skip, _state);}

 static bool __m2c_macrolocal_252_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_252_skip, _state);}

 static bool __m2c_macrolocal_254_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_254_skip, _state);}

 static bool __m2c_macrolocal_255_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_255_skip, _state);}

 static bool __m2c_macrolocal_256_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_256_skip, _state);}

 static bool __m2c_macrolocal_257_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_257_skip, _state);}

 static bool __m2c_macrolocal_258_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_258_skip, _state);}

 static bool __m2c_macrolocal_259_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_259_skip, _state);}

 static bool __m2c_macrolocal_25_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_25_skip, _state);}

 static bool __m2c_macrolocal_260_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_260_skip, _state);}

 static bool __m2c_macrolocal_261_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_261_skip, _state);}

 static bool __m2c_macrolocal_264_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_264_skip, _state);}

 static bool __m2c_macrolocal_265_mvxy1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_265_mvxy1, _state);}

 static bool __m2c_macrolocal_265_mvxy2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_265_mvxy2, _state);}

 static bool __m2c_macrolocal_265_mvxy3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_265_mvxy3, _state);}

 static bool __m2c_macrolocal_265_mvxy4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_265_mvxy4, _state);}

 static bool __m2c_macrolocal_266_mvxy1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_266_mvxy1, _state);}

 static bool __m2c_macrolocal_266_mvxy2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_266_mvxy2, _state);}

 static bool __m2c_macrolocal_266_mvxy3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_266_mvxy3, _state);}

 static bool __m2c_macrolocal_266_mvxy4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_266_mvxy4, _state);}

 static bool __m2c_macrolocal_26_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_26_skip, _state);}

 static bool __m2c_macrolocal_30_mvxy1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_30_mvxy1, _state);}

 static bool __m2c_macrolocal_30_mvxy2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_30_mvxy2, _state);}

 static bool __m2c_macrolocal_30_mvxy3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_30_mvxy3, _state);}

 static bool __m2c_macrolocal_30_mvxy4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_30_mvxy4, _state);}

 static bool __m2c_macrolocal_42_mvxy1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_42_mvxy1, _state);}

 static bool __m2c_macrolocal_42_mvxy2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_42_mvxy2, _state);}

 static bool __m2c_macrolocal_42_mvxy3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_42_mvxy3, _state);}

 static bool __m2c_macrolocal_42_mvxy4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_42_mvxy4, _state);}

 static bool __m2c_macrolocal_43_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_43_skip, _state);}

 static bool __m2c_macrolocal_44_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_44_skip, _state);}

 static bool __m2c_macrolocal_45_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_45_skip, _state);}

 static bool __m2c_macrolocal_46_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_46_skip, _state);}

 static bool __m2c_macrolocal_47_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_47_skip, _state);}

 static bool __m2c_macrolocal_48_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_48_skip, _state);}

 static bool __m2c_macrolocal_4_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_4_skip, _state);}

 static bool __m2c_macrolocal_56_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_56_skip, _state);}

 static bool __m2c_macrolocal_59_mvxy1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_59_mvxy1, _state);}

 static bool __m2c_macrolocal_59_mvxy2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_59_mvxy2, _state);}

 static bool __m2c_macrolocal_59_mvxy3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_59_mvxy3, _state);}

 static bool __m2c_macrolocal_59_mvxy4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_59_mvxy4, _state);}

 static bool __m2c_macrolocal_5_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_5_skip, _state);}

 static bool __m2c_macrolocal_60_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_60_skip, _state);}

 static bool __m2c_macrolocal_67_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_67_testhi, _state);}

 static bool __m2c_macrolocal_67_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_67_testok, _state);}

 static bool __m2c_macrolocal_68_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_68_skip, _state);}

 static bool __m2c_macrolocal_6_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_6_skip, _state);}

 static bool __m2c_macrolocal_70_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_70_skip, _state);}

 static bool __m2c_macrolocal_7_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_7_skip, _state);}

 static bool __m2c_macrolocal_80_mvxy1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_80_mvxy1, _state);}

 static bool __m2c_macrolocal_80_mvxy2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_80_mvxy2, _state);}

 static bool __m2c_macrolocal_80_mvxy3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_80_mvxy3, _state);}

 static bool __m2c_macrolocal_80_mvxy4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_80_mvxy4, _state);}

 static bool __m2c_macrolocal_84_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_84_skip, _state);}

 static bool __m2c_macrolocal_87_mvxy1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_87_mvxy1, _state);}

 static bool __m2c_macrolocal_87_mvxy2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_87_mvxy2, _state);}

 static bool __m2c_macrolocal_87_mvxy3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_87_mvxy3, _state);}

 static bool __m2c_macrolocal_87_mvxy4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_87_mvxy4, _state);}

 static bool __m2c_macrolocal_8_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_8_skip, _state);}

 static bool __m2c_macrolocal_90_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_90_skip, _state);}

 static bool __m2c_macrolocal_91_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_91_skip, _state);}

 static bool __m2c_macrolocal_92_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_92_skip, _state);}

 static bool __m2c_macrolocal_93_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_93_skip, _state);}

 static bool __m2c_macrolocal_94_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_94_skip, _state);}

 static bool __m2c_macrolocal_95_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_95_skip, _state);}

 static bool __m2c_macrolocal_97_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_97_skip, _state);}

 static bool __m2c_macrolocal_98_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_98_skip, _state);}

 static bool __m2c_macrolocal_9_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_9_skip, _state);}

 static bool aerialactivity(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaerialactivity, _state);}

 static bool alarmaimpitch1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kalarmaimpitch1, _state);}

 static bool alarmaimpitch2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kalarmaimpitch2, _state);}

 static bool alarmdamage(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kalarmdamage, _state);}

 __attribute__((weak)) bool alarmdirect(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kalarmdirect, _state);}

 __attribute__((weak)) bool alarmdive(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kalarmdive, _state);}

 static bool alarmendlife(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kalarmendlife, _state);}

 __attribute__((weak)) bool alarmfreefall(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kalarmfreefall, _state);}

 __attribute__((weak)) bool alarmguide(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kalarmguide, _state);}

 static bool alarmguideok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kalarmguideok, _state);}

 static bool alarmguideover(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kalarmguideover, _state);}

 static bool alarmhitgnd(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kalarmhitgnd, _state);}

 static bool alarmimpact(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kalarmimpact, _state);}

 __attribute__((weak)) bool alarmkill(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kalarmkill, _state);}

 __attribute__((weak)) bool alarmloiter(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kalarmloiter, _state);}

 static bool alarmradarfail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kalarmradarfail, _state);}

 static bool alarmradarpass(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kalarmradarpass, _state);}

 static bool alarmtimerok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kalarmtimerok, _state);}

 __attribute__((weak)) bool alarmzoom(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kalarmzoom, _state);}

 __attribute__((weak)) bool armalarmdir(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::karmalarmdir, _state);}

 __attribute__((weak)) bool armalarmind(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::karmalarmind, _state);}

 __attribute__((weak)) bool armcannon(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::karmcannon, _state);}

 __attribute__((weak)) bool armjp233(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::karmjp233, _state);}

 __attribute__((weak)) bool armlaserguided(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::karmlaserguided, _state);}

 __attribute__((weak)) bool armlaydown(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::karmlaydown, _state);}

 __attribute__((weak)) bool armloft(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::karmloft, _state);}

 __attribute__((weak)) bool armmanual(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::karmmanual, _state);}

 __attribute__((weak)) bool armok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::karmok, _state);}

 __attribute__((weak)) bool armsidewinder(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::karmsidewinder, _state);}

 __attribute__((weak)) bool armskyflash(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::karmskyflash, _state);}

 static bool bellydecoy(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbellydecoy, _state);}

 static bool bombhitgnd(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbombhitgnd, _state);}

 static bool bombimpact(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbombimpact, _state);}

 static bool calclgbpitch1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalclgbpitch1, _state);}

 static bool calclgbpitch2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalclgbpitch2, _state);}

 static bool calclgbrate(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalclgbrate, _state);}

 static bool calclgbvel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalclgbvel, _state);}

 static bool calcpitchdown(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcpitchdown, _state);}

 static bool contairburst(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontairburst, _state);}

 static bool contalarmmove(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontalarmmove, _state);}

 static bool contalarmpitch(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontalarmpitch, _state);}

 static bool contbombball(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontbombball, _state);}

 static bool contburn(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontburn, _state);}

 static bool contburnout(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontburnout, _state);}

 static bool contcannon(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontcannon, _state);}

 static bool contcrater(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontcrater, _state);}

 static bool contdecoypos(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontdecoypos, _state);}

 static bool contewrscan(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontewrscan, _state);}

 static bool contfragment(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontfragment, _state);}

 static bool contheave(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontheave, _state);}

 static bool contjp233(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontjp233, _state);}

 static bool contlgbrelease(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontlgbrelease, _state);}

 static bool contloiter(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontloiter, _state);}

 static bool contmissmove(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontmissmove, _state);}

 static bool contmisspitch(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontmisspitch, _state);}

 static bool contpullup(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontpullup, _state);}

 static bool contpylonpos(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontpylonpos, _state);}

 static bool contrelbomb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontrelbomb, _state);}

 static bool contshellball(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontshellball, _state);}

 static bool contsplash(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontsplash, _state);}

 static bool contthrow(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontthrow, _state);}

 static bool contupdate(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontupdate, _state);}

 static bool drawloop(m2c::_offsets _i, struct m2c::_STATE* _state){return drawweapons(_i ? _i : m2c::kdrawloop, _state);}

 static bool dronewingpylon(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdronewingpylon, _state);}

 static bool ewrdead(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kewrdead, _state);}

 static bool ewrfound(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kewrfound, _state);}

 static bool ewrok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kewrok, _state);}

 static bool exitaerial(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitaerial, _state);}

 static bool exitairwpn(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitairwpn, _state);}

 static bool exitalarm(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitalarm, _state);}

 static bool exitbl755(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitbl755, _state);}

 static bool exitbomblet(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitbomblet, _state);}

 static bool exitcannon(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitcannon, _state);}

 static bool exitdecoy(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitdecoy, _state);}

 static bool exitfirecannon(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitfirecannon, _state);}

 static bool exitgndobj(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitgndobj, _state);}

 static bool exitgpb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitgpb, _state);}

 static bool exitimpact(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitimpact, _state);}

 static bool exitjp233(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitjp233, _state);}

 static bool exitlaunchalarm(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitlaunchalarm, _state);}

 static bool exitlaunchmiss(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitlaunchmiss, _state);}

 static bool exitlgb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitlgb, _state);}

 static bool exitmissile(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitmissile, _state);}

 static bool exitnextpack(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitnextpack, _state);}

 static bool exitproxkill(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitproxkill, _state);}

 static bool exitradartgt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitradartgt, _state);}

 static bool exitrelbomb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitrelbomb, _state);}

 static bool exitreldecoy(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitreldecoy, _state);}

 static bool exitret(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitret, _state);}

 static bool exitrwydamage(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitrwydamage, _state);}

 static bool exitsamloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitsamloop, _state);}

 static bool exitsplash(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitsplash, _state);}

 static bool exitstatmob(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitstatmob, _state);}

 static bool exploloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexploloop, _state);}

 static bool explosoundok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexplosoundok, _state);}

 static bool findwpnloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfindwpnloop, _state);}

 static bool gndobjloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgndobjloop, _state);}

 static bool hvelok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khvelok, _state);}

 static bool intodive(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintodive, _state);}

 static bool intofreefall(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintofreefall, _state);}

 static bool intokill(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintokill, _state);}

 static bool intolgbvel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintolgbvel, _state);}

 static bool intoloiter(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintoloiter, _state);}

 static bool intozoom(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintozoom, _state);}

 static bool irlock(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kirlock, _state);}

 static bool killgndexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kkillgndexit, _state);}

 static bool killmobexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kkillmobexit, _state);}

 static bool killstatexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kkillstatexit, _state);}

 static bool killtreesexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kkilltreesexit, _state);}

 static bool latearmswitch(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klatearmswitch, _state);}

 static bool lgbhdgerror(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klgbhdgerror, _state);}

 static bool lgbimpact(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klgbimpact, _state);}

 static bool loftcommit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kloftcommit, _state);}

 static bool missaimpitch1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmissaimpitch1, _state);}

 static bool missaimpitch2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmissaimpitch2, _state);}

 static bool missilehitgnd(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmissilehitgnd, _state);}

 static bool missileimpact(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmissileimpact, _state);}

 static bool missileok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmissileok, _state);}

 static bool misslockok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmisslockok, _state);}

 static bool missloselock(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmissloselock, _state);}

 static bool misstimerok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmisstimerok, _state);}

 static bool mobileloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmobileloop, _state);}

 static bool movemissile(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmovemissile, _state);}

 static bool newrwy(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knewrwy, _state);}

 static bool nextgndobj(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextgndobj, _state);}

 static bool nextmobile(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextmobile, _state);}

 static bool nextpackloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextpackloop, _state);}

 static bool nextrwy(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextrwy, _state);}

 static bool nextstatmob(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextstatmob, _state);}

 static bool nextthreat(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextthreat, _state);}

 static bool nexttree(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knexttree, _state);}

 static bool nolaser(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knolaser, _state);}

 static bool nolgbflip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knolgbflip, _state);}

 static bool nolock(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knolock, _state);}

 static bool noradartargets(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knoradartargets, _state);}

 static bool packageok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpackageok, _state);}

 static bool queque002e(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kqueque002e, _state);}

 static bool queque0030(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kqueque0030, _state);}

 static bool rwyloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krwyloop, _state);}

 static bool samerwy(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksamerwy, _state);}

 static bool scaleok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscaleok, _state);}

 static bool scanaaaloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanaaaloop, _state);}

 static bool scanewrloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanewrloop, _state);}

 static bool scanmobiles(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanmobiles, _state);}

 static bool scanmobloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanmobloop, _state);}

 static bool scannextsctr1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscannextsctr1, _state);}

 static bool scannextsctr2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscannextsctr2, _state);}

 static bool scansamloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscansamloop, _state);}

 static bool scantreeloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscantreeloop, _state);}

 static bool scanxloop1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanxloop1, _state);}

 static bool scanxloop2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanxloop2, _state);}

 static bool scanyloop1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanyloop1, _state);}

 static bool scanyloop2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanyloop2, _state);}

 static bool setairwpn(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetairwpn, _state);}

 static bool setalarmvel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetalarmvel, _state);}

 static bool setbombpitch(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetbombpitch, _state);}

 static bool setlatearm(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetlatearm, _state);}

 static bool setwpnmode(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetwpnmode, _state);}

 static bool shellhitgnd(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kshellhitgnd, _state);}

 static bool shellimpact(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kshellimpact, _state);}

 static bool shellok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kshellok, _state);}

 static bool skipaaascan(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipaaascan, _state);}

 static bool skipalarmdir(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipalarmdir, _state);}

 static bool skipalarmind(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipalarmind, _state);}

 static bool skiparmair(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiparmair, _state);}

 static bool skiparmgnd(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiparmgnd, _state);}

 static bool skiparmoff(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiparmoff, _state);}

 static bool skipboz(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipboz, _state);}

 static bool skipcannon(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipcannon, _state);}

 static bool skipchaff(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipchaff, _state);}

 static bool skipdecoy(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipdecoy, _state);}

 static bool skipflare(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipflare, _state);}

 static bool skipfragment(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipfragment, _state);}

 static bool skipjp233(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipjp233, _state);}

 static bool skipkillgnd(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipkillgnd, _state);}

 static bool skipkillmob(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipkillmob, _state);}

 static bool skiplaserguided(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiplaserguided, _state);}

 static bool skiplatearm(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiplatearm, _state);}

 static bool skiplaydown(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiplaydown, _state);}

 static bool skiplgbrelease(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiplgbrelease, _state);}

 static bool skiploft(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiploft, _state);}

 static bool skipmanual(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipmanual, _state);}

 static bool skipmob(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipmob, _state);}

 static bool skipmobkill(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipmobkill, _state);}

 static bool skippackage(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskippackage, _state);}

 static bool skipsamscan(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipsamscan, _state);}

 static bool skipsidewinder(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipsidewinder, _state);}

 static bool skipskyflash(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipskyflash, _state);}

 static bool skipskyshadow(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipskyshadow, _state);}

 static bool skiptree(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiptree, _state);}

 static bool skipview(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipview, _state);}

 static bool sortairborne(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortairborne, _state);}

 static bool sortbellypylon(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortbellypylon, _state);}

 static bool sortgroundewr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortgroundewr, _state);}

 static bool sortlaunchside(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortlaunchside, _state);}

 static bool sortlgbangles(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortlgbangles, _state);}

 static bool sortlgbhdg(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortlgbhdg, _state);}

 static bool sortmissok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortmissok, _state);}

 static bool sortmobileewr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortmobileewr, _state);}

 static bool sortradarlock(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortradarlock, _state);}

 static bool specialeffectsbeforenextmobile(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kspecialeffectsbeforenextmobile, _state);}

 static bool statmobloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kstatmobloop, _state);}

 static bool switchtodive(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kswitchtodive, _state);}

 static bool switchtofree(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kswitchtofree, _state);}

 static bool switchtokill(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kswitchtokill, _state);}

 static bool switchtoloiter(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kswitchtoloiter, _state);}

 static bool switchtozoom(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kswitchtozoom, _state);}

 static bool threatloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kthreatloop, _state);}

 static bool unguidedlgb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kunguidedlgb, _state);}

 static bool updateloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateloop, _state);}

 static bool updatenext(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatenext, _state);}

 static bool vvelok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvvelok, _state);}

 static bool weaponavail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kweaponavail, _state);}

 static bool weaponsplash(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kweaponsplash, _state);}

 static bool wpnhitsmoke(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kwpnhitsmoke, _state);}

 static bool wpnhitsound(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kwpnhitsound, _state);}

	
	#include "weapons_default_seg_lifted.cpp"
#include "weapons_weaponcode_lifted.cpp"
#include "weapons_viscode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::k__m2c_macrolocal_100_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_101_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_102_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_104_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_106_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_10_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_115_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_118_mvxy1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_118_mvxy2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_118_mvxy3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_118_mvxy4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_119_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_11_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_120_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_121_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_122_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_128_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_12_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_130_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_131_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_132_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_139_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_13_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_140_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_141_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_145_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_146_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_147_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_148_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_149_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_14_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_155_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_156_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_157_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_158_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_159_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_15_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_166_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_168_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_169_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_16_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_170_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_171_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_172_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_176_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_177_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_17_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_181_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_182_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_184_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_18_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_190_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_195_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_19_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_206_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_20_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_212_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_215_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_21_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_221_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_225_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_231_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_233_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_234_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_235_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_236_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_239_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_23_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_240_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_241_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_242_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_243_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_246_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_247_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_248_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_249_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_250_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_252_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_254_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_255_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_256_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_257_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_258_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_259_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_25_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_260_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_261_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_264_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_265_mvxy1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_265_mvxy2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_265_mvxy3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_265_mvxy4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_266_mvxy1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_266_mvxy2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_266_mvxy3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_266_mvxy4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_26_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_30_mvxy1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_30_mvxy2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_30_mvxy3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_30_mvxy4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_42_mvxy1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_42_mvxy2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_42_mvxy3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_42_mvxy4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_43_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_44_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_45_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_46_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_47_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_48_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_4_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_56_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_59_mvxy1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_59_mvxy2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_59_mvxy3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_59_mvxy4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_5_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_60_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_67_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_67_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_68_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_6_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_70_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_7_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_80_mvxy1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_80_mvxy2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_80_mvxy3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_80_mvxy4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_84_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_87_mvxy1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_87_mvxy2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_87_mvxy3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_87_mvxy4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_8_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_90_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_91_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_92_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_93_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_94_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_95_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_97_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_98_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_9_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaerialactivity: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaerialexplosion: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kalarmaimpitch1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kalarmaimpitch2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kalarmdamage: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kalarmdirect: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kalarmdive: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kalarmendlife: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kalarmfreefall: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kalarmguidance: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kalarmguide: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kalarmguideabove: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kalarmguidebelow: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kalarmguideok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kalarmguideover: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kalarmhitgnd: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kalarmimpact: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kalarmkill: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kalarmloiter: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kalarmmovement: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kalarmradarfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kalarmradarpass: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kalarmradarscan: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kalarmtimerok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kalarmzoom: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::karmalarmdir: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::karmalarmind: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::karmcannon: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::karmjp233: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::karmlaserguided: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::karmlaydown: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::karmloft: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::karmmanual: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::karmok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::karmsidewinder: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::karmskyflash: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbellydecoy: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbombballistics: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbombhitgnd: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbombimpact: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calc3doffset
        case m2c::kcalc3doffset: 	if (!calc3doffset(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcangdiff
        case m2c::kcalcangdiff: 	if (!calcangdiff(0, _state)) return false; break;
#endif
        case m2c::kcalcbombccip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcdecoypos: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calceta
        case m2c::kcalceta: 	if (!calceta(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcgndheight
        case m2c::kcalcgndheight: 	if (!calcgndheight(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcintercept
        case m2c::kcalcintercept: 	if (!calcintercept(0, _state)) return false; break;
#endif
        case m2c::kcalclgbpitch1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalclgbpitch2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalclgbrate: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalclgbvel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcpitchdown: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcpylonpos: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calcrngbrgvp_vp
        case m2c::kcalcrngbrgvp_vp: 	if (!calcrngbrgvp_vp(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcrngbrgvp_wp
        case m2c::kcalcrngbrgvp_wp: 	if (!calcrngbrgvp_wp(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcslantrange
        case m2c::kcalcslantrange: 	if (!calcslantrange(0, _state)) return false; break;
#endif
        case m2c::kcalcstoreswt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcalcthrow: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calctransmatrix
        case m2c::kcalctransmatrix: 	if (!calctransmatrix(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_cannonsound
        case m2c::kcannonsound: 	if (!cannonsound(0, _state)) return false; break;
#endif
        case m2c::kcheckalarmtimer: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcheckirlock: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcheckradartgt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontairburst: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontalarmmove: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontalarmpitch: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontbombball: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontburn: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontburnout: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontcannon: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontcrater: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontdecoypos: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontewrscan: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontfragment: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontheave: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontjp233: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontlgbrelease: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontloiter: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontmissmove: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontmisspitch: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontpullup: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontpylonpos: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontrelbomb: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontshellball: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontsplash: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontthrow: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontupdate: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcreateairburst: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcreatebomblet: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcreateexplosion: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_decoysound
        case m2c::kdecoysound: 	if (!decoysound(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_destroytornado
        case m2c::kdestroytornado: 	if (!destroytornado(0, _state)) return false; break;
#endif
        case m2c::kdrawloop: 	if (!drawweapons(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_drawmobile
        case m2c::kdrawmobile: 	if (!drawmobile(0, _state)) return false; break;
#endif
        case m2c::kdrawweapons: 	if (!drawweapons(0, _state)) return false; break;
        case m2c::kdronewingpylon: 	if (!_group1(__disp, _state)) return false; break;
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
        case m2c::kdummylabel134: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel135: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel136: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel137: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel138: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel139: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel14: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel140: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel141: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel142: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel143: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel144: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel145: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel146: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel147: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel148: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel149: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel15: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel150: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel151: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel152: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel153: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel154: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel155: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel156: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel157: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel158: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel159: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel16: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel160: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel161: 	if (!drawweapons(__disp, _state)) return false; break;
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
        case m2c::kedummylabel39: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel40: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel41: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel42: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel43: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel44: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel45: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel46: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel47: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel48: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel49: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel50: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel51: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel52: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel53: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel54: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel55: 	if (!drawweapons(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kewrdead: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kewrfound: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kewrok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitaerial: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitairwpn: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitalarm: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitbl755: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitbomblet: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitcannon: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitdecoy: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitfirecannon: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitgndobj: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitgpb: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitimpact: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitjp233: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitlaunchalarm: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitlaunchmiss: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitlgb: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitmissile: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitnextpack: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitproxkill: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitradartgt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitrelbomb: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitreldecoy: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitret: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitrwydamage: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitsamloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitsplash: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitstatmob: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexploloop: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_explosound1
        case m2c::kexplosound1: 	if (!explosound1(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_explosound2
        case m2c::kexplosound2: 	if (!explosound2(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_explosound3
        case m2c::kexplosound3: 	if (!explosound3(0, _state)) return false; break;
#endif
        case m2c::kexplosoundok: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_fastarctan
        case m2c::kfastarctan: 	if (!fastarctan(0, _state)) return false; break;
#endif
        case m2c::kfindavailweapon: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfindwpnloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfirecannon: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_getdronealive
        case m2c::kgetdronealive: 	if (!getdronealive(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_getdronechaff
        case m2c::kgetdronechaff: 	if (!getdronechaff(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_getdroneflare
        case m2c::kgetdroneflare: 	if (!getdroneflare(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_getdronespeed
        case m2c::kgetdronespeed: 	if (!getdronespeed(0, _state)) return false; break;
#endif
        case m2c::kgndobjloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgrounddamage: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khvelok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitweapons: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintodive: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintofreefall: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintokill: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintolgbvel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintoloiter: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintozoom: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kirlock: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kkillgndexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kkillgndobjects: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kkillmobexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kkillmobiles: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kkillstatexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kkillstatmobiles: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kkilltrees: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kkilltreesexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klatearmswitch: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klaunchalarm: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klaunchmissile: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_launchsound
        case m2c::klaunchsound: 	if (!launchsound(0, _state)) return false; break;
#endif
        case m2c::klgbguidance: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klgbhdgerror: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klgbimpact: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_locatemobiles
        case m2c::klocatemobiles: 	if (!locatemobiles(0, _state)) return false; break;
#endif
        case m2c::kloftcommit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_makecrater
        case m2c::kmakecrater: 	if (!makecrater(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_makesmokeeffect
        case m2c::kmakesmokeeffect: 	if (!makesmokeeffect(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_maxdamage
        case m2c::kmaxdamage: 	if (!maxdamage(0, _state)) return false; break;
#endif
        case m2c::kmissaimpitch1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmissaimpitch2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmissileguidance: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmissilehitgnd: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmissileimpact: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmissileok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmisslockok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmissloselock: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmisstimerok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmobileloop: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_morsedashsound
        case m2c::kmorsedashsound: 	if (!morsedashsound(0, _state)) return false; break;
#endif
        case m2c::kmovemissile: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_moveviewpoint
        case m2c::kmoveviewpoint: 	if (!moveviewpoint(0, _state)) return false; break;
#endif
        case m2c::knewrwy: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextgndobj: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextmobile: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextpackloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextrwy: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextstatmob: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextthreat: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knexttree: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knolaser: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knolgbflip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knolock: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knoradartargets: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpackageok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kproximitykill: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kqueque002e: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kqueque0030: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_randx
        case m2c::krandx: 	if (!randx(0, _state)) return false; break;
#endif
        case m2c::krecordrwydamage: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kreleasebomb: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kreleasedecoy: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kreleasepackage: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kretardbombvel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krwyloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksamerwy: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscaleok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanaaaloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanewrloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanmobiles: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanmobloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscannextsctr1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscannextsctr2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscansamloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscantreeloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscantrees: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanxloop1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanxloop2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanyloop1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanyloop2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kselectairwpn: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kselectnextpack: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetairwpn: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetalarmvel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetbombpitch: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_setdronewpnlock
        case m2c::ksetdronewpnlock: 	if (!setdronewpnlock(0, _state)) return false; break;
#endif
        case m2c::ksetlatearm: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetwpnmode: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kshellballistics: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kshellhitgnd: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kshellimpact: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kshellok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipaaascan: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipalarmdir: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipalarmind: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiparmair: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiparmgnd: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiparmoff: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipboz: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipcannon: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipchaff: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipdecoy: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipflare: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipfragment: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipjp233: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipkillgnd: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipkillmob: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiplaserguided: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiplatearm: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiplaydown: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiplgbrelease: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiploft: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipmanual: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipmob: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipmobkill: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskippackage: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipsamscan: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipsidewinder: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipskyflash: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipskyshadow: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiptree: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipview: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortairborne: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortbellypylon: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortgroundewr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortlaunchside: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortlgbangles: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortlgbhdg: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortmissok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortmobileewr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortradarlock: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kspecialeffectsbeforenextmobile: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_sqrt32
        case m2c::ksqrt32: 	if (!sqrt32(0, _state)) return false; break;
#endif
        case m2c::kstatmobloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kstoreimpact: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_surfacecheck
        case m2c::ksurfacecheck: 	if (!surfacecheck(0, _state)) return false; break;
#endif
        case m2c::kswitchtodive: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kswitchtofree: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kswitchtokill: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kswitchtoloiter: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kswitchtozoom: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kthreatloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kunguidedlgb: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateairburst: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatealarm: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatebl755: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatecannon: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatedecoy: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdategpb: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatejp233: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatelgb: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatemissile: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatenext: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateret: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatesplash: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateweapons: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvvelok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kweaponavail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kweaponscontrol: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kweaponsplash: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kwpnhitsmoke: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kwpnhitsound: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kwpnhittarget: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_wpnkilldrone
        case m2c::kwpnkilldrone: 	if (!wpnkilldrone(0, _state)) return false; break;
#endif
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
          void Initializer_weapons()
          {
              packageptr = 65535;
    loftclock = 65535;
    loftratio = 65535;
    rwrtgtvalid = 0;
    airtgtptr = 65535;
    missiletgtptr = 65535;
    airarmmode = arm_cannon;
    airtgtrange = 0;
    gndtgtrange = 0;
    launchside = 0;
    irlockflag = 0;
    impactptr = offset(wpndata,impactlist);
    latearmanim = 0;
    armlock = 0;
    bombthrow = 0;
    weaponptr = 65535;
    targetptr = 65535;
    weaponnum = 0;
    weaponvel = 0;
    impactsurface = 0;
    tmprange = 0;
    radarrange = 0;
    radarflag = 0;
    wpn_mobile = mobile{0,0,0,0,65535};
    wpn_view = viewpoint{0,0,0,0,0,0,0,0};
    wpn_weapon = weapon{16,16,0,0,5000,0,0,0,0,0,0,0,0,0};
    extstoresindex = ext_gpb1000;
    dummyfe1dabda_data_69_2461 = ext_ret1000;
    dummyfe1dabda_data_6b_2462 = ext_lgb1000;
    dummyfe1dabda_data_6d_2463 = ext_bl755;
    dummyfe1dabda_data_6f_2464 = ext_jp233;
    dummyfe1dabda_data_71_2465 = ext_alarm;
    dummyfe1dabda_data_73_2466 = 65535;
    dummyfe1dabda_data_75_2467 = ext_sidewinder;
    dummyfe1dabda_data_77_2468 = ext_skyflash;
    extweights = 1000;
    dummyfe1dabda_data_7b_2474 = 1000;
    dummyfe1dabda_data_7d_2475 = 1000;
    dummyfe1dabda_data_7f_2476 = 611;
    dummyfe1dabda_data_81_2477 = 5148*2;
    dummyfe1dabda_data_83_2478 = 661;
    dummyfe1dabda_data_85_2479 = 188;
    dummyfe1dabda_data_87_2480 = 459;
    dummyfe1dabda_data_89_2481 = 225;
    dummyfe1dabda_data_8b_2482 = 225;
    dummyfe1dabda_data_8d_2483 = 3960;
    jp233timer = 0;
    cannons = max_cannon;
    cannonfine = 0;
    shellkillzone = 0;
    cannonfired = 0;
    dummyfe1dabda_data_98_2523 = 1188;
    dummyfe1dabda_data_9a_2524 = 1225;
    dummyfe1dabda_data_9c_2525 = 1263;
    dummyfe1dabda_data_9e_2526 = 1300;
    dummyfe1dabda_data_a0_2527 = 1338;
    dummyfe1dabda_data_a2_2528 = 1375;
    dummyfe1dabda_data_a4_2529 = 1425;
    dummyfe1dabda_data_a6_2530 = 1475;
    dummyfe1dabda_data_a8_2531 = 1513;
    dummyfe1dabda_data_aa_2532 = 1563;
    dummyfe1dabda_data_ac_2533 = 1613;
    dummyfe1dabda_data_ae_2534 = 1663;
    dummyfe1dabda_data_b0_2535 = 1713;
    dummyfe1dabda_data_b2_2536 = 1775;
    dummyfe1dabda_data_b4_2537 = 1825;
    dummyfe1dabda_data_b6_2538 = 1888;
    dummyfe1dabda_data_b8_2539 = 1950;
    dummyfe1dabda_data_ba_2540 = 2013;
    dummyfe1dabda_data_bc_2541 = 2088;
    dummyfe1dabda_data_be_2542 = 2138;
    dummyfe1dabda_data_c0_2543 = 2213;
    dummyfe1dabda_data_c2_2544 = 2275;
    dummyfe1dabda_data_c4_2545 = 2363;
    dummyfe1dabda_data_c6_2546 = 2438;
    dummyfe1dabda_data_c8_2547 = 2538;
    dummyfe1dabda_data_ca_2548 = 2625;
    dummyfe1dabda_data_cc_2549 = 2713;
    dummyfe1dabda_data_ce_2550 = 2813;
    dummyfe1dabda_data_d0_2551 = 2900;
    dummyfe1dabda_data_d2_2552 = 3000;
    dummyfe1dabda_data_d4_2553 = 3088;
    dummyfe1dabda_data_d6_2554 = 3188;
    dummyfe1dabda_data_d8_2555 = 3288;
    dummyfe1dabda_data_da_2556 = 3400;
    dummyfe1dabda_data_dc_2557 = 3538;
    dummyfe1dabda_data_de_2558 = 3688;
    dummyfe1dabda_data_e0_2559 = 3825;
    dummyfe1dabda_data_e2_2570 = 3225;
    dummyfe1dabda_data_e4_2571 = 3325;
    dummyfe1dabda_data_e6_2572 = 3413;
    dummyfe1dabda_data_e8_2573 = 3500;
    dummyfe1dabda_data_ea_2574 = 3600;
    dummyfe1dabda_data_ec_2575 = 3700;
    dummyfe1dabda_data_ee_2576 = 3800;
    dummyfe1dabda_data_f0_2577 = 3900;
    dummyfe1dabda_data_f2_2578 = 4000;
    dummyfe1dabda_data_f4_2579 = 4100;
    dummyfe1dabda_data_f6_2580 = 4238;
    dummyfe1dabda_data_f8_2581 = 4375;
    dummyfe1dabda_data_fa_2582 = 4525;
    dummyfe1dabda_data_fc_2583 = 4663;
    dummyfe1dabda_data_fe_2584 = 4813;
    dummyfe1dabda_data_100_2585 = 4963;
    dummyfe1dabda_data_102_2586 = 5113;
    dummyfe1dabda_data_104_2587 = 5275;
    dummyfe1dabda_data_106_2588 = 5425;
    dummyfe1dabda_data_108_2589 = 5588;
    dummyfe1dabda_data_10a_2590 = 5750;
    dummyfe1dabda_data_10c_2591 = 5913;
    dummyfe1dabda_data_10e_2592 = 6088;
    dummyfe1dabda_data_110_2593 = 6263;
    dummyfe1dabda_data_112_2594 = 6438;
    dummyfe1dabda_data_114_2595 = 6625;
    dummyfe1dabda_data_116_2596 = 6800;
    dummyfe1dabda_data_118_2597 = 6988;
    dummyfe1dabda_data_11a_2598 = 7175;
    dummyfe1dabda_data_11c_2599 = 7375;
    dummyfe1dabda_data_11e_2600 = 7625;
    dummyfe1dabda_data_120_2601 = 7925;
    dummyfe1dabda_data_122_2602 = 8263;
    dummyfe1dabda_data_124_2603 = 8563;
    dummyfe1dabda_data_126_2604 = 8913;
    dummyfe1dabda_data_128_2605 = 9238;
    dummyfe1dabda_data_12a_2606 = 9600;
    dummyfe1dabda_data_12c_2626 = 2788;
    dummyfe1dabda_data_12e_2627 = 2874;
    dummyfe1dabda_data_130_2628 = 2960;
    dummyfe1dabda_data_132_2629 = 3045;
    dummyfe1dabda_data_134_2630 = 3131;
    dummyfe1dabda_data_136_2631 = 3217;
    dummyfe1dabda_data_138_2632 = 3303;
    dummyfe1dabda_data_13a_2633 = 3388;
    dummyfe1dabda_data_13c_2634 = 3474;
    dummyfe1dabda_data_13e_2635 = 3560;
    dummyfe1dabda_data_140_2636 = 3646;
    dummyfe1dabda_data_142_2637 = 3731;
    dummyfe1dabda_data_144_2638 = 3817;
    dummyfe1dabda_data_146_2639 = 3903;
    dummyfe1dabda_data_148_2640 = 3989;
    dummyfe1dabda_data_14a_2641 = 4074;
    dummyfe1dabda_data_14c_2642 = 4160;
    dummyfe1dabda_data_14e_2643 = 4246;
    dummyfe1dabda_data_150_2644 = 4332;
    dummyfe1dabda_data_152_2645 = 4417;
    dummyfe1dabda_data_154_2646 = 4503;
    dummyfe1dabda_data_156_2647 = 4589;
    dummyfe1dabda_data_158_2648 = 4675;
    dummyfe1dabda_data_15a_2649 = 4760;
    dummyfe1dabda_data_15c_2650 = 4846;
    dummyfe1dabda_data_15e_2651 = 4932;
    dummyfe1dabda_data_160_2652 = 5018;
    dummyfe1dabda_data_162_2653 = 5103;
    dummyfe1dabda_data_164_2654 = 5189;
    dummyfe1dabda_data_166_2655 = 5275;
    dummyfe1dabda_data_168_2656 = 5361;
    dummyfe1dabda_data_16a_2657 = 5446;
    dummyfe1dabda_data_16c_2658 = 5532;
    dummyfe1dabda_data_16e_2659 = 5618;
    dummyfe1dabda_data_170_2660 = 5704;
    dummyfe1dabda_data_172_2661 = 5789;
    dummyfe1dabda_data_174_2662 = 5875;
    alarmmode = m2c::kglobal_alarmdirect;
    dummyfe1dabda_data_178_2666 = m2c::kglobal_alarmkill;
    dummyfe1dabda_data_17a_2667 = m2c::kglobal_alarmguide;
    dummyfe1dabda_data_17c_2668 = m2c::kglobal_alarmzoom;
    dummyfe1dabda_data_17e_2669 = m2c::kglobal_alarmfreefall;
    dummyfe1dabda_data_180_2670 = m2c::kglobal_alarmloiter;
    dummyfe1dabda_data_182_2671 = m2c::kglobal_alarmdive;
    dummyfe1dabda_data_184_2693 = 1188;
    dummyfe1dabda_data_186_2694 = 1225;
    dummyfe1dabda_data_188_2695 = 1263;
    dummyfe1dabda_data_18a_2696 = 1300;
    dummyfe1dabda_data_18c_2697 = 1338;
    dummyfe1dabda_data_18e_2698 = 1375;
    dummyfe1dabda_data_190_2699 = 1425;
    dummyfe1dabda_data_192_2700 = 1475;
    dummyfe1dabda_data_194_2701 = 1513;
    dummyfe1dabda_data_196_2702 = 1563;
    dummyfe1dabda_data_198_2703 = 1613;
    dummyfe1dabda_data_19a_2704 = 1663;
    dummyfe1dabda_data_19c_2705 = 1713;
    dummyfe1dabda_data_19e_2706 = 1775;
    dummyfe1dabda_data_1a0_2707 = 1825;
    dummyfe1dabda_data_1a2_2708 = 1888;
    dummyfe1dabda_data_1a4_2709 = 1950;
    dummyfe1dabda_data_1a6_2710 = 2013;
    dummyfe1dabda_data_1a8_2711 = 2088;
    dummyfe1dabda_data_1aa_2712 = 2138;
    dummyfe1dabda_data_1ac_2713 = 2213;
    dummyfe1dabda_data_1ae_2714 = 2275;
    dummyfe1dabda_data_1b0_2715 = 2363;
    dummyfe1dabda_data_1b2_2716 = 2438;
    dummyfe1dabda_data_1b4_2717 = 2538;
    dummyfe1dabda_data_1b6_2718 = 2625;
    dummyfe1dabda_data_1b8_2719 = 2713;
    dummyfe1dabda_data_1ba_2720 = 2813;
    dummyfe1dabda_data_1bc_2721 = 2900;
    dummyfe1dabda_data_1be_2722 = 3000;
    dummyfe1dabda_data_1c0_2723 = 3088;
    dummyfe1dabda_data_1c2_2724 = 3188;
    dummyfe1dabda_data_1c4_2725 = 3288;
    dummyfe1dabda_data_1c6_2726 = 3400;
    dummyfe1dabda_data_1c8_2727 = 3538;
    dummyfe1dabda_data_1ca_2728 = 3688;
    dummyfe1dabda_data_1cc_2729 = 3825;
    ecmfitted = 0;
    ecmactive = 0;
    chaffcntr = 0;
    flarecntr = 0;
    relchaff = 0;
    relflare = 0;
    objectnum = mob_bomb;
    dummyfe1dabda_data_1d7_2753 = mob_bomb;
    dummyfe1dabda_data_1d8_2754 = mob_lgb;
    dummyfe1dabda_data_1d9_2755 = mob_bomb;
    dummyfe1dabda_data_1da_2756 = mob_sg357;
    dummyfe1dabda_data_1db_2757 = mob_alarm;
    dummyfe1dabda_data_1dc_2758 = mob_tracer;
    dummyfe1dabda_data_1dd_2759 = mob_aim9l;
    dummyfe1dabda_data_1de_2760 = mob_skyflash;
    dummyfe1dabda_data_1df_2761 = mob_alarm;
    dummyfe1dabda_data_1e0_2762 = mob_alarm;
    dummyfe1dabda_data_1e1_2763 = mob_chaff;
    dummyfe1dabda_data_1e2_2764 = mob_flare;
    dummyfe1dabda_data_1e3_2765 = mob_tracerb;
    updateoneweapon = m2c::kglobal_updategpb;
    dummyfe1dabda_data_1e6_2772 = m2c::kglobal_updateret;
    dummyfe1dabda_data_1e8_2773 = m2c::kglobal_updatelgb;
    dummyfe1dabda_data_1ea_2774 = m2c::kglobal_updatebl755;
    dummyfe1dabda_data_1ec_2775 = m2c::kglobal_updatejp233;
    dummyfe1dabda_data_1ee_2776 = m2c::kglobal_updatealarm;
    dummyfe1dabda_data_1f0_2777 = m2c::kglobal_updatecannon;
    dummyfe1dabda_data_1f2_2778 = m2c::kglobal_updatemissile;
    dummyfe1dabda_data_1f4_2779 = m2c::kglobal_updatemissile;
    dummyfe1dabda_data_1f6_2780 = m2c::kglobal_updatemissile;
    dummyfe1dabda_data_1f8_2781 = m2c::kglobal_updatemissile;
    dummyfe1dabda_data_1fa_2782 = m2c::kglobal_updatedecoy;
    dummyfe1dabda_data_1fc_2783 = m2c::kglobal_updatedecoy;
    armswitch = m2c::kglobal_armok;
    dummyfe1dabda_data_200_2789 = m2c::kglobal_armmanual;
    dummyfe1dabda_data_202_2790 = m2c::kglobal_armlaydown;
    dummyfe1dabda_data_204_2791 = m2c::kglobal_armloft;
    dummyfe1dabda_data_206_2792 = m2c::kglobal_armlaserguided;
    dummyfe1dabda_data_208_2793 = m2c::kglobal_armjp233;
    dummyfe1dabda_data_20a_2794 = m2c::kglobal_armalarmdir;
    dummyfe1dabda_data_20c_2795 = m2c::kglobal_armalarmind;
    dummyfe1dabda_data_20e_2796 = m2c::kglobal_armcannon;
    dummyfe1dabda_data_210_2797 = m2c::kglobal_armsidewinder;
    dummyfe1dabda_data_212_2798 = m2c::kglobal_armskyflash;
    releaseweapon = m2c::kglobal_releasebomb;
    dummyfe1dabda_data_216_2804 = m2c::kglobal_releasebomb;
    dummyfe1dabda_data_218_2805 = m2c::kglobal_releasebomb;
    dummyfe1dabda_data_21a_2806 = m2c::kglobal_releasebomb;
    dummyfe1dabda_data_21c_2807 = m2c::kglobal_releasebomb;
    safetyheights = 1000;
    dummyfe1dabda_data_220_2813 = 100;
    dummyfe1dabda_data_222_2814 = 1000;
    dummyfe1dabda_data_224_2815 = 200;
    dummyfe1dabda_data_226_2816 = 200;
    retardfactors = 31130;
    dummyfe1dabda_data_22a_2822 = 24576;
    dummyfe1dabda_data_22c_2823 = 31130;
    dummyfe1dabda_data_22e_2824 = 29491;
    dummyfe1dabda_data_230_2825 = 24576;
    cratersize = crater_size2;
    dummyfe1dabda_data_233_2831 = crater_size2;
    dummyfe1dabda_data_234_2832 = crater_size2;
    dummyfe1dabda_data_235_2833 = crater_size1;
    dummyfe1dabda_data_236_2834 = crater_size1;
    dummyfe1dabda_data_237_2835 = crater_size2;
    dummyfe1dabda_data_238_2836 = crater_shell;
    dummyfe1dabda_data_239_2837 = crater_size1;
    dummyfe1dabda_data_23a_2838 = crater_size1;
    dummyfe1dabda_data_23b_2839 = crater_size1;
    dummyfe1dabda_data_23c_2840 = crater_size1;
    dummyfe1dabda_data_23d_2841 = crater_size1;
    dummyfe1dabda_data_23e_2842 = crater_size1;
    cratersmoke = smoke_crater3;
    dummyfe1dabda_data_241_2850 = smoke_crater3;
    dummyfe1dabda_data_243_2851 = smoke_crater3;
    dummyfe1dabda_data_245_2852 = smoke_crater2;
    dummyfe1dabda_data_247_2853 = smoke_crater1;
    dummyfe1dabda_data_249_2854 = smoke_crater3;
    dummyfe1dabda_data_24b_2855 = smoke_crater2;
    dummyfe1dabda_data_24d_2856 = smoke_crater2;
    dummyfe1dabda_data_24f_2857 = smoke_crater2;
    dummyfe1dabda_data_251_2858 = smoke_crater2;
    dummyfe1dabda_data_253_2859 = smoke_crater2;
    dummyfe1dabda_data_255_2860 = smoke_crater1;
    dummyfe1dabda_data_257_2861 = smoke_crater1;
    tornadowpndie = die_gnd_explo;
    dummyfe1dabda_data_25a_2867 = die_gnd_explo;
    dummyfe1dabda_data_25b_2868 = die_gnd_explo;
    dummyfe1dabda_data_25c_2869 = die_gnd_explo;
    dummyfe1dabda_data_25d_2870 = die_gnd_explo;
    dummyfe1dabda_data_25e_2871 = die_gnd_explo;
    dummyfe1dabda_data_25f_2872 = die_cannon;
    dummyfe1dabda_data_260_2873 = die_missile;
    dummyfe1dabda_data_261_2874 = die_missile;
    dummyfe1dabda_data_262_2875 = die_sam;
    dummyfe1dabda_data_263_2876 = die_sam;
    dummyfe1dabda_data_264_2877 = die_missile;
    dummyfe1dabda_data_265_2878 = die_missile;
    weaponeffect = wpn_effect4;
    dummyfe1dabda_data_267_2886 = wpn_effect4;
    dummyfe1dabda_data_268_2887 = wpn_effect4;
    dummyfe1dabda_data_269_2888 = wpn_effect3;
    dummyfe1dabda_data_26a_2889 = wpn_effect3;
    dummyfe1dabda_data_26b_2890 = wpn_effect3;
    dummyfe1dabda_data_26c_2891 = wpn_effect1;
    dummyfe1dabda_data_26d_2892 = wpn_effect1;
    dummyfe1dabda_data_26e_2893 = wpn_effect1;
    dummyfe1dabda_data_26f_2894 = wpn_effect3;
    dummyfe1dabda_data_270_2895 = wpn_effect3;
    dummyfe1dabda_data_271_2896 = wpn_effect1;
    dummyfe1dabda_data_272_2897 = wpn_effect1;
    weaponradius = 300;
    dummyfe1dabda_data_275_2905 = 300;
    dummyfe1dabda_data_277_2906 = 300;
    dummyfe1dabda_data_279_2907 = 50;
    dummyfe1dabda_data_27b_2908 = 50;
    dummyfe1dabda_data_27d_2909 = 50;
    dummyfe1dabda_data_27f_2910 = 20;
    dummyfe1dabda_data_281_2911 = 20;
    dummyfe1dabda_data_283_2912 = 20;
    dummyfe1dabda_data_285_2913 = 20;
    dummyfe1dabda_data_287_2914 = 20;
    weaponhemi = 750;
    dummyfe1dabda_data_28f_2925 = 750;
    dummyfe1dabda_data_291_2926 = 750;
    dummyfe1dabda_data_293_2927 = 200;
    dummyfe1dabda_data_295_2928 = 200;
    dummyfe1dabda_data_297_2929 = 200;
    debristype = gnd_crater1;
    dummyfe1dabda_data_2a8_2942 = gnd_crater2;
    dummyfe1dabda_data_2a9_2943 = gnd_crater3;
    dummyfe1dabda_data_2aa_2944 = gnd_rbnsd;
    dummyfe1dabda_data_2ab_2945 = gnd_rbewd;
    dummyfe1dabda_data_2ac_2946 = gnd_rlbnsd;
    dummyfe1dabda_data_2ad_2947 = gnd_rlbewd;
    dummyfe1dabda_data_2ae_2948 = gnd_embcrater;
    tgt_view = viewpoint{0,0,0,0,0,0,0,0};
    ccip_view = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_2964 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_2965 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_2966 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_2969 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_2970 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_2971 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_2974 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_2975 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_2976 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_2979 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_2980 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_2981 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_2984 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_2985 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_2986 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_2989 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_2990 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_2991 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_2994 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_2995 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_2996 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_2999 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3000 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3001 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3004 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3005 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3006 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3009 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3010 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3011 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3014 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3015 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3016 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3019 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3020 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3021 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3024 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3025 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3026 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3029 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3030 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3031 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3034 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3035 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3036 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3039 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3040 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3041 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3044 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3045 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3046 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3049 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3050 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3051 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3054 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3055 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3056 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3059 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3060 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3061 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3064 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3065 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3066 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3069 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3070 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3071 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3074 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3075 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3076 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3079 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3080 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3081 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3084 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3085 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3086 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3089 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3090 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3091 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3094 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3095 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3096 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3099 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3100 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3101 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3104 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3105 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3106 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3109 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3110 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3111 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3114 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3115 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3116 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3119 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3120 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3121 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3124 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3125 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3126 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3129 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3130 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3131 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3134 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3135 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3136 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3139 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3140 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3141 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3144 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3145 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3146 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3149 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3150 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3151 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3154 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3155 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3156 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3159 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3160 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3161 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3164 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3165 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3166 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3169 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3170 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3171 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3174 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3175 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3176 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3179 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3180 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3181 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3184 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3185 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3186 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3189 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3190 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3191 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3194 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3195 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3196 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3199 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3200 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3201 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3204 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3205 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3206 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3209 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3210 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3211 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3214 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3215 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3216 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3219 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3220 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3221 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3224 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3225 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3226 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3229 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3230 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3231 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3234 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3235 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3236 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3239 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3240 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3241 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3244 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3245 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3246 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3249 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3250 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3251 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3254 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3255 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3256 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3259 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3260 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3261 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3264 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3265 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3266 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3269 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3270 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3271 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3274 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3275 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3276 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3279 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3280 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3281 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3284 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3285 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3286 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3289 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3290 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3291 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3294 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3295 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3296 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3299 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3300 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3301 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3304 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3305 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3306 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3309 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3310 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3311 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3314 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3315 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3316 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3319 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3320 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3321 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3324 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3325 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3326 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3329 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3330 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3331 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3334 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3335 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3336 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3339 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3340 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3341 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3344 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3345 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3346 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3349 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3350 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3351 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3354 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3355 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3356 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3359 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3360 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3361 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3364 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3365 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3366 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3369 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3370 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3371 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3374 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3375 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3376 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3379 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3380 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3381 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3384 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3385 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3386 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3389 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3390 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3391 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3394 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3395 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3396 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3399 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3400 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3401 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3404 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3405 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3406 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3409 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3410 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3411 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3414 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3415 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3416 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3419 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3420 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3421 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3424 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3425 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3426 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3429 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3430 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3431 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3434 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3435 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3436 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3439 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3440 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3441 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3444 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3445 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3446 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3449 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3450 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3451 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3454 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3455 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3456 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3459 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3460 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3461 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3464 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3465 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3466 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3469 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3470 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3471 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3474 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3475 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3476 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3479 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3480 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3481 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3484 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3485 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3486 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3489 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3490 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3491 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3494 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3495 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3496 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3499 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3500 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3501 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3504 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3505 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3506 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3509 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3510 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3511 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3514 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3515 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3516 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3519 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3520 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3521 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3524 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3525 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3526 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3529 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3530 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3531 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3534 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3535 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3536 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3539 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3540 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3541 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3544 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3545 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3546 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3549 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3550 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3551 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3554 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3555 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3556 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3559 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3560 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3561 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3564 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3565 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3566 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3569 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3570 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3571 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3574 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3575 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3576 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3579 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3580 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3581 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3584 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3585 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3586 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3589 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3590 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3591 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3594 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3595 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3596 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3599 = mobile{0,0,0,0,65535};
    __m2c_structrow_fe1dabda_3600 = viewpoint{0,0,0,0,0,0,0,0};
    __m2c_structrow_fe1dabda_3601 = weapon{null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};
    {impact tmp999[128]={{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0}};memcpy(&__m2c_structrow_fe1dabda_3604,&tmp999,sizeof tmp999);}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_weapons(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        
