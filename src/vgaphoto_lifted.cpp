/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "vgaphoto.h"

	
 __attribute__((weak)) bool sortscrdata(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortscrdata, _state);}

 __attribute__((weak)) bool vgaphotodflt(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvgaphotodflt, _state);}

 __attribute__((weak)) bool vgaphotouser(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvgaphotouser, _state);}

 __attribute__((weak)) bool writescreenline(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kwritescreenline, _state);}

 static bool vgaphotoerror(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvgaphotoerror, _state);}

 static bool vgaphotoexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kvgaphotoexit, _state);}

 static bool writeloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kwriteloop, _state);}

	
	#include "vgaphoto_default_seg_lifted.cpp"
#include "vgaphoto_gcode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
#ifndef M2C_CODE_EQUATE_aborttodos
        case m2c::kaborttodos: 	if (!aborttodos(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_closefile
        case m2c::kclosefile: 	if (!closefile(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_createfile
        case m2c::kcreatefile: 	if (!createfile(0, _state)) return false; break;
#endif
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_fwrite
        case m2c::kfwrite: 	if (!fwrite(0, _state)) return false; break;
#endif
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_readdacblock
        case m2c::kreaddacblock: 	if (!readdacblock(0, _state)) return false; break;
#endif
        case m2c::ksortscrdata: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvgaphotodflt: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvgaphotoerror: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvgaphotoexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kvgaphotouser: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kwriteloop: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kwritescreenline: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_vgaphoto()
          {
              {char tmp999[6]={'P','H','O','T','O','_'};MYCOPY(filename)}
    {char tmp999='0';MYCOPY(id_msd)}
    {char tmp999='0';MYCOPY(id_lsd)}
    {char tmp999[5]=".LBM";MYCOPY(dummyd8483b90_data_8_103)}
    {db tmp999=128-1;MYCOPY(bytecount128)}
    {db tmp999=64-1;MYCOPY(bytecount64)}
    {dw tmp999=0;MYCOPY(screenaddr)}
    {db tmp999[8]={70,79,82,77,0,1,0,254};MYCOPY(ilbmheader)}
    {db tmp999[8]={80,66,77,32,66,77,72,68};MYCOPY(dummyd8483b90_hdr_data_19_125)}
    {db tmp999[8]={0,0,0,20,1,64,0,200};MYCOPY(dummyd8483b90_hdr_data_21_126)}
    {db tmp999[8]={0,0,0,0,8,0,1,0};MYCOPY(dummyd8483b90_hdr_data_29_127)}
    {db tmp999[8]={0,255,5,6,1,64,0,200};MYCOPY(dummyd8483b90_hdr_data_31_128)}
    {db tmp999[8]={67,77,65,80,0,0,3,0};MYCOPY(dummyd8483b90_hdr_data_39_129)}
    {db tmp999[8]={0,0,0,0,0,170,0,170};MYCOPY(cmap)}
    {db tmp999[8]={0,0,170,170,170,0,0,170};MYCOPY(dummyd8483b90_hdr_data_49_131)}
    {db tmp999[8]={0,170,170,85,0,170,170,170};MYCOPY(dummyd8483b90_hdr_data_51_132)}
    {db tmp999[8]={85,85,85,85,85,255,85,255};MYCOPY(dummyd8483b90_hdr_data_59_134)}
    {db tmp999[8]={85,85,255,255,255,85,85,255};MYCOPY(dummyd8483b90_hdr_data_61_135)}
    {db tmp999[8]={85,255,255,255,85,255,255,255};MYCOPY(dummyd8483b90_hdr_data_69_136)}
    {db tmp999[8]={239,239,239,223,223,223,211,211};MYCOPY(dummyd8483b90_hdr_data_71_138)}
    {db tmp999[8]={211,195,195,195,183,183,183,171};MYCOPY(dummyd8483b90_hdr_data_79_139)}
    {db tmp999[8]={171,171,155,155,155,143,143,143};MYCOPY(dummyd8483b90_hdr_data_81_140)}
    {db tmp999[8]={127,127,127,115,115,115,103,103};MYCOPY(dummyd8483b90_hdr_data_89_141)}
    {db tmp999[8]={103,87,87,87,75,75,75,59};MYCOPY(dummyd8483b90_hdr_data_91_142)}
    {db tmp999[8]={59,59,47,47,47,35,35,35};MYCOPY(dummyd8483b90_hdr_data_99_143)}
    {db tmp999[8]={255,0,0,239,0,0,227,0};MYCOPY(dummyd8483b90_hdr_data_a1_144)}
    {db tmp999[8]={0,215,0,0,203,0,0,191};MYCOPY(dummyd8483b90_hdr_data_a9_145)}
    {db tmp999[8]={0,0,179,0,0,167,0,0};MYCOPY(dummyd8483b90_hdr_data_b1_146)}
    {db tmp999[8]={155,0,0,139,0,0,127,0};MYCOPY(dummyd8483b90_hdr_data_b9_147)}
    {db tmp999[8]={0,115,0,0,103,0,0,91};MYCOPY(dummyd8483b90_hdr_data_c1_148)}
    {db tmp999[8]={0,0,79,0,0,64,0,0};MYCOPY(dummyd8483b90_hdr_data_c9_149)}
    {db tmp999[8]={255,218,218,255,186,186,255,159};MYCOPY(dummyd8483b90_hdr_data_d1_150)}
    {db tmp999[8]={159,255,127,127,255,95,95,255};MYCOPY(dummyd8483b90_hdr_data_d9_151)}
    {db tmp999[8]={64,64,255,32,32,255,0,0};MYCOPY(dummyd8483b90_hdr_data_e1_152)}
    {db tmp999[8]={252,168,92,252,152,64,252,136};MYCOPY(dummyd8483b90_hdr_data_e9_153)}
    {db tmp999[8]={32,252,120,0,228,108,0,204};MYCOPY(dummyd8483b90_hdr_data_f1_154)}
    {db tmp999[8]={96,0,180,84,0,156,76,0};MYCOPY(dummyd8483b90_hdr_data_f9_155)}
    {db tmp999[8]={252,252,216,252,252,184,252,252};MYCOPY(dummyd8483b90_hdr_data_101_156)}
    {db tmp999[8]={156,252,252,124,252,248,92,252};MYCOPY(dummyd8483b90_hdr_data_109_158)}
    {db tmp999[8]={244,64,252,244,32,252,244,0};MYCOPY(dummyd8483b90_hdr_data_111_159)}
    {db tmp999[8]={228,216,0,204,196,0,180,172};MYCOPY(dummyd8483b90_hdr_data_119_160)}
    {db tmp999[8]={0,156,156,0,132,132,0,112};MYCOPY(dummyd8483b90_hdr_data_121_161)}
    {db tmp999[8]={108,0,88,84,0,64,64,0};MYCOPY(dummyd8483b90_hdr_data_129_162)}
    {db tmp999[8]={208,252,92,196,252,64,180,252};MYCOPY(dummyd8483b90_hdr_data_131_163)}
    {db tmp999[8]={32,160,252,0,144,228,0,128};MYCOPY(dummyd8483b90_hdr_data_139_164)}
    {db tmp999[8]={204,0,116,180,0,96,156,0};MYCOPY(dummyd8483b90_hdr_data_141_165)}
    {db tmp999[8]={216,252,216,188,252,184,156,252};MYCOPY(dummyd8483b90_hdr_data_149_166)}
    {db tmp999[8]={156,128,252,124,96,252,92,64};MYCOPY(dummyd8483b90_hdr_data_151_167)}
    {db tmp999[8]={252,64,32,252,32,0,252,0};MYCOPY(dummyd8483b90_hdr_data_159_168)}
    {db tmp999[8]={0,255,0,0,239,0,0,227};MYCOPY(dummyd8483b90_hdr_data_161_169)}
    {db tmp999[8]={0,0,215,0,7,203,0,7};MYCOPY(dummyd8483b90_hdr_data_169_170)}
    {db tmp999[8]={191,0,7,179,0,7,167,0};MYCOPY(dummyd8483b90_hdr_data_171_171)}
    {db tmp999[8]={7,155,0,7,139,0,7,127};MYCOPY(dummyd8483b90_hdr_data_179_172)}
    {db tmp999[8]={0,7,115,0,7,103,0,7};MYCOPY(dummyd8483b90_hdr_data_181_173)}
    {db tmp999[8]={91,0,7,79,0,4,64,0};MYCOPY(dummyd8483b90_hdr_data_189_174)}
    {db tmp999[8]={218,255,255,184,252,252,156,252};MYCOPY(dummyd8483b90_hdr_data_191_175)}
    {db tmp999[8]={252,124,252,248,92,252,252,64};MYCOPY(dummyd8483b90_hdr_data_199_176)}
    {db tmp999[8]={252,252,32,252,252,0,252,252};MYCOPY(dummyd8483b90_hdr_data_1a1_177)}
    {db tmp999[8]={0,228,228,0,204,204,0,180};MYCOPY(dummyd8483b90_hdr_data_1a9_179)}
    {db tmp999[8]={180,0,156,156,0,132,132,0};MYCOPY(dummyd8483b90_hdr_data_1b1_180)}
    {db tmp999[8]={112,112,0,88,88,0,64,64};MYCOPY(dummyd8483b90_hdr_data_1b9_181)}
    {db tmp999[8]={92,188,252,64,176,252,32,168};MYCOPY(dummyd8483b90_hdr_data_1c1_182)}
    {db tmp999[8]={252,0,156,252,0,140,228,0};MYCOPY(dummyd8483b90_hdr_data_1c9_183)}
    {db tmp999[8]={124,204,0,108,180,0,92,156};MYCOPY(dummyd8483b90_hdr_data_1d1_184)}
    {db tmp999[8]={218,218,255,186,191,255,159,159};MYCOPY(dummyd8483b90_hdr_data_1d9_185)}
    {db tmp999[8]={255,127,128,255,95,96,255,64};MYCOPY(dummyd8483b90_hdr_data_1e1_186)}
    {db tmp999[8]={64,255,32,37,255,0,5,255};MYCOPY(dummyd8483b90_hdr_data_1e9_187)}
    {db tmp999[8]={0,0,255,0,0,239,0,0};MYCOPY(dummyd8483b90_hdr_data_1f1_188)}
    {db tmp999[8]={227,0,0,215,0,0,203,0};MYCOPY(dummyd8483b90_hdr_data_1f9_189)}
    {db tmp999[8]={0,191,0,0,179,0,0,167};MYCOPY(dummyd8483b90_hdr_data_201_190)}
    {db tmp999[8]={0,0,155,0,0,139,0,0};MYCOPY(dummyd8483b90_hdr_data_209_191)}
    {db tmp999[8]={127,0,0,115,0,0,103,0};MYCOPY(dummyd8483b90_hdr_data_211_192)}
    {db tmp999[8]={0,91,0,0,79,0,0,64};MYCOPY(dummyd8483b90_hdr_data_219_193)}
    {db tmp999[8]={240,218,255,229,186,255,218,159};MYCOPY(dummyd8483b90_hdr_data_221_194)}
    {db tmp999[8]={255,208,127,255,202,95,255,191};MYCOPY(dummyd8483b90_hdr_data_229_195)}
    {db tmp999[8]={64,255,181,32,255,170,0,255};MYCOPY(dummyd8483b90_hdr_data_231_197)}
    {db tmp999[8]={154,0,229,128,0,207,117,0};MYCOPY(dummyd8483b90_hdr_data_239_198)}
    {db tmp999[8]={181,96,0,159,80,0,133,69};MYCOPY(dummyd8483b90_hdr_data_241_199)}
    {db tmp999[8]={0,112,53,0,90,42,0,64};MYCOPY(dummyd8483b90_hdr_data_249_200)}
    {db tmp999[8]={255,218,255,255,186,255,255,159};MYCOPY(dummyd8483b90_hdr_data_251_201)}
    {db tmp999[8]={255,255,127,255,255,95,255,255};MYCOPY(dummyd8483b90_hdr_data_259_202)}
    {db tmp999[8]={64,255,255,32,255,255,0,255};MYCOPY(dummyd8483b90_hdr_data_261_204)}
    {db tmp999[8]={224,0,229,202,0,207,181,0};MYCOPY(dummyd8483b90_hdr_data_269_205)}
    {db tmp999[8]={181,159,0,159,133,0,133,111};MYCOPY(dummyd8483b90_hdr_data_271_206)}
    {db tmp999[8]={0,112,90,0,90,64,0,64};MYCOPY(dummyd8483b90_hdr_data_279_207)}
    {db tmp999[8]={255,234,223,255,224,208,255,218};MYCOPY(dummyd8483b90_hdr_data_281_208)}
    {db tmp999[8]={197,255,213,191,255,207,176,255};MYCOPY(dummyd8483b90_hdr_data_289_210)}
    {db tmp999[8]={197,165,255,191,159,255,186,144};MYCOPY(dummyd8483b90_hdr_data_291_211)}
    {db tmp999[8]={255,176,128,255,165,112,255,159};MYCOPY(dummyd8483b90_hdr_data_299_212)}
    {db tmp999[8]={96,240,149,95,234,143,90,223};MYCOPY(dummyd8483b90_hdr_data_2a1_213)}
    {db tmp999[8]={138,85,208,128,80,202,127,79};MYCOPY(dummyd8483b90_hdr_data_2a9_214)}
    {db tmp999[8]={191,122,74,181,112,69,170,106};MYCOPY(dummyd8483b90_hdr_data_2b1_215)}
    {db tmp999[8]={64,160,101,63,159,96,58,144};MYCOPY(dummyd8483b90_hdr_data_2b9_216)}
    {db tmp999[8]={95,53,138,90,48,128,80,47};MYCOPY(dummyd8483b90_hdr_data_2c1_217)}
    {db tmp999[8]={117,79,42,111,74,37,95,64};MYCOPY(dummyd8483b90_hdr_data_2c9_218)}
    {db tmp999[8]={32,85,63,31,74,58,26,64};MYCOPY(dummyd8483b90_hdr_data_2d1_219)}
    {db tmp999[8]={48,26,58,47,21,42,32,15};MYCOPY(dummyd8483b90_hdr_data_2d9_220)}
    {db tmp999[8]={0};MYCOPY(dummyd8483b90_hdr_data_2e1_221)}
    {db tmp999[8]={0};MYCOPY(dummyd8483b90_hdr_data_2e9_222)}
    {db tmp999[8]={0};MYCOPY(dummyd8483b90_hdr_data_2f1_223)}
    {db tmp999[8]={199,43,43,199,79,43,199,119};MYCOPY(dummyd8483b90_hdr_data_2f9_224)}
    {db tmp999[8]={43,199,159,43,199,199,43,159};MYCOPY(dummyd8483b90_hdr_data_301_225)}
    {db tmp999[8]={199,43,119,199,43,79,199,43};MYCOPY(dummyd8483b90_hdr_data_309_226)}
    {db tmp999[8]={43,199,51,43,199,95,43,199};MYCOPY(dummyd8483b90_hdr_data_311_227)}
    {db tmp999[8]={139,43,199,183,43,171,199,43};MYCOPY(dummyd8483b90_hdr_data_319_228)}
    {db tmp999[8]={127,199,43,83,199,47,43,199};MYCOPY(dummyd8483b90_hdr_data_321_229)}
    {db tmp999[8]={91,43,199,135,43,199,179,43};MYCOPY(dummyd8483b90_hdr_data_329_230)}
    {db tmp999[8]={199,199,43,175,199,43,131,199};MYCOPY(dummyd8483b90_hdr_data_331_231)}
    {db tmp999[8]={43,87,199,43,43,255,255,255};MYCOPY(dummyd8483b90_hdr_data_339_232)}
    {db tmp999[8]={68,80,80,83,0,0,0,110};MYCOPY(dummyd8483b90_hdr_data_341_234)}
    {db tmp999[8]={0,2,0,0,0,0,0,0};MYCOPY(dummyd8483b90_hdr_data_349_235)}
    {db tmp999[8]={0,0,0,0,0,0,1,104};MYCOPY(dummyd8483b90_hdr_data_351_236)}
    {db tmp999[8]={0,0,1,64,0,200,0,2};MYCOPY(dummyd8483b90_hdr_data_359_237)}
    {db tmp999[8]={0,15,2,128,0,0,0,184};MYCOPY(dummyd8483b90_hdr_data_361_238)}
    {db tmp999[8]={0,0,0,184,0,0,0,0};MYCOPY(dummyd8483b90_hdr_data_369_239)}
    {db tmp999[8]={0};MYCOPY(dummyd8483b90_hdr_data_371_240)}
    {db tmp999[8]={0};MYCOPY(dummyd8483b90_hdr_data_379_241)}
    {db tmp999[8]={0};MYCOPY(dummyd8483b90_hdr_data_381_242)}
    {db tmp999[8]={0};MYCOPY(dummyd8483b90_hdr_data_389_243)}
    {db tmp999[8]={0,0,0,1,0,0,0,0};MYCOPY(dummyd8483b90_hdr_data_391_244)}
    {db tmp999[8]={0};MYCOPY(dummyd8483b90_hdr_data_399_245)}
    {db tmp999[8]={0,0,0,1,0,0,0,0};MYCOPY(dummyd8483b90_hdr_data_3a1_246)}
    {db tmp999[8]={0};MYCOPY(dummyd8483b90_hdr_data_3a9_247)}
    {db tmp999[8]={0,0,0,1,0,0,67,82};MYCOPY(dummyd8483b90_hdr_data_3b1_248)}
    {db tmp999[8]={78,71,0,0,0,8,0,0};MYCOPY(dummyd8483b90_hdr_data_3b9_249)}
    {db tmp999[8]={0,0,0,0,16,31,67,82};MYCOPY(dummyd8483b90_hdr_data_3c1_250)}
    {db tmp999[8]={78,71,0,0,0,8,0,0};MYCOPY(dummyd8483b90_hdr_data_3c9_251)}
    {db tmp999[8]={0,0,0,0,32,47,67,82};MYCOPY(dummyd8483b90_hdr_data_3d1_252)}
    {db tmp999[8]={78,71,0,0,0,8,0,0};MYCOPY(dummyd8483b90_hdr_data_3d9_253)}
    {db tmp999[8]={0,0,0,0,96,111,67,82};MYCOPY(dummyd8483b90_hdr_data_3e1_254)}
    {db tmp999[8]={78,71,0,0,0,8,0,0};MYCOPY(dummyd8483b90_hdr_data_3e9_255)}
    {db tmp999[8]={0,0,0,0,144,159,67,82};MYCOPY(dummyd8483b90_hdr_data_3f1_256)}
    {db tmp999[8]={78,71,0,0,0,8,0,0};MYCOPY(dummyd8483b90_hdr_data_3f9_257)}
    {db tmp999[8]={0,0,0,0,0,0,67,82};MYCOPY(dummyd8483b90_hdr_data_401_258)}
    {db tmp999[8]={78,71,0,0,0,8,0,0};MYCOPY(dummyd8483b90_hdr_data_409_259)}
    {db tmp999[8]={0,0,0,0,0,0,67,82};MYCOPY(dummyd8483b90_hdr_data_411_260)}
    {db tmp999[8]={78,71,0,0,0,8,0,0};MYCOPY(dummyd8483b90_hdr_data_419_261)}
    {db tmp999[8]={0,0,0,0,0,0,67,82};MYCOPY(dummyd8483b90_hdr_data_421_262)}
    {db tmp999[8]={78,71,0,0,0,8,0,0};MYCOPY(dummyd8483b90_hdr_data_429_263)}
    {db tmp999[8]={0,0,0,0,0,0,67,82};MYCOPY(dummyd8483b90_hdr_data_431_264)}
    {db tmp999[8]={78,71,0,0,0,8,0,0};MYCOPY(dummyd8483b90_hdr_data_439_265)}
    {db tmp999[8]={0,0,0,0,0,0,67,82};MYCOPY(dummyd8483b90_hdr_data_441_266)}
    {db tmp999[8]={78,71,0,0,0,8,0,0};MYCOPY(dummyd8483b90_hdr_data_449_267)}
    {db tmp999[8]={0,0,0,0,0,0,67,82};MYCOPY(dummyd8483b90_hdr_data_451_268)}
    {db tmp999[8]={78,71,0,0,0,8,0,0};MYCOPY(dummyd8483b90_hdr_data_459_269)}
    {db tmp999[8]={0,0,0,0,0,0,67,82};MYCOPY(dummyd8483b90_hdr_data_461_270)}
    {db tmp999[8]={78,71,0,0,0,8,0,0};MYCOPY(dummyd8483b90_hdr_data_469_271)}
    {db tmp999[8]={0,0,0,0,0,0,67,82};MYCOPY(dummyd8483b90_hdr_data_471_272)}
    {db tmp999[8]={78,71,0,0,0,8,0,0};MYCOPY(dummyd8483b90_hdr_data_479_273)}
    {db tmp999[8]={0,0,0,0,0,0,67,82};MYCOPY(dummyd8483b90_hdr_data_481_274)}
    {db tmp999[8]={78,71,0,0,0,8,0,0};MYCOPY(dummyd8483b90_hdr_data_489_275)}
    {db tmp999[8]={0,0,0,0,0,0,67,82};MYCOPY(dummyd8483b90_hdr_data_491_276)}
    {db tmp999[8]={78,71,0,0,0,8,0,0};MYCOPY(dummyd8483b90_hdr_data_499_277)}
    {db tmp999[8]={0,0,0,0,0,0,67,82};MYCOPY(dummyd8483b90_hdr_data_4a1_278)}
    {db tmp999[8]={78,71,0,0,0,8,0,0};MYCOPY(dummyd8483b90_hdr_data_4a9_279)}
    {db tmp999[8]={0,0,0,0,0,0,66,79};MYCOPY(dummyd8483b90_hdr_data_4b1_280)}
    {db tmp999[6]={68,89,0,0,252,88};MYCOPY(dummyd8483b90_hdr_data_4b9_281)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_vgaphoto(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        
