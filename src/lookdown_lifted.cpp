/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "lookdown.h"

	
 __attribute__((weak)) bool drawring(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawring, _state);}

 __attribute__((weak)) bool updatelookdown(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kupdatelookdown, _state);}

 __attribute__((weak)) bool useroptions(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kuseroptions, _state);}

 __attribute__((weak)) bool uservisoptions(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kuservisoptions, _state);}

 static bool __m2c_macrolocal_64_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_64_skip, _state);}

 static bool minimiseok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kminimiseok, _state);}

 static bool skipcontrol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipcontrol, _state);}

 static bool skiprange(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskiprange, _state);}

 static bool skipsound(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipsound, _state);}

	
	#include "lookdown_default_seg_lifted.cpp"
#include "lookdown_pancode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::k__m2c_macrolocal_64_skip: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_blockfill
        case m2c::kblockfill: 	if (!blockfill(0, _state)) return false; break;
#endif
        case m2c::kdrawring: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_hlinedraw
        case m2c::khlinedraw: 	if (!hlinedraw(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_initctrldevice
        case m2c::kinitctrldevice: 	if (!initctrldevice(0, _state)) return false; break;
#endif
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::kminimiseok: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_printdol
        case m2c::kprintdol: 	if (!printdol(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_resumesound
        case m2c::kresumesound: 	if (!resumesound(0, _state)) return false; break;
#endif
        case m2c::kskipcontrol: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskiprange: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipsound: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_suspendsound
        case m2c::ksuspendsound: 	if (!suspendsound(0, _state)) return false; break;
#endif
        case m2c::kupdatelookdown: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kuseroptions: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kuservisoptions: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_lookdown()
          {
              {db tmp999[2]={0};MYCOPY(minimise)}
    {dw tmp999=0;MYCOPY(_secscancnt1)}
    {dw tmp999=0;MYCOPY(_secscanoff1)}
    {dw tmp999=0;MYCOPY(_secscancnt2)}
    {dw tmp999=0;MYCOPY(_secscanoff2)}
    {db tmp999=0;MYCOPY(_gndtextenabled)}
    {db tmp999=0;MYCOPY(_treesenabled)}
    {db tmp999=0;MYCOPY(_hilltxtenabled)}
    {db tmp999=0;MYCOPY(_cloudsenabled)}
    {db tmp999=0;MYCOPY(_starsenabled)}
    {db tmp999=0;MYCOPY(_gradenabled)}
    {ring tmp999={14,57,6};MYCOPY(__m2c_structrow_73767ec3_1873)}
    {ring tmp999={22,57,6};MYCOPY(__m2c_structrow_73767ec3_1874)}
    {ring tmp999={30,57,10};MYCOPY(__m2c_structrow_73767ec3_1875)}
    {ring tmp999={42,57,10};MYCOPY(__m2c_structrow_73767ec3_1876)}
    {ring tmp999={54,57,10};MYCOPY(__m2c_structrow_73767ec3_1877)}
    {ring tmp999={66,57,10};MYCOPY(__m2c_structrow_73767ec3_1878)}
    {ring tmp999={78,57,10};MYCOPY(__m2c_structrow_73767ec3_1879)}
    {ring tmp999={30,76,22};MYCOPY(__m2c_structrow_73767ec3_1881)}
    {ring tmp999={54,76,34};MYCOPY(__m2c_structrow_73767ec3_1882)}
    {ring tmp999={30,95,22};MYCOPY(__m2c_structrow_73767ec3_1884)}
    {ring tmp999={54,95,34};MYCOPY(__m2c_structrow_73767ec3_1885)}
    {ring tmp999={30,114,22};MYCOPY(__m2c_structrow_73767ec3_1887)}
    {ring tmp999={54,114,34};MYCOPY(__m2c_structrow_73767ec3_1888)}
    {ring tmp999={42,133,22};MYCOPY(__m2c_structrow_73767ec3_1890)}
    {ring tmp999={66,133,22};MYCOPY(__m2c_structrow_73767ec3_1891)}
    {ring tmp999={262,57,26};MYCOPY(__m2c_structrow_73767ec3_1893)}
    {ring tmp999={290,57,22};MYCOPY(__m2c_structrow_73767ec3_1894)}
    {ring tmp999={246,76,42};MYCOPY(__m2c_structrow_73767ec3_1896)}
    {ring tmp999={246,84,42};MYCOPY(__m2c_structrow_73767ec3_1897)}
    {ring tmp999={246,92,42};MYCOPY(__m2c_structrow_73767ec3_1898)}
    {ring tmp999={246,100,42};MYCOPY(__m2c_structrow_73767ec3_1899)}
    {ring tmp999={242,119,14};MYCOPY(__m2c_structrow_73767ec3_1901)}
    {ring tmp999={258,119,26};MYCOPY(__m2c_structrow_73767ec3_1902)}
    {ring tmp999={286,119,26};MYCOPY(__m2c_structrow_73767ec3_1903)}
    {db tmp999[8]={0,0,170,0,12,0,col_knee_ink1,0};MYCOPY(textcol1)}
    {db tmp999[8]={0,0,170,0,12,0,col_knee_ink2,0};MYCOPY(textcol2)}
    {dw tmp999=offset(data,textcol1);MYCOPY(joy1col)}
    {dw tmp999=offset(data,textcol1);MYCOPY(joy2col)}
    {db tmp999=3;MYCOPY(dummy73767ec3_data_84_1915)}
    {db tmp999=5;MYCOPY(dummy73767ec3_data_85_1916)}
    {db tmp999[10]={p_ext,22,0,0,170,0,12,0,col_knee_num,0};MYCOPY(dummy73767ec3_data_86_1917)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy73767ec3_data_90_1918)}
    {dw tmp999[2]={8,51};MYCOPY(dummy73767ec3_data_92_1919)}
    {char tmp999='1';MYCOPY(dummy73767ec3_data_96_1920)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy73767ec3_data_97_1921)}
    {dw tmp999[2]={8,70};MYCOPY(dummy73767ec3_data_99_1922)}
    {char tmp999='2';MYCOPY(dummy73767ec3_data_9d_1923)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy73767ec3_data_9e_1924)}
    {dw tmp999[2]={8,89};MYCOPY(dummy73767ec3_data_a0_1925)}
    {char tmp999='3';MYCOPY(dummy73767ec3_data_a4_1926)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy73767ec3_data_a5_1927)}
    {dw tmp999[2]={8,108};MYCOPY(dummy73767ec3_data_a7_1928)}
    {char tmp999='4';MYCOPY(dummy73767ec3_data_ab_1929)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy73767ec3_data_ac_1930)}
    {dw tmp999[2]={8,127};MYCOPY(dummy73767ec3_data_ae_1931)}
    {char tmp999='5';MYCOPY(dummy73767ec3_data_b2_1932)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy73767ec3_data_b3_1933)}
    {dw tmp999[2]={232,51};MYCOPY(dummy73767ec3_data_b5_1934)}
    {char tmp999='6';MYCOPY(dummy73767ec3_data_b9_1935)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy73767ec3_data_ba_1936)}
    {dw tmp999[2]={232,70};MYCOPY(dummy73767ec3_data_bc_1937)}
    {char tmp999='7';MYCOPY(dummy73767ec3_data_c0_1938)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy73767ec3_data_c1_1939)}
    {dw tmp999[2]={232,113};MYCOPY(dummy73767ec3_data_c3_1940)}
    {char tmp999='8';MYCOPY(dummy73767ec3_data_c7_1941)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy73767ec3_data_c8_1942)}
    {dw tmp999[2]={232,132};MYCOPY(dummy73767ec3_data_ca_1943)}
    {char tmp999='0';MYCOPY(dummy73767ec3_data_ce_1944)}
    {db tmp999=3;MYCOPY(dummy73767ec3_data_d0_1947)}
    {db tmp999=5;MYCOPY(dummy73767ec3_data_d1_1948)}
    {db tmp999[2]={p_ext,54};MYCOPY(dummy73767ec3_data_d2_1949)}
    {dw tmp999=offset(data,textcol1);MYCOPY(dummy73767ec3_data_d4_1950)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy73767ec3_data_d6_1951)}
    {dw tmp999[2]={16,51};MYCOPY(dummy73767ec3_data_d8_1952)}
    {char tmp999[18]={'V','I','S','I','B','I','L','I','T','Y','(','M','I','L','E','S',')',':'};MYCOPY(dummy73767ec3_data_dc_1953)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy73767ec3_data_ee_1954)}
    {dw tmp999[2]={16,59};MYCOPY(dummy73767ec3_data_f0_1955)}
    {char tmp999[18]={'6',' ','9',' ','1','2',' ','1','6',' ','1','9',' ','2','2',' ','2','5'};MYCOPY(dummy73767ec3_data_f4_1956)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy73767ec3_data_106_1957)}
    {dw tmp999[2]={16,70};MYCOPY(dummy73767ec3_data_108_1958)}
    {char tmp999[7]={'G','R','O','U','N','D',':'};MYCOPY(dummy73767ec3_data_10c_1959)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy73767ec3_data_113_1960)}
    {dw tmp999[2]={32,78};MYCOPY(dummy73767ec3_data_115_1961)}
    {char tmp999[14]={'P','L','A','I','N',' ','T','E','X','T','U','R','E','D'};MYCOPY(dummy73767ec3_data_119_1962)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy73767ec3_data_127_1963)}
    {dw tmp999[2]={16,89};MYCOPY(dummy73767ec3_data_129_1964)}
    {char tmp999[6]={'H','I','L','L','S',':'};MYCOPY(dummy73767ec3_data_12d_1965)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy73767ec3_data_133_1966)}
    {dw tmp999[2]={32,97};MYCOPY(dummy73767ec3_data_135_1967)}
    {char tmp999[14]={'P','L','A','I','N',' ','T','E','X','T','U','R','E','D'};MYCOPY(dummy73767ec3_data_139_1968)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy73767ec3_data_147_1969)}
    {dw tmp999[2]={16,108};MYCOPY(dummy73767ec3_data_149_1970)}
    {char tmp999[4]={'S','K','Y',':'};MYCOPY(dummy73767ec3_data_14d_1971)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy73767ec3_data_151_1972)}
    {dw tmp999[2]={32,116};MYCOPY(dummy73767ec3_data_153_1973)}
    {char tmp999[14]={'P','L','A','I','N',' ','T','E','X','T','U','R','E','D'};MYCOPY(dummy73767ec3_data_157_1974)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy73767ec3_data_165_1975)}
    {dw tmp999[2]={16,127};MYCOPY(dummy73767ec3_data_167_1976)}
    {char tmp999[8]={'H','O','R','I','Z','O','N',':'};MYCOPY(dummy73767ec3_data_16b_1977)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy73767ec3_data_173_1978)}
    {dw tmp999[2]={44,135};MYCOPY(dummy73767ec3_data_175_1979)}
    {char tmp999[11]={'P','L','A','I','N',' ','F','A','D','E','D'};MYCOPY(dummy73767ec3_data_179_1980)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy73767ec3_data_184_1981)}
    {dw tmp999[2]={240,51};MYCOPY(dummy73767ec3_data_186_1982)}
    {char tmp999[9]={'I','R','O','N','W','O','R','K',':'};MYCOPY(dummy73767ec3_data_18a_1983)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy73767ec3_data_193_1984)}
    {dw tmp999[2]={264,59};MYCOPY(dummy73767ec3_data_195_1985)}
    {char tmp999[12]={'H','I','D','D','E','N',' ','S','H','O','W','N'};MYCOPY(dummy73767ec3_data_199_1986)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy73767ec3_data_1a5_1987)}
    {dw tmp999[2]={240,70};MYCOPY(dummy73767ec3_data_1a7_1988)}
    {char tmp999[15]={'C','O','N','T','R','O','L',' ','D','E','V','I','C','E',':'};MYCOPY(dummy73767ec3_data_1ab_1989)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy73767ec3_data_1ba_1990)}
    {dw tmp999[2]={248,78};MYCOPY(dummy73767ec3_data_1bc_1991)}
    {char tmp999[10]={'K','E','Y','B','O','A','R','D',' ','1'};MYCOPY(dummy73767ec3_data_1c0_1992)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy73767ec3_data_1ca_1993)}
    {dw tmp999[2]={248,86};MYCOPY(dummy73767ec3_data_1cc_1994)}
    {char tmp999[10]={'K','E','Y','B','O','A','R','D',' ','2'};MYCOPY(dummy73767ec3_data_1d0_1995)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy73767ec3_data_1da_1996)}
    {dw tmp999[2]={248,94};MYCOPY(dummy73767ec3_data_1dc_1997)}
    {db tmp999[2]={p_ext,86};MYCOPY(dummy73767ec3_data_1e0_1998)}
    {dw tmp999=offset(data,joy1col);MYCOPY(dummy73767ec3_data_1e2_1999)}
    {char tmp999[10]={'J','O','Y','S','T','I','C','K',' ','1'};MYCOPY(dummy73767ec3_data_1e4_2000)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy73767ec3_data_1ee_2001)}
    {dw tmp999[2]={248,102};MYCOPY(dummy73767ec3_data_1f0_2002)}
    {db tmp999[2]={p_ext,86};MYCOPY(dummy73767ec3_data_1f4_2003)}
    {dw tmp999=offset(data,joy2col);MYCOPY(dummy73767ec3_data_1f6_2004)}
    {char tmp999[10]={'J','O','Y','S','T','I','C','K',' ','2'};MYCOPY(dummy73767ec3_data_1f8_2005)}
    {db tmp999[2]={p_ext,54};MYCOPY(dummy73767ec3_data_202_2006)}
    {dw tmp999=offset(data,textcol1);MYCOPY(dummy73767ec3_data_204_2007)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy73767ec3_data_206_2008)}
    {dw tmp999[2]={240,113};MYCOPY(dummy73767ec3_data_208_2009)}
    {char tmp999[14]={'S','O','U','N','D',' ','E','F','F','E','C','T','S',':'};MYCOPY(dummy73767ec3_data_20c_2010)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy73767ec3_data_21a_2011)}
    {dw tmp999[2]={244,121};MYCOPY(dummy73767ec3_data_21c_2012)}
    {char tmp999[17]={'O','F','F',' ','O','N','-','E','N','G',' ','O','N','+','E','N','G'};MYCOPY(dummy73767ec3_data_220_2013)}
    {db tmp999[2]={p_ext,18};MYCOPY(dummy73767ec3_data_231_2014)}
    {dw tmp999[2]={240,132};MYCOPY(dummy73767ec3_data_233_2015)}
    {char tmp999[18]={'M','I','N','I','M','I','S','E',' ','/',' ','R','E','S','T','O','R','E'};MYCOPY(dummy73767ec3_data_237_2016)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_lookdown(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        
