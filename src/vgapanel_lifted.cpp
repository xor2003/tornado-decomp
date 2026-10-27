/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "vgapanel.h"

	
 __attribute__((weak)) bool copypreviewpan(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcopypreviewpan, _state);}

 __attribute__((weak)) bool drawpreviewpan(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawpreviewpan, _state);}

 __attribute__((weak)) bool drawradarnoise(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawradarnoise, _state);}

 __attribute__((weak)) bool interleavedata(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinterleavedata, _state);}

 __attribute__((weak)) bool loadlookdownpan(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kloadlookdownpan, _state);}

 __attribute__((weak)) bool loadmappan(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kloadmappan, _state);}

 __attribute__((weak)) bool loadnavigpan(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kloadnavigpan, _state);}

 __attribute__((weak)) bool loadnsidepan(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kloadnsidepan, _state);}

 __attribute__((weak)) bool loadpilotpan(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kloadpilotpan, _state);}

 __attribute__((weak)) bool loadpsidepan(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kloadpsidepan, _state);}

 __attribute__((weak)) bool mextrasprite(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmextrasprite, _state);}

 __attribute__((weak)) bool qextrasprite(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kqextrasprite, _state);}

 __attribute__((weak)) bool retrievedata(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kretrievedata, _state);}

 __attribute__((weak)) bool storeworkscreen(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kstoreworkscreen, _state);}

 __attribute__((weak)) bool vga_brackets(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_brackets, _state);}

 __attribute__((weak)) bool vga_clrnavigpan(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_clrnavigpan, _state);}

 __attribute__((weak)) bool vga_clrpilotpan(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_clrpilotpan, _state);}

 __attribute__((weak)) bool vga_drwnavigpan(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_drwnavigpan, _state);}

 __attribute__((weak)) bool vga_drwnavigpanbrief(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_drwnavigpanbrief, _state);}

 __attribute__((weak)) bool vga_drwpilotpan(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_drwpilotpan, _state);}

 __attribute__((weak)) bool vga_initpanels(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_initpanels, _state);}

 __attribute__((weak)) bool vga_ironwork(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_ironwork, _state);}

 __attribute__((weak)) bool vga_loadpanel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvga_loadpanel, _state);}

 __attribute__((weak)) bool videoblitter(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvideoblitter, _state);}

 static bool __m2c_macrolocal_103_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_103_skip, _state);}

 static bool __m2c_macrolocal_104_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_104_skip, _state);}

 static bool __m2c_macrolocal_1_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_1_skip, _state);}

 static bool __m2c_macrolocal_2_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_2_skip, _state);}

 static bool __m2c_macrolocal_92_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_92_skip, _state);}

 static bool __m2c_macrolocal_97_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_97_skip, _state);}

 static bool appprogok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kappprogok, _state);}

 static bool briskok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbriskok, _state);}

 static bool checkfordamageoroff(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcheckfordamageoroff, _state);}

 static bool checkifradaltok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcheckifradaltok, _state);}

 static bool dollyok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdollyok, _state);}

 static bool eng1ok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::keng1ok, _state);}

 static bool eng2ok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::keng2ok, _state);}

 static bool getouttahere(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgetouttahere, _state);}

 static bool initexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitexit, _state);}

 static bool jettisonok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kjettisonok, _state);}

 static bool latearmok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klatearmok, _state);}

 static bool mxlp1_1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmxlp1_1, _state);}

 static bool mxlp1_2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmxlp1_2, _state);}

 static bool mxlp2_1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmxlp2_1, _state);}

 static bool mxlp2_2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmxlp2_2, _state);}

 static bool mxlp3_1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmxlp3_1, _state);}

 static bool mxlp3_2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmxlp3_2, _state);}

 static bool mxlp4_1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmxlp4_1, _state);}

 static bool mxlp4_2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmxlp4_2, _state);}

 static bool navigattnok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knavigattnok, _state);}

 static bool navigautook(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knavigautook, _state);}

 static bool navigautookb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knavigautookb, _state);}

 static bool navigecmok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knavigecmok, _state);}

 static bool naviggearok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knaviggearok, _state);}

 static bool naviggearokb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knaviggearokb, _state);}

 static bool navigmfdok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knavigmfdok, _state);}

 static bool navigradarok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knavigradarok, _state);}

 static bool navigtab1ok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knavigtab1ok, _state);}

 static bool navigtab2ok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knavigtab2ok, _state);}

 static bool navigthrotok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knavigthrotok, _state);}

 static bool nightlatearm(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knightlatearm, _state);}

 static bool pilotattnok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpilotattnok, _state);}

 static bool pilotecmok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpilotecmok, _state);}

 static bool pilotgearok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpilotgearok, _state);}

 static bool pilotmfdok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpilotmfdok, _state);}

 static bool pilotradarok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpilotradarok, _state);}

 static bool redgearlamps1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kredgearlamps1, _state);}

 static bool redgearlamps2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kredgearlamps2, _state);}

 static bool redgearlamps2b(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kredgearlamps2b, _state);}

 static bool reflectdlp1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreflectdlp1, _state);}

 static bool reflectdlp2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreflectdlp2, _state);}

 static bool reflectdlp3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreflectdlp3, _state);}

 static bool reflectdlp4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreflectdlp4, _state);}

 static bool reflectwlp1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreflectwlp1, _state);}

 static bool reflectwlp2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreflectwlp2, _state);}

 static bool reflectwlp3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreflectwlp3, _state);}

 static bool reflectwlp4(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreflectwlp4, _state);}

 static bool repositionblitter(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krepositionblitter, _state);}

 static bool rvrsok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krvrsok, _state);}

 static bool rwrok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krwrok, _state);}

 static bool sinisini(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksinisini, _state);}

 static bool skipcheckfordamageofoff(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipcheckfordamageofoff, _state);}

 static bool skipcheckifradaltok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipcheckifradaltok, _state);}

 static bool skipjmpnavigthrotokk(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipjmpnavigthrotokk, _state);}

 static bool skipjmpnavigthrotokk2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipjmpnavigthrotokk2, _state);}

 static bool skipjmpnavigthrotokk3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipjmpnavigthrotokk3, _state);}

 static bool wbrakesok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kwbrakesok, _state);}

 static bool wpnstatusok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kwpnstatusok, _state);}

 static bool zxzx(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kzxzx, _state);}

	
	#include "vgapanel_default_seg_lifted.cpp"
