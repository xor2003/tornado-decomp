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
              {dw tmp999=65535;MYCOPY(packageptr)}
    {dw tmp999=65535;MYCOPY(loftclock)}
    {dw tmp999=65535;MYCOPY(loftratio)}
    {db tmp999=0;MYCOPY(rwrtgtvalid)}
    {dw tmp999=65535;MYCOPY(airtgtptr)}
    {dw tmp999=65535;MYCOPY(missiletgtptr)}
    {dw tmp999=arm_cannon;MYCOPY(airarmmode)}
    {dd tmp999=0;MYCOPY(airtgtrange)}
    {dd tmp999=0;MYCOPY(gndtgtrange)}
    {dw tmp999=0;MYCOPY(launchside)}
    {db tmp999=0;MYCOPY(irlockflag)}
    {dw tmp999=offset(wpndata,impactlist);MYCOPY(impactptr)}
    {db tmp999=0;MYCOPY(latearmanim)}
    {db tmp999=0;MYCOPY(armlock)}
    {dd tmp999=0;MYCOPY(bombthrow)}
    {dw tmp999=65535;MYCOPY(weaponptr)}
    {dw tmp999=65535;MYCOPY(targetptr)}
    {dw tmp999=0;MYCOPY(weaponnum)}
    {dw tmp999=0;MYCOPY(weaponvel)}
    {dw tmp999=0;MYCOPY(impactsurface)}
    {dd tmp999=0;MYCOPY(tmprange)}
    {dd tmp999=0;MYCOPY(radarrange)}
    {db tmp999=0;MYCOPY(radarflag)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(wpn_mobile)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(wpn_view)}
    {weapon tmp999={16,16,0,0,5000,0,0,0,0,0,0,0,0,0};MYCOPY(wpn_weapon)}
    {dw tmp999=ext_gpb1000;MYCOPY(extstoresindex)}
    {dw tmp999=ext_ret1000;MYCOPY(dummyfe1dabda_data_69_2461)}
    {dw tmp999=ext_lgb1000;MYCOPY(dummyfe1dabda_data_6b_2462)}
    {dw tmp999=ext_bl755;MYCOPY(dummyfe1dabda_data_6d_2463)}
    {dw tmp999=ext_jp233;MYCOPY(dummyfe1dabda_data_6f_2464)}
    {dw tmp999=ext_alarm;MYCOPY(dummyfe1dabda_data_71_2465)}
    {dw tmp999=65535;MYCOPY(dummyfe1dabda_data_73_2466)}
    {dw tmp999=ext_sidewinder;MYCOPY(dummyfe1dabda_data_75_2467)}
    {dw tmp999=ext_skyflash;MYCOPY(dummyfe1dabda_data_77_2468)}
    {dw tmp999=1000;MYCOPY(extweights)}
    {dw tmp999=1000;MYCOPY(dummyfe1dabda_data_7b_2474)}
    {dw tmp999=1000;MYCOPY(dummyfe1dabda_data_7d_2475)}
    {dw tmp999=611;MYCOPY(dummyfe1dabda_data_7f_2476)}
    {dw tmp999=5148*2;MYCOPY(dummyfe1dabda_data_81_2477)}
    {dw tmp999=661;MYCOPY(dummyfe1dabda_data_83_2478)}
    {dw tmp999=188;MYCOPY(dummyfe1dabda_data_85_2479)}
    {dw tmp999=459;MYCOPY(dummyfe1dabda_data_87_2480)}
    {dw tmp999=225;MYCOPY(dummyfe1dabda_data_89_2481)}
    {dw tmp999=225;MYCOPY(dummyfe1dabda_data_8b_2482)}
    {dw tmp999=3960;MYCOPY(dummyfe1dabda_data_8d_2483)}
    {dw tmp999=0;MYCOPY(jp233timer)}
    {dw tmp999=max_cannon;MYCOPY(cannons)}
    {dw tmp999=0;MYCOPY(cannonfine)}
    {dw tmp999=0;MYCOPY(shellkillzone)}
    {db tmp999=0;MYCOPY(cannonfired)}
    {dw tmp999=1188;MYCOPY(dummyfe1dabda_data_98_2523)}
    {dw tmp999=1225;MYCOPY(dummyfe1dabda_data_9a_2524)}
    {dw tmp999=1263;MYCOPY(dummyfe1dabda_data_9c_2525)}
    {dw tmp999=1300;MYCOPY(dummyfe1dabda_data_9e_2526)}
    {dw tmp999=1338;MYCOPY(dummyfe1dabda_data_a0_2527)}
    {dw tmp999=1375;MYCOPY(dummyfe1dabda_data_a2_2528)}
    {dw tmp999=1425;MYCOPY(dummyfe1dabda_data_a4_2529)}
    {dw tmp999=1475;MYCOPY(dummyfe1dabda_data_a6_2530)}
    {dw tmp999=1513;MYCOPY(dummyfe1dabda_data_a8_2531)}
    {dw tmp999=1563;MYCOPY(dummyfe1dabda_data_aa_2532)}
    {dw tmp999=1613;MYCOPY(dummyfe1dabda_data_ac_2533)}
    {dw tmp999=1663;MYCOPY(dummyfe1dabda_data_ae_2534)}
    {dw tmp999=1713;MYCOPY(dummyfe1dabda_data_b0_2535)}
    {dw tmp999=1775;MYCOPY(dummyfe1dabda_data_b2_2536)}
    {dw tmp999=1825;MYCOPY(dummyfe1dabda_data_b4_2537)}
    {dw tmp999=1888;MYCOPY(dummyfe1dabda_data_b6_2538)}
    {dw tmp999=1950;MYCOPY(dummyfe1dabda_data_b8_2539)}
    {dw tmp999=2013;MYCOPY(dummyfe1dabda_data_ba_2540)}
    {dw tmp999=2088;MYCOPY(dummyfe1dabda_data_bc_2541)}
    {dw tmp999=2138;MYCOPY(dummyfe1dabda_data_be_2542)}
    {dw tmp999=2213;MYCOPY(dummyfe1dabda_data_c0_2543)}
    {dw tmp999=2275;MYCOPY(dummyfe1dabda_data_c2_2544)}
    {dw tmp999=2363;MYCOPY(dummyfe1dabda_data_c4_2545)}
    {dw tmp999=2438;MYCOPY(dummyfe1dabda_data_c6_2546)}
    {dw tmp999=2538;MYCOPY(dummyfe1dabda_data_c8_2547)}
    {dw tmp999=2625;MYCOPY(dummyfe1dabda_data_ca_2548)}
    {dw tmp999=2713;MYCOPY(dummyfe1dabda_data_cc_2549)}
    {dw tmp999=2813;MYCOPY(dummyfe1dabda_data_ce_2550)}
    {dw tmp999=2900;MYCOPY(dummyfe1dabda_data_d0_2551)}
    {dw tmp999=3000;MYCOPY(dummyfe1dabda_data_d2_2552)}
    {dw tmp999=3088;MYCOPY(dummyfe1dabda_data_d4_2553)}
    {dw tmp999=3188;MYCOPY(dummyfe1dabda_data_d6_2554)}
    {dw tmp999=3288;MYCOPY(dummyfe1dabda_data_d8_2555)}
    {dw tmp999=3400;MYCOPY(dummyfe1dabda_data_da_2556)}
    {dw tmp999=3538;MYCOPY(dummyfe1dabda_data_dc_2557)}
    {dw tmp999=3688;MYCOPY(dummyfe1dabda_data_de_2558)}
    {dw tmp999=3825;MYCOPY(dummyfe1dabda_data_e0_2559)}
    {dw tmp999=3225;MYCOPY(dummyfe1dabda_data_e2_2570)}
    {dw tmp999=3325;MYCOPY(dummyfe1dabda_data_e4_2571)}
    {dw tmp999=3413;MYCOPY(dummyfe1dabda_data_e6_2572)}
    {dw tmp999=3500;MYCOPY(dummyfe1dabda_data_e8_2573)}
    {dw tmp999=3600;MYCOPY(dummyfe1dabda_data_ea_2574)}
    {dw tmp999=3700;MYCOPY(dummyfe1dabda_data_ec_2575)}
    {dw tmp999=3800;MYCOPY(dummyfe1dabda_data_ee_2576)}
    {dw tmp999=3900;MYCOPY(dummyfe1dabda_data_f0_2577)}
    {dw tmp999=4000;MYCOPY(dummyfe1dabda_data_f2_2578)}
    {dw tmp999=4100;MYCOPY(dummyfe1dabda_data_f4_2579)}
    {dw tmp999=4238;MYCOPY(dummyfe1dabda_data_f6_2580)}
    {dw tmp999=4375;MYCOPY(dummyfe1dabda_data_f8_2581)}
    {dw tmp999=4525;MYCOPY(dummyfe1dabda_data_fa_2582)}
    {dw tmp999=4663;MYCOPY(dummyfe1dabda_data_fc_2583)}
    {dw tmp999=4813;MYCOPY(dummyfe1dabda_data_fe_2584)}
    {dw tmp999=4963;MYCOPY(dummyfe1dabda_data_100_2585)}
    {dw tmp999=5113;MYCOPY(dummyfe1dabda_data_102_2586)}
    {dw tmp999=5275;MYCOPY(dummyfe1dabda_data_104_2587)}
    {dw tmp999=5425;MYCOPY(dummyfe1dabda_data_106_2588)}
    {dw tmp999=5588;MYCOPY(dummyfe1dabda_data_108_2589)}
    {dw tmp999=5750;MYCOPY(dummyfe1dabda_data_10a_2590)}
    {dw tmp999=5913;MYCOPY(dummyfe1dabda_data_10c_2591)}
    {dw tmp999=6088;MYCOPY(dummyfe1dabda_data_10e_2592)}
    {dw tmp999=6263;MYCOPY(dummyfe1dabda_data_110_2593)}
    {dw tmp999=6438;MYCOPY(dummyfe1dabda_data_112_2594)}
    {dw tmp999=6625;MYCOPY(dummyfe1dabda_data_114_2595)}
    {dw tmp999=6800;MYCOPY(dummyfe1dabda_data_116_2596)}
    {dw tmp999=6988;MYCOPY(dummyfe1dabda_data_118_2597)}
    {dw tmp999=7175;MYCOPY(dummyfe1dabda_data_11a_2598)}
    {dw tmp999=7375;MYCOPY(dummyfe1dabda_data_11c_2599)}
    {dw tmp999=7625;MYCOPY(dummyfe1dabda_data_11e_2600)}
    {dw tmp999=7925;MYCOPY(dummyfe1dabda_data_120_2601)}
    {dw tmp999=8263;MYCOPY(dummyfe1dabda_data_122_2602)}
    {dw tmp999=8563;MYCOPY(dummyfe1dabda_data_124_2603)}
    {dw tmp999=8913;MYCOPY(dummyfe1dabda_data_126_2604)}
    {dw tmp999=9238;MYCOPY(dummyfe1dabda_data_128_2605)}
    {dw tmp999=9600;MYCOPY(dummyfe1dabda_data_12a_2606)}
    {dw tmp999=2788;MYCOPY(dummyfe1dabda_data_12c_2626)}
    {dw tmp999=2874;MYCOPY(dummyfe1dabda_data_12e_2627)}
    {dw tmp999=2960;MYCOPY(dummyfe1dabda_data_130_2628)}
    {dw tmp999=3045;MYCOPY(dummyfe1dabda_data_132_2629)}
    {dw tmp999=3131;MYCOPY(dummyfe1dabda_data_134_2630)}
    {dw tmp999=3217;MYCOPY(dummyfe1dabda_data_136_2631)}
    {dw tmp999=3303;MYCOPY(dummyfe1dabda_data_138_2632)}
    {dw tmp999=3388;MYCOPY(dummyfe1dabda_data_13a_2633)}
    {dw tmp999=3474;MYCOPY(dummyfe1dabda_data_13c_2634)}
    {dw tmp999=3560;MYCOPY(dummyfe1dabda_data_13e_2635)}
    {dw tmp999=3646;MYCOPY(dummyfe1dabda_data_140_2636)}
    {dw tmp999=3731;MYCOPY(dummyfe1dabda_data_142_2637)}
    {dw tmp999=3817;MYCOPY(dummyfe1dabda_data_144_2638)}
    {dw tmp999=3903;MYCOPY(dummyfe1dabda_data_146_2639)}
    {dw tmp999=3989;MYCOPY(dummyfe1dabda_data_148_2640)}
    {dw tmp999=4074;MYCOPY(dummyfe1dabda_data_14a_2641)}
    {dw tmp999=4160;MYCOPY(dummyfe1dabda_data_14c_2642)}
    {dw tmp999=4246;MYCOPY(dummyfe1dabda_data_14e_2643)}
    {dw tmp999=4332;MYCOPY(dummyfe1dabda_data_150_2644)}
    {dw tmp999=4417;MYCOPY(dummyfe1dabda_data_152_2645)}
    {dw tmp999=4503;MYCOPY(dummyfe1dabda_data_154_2646)}
    {dw tmp999=4589;MYCOPY(dummyfe1dabda_data_156_2647)}
    {dw tmp999=4675;MYCOPY(dummyfe1dabda_data_158_2648)}
    {dw tmp999=4760;MYCOPY(dummyfe1dabda_data_15a_2649)}
    {dw tmp999=4846;MYCOPY(dummyfe1dabda_data_15c_2650)}
    {dw tmp999=4932;MYCOPY(dummyfe1dabda_data_15e_2651)}
    {dw tmp999=5018;MYCOPY(dummyfe1dabda_data_160_2652)}
    {dw tmp999=5103;MYCOPY(dummyfe1dabda_data_162_2653)}
    {dw tmp999=5189;MYCOPY(dummyfe1dabda_data_164_2654)}
    {dw tmp999=5275;MYCOPY(dummyfe1dabda_data_166_2655)}
    {dw tmp999=5361;MYCOPY(dummyfe1dabda_data_168_2656)}
    {dw tmp999=5446;MYCOPY(dummyfe1dabda_data_16a_2657)}
    {dw tmp999=5532;MYCOPY(dummyfe1dabda_data_16c_2658)}
    {dw tmp999=5618;MYCOPY(dummyfe1dabda_data_16e_2659)}
    {dw tmp999=5704;MYCOPY(dummyfe1dabda_data_170_2660)}
    {dw tmp999=5789;MYCOPY(dummyfe1dabda_data_172_2661)}
    {dw tmp999=5875;MYCOPY(dummyfe1dabda_data_174_2662)}
    {dw tmp999=m2c::kglobal_alarmdirect;MYCOPY(alarmmode)}
    {dw tmp999=m2c::kglobal_alarmkill;MYCOPY(dummyfe1dabda_data_178_2666)}
    {dw tmp999=m2c::kglobal_alarmguide;MYCOPY(dummyfe1dabda_data_17a_2667)}
    {dw tmp999=m2c::kglobal_alarmzoom;MYCOPY(dummyfe1dabda_data_17c_2668)}
    {dw tmp999=m2c::kglobal_alarmfreefall;MYCOPY(dummyfe1dabda_data_17e_2669)}
    {dw tmp999=m2c::kglobal_alarmloiter;MYCOPY(dummyfe1dabda_data_180_2670)}
    {dw tmp999=m2c::kglobal_alarmdive;MYCOPY(dummyfe1dabda_data_182_2671)}
    {dw tmp999=1188;MYCOPY(dummyfe1dabda_data_184_2693)}
    {dw tmp999=1225;MYCOPY(dummyfe1dabda_data_186_2694)}
    {dw tmp999=1263;MYCOPY(dummyfe1dabda_data_188_2695)}
    {dw tmp999=1300;MYCOPY(dummyfe1dabda_data_18a_2696)}
    {dw tmp999=1338;MYCOPY(dummyfe1dabda_data_18c_2697)}
    {dw tmp999=1375;MYCOPY(dummyfe1dabda_data_18e_2698)}
    {dw tmp999=1425;MYCOPY(dummyfe1dabda_data_190_2699)}
    {dw tmp999=1475;MYCOPY(dummyfe1dabda_data_192_2700)}
    {dw tmp999=1513;MYCOPY(dummyfe1dabda_data_194_2701)}
    {dw tmp999=1563;MYCOPY(dummyfe1dabda_data_196_2702)}
    {dw tmp999=1613;MYCOPY(dummyfe1dabda_data_198_2703)}
    {dw tmp999=1663;MYCOPY(dummyfe1dabda_data_19a_2704)}
    {dw tmp999=1713;MYCOPY(dummyfe1dabda_data_19c_2705)}
    {dw tmp999=1775;MYCOPY(dummyfe1dabda_data_19e_2706)}
    {dw tmp999=1825;MYCOPY(dummyfe1dabda_data_1a0_2707)}
    {dw tmp999=1888;MYCOPY(dummyfe1dabda_data_1a2_2708)}
    {dw tmp999=1950;MYCOPY(dummyfe1dabda_data_1a4_2709)}
    {dw tmp999=2013;MYCOPY(dummyfe1dabda_data_1a6_2710)}
    {dw tmp999=2088;MYCOPY(dummyfe1dabda_data_1a8_2711)}
    {dw tmp999=2138;MYCOPY(dummyfe1dabda_data_1aa_2712)}
    {dw tmp999=2213;MYCOPY(dummyfe1dabda_data_1ac_2713)}
    {dw tmp999=2275;MYCOPY(dummyfe1dabda_data_1ae_2714)}
    {dw tmp999=2363;MYCOPY(dummyfe1dabda_data_1b0_2715)}
    {dw tmp999=2438;MYCOPY(dummyfe1dabda_data_1b2_2716)}
    {dw tmp999=2538;MYCOPY(dummyfe1dabda_data_1b4_2717)}
    {dw tmp999=2625;MYCOPY(dummyfe1dabda_data_1b6_2718)}
    {dw tmp999=2713;MYCOPY(dummyfe1dabda_data_1b8_2719)}
    {dw tmp999=2813;MYCOPY(dummyfe1dabda_data_1ba_2720)}
    {dw tmp999=2900;MYCOPY(dummyfe1dabda_data_1bc_2721)}
    {dw tmp999=3000;MYCOPY(dummyfe1dabda_data_1be_2722)}
    {dw tmp999=3088;MYCOPY(dummyfe1dabda_data_1c0_2723)}
    {dw tmp999=3188;MYCOPY(dummyfe1dabda_data_1c2_2724)}
    {dw tmp999=3288;MYCOPY(dummyfe1dabda_data_1c4_2725)}
    {dw tmp999=3400;MYCOPY(dummyfe1dabda_data_1c6_2726)}
    {dw tmp999=3538;MYCOPY(dummyfe1dabda_data_1c8_2727)}
    {dw tmp999=3688;MYCOPY(dummyfe1dabda_data_1ca_2728)}
    {dw tmp999=3825;MYCOPY(dummyfe1dabda_data_1cc_2729)}
    {db tmp999=0;MYCOPY(ecmfitted)}
    {db tmp999=0;MYCOPY(ecmactive)}
    {dw tmp999=0;MYCOPY(chaffcntr)}
    {dw tmp999=0;MYCOPY(flarecntr)}
    {db tmp999=0;MYCOPY(relchaff)}
    {db tmp999=0;MYCOPY(relflare)}
    {db tmp999=mob_bomb;MYCOPY(objectnum)}
    {db tmp999=mob_bomb;MYCOPY(dummyfe1dabda_data_1d7_2753)}
    {db tmp999=mob_lgb;MYCOPY(dummyfe1dabda_data_1d8_2754)}
    {db tmp999=mob_bomb;MYCOPY(dummyfe1dabda_data_1d9_2755)}
    {db tmp999=mob_sg357;MYCOPY(dummyfe1dabda_data_1da_2756)}
    {db tmp999=mob_alarm;MYCOPY(dummyfe1dabda_data_1db_2757)}
    {db tmp999=mob_tracer;MYCOPY(dummyfe1dabda_data_1dc_2758)}
    {db tmp999=mob_aim9l;MYCOPY(dummyfe1dabda_data_1dd_2759)}
    {db tmp999=mob_skyflash;MYCOPY(dummyfe1dabda_data_1de_2760)}
    {db tmp999=mob_alarm;MYCOPY(dummyfe1dabda_data_1df_2761)}
    {db tmp999=mob_alarm;MYCOPY(dummyfe1dabda_data_1e0_2762)}
    {db tmp999=mob_chaff;MYCOPY(dummyfe1dabda_data_1e1_2763)}
    {db tmp999=mob_flare;MYCOPY(dummyfe1dabda_data_1e2_2764)}
    {db tmp999=mob_tracerb;MYCOPY(dummyfe1dabda_data_1e3_2765)}
    {dw tmp999=m2c::kglobal_updategpb;MYCOPY(updateoneweapon)}
    {dw tmp999=m2c::kglobal_updateret;MYCOPY(dummyfe1dabda_data_1e6_2772)}
    {dw tmp999=m2c::kglobal_updatelgb;MYCOPY(dummyfe1dabda_data_1e8_2773)}
    {dw tmp999=m2c::kglobal_updatebl755;MYCOPY(dummyfe1dabda_data_1ea_2774)}
    {dw tmp999=m2c::kglobal_updatejp233;MYCOPY(dummyfe1dabda_data_1ec_2775)}
    {dw tmp999=m2c::kglobal_updatealarm;MYCOPY(dummyfe1dabda_data_1ee_2776)}
    {dw tmp999=m2c::kglobal_updatecannon;MYCOPY(dummyfe1dabda_data_1f0_2777)}
    {dw tmp999=m2c::kglobal_updatemissile;MYCOPY(dummyfe1dabda_data_1f2_2778)}
    {dw tmp999=m2c::kglobal_updatemissile;MYCOPY(dummyfe1dabda_data_1f4_2779)}
    {dw tmp999=m2c::kglobal_updatemissile;MYCOPY(dummyfe1dabda_data_1f6_2780)}
    {dw tmp999=m2c::kglobal_updatemissile;MYCOPY(dummyfe1dabda_data_1f8_2781)}
    {dw tmp999=m2c::kglobal_updatedecoy;MYCOPY(dummyfe1dabda_data_1fa_2782)}
    {dw tmp999=m2c::kglobal_updatedecoy;MYCOPY(dummyfe1dabda_data_1fc_2783)}
    {dw tmp999=m2c::kglobal_armok;MYCOPY(armswitch)}
    {dw tmp999=m2c::kglobal_armmanual;MYCOPY(dummyfe1dabda_data_200_2789)}
    {dw tmp999=m2c::kglobal_armlaydown;MYCOPY(dummyfe1dabda_data_202_2790)}
    {dw tmp999=m2c::kglobal_armloft;MYCOPY(dummyfe1dabda_data_204_2791)}
    {dw tmp999=m2c::kglobal_armlaserguided;MYCOPY(dummyfe1dabda_data_206_2792)}
    {dw tmp999=m2c::kglobal_armjp233;MYCOPY(dummyfe1dabda_data_208_2793)}
    {dw tmp999=m2c::kglobal_armalarmdir;MYCOPY(dummyfe1dabda_data_20a_2794)}
    {dw tmp999=m2c::kglobal_armalarmind;MYCOPY(dummyfe1dabda_data_20c_2795)}
    {dw tmp999=m2c::kglobal_armcannon;MYCOPY(dummyfe1dabda_data_20e_2796)}
    {dw tmp999=m2c::kglobal_armsidewinder;MYCOPY(dummyfe1dabda_data_210_2797)}
    {dw tmp999=m2c::kglobal_armskyflash;MYCOPY(dummyfe1dabda_data_212_2798)}
    {dw tmp999=m2c::kglobal_releasebomb;MYCOPY(releaseweapon)}
    {dw tmp999=m2c::kglobal_releasebomb;MYCOPY(dummyfe1dabda_data_216_2804)}
    {dw tmp999=m2c::kglobal_releasebomb;MYCOPY(dummyfe1dabda_data_218_2805)}
    {dw tmp999=m2c::kglobal_releasebomb;MYCOPY(dummyfe1dabda_data_21a_2806)}
    {dw tmp999=m2c::kglobal_releasebomb;MYCOPY(dummyfe1dabda_data_21c_2807)}
    {dw tmp999=1000;MYCOPY(safetyheights)}
    {dw tmp999=100;MYCOPY(dummyfe1dabda_data_220_2813)}
    {dw tmp999=1000;MYCOPY(dummyfe1dabda_data_222_2814)}
    {dw tmp999=200;MYCOPY(dummyfe1dabda_data_224_2815)}
    {dw tmp999=200;MYCOPY(dummyfe1dabda_data_226_2816)}
    {dw tmp999=31130;MYCOPY(retardfactors)}
    {dw tmp999=24576;MYCOPY(dummyfe1dabda_data_22a_2822)}
    {dw tmp999=31130;MYCOPY(dummyfe1dabda_data_22c_2823)}
    {dw tmp999=29491;MYCOPY(dummyfe1dabda_data_22e_2824)}
    {dw tmp999=24576;MYCOPY(dummyfe1dabda_data_230_2825)}
    {db tmp999=crater_size2;MYCOPY(cratersize)}
    {db tmp999=crater_size2;MYCOPY(dummyfe1dabda_data_233_2831)}
    {db tmp999=crater_size2;MYCOPY(dummyfe1dabda_data_234_2832)}
    {db tmp999=crater_size1;MYCOPY(dummyfe1dabda_data_235_2833)}
    {db tmp999=crater_size1;MYCOPY(dummyfe1dabda_data_236_2834)}
    {db tmp999=crater_size2;MYCOPY(dummyfe1dabda_data_237_2835)}
    {db tmp999=crater_shell;MYCOPY(dummyfe1dabda_data_238_2836)}
    {db tmp999=crater_size1;MYCOPY(dummyfe1dabda_data_239_2837)}
    {db tmp999=crater_size1;MYCOPY(dummyfe1dabda_data_23a_2838)}
    {db tmp999=crater_size1;MYCOPY(dummyfe1dabda_data_23b_2839)}
    {db tmp999=crater_size1;MYCOPY(dummyfe1dabda_data_23c_2840)}
    {db tmp999=crater_size1;MYCOPY(dummyfe1dabda_data_23d_2841)}
    {db tmp999=crater_size1;MYCOPY(dummyfe1dabda_data_23e_2842)}
    {dw tmp999=smoke_crater3;MYCOPY(cratersmoke)}
    {dw tmp999=smoke_crater3;MYCOPY(dummyfe1dabda_data_241_2850)}
    {dw tmp999=smoke_crater3;MYCOPY(dummyfe1dabda_data_243_2851)}
    {dw tmp999=smoke_crater2;MYCOPY(dummyfe1dabda_data_245_2852)}
    {dw tmp999=smoke_crater1;MYCOPY(dummyfe1dabda_data_247_2853)}
    {dw tmp999=smoke_crater3;MYCOPY(dummyfe1dabda_data_249_2854)}
    {dw tmp999=smoke_crater2;MYCOPY(dummyfe1dabda_data_24b_2855)}
    {dw tmp999=smoke_crater2;MYCOPY(dummyfe1dabda_data_24d_2856)}
    {dw tmp999=smoke_crater2;MYCOPY(dummyfe1dabda_data_24f_2857)}
    {dw tmp999=smoke_crater2;MYCOPY(dummyfe1dabda_data_251_2858)}
    {dw tmp999=smoke_crater2;MYCOPY(dummyfe1dabda_data_253_2859)}
    {dw tmp999=smoke_crater1;MYCOPY(dummyfe1dabda_data_255_2860)}
    {dw tmp999=smoke_crater1;MYCOPY(dummyfe1dabda_data_257_2861)}
    {db tmp999=die_gnd_explo;MYCOPY(tornadowpndie)}
    {db tmp999=die_gnd_explo;MYCOPY(dummyfe1dabda_data_25a_2867)}
    {db tmp999=die_gnd_explo;MYCOPY(dummyfe1dabda_data_25b_2868)}
    {db tmp999=die_gnd_explo;MYCOPY(dummyfe1dabda_data_25c_2869)}
    {db tmp999=die_gnd_explo;MYCOPY(dummyfe1dabda_data_25d_2870)}
    {db tmp999=die_gnd_explo;MYCOPY(dummyfe1dabda_data_25e_2871)}
    {db tmp999=die_cannon;MYCOPY(dummyfe1dabda_data_25f_2872)}
    {db tmp999=die_missile;MYCOPY(dummyfe1dabda_data_260_2873)}
    {db tmp999=die_missile;MYCOPY(dummyfe1dabda_data_261_2874)}
    {db tmp999=die_sam;MYCOPY(dummyfe1dabda_data_262_2875)}
    {db tmp999=die_sam;MYCOPY(dummyfe1dabda_data_263_2876)}
    {db tmp999=die_missile;MYCOPY(dummyfe1dabda_data_264_2877)}
    {db tmp999=die_missile;MYCOPY(dummyfe1dabda_data_265_2878)}
    {db tmp999=wpn_effect4;MYCOPY(weaponeffect)}
    {db tmp999=wpn_effect4;MYCOPY(dummyfe1dabda_data_267_2886)}
    {db tmp999=wpn_effect4;MYCOPY(dummyfe1dabda_data_268_2887)}
    {db tmp999=wpn_effect3;MYCOPY(dummyfe1dabda_data_269_2888)}
    {db tmp999=wpn_effect3;MYCOPY(dummyfe1dabda_data_26a_2889)}
    {db tmp999=wpn_effect3;MYCOPY(dummyfe1dabda_data_26b_2890)}
    {db tmp999=wpn_effect1;MYCOPY(dummyfe1dabda_data_26c_2891)}
    {db tmp999=wpn_effect1;MYCOPY(dummyfe1dabda_data_26d_2892)}
    {db tmp999=wpn_effect1;MYCOPY(dummyfe1dabda_data_26e_2893)}
    {db tmp999=wpn_effect3;MYCOPY(dummyfe1dabda_data_26f_2894)}
    {db tmp999=wpn_effect3;MYCOPY(dummyfe1dabda_data_270_2895)}
    {db tmp999=wpn_effect1;MYCOPY(dummyfe1dabda_data_271_2896)}
    {db tmp999=wpn_effect1;MYCOPY(dummyfe1dabda_data_272_2897)}
    {dw tmp999=300;MYCOPY(weaponradius)}
    {dw tmp999=300;MYCOPY(dummyfe1dabda_data_275_2905)}
    {dw tmp999=300;MYCOPY(dummyfe1dabda_data_277_2906)}
    {dw tmp999=50;MYCOPY(dummyfe1dabda_data_279_2907)}
    {dw tmp999=50;MYCOPY(dummyfe1dabda_data_27b_2908)}
    {dw tmp999=50;MYCOPY(dummyfe1dabda_data_27d_2909)}
    {dw tmp999=20;MYCOPY(dummyfe1dabda_data_27f_2910)}
    {dw tmp999=20;MYCOPY(dummyfe1dabda_data_281_2911)}
    {dw tmp999=20;MYCOPY(dummyfe1dabda_data_283_2912)}
    {dw tmp999=20;MYCOPY(dummyfe1dabda_data_285_2913)}
    {dw tmp999=20;MYCOPY(dummyfe1dabda_data_287_2914)}
    {dw tmp999=750;MYCOPY(weaponhemi)}
    {dw tmp999=750;MYCOPY(dummyfe1dabda_data_28f_2925)}
    {dw tmp999=750;MYCOPY(dummyfe1dabda_data_291_2926)}
    {dw tmp999=200;MYCOPY(dummyfe1dabda_data_293_2927)}
    {dw tmp999=200;MYCOPY(dummyfe1dabda_data_295_2928)}
    {dw tmp999=200;MYCOPY(dummyfe1dabda_data_297_2929)}
    {db tmp999=gnd_crater1;MYCOPY(debristype)}
    {db tmp999=gnd_crater2;MYCOPY(dummyfe1dabda_data_2a8_2942)}
    {db tmp999=gnd_crater3;MYCOPY(dummyfe1dabda_data_2a9_2943)}
    {db tmp999=gnd_rbnsd;MYCOPY(dummyfe1dabda_data_2aa_2944)}
    {db tmp999=gnd_rbewd;MYCOPY(dummyfe1dabda_data_2ab_2945)}
    {db tmp999=gnd_rlbnsd;MYCOPY(dummyfe1dabda_data_2ac_2946)}
    {db tmp999=gnd_rlbewd;MYCOPY(dummyfe1dabda_data_2ad_2947)}
    {db tmp999=gnd_embcrater;MYCOPY(dummyfe1dabda_data_2ae_2948)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(tgt_view)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(ccip_view)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_2964)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_2965)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_2966)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_2969)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_2970)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_2971)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_2974)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_2975)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_2976)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_2979)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_2980)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_2981)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_2984)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_2985)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_2986)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_2989)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_2990)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_2991)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_2994)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_2995)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_2996)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_2999)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3000)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3001)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3004)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3005)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3006)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3009)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3010)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3011)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3014)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3015)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3016)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3019)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3020)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3021)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3024)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3025)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3026)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3029)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3030)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3031)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3034)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3035)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3036)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3039)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3040)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3041)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3044)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3045)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3046)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3049)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3050)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3051)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3054)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3055)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3056)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3059)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3060)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3061)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3064)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3065)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3066)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3069)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3070)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3071)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3074)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3075)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3076)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3079)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3080)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3081)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3084)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3085)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3086)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3089)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3090)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3091)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3094)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3095)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3096)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3099)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3100)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3101)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3104)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3105)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3106)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3109)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3110)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3111)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3114)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3115)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3116)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3119)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3120)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3121)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3124)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3125)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3126)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3129)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3130)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3131)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3134)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3135)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3136)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3139)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3140)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3141)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3144)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3145)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3146)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3149)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3150)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3151)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3154)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3155)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3156)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3159)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3160)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3161)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3164)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3165)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3166)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3169)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3170)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3171)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3174)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3175)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3176)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3179)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3180)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3181)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3184)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3185)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3186)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3189)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3190)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3191)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3194)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3195)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3196)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3199)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3200)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3201)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3204)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3205)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3206)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3209)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3210)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3211)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3214)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3215)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3216)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3219)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3220)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3221)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3224)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3225)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3226)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3229)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3230)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3231)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3234)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3235)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3236)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3239)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3240)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3241)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3244)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3245)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3246)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3249)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3250)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3251)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3254)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3255)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3256)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3259)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3260)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3261)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3264)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3265)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3266)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3269)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3270)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3271)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3274)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3275)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3276)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3279)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3280)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3281)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3284)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3285)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3286)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3289)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3290)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3291)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3294)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3295)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3296)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3299)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3300)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3301)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3304)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3305)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3306)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3309)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3310)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3311)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3314)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3315)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3316)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3319)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3320)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3321)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3324)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3325)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3326)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3329)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3330)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3331)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3334)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3335)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3336)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3339)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3340)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3341)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3344)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3345)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3346)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3349)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3350)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3351)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3354)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3355)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3356)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3359)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3360)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3361)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3364)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3365)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3366)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3369)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3370)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3371)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3374)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3375)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3376)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3379)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3380)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3381)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3384)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3385)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3386)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3389)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3390)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3391)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3394)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3395)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3396)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3399)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3400)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3401)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3404)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3405)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3406)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3409)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3410)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3411)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3414)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3415)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3416)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3419)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3420)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3421)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3424)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3425)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3426)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3429)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3430)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3431)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3434)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3435)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3436)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3439)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3440)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3441)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3444)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3445)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3446)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3449)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3450)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3451)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3454)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3455)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3456)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3459)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3460)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3461)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3464)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3465)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3466)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3469)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3470)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3471)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3474)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3475)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3476)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3479)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3480)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3481)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3484)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3485)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3486)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3489)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3490)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3491)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3494)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3495)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3496)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3499)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3500)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3501)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3504)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3505)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3506)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3509)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3510)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3511)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3514)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3515)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3516)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3519)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3520)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3521)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3524)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3525)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3526)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3529)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3530)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3531)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3534)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3535)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3536)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3539)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3540)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3541)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3544)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3545)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3546)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3549)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3550)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3551)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3554)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3555)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3556)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3559)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3560)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3561)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3564)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3565)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3566)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3569)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3570)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3571)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3574)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3575)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3576)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3579)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3580)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3581)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3584)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3585)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3586)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3589)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3590)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3591)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3594)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3595)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3596)}
    {mobile tmp999={0,0,0,0,65535};MYCOPY(__m2c_structrow_fe1dabda_3599)}
    {viewpoint tmp999={0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3600)}
    {weapon tmp999={null_weapon,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(__m2c_structrow_fe1dabda_3601)}
    {impact tmp999[128]={{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0},{0,0,0,0,null_weapon,0}};MYCOPY(__m2c_structrow_fe1dabda_3604)}

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
        
