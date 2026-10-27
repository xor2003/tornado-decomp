/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "hud2.h"

	
 __attribute__((weak)) bool clipline2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclipline2, _state);}

 __attribute__((weak)) bool dispairtgtdata2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdispairtgtdata2, _state);}

 __attribute__((weak)) bool drawairtarget2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawairtarget2, _state);}

 __attribute__((weak)) bool drawalarmclock2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawalarmclock2, _state);}

 __attribute__((weak)) bool drawbombfall2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawbombfall2, _state);}

 __attribute__((weak)) bool drawbrokenbar2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawbrokenbar2, _state);}

 __attribute__((weak)) bool drawccipmrkr2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawccipmrkr2, _state);}

 __attribute__((weak)) bool drawcentrecross2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawcentrecross2, _state);}

 __attribute__((weak)) bool drawdownstroke2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawdownstroke2, _state);}

 __attribute__((weak)) bool drawgndgunclock2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawgndgunclock2, _state);}

 __attribute__((weak)) bool drawgndtgtmrkr2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawgndtgtmrkr2, _state);}

 __attribute__((weak)) bool drawhudbrackets2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawhudbrackets2, _state);}

 __attribute__((weak)) bool drawintercept2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawintercept2, _state);}

 __attribute__((weak)) bool drawpitchbar2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawpitchbar2, _state);}

 __attribute__((weak)) bool drawsolidbar2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawsolidbar2, _state);}

 __attribute__((weak)) bool drawsolidfall2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawsolidfall2, _state);}

 __attribute__((weak)) bool drawstandby2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawstandby2, _state);}

 __attribute__((weak)) bool drawzerobar2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawzerobar2, _state);}

 __attribute__((weak)) bool inithud2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinithud2, _state);}

 __attribute__((weak)) bool jp233clock2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kjp233clock2, _state);}

 __attribute__((weak)) bool laserrangeclock2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klaserrangeclock2, _state);}

 __attribute__((weak)) bool limitpitch2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klimitpitch2, _state);}

 __attribute__((weak)) bool loftsteeringcue2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kloftsteeringcue2, _state);}

 static bool pancode_0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpancode_0_proc, _state);}

 __attribute__((weak)) bool projecthudpoint2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprojecthudpoint2, _state);}

 __attribute__((weak)) bool rotatemrkrline2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krotatemrkrline2, _state);}

 __attribute__((weak)) bool sethudclip2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksethudclip2, _state);}

 __attribute__((weak)) bool updateacsymbol2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateacsymbol2, _state);}

 __attribute__((weak)) bool updateairspeed2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateairspeed2, _state);}

 __attribute__((weak)) bool updatealt2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatealt2, _state);}

 __attribute__((weak)) bool updatealtclock2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatealtclock2, _state);}

 __attribute__((weak)) bool updateaoa2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateaoa2, _state);}

 __attribute__((weak)) bool updateaoameter2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateaoameter2, _state);}

 __attribute__((weak)) bool updateclock2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateclock2, _state);}

 __attribute__((weak)) bool updateearlylate2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateearlylate2, _state);}

 __attribute__((weak)) bool updatehdg2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatehdg2, _state);}

 __attribute__((weak)) bool updatehud2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatehud2, _state);}

 __attribute__((weak)) bool updateils2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdateils2, _state);}

 __attribute__((weak)) bool updatepitch2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatepitch2, _state);}

 __attribute__((weak)) bool updatevsi2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatevsi2, _state);}

 static bool __m2c_macrolocal_139_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_139_testhi, _state);}

 static bool __m2c_macrolocal_139_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_139_testok, _state);}

 static bool __m2c_macrolocal_146_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_146_skip, _state);}

 static bool __m2c_macrolocal_147_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_147_skip, _state);}

 static bool __m2c_macrolocal_148_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_148_skip, _state);}

 static bool __m2c_macrolocal_149_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_149_skip, _state);}

 static bool __m2c_macrolocal_152_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_152_skip, _state);}

 static bool __m2c_macrolocal_154_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_154_skip, _state);}

 static bool __m2c_macrolocal_156_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_156_skip, _state);}

 static bool __m2c_macrolocal_157_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_157_skip, _state);}

 static bool __m2c_macrolocal_158_testhi(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_158_testhi, _state);}

 static bool __m2c_macrolocal_158_testok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_158_testok, _state);}

 static bool __m2c_macrolocal_165_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_165_skip, _state);}

 static bool __m2c_macrolocal_166_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_166_skip, _state);}

 static bool __m2c_macrolocal_167_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_167_skip, _state);}

 static bool __m2c_macrolocal_168_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_168_skip, _state);}

 static bool __m2c_macrolocal_169_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_169_skip, _state);}

 static bool __m2c_macrolocal_170_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_170_skip, _state);}

 static bool __m2c_macrolocal_171_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_171_skip, _state);}

 static bool __m2c_macrolocal_172_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_172_skip, _state);}

 static bool __m2c_macrolocal_173_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_173_skip, _state);}

 static bool __m2c_macrolocal_174_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_174_skip, _state);}

 static bool __m2c_macrolocal_175_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_175_skip, _state);}

 static bool __m2c_macrolocal_176_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_176_skip, _state);}

 static bool __m2c_macrolocal_177_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_177_skip, _state);}

 static bool __m2c_macrolocal_178_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_178_skip, _state);}

 static bool __m2c_macrolocal_179_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_179_skip, _state);}

 static bool __m2c_macrolocal_180_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_180_skip, _state);}

 static bool __m2c_macrolocal_181_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_181_skip, _state);}

 static bool __m2c_macrolocal_182_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_182_skip, _state);}

 static bool __m2c_macrolocal_183_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_183_skip, _state);}

 static bool __m2c_macrolocal_184_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_184_skip, _state);}

 static bool __m2c_macrolocal_185_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_185_skip, _state);}

 static bool __m2c_macrolocal_186_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_186_skip, _state);}

 static bool __m2c_macrolocal_191_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_191_skip, _state);}

 static bool __m2c_macrolocal_63_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_63_skip, _state);}

 static bool airspeedexit2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kairspeedexit2, _state);}

 static bool altclockbug2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaltclockbug2, _state);}

 static bool bar0(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbar0, _state);}

 static bool bar90(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbar90, _state);}

 static bool bar_90(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbar_90, _state);}

 static bool barloop2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbarloop2, _state);}

 static bool bugquad1b(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbugquad1b, _state);}

 static bool bugquad2b(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbugquad2b, _state);}

 static bool bugquad3b(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbugquad3b, _state);}

 static bool bugquad4b(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbugquad4b, _state);}

 static bool cannonrange2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcannonrange2, _state);}

 static bool clipscaledline2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclipscaledline2, _state);}

 static bool cont1500m2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcont1500m2, _state);}

 static bool cont400m2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcont400m2, _state);}

 static bool cont600m2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcont600m2, _state);}

 static bool cont900m2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcont900m2, _state);}

 static bool contairtarget2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontairtarget2, _state);}

 static bool contnav2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontnav2, _state);}

 static bool drawaltbug2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawaltbug2, _state);}

 static bool exitearlylate2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitearlylate2, _state);}

 static bool exithud2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexithud2, _state);}

 static bool exitintercept2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitintercept2, _state);}

 static bool exitlaserrange2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitlaserrange2, _state);}

 static bool failairtarget2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfailairtarget2, _state);}

 static bool failccipmrkr2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfailccipmrkr2, _state);}

 static bool failgndtgtmrkr2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfailgndtgtmrkr2, _state);}

 static bool hdgdigitloop2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khdgdigitloop2, _state);}

 static bool hdgdigits2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khdgdigits2, _state);}

 static bool hdgdotloop2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khdgdotloop2, _state);}

 static bool htmargok2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khtmargok2, _state);}

 __attribute__((weak)) bool hudalarmdir2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khudalarmdir2, _state);}

 __attribute__((weak)) bool hudalarmind2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khudalarmind2, _state);}

 __attribute__((weak)) bool hudcannon2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khudcannon2, _state);}

 __attribute__((weak)) bool hudjp2332(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khudjp2332, _state);}

 __attribute__((weak)) bool hudlaserguided2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khudlaserguided2, _state);}

 __attribute__((weak)) bool hudlaydownbomb2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khudlaydownbomb2, _state);}

 __attribute__((weak)) bool hudloftbomb2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khudloftbomb2, _state);}

 __attribute__((weak)) bool hudmanualbomb2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khudmanualbomb2, _state);}

 __attribute__((weak)) bool hudnavigation2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khudnavigation2, _state);}

 __attribute__((weak)) bool hudsidewinder2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khudsidewinder2, _state);}

 __attribute__((weak)) bool hudskyflash2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khudskyflash2, _state);}

 static bool initcont2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitcont2, _state);}

 static bool initdone2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitdone2, _state);}

 static bool laserrangeok2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klaserrangeok2, _state);}

 static bool negpitch2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knegpitch2, _state);}

 static bool nextbar2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextbar2, _state);}

 static bool pospitch2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpospitch2, _state);}

 static bool printpitch2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprintpitch2, _state);}

 static bool setclip2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetclip2, _state);}

 static bool sidewinderrange2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksidewinderrange2, _state);}

 static bool skip1500m2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip1500m2, _state);}

 static bool skip400m2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip400m2, _state);}

 static bool skip600m2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip600m2, _state);}

 static bool skip900m2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskip900m2, _state);}

 static bool skipa2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipa2, _state);}

 static bool skipb2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipb2, _state);}

 static bool skipbrg2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipbrg2, _state);}

 static bool skipc2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipc2, _state);}

 static bool skipd(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipd, _state);}

 static bool skipirlock2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipirlock2, _state);}

 static bool skyflashrange2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskyflashrange2, _state);}

 static bool sortflip2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortflip2, _state);}

 static bool standbysight2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kstandbysight2, _state);}

	
	#include "hud2_default_seg_lifted.cpp"
