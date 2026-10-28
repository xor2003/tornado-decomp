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
              {db tmp999[2]={0};memcpy(&minimise,&tmp999,sizeof tmp999);}
    _secscancnt1 = 0;
    _secscanoff1 = 0;
    _secscancnt2 = 0;
    _secscanoff2 = 0;
    _gndtextenabled = 0;
    _treesenabled = 0;
    _hilltxtenabled = 0;
    _cloudsenabled = 0;
    _starsenabled = 0;
    _gradenabled = 0;
    __m2c_structrow_73767ec3_1873 = ring{14,57,6};
    __m2c_structrow_73767ec3_1874 = ring{22,57,6};
    __m2c_structrow_73767ec3_1875 = ring{30,57,10};
    __m2c_structrow_73767ec3_1876 = ring{42,57,10};
    __m2c_structrow_73767ec3_1877 = ring{54,57,10};
    __m2c_structrow_73767ec3_1878 = ring{66,57,10};
    __m2c_structrow_73767ec3_1879 = ring{78,57,10};
    __m2c_structrow_73767ec3_1881 = ring{30,76,22};
    __m2c_structrow_73767ec3_1882 = ring{54,76,34};
    __m2c_structrow_73767ec3_1884 = ring{30,95,22};
    __m2c_structrow_73767ec3_1885 = ring{54,95,34};
    __m2c_structrow_73767ec3_1887 = ring{30,114,22};
    __m2c_structrow_73767ec3_1888 = ring{54,114,34};
    __m2c_structrow_73767ec3_1890 = ring{42,133,22};
    __m2c_structrow_73767ec3_1891 = ring{66,133,22};
    __m2c_structrow_73767ec3_1893 = ring{262,57,26};
    __m2c_structrow_73767ec3_1894 = ring{290,57,22};
    __m2c_structrow_73767ec3_1896 = ring{246,76,42};
    __m2c_structrow_73767ec3_1897 = ring{246,84,42};
    __m2c_structrow_73767ec3_1898 = ring{246,92,42};
    __m2c_structrow_73767ec3_1899 = ring{246,100,42};
    __m2c_structrow_73767ec3_1901 = ring{242,119,14};
    __m2c_structrow_73767ec3_1902 = ring{258,119,26};
    __m2c_structrow_73767ec3_1903 = ring{286,119,26};
    {db tmp999[8]={0,0,170,0,12,0,col_knee_ink1,0};memcpy(&textcol1,&tmp999,sizeof tmp999);}
    {db tmp999[8]={0,0,170,0,12,0,col_knee_ink2,0};memcpy(&textcol2,&tmp999,sizeof tmp999);}
    joy1col = offset(data,textcol1);
    joy2col = offset(data,textcol1);
    dummy73767ec3_data_84_1915 = 3;
    dummy73767ec3_data_85_1916 = 5;
    {db tmp999[10]={p_ext,22,0,0,170,0,12,0,col_knee_num,0};memcpy(&dummy73767ec3_data_86_1917,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,18};memcpy(&dummy73767ec3_data_90_1918,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={8,51};memcpy(&dummy73767ec3_data_92_1919,&tmp999,sizeof tmp999);}
    dummy73767ec3_data_96_1920 = '1';
    {db tmp999[2]={p_ext,18};memcpy(&dummy73767ec3_data_97_1921,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={8,70};memcpy(&dummy73767ec3_data_99_1922,&tmp999,sizeof tmp999);}
    dummy73767ec3_data_9d_1923 = '2';
    {db tmp999[2]={p_ext,18};memcpy(&dummy73767ec3_data_9e_1924,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={8,89};memcpy(&dummy73767ec3_data_a0_1925,&tmp999,sizeof tmp999);}
    dummy73767ec3_data_a4_1926 = '3';
    {db tmp999[2]={p_ext,18};memcpy(&dummy73767ec3_data_a5_1927,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={8,108};memcpy(&dummy73767ec3_data_a7_1928,&tmp999,sizeof tmp999);}
    dummy73767ec3_data_ab_1929 = '4';
    {db tmp999[2]={p_ext,18};memcpy(&dummy73767ec3_data_ac_1930,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={8,127};memcpy(&dummy73767ec3_data_ae_1931,&tmp999,sizeof tmp999);}
    dummy73767ec3_data_b2_1932 = '5';
    {db tmp999[2]={p_ext,18};memcpy(&dummy73767ec3_data_b3_1933,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={232,51};memcpy(&dummy73767ec3_data_b5_1934,&tmp999,sizeof tmp999);}
    dummy73767ec3_data_b9_1935 = '6';
    {db tmp999[2]={p_ext,18};memcpy(&dummy73767ec3_data_ba_1936,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={232,70};memcpy(&dummy73767ec3_data_bc_1937,&tmp999,sizeof tmp999);}
    dummy73767ec3_data_c0_1938 = '7';
    {db tmp999[2]={p_ext,18};memcpy(&dummy73767ec3_data_c1_1939,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={232,113};memcpy(&dummy73767ec3_data_c3_1940,&tmp999,sizeof tmp999);}
    dummy73767ec3_data_c7_1941 = '8';
    {db tmp999[2]={p_ext,18};memcpy(&dummy73767ec3_data_c8_1942,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={232,132};memcpy(&dummy73767ec3_data_ca_1943,&tmp999,sizeof tmp999);}
    dummy73767ec3_data_ce_1944 = '0';
    dummy73767ec3_data_d0_1947 = 3;
    dummy73767ec3_data_d1_1948 = 5;
    {db tmp999[2]={p_ext,54};memcpy(&dummy73767ec3_data_d2_1949,&tmp999,sizeof tmp999);}
    dummy73767ec3_data_d4_1950 = offset(data,textcol1);
    {db tmp999[2]={p_ext,18};memcpy(&dummy73767ec3_data_d6_1951,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={16,51};memcpy(&dummy73767ec3_data_d8_1952,&tmp999,sizeof tmp999);}
    {char tmp999[18]={'V','I','S','I','B','I','L','I','T','Y','(','M','I','L','E','S',')',':'};memcpy(&dummy73767ec3_data_dc_1953,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,18};memcpy(&dummy73767ec3_data_ee_1954,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={16,59};memcpy(&dummy73767ec3_data_f0_1955,&tmp999,sizeof tmp999);}
    {char tmp999[18]={'6',' ','9',' ','1','2',' ','1','6',' ','1','9',' ','2','2',' ','2','5'};memcpy(&dummy73767ec3_data_f4_1956,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,18};memcpy(&dummy73767ec3_data_106_1957,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={16,70};memcpy(&dummy73767ec3_data_108_1958,&tmp999,sizeof tmp999);}
    {char tmp999[7]={'G','R','O','U','N','D',':'};memcpy(&dummy73767ec3_data_10c_1959,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,18};memcpy(&dummy73767ec3_data_113_1960,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={32,78};memcpy(&dummy73767ec3_data_115_1961,&tmp999,sizeof tmp999);}
    {char tmp999[14]={'P','L','A','I','N',' ','T','E','X','T','U','R','E','D'};memcpy(&dummy73767ec3_data_119_1962,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,18};memcpy(&dummy73767ec3_data_127_1963,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={16,89};memcpy(&dummy73767ec3_data_129_1964,&tmp999,sizeof tmp999);}
    {char tmp999[6]={'H','I','L','L','S',':'};memcpy(&dummy73767ec3_data_12d_1965,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,18};memcpy(&dummy73767ec3_data_133_1966,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={32,97};memcpy(&dummy73767ec3_data_135_1967,&tmp999,sizeof tmp999);}
    {char tmp999[14]={'P','L','A','I','N',' ','T','E','X','T','U','R','E','D'};memcpy(&dummy73767ec3_data_139_1968,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,18};memcpy(&dummy73767ec3_data_147_1969,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={16,108};memcpy(&dummy73767ec3_data_149_1970,&tmp999,sizeof tmp999);}
    {char tmp999[4]={'S','K','Y',':'};memcpy(&dummy73767ec3_data_14d_1971,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,18};memcpy(&dummy73767ec3_data_151_1972,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={32,116};memcpy(&dummy73767ec3_data_153_1973,&tmp999,sizeof tmp999);}
    {char tmp999[14]={'P','L','A','I','N',' ','T','E','X','T','U','R','E','D'};memcpy(&dummy73767ec3_data_157_1974,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,18};memcpy(&dummy73767ec3_data_165_1975,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={16,127};memcpy(&dummy73767ec3_data_167_1976,&tmp999,sizeof tmp999);}
    {char tmp999[8]={'H','O','R','I','Z','O','N',':'};memcpy(&dummy73767ec3_data_16b_1977,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,18};memcpy(&dummy73767ec3_data_173_1978,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={44,135};memcpy(&dummy73767ec3_data_175_1979,&tmp999,sizeof tmp999);}
    {char tmp999[11]={'P','L','A','I','N',' ','F','A','D','E','D'};memcpy(&dummy73767ec3_data_179_1980,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,18};memcpy(&dummy73767ec3_data_184_1981,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={240,51};memcpy(&dummy73767ec3_data_186_1982,&tmp999,sizeof tmp999);}
    {char tmp999[9]={'I','R','O','N','W','O','R','K',':'};memcpy(&dummy73767ec3_data_18a_1983,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,18};memcpy(&dummy73767ec3_data_193_1984,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={264,59};memcpy(&dummy73767ec3_data_195_1985,&tmp999,sizeof tmp999);}
    {char tmp999[12]={'H','I','D','D','E','N',' ','S','H','O','W','N'};memcpy(&dummy73767ec3_data_199_1986,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,18};memcpy(&dummy73767ec3_data_1a5_1987,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={240,70};memcpy(&dummy73767ec3_data_1a7_1988,&tmp999,sizeof tmp999);}
    {char tmp999[15]={'C','O','N','T','R','O','L',' ','D','E','V','I','C','E',':'};memcpy(&dummy73767ec3_data_1ab_1989,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,18};memcpy(&dummy73767ec3_data_1ba_1990,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={248,78};memcpy(&dummy73767ec3_data_1bc_1991,&tmp999,sizeof tmp999);}
    {char tmp999[10]={'K','E','Y','B','O','A','R','D',' ','1'};memcpy(&dummy73767ec3_data_1c0_1992,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,18};memcpy(&dummy73767ec3_data_1ca_1993,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={248,86};memcpy(&dummy73767ec3_data_1cc_1994,&tmp999,sizeof tmp999);}
    {char tmp999[10]={'K','E','Y','B','O','A','R','D',' ','2'};memcpy(&dummy73767ec3_data_1d0_1995,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,18};memcpy(&dummy73767ec3_data_1da_1996,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={248,94};memcpy(&dummy73767ec3_data_1dc_1997,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,86};memcpy(&dummy73767ec3_data_1e0_1998,&tmp999,sizeof tmp999);}
    dummy73767ec3_data_1e2_1999 = offset(data,joy1col);
    {char tmp999[10]={'J','O','Y','S','T','I','C','K',' ','1'};memcpy(&dummy73767ec3_data_1e4_2000,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,18};memcpy(&dummy73767ec3_data_1ee_2001,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={248,102};memcpy(&dummy73767ec3_data_1f0_2002,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,86};memcpy(&dummy73767ec3_data_1f4_2003,&tmp999,sizeof tmp999);}
    dummy73767ec3_data_1f6_2004 = offset(data,joy2col);
    {char tmp999[10]={'J','O','Y','S','T','I','C','K',' ','2'};memcpy(&dummy73767ec3_data_1f8_2005,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,54};memcpy(&dummy73767ec3_data_202_2006,&tmp999,sizeof tmp999);}
    dummy73767ec3_data_204_2007 = offset(data,textcol1);
    {db tmp999[2]={p_ext,18};memcpy(&dummy73767ec3_data_206_2008,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={240,113};memcpy(&dummy73767ec3_data_208_2009,&tmp999,sizeof tmp999);}
    {char tmp999[14]={'S','O','U','N','D',' ','E','F','F','E','C','T','S',':'};memcpy(&dummy73767ec3_data_20c_2010,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,18};memcpy(&dummy73767ec3_data_21a_2011,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={244,121};memcpy(&dummy73767ec3_data_21c_2012,&tmp999,sizeof tmp999);}
    {char tmp999[17]={'O','F','F',' ','O','N','-','E','N','G',' ','O','N','+','E','N','G'};memcpy(&dummy73767ec3_data_220_2013,&tmp999,sizeof tmp999);}
    {db tmp999[2]={p_ext,18};memcpy(&dummy73767ec3_data_231_2014,&tmp999,sizeof tmp999);}
    {dw tmp999[2]={240,132};memcpy(&dummy73767ec3_data_233_2015,&tmp999,sizeof tmp999);}
    {char tmp999[18]={'M','I','N','I','M','I','S','E',' ','/',' ','R','E','S','T','O','R','E'};memcpy(&dummy73767ec3_data_237_2016,&tmp999,sizeof tmp999);}

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
        
