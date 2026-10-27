/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "comms.h"

	
 __attribute__((weak)) bool clearcomms(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclearcomms, _state);}

 __attribute__((weak)) bool clearerror(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclearerror, _state);}

 __attribute__((weak)) bool clearrxqueue(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclearrxqueue, _state);}

 __attribute__((weak)) bool cleartxqueue(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcleartxqueue, _state);}

 __attribute__((weak)) bool commsintr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcommsintr, _state);}

 __attribute__((weak)) bool initcomms(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitcomms, _state);}

 __attribute__((weak)) bool readdata(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreaddata, _state);}

 __attribute__((weak)) bool senddata(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksenddata, _state);}

 __attribute__((weak)) bool sendpacket(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksendpacket, _state);}

 __attribute__((weak)) bool stopcomms(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kstopcomms, _state);}

 __attribute__((weak)) bool synccomms(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksynccomms, _state);}

 static bool addtoqueue(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaddtoqueue, _state);}

 static bool charsent(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcharsent, _state);}

 static bool emptyloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kemptyloop, _state);}

 static bool errorintr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kerrorintr, _state);}

 static bool intosync(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintosync, _state);}

 static bool intrpending(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintrpending, _state);}

 static bool nextintr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextintr, _state);}

 static bool readdataexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreaddataexit, _state);}

 static bool rxintr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krxintr, _state);}

 static bool sendloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksendloop, _state);}

 static bool syncloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksyncloop, _state);}

 static bool synctimeout(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksynctimeout, _state);}

 static bool syncuserabort(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksyncuserabort, _state);}

 static bool txintr(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktxintr, _state);}

	
	#include "comms_default_seg_lifted.cpp"
#include "comms_libcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kaddtoqueue: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcharsent: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclearcomms: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclearerror: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclearrxqueue: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcleartxqueue: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcommsintr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel10: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kemptyloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kerrorintr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitcomms: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintosync: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintrpending: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::knextintr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kreaddata: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kreaddataexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krxintr: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksenddata: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksendloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksendpacket: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kstopcomms: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksynccomms: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksyncloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksynctimeout: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksyncuserabort: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktxintr: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_comms()
          {
              {db tmp999[2]={com1,0};MYCOPY(commsdevice)}
    {dw tmp999=0;MYCOPY(dosvctrseg)}
    {dw tmp999=0;MYCOPY(dosvctroff)}
    {db tmp999[2]={0};MYCOPY(commsvector)}
    {db tmp999=0;MYCOPY(txqtail)}
    {dw tmp999=offset(data,txqhead);MYCOPY(txqwtptr)}
    {dw tmp999=offset(data,txqhead);MYCOPY(txqrdptr)}
    {db tmp999=0;MYCOPY(rxqtail)}
    {dw tmp999=offset(data,rxqhead);MYCOPY(rxqwtptr)}
    {dw tmp999=offset(data,rxqhead);MYCOPY(rxqrdptr)}
    {dw tmp999=0;MYCOPY(commserror)}
    {dw tmp999=baud9600;MYCOPY(baudrate)}
    {dw tmp999=2304;MYCOPY(baudtable)}
    {dw tmp999=384;MYCOPY(dummyfe3a59d1_data_18_319)}
    {dw tmp999=192;MYCOPY(dummyfe3a59d1_data_1a_320)}
    {dw tmp999=96;MYCOPY(dummyfe3a59d1_data_1c_321)}
    {dw tmp999=48;MYCOPY(dummyfe3a59d1_data_1e_322)}
    {dw tmp999=24;MYCOPY(dummyfe3a59d1_data_20_323)}
    {dw tmp999=12;MYCOPY(dummyfe3a59d1_data_22_324)}
    {dw tmp999=8;MYCOPY(dummyfe3a59d1_data_24_325)}
    {dw tmp999=6;MYCOPY(dummyfe3a59d1_data_26_326)}
    {dw tmp999=3;MYCOPY(dummyfe3a59d1_data_28_327)}
    {dw tmp999=2;MYCOPY(dummyfe3a59d1_data_2a_328)}
    {dw tmp999=1;MYCOPY(dummyfe3a59d1_data_2c_329)}
    {db tmp999=0;MYCOPY(syncbyte)}
    {db tmp999=0;MYCOPY(userabort)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_comms(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        
