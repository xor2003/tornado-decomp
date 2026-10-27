/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "joystick.h"

	
 __attribute__((weak)) bool readanalogue(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreadanalogue, _state);}

 __attribute__((weak)) bool readjoysticks(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreadjoysticks, _state);}

 __attribute__((weak)) bool readthrust(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreadthrust, _state);}

 __attribute__((weak)) bool recaljoysticks(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krecaljoysticks, _state);}

 __attribute__((weak)) bool recalthrust(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krecalthrust, _state);}

 static bool __m2c_macrolocal_11_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_11_skip, _state);}

 static bool __m2c_macrolocal_12_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_12_skip, _state);}

 static bool __m2c_macrolocal_13_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_13_skip, _state);}

 static bool __m2c_macrolocal_1_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_1_skip, _state);}

 static bool __m2c_macrolocal_22_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_22_skip, _state);}

 static bool __m2c_macrolocal_23_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_23_skip, _state);}

 static bool __m2c_macrolocal_2_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_2_skip, _state);}

 static bool __m2c_macrolocal_3_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_3_skip, _state);}

 static bool __m2c_macrolocal_4_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_4_skip, _state);}

 static bool __m2c_macrolocal_5_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_5_skip, _state);}

 static bool __m2c_macrolocal_6_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_6_skip, _state);}

 static bool __m2c_macrolocal_7_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_7_skip, _state);}

 static bool analogueexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kanalogueexit, _state);}

 static bool chbuttona1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kchbuttona1, _state);}

 static bool chbuttona2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kchbuttona2, _state);}

 static bool chbuttonb1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kchbuttonb1, _state);}

 static bool chbuttonb2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kchbuttonb2, _state);}

 static bool chcooliedn(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kchcooliedn, _state);}

 static bool chcoolielt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kchcoolielt, _state);}

 static bool chcoolieok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kchcoolieok, _state);}

 static bool chcooliert(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kchcooliert, _state);}

 static bool chcoolieup(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kchcoolieup, _state);}

 static bool contcoolie(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontcoolie, _state);}

 static bool joyaopencct(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kjoyaopencct, _state);}

 static bool joyatimeout(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kjoyatimeout, _state);}

 static bool joybopencct(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kjoybopencct, _state);}

 static bool joybtimeout(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kjoybtimeout, _state);}

 static bool readjoya(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreadjoya, _state);}

 static bool readjoyb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreadjoyb, _state);}

 static bool readjoyexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreadjoyexit, _state);}

 static bool skipcooliehat(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipcooliehat, _state);}

 static bool skipjoya_xsens(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipjoya_xsens, _state);}

 static bool skipjoya_ysens(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipjoya_ysens, _state);}

 static bool skipjoyb_xsens(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipjoyb_xsens, _state);}

 static bool skipjoyb_ysens(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipjoyb_ysens, _state);}

 static bool skiprecala(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiprecala, _state);}

 static bool skiprecalb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiprecalb, _state);}

 static bool skiprecalthrust(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiprecalthrust, _state);}

 static bool sortchstick(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortchstick, _state);}

 static bool stableloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kstableloop, _state);}

 static bool stablestate(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kstablestate, _state);}

 static bool tmopencct(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktmopencct, _state);}

 static bool tmtimeout(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktmtimeout, _state);}

 static bool unstableloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kunstableloop, _state);}

 static bool unstablestate(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kunstablestate, _state);}

 static bool xdivov(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kxdivov, _state);}

 static bool xok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kxok, _state);}

 static bool xoka(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kxoka, _state);}

 static bool xokb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kxokb, _state);}

 static bool xright(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kxright, _state);}

 static bool ybelow(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kybelow, _state);}

 static bool ydivov(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kydivov, _state);}

 static bool yok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kyok, _state);}

 static bool yoka(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kyoka, _state);}

 static bool yokb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kyokb, _state);}

	
	#include "joystick_default_seg_lifted.cpp"