#include "vgapanel_pancode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::k__m2c_macrolocal_103_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_104_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_1_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_2_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_92_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_97_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kappprogok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbriskok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcheckfordamageoroff: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcheckifradaltok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcopypreviewpan: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdollyok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawpreviewpan: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawradarnoise: 	if (!_group1(__disp, _state)) return false; break;
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
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::keng1ok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::keng2ok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgetouttahere: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinterleavedata: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kjettisonok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klatearmok: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_loadfile
        case m2c::kloadfile: 	if (!loadfile(0, _state)) return false; break;
#endif
        case m2c::kloadlookdownpan: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kloadmappan: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kloadnavigpan: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kloadnsidepan: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kloadpilotpan: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kloadpsidepan: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::kmextrasprite: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmxlp1_1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmxlp1_2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmxlp2_1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmxlp2_2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmxlp3_1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmxlp3_2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmxlp4_1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmxlp4_2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knavigattnok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knavigautook: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knavigautookb: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knavigecmok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knaviggearok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knaviggearokb: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knavigmfdok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knavigradarok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knavigtab1ok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knavigtab2ok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knavigthrotok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knightlatearm: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpilotattnok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpilotecmok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpilotgearok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpilotmfdok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpilotradarok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kqextrasprite: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kredgearlamps1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kredgearlamps2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kredgearlamps2b: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kreflectdlp1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kreflectdlp2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kreflectdlp3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kreflectdlp4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kreflectwlp1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kreflectwlp2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kreflectwlp3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kreflectwlp4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krepositionblitter: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kretrievedata: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krvrsok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krwrok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksinisini: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipcheckfordamageofoff: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipcheckifradaltok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipjmpnavigthrotokk: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipjmpnavigthrotokk2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipjmpnavigthrotokk3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kstoreworkscreen: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_brackets: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_clrnavigpan: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_clrpilotpan: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_drwnavigpan: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_drwnavigpanbrief: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_drwpilotpan: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_initpanels: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_ironwork: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvga_loadpanel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvideoblitter: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kwbrakesok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kwpnstatusok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kzxzx: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_vgapanel()
          {
              {dw tmp999=m2c::kglobal_loadpilotpan;MYCOPY(loadpanel)}
    {dw tmp999=m2c::kglobal_loadpsidepan;MYCOPY(dummya8598969_data_2_1617)}
    {dw tmp999=m2c::kglobal_loadnavigpan;MYCOPY(dummya8598969_data_4_1618)}
    {dw tmp999=m2c::kglobal_loadnsidepan;MYCOPY(dummya8598969_data_6_1619)}
    {dw tmp999=m2c::kglobal_loadextrnpan;MYCOPY(dummya8598969_data_8_1620)}
    {dw tmp999=m2c::kglobal_loadlookdownpan;MYCOPY(dummya8598969_data_a_1621)}
    {dw tmp999=m2c::kglobal_loadframepan;MYCOPY(dummya8598969_data_c_1622)}
    {dw tmp999=m2c::kglobal_loadmappan;MYCOPY(dummya8598969_data_e_1623)}
    {dw tmp999=65535;MYCOPY(panelrgbptr)}
    {dw tmp999=0;MYCOPY(failures)}
    {dw tmp999=arm_blink_time;MYCOPY(armblinktimer)}
    {db tmp999=0;MYCOPY(armblink)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_vgapanel(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        
