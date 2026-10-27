/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "input.h"

	
 __attribute__((weak)) bool cleartoend(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcleartoend, _state);}

 __attribute__((weak)) bool getchar(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgetchar, _state);}

 __attribute__((weak)) bool inputdol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinputdol, _state);}

 __attribute__((weak)) bool keypress(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kkeypress, _state);}

 __attribute__((weak)) bool keyrelease(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kkeyrelease, _state);}

 __attribute__((weak)) bool printinputdol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprintinputdol, _state);}

 __attribute__((weak)) bool readkbd(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreadkbd, _state);}

 __attribute__((weak)) bool scanmenukeys(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanmenukeys, _state);}

 __attribute__((weak)) bool updatemenukeys(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatemenukeys, _state);}

 __attribute__((weak)) bool alphaonly(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kalphaonly, _state);}

 static bool asm_delete(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kasm_delete, _state);}

 static bool cleared(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcleared, _state);}

 static bool clearloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclearloop, _state);}

 static bool contloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontloop, _state);}

 static bool enter(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kenter, _state);}

 static bool escape(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kescape, _state);}

 static bool inputloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinputloop, _state);}

 static bool keypressed(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kkeypressed, _state);}

 static bool nocursor(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knocursor, _state);}

 __attribute__((weak)) bool numonly(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knumonly, _state);}

 static bool readkbdexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreadkbdexit, _state);}

 static bool readloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreadloop, _state);}

 static bool rejectchar(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krejectchar, _state);}

 static bool releaseloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kreleaseloop, _state);}

 static bool scanmkeysfail(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanmkeysfail, _state);}

 static bool scanmkeyslp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanmkeyslp, _state);}

 static bool scanmkeyspass(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kscanmkeyspass, _state);}

 __attribute__((weak)) bool setchar(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetchar, _state);}

 static bool skipchar(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipchar, _state);}

 static bool skipdelete(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipdelete, _state);}

 static bool updatemkeysexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatemkeysexit, _state);}

 static bool updatemkeyslp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatemkeyslp, _state);}

	
	#include "input_default_seg_lifted.cpp"
#include "input_libcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kalphaonly: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kasm_delete: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcleared: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclearloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcleartoend: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontloop: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_download
        case m2c::kdownload: 	if (!download(0, _state)) return false; break;
#endif
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kenter: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kescape: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgetchar: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinputdol: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinputloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kkeypress: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kkeypressed: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kkeyrelease: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::knocursor: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knumonly: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_printdol
        case m2c::kprintdol: 	if (!printdol(0, _state)) return false; break;
