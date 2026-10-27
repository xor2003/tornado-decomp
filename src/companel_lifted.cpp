/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "companel.h"

	
 __attribute__((weak)) bool clearnavigpanel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclearnavigpanel, _state);}

 __attribute__((weak)) bool clearpilotpanel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kclearpilotpanel, _state);}

 __attribute__((weak)) bool drawbrackets(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawbrackets, _state);}

 __attribute__((weak)) bool drawironwork(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawironwork, _state);}

 __attribute__((weak)) bool drawnavigpanel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawnavigpanel, _state);}

 __attribute__((weak)) bool drawpilotpanel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawpilotpanel, _state);}

 __attribute__((weak)) bool initpanels(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinitpanels, _state);}

 __attribute__((weak)) bool loadpanel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kloadpanel, _state);}

 __attribute__((weak)) bool null(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knull, _state);}

 __attribute__((weak)) bool setpanelmode(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetpanelmode, _state);}

 __attribute__((weak)) bool updatepanel(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatepanel, _state);}

	
	#include "companel_default_seg_lifted.cpp"
#include "companel_pancode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::kclearnavigpanel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kclearpilotpanel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawbrackets: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawironwork: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawnavigpanel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawpilotpanel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel10: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel11: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel9: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinitpanels: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kloadpanel: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::knull: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetpanelmode: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kupdatepanel: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_companel()
          {
              {char tmp999[13]="PILOTPAN.BT2";MYCOPY(pilotpanel)}
    {char tmp999[13]="PSIDEPAN.BT2";MYCOPY(psidepanel)}
    {char tmp999[13]="NAVIGPAN.BT2";MYCOPY(navigpanel)}
    {char tmp999[13]="NSIDEPAN.BT2";MYCOPY(nsidepanel)}
    {char tmp999[13]="FRAMEPAN.BT2";MYCOPY(framepanel)}
    {char tmp999[13]="EXTRAPAN.BT2";MYCOPY(extrapanel)}
    {dw tmp999=m2c::kglobal_vga_initpanels;MYCOPY(_initpanels)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_50_130)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_52_131)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_54_132)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_56_133)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_58_134)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_5a_135)}
    {dw tmp999=m2c::kglobal_vga_loadpanel;MYCOPY(_loadpanel)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_5e_142)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_60_143)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_62_144)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_64_145)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_66_146)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_68_147)}
    {dw tmp999=m2c::kglobal_vga_clrpilotpan;MYCOPY(_clrpilotpanel)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_6c_154)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_6e_155)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_70_156)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_72_157)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_74_158)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_76_159)}
    {dw tmp999=m2c::kglobal_vga_clrnavigpan;MYCOPY(_clrnavigpanel)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_7a_166)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_7c_167)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_7e_168)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_80_169)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_82_170)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_84_171)}
    {dw tmp999=m2c::kglobal_vga_drwpilotpan;MYCOPY(_drawpilotpanel)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_88_178)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_8a_179)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_8c_180)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_8e_181)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_90_182)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_92_183)}
    {dw tmp999=m2c::kglobal_vga_drwnavigpan;MYCOPY(_drawnavigpanel)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_96_190)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_98_191)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_9a_192)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_9c_193)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_9e_194)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_a0_195)}
    {dw tmp999=m2c::kglobal_vga_ironwork;MYCOPY(_drawironwork)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_a4_201)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_a6_202)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_a8_203)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_aa_204)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_ac_205)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_ae_206)}
    {dw tmp999=m2c::kglobal_vga_brackets;MYCOPY(_drawbrackets)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_b2_213)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_b4_214)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_b6_215)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_b8_216)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_ba_217)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_bc_218)}
    {db tmp999[2]={0};MYCOPY(panelload)}
    {db tmp999=2;MYCOPY(countload)}
    {dw tmp999=m2c::kglobal_updatepilot;MYCOPY(_updatepanel)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_c3_236)}
    {dw tmp999=m2c::kglobal_updatenavig;MYCOPY(dummyf26f4877_data_c5_237)}
    {dw tmp999=m2c::kglobal_null;MYCOPY(dummyf26f4877_data_c7_238)}
    {dw tmp999=m2c::kglobal_updateextrn;MYCOPY(dummyf26f4877_data_c9_239)}
    {dw tmp999=m2c::kglobal_updatelookdown;MYCOPY(dummyf26f4877_data_cb_240)}
    {dw tmp999=m2c::kglobal_updateframe;MYCOPY(dummyf26f4877_data_cd_241)}
    {dw tmp999=m2c::kglobal_updateextrn;MYCOPY(dummyf26f4877_data_cf_242)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_companel(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        
