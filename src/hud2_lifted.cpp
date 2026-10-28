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
              hudswitch2 = m2c::kglobal_hudnavigation2;
    dummy68abc1d3_data_2_2351 = m2c::kglobal_hudmanualbomb2;
    dummy68abc1d3_data_4_2352 = m2c::kglobal_hudlaydownbomb2;
    dummy68abc1d3_data_6_2353 = m2c::kglobal_hudloftbomb2;
    dummy68abc1d3_data_8_2354 = m2c::kglobal_hudlaserguided2;
    dummy68abc1d3_data_a_2355 = m2c::kglobal_hudjp2332;
    dummy68abc1d3_data_c_2356 = m2c::kglobal_hudalarmdir2;
    dummy68abc1d3_data_e_2357 = m2c::kglobal_hudalarmind2;
    dummy68abc1d3_data_10_2358 = m2c::kglobal_hudcannon2;
    dummy68abc1d3_data_12_2359 = m2c::kglobal_hudsidewinder2;
    dummy68abc1d3_data_14_2360 = m2c::kglobal_hudskyflash2;
    hudenabled2 = 1;
    machoption2 = 0;
    clip_above2 = 0;
    clip_below2 = 0;
    hdgyoff2 = 0;
    vp2 = viewport{112,53,96,88,0,7};
    markerx2 = 0;
    {db tmp999[2]={0};memcpy(&markery2,&tmp999,sizeof tmp999);}
    {db tmp999[2]={0,246};memcpy(&dummy68abc1d3_data_2c_2403,&tmp999,sizeof tmp999);}
    {db tmp999[2]={1,246};memcpy(&dummy68abc1d3_data_2e_2404,&tmp999,sizeof tmp999);}
    {db tmp999[2]={2,246};memcpy(&dummy68abc1d3_data_30_2405,&tmp999,sizeof tmp999);}
    {db tmp999[2]={3,246};memcpy(&dummy68abc1d3_data_32_2406,&tmp999,sizeof tmp999);}
    {db tmp999[2]={4,246};memcpy(&dummy68abc1d3_data_34_2407,&tmp999,sizeof tmp999);}
    {db tmp999[2]={5,247};memcpy(&dummy68abc1d3_data_36_2408,&tmp999,sizeof tmp999);}
    {db tmp999[2]={6,247};memcpy(&dummy68abc1d3_data_38_2409,&tmp999,sizeof tmp999);}
    {db tmp999[2]={7,248};memcpy(&dummy68abc1d3_data_3a_2410,&tmp999,sizeof tmp999);}
    {db tmp999[2]={8,248};memcpy(&dummy68abc1d3_data_3c_2411,&tmp999,sizeof tmp999);}
    {db tmp999[2]={9,249};memcpy(&dummy68abc1d3_data_3e_2412,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,250};memcpy(&dummy68abc1d3_data_40_2413,&tmp999,sizeof tmp999);}
    {db tmp999[2]={11,251};memcpy(&dummy68abc1d3_data_42_2414,&tmp999,sizeof tmp999);}
    {db tmp999[2]={12,252};memcpy(&dummy68abc1d3_data_44_2415,&tmp999,sizeof tmp999);}
    {db tmp999[2]={12,253};memcpy(&dummy68abc1d3_data_46_2416,&tmp999,sizeof tmp999);}
    {db tmp999[2]={13,254};memcpy(&dummy68abc1d3_data_48_2417,&tmp999,sizeof tmp999);}
    {db tmp999[2]={13,255};memcpy(&dummy68abc1d3_data_4a_2418,&tmp999,sizeof tmp999);}
    {db tmp999[2]={13,0};memcpy(&dummy68abc1d3_data_4c_2419,&tmp999,sizeof tmp999);}
    {db tmp999[2]={0,247};memcpy(&dummy68abc1d3_data_4e_2421,&tmp999,sizeof tmp999);}
    {db tmp999[2]={1,247};memcpy(&dummy68abc1d3_data_50_2422,&tmp999,sizeof tmp999);}
    {db tmp999[2]={2,247};memcpy(&dummy68abc1d3_data_52_2423,&tmp999,sizeof tmp999);}
    {db tmp999[2]={3,247};memcpy(&dummy68abc1d3_data_54_2424,&tmp999,sizeof tmp999);}
    {db tmp999[2]={4,247};memcpy(&dummy68abc1d3_data_56_2425,&tmp999,sizeof tmp999);}
    {db tmp999[2]={4,248};memcpy(&dummy68abc1d3_data_58_2426,&tmp999,sizeof tmp999);}
    {db tmp999[2]={5,248};memcpy(&dummy68abc1d3_data_5a_2427,&tmp999,sizeof tmp999);}
    {db tmp999[2]={6,249};memcpy(&dummy68abc1d3_data_5c_2428,&tmp999,sizeof tmp999);}
    {db tmp999[2]={7,249};memcpy(&dummy68abc1d3_data_5e_2429,&tmp999,sizeof tmp999);}
    {db tmp999[2]={8,250};memcpy(&dummy68abc1d3_data_60_2430,&tmp999,sizeof tmp999);}
    {db tmp999[2]={9,251};memcpy(&dummy68abc1d3_data_62_2431,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,252};memcpy(&dummy68abc1d3_data_64_2432,&tmp999,sizeof tmp999);}
    {db tmp999[2]={11,252};memcpy(&dummy68abc1d3_data_66_2433,&tmp999,sizeof tmp999);}
    {db tmp999[2]={11,253};memcpy(&dummy68abc1d3_data_68_2434,&tmp999,sizeof tmp999);}
    {db tmp999[2]={12,254};memcpy(&dummy68abc1d3_data_6a_2435,&tmp999,sizeof tmp999);}
    {db tmp999[2]={12,255};memcpy(&dummy68abc1d3_data_6c_2436,&tmp999,sizeof tmp999);}
    {db tmp999[2]={12,0};memcpy(&dummy68abc1d3_data_6e_2437,&tmp999,sizeof tmp999);}
    barxoff2 = 0;
    baryoff2 = 0;
    px02 = 0;
    py02 = 0;
    px1b = 0;
    py1b = 0;
    px2b = 0;
    py2b = 0;
    px3b = 0;
    py3b = 0;
    px4b = 0;
    py4b = 0;
    px5b = 0;
    py5b = 0;
    px6b = 0;
    py6b = 0;
    px7b = 0;
    py7b = 0;
    px8b = 0;
    py8b = 0;
    px9b = 0;
    py9b = 0;
    px10b = 0;
    py10b = 0;
    px11b = 0;
    py11b = 0;
    px12b = 0;
    py12b = 0;
    clockxorg2 = 0;
    {db tmp999[2]={0};memcpy(&clockyorg2,&tmp999,sizeof tmp999);}
    {db tmp999[2]={0,247};memcpy(&dummy68abc1d3_data_ac_2486,&tmp999,sizeof tmp999);}
    {db tmp999[2]={1,247};memcpy(&dummy68abc1d3_data_ae_2487,&tmp999,sizeof tmp999);}
    {db tmp999[2]={2,247};memcpy(&dummy68abc1d3_data_b0_2488,&tmp999,sizeof tmp999);}
    {db tmp999[2]={3,247};memcpy(&dummy68abc1d3_data_b2_2489,&tmp999,sizeof tmp999);}
    {db tmp999[2]={4,248};memcpy(&dummy68abc1d3_data_b4_2490,&tmp999,sizeof tmp999);}
    {db tmp999[2]={5,248};memcpy(&dummy68abc1d3_data_b6_2491,&tmp999,sizeof tmp999);}
    {db tmp999[2]={6,248};memcpy(&dummy68abc1d3_data_b8_2492,&tmp999,sizeof tmp999);}
    {db tmp999[2]={7,249};memcpy(&dummy68abc1d3_data_ba_2493,&tmp999,sizeof tmp999);}
    {db tmp999[2]={8,250};memcpy(&dummy68abc1d3_data_bc_2494,&tmp999,sizeof tmp999);}
    {db tmp999[2]={9,251};memcpy(&dummy68abc1d3_data_be_2495,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,252};memcpy(&dummy68abc1d3_data_c0_2496,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,253};memcpy(&dummy68abc1d3_data_c2_2497,&tmp999,sizeof tmp999);}
    {db tmp999[2]={11,254};memcpy(&dummy68abc1d3_data_c4_2498,&tmp999,sizeof tmp999);}
    {db tmp999[2]={11,255};memcpy(&dummy68abc1d3_data_c6_2499,&tmp999,sizeof tmp999);}
    {db tmp999[2]={11,0};memcpy(&dummy68abc1d3_data_c8_2500,&tmp999,sizeof tmp999);}
    {db tmp999[2]={11,1};memcpy(&dummy68abc1d3_data_ca_2501,&tmp999,sizeof tmp999);}
    {db tmp999[2]={11,2};memcpy(&dummy68abc1d3_data_cc_2502,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,3};memcpy(&dummy68abc1d3_data_ce_2503,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,4};memcpy(&dummy68abc1d3_data_d0_2504,&tmp999,sizeof tmp999);}
    {db tmp999[2]={9,5};memcpy(&dummy68abc1d3_data_d2_2505,&tmp999,sizeof tmp999);}
    {db tmp999[2]={8,6};memcpy(&dummy68abc1d3_data_d4_2506,&tmp999,sizeof tmp999);}
    {db tmp999[2]={7,7};memcpy(&dummy68abc1d3_data_d6_2507,&tmp999,sizeof tmp999);}
    {db tmp999[2]={6,8};memcpy(&dummy68abc1d3_data_d8_2508,&tmp999,sizeof tmp999);}
    {db tmp999[2]={5,8};memcpy(&dummy68abc1d3_data_da_2509,&tmp999,sizeof tmp999);}
    {db tmp999[2]={4,8};memcpy(&dummy68abc1d3_data_dc_2510,&tmp999,sizeof tmp999);}
    {db tmp999[2]={3,9};memcpy(&dummy68abc1d3_data_de_2511,&tmp999,sizeof tmp999);}
    {db tmp999[2]={2,9};memcpy(&dummy68abc1d3_data_e0_2512,&tmp999,sizeof tmp999);}
    {db tmp999[2]={1,9};memcpy(&dummy68abc1d3_data_e2_2513,&tmp999,sizeof tmp999);}
    {db tmp999[2]={0,9};memcpy(&dummy68abc1d3_data_e4_2514,&tmp999,sizeof tmp999);}
    {db tmp999[2]={255,9};memcpy(&dummy68abc1d3_data_e6_2515,&tmp999,sizeof tmp999);}
    {db tmp999[2]={254,9};memcpy(&dummy68abc1d3_data_e8_2516,&tmp999,sizeof tmp999);}
    {db tmp999[2]={253,9};memcpy(&dummy68abc1d3_data_ea_2517,&tmp999,sizeof tmp999);}
    {db tmp999[2]={252,8};memcpy(&dummy68abc1d3_data_ec_2518,&tmp999,sizeof tmp999);}
    {db tmp999[2]={251,8};memcpy(&dummy68abc1d3_data_ee_2519,&tmp999,sizeof tmp999);}
    {db tmp999[2]={250,8};memcpy(&dummy68abc1d3_data_f0_2520,&tmp999,sizeof tmp999);}
    {db tmp999[2]={249,7};memcpy(&dummy68abc1d3_data_f2_2521,&tmp999,sizeof tmp999);}
    {db tmp999[2]={248,6};memcpy(&dummy68abc1d3_data_f4_2522,&tmp999,sizeof tmp999);}
    {db tmp999[2]={247,5};memcpy(&dummy68abc1d3_data_f6_2523,&tmp999,sizeof tmp999);}
    {db tmp999[2]={246,4};memcpy(&dummy68abc1d3_data_f8_2524,&tmp999,sizeof tmp999);}
    {db tmp999[2]={246,3};memcpy(&dummy68abc1d3_data_fa_2525,&tmp999,sizeof tmp999);}
    {db tmp999[2]={245,2};memcpy(&dummy68abc1d3_data_fc_2526,&tmp999,sizeof tmp999);}
    {db tmp999[2]={245,1};memcpy(&dummy68abc1d3_data_fe_2527,&tmp999,sizeof tmp999);}
    {db tmp999[2]={245,0};memcpy(&dummy68abc1d3_data_100_2528,&tmp999,sizeof tmp999);}
    {db tmp999[2]={245,255};memcpy(&dummy68abc1d3_data_102_2529,&tmp999,sizeof tmp999);}
    {db tmp999[2]={245,254};memcpy(&dummy68abc1d3_data_104_2530,&tmp999,sizeof tmp999);}
    {db tmp999[2]={246,253};memcpy(&dummy68abc1d3_data_106_2531,&tmp999,sizeof tmp999);}
    {db tmp999[2]={246,252};memcpy(&dummy68abc1d3_data_108_2532,&tmp999,sizeof tmp999);}
    {db tmp999[2]={247,251};memcpy(&dummy68abc1d3_data_10a_2533,&tmp999,sizeof tmp999);}
    {db tmp999[2]={248,250};memcpy(&dummy68abc1d3_data_10c_2534,&tmp999,sizeof tmp999);}
    {db tmp999[2]={249,249};memcpy(&dummy68abc1d3_data_10e_2535,&tmp999,sizeof tmp999);}
    {db tmp999[2]={250,248};memcpy(&dummy68abc1d3_data_110_2536,&tmp999,sizeof tmp999);}
    {db tmp999[2]={251,248};memcpy(&dummy68abc1d3_data_112_2537,&tmp999,sizeof tmp999);}
    {db tmp999[2]={252,248};memcpy(&dummy68abc1d3_data_114_2538,&tmp999,sizeof tmp999);}
    {db tmp999[2]={253,247};memcpy(&dummy68abc1d3_data_116_2539,&tmp999,sizeof tmp999);}
    {db tmp999[2]={254,247};memcpy(&dummy68abc1d3_data_118_2540,&tmp999,sizeof tmp999);}
    {db tmp999[2]={255,247};memcpy(&dummy68abc1d3_data_11a_2541,&tmp999,sizeof tmp999);}
    {db tmp999[2]={0,248};memcpy(&dummy68abc1d3_data_11c_2543,&tmp999,sizeof tmp999);}
    {db tmp999[2]={1,248};memcpy(&dummy68abc1d3_data_11e_2544,&tmp999,sizeof tmp999);}
    {db tmp999[2]={2,248};memcpy(&dummy68abc1d3_data_120_2545,&tmp999,sizeof tmp999);}
    {db tmp999[2]={3,248};memcpy(&dummy68abc1d3_data_122_2546,&tmp999,sizeof tmp999);}
    {db tmp999[2]={4,249};memcpy(&dummy68abc1d3_data_124_2547,&tmp999,sizeof tmp999);}
    {db tmp999[2]={5,249};memcpy(&dummy68abc1d3_data_126_2548,&tmp999,sizeof tmp999);}
    {db tmp999[2]={6,249};memcpy(&dummy68abc1d3_data_128_2549,&tmp999,sizeof tmp999);}
    {db tmp999[2]={7,250};memcpy(&dummy68abc1d3_data_12a_2550,&tmp999,sizeof tmp999);}
    {db tmp999[2]={8,251};memcpy(&dummy68abc1d3_data_12c_2551,&tmp999,sizeof tmp999);}
    {db tmp999[2]={9,252};memcpy(&dummy68abc1d3_data_12e_2552,&tmp999,sizeof tmp999);}
    {db tmp999[2]={9,253};memcpy(&dummy68abc1d3_data_130_2553,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,254};memcpy(&dummy68abc1d3_data_132_2554,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,255};memcpy(&dummy68abc1d3_data_134_2555,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,0};memcpy(&dummy68abc1d3_data_136_2556,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,1};memcpy(&dummy68abc1d3_data_138_2557,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,2};memcpy(&dummy68abc1d3_data_13a_2558,&tmp999,sizeof tmp999);}
    {db tmp999[2]={9,3};memcpy(&dummy68abc1d3_data_13c_2559,&tmp999,sizeof tmp999);}
    {db tmp999[2]={9,4};memcpy(&dummy68abc1d3_data_13e_2560,&tmp999,sizeof tmp999);}
    {db tmp999[2]={8,5};memcpy(&dummy68abc1d3_data_140_2561,&tmp999,sizeof tmp999);}
    {db tmp999[2]={7,6};memcpy(&dummy68abc1d3_data_142_2562,&tmp999,sizeof tmp999);}
    {db tmp999[2]={6,7};memcpy(&dummy68abc1d3_data_144_2563,&tmp999,sizeof tmp999);}
    {db tmp999[2]={5,7};memcpy(&dummy68abc1d3_data_146_2564,&tmp999,sizeof tmp999);}
    {db tmp999[2]={4,7};memcpy(&dummy68abc1d3_data_148_2565,&tmp999,sizeof tmp999);}
    {db tmp999[2]={3,8};memcpy(&dummy68abc1d3_data_14a_2566,&tmp999,sizeof tmp999);}
    {db tmp999[2]={2,8};memcpy(&dummy68abc1d3_data_14c_2567,&tmp999,sizeof tmp999);}
    {db tmp999[2]={1,8};memcpy(&dummy68abc1d3_data_14e_2568,&tmp999,sizeof tmp999);}
    {db tmp999[2]={0,8};memcpy(&dummy68abc1d3_data_150_2569,&tmp999,sizeof tmp999);}
    {db tmp999[2]={255,8};memcpy(&dummy68abc1d3_data_152_2570,&tmp999,sizeof tmp999);}
    {db tmp999[2]={254,8};memcpy(&dummy68abc1d3_data_154_2571,&tmp999,sizeof tmp999);}
    {db tmp999[2]={253,8};memcpy(&dummy68abc1d3_data_156_2572,&tmp999,sizeof tmp999);}
    {db tmp999[2]={252,7};memcpy(&dummy68abc1d3_data_158_2573,&tmp999,sizeof tmp999);}
    {db tmp999[2]={251,7};memcpy(&dummy68abc1d3_data_15a_2574,&tmp999,sizeof tmp999);}
    {db tmp999[2]={250,7};memcpy(&dummy68abc1d3_data_15c_2575,&tmp999,sizeof tmp999);}
    {db tmp999[2]={249,6};memcpy(&dummy68abc1d3_data_15e_2576,&tmp999,sizeof tmp999);}
    {db tmp999[2]={248,5};memcpy(&dummy68abc1d3_data_160_2577,&tmp999,sizeof tmp999);}
    {db tmp999[2]={247,4};memcpy(&dummy68abc1d3_data_162_2578,&tmp999,sizeof tmp999);}
    {db tmp999[2]={247,3};memcpy(&dummy68abc1d3_data_164_2579,&tmp999,sizeof tmp999);}
    {db tmp999[2]={246,2};memcpy(&dummy68abc1d3_data_166_2580,&tmp999,sizeof tmp999);}
    {db tmp999[2]={246,1};memcpy(&dummy68abc1d3_data_168_2581,&tmp999,sizeof tmp999);}
    {db tmp999[2]={246,0};memcpy(&dummy68abc1d3_data_16a_2582,&tmp999,sizeof tmp999);}
    {db tmp999[2]={246,255};memcpy(&dummy68abc1d3_data_16c_2583,&tmp999,sizeof tmp999);}
    {db tmp999[2]={246,254};memcpy(&dummy68abc1d3_data_16e_2584,&tmp999,sizeof tmp999);}
    {db tmp999[2]={247,253};memcpy(&dummy68abc1d3_data_170_2585,&tmp999,sizeof tmp999);}
    {db tmp999[2]={247,252};memcpy(&dummy68abc1d3_data_172_2586,&tmp999,sizeof tmp999);}
    {db tmp999[2]={248,251};memcpy(&dummy68abc1d3_data_174_2587,&tmp999,sizeof tmp999);}
    {db tmp999[2]={249,250};memcpy(&dummy68abc1d3_data_176_2588,&tmp999,sizeof tmp999);}
    {db tmp999[2]={250,249};memcpy(&dummy68abc1d3_data_178_2589,&tmp999,sizeof tmp999);}
    {db tmp999[2]={251,249};memcpy(&dummy68abc1d3_data_17a_2590,&tmp999,sizeof tmp999);}
    {db tmp999[2]={252,249};memcpy(&dummy68abc1d3_data_17c_2591,&tmp999,sizeof tmp999);}
    {db tmp999[2]={253,248};memcpy(&dummy68abc1d3_data_17e_2592,&tmp999,sizeof tmp999);}
    {db tmp999[2]={254,248};memcpy(&dummy68abc1d3_data_180_2593,&tmp999,sizeof tmp999);}
    {db tmp999[2]={255,248};memcpy(&dummy68abc1d3_data_182_2594,&tmp999,sizeof tmp999);}
    {db tmp999[2]={0,246};memcpy(&dummy68abc1d3_data_184_2596,&tmp999,sizeof tmp999);}
    {db tmp999[2]={1,246};memcpy(&dummy68abc1d3_data_186_2597,&tmp999,sizeof tmp999);}
    {db tmp999[2]={2,246};memcpy(&dummy68abc1d3_data_188_2598,&tmp999,sizeof tmp999);}
    {db tmp999[2]={3,246};memcpy(&dummy68abc1d3_data_18a_2599,&tmp999,sizeof tmp999);}
    {db tmp999[2]={4,247};memcpy(&dummy68abc1d3_data_18c_2600,&tmp999,sizeof tmp999);}
    {db tmp999[2]={5,247};memcpy(&dummy68abc1d3_data_18e_2601,&tmp999,sizeof tmp999);}
    {db tmp999[2]={6,247};memcpy(&dummy68abc1d3_data_190_2602,&tmp999,sizeof tmp999);}
    {db tmp999[2]={7,248};memcpy(&dummy68abc1d3_data_192_2603,&tmp999,sizeof tmp999);}
    {db tmp999[2]={8,249};memcpy(&dummy68abc1d3_data_194_2604,&tmp999,sizeof tmp999);}
    {db tmp999[2]={9,250};memcpy(&dummy68abc1d3_data_196_2605,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,251};memcpy(&dummy68abc1d3_data_198_2606,&tmp999,sizeof tmp999);}
    {db tmp999[2]={11,252};memcpy(&dummy68abc1d3_data_19a_2607,&tmp999,sizeof tmp999);}
    {db tmp999[2]={11,253};memcpy(&dummy68abc1d3_data_19c_2608,&tmp999,sizeof tmp999);}
    {db tmp999[2]={12,254};memcpy(&dummy68abc1d3_data_19e_2609,&tmp999,sizeof tmp999);}
    {db tmp999[2]={12,255};memcpy(&dummy68abc1d3_data_1a0_2610,&tmp999,sizeof tmp999);}
    {db tmp999[2]={12,0};memcpy(&dummy68abc1d3_data_1a2_2611,&tmp999,sizeof tmp999);}
    {db tmp999[2]={12,1};memcpy(&dummy68abc1d3_data_1a4_2612,&tmp999,sizeof tmp999);}
    {db tmp999[2]={12,2};memcpy(&dummy68abc1d3_data_1a6_2613,&tmp999,sizeof tmp999);}
    {db tmp999[2]={11,3};memcpy(&dummy68abc1d3_data_1a8_2614,&tmp999,sizeof tmp999);}
    {db tmp999[2]={11,4};memcpy(&dummy68abc1d3_data_1aa_2615,&tmp999,sizeof tmp999);}
    {db tmp999[2]={10,5};memcpy(&dummy68abc1d3_data_1ac_2616,&tmp999,sizeof tmp999);}
    {db tmp999[2]={9,6};memcpy(&dummy68abc1d3_data_1ae_2617,&tmp999,sizeof tmp999);}
    {db tmp999[2]={8,7};memcpy(&dummy68abc1d3_data_1b0_2618,&tmp999,sizeof tmp999);}
    {db tmp999[2]={7,8};memcpy(&dummy68abc1d3_data_1b2_2619,&tmp999,sizeof tmp999);}
    {db tmp999[2]={6,9};memcpy(&dummy68abc1d3_data_1b4_2620,&tmp999,sizeof tmp999);}
    {db tmp999[2]={5,9};memcpy(&dummy68abc1d3_data_1b6_2621,&tmp999,sizeof tmp999);}
    {db tmp999[2]={4,9};memcpy(&dummy68abc1d3_data_1b8_2622,&tmp999,sizeof tmp999);}
    {db tmp999[2]={3,10};memcpy(&dummy68abc1d3_data_1ba_2623,&tmp999,sizeof tmp999);}
    {db tmp999[2]={2,10};memcpy(&dummy68abc1d3_data_1bc_2624,&tmp999,sizeof tmp999);}
    {db tmp999[2]={1,10};memcpy(&dummy68abc1d3_data_1be_2625,&tmp999,sizeof tmp999);}
    {db tmp999[2]={0,10};memcpy(&dummy68abc1d3_data_1c0_2626,&tmp999,sizeof tmp999);}
    {db tmp999[2]={255,10};memcpy(&dummy68abc1d3_data_1c2_2627,&tmp999,sizeof tmp999);}
    {db tmp999[2]={254,10};memcpy(&dummy68abc1d3_data_1c4_2628,&tmp999,sizeof tmp999);}
    {db tmp999[2]={253,10};memcpy(&dummy68abc1d3_data_1c6_2629,&tmp999,sizeof tmp999);}
    {db tmp999[2]={252,9};memcpy(&dummy68abc1d3_data_1c8_2630,&tmp999,sizeof tmp999);}
    {db tmp999[2]={251,9};memcpy(&dummy68abc1d3_data_1ca_2631,&tmp999,sizeof tmp999);}
    {db tmp999[2]={250,9};memcpy(&dummy68abc1d3_data_1cc_2632,&tmp999,sizeof tmp999);}
    {db tmp999[2]={249,8};memcpy(&dummy68abc1d3_data_1ce_2633,&tmp999,sizeof tmp999);}
    {db tmp999[2]={248,7};memcpy(&dummy68abc1d3_data_1d0_2634,&tmp999,sizeof tmp999);}
    {db tmp999[2]={247,6};memcpy(&dummy68abc1d3_data_1d2_2635,&tmp999,sizeof tmp999);}
    {db tmp999[2]={246,5};memcpy(&dummy68abc1d3_data_1d4_2636,&tmp999,sizeof tmp999);}
    {db tmp999[2]={245,4};memcpy(&dummy68abc1d3_data_1d6_2637,&tmp999,sizeof tmp999);}
    {db tmp999[2]={245,3};memcpy(&dummy68abc1d3_data_1d8_2638,&tmp999,sizeof tmp999);}
    {db tmp999[2]={244,2};memcpy(&dummy68abc1d3_data_1da_2639,&tmp999,sizeof tmp999);}
    {db tmp999[2]={244,1};memcpy(&dummy68abc1d3_data_1dc_2640,&tmp999,sizeof tmp999);}
    {db tmp999[2]={244,0};memcpy(&dummy68abc1d3_data_1de_2641,&tmp999,sizeof tmp999);}
    {db tmp999[2]={244,255};memcpy(&dummy68abc1d3_data_1e0_2642,&tmp999,sizeof tmp999);}
    {db tmp999[2]={244,254};memcpy(&dummy68abc1d3_data_1e2_2643,&tmp999,sizeof tmp999);}
    {db tmp999[2]={245,253};memcpy(&dummy68abc1d3_data_1e4_2644,&tmp999,sizeof tmp999);}
    {db tmp999[2]={245,252};memcpy(&dummy68abc1d3_data_1e6_2645,&tmp999,sizeof tmp999);}
    {db tmp999[2]={246,251};memcpy(&dummy68abc1d3_data_1e8_2646,&tmp999,sizeof tmp999);}
    {db tmp999[2]={247,250};memcpy(&dummy68abc1d3_data_1ea_2647,&tmp999,sizeof tmp999);}
    {db tmp999[2]={248,249};memcpy(&dummy68abc1d3_data_1ec_2648,&tmp999,sizeof tmp999);}
    {db tmp999[2]={249,248};memcpy(&dummy68abc1d3_data_1ee_2649,&tmp999,sizeof tmp999);}
    {db tmp999[2]={250,247};memcpy(&dummy68abc1d3_data_1f0_2650,&tmp999,sizeof tmp999);}
    {db tmp999[2]={251,247};memcpy(&dummy68abc1d3_data_1f2_2651,&tmp999,sizeof tmp999);}
    {db tmp999[2]={252,247};memcpy(&dummy68abc1d3_data_1f4_2652,&tmp999,sizeof tmp999);}
    {db tmp999[2]={253,246};memcpy(&dummy68abc1d3_data_1f6_2653,&tmp999,sizeof tmp999);}
    {db tmp999[2]={254,246};memcpy(&dummy68abc1d3_data_1f8_2654,&tmp999,sizeof tmp999);}
    {db tmp999[2]={255,246};memcpy(&dummy68abc1d3_data_1fa_2655,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_1fc_2663 = 3;
    dummy68abc1d3_data_1fd_2664 = 5;
    {db tmp999[10]={p_ext,22,0,0,0,0,170,0,col_hud,0};memcpy(&dummy68abc1d3_data_1fe_2665,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,4};memcpy(&dummy68abc1d3_data_209_2670,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,16};memcpy(&dummy68abc1d3_data_20b_2671,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_20d_2672 = hud_x_fs_org+36;
    {db tmp999[2]={p_ext,17};memcpy(&dummy68abc1d3_data_20f_2673,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_211_2674 = hud_y_fs_org-33;
    {db tmp999[2]={p_ext,38};memcpy(&dummy68abc1d3_data_213_2675,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_215_2676 = m2c::near_offset_external(dispbaralt);
    dummy68abc1d3_data_217_2677 = m2c::near_offset_external(dispbaralt);
    dummy68abc1d3_data_219_2678 = '0';
    {db tmp999[2]={15,0};memcpy(&dummy68abc1d3_data_21a_2679,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,4};memcpy(&dummy68abc1d3_data_21d_2684,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,16};memcpy(&dummy68abc1d3_data_21f_2685,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_221_2686 = hud_x_fs_org+36;
    {db tmp999[2]={p_ext,17};memcpy(&dummy68abc1d3_data_223_2687,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_225_2688 = hud_y_fs_org-33;
    dummy68abc1d3_data_227_2689 = 'R';
    {db tmp999[2]={p_ext,38};memcpy(&dummy68abc1d3_data_228_2690,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_22a_2691 = m2c::near_offset_external(trueradalt);
    dummy68abc1d3_data_22c_2692 = m2c::near_offset_external(trueradalt);
    {db tmp999[2]={15,0};memcpy(&dummy68abc1d3_data_22e_2693,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,4};memcpy(&dummy68abc1d3_data_231_2698,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,16};memcpy(&dummy68abc1d3_data_233_2699,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_235_2700 = hud_x_fs_org-56;
    {db tmp999[2]={p_ext,17};memcpy(&dummy68abc1d3_data_237_2701,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_239_2702 = hud_y_fs_org-33;
    {db tmp999[2]={p_ext,38};memcpy(&dummy68abc1d3_data_23b_2703,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_23d_2704 = m2c::near_offset_external(vkts);
    dummy68abc1d3_data_23f_2705 = m2c::near_offset_external(vkts);
    {db tmp999[2]={15,0};memcpy(&dummy68abc1d3_data_241_2706,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,19};memcpy(&dummy68abc1d3_data_244_2711,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,16};memcpy(&dummy68abc1d3_data_246_2712,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_248_2713 = hud_x_fs_org-52;
    {db tmp999[2]={p_ext,17};memcpy(&dummy68abc1d3_data_24a_2714,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_24c_2715 = hud_y_fs_org+27;
    {char tmp999[4]={'G','U','N','S'};memcpy(&dummy68abc1d3_data_24e_2716,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,16};memcpy(&dummy68abc1d3_data_252_2717,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_254_2718 = hud_x_fs_org-52;
    {db tmp999[2]={p_ext,17};memcpy(&dummy68abc1d3_data_256_2719,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_258_2720 = hud_y_fs_org+33;
    dummy68abc1d3_data_25a_2721 = 'x';
    {db tmp999[2]={p_ext,38};memcpy(&dummy68abc1d3_data_25b_2722,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_25d_2723 = m2c::near_offset_external(cannons);
    dummy68abc1d3_data_25f_2724 = m2c::near_offset_external(cannons);
    {db tmp999[2]={15,0};memcpy(&dummy68abc1d3_data_261_2725,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,18};memcpy(&dummy68abc1d3_data_264_2730,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,16};memcpy(&dummy68abc1d3_data_266_2731,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_268_2732 = hud_x_fs_org-52;
    {db tmp999[2]={p_ext,17};memcpy(&dummy68abc1d3_data_26a_2733,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_26c_2734 = hud_y_fs_org+27;
    {char tmp999[4]={'A','I','M','9'};memcpy(&dummy68abc1d3_data_26e_2735,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,16};memcpy(&dummy68abc1d3_data_272_2736,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_274_2737 = hud_x_fs_org-48;
    {db tmp999[2]={p_ext,17};memcpy(&dummy68abc1d3_data_276_2738,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_278_2739 = hud_y_fs_org+33;
    dummy68abc1d3_data_27a_2740 = 'x';
    {db tmp999[2]={p_ext,38};memcpy(&dummy68abc1d3_data_27b_2741,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_27d_2742 = m2c::near_offset_external(extstores)+ext_sidewinder;
    dummy68abc1d3_data_27f_2743 = m2c::near_offset_external(extstores)+ext_sidewinder;
    {db tmp999[2]={15,0};memcpy(&dummy68abc1d3_data_281_2744,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,18};memcpy(&dummy68abc1d3_data_284_2749,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,16};memcpy(&dummy68abc1d3_data_286_2750,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_288_2751 = hud_x_fs_org-52;
    {db tmp999[2]={p_ext,17};memcpy(&dummy68abc1d3_data_28a_2752,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_28c_2753 = hud_y_fs_org+27;
    {char tmp999[4]={'S','K','Y','F'};memcpy(&dummy68abc1d3_data_28e_2754,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,16};memcpy(&dummy68abc1d3_data_292_2755,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_294_2756 = hud_x_fs_org-48;
    {db tmp999[2]={p_ext,17};memcpy(&dummy68abc1d3_data_296_2757,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_298_2758 = hud_y_fs_org+33;
    dummy68abc1d3_data_29a_2759 = 'x';
    {db tmp999[2]={p_ext,38};memcpy(&dummy68abc1d3_data_29b_2760,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_29d_2761 = m2c::near_offset_external(extstores)+ext_skyflash;
    dummy68abc1d3_data_29f_2762 = m2c::near_offset_external(extstores)+ext_skyflash;
    {db tmp999[2]={15,0};memcpy(&dummy68abc1d3_data_2a1_2763,&tmp999,sizeof tmp999);}
    {db tmp999[2]={15,2};memcpy(&dummy68abc1d3_data_2a4_2769,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,16};memcpy(&dummy68abc1d3_data_2a6_2772,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_2a8_2773 = hud_x_fs_org+44;
    {db tmp999[2]={p_ext,17};memcpy(&dummy68abc1d3_data_2aa_2774,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_2ac_2775 = hud_y_fs_org+21;
    {db tmp999[2]={p_ext,38};memcpy(&dummy68abc1d3_data_2ae_2776,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_2b0_2777 = m2c::near_offset_external(dispairtgtrng);
    dummy68abc1d3_data_2b2_2778 = m2c::near_offset_external(dispairtgtrng);
    {db tmp999[2]={p_ext,16};memcpy(&dummy68abc1d3_data_2b4_2780,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_2b6_2781 = hud_x_fs_org+44;
    {db tmp999[2]={p_ext,17};memcpy(&dummy68abc1d3_data_2b8_2782,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_2ba_2783 = hud_y_fs_org+27;
    {db tmp999[2]={p_ext,38};memcpy(&dummy68abc1d3_data_2bc_2784,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_2be_2785 = m2c::near_offset_external(dispairtgtalt);
    dummy68abc1d3_data_2c0_2786 = m2c::near_offset_external(dispairtgtalt);
    {db tmp999[2]={15,3};memcpy(&dummy68abc1d3_data_2c2_2788,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,16};memcpy(&dummy68abc1d3_data_2c4_2791,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_2c6_2792 = hud_x_fs_org+40;
    {db tmp999[2]={p_ext,17};memcpy(&dummy68abc1d3_data_2c8_2793,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_2ca_2794 = hud_y_fs_org+33;
    {db tmp999[2]={p_ext,38};memcpy(&dummy68abc1d3_data_2cc_2795,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_2ce_2796 = m2c::near_offset_external(dispairtgtvel);
    dummy68abc1d3_data_2d0_2797 = m2c::near_offset_external(dispairtgtvel);
    {db tmp999[2]={p_ext,16};memcpy(&dummy68abc1d3_data_2d2_2799,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_2d4_2800 = hud_x_fs_org+40;
    {db tmp999[2]={p_ext,17};memcpy(&dummy68abc1d3_data_2d6_2801,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_2d8_2802 = hud_y_fs_org+39;
    {db tmp999[2]={p_ext,60};memcpy(&dummy68abc1d3_data_2da_2803,&tmp999,sizeof tmp999);}
    dummy68abc1d3_data_2dc_2804 = m2c::near_offset_external(dispairtgthdg);
    dummy68abc1d3_data_2de_2805 = m2c::near_offset_external(dispairtgthdg);
    {db tmp999[2]={15,0};memcpy(&dummy68abc1d3_data_2e0_2807,&tmp999,sizeof tmp999);}

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
        