#endif
        case m2c::kprintinputdol: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kreadkbd: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kreadkbdexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kreadloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krejectchar: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kreleaseloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanmenukeys: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanmkeysfail: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanmkeyslp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kscanmkeyspass: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetchar: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipchar: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipdelete: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatemenukeys: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatemkeysexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatemkeyslp: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_input()
          {
              {db tmp999[2]={input_all,0};MYCOPY(inputmode)}
    {dw tmp999=m2c::kglobal_setchar;MYCOPY(filter)}
    {dw tmp999=m2c::kglobal_alphaonly;MYCOPY(dummyc380a36f_data_4_228)}
    {dw tmp999=m2c::kglobal_numonly;MYCOPY(dummyc380a36f_data_6_229)}
    {db tmp999[2]={127,0};MYCOPY(cursorchar)}
    {dw tmp999=offset(data,keytable);MYCOPY(tableptr)}
    {dw tmp999=offset(data,shifttable);MYCOPY(dummyc380a36f_data_c_232)}
    {char tmp999[8]={0,27,'1','2','3','4','5','6'};MYCOPY(keytable)}
    {char tmp999[8]={'7','8','9','0','-','=',8,0};MYCOPY(dummyc380a36f_data_16_234)}
    {char tmp999[8]={'Q','W','E','R','T','Y','U','I'};MYCOPY(dummyc380a36f_data_1e_235)}
    {char tmp999[8]={'O','P','[',']','\r',0,'A','S'};MYCOPY(dummyc380a36f_data_26_236)}
    {char tmp999[8]={'D','F','G','H','J','K','L',';'};MYCOPY(dummyc380a36f_data_2e_237)}
    {char tmp999[8]={'\'','\\',0,'`','Z','X','C','V'};MYCOPY(dummyc380a36f_data_36_238)}
    {char tmp999[8]={'B','N','M',',','.','/',0,'*'};MYCOPY(dummyc380a36f_data_3e_239)}
    {char tmp999[8]={0,' ',0,0,0,0,0,0};MYCOPY(dummyc380a36f_data_46_240)}
    {db tmp999[8]={nul,nul,nul,nul,nul,nul,nul,nul};MYCOPY(dummyc380a36f_data_4e_241)}
    {char tmp999[8]={0,0,'-',8,0,0,'+',0};MYCOPY(dummyc380a36f_data_56_242)}
    {db tmp999[8]={nul,nul,nul,del,nul,nul,nul,nul};MYCOPY(dummyc380a36f_data_5e_243)}
    {char tmp999[8]={0,27,'!','@','#','$','%','^'};MYCOPY(shifttable)}
    {char tmp999[8]={'&','*','(',')','_','+',8,0};MYCOPY(dummyc380a36f_data_6e_245)}
    {char tmp999[8]={'q','w','e','r','t','y','u','i'};MYCOPY(dummyc380a36f_data_76_246)}
    {char tmp999[8]={'o','p','{','}','\r',0,'a','s'};MYCOPY(dummyc380a36f_data_7e_247)}
    {char tmp999[8]={'d','f','g','h','j','k','l',':'};MYCOPY(dummyc380a36f_data_86_248)}
    {char tmp999[8]={'\"','|',0,'~','z','x','c','v'};MYCOPY(dummyc380a36f_data_8e_249)}
    {char tmp999[8]={'b','n','m','<','>','?',0,'*'};MYCOPY(dummyc380a36f_data_96_250)}
    {char tmp999[8]={0,' ',0,0,0,0,0,0};MYCOPY(dummyc380a36f_data_9e_251)}
    {db tmp999[8]={nul,nul,nul,nul,nul,nul,nul,nul};MYCOPY(dummyc380a36f_data_a6_252)}
    {char tmp999[8]={0,0,'-',8,0,0,'+',0};MYCOPY(dummyc380a36f_data_ae_253)}
    {db tmp999[8]={nul,nul,nul,del,nul,nul,nul,nul};MYCOPY(dummyc380a36f_data_b6_254)}
    {menukey tmp999={1,0,0};MYCOPY(menukeylist)}
    {menukey tmp999={57,0,0};MYCOPY(__m2c_structrow_c380a36f_269)}
    {menukey tmp999={59,0,0};MYCOPY(__m2c_structrow_c380a36f_270)}
    {menukey tmp999={60,0,0};MYCOPY(__m2c_structrow_c380a36f_271)}
    {menukey tmp999={61,0,0};MYCOPY(__m2c_structrow_c380a36f_272)}
    {menukey tmp999={62,0,0};MYCOPY(__m2c_structrow_c380a36f_273)}
    {menukey tmp999={63,0,0};MYCOPY(__m2c_structrow_c380a36f_274)}
    {menukey tmp999={64,0,0};MYCOPY(__m2c_structrow_c380a36f_275)}
    {menukey tmp999={65,0,0};MYCOPY(__m2c_structrow_c380a36f_276)}
    {menukey tmp999={66,0,0};MYCOPY(__m2c_structrow_c380a36f_277)}
    {menukey tmp999={67,0,0};MYCOPY(__m2c_structrow_c380a36f_278)}
    {menukey tmp999={68,0,0};MYCOPY(__m2c_structrow_c380a36f_279)}
    {db tmp999=255;MYCOPY(dummyc380a36f_data_e2_280)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_input(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        
