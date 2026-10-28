/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "mapview.h"

	
 __attribute__((weak)) bool mapcompass(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmapcompass, _state);}

 __attribute__((weak)) bool mapview(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmapview, _state);}

 static bool frankie_2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfrankie_2, _state);}

 static bool frankie_3(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfrankie_3, _state);}

 static bool gradloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgradloop, _state);}

 static bool skipzoomin(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipzoomin, _state);}

 static bool skipzoomout(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipzoomout, _state);}

	
	#include "mapview_default_seg_lifted.cpp"
#include "mapview_pancode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfrankie_2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfrankie_3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgradloop: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_hlinedraw
        case m2c::khlinedraw: 	if (!hlinedraw(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_linedraw
        case m2c::klinedraw: 	if (!linedraw(0, _state)) return false; break;
#endif
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::kmapcompass: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmapview: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_printdol
        case m2c::kprintdol: 	if (!printdol(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_setpixel
        case m2c::ksetpixel: 	if (!setpixel(0, _state)) return false; break;
#endif
        case m2c::kskipzoomin: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipzoomout: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_updatemovingmap
        case m2c::kupdatemovingmap: 	if (!updatemovingmap(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_vdotclip
        case m2c::kvdotclip: 	if (!vdotclip(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_vlinedraw
        case m2c::kvlinedraw: 	if (!vlinedraw(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_vquicklineclip
        case m2c::kvquicklineclip: 	if (!vquicklineclip(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_vsetrotation
        case m2c::kvsetrotation: 	if (!vsetrotation(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_vsetviewport
        case m2c::kvsetviewport: 	if (!vsetviewport(0, _state)) return false; break;
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
          void Initializer_mapview()
          {
              mapzoom = map_zoom1;
    extravalue = 45;
    vp = viewport{0,0,320,300,5,5};
    vp_full = viewport{0,0,320,200,5,5};
    dummycc3da1c9_data_18_852 = 3;
    dummycc3da1c9_data_19_853 = 5;
    {db tmp999[10]={p_ext,22,0,0,0,0,0,0,col_compass,0};memcpy(&dummycc3da1c9_data_1a_854,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,18};memcpy(&dummycc3da1c9_data_24_855,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={148,114};memcpy(&dummycc3da1c9_data_26_856,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,65};memcpy(&dummycc3da1c9_data_2a_857,&tmp999,sizeof tmp999);}
    dummycc3da1c9_data_2c_858 = offset(data,rangevalsptr);
    {char tmp999[2]={'N','M'};memcpy(&dummycc3da1c9_data_2e_859,&tmp999,sizeof tmp999);}
    rangevalsptr = offset(data,rangevalsdol);
    {char tmp999[5]="10.0";memcpy(&rangevalsdol,&tmp999,sizeof tmp999);}
    {char tmp999[5]=" 5.0";memcpy(&dummycc3da1c9_data_38_865,&tmp999,sizeof tmp999);}
    {char tmp999[5]=" 2.5";memcpy(&dummycc3da1c9_data_3d_866,&tmp999,sizeof tmp999);}
    {char tmp999[5]=" 1.2";memcpy(&dummycc3da1c9_data_42_867,&tmp999,sizeof tmp999);}
    {char tmp999[5]=" 0.6";memcpy(&dummycc3da1c9_data_47_868,&tmp999,sizeof tmp999);}
    {char tmp999[5]=" 0.3";memcpy(&dummycc3da1c9_data_4c_869,&tmp999,sizeof tmp999);}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_mapview(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        
