/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "preview.h"

	
 __attribute__((weak)) bool banklevent(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbanklevent, _state);}

 __attribute__((weak)) bool bankrevent(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbankrevent, _state);}

 static bool checkkeys(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcheckkeys, _state);}

 static bool drawgadgets(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawgadgets, _state);}

 static bool drawmouseptr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawmouseptr, _state);}

 static bool drawsprite(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawsprite, _state);}

 __attribute__((weak)) bool ejectevent(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kejectevent, _state);}

 __attribute__((weak)) bool forwardevent(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kforwardevent, _state);}

 static bool initpreview(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitpreview, _state);}

 static bool makepreviewpan(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmakepreviewpan, _state);}

 static bool nextmodelptr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextmodelptr, _state);}

 static bool nullevent(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knullevent, _state);}

 __attribute__((weak)) bool objectpreview(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kobjectpreview, _state);}

 __attribute__((weak)) bool pauseplayevent(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpauseplayevent, _state);}

 __attribute__((weak)) bool pictureevent(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpictureevent, _state);}

 __attribute__((weak)) bool pitchdnevent(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpitchdnevent, _state);}

 __attribute__((weak)) bool pitchupevent(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpitchupevent, _state);}

 __attribute__((weak)) bool previewintr100(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpreviewintr100, _state);}

 static bool prevmodelptr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprevmodelptr, _state);}

 static bool printsubtitledol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprintsubtitledol, _state);}

 static bool printtitledol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprinttitledol, _state);}

 __attribute__((weak)) bool reverseevent(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreverseevent, _state);}

 static bool setupmodel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetupmodel, _state);}

 static bool show3dmodel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kshow3dmodel, _state);}

 static bool showpicture(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kshowpicture, _state);}

 static bool sortmouseinput(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortmouseinput, _state);}

 static bool updatetimer(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatetimer, _state);}

 static bool __m2c_macrolocal_10_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_10_skip, _state);}

 static bool __m2c_macrolocal_6_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_6_skip, _state);}

 static bool __m2c_macrolocal_7_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_7_skip, _state);}

 static bool __m2c_macrolocal_8_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_8_skip, _state);}

 static bool __m2c_macrolocal_9_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_9_skip, _state);}

 static bool contforward(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontforward, _state);}

 static bool contreverse(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontreverse, _state);}

 static bool contsubtitle(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontsubtitle, _state);}

 static bool conttitle(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kconttitle, _state);}

 static bool exitmouseinput(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitmouseinput, _state);}

 static bool exitmouseptr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitmouseptr, _state);}

 static bool exitsubtitledol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexitsubtitledol, _state);}

 static bool exittimer(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexittimer, _state);}

 static bool exittitledol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kexittitledol, _state);}

 static bool gadgetscanloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgadgetscanloop, _state);}

 static bool hitgadget(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khitgadget, _state);}

 static bool initexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitexit, _state);}

 static bool modelloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmodelloop, _state);}

 static bool previewexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpreviewexit, _state);}

 static bool previewloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpreviewloop, _state);}

 static bool skipa(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipa, _state);}

 static bool skipb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipb, _state);}

 static bool skipbankl(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipbankl, _state);}

 static bool skipbankr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipbankr, _state);}

 static bool skipblades(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipblades, _state);}

 static bool skipc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipc, _state);}

 static bool skipcycle(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipcycle, _state);}

 static bool skippitchdn(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskippitchdn, _state);}

 static bool skippitchup(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskippitchup, _state);}

 static bool skiprestore(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiprestore, _state);}

 static bool skipstitlechar(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipstitlechar, _state);}

 static bool skipstore(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipstore, _state);}

 static bool skiptitlechar(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiptitlechar, _state);}

 static bool skipxchg(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipxchg, _state);}

 static bool spritexloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kspritexloop, _state);}

 static bool spriteyloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kspriteyloop, _state);}

 static bool stitlekernlp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kstitlekernlp, _state);}

 static bool stitlekernok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kstitlekernok, _state);}

 static bool subtitleloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksubtitleloop, _state);}

 static bool titlekernlp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktitlekernlp, _state);}

 static bool titlekernok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktitlekernok, _state);}

 static bool titleloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktitleloop, _state);}

	
	#include "preview_default_seg_lifted.cpp"