#include "joystick_libcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::k__m2c_macrolocal_11_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_12_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_13_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_1_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_22_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_23_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_2_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_3_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_4_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_5_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_6_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_7_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kanalogueexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kchbuttona1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kchbuttona2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kchbuttonb1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kchbuttonb2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kchcooliedn: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kchcoolielt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kchcoolieok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kchcooliert: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kchcoolieup: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontcoolie: 	if (!_group1(__disp, _state)) return false; break;
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
        case m2c::kdummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kjoyaopencct: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kjoyatimeout: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kjoybopencct: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kjoybtimeout: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::kreadanalogue: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kreadjoya: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kreadjoyb: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kreadjoyexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kreadjoysticks: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kreadthrust: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krecaljoysticks: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krecalthrust: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipcooliehat: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipjoya_xsens: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipjoya_ysens: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipjoyb_xsens: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipjoyb_ysens: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiprecala: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiprecalb: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiprecalthrust: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortchstick: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kstableloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kstablestate: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktmopencct: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktmtimeout: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kunstableloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kunstablestate: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kxdivov: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kxok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kxoka: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kxokb: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kxright: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kybelow: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kydivov: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kyok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kyoka: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kyokb: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_joystick()
          {
              {db tmp999=0;MYCOPY(joya_flag)}
    {db tmp999=0;MYCOPY(joyb_flag)}
    {dw tmp999=0;MYCOPY(joya_xref)}
    {dw tmp999=0;MYCOPY(joya_yref)}
    {dw tmp999=0;MYCOPY(joya_xscale)}
    {dw tmp999=0;MYCOPY(joya_yscale)}
    {dw tmp999=0;MYCOPY(joya_xpos)}
    {dw tmp999=0;MYCOPY(joya_ypos)}
    {dw tmp999=0;MYCOPY(joya_xval)}
    {dw tmp999=0;MYCOPY(joya_yval)}
    {db tmp999=0;MYCOPY(joya_fire1)}
    {db tmp999=0;MYCOPY(joya_fire2)}
    {db tmp999=0;MYCOPY(joya_justfired1)}
    {db tmp999=0;MYCOPY(joya_justfired2)}
    {dw tmp999=0;MYCOPY(oldjoya_xval)}
    {dw tmp999=0;MYCOPY(oldjoya_yval)}
    {db tmp999=0;MYCOPY(oldjoya_fire1)}
    {db tmp999=0;MYCOPY(oldjoya_fire2)}
    {dw tmp999=0;MYCOPY(joyb_xref)}
    {dw tmp999=0;MYCOPY(joyb_yref)}
    {dw tmp999=0;MYCOPY(joyb_xscale)}
    {dw tmp999=0;MYCOPY(joyb_yscale)}
    {dw tmp999=0;MYCOPY(joyb_xpos)}
    {dw tmp999=0;MYCOPY(joyb_ypos)}
    {dw tmp999=0;MYCOPY(joyb_xval)}
    {dw tmp999=0;MYCOPY(joyb_yval)}
    {db tmp999=0;MYCOPY(joyb_fire1)}
    {db tmp999=0;MYCOPY(joyb_fire2)}
    {db tmp999=0;MYCOPY(joyb_justfired1)}
    {db tmp999=0;MYCOPY(joyb_justfired2)}
    {dw tmp999=0;MYCOPY(oldjoyb_xval)}
    {dw tmp999=0;MYCOPY(oldjoyb_yval)}
    {db tmp999=0;MYCOPY(oldjoyb_fire1)}
    {db tmp999=0;MYCOPY(oldjoyb_fire2)}
    {db tmp999=0;MYCOPY(joysensitivity)}
    {db tmp999=0;MYCOPY(chstick)}
    {db tmp999=0;MYCOPY(thrustmaster)}
    {dw tmp999=0;MYCOPY(tm_minx)}
    {dw tmp999=0;MYCOPY(tm_miny)}
    {dw tmp999=0;MYCOPY(tm_midx)}
    {dw tmp999=0;MYCOPY(tm_midy)}
    {dw tmp999=0;MYCOPY(tm_maxx)}
    {dw tmp999=0;MYCOPY(tm_maxy)}
    {dw tmp999=0;MYCOPY(tm_cooliecn)}
    {dw tmp999=0;MYCOPY(tm_coolielt)}
    {dw tmp999=0;MYCOPY(tm_cooliedn)}
    {dw tmp999=0;MYCOPY(tm_cooliert)}
    {dw tmp999=0;MYCOPY(tm_coolieup)}
    {dw tmp999=0;MYCOPY(tm_xpos)}
    {dw tmp999=0;MYCOPY(tm_ypos)}
    {dw tmp999=0;MYCOPY(tm_xval)}
    {dw tmp999=0;MYCOPY(tm_yval)}
    {dw tmp999=0;MYCOPY(tm_cooliepos)}
    {db tmp999=0;MYCOPY(tm_cooliehat)}
    {db tmp999=0;MYCOPY(tm_coolieval)}
    {db tmp999=0;MYCOPY(tm_coolienew)}
    {db tmp999=0;MYCOPY(tm_coolieold)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_joystick(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        
