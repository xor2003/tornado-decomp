/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "disk.h"

	
 __attribute__((weak)) bool closefile(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclosefile, _state);}

 __attribute__((weak)) bool createfile(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcreatefile, _state);}

 __attribute__((weak)) bool findfile(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfindfile, _state);}

 __attribute__((weak)) bool fread(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfread, _state);}

 __attribute__((weak)) bool fwrite(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfwrite, _state);}

 __attribute__((weak)) bool fwritedol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfwritedol, _state);}

 __attribute__((weak)) bool loadfile(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kloadfile, _state);}

 __attribute__((weak)) bool openfile(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kopenfile, _state);}

 __attribute__((weak)) bool savefile(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksavefile, _state);}

 static bool closeerror(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcloseerror, _state);}

 static bool closeexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcloseexit, _state);}

 static bool createerror(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcreateerror, _state);}

 static bool createexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcreateexit, _state);}

 static bool finderror1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfinderror1, _state);}

 static bool finderror2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfinderror2, _state);}

 static bool findexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfindexit, _state);}

 static bool freaderror(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfreaderror, _state);}

 static bool freadexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfreadexit, _state);}

 static bool fwritedolloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfwritedolloop, _state);}

 static bool fwriteerror(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfwriteerror, _state);}

 static bool fwriteexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfwriteexit, _state);}

 static bool loadfileexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kloadfileexit, _state);}

 static bool openerror(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kopenerror, _state);}

 static bool openexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kopenexit, _state);}

 static bool savefileexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksavefileexit, _state);}

	
	#include "disk_default_seg_lifted.cpp"
#include "disk_libcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kcloseerror: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcloseexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclosefile: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcreateerror: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcreateexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcreatefile: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfinderror1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfinderror2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfindexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfindfile: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfread: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfreaderror: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfreadexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfwrite: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfwritedol: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfwritedolloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfwriteerror: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfwriteexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kloadfile: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kloadfileexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::kopenerror: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kopenexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kopenfile: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksavefile: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksavefileexit: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_disk()
          {
              handle = 0;

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_disk(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        
