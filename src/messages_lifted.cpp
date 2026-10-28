/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "messages.h"

	
 __attribute__((weak)) bool dispmessage(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdispmessage, _state);}

 static bool pancode_0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpancode_0_proc, _state);}

 __attribute__((weak)) bool updatepilotmsg(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatepilotmsg, _state);}

 static bool contupdatemsg(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontupdatemsg, _state);}

 static bool dispmsg(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdispmsg, _state);}

 static bool lowpriority(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klowpriority, _state);}

 static bool msgok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmsgok, _state);}

 static bool nextmsg(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextmsg, _state);}

 static bool queuefull(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kqueuefull, _state);}

 __attribute__((weak)) bool updatenavigmsg(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatenavigmsg, _state);}

	
	#include "messages_default_seg_lifted.cpp"
#include "messages_pancode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kcontupdatemsg: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdispmessage: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdispmsg: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klowpriority: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::kmsgok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextmsg: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kpancode_0_proc: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_printdol
        case m2c::kprintdol: 	if (!printdol(0, _state)) return false; break;
#endif
        case m2c::kqueuefull: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatenavigmsg: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatepilotmsg: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_messages()
          {
              {dw tmp999[32]={offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol),offset(data,nullmsgdol)};memcpy(&msgqueue,&tmp999,sizeof tmp999);}
    msgqueueindex = 0;
    msgptr = offset(data,nullmsgdol);
    msgtimer = 0;
    {db tmp999[2]={0};memcpy(&msgdelay,&tmp999,sizeof tmp999);}
    {db tmp999[8]={255,0,255,0,119,0,col_lcd,0};memcpy(&lcdattr,&tmp999,sizeof tmp999);}
    dummyacba704c_data_50_531 = 3;
    dummyacba704c_data_51_532 = 5;
    {db tmp999[2]={p_ext,18};memcpy(&dummyacba704c_data_52_533,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={pilotx,piloty};memcpy(&dummyacba704c_data_54_534,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,54};memcpy(&dummyacba704c_data_58_535,&tmp999,sizeof tmp999);}
    dummyacba704c_data_5a_536 = offset(data,lcdattr);
    dummyacba704c_data_5d_539 = 3;
    dummyacba704c_data_5e_540 = 5;
    {db tmp999[2]={p_ext,18};memcpy(&dummyacba704c_data_5f_541,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={navigx,navigy};memcpy(&dummyacba704c_data_61_542,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,54};memcpy(&dummyacba704c_data_65_543,&tmp999,sizeof tmp999);}
    dummyacba704c_data_67_544 = offset(data,lcdattr);

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_messages(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        
