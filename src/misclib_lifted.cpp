/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "misclib.h"

	
 __attribute__((weak)) bool calcbitfieldval(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcalcbitfieldval, _state);}

 __attribute__((weak)) bool cls(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcls, _state);}

 __attribute__((weak)) bool convnumdol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kconvnumdol, _state);}

 __attribute__((weak)) bool convpdegdol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kconvpdegdol, _state);}

 __attribute__((weak)) bool decworddol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdecworddol, _state);}

 __attribute__((weak)) bool drawrectangle(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawrectangle, _state);}

 __attribute__((weak)) bool hexbytedol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khexbytedol, _state);}

 __attribute__((weak)) bool hexworddol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khexworddol, _state);}

 static bool libcode_0_proc(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::klibcode_0_proc, _state);}

 __attribute__((weak)) bool printegaspace(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kprintegaspace, _state);}

 __attribute__((weak)) bool quicksetup(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kquicksetup, _state);}

 __attribute__((weak)) bool runlendecode(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krunlendecode, _state);}

 __attribute__((weak)) bool selectmode(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kselectmode, _state);}

 __attribute__((weak)) bool testbitstatus(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktestbitstatus, _state);}

 static bool checknextdigit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kchecknextdigit, _state);}

 static bool clearbuffer(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclearbuffer, _state);}

 static bool convnumber(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kconvnumber, _state);}

 static bool convnumexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kconvnumexit, _state);}

 static bool convnumloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kconvnumloop, _state);}

 static bool donepdeg(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdonepdeg, _state);}

 static bool doneword(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdoneword, _state);}

 static bool firstbitloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfirstbitloop, _state);}

 static bool foundfirstbit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfoundfirstbit, _state);}

 static bool foundmode(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfoundmode, _state);}

 static bool foundstatusbit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfoundstatusbit, _state);}

 static bool hexworddolloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khexworddolloop, _state);}

 static bool keytestloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kkeytestloop, _state);}

 static bool literalcopy(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kliteralcopy, _state);}

 static bool modeprintloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kmodeprintloop, _state);}

 static bool nextdata(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knextdata, _state);}

 static bool repeatcopy(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::krepeatcopy, _state);}

 static bool selectloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kselectloop, _state);}

 static bool skipfreespace(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipfreespace, _state);}

 static bool skipkeytest(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipkeytest, _state);}

 static bool skippdeg360(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskippdeg360, _state);}

 static bool skipprint(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipprint, _state);}

 static bool statusbitloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kstatusbitloop, _state);}

 static bool testbitexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktestbitexit, _state);}

 static bool testcntrtype(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktestcntrtype, _state);}

 static bool testfordataend(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ktestfordataend, _state);}

 __attribute__((weak)) bool zdecworddol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kzdecworddol, _state);}

 static bool zeroword(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kzeroword, _state);}

	
	#include "misclib_default_seg_lifted.cpp"
#include "misclib_libcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
#ifndef M2C_CODE_EQUATE_blockfill
        case m2c::kblockfill: 	if (!blockfill(0, _state)) return false; break;
#endif
        case m2c::kcalcbitfieldval: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kchecknextdigit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclearbuffer: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcls: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kconvnumber: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kconvnumdol: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kconvnumexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kconvnumloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kconvpdegdol: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdecworddol: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdonepdeg: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdoneword: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_download
        case m2c::kdownload: 	if (!download(0, _state)) return false; break;
#endif
        case m2c::kdrawrectangle: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel10: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel11: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel12: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel13: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfirstbitloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfoundfirstbit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfoundmode: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfoundstatusbit: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_getchar
        case m2c::kgetchar: 	if (!getchar(0, _state)) return false; break;