#include "preview_prevcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::k__m2c_macrolocal_10_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_6_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_7_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_8_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_9_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbanklevent: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbankrevent: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_blockfill
        case m2c::kblockfill: 	if (!blockfill(0, _state)) return false; break;
#endif
        case m2c::kcheckkeys: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_checktimeout
        case m2c::kchecktimeout: 	if (!checktimeout(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_cls
        case m2c::kcls: 	if (!cls(0, _state)) return false; break;
#endif
        case m2c::kcontforward: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontreverse: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontsubtitle: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kconttitle: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_copypreviewpan
        case m2c::kcopypreviewpan: 	if (!copypreviewpan(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_download
        case m2c::kdownload: 	if (!download(0, _state)) return false; break;
#endif
        case m2c::kdrawgadgets: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawmouseptr: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_drawpreviewpan
        case m2c::kdrawpreviewpan: 	if (!drawpreviewpan(0, _state)) return false; break;
#endif
        case m2c::kdrawsprite: 	if (!_group1(__disp, _state)) return false; break;
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
        case m2c::kdummylabel5: 	if (!_group1(__disp, _state)) return false; break;
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
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kejectevent: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitmouseinput: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitmouseptr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexitsubtitledol: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexittimer: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kexittitledol: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kforwardevent: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgadgetscanloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khitgadget: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_hlinedraw
        case m2c::khlinedraw: 	if (!hlinedraw(0, _state)) return false; break;
#endif
        case m2c::kinitexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitpreview: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_installuser100
        case m2c::kinstalluser100: 	if (!installuser100(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_instantfadein
        case m2c::kinstantfadein: 	if (!instantfadein(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_instantfadeout
        case m2c::kinstantfadeout: 	if (!instantfadeout(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_interleavedata
        case m2c::kinterleavedata: 	if (!interleavedata(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_loadfile
        case m2c::kloadfile: 	if (!loadfile(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_loadpicture
        case m2c::kloadpicture: 	if (!loadpicture(0, _state)) return false; break;
#endif
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::kmakepreviewpan: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_mobilevisual
        case m2c::kmobilevisual: 	if (!mobilevisual(0, _state)) return false; break;
#endif
        case m2c::kmodelloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextmodelptr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knullevent: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kobjectpreview: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpauseplayevent: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpictureevent: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpitchdnevent: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpitchupevent: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpreviewexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpreviewintr100: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpreviewloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprevmodelptr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprintsubtitledol: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kprinttitledol: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_qfadein
        case m2c::kqfadein: 	if (!qfadein(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_qfadeout
        case m2c::kqfadeout: 	if (!qfadeout(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_readmouse
        case m2c::kreadmouse: 	if (!readmouse(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_refreshmusic
        case m2c::krefreshmusic: 	if (!refreshmusic(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_retrievedata
        case m2c::kretrievedata: 	if (!retrievedata(0, _state)) return false; break;
#endif
        case m2c::kreverseevent: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_setmouselimits
        case m2c::ksetmouselimits: 	if (!setmouselimits(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_setmousepos
        case m2c::ksetmousepos: 	if (!setmousepos(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_setpixel
        case m2c::ksetpixel: 	if (!setpixel(0, _state)) return false; break;
#endif
        case m2c::ksetupmodel: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_setviewmode
        case m2c::ksetviewmode: 	if (!setviewmode(0, _state)) return false; break;
#endif
        case m2c::kshow3dmodel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kshowpicture: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipa: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipb: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipbankl: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipbankr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipblades: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipc: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipcycle: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskippitchdn: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskippitchup: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiprestore: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipstitlechar: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipstore: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiptitlechar: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipxchg: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortmouseinput: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kspritexloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kspriteyloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kstitlekernlp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kstitlekernok: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_storeworkscreen
        case m2c::kstoreworkscreen: 	if (!storeworkscreen(0, _state)) return false; break;
#endif
        case m2c::ksubtitleloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktitlekernlp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktitlekernok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktitleloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatetimer: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_vlinedraw
        case m2c::kvlinedraw: 	if (!vlinedraw(0, _state)) return false; break;
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
          void Initializer_preview()
          {
              {dw tmp999=offset(prevdata,modellist);MYCOPY(modelptr)}
    {dw tmp999=air_model;MYCOPY(category)}
    {dw tmp999=0;MYCOPY(show3dtimer)}
    {db tmp999=0;MYCOPY(exit3dflag)}
    {db tmp999=0;MYCOPY(fadeinflag)}
    {db tmp999=0;MYCOPY(paused)}
    {db tmp999=0;MYCOPY(pauseplayxchg)}
    {db tmp999=0;MYCOPY(timer50)}
    {viewpoint tmp999={16,16,0,0,1000,256,0,0};MYCOPY(vp)}
    {mobile tmp999={9,6,0,0,65535};MYCOPY(p_mobile)}
    {viewpoint tmp999={16,16,0,0,1000,0,0,0};MYCOPY(p_view)}
    {dw tmp999=0;MYCOPY(hfine)}
    {dw tmp999=dw(65520*128);MYCOPY(pfine)}
    {dw tmp999=32*128;MYCOPY(rfine)}
    {dw tmp999=dw(65520*128);MYCOPY(prevpfine)}
    {dw tmp999=32*128;MYCOPY(prevrfine)}
    {dw tmp999=0;MYCOPY(mousexcrt)}
    {dw tmp999=0;MYCOPY(mouseycrt)}
    {char tmp999[12]="PREVIEW.BT2";MYCOPY(graphicsfile)}
    {char tmp999[12]={'.','.','\\','D','I','G','I','P','I','C','S','\\'};MYCOPY(dummy6b9724ba_data_4f_2398)}
    {char tmp999[8]={'1','2','3','4','5','6','7','8'};MYCOPY(picfilename)}
    {char tmp999[4]={'.','P','T','2'};MYCOPY(dummy6b9724ba_data_63_2400)}
    {dw tmp999=65535;MYCOPY(gadgetptr)}
    {gadget tmp999={m2c::kglobal_ejectevent,55360,3,168,13,11};MYCOPY(__m2c_structrow_6b9724ba_2438)}
    {gadget tmp999={m2c::kglobal_pictureevent,55376,18,168,27,11};MYCOPY(__m2c_structrow_6b9724ba_2439)}
    {gadget tmp999={m2c::kglobal_reverseevent,55408,3,181,13,11};MYCOPY(__m2c_structrow_6b9724ba_2440)}
    {gadget tmp999={m2c::kglobal_forwardevent,55424,32,181,13,11};MYCOPY(__m2c_structrow_6b9724ba_2441)}
    {gadget tmp999={m2c::kglobal_pauseplayevent,55440,18,181,12,11};MYCOPY(pauseplaygadget)}
    {gadget tmp999={m2c::kglobal_pitchupevent,55520,57,171,11,9};MYCOPY(__m2c_structrow_6b9724ba_2443)}
    {gadget tmp999={m2c::kglobal_pitchdnevent,55536,57,180,11,9};MYCOPY(__m2c_structrow_6b9724ba_2444)}
    {gadget tmp999={m2c::kglobal_bankrevent,55504,63,168,15,24};MYCOPY(__m2c_structrow_6b9724ba_2445)}
    {gadget tmp999={m2c::kglobal_banklevent,55488,47,168,15,24};MYCOPY(__m2c_structrow_6b9724ba_2446)}
    {dw tmp999=auto_delay;MYCOPY(autotimer)}
    {model tmp999={{'G','R','4','_','1'},0,9,1,58,1001,152,168,offset(prevdata,tornadodol),115,168,offset(prevdata,gr4dol)};MYCOPY(gr4model)}
    {model tmp999={{'M','I','G','2','7'},0,31,1,58,1001,168,168,offset(prevdata,floggerdol),108,168,offset(prevdata,mig27dol)};MYCOPY(__m2c_structrow_6b9724ba_2495)}
    {model tmp999={{db(db(1177771825))},0,25,1,58,1001,143,168,offset(prevdata,tornadodol),123,168,offset(prevdata,f3dol)};MYCOPY(f3model)}
    {model tmp999={{'M','I','G','3','1'},0,27,0,64,1000,152,168,offset(prevdata,foxhounddol),101,168,offset(prevdata,mig31dol)};MYCOPY(__m2c_structrow_6b9724ba_2497)}
    {model tmp999={{'F','1','5'},0,22,0,64,1000,170,168,offset(prevdata,eagledol),141,168,offset(prevdata,f15dol)};MYCOPY(__m2c_structrow_6b9724ba_2498)}
    {model tmp999={{db(db(1398092343))},0,7,0,60,1001,164,168,offset(prevdata,flankerdol),114,168,offset(prevdata,su27dol)};MYCOPY(__m2c_structrow_6b9724ba_2499)}
    {model tmp999={{'F','1','6'},0,14,0,58,1001,162,168,offset(prevdata,falcondol),131,168,offset(prevdata,f16dol)};MYCOPY(__m2c_structrow_6b9724ba_2500)}
    {model tmp999={{'M','I','G','2','9'},0,16,0,56,1000,168,168,offset(prevdata,fulcrumdol),108,168,offset(prevdata,mig29dol)};MYCOPY(__m2c_structrow_6b9724ba_2501)}
    {model tmp999={{'A','1','0'},0,1,0,52,1001,124,168,offset(prevdata,thunderboltdol),86,168,offset(prevdata,a10dol)};MYCOPY(__m2c_structrow_6b9724ba_2502)}
    {model tmp999={{db(db(1398092341))},0,10,0,47,1001,152,168,offset(prevdata,frogfootdol),104,168,offset(prevdata,su25dol)};MYCOPY(__m2c_structrow_6b9724ba_2503)}
    {model tmp999={{db(db(1127297840))},0,11,0,116,1003,152,168,offset(prevdata,herculesdol),109,168,offset(prevdata,c130dol)};MYCOPY(__m2c_structrow_6b9724ba_2504)}
    {model tmp999={{'I','L','7','6','C','A','N','D'},0,6,0,164,1004,168,168,offset(prevdata,candiddol),129,168,offset(prevdata,il76dol)};MYCOPY(__m2c_structrow_6b9724ba_2505)}
    {model tmp999={{'E','3','D'},0,21,0,164,1004,165,168,offset(prevdata,sentrydol),129,168,offset(prevdata,e3ddol)};MYCOPY(__m2c_structrow_6b9724ba_2506)}
    {model tmp999={{'I','L','7','6','M','A','I','N'},0,6,32,164,1004,155,168,offset(prevdata,mainstaydol),111,168,offset(prevdata,a50dol)};MYCOPY(__m2c_structrow_6b9724ba_2507)}
    {model tmp999={{db(db(1095251508))},2,2,0,58,1002,173,168,offset(prevdata,apachedol),117,168,offset(prevdata,ah64dol)};MYCOPY(__m2c_structrow_6b9724ba_2508)}
    {model tmp999={{db(db(1296642612))},2,5,0,65,1002,193,168,offset(prevdata,hinddol),145,168,offset(prevdata,mi24dol)};MYCOPY(__m2c_structrow_6b9724ba_2509)}
    {model tmp999={{db(db(1128805431))},2,13,0,96,1001,165,168,offset(prevdata,chinookdol),112,168,offset(prevdata,ch47dol)};MYCOPY(__m2c_structrow_6b9724ba_2510)}
    {model tmp999={{db(db(1296642614))},2,30,0,120,1003,186,168,offset(prevdata,halodol),139,168,offset(prevdata,mi26dol)};MYCOPY(__m2c_structrow_6b9724ba_2511)}
    {model tmp999={{'C','H','A','L','L','E','N','G'},4,29,0,34,1017,111,168,offset(prevdata,challengerdol),0,0,65535};MYCOPY(__m2c_structrow_6b9724ba_2512)}
    {model tmp999={{'T','8','0'},4,12,0,28,1014,173,168,offset(prevdata,t80dol),0,0,65535};MYCOPY(__m2c_structrow_6b9724ba_2513)}
    {model tmp999={{'W','A','R','R','I','O','R'},4,34,0,20,1010,140,168,offset(prevdata,warriordol),0,0,65535};MYCOPY(__m2c_structrow_6b9724ba_2514)}
    {model tmp999={{db(db(1112363058))},4,20,0,20,1010,159,168,offset(prevdata,bmp2dol),0,0,65535};MYCOPY(__m2c_structrow_6b9724ba_2515)}
    {model tmp999={{db(db(1296847443))},4,32,0,22,1016,164,168,offset(prevdata,mlrsdol),0,0,65535};MYCOPY(__m2c_structrow_6b9724ba_2516)}
    {model tmp999={{'M','A','Z','5','4','3'},4,15,0,32,1016,143,168,offset(prevdata,maz543dol),0,0,65535};MYCOPY(__m2c_structrow_6b9724ba_2517)}
    {model tmp999={{'P','A','T','R','I','O','T'},4,33,0,32,1024,145,168,offset(prevdata,patriotdol),0,0,65535};MYCOPY(__m2c_structrow_6b9724ba_2518)}
    {model tmp999={{'Z','R','K','R','O','M','B'},4,24,0,24,1014,126,168,offset(prevdata,zrkrombdol),0,0,65535};MYCOPY(__m2c_structrow_6b9724ba_2519)}
    {model tmp999={{'G','I','R','A','F','F','E'},4,23,0,32,1030,144,168,offset(prevdata,giraffedol),0,0,65535};MYCOPY(__m2c_structrow_6b9724ba_2520)}
    {model tmp999={{'Z','S','U','2','3'},4,19,0,20,1011,141,168,offset(prevdata,zsu23dol),0,0,65535};MYCOPY(__m2c_structrow_6b9724ba_2521)}
    {char tmp999[8]="TORNADO";MYCOPY(tornadodol)}
    {char tmp999[8]="FLOGGER";MYCOPY(floggerdol)}
    {char tmp999[9]="FOXHOUND";MYCOPY(foxhounddol)}
    {char tmp999[6]="EAGLE";MYCOPY(eagledol)}
    {char tmp999[8]="FLANKER";MYCOPY(flankerdol)}
    {char tmp999[7]="FALCON";MYCOPY(falcondol)}
    {char tmp999[8]="FULCRUM";MYCOPY(fulcrumdol)}
    {char tmp999[12]="THUNDERBOLT";MYCOPY(thunderboltdol)}
    {char tmp999[9]="FROGFOOT";MYCOPY(frogfootdol)}
    {char tmp999[9]="HERCULES";MYCOPY(herculesdol)}
    {char tmp999[7]="CANDID";MYCOPY(candiddol)}
    {char tmp999[7]="SENTRY";MYCOPY(sentrydol)}
    {char tmp999[9]="MAINSTAY";MYCOPY(mainstaydol)}
    {char tmp999[7]="APACHE";MYCOPY(apachedol)}
    {char tmp999[5]="HIND";MYCOPY(hinddol)}
    {char tmp999[8]="CHINOOK";MYCOPY(chinookdol)}
    {char tmp999[5]="HALO";MYCOPY(halodol)}
    {char tmp999[11]="CHALLENGER";MYCOPY(challengerdol)}
    {char tmp999[5]="T-80";MYCOPY(t80dol)}
    {char tmp999[8]="WARRIOR";MYCOPY(warriordol)}
    {char tmp999[6]="BMP-2";MYCOPY(bmp2dol)}
    {char tmp999[5]="MLRS";MYCOPY(mlrsdol)}
    {char tmp999[8]="MAZ-543";MYCOPY(maz543dol)}
    {char tmp999[8]="PATRIOT";MYCOPY(patriotdol)}
    {char tmp999[9]="ZRK ROMB";MYCOPY(zrkrombdol)}
    {char tmp999[9]="ZSU-23-4";MYCOPY(zsu23dol)}
    {char tmp999[8]="GIRAFFE";MYCOPY(giraffedol)}
    {char tmp999[4]="GR4";MYCOPY(gr4dol)}
    {char tmp999[7]="MIG-27";MYCOPY(mig27dol)}
    {char tmp999[3]="F3";MYCOPY(f3dol)}
    {char tmp999[7]="MIG-31";MYCOPY(mig31dol)}
    {char tmp999[5]="F-15";MYCOPY(f15dol)}
    {char tmp999[6]="SU-27";MYCOPY(su27dol)}
    {char tmp999[5]="F-16";MYCOPY(f16dol)}
    {char tmp999[7]="MIG-29";MYCOPY(mig29dol)}
    {char tmp999[5]="A-10";MYCOPY(a10dol)}
    {char tmp999[6]="SU-25";MYCOPY(su25dol)}
    {char tmp999[6]="C-130";MYCOPY(c130dol)}
    {char tmp999[6]="IL-76";MYCOPY(il76dol)}
    {char tmp999[5]="E-3D";MYCOPY(e3ddol)}
    {char tmp999[5]="A-50";MYCOPY(a50dol)}
    {char tmp999[6]="AH-64";MYCOPY(ah64dol)}
    {char tmp999[6]="MI-24";MYCOPY(mi24dol)}
    {char tmp999[6]="CH-47";MYCOPY(ch47dol)}
    {char tmp999[6]="MI-26";MYCOPY(mi26dol)}
    {db tmp999=20;MYCOPY(titlewidthaz)}
    {db tmp999=16;MYCOPY(dummy6b9724ba_prevdata_51f_2589)}
    {db tmp999=19;MYCOPY(dummy6b9724ba_prevdata_520_2590)}
    {db tmp999=18;MYCOPY(dummy6b9724ba_prevdata_521_2591)}
    {db tmp999=15;MYCOPY(dummy6b9724ba_prevdata_522_2592)}
    {db tmp999=14;MYCOPY(dummy6b9724ba_prevdata_523_2593)}
    {db tmp999=19;MYCOPY(dummy6b9724ba_prevdata_524_2594)}
    {db tmp999=17;MYCOPY(dummy6b9724ba_prevdata_525_2595)}
    {db tmp999=13;MYCOPY(dummy6b9724ba_prevdata_526_2596)}
    {db tmp999=18;MYCOPY(dummy6b9724ba_prevdata_527_2597)}
    {db tmp999=14;MYCOPY(dummy6b9724ba_prevdata_528_2598)}
    {db tmp999=20;MYCOPY(dummy6b9724ba_prevdata_529_2599)}
    {db tmp999=17;MYCOPY(dummy6b9724ba_prevdata_52a_2600)}
    {db tmp999=19;MYCOPY(dummy6b9724ba_prevdata_52b_2601)}
    {db tmp999=16;MYCOPY(dummy6b9724ba_prevdata_52c_2602)}
    {db tmp999=19;MYCOPY(dummy6b9724ba_prevdata_52d_2603)}
    {db tmp999=16;MYCOPY(dummy6b9724ba_prevdata_52e_2604)}
    {db tmp999=16;MYCOPY(dummy6b9724ba_prevdata_52f_2605)}
    {db tmp999=17;MYCOPY(dummy6b9724ba_prevdata_530_2606)}
    {db tmp999=17;MYCOPY(dummy6b9724ba_prevdata_531_2607)}
    {db tmp999=18;MYCOPY(dummy6b9724ba_prevdata_532_2608)}
    {db tmp999=23;MYCOPY(dummy6b9724ba_prevdata_533_2609)}
    {db tmp999=18;MYCOPY(dummy6b9724ba_prevdata_534_2610)}
    {db tmp999=17;MYCOPY(dummy6b9724ba_prevdata_535_2611)}
    {db tmp999=16;MYCOPY(dummy6b9724ba_prevdata_536_2612)}
    {db tmp999=14;MYCOPY(titlewidth09)}
    {db tmp999=14;MYCOPY(dummy6b9724ba_prevdata_538_2614)}
    {db tmp999=14;MYCOPY(dummy6b9724ba_prevdata_539_2615)}
    {db tmp999=14;MYCOPY(dummy6b9724ba_prevdata_53a_2616)}
    {db tmp999=14;MYCOPY(dummy6b9724ba_prevdata_53b_2617)}
    {db tmp999=14;MYCOPY(dummy6b9724ba_prevdata_53c_2618)}
    {db tmp999=14;MYCOPY(dummy6b9724ba_prevdata_53d_2619)}
    {db tmp999=14;MYCOPY(dummy6b9724ba_prevdata_53e_2620)}
    {db tmp999=14;MYCOPY(dummy6b9724ba_prevdata_53f_2621)}
    {db tmp999=15;MYCOPY(stitlewidthaz)}
    {db tmp999=10;MYCOPY(dummy6b9724ba_prevdata_541_2631)}
    {db tmp999=11;MYCOPY(dummy6b9724ba_prevdata_542_2632)}
    {db tmp999=12;MYCOPY(dummy6b9724ba_prevdata_543_2633)}
    {db tmp999=12;MYCOPY(dummy6b9724ba_prevdata_544_2634)}
    {db tmp999=12;MYCOPY(dummy6b9724ba_prevdata_545_2635)}
    {db tmp999=13;MYCOPY(dummy6b9724ba_prevdata_546_2636)}
    {db tmp999=15;MYCOPY(dummy6b9724ba_prevdata_547_2637)}
    {db tmp999=13;MYCOPY(dummy6b9724ba_prevdata_548_2638)}
    {db tmp999=14;MYCOPY(dummy6b9724ba_prevdata_549_2639)}
    {db tmp999=10;MYCOPY(dummy6b9724ba_prevdata_54a_2640)}
    {db tmp999=14;MYCOPY(dummy6b9724ba_prevdata_54b_2641)}
    {db tmp999=11;MYCOPY(dummy6b9724ba_prevdata_54c_2642)}
    {db tmp999=11;MYCOPY(dummy6b9724ba_prevdata_54d_2643)}
    {db tmp999=12;MYCOPY(dummy6b9724ba_prevdata_54e_2644)}
    {db tmp999=13;MYCOPY(dummy6b9724ba_prevdata_54f_2645)}
    {db tmp999=22;MYCOPY(dummy6b9724ba_prevdata_550_2646)}
    {db tmp999=14;MYCOPY(dummy6b9724ba_prevdata_551_2647)}
    {db tmp999=13;MYCOPY(dummy6b9724ba_prevdata_552_2648)}
    {db tmp999=12;MYCOPY(dummy6b9724ba_prevdata_553_2649)}
    {db tmp999=11;MYCOPY(stitlewidth09)}
    {db tmp999=10;MYCOPY(dummy6b9724ba_prevdata_555_2651)}
    {db tmp999=11;MYCOPY(dummy6b9724ba_prevdata_556_2652)}
    {db tmp999=10;MYCOPY(dummy6b9724ba_prevdata_557_2653)}
    {db tmp999=10;MYCOPY(dummy6b9724ba_prevdata_558_2654)}
    {db tmp999=10;MYCOPY(dummy6b9724ba_prevdata_559_2655)}
    {db tmp999=10;MYCOPY(dummy6b9724ba_prevdata_55a_2656)}
    {kern tmp999={'-',2,255};MYCOPY(__m2c_structrow_6b9724ba_2675)}
    {kern tmp999={'-',4,255};MYCOPY(__m2c_structrow_6b9724ba_2676)}
    {kern tmp999={'-',5,255};MYCOPY(__m2c_structrow_6b9724ba_2677)}
    {kern tmp999={'-',8,255};MYCOPY(__m2c_structrow_6b9724ba_2678)}
    {kern tmp999={'A','C',255};MYCOPY(__m2c_structrow_6b9724ba_2679)}
    {kern tmp999={'A','G',255};MYCOPY(__m2c_structrow_6b9724ba_2680)}
    {kern tmp999={'A','T',252};MYCOPY(__m2c_structrow_6b9724ba_2681)}
    {kern tmp999={'A','Y',252};MYCOPY(__m2c_structrow_6b9724ba_2682)}
    {kern tmp999={'C','A',255};MYCOPY(__m2c_structrow_6b9724ba_2683)}
    {kern tmp999={'F','A',253};MYCOPY(__m2c_structrow_6b9724ba_2684)}
    {kern tmp999={'F','O',255};MYCOPY(__m2c_structrow_6b9724ba_2685)}
    {kern tmp999={'L','C',255};MYCOPY(__m2c_structrow_6b9724ba_2686)}
    {kern tmp999={'L','O',255};MYCOPY(__m2c_structrow_6b9724ba_2687)}
    {kern tmp999={'L','T',250};MYCOPY(__m2c_structrow_6b9724ba_2688)}
    {kern tmp999={'O','T',255};MYCOPY(__m2c_structrow_6b9724ba_2689)}
    {kern tmp999={'O','X',255};MYCOPY(__m2c_structrow_6b9724ba_2690)}
    {kern tmp999={'P','A',253};MYCOPY(__m2c_structrow_6b9724ba_2691)}
    {kern tmp999={'T','-',250};MYCOPY(__m2c_structrow_6b9724ba_2692)}
    {kern tmp999={'T','A',252};MYCOPY(__m2c_structrow_6b9724ba_2693)}
    {kern tmp999={'T','O',255};MYCOPY(__m2c_structrow_6b9724ba_2694)}
    {kern tmp999={'W','A',253};MYCOPY(__m2c_structrow_6b9724ba_2695)}
    {kern tmp999={'Z','-',254};MYCOPY(__m2c_structrow_6b9724ba_2696)}
    {db tmp999=255;MYCOPY(dummy6b9724ba_prevdata_59d_2697)}
    {kern tmp999={'-',1,255};MYCOPY(__m2c_structrow_6b9724ba_2705)}
    {kern tmp999={'-',2,253};MYCOPY(__m2c_structrow_6b9724ba_2706)}
    {kern tmp999={'-',3,253};MYCOPY(__m2c_structrow_6b9724ba_2707)}
    {kern tmp999={'-',4,255};MYCOPY(__m2c_structrow_6b9724ba_2708)}
    {kern tmp999={'-',6,255};MYCOPY(__m2c_structrow_6b9724ba_2709)}
    {kern tmp999={'-',7,253};MYCOPY(__m2c_structrow_6b9724ba_2710)}
    {kern tmp999={'A','-',255};MYCOPY(__m2c_structrow_6b9724ba_2711)}
    {kern tmp999={'C','-',255};MYCOPY(__m2c_structrow_6b9724ba_2712)}
    {kern tmp999={'E','-',255};MYCOPY(__m2c_structrow_6b9724ba_2713)}
    {kern tmp999={'F','-',255};MYCOPY(__m2c_structrow_6b9724ba_2714)}
    {kern tmp999={'L','-',254};MYCOPY(__m2c_structrow_6b9724ba_2715)}
    {db tmp999=255;MYCOPY(dummy6b9724ba_prevdata_5bf_2716)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_preview(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        