#include "hud2_pancode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::k__m2c_macrolocal_139_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_139_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_146_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_147_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_148_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_149_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_152_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_154_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_156_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_157_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_158_testhi: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_158_testok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_165_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_166_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_167_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_168_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_169_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_170_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_171_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_172_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_173_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_174_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_175_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_176_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_177_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_178_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_179_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_180_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_181_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_182_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_183_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_184_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_185_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_186_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_191_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_63_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kairspeedexit2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaltclockbug2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbar0: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbar90: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbar_90: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbarloop2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbugquad1b: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbugquad2b: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbugquad3b: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbugquad4b: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_calcangdiff
        case m2c::kcalcangdiff: 	if (!calcangdiff(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calceyecoords
        case m2c::kcalceyecoords: 	if (!calceyecoords(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcintercept
        case m2c::kcalcintercept: 	if (!calcintercept(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcrngbrgvp_wp
        case m2c::kcalcrngbrgvp_wp: 	if (!calcrngbrgvp_wp(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calctgtrelco
        case m2c::kcalctgtrelco: 	if (!calctgtrelco(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calctransmatrix
        case m2c::kcalctransmatrix: 	if (!calctransmatrix(0, _state)) return false; break;
#endif
        case m2c::kcannonrange2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclipline2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclipscaledline2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcont1500m2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcont400m2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcont600m2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcont900m2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontairtarget2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontnav2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdispairtgtdata2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawairtarget2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawalarmclock2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawaltbug2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawbombfall2: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_drawbrackets
        case m2c::kdrawbrackets: 	if (!drawbrackets(0, _state)) return false; break;
#endif
        case m2c::kdrawbrokenbar2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawccipmrkr2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawcentrecross2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawdownstroke2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawgndgunclock2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawgndtgtmrkr2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawhudbrackets2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawintercept2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawpitchbar2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawsolidbar2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawsolidfall2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawstandby2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawzerobar2: 	if (!_group1(__disp, _state)) return false; break;
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
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitearlylate2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexithud2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitintercept2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitlaserrange2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfailairtarget2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfailccipmrkr2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfailgndtgtmrkr2: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_getdronespeed
        case m2c::kgetdronespeed: 	if (!getdronespeed(0, _state)) return false; break;
#endif
        case m2c::khdgdigitloop2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khdgdigits2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khdgdotloop2: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_hlinedraw
        case m2c::khlinedraw: 	if (!hlinedraw(0, _state)) return false; break;
#endif
        case m2c::khtmargok2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khudalarmdir2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khudalarmind2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khudcannon2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khudjp2332: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khudlaserguided2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khudlaydownbomb2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khudloftbomb2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khudmanualbomb2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khudnavigation2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khudsidewinder2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khudskyflash2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitcont2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitdone2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinithud2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kjp233clock2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klaserrangeclock2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klaserrangeok2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klimitpitch2: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_linedraw
        case m2c::klinedraw: 	if (!linedraw(0, _state)) return false; break;
#endif
        case m2c::kloftsteeringcue2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::knegpitch2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextbar2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpancode_0_proc: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpospitch2: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_printchar
        case m2c::kprintchar: 	if (!printchar(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_printdol
        case m2c::kprintdol: 	if (!printdol(0, _state)) return false; break;
#endif
        case m2c::kprintpitch2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprojecthudpoint2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krotatemrkrline2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetclip2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksethudclip2: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_sethudlevel
        case m2c::ksethudlevel: 	if (!sethudlevel(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_setpixel
        case m2c::ksetpixel: 	if (!setpixel(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_setsspriteclip
        case m2c::ksetsspriteclip: 	if (!setsspriteclip(0, _state)) return false; break;
#endif
        case m2c::ksidewinderrange2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip1500m2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip400m2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip600m2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskip900m2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipa2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipb2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipbrg2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipc2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipd: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipirlock2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskyflashrange2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortflip2: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_ssprite
        case m2c::kssprite: 	if (!ssprite(0, _state)) return false; break;
#endif
        case m2c::kstandbysight2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateacsymbol2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateairspeed2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatealt2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatealtclock2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateaoa2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateaoameter2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateclock2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateearlylate2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatehdg2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatehud2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdateils2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatepitch2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatevsi2: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_vdotclip
        case m2c::kvdotclip: 	if (!vdotclip(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_vlinedraw
        case m2c::kvlinedraw: 	if (!vlinedraw(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_vquicklineclip
        case m2c::kvquicklineclip: 	if (!vquicklineclip(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_vsetviewport
        case m2c::kvsetviewport: 	if (!vsetviewport(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_xcalcunclipcrt
        case m2c::kxcalcunclipcrt: 	if (!xcalcunclipcrt(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_xdotclip
        case m2c::kxdotclip: 	if (!xdotclip(0, _state)) return false; break;
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
          void Initializer_hud2()
          {
              {dw tmp999=m2c::kglobal_hudnavigation2;MYCOPY(hudswitch2)}
    {dw tmp999=m2c::kglobal_hudmanualbomb2;MYCOPY(dummy68abc1d3_data_2_2351)}
    {dw tmp999=m2c::kglobal_hudlaydownbomb2;MYCOPY(dummy68abc1d3_data_4_2352)}
    {dw tmp999=m2c::kglobal_hudloftbomb2;MYCOPY(dummy68abc1d3_data_6_2353)}
    {dw tmp999=m2c::kglobal_hudlaserguided2;MYCOPY(dummy68abc1d3_data_8_2354)}
    {dw tmp999=m2c::kglobal_hudjp2332;MYCOPY(dummy68abc1d3_data_a_2355)}
    {dw tmp999=m2c::kglobal_hudalarmdir2;MYCOPY(dummy68abc1d3_data_c_2356)}
    {dw tmp999=m2c::kglobal_hudalarmind2;MYCOPY(dummy68abc1d3_data_e_2357)}
    {dw tmp999=m2c::kglobal_hudcannon2;MYCOPY(dummy68abc1d3_data_10_2358)}
    {dw tmp999=m2c::kglobal_hudsidewinder2;MYCOPY(dummy68abc1d3_data_12_2359)}
    {dw tmp999=m2c::kglobal_hudskyflash2;MYCOPY(dummy68abc1d3_data_14_2360)}
    {db tmp999=1;MYCOPY(hudenabled2)}
    {db tmp999=0;MYCOPY(machoption2)}
    {dw tmp999=0;MYCOPY(clip_above2)}
    {dw tmp999=0;MYCOPY(clip_below2)}
    {dw tmp999=0;MYCOPY(hdgyoff2)}
    {viewport tmp999={112,53,96,88,0,7};MYCOPY(vp2)}
    {dw tmp999=0;MYCOPY(markerx2)}
    {db tmp999[2]={0};MYCOPY(markery2)}
    {db tmp999[2]={0,246};MYCOPY(dummy68abc1d3_data_2c_2403)}
    {db tmp999[2]={1,246};MYCOPY(dummy68abc1d3_data_2e_2404)}
    {db tmp999[2]={2,246};MYCOPY(dummy68abc1d3_data_30_2405)}
    {db tmp999[2]={3,246};MYCOPY(dummy68abc1d3_data_32_2406)}
    {db tmp999[2]={4,246};MYCOPY(dummy68abc1d3_data_34_2407)}
    {db tmp999[2]={5,247};MYCOPY(dummy68abc1d3_data_36_2408)}
    {db tmp999[2]={6,247};MYCOPY(dummy68abc1d3_data_38_2409)}
    {db tmp999[2]={7,248};MYCOPY(dummy68abc1d3_data_3a_2410)}
    {db tmp999[2]={8,248};MYCOPY(dummy68abc1d3_data_3c_2411)}
    {db tmp999[2]={9,249};MYCOPY(dummy68abc1d3_data_3e_2412)}
    {db tmp999[2]={10,250};MYCOPY(dummy68abc1d3_data_40_2413)}
    {db tmp999[2]={11,251};MYCOPY(dummy68abc1d3_data_42_2414)}
    {db tmp999[2]={12,252};MYCOPY(dummy68abc1d3_data_44_2415)}
    {db tmp999[2]={12,253};MYCOPY(dummy68abc1d3_data_46_2416)}
    {db tmp999[2]={13,254};MYCOPY(dummy68abc1d3_data_48_2417)}
    {db tmp999[2]={13,255};MYCOPY(dummy68abc1d3_data_4a_2418)}
    {db tmp999[2]={13,0};MYCOPY(dummy68abc1d3_data_4c_2419)}
    {db tmp999[2]={0,247};MYCOPY(dummy68abc1d3_data_4e_2421)}
    {db tmp999[2]={1,247};MYCOPY(dummy68abc1d3_data_50_2422)}
    {db tmp999[2]={2,247};MYCOPY(dummy68abc1d3_data_52_2423)}
    {db tmp999[2]={3,247};MYCOPY(dummy68abc1d3_data_54_2424)}
    {db tmp999[2]={4,247};MYCOPY(dummy68abc1d3_data_56_2425)}
    {db tmp999[2]={4,248};MYCOPY(dummy68abc1d3_data_58_2426)}
    {db tmp999[2]={5,248};MYCOPY(dummy68abc1d3_data_5a_2427)}
    {db tmp999[2]={6,249};MYCOPY(dummy68abc1d3_data_5c_2428)}
    {db tmp999[2]={7,249};MYCOPY(dummy68abc1d3_data_5e_2429)}
    {db tmp999[2]={8,250};MYCOPY(dummy68abc1d3_data_60_2430)}
    {db tmp999[2]={9,251};MYCOPY(dummy68abc1d3_data_62_2431)}
    {db tmp999[2]={10,252};MYCOPY(dummy68abc1d3_data_64_2432)}
    {db tmp999[2]={11,252};MYCOPY(dummy68abc1d3_data_66_2433)}
    {db tmp999[2]={11,253};MYCOPY(dummy68abc1d3_data_68_2434)}
    {db tmp999[2]={12,254};MYCOPY(dummy68abc1d3_data_6a_2435)}
    {db tmp999[2]={12,255};MYCOPY(dummy68abc1d3_data_6c_2436)}
    {db tmp999[2]={12,0};MYCOPY(dummy68abc1d3_data_6e_2437)}
    {dw tmp999=0;MYCOPY(barxoff2)}
    {dw tmp999=0;MYCOPY(baryoff2)}
    {dw tmp999=0;MYCOPY(px02)}
    {dw tmp999=0;MYCOPY(py02)}
    {dw tmp999=0;MYCOPY(px1b)}
    {dw tmp999=0;MYCOPY(py1b)}
    {dw tmp999=0;MYCOPY(px2b)}
    {dw tmp999=0;MYCOPY(py2b)}
    {dw tmp999=0;MYCOPY(px3b)}
    {dw tmp999=0;MYCOPY(py3b)}
    {dw tmp999=0;MYCOPY(px4b)}
    {dw tmp999=0;MYCOPY(py4b)}
    {dw tmp999=0;MYCOPY(px5b)}
    {dw tmp999=0;MYCOPY(py5b)}
    {dw tmp999=0;MYCOPY(px6b)}
    {dw tmp999=0;MYCOPY(py6b)}
    {dw tmp999=0;MYCOPY(px7b)}
    {dw tmp999=0;MYCOPY(py7b)}
    {dw tmp999=0;MYCOPY(px8b)}
    {dw tmp999=0;MYCOPY(py8b)}
    {dw tmp999=0;MYCOPY(px9b)}
    {dw tmp999=0;MYCOPY(py9b)}
    {dw tmp999=0;MYCOPY(px10b)}
    {dw tmp999=0;MYCOPY(py10b)}
    {dw tmp999=0;MYCOPY(px11b)}
    {dw tmp999=0;MYCOPY(py11b)}
    {dw tmp999=0;MYCOPY(px12b)}
    {dw tmp999=0;MYCOPY(py12b)}
    {dw tmp999=0;MYCOPY(clockxorg2)}
    {db tmp999[2]={0};MYCOPY(clockyorg2)}
    {db tmp999[2]={0,247};MYCOPY(dummy68abc1d3_data_ac_2486)}
    {db tmp999[2]={1,247};MYCOPY(dummy68abc1d3_data_ae_2487)}
    {db tmp999[2]={2,247};MYCOPY(dummy68abc1d3_data_b0_2488)}
    {db tmp999[2]={3,247};MYCOPY(dummy68abc1d3_data_b2_2489)}
    {db tmp999[2]={4,248};MYCOPY(dummy68abc1d3_data_b4_2490)}
    {db tmp999[2]={5,248};MYCOPY(dummy68abc1d3_data_b6_2491)}
    {db tmp999[2]={6,248};MYCOPY(dummy68abc1d3_data_b8_2492)}
    {db tmp999[2]={7,249};MYCOPY(dummy68abc1d3_data_ba_2493)}
    {db tmp999[2]={8,250};MYCOPY(dummy68abc1d3_data_bc_2494)}
    {db tmp999[2]={9,251};MYCOPY(dummy68abc1d3_data_be_2495)}
    {db tmp999[2]={10,252};MYCOPY(dummy68abc1d3_data_c0_2496)}
    {db tmp999[2]={10,253};MYCOPY(dummy68abc1d3_data_c2_2497)}
    {db tmp999[2]={11,254};MYCOPY(dummy68abc1d3_data_c4_2498)}
    {db tmp999[2]={11,255};MYCOPY(dummy68abc1d3_data_c6_2499)}
    {db tmp999[2]={11,0};MYCOPY(dummy68abc1d3_data_c8_2500)}
    {db tmp999[2]={11,1};MYCOPY(dummy68abc1d3_data_ca_2501)}
    {db tmp999[2]={11,2};MYCOPY(dummy68abc1d3_data_cc_2502)}
    {db tmp999[2]={10,3};MYCOPY(dummy68abc1d3_data_ce_2503)}
    {db tmp999[2]={10,4};MYCOPY(dummy68abc1d3_data_d0_2504)}
    {db tmp999[2]={9,5};MYCOPY(dummy68abc1d3_data_d2_2505)}
    {db tmp999[2]={8,6};MYCOPY(dummy68abc1d3_data_d4_2506)}
    {db tmp999[2]={7,7};MYCOPY(dummy68abc1d3_data_d6_2507)}
    {db tmp999[2]={6,8};MYCOPY(dummy68abc1d3_data_d8_2508)}
    {db tmp999[2]={5,8};MYCOPY(dummy68abc1d3_data_da_2509)}
    {db tmp999[2]={4,8};MYCOPY(dummy68abc1d3_data_dc_2510)}
    {db tmp999[2]={3,9};MYCOPY(dummy68abc1d3_data_de_2511)}
    {db tmp999[2]={2,9};MYCOPY(dummy68abc1d3_data_e0_2512)}
    {db tmp999[2]={1,9};MYCOPY(dummy68abc1d3_data_e2_2513)}
    {db tmp999[2]={0,9};MYCOPY(dummy68abc1d3_data_e4_2514)}
    {db tmp999[2]={255,9};MYCOPY(dummy68abc1d3_data_e6_2515)}
    {db tmp999[2]={254,9};MYCOPY(dummy68abc1d3_data_e8_2516)}
    {db tmp999[2]={253,9};MYCOPY(dummy68abc1d3_data_ea_2517)}
    {db tmp999[2]={252,8};MYCOPY(dummy68abc1d3_data_ec_2518)}
    {db tmp999[2]={251,8};MYCOPY(dummy68abc1d3_data_ee_2519)}
    {db tmp999[2]={250,8};MYCOPY(dummy68abc1d3_data_f0_2520)}
    {db tmp999[2]={249,7};MYCOPY(dummy68abc1d3_data_f2_2521)}
    {db tmp999[2]={248,6};MYCOPY(dummy68abc1d3_data_f4_2522)}
    {db tmp999[2]={247,5};MYCOPY(dummy68abc1d3_data_f6_2523)}
    {db tmp999[2]={246,4};MYCOPY(dummy68abc1d3_data_f8_2524)}
    {db tmp999[2]={246,3};MYCOPY(dummy68abc1d3_data_fa_2525)}
    {db tmp999[2]={245,2};MYCOPY(dummy68abc1d3_data_fc_2526)}
    {db tmp999[2]={245,1};MYCOPY(dummy68abc1d3_data_fe_2527)}
    {db tmp999[2]={245,0};MYCOPY(dummy68abc1d3_data_100_2528)}
    {db tmp999[2]={245,255};MYCOPY(dummy68abc1d3_data_102_2529)}
    {db tmp999[2]={245,254};MYCOPY(dummy68abc1d3_data_104_2530)}
    {db tmp999[2]={246,253};MYCOPY(dummy68abc1d3_data_106_2531)}
    {db tmp999[2]={246,252};MYCOPY(dummy68abc1d3_data_108_2532)}
    {db tmp999[2]={247,251};MYCOPY(dummy68abc1d3_data_10a_2533)}
    {db tmp999[2]={248,250};MYCOPY(dummy68abc1d3_data_10c_2534)}
    {db tmp999[2]={249,249};MYCOPY(dummy68abc1d3_data_10e_2535)}
    {db tmp999[2]={250,248};MYCOPY(dummy68abc1d3_data_110_2536)}
    {db tmp999[2]={251,248};MYCOPY(dummy68abc1d3_data_112_2537)}
    {db tmp999[2]={252,248};MYCOPY(dummy68abc1d3_data_114_2538)}
    {db tmp999[2]={253,247};MYCOPY(dummy68abc1d3_data_116_2539)}
    {db tmp999[2]={254,247};MYCOPY(dummy68abc1d3_data_118_2540)}
    {db tmp999[2]={255,247};MYCOPY(dummy68abc1d3_data_11a_2541)}
    {db tmp999[2]={0,248};MYCOPY(dummy68abc1d3_data_11c_2543)}
    {db tmp999[2]={1,248};MYCOPY(dummy68abc1d3_data_11e_2544)}
    {db tmp999[2]={2,248};MYCOPY(dummy68abc1d3_data_120_2545)}
    {db tmp999[2]={3,248};MYCOPY(dummy68abc1d3_data_122_2546)}
    {db tmp999[2]={4,249};MYCOPY(dummy68abc1d3_data_124_2547)}
    {db tmp999[2]={5,249};MYCOPY(dummy68abc1d3_data_126_2548)}
    {db tmp999[2]={6,249};MYCOPY(dummy68abc1d3_data_128_2549)}
    {db tmp999[2]={7,250};MYCOPY(dummy68abc1d3_data_12a_2550)}
    {db tmp999[2]={8,251};MYCOPY(dummy68abc1d3_data_12c_2551)}
    {db tmp999[2]={9,252};MYCOPY(dummy68abc1d3_data_12e_2552)}
    {db tmp999[2]={9,253};MYCOPY(dummy68abc1d3_data_130_2553)}
    {db tmp999[2]={10,254};MYCOPY(dummy68abc1d3_data_132_2554)}
    {db tmp999[2]={10,255};MYCOPY(dummy68abc1d3_data_134_2555)}
    {db tmp999[2]={10,0};MYCOPY(dummy68abc1d3_data_136_2556)}
    {db tmp999[2]={10,1};MYCOPY(dummy68abc1d3_data_138_2557)}
    {db tmp999[2]={10,2};MYCOPY(dummy68abc1d3_data_13a_2558)}
    {db tmp999[2]={9,3};MYCOPY(dummy68abc1d3_data_13c_2559)}
    {db tmp999[2]={9,4};MYCOPY(dummy68abc1d3_data_13e_2560)}
    {db tmp999[2]={8,5};MYCOPY(dummy68abc1d3_data_140_2561)}
    {db tmp999[2]={7,6};MYCOPY(dummy68abc1d3_data_142_2562)}
    {db tmp999[2]={6,7};MYCOPY(dummy68abc1d3_data_144_2563)}
    {db tmp999[2]={5,7};MYCOPY(dummy68abc1d3_data_146_2564)}
    {db tmp999[2]={4,7};MYCOPY(dummy68abc1d3_data_148_2565)}
    {db tmp999[2]={3,8};MYCOPY(dummy68abc1d3_data_14a_2566)}
    {db tmp999[2]={2,8};MYCOPY(dummy68abc1d3_data_14c_2567)}
    {db tmp999[2]={1,8};MYCOPY(dummy68abc1d3_data_14e_2568)}
    {db tmp999[2]={0,8};MYCOPY(dummy68abc1d3_data_150_2569)}
    {db tmp999[2]={255,8};MYCOPY(dummy68abc1d3_data_152_2570)}
    {db tmp999[2]={254,8};MYCOPY(dummy68abc1d3_data_154_2571)}
    {db tmp999[2]={253,8};MYCOPY(dummy68abc1d3_data_156_2572)}
    {db tmp999[2]={252,7};MYCOPY(dummy68abc1d3_data_158_2573)}
    {db tmp999[2]={251,7};MYCOPY(dummy68abc1d3_data_15a_2574)}
    {db tmp999[2]={250,7};MYCOPY(dummy68abc1d3_data_15c_2575)}
    {db tmp999[2]={249,6};MYCOPY(dummy68abc1d3_data_15e_2576)}
    {db tmp999[2]={248,5};MYCOPY(dummy68abc1d3_data_160_2577)}
    {db tmp999[2]={247,4};MYCOPY(dummy68abc1d3_data_162_2578)}
    {db tmp999[2]={247,3};MYCOPY(dummy68abc1d3_data_164_2579)}
    {db tmp999[2]={246,2};MYCOPY(dummy68abc1d3_data_166_2580)}
    {db tmp999[2]={246,1};MYCOPY(dummy68abc1d3_data_168_2581)}
    {db tmp999[2]={246,0};MYCOPY(dummy68abc1d3_data_16a_2582)}
    {db tmp999[2]={246,255};MYCOPY(dummy68abc1d3_data_16c_2583)}
    {db tmp999[2]={246,254};MYCOPY(dummy68abc1d3_data_16e_2584)}
    {db tmp999[2]={247,253};MYCOPY(dummy68abc1d3_data_170_2585)}
    {db tmp999[2]={247,252};MYCOPY(dummy68abc1d3_data_172_2586)}
    {db tmp999[2]={248,251};MYCOPY(dummy68abc1d3_data_174_2587)}
    {db tmp999[2]={249,250};MYCOPY(dummy68abc1d3_data_176_2588)}
    {db tmp999[2]={250,249};MYCOPY(dummy68abc1d3_data_178_2589)}
    {db tmp999[2]={251,249};MYCOPY(dummy68abc1d3_data_17a_2590)}
    {db tmp999[2]={252,249};MYCOPY(dummy68abc1d3_data_17c_2591)}
    {db tmp999[2]={253,248};MYCOPY(dummy68abc1d3_data_17e_2592)}
    {db tmp999[2]={254,248};MYCOPY(dummy68abc1d3_data_180_2593)}
    {db tmp999[2]={255,248};MYCOPY(dummy68abc1d3_data_182_2594)}
    {db tmp999[2]={0,246};MYCOPY(dummy68abc1d3_data_184_2596)}
    {db tmp999[2]={1,246};MYCOPY(dummy68abc1d3_data_186_2597)}
    {db tmp999[2]={2,246};MYCOPY(dummy68abc1d3_data_188_2598)}
    {db tmp999[2]={3,246};MYCOPY(dummy68abc1d3_data_18a_2599)}
    {db tmp999[2]={4,247};MYCOPY(dummy68abc1d3_data_18c_2600)}
    {db tmp999[2]={5,247};MYCOPY(dummy68abc1d3_data_18e_2601)}
    {db tmp999[2]={6,247};MYCOPY(dummy68abc1d3_data_190_2602)}
    {db tmp999[2]={7,248};MYCOPY(dummy68abc1d3_data_192_2603)}
    {db tmp999[2]={8,249};MYCOPY(dummy68abc1d3_data_194_2604)}
    {db tmp999[2]={9,250};MYCOPY(dummy68abc1d3_data_196_2605)}
    {db tmp999[2]={10,251};MYCOPY(dummy68abc1d3_data_198_2606)}
    {db tmp999[2]={11,252};MYCOPY(dummy68abc1d3_data_19a_2607)}
    {db tmp999[2]={11,253};MYCOPY(dummy68abc1d3_data_19c_2608)}
    {db tmp999[2]={12,254};MYCOPY(dummy68abc1d3_data_19e_2609)}
    {db tmp999[2]={12,255};MYCOPY(dummy68abc1d3_data_1a0_2610)}
    {db tmp999[2]={12,0};MYCOPY(dummy68abc1d3_data_1a2_2611)}
    {db tmp999[2]={12,1};MYCOPY(dummy68abc1d3_data_1a4_2612)}
    {db tmp999[2]={12,2};MYCOPY(dummy68abc1d3_data_1a6_2613)}
    {db tmp999[2]={11,3};MYCOPY(dummy68abc1d3_data_1a8_2614)}
    {db tmp999[2]={11,4};MYCOPY(dummy68abc1d3_data_1aa_2615)}
    {db tmp999[2]={10,5};MYCOPY(dummy68abc1d3_data_1ac_2616)}
    {db tmp999[2]={9,6};MYCOPY(dummy68abc1d3_data_1ae_2617)}
    {db tmp999[2]={8,7};MYCOPY(dummy68abc1d3_data_1b0_2618)}
    {db tmp999[2]={7,8};MYCOPY(dummy68abc1d3_data_1b2_2619)}
    {db tmp999[2]={6,9};MYCOPY(dummy68abc1d3_data_1b4_2620)}
    {db tmp999[2]={5,9};MYCOPY(dummy68abc1d3_data_1b6_2621)}
    {db tmp999[2]={4,9};MYCOPY(dummy68abc1d3_data_1b8_2622)}
    {db tmp999[2]={3,10};MYCOPY(dummy68abc1d3_data_1ba_2623)}
    {db tmp999[2]={2,10};MYCOPY(dummy68abc1d3_data_1bc_2624)}
    {db tmp999[2]={1,10};MYCOPY(dummy68abc1d3_data_1be_2625)}
    {db tmp999[2]={0,10};MYCOPY(dummy68abc1d3_data_1c0_2626)}
    {db tmp999[2]={255,10};MYCOPY(dummy68abc1d3_data_1c2_2627)}
    {db tmp999[2]={254,10};MYCOPY(dummy68abc1d3_data_1c4_2628)}
    {db tmp999[2]={253,10};MYCOPY(dummy68abc1d3_data_1c6_2629)}
    {db tmp999[2]={252,9};MYCOPY(dummy68abc1d3_data_1c8_2630)}
    {db tmp999[2]={251,9};MYCOPY(dummy68abc1d3_data_1ca_2631)}
    {db tmp999[2]={250,9};MYCOPY(dummy68abc1d3_data_1cc_2632)}
    {db tmp999[2]={249,8};MYCOPY(dummy68abc1d3_data_1ce_2633)}
    {db tmp999[2]={248,7};MYCOPY(dummy68abc1d3_data_1d0_2634)}
    {db tmp999[2]={247,6};MYCOPY(dummy68abc1d3_data_1d2_2635)}
    {db tmp999[2]={246,5};MYCOPY(dummy68abc1d3_data_1d4_2636)}
    {db tmp999[2]={245,4};MYCOPY(dummy68abc1d3_data_1d6_2637)}
    {db tmp999[2]={245,3};MYCOPY(dummy68abc1d3_data_1d8_2638)}
    {db tmp999[2]={244,2};MYCOPY(dummy68abc1d3_data_1da_2639)}
    {db tmp999[2]={244,1};MYCOPY(dummy68abc1d3_data_1dc_2640)}
    {db tmp999[2]={244,0};MYCOPY(dummy68abc1d3_data_1de_2641)}
    {db tmp999[2]={244,255};MYCOPY(dummy68abc1d3_data_1e0_2642)}
    {db tmp999[2]={244,254};MYCOPY(dummy68abc1d3_data_1e2_2643)}
    {db tmp999[2]={245,253};MYCOPY(dummy68abc1d3_data_1e4_2644)}
    {db tmp999[2]={245,252};MYCOPY(dummy68abc1d3_data_1e6_2645)}
    {db tmp999[2]={246,251};MYCOPY(dummy68abc1d3_data_1e8_2646)}
    {db tmp999[2]={247,250};MYCOPY(dummy68abc1d3_data_1ea_2647)}
    {db tmp999[2]={248,249};MYCOPY(dummy68abc1d3_data_1ec_2648)}
    {db tmp999[2]={249,248};MYCOPY(dummy68abc1d3_data_1ee_2649)}
    {db tmp999[2]={250,247};MYCOPY(dummy68abc1d3_data_1f0_2650)}
    {db tmp999[2]={251,247};MYCOPY(dummy68abc1d3_data_1f2_2651)}
    {db tmp999[2]={252,247};MYCOPY(dummy68abc1d3_data_1f4_2652)}
    {db tmp999[2]={253,246};MYCOPY(dummy68abc1d3_data_1f6_2653)}
    {db tmp999[2]={254,246};MYCOPY(dummy68abc1d3_data_1f8_2654)}
    {db tmp999[2]={255,246};MYCOPY(dummy68abc1d3_data_1fa_2655)}
    {db tmp999=3;MYCOPY(dummy68abc1d3_data_1fc_2663)}
    {db tmp999=5;MYCOPY(dummy68abc1d3_data_1fd_2664)}
    {db tmp999[10]={p_ext,22,0,0,0,0,170,0,col_hud,0};MYCOPY(dummy68abc1d3_data_1fe_2665)}
    {db tmp999[2]={15,4};MYCOPY(dummy68abc1d3_data_209_2670)}
    {db tmp999[2]={p_ext,16};MYCOPY(dummy68abc1d3_data_20b_2671)}
    {dw tmp999=hud_x_fs_org+36;MYCOPY(dummy68abc1d3_data_20d_2672)}
    {db tmp999[2]={p_ext,17};MYCOPY(dummy68abc1d3_data_20f_2673)}
    {dw tmp999=hud_y_fs_org-33;MYCOPY(dummy68abc1d3_data_211_2674)}
    {db tmp999[2]={p_ext,38};MYCOPY(dummy68abc1d3_data_213_2675)}
    {dw tmp999=m2c::near_offset_external(dispbaralt);MYCOPY(dummy68abc1d3_data_215_2676)}
    {dw tmp999=m2c::near_offset_external(dispbaralt);MYCOPY(dummy68abc1d3_data_217_2677)}
    {char tmp999='0';MYCOPY(dummy68abc1d3_data_219_2678)}
    {db tmp999[2]={15,0};MYCOPY(dummy68abc1d3_data_21a_2679)}
    {db tmp999[2]={15,4};MYCOPY(dummy68abc1d3_data_21d_2684)}
    {db tmp999[2]={p_ext,16};MYCOPY(dummy68abc1d3_data_21f_2685)}
    {dw tmp999=hud_x_fs_org+36;MYCOPY(dummy68abc1d3_data_221_2686)}
    {db tmp999[2]={p_ext,17};MYCOPY(dummy68abc1d3_data_223_2687)}
    {dw tmp999=hud_y_fs_org-33;MYCOPY(dummy68abc1d3_data_225_2688)}
    {char tmp999='R';MYCOPY(dummy68abc1d3_data_227_2689)}
    {db tmp999[2]={p_ext,38};MYCOPY(dummy68abc1d3_data_228_2690)}
    {dw tmp999=m2c::near_offset_external(trueradalt);MYCOPY(dummy68abc1d3_data_22a_2691)}
    {dw tmp999=m2c::near_offset_external(trueradalt);MYCOPY(dummy68abc1d3_data_22c_2692)}
    {db tmp999[2]={15,0};MYCOPY(dummy68abc1d3_data_22e_2693)}
    {db tmp999[2]={15,4};MYCOPY(dummy68abc1d3_data_231_2698)}
    {db tmp999[2]={p_ext,16};MYCOPY(dummy68abc1d3_data_233_2699)}
    {dw tmp999=hud_x_fs_org-56;MYCOPY(dummy68abc1d3_data_235_2700)}
    {db tmp999[2]={p_ext,17};MYCOPY(dummy68abc1d3_data_237_2701)}
    {dw tmp999=hud_y_fs_org-33;MYCOPY(dummy68abc1d3_data_239_2702)}
    {db tmp999[2]={p_ext,38};MYCOPY(dummy68abc1d3_data_23b_2703)}
    {dw tmp999=m2c::near_offset_external(vkts);MYCOPY(dummy68abc1d3_data_23d_2704)}
    {dw tmp999=m2c::near_offset_external(vkts);MYCOPY(dummy68abc1d3_data_23f_2705)}
    {db tmp999[2]={15,0};MYCOPY(dummy68abc1d3_data_241_2706)}
    {db tmp999[2]={15,19};MYCOPY(dummy68abc1d3_data_244_2711)}
    {db tmp999[2]={p_ext,16};MYCOPY(dummy68abc1d3_data_246_2712)}
    {dw tmp999=hud_x_fs_org-52;MYCOPY(dummy68abc1d3_data_248_2713)}
    {db tmp999[2]={p_ext,17};MYCOPY(dummy68abc1d3_data_24a_2714)}
    {dw tmp999=hud_y_fs_org+27;MYCOPY(dummy68abc1d3_data_24c_2715)}
    {char tmp999[4]={'G','U','N','S'};MYCOPY(dummy68abc1d3_data_24e_2716)}
    {db tmp999[2]={p_ext,16};MYCOPY(dummy68abc1d3_data_252_2717)}
    {dw tmp999=hud_x_fs_org-52;MYCOPY(dummy68abc1d3_data_254_2718)}
    {db tmp999[2]={p_ext,17};MYCOPY(dummy68abc1d3_data_256_2719)}
    {dw tmp999=hud_y_fs_org+33;MYCOPY(dummy68abc1d3_data_258_2720)}
    {char tmp999='x';MYCOPY(dummy68abc1d3_data_25a_2721)}
    {db tmp999[2]={p_ext,38};MYCOPY(dummy68abc1d3_data_25b_2722)}
    {dw tmp999=m2c::near_offset_external(cannons);MYCOPY(dummy68abc1d3_data_25d_2723)}
    {dw tmp999=m2c::near_offset_external(cannons);MYCOPY(dummy68abc1d3_data_25f_2724)}
    {db tmp999[2]={15,0};MYCOPY(dummy68abc1d3_data_261_2725)}
    {db tmp999[2]={15,18};MYCOPY(dummy68abc1d3_data_264_2730)}
    {db tmp999[2]={p_ext,16};MYCOPY(dummy68abc1d3_data_266_2731)}
    {dw tmp999=hud_x_fs_org-52;MYCOPY(dummy68abc1d3_data_268_2732)}
    {db tmp999[2]={p_ext,17};MYCOPY(dummy68abc1d3_data_26a_2733)}
    {dw tmp999=hud_y_fs_org+27;MYCOPY(dummy68abc1d3_data_26c_2734)}
    {char tmp999[4]={'A','I','M','9'};MYCOPY(dummy68abc1d3_data_26e_2735)}
    {db tmp999[2]={p_ext,16};MYCOPY(dummy68abc1d3_data_272_2736)}
    {dw tmp999=hud_x_fs_org-48;MYCOPY(dummy68abc1d3_data_274_2737)}
    {db tmp999[2]={p_ext,17};MYCOPY(dummy68abc1d3_data_276_2738)}
    {dw tmp999=hud_y_fs_org+33;MYCOPY(dummy68abc1d3_data_278_2739)}
    {char tmp999='x';MYCOPY(dummy68abc1d3_data_27a_2740)}
    {db tmp999[2]={p_ext,38};MYCOPY(dummy68abc1d3_data_27b_2741)}
    {dw tmp999=m2c::near_offset_external(extstores)+ext_sidewinder;MYCOPY(dummy68abc1d3_data_27d_2742)}
    {dw tmp999=m2c::near_offset_external(extstores)+ext_sidewinder;MYCOPY(dummy68abc1d3_data_27f_2743)}
    {db tmp999[2]={15,0};MYCOPY(dummy68abc1d3_data_281_2744)}
    {db tmp999[2]={15,18};MYCOPY(dummy68abc1d3_data_284_2749)}
    {db tmp999[2]={p_ext,16};MYCOPY(dummy68abc1d3_data_286_2750)}
    {dw tmp999=hud_x_fs_org-52;MYCOPY(dummy68abc1d3_data_288_2751)}
    {db tmp999[2]={p_ext,17};MYCOPY(dummy68abc1d3_data_28a_2752)}
    {dw tmp999=hud_y_fs_org+27;MYCOPY(dummy68abc1d3_data_28c_2753)}
    {char tmp999[4]={'S','K','Y','F'};MYCOPY(dummy68abc1d3_data_28e_2754)}
    {db tmp999[2]={p_ext,16};MYCOPY(dummy68abc1d3_data_292_2755)}
    {dw tmp999=hud_x_fs_org-48;MYCOPY(dummy68abc1d3_data_294_2756)}
    {db tmp999[2]={p_ext,17};MYCOPY(dummy68abc1d3_data_296_2757)}
    {dw tmp999=hud_y_fs_org+33;MYCOPY(dummy68abc1d3_data_298_2758)}
    {char tmp999='x';MYCOPY(dummy68abc1d3_data_29a_2759)}
    {db tmp999[2]={p_ext,38};MYCOPY(dummy68abc1d3_data_29b_2760)}
    {dw tmp999=m2c::near_offset_external(extstores)+ext_skyflash;MYCOPY(dummy68abc1d3_data_29d_2761)}
    {dw tmp999=m2c::near_offset_external(extstores)+ext_skyflash;MYCOPY(dummy68abc1d3_data_29f_2762)}
    {db tmp999[2]={15,0};MYCOPY(dummy68abc1d3_data_2a1_2763)}
    {db tmp999[2]={15,2};MYCOPY(dummy68abc1d3_data_2a4_2769)}
    {db tmp999[2]={p_ext,16};MYCOPY(dummy68abc1d3_data_2a6_2772)}
    {dw tmp999=hud_x_fs_org+44;MYCOPY(dummy68abc1d3_data_2a8_2773)}
    {db tmp999[2]={p_ext,17};MYCOPY(dummy68abc1d3_data_2aa_2774)}
    {dw tmp999=hud_y_fs_org+21;MYCOPY(dummy68abc1d3_data_2ac_2775)}
    {db tmp999[2]={p_ext,38};MYCOPY(dummy68abc1d3_data_2ae_2776)}
    {dw tmp999=m2c::near_offset_external(dispairtgtrng);MYCOPY(dummy68abc1d3_data_2b0_2777)}
    {dw tmp999=m2c::near_offset_external(dispairtgtrng);MYCOPY(dummy68abc1d3_data_2b2_2778)}
    {db tmp999[2]={p_ext,16};MYCOPY(dummy68abc1d3_data_2b4_2780)}
    {dw tmp999=hud_x_fs_org+44;MYCOPY(dummy68abc1d3_data_2b6_2781)}
    {db tmp999[2]={p_ext,17};MYCOPY(dummy68abc1d3_data_2b8_2782)}
    {dw tmp999=hud_y_fs_org+27;MYCOPY(dummy68abc1d3_data_2ba_2783)}
    {db tmp999[2]={p_ext,38};MYCOPY(dummy68abc1d3_data_2bc_2784)}
    {dw tmp999=m2c::near_offset_external(dispairtgtalt);MYCOPY(dummy68abc1d3_data_2be_2785)}
    {dw tmp999=m2c::near_offset_external(dispairtgtalt);MYCOPY(dummy68abc1d3_data_2c0_2786)}
    {db tmp999[2]={15,3};MYCOPY(dummy68abc1d3_data_2c2_2788)}
    {db tmp999[2]={p_ext,16};MYCOPY(dummy68abc1d3_data_2c4_2791)}
    {dw tmp999=hud_x_fs_org+40;MYCOPY(dummy68abc1d3_data_2c6_2792)}
    {db tmp999[2]={p_ext,17};MYCOPY(dummy68abc1d3_data_2c8_2793)}
    {dw tmp999=hud_y_fs_org+33;MYCOPY(dummy68abc1d3_data_2ca_2794)}
    {db tmp999[2]={p_ext,38};MYCOPY(dummy68abc1d3_data_2cc_2795)}
    {dw tmp999=m2c::near_offset_external(dispairtgtvel);MYCOPY(dummy68abc1d3_data_2ce_2796)}
    {dw tmp999=m2c::near_offset_external(dispairtgtvel);MYCOPY(dummy68abc1d3_data_2d0_2797)}
    {db tmp999[2]={p_ext,16};MYCOPY(dummy68abc1d3_data_2d2_2799)}
    {dw tmp999=hud_x_fs_org+40;MYCOPY(dummy68abc1d3_data_2d4_2800)}
    {db tmp999[2]={p_ext,17};MYCOPY(dummy68abc1d3_data_2d6_2801)}
    {dw tmp999=hud_y_fs_org+39;MYCOPY(dummy68abc1d3_data_2d8_2802)}
    {db tmp999[2]={p_ext,60};MYCOPY(dummy68abc1d3_data_2da_2803)}
    {dw tmp999=m2c::near_offset_external(dispairtgthdg);MYCOPY(dummy68abc1d3_data_2dc_2804)}
    {dw tmp999=m2c::near_offset_external(dispairtgthdg);MYCOPY(dummy68abc1d3_data_2de_2805)}
    {db tmp999[2]={15,0};MYCOPY(dummy68abc1d3_data_2e0_2807)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_hud2(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        