#endif
        case m2c::khexbytedol: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khexworddol: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khexworddolloop: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_initmsprites
        case m2c::kinitmsprites: 	if (!initmsprites(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_initqsprites
        case m2c::kinitqsprites: 	if (!initqsprites(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_initssprites
        case m2c::kinitssprites: 	if (!initssprites(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_keypress
        case m2c::kkeypress: 	if (!keypress(0, _state)) return false; break;
#endif
        case m2c::kkeytestloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::klibcode_0_proc: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_linedraw
        case m2c::klinedraw: 	if (!linedraw(0, _state)) return false; break;
#endif
        case m2c::kliteralcopy: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::kmodeprintloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knextdata: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_printdol
        case m2c::kprintdol: 	if (!printdol(0, _state)) return false; break;
#endif
        case m2c::kprintegaspace: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kquicksetup: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::krepeatcopy: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_reseed
        case m2c::kreseed: 	if (!reseed(0, _state)) return false; break;
#endif
        case m2c::krunlendecode: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kselectloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kselectmode: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_setsspriteclip
        case m2c::ksetsspriteclip: 	if (!setsspriteclip(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_setvideomode
        case m2c::ksetvideomode: 	if (!setvideomode(0, _state)) return false; break;
#endif
        case m2c::kskipfreespace: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipkeytest: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskippdeg360: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipprint: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kstatusbitloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktestbitexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktestbitstatus: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktestcntrtype: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ktestfordataend: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kzdecworddol: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kzeroword: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_misclib()
          {
              {char tmp999[16]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};MYCOPY(hexchars)}
    {db tmp999=5;MYCOPY(dummy6cdc3e8c_data_10_298)}
    {db tmp999=2;MYCOPY(dummy6cdc3e8c_data_11_299)}
    {db tmp999=17;MYCOPY(dummy6cdc3e8c_data_12_300)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy6cdc3e8c_data_13_301)}
    {dw tmp999[2]={0*4,0};MYCOPY(dummy6cdc3e8c_data_15_302)}
    {char tmp999[19]={'E','G','A',' ','S','P','R','I','T','E',' ','U','S','A','G','E',':','-',' '};MYCOPY(dummy6cdc3e8c_data_19_303)}
    {db tmp999[2]={p_ext,35};MYCOPY(dummy6cdc3e8c_data_2c_304)}
    {dw tmp999=m2c::near_offset_external(egafreespace)+4;MYCOPY(dummy6cdc3e8c_data_2e_305)}
    {dw tmp999=m2c::near_offset_external(egafreespace)+4;MYCOPY(dummy6cdc3e8c_data_30_306)}
    {db tmp999[2]={p_ext,21};MYCOPY(dummy6cdc3e8c_data_32_307)}
    {dw tmp999[2]={dw(65530*4),6};MYCOPY(dummy6cdc3e8c_data_34_308)}
    {db tmp999[2]={p_ext,35};MYCOPY(dummy6cdc3e8c_data_38_309)}
    {dw tmp999=m2c::near_offset_external(egafreespace)+6;MYCOPY(dummy6cdc3e8c_data_3a_310)}
    {dw tmp999=m2c::near_offset_external(egafreespace)+6;MYCOPY(dummy6cdc3e8c_data_3c_311)}
    {db tmp999[2]={p_ext,21};MYCOPY(dummy6cdc3e8c_data_3e_312)}
    {dw tmp999[2]={dw(65530*4),6};MYCOPY(dummy6cdc3e8c_data_40_313)}
    {db tmp999[2]={p_ext,35};MYCOPY(dummy6cdc3e8c_data_44_314)}
    {dw tmp999=m2c::near_offset_external(egafreespace)+8;MYCOPY(dummy6cdc3e8c_data_46_315)}
    {dw tmp999=m2c::near_offset_external(egafreespace)+8;MYCOPY(dummy6cdc3e8c_data_48_316)}
    {db tmp999[2]={p_ext,21};MYCOPY(dummy6cdc3e8c_data_4a_317)}
    {dw tmp999[2]={dw(65530*4),6};MYCOPY(dummy6cdc3e8c_data_4c_318)}
    {db tmp999[2]={p_ext,35};MYCOPY(dummy6cdc3e8c_data_50_319)}
    {dw tmp999=m2c::near_offset_external(egafreespace)+10;MYCOPY(dummy6cdc3e8c_data_52_320)}
    {dw tmp999=m2c::near_offset_external(egafreespace)+10;MYCOPY(dummy6cdc3e8c_data_54_321)}
    {db tmp999[2]={p_ext,21};MYCOPY(dummy6cdc3e8c_data_56_322)}
    {dw tmp999[2]={dw(65530*4),6};MYCOPY(dummy6cdc3e8c_data_58_323)}
    {db tmp999[2]={p_ext,35};MYCOPY(dummy6cdc3e8c_data_5c_324)}
    {dw tmp999=m2c::near_offset_external(egafreespace)+12;MYCOPY(dummy6cdc3e8c_data_5e_325)}
    {dw tmp999=m2c::near_offset_external(egafreespace)+12;MYCOPY(dummy6cdc3e8c_data_60_326)}
    {db tmp999[2]={p_ext,21};MYCOPY(dummy6cdc3e8c_data_62_327)}
    {dw tmp999[2]={dw(65530*4),6};MYCOPY(dummy6cdc3e8c_data_64_328)}
    {db tmp999[2]={p_ext,35};MYCOPY(dummy6cdc3e8c_data_68_329)}
    {dw tmp999=m2c::near_offset_external(egafreespace)+14;MYCOPY(dummy6cdc3e8c_data_6a_330)}
    {dw tmp999=m2c::near_offset_external(egafreespace)+14;MYCOPY(dummy6cdc3e8c_data_6c_331)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy6cdc3e8c_data_6e_332)}
    {dw tmp999[2]={0*4,36};MYCOPY(dummy6cdc3e8c_data_70_333)}
    {char tmp999[16]={'H','I','T',' ','A','N','Y',' ','K','E','Y',' ','.','.','.',' '};MYCOPY(dummy6cdc3e8c_data_74_334)}
    {char tmp999[23]={'\r','\n','S','e','l','e','c','t',' ','s','c','r','e','e','n',' ','t','y','p','e',':',' ','$'};MYCOPY(promptdol)}
    {char tmp999[21]={'[','H',']',' ','H','e','r','c','u','l','e','s','\r','\n',9,9,' ',' ',' ',' ','$'};MYCOPY(hgcdol)}
    {char tmp999[31]={'[','S',']',' ','H','e','r','c','u','l','e','s',' ','E','m','u','l','a','t','i','o','n','\r','\n',9,9,' ',' ',' ',' ','$'};MYCOPY(hemdol)}
    {char tmp999[34]={'[','C',']',' ','C','G','A',' ','o','r',' ','T','A','N','D','Y',' ','4',' ','C','o','l','o','u','r','\r','\n',9,9,' ',' ',' ',' ','$'};MYCOPY(cgadol)}
    {char tmp999[16]={'[','E',']',' ','E','G','A','\r','\n',9,9,' ',' ',' ',' ','$'};MYCOPY(egadol)}
    {char tmp999[28]={'[','T',']',' ','T','A','N','D','Y',' ','1','6',' ','C','o','l','o','u','r','\r','\n',9,9,' ',' ',' ',' ','$'};MYCOPY(tandol)}
    {char tmp999[38]={'[','Y',']',' ','T','A','N','D','Y',' ','1','6',' ','C','o','l','o','u','r',' ','E','m','u','l','a','t','i','o','n','\r','\n',9,9,' ',' ',' ',' ','$'};MYCOPY(temdol)}
    {char tmp999[26]={'[','X',']',' ','V','G','A',' ','1','6',' ','C','o','l','o','u','r','\r','\n',9,9,' ',' ',' ',' ','$'};MYCOPY(v16dol)}
    {char tmp999[27]={'[','V',']',' ','V','G','A',' ','2','5','6',' ','C','o','l','o','u','r','\r','\n',9,9,' ',' ',' ',' ','$'};MYCOPY(vgadol)}
    {char tmp999[3]={'\r','\n','$'};MYCOPY(taildol)}
    {dw tmp999=offset(data,hgcdol);MYCOPY(modedolptrs)}
    {dw tmp999=offset(data,hemdol);MYCOPY(dummy6cdc3e8c_data_17e_358)}
    {dw tmp999=offset(data,cgadol);MYCOPY(dummy6cdc3e8c_data_180_359)}
    {dw tmp999=offset(data,egadol);MYCOPY(dummy6cdc3e8c_data_182_360)}
    {dw tmp999=offset(data,tandol);MYCOPY(dummy6cdc3e8c_data_184_361)}
    {dw tmp999=offset(data,temdol);MYCOPY(dummy6cdc3e8c_data_186_362)}
    {dw tmp999=offset(data,v16dol);MYCOPY(dummy6cdc3e8c_data_188_363)}
    {dw tmp999=offset(data,vgadol);MYCOPY(dummy6cdc3e8c_data_18a_364)}
    {char tmp999='H';MYCOPY(modekeys)}
    {char tmp999='S';MYCOPY(dummy6cdc3e8c_data_18d_366)}
    {char tmp999='C';MYCOPY(dummy6cdc3e8c_data_18e_367)}
    {char tmp999='E';MYCOPY(dummy6cdc3e8c_data_18f_368)}
    {char tmp999='T';MYCOPY(dummy6cdc3e8c_data_190_369)}
    {char tmp999='Y';MYCOPY(dummy6cdc3e8c_data_191_370)}
    {char tmp999='X';MYCOPY(dummy6cdc3e8c_data_192_371)}
    {char tmp999='V';MYCOPY(dummy6cdc3e8c_data_193_372)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_misclib(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        
