/* THIS IS GENERATED FILE */

        
        /* Include STL headers before generated headers: MASM EQUs can coin
           names like "count" that would otherwise macro-break <algorithm>. */
        #include <algorithm>
        #include <iterator>
        #ifdef DOSBOX_CUSTOM
        #include <numeric>
        #endif
	        #include "horizon.h"

	
 __attribute__((weak)) bool drawhorizon(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawhorizon, _state);}

 __attribute__((weak)) bool octant1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koctant1, _state);}

 __attribute__((weak)) bool octant2(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koctant2, _state);}

 __attribute__((weak)) bool octant7(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koctant7, _state);}

 __attribute__((weak)) bool octant8(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koctant8, _state);}

 __attribute__((weak)) bool sortrgbgnd(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortrgbgnd, _state);}

 __attribute__((weak)) bool sortrgbsky(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortrgbsky, _state);}

 __attribute__((weak)) bool userhorizon(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kuserhorizon, _state);}

 static bool __m2c_macrolocal_13_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_13_skip, _state);}

 static bool __m2c_macrolocal_14_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_14_skip, _state);}

 static bool __m2c_macrolocal_15_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_15_skip, _state);}

 static bool __m2c_macrolocal_1_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_1_skip, _state);}

 static bool __m2c_macrolocal_2_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_2_skip, _state);}

 static bool __m2c_macrolocal_3_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_3_skip, _state);}

 static bool __m2c_macrolocal_4_skip(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::k__m2c_macrolocal_4_skip, _state);}

 __attribute__((weak)) bool aboveclouds(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kaboveclouds, _state);}

 __attribute__((weak)) bool belowclouds(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kbelowclouds, _state);}

 static bool contgradhrzn(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontgradhrzn, _state);}

 static bool conthrznfill(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kconthrznfill, _state);}

 static bool contmidfill(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontmidfill, _state);}

 static bool contpolyfade(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kcontpolyfade, _state);}

 static bool drawgradhrzn(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawgradhrzn, _state);}

 static bool drawhrznexit(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kdrawhrznexit, _state);}

 static bool fadeok(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfadeok, _state);}

 static bool fillmiddle(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kfillmiddle, _state);}

 static bool flathorizon(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kflathorizon, _state);}

 static bool gradloop(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kgradloop, _state);}

 static bool hrznnonvisible(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khrznnonvisible, _state);}

 static bool hrznvisible(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::khrznvisible, _state);}

 __attribute__((weak)) bool inclouds(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kinclouds, _state);}

 static bool intohorizon(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintohorizon, _state);}

 static bool intooct1(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintooct1, _state);}

 static bool intooct8(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kintooct8, _state);}

 static bool noswap(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knoswap, _state);}

 static bool noxswap(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::knoxswap, _state);}

 static bool oct1lp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koct1lp, _state);}

 static bool oct2lpa(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koct2lpa, _state);}

 static bool oct2lpb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koct2lpb, _state);}

 static bool oct7lpa(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koct7lpa, _state);}

 static bool oct7lpb(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koct7lpb, _state);}

 static bool oct8lp(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::koct8lp, _state);}

 static bool onlygnd(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::konlygnd, _state);}

 static bool onlysky(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::konlysky, _state);}

 static bool polycloudfade(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kpolycloudfade, _state);}

 static bool sethrzncols(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksethrzncols, _state);}

 static bool setlhx(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetlhx, _state);}

 static bool setrhx(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksetrhx, _state);}

 static bool skipfog(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::kskipfog, _state);}

 static bool sortfog(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortfog, _state);}

 static bool sorthorizon(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksorthorizon, _state);}

 static bool sortskycol(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksortskycol, _state);}

 static bool sorttopbotcols(m2c::_offsets _i, struct m2c::_STATE* _state){return _group1(_i ? _i : m2c::ksorttopbotcols, _state);}

	
	#include "horizon_default_seg_lifted.cpp"
#include "horizon_viscode_lifted.cpp"

	
  static bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state){
  X86_REGREF
     __disp=__i;
     switch (__i) {
        case m2c::k__m2c_macrolocal_13_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_14_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_15_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_1_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_2_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_3_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::k__m2c_macrolocal_4_skip: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kaboveclouds: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kbelowclouds: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_blockfill
        case m2c::kblockfill: 	if (!blockfill(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_calcoutcodes
        case m2c::kcalcoutcodes: 	if (!calcoutcodes(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_cloudcheck1
        case m2c::kcloudcheck1: 	if (!cloudcheck1(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_cloudcheck2
        case m2c::kcloudcheck2: 	if (!cloudcheck2(0, _state)) return false; break;
#endif
        case m2c::kcontgradhrzn: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kconthrznfill: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontmidfill: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kcontpolyfade: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawgradhrzn: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawhorizon: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdrawhrznexit: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel10: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kdummylabel11: 	if (!_group1(__disp, _state)) return false; break;
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
        case m2c::kedummylabel3: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel4: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel5: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel6: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kedummylabel8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfadeok: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kfillmiddle: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kflathorizon: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kgradloop: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_horizonclip
        case m2c::khorizonclip: 	if (!horizonclip(0, _state)) return false; break;
#endif
#ifndef M2C_CODE_EQUATE_horizonfill
        case m2c::khorizonfill: 	if (!horizonfill(0, _state)) return false; break;
#endif
        case m2c::khrznnonvisible: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::khrznvisible: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kinclouds: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintohorizon: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintooct1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kintooct8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kmainproc: 	if (!mainproc(0, _state)) return false; break;
        case m2c::knoswap: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::knoxswap: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koct1lp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koct2lpa: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koct2lpb: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koct7lpa: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koct7lpb: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koct8lp: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koctant1: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koctant2: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koctant7: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::koctant8: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::konlygnd: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::konlysky: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_polyclip
        case m2c::kpolyclip: 	if (!polyclip(0, _state)) return false; break;
#endif
        case m2c::kpolycloudfade: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_polyfill
        case m2c::kpolyfill: 	if (!polyfill(0, _state)) return false; break;
#endif
        case m2c::ksethrzncols: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetlhx: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksetrhx: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::kskipfog: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortfog: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksorthorizon: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortrgbgnd: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortrgbsky: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksortskycol: 	if (!_group1(__disp, _state)) return false; break;
        case m2c::ksorttopbotcols: 	if (!_group1(__disp, _state)) return false; break;
#ifndef M2C_CODE_EQUATE_tangent
        case m2c::ktangent: 	if (!tangent(0, _state)) return false; break;
#endif
        case m2c::kuserhorizon: 	if (!_group1(__disp, _state)) return false; break;
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
          void Initializer_horizon()
          {
              {db tmp999[2]={0};MYCOPY(overcast)}
    {db tmp999[2]={0};MYCOPY(fog)}
    {db tmp999[2]={0};MYCOPY(night)}
    {db tmp999=col_gnd1;MYCOPY(gndcol)}
    {db tmp999=col_sky12;MYCOPY(skycol)}
    {db tmp999=0;MYCOPY(topcol)}
    {db tmp999=0;MYCOPY(botcol)}
    {db tmp999=0;MYCOPY(lhscol)}
    {db tmp999=0;MYCOPY(rhscol)}
    {dw tmp999=0;MYCOPY(hx1)}
    {db tmp999[2]={0};MYCOPY(hy1)}
    {dw tmp999=0;MYCOPY(hx2)}
    {db tmp999[2]={0};MYCOPY(hy2)}
    {dw tmp999=0;MYCOPY(newpitch)}
    {dw tmp999=m2c::kglobal_octant2;MYCOPY(octant)}
    {dw tmp999=m2c::kglobal_octant1;MYCOPY(dummy62bf9e66_data_18_1022)}
    {dw tmp999=m2c::kglobal_octant7;MYCOPY(dummy62bf9e66_data_1a_1023)}
    {dw tmp999=m2c::kglobal_octant8;MYCOPY(dummy62bf9e66_data_1c_1024)}
    {db tmp999[2]={1,0};MYCOPY(gradenabled)}
    {db tmp999[2]={0};MYCOPY(gradvisible)}
    {db tmp999[5]={0,0,0,0,255};MYCOPY(gradpoly)}
    {dw tmp999=m2c::near_offset_external(vga_gnd1);MYCOPY(gndrgbptr)}
    {dw tmp999=m2c::near_offset_external(vga_sky1);MYCOPY(skyrgbptr)}
    {dw tmp999=m2c::kglobal_belowclouds;MYCOPY(skyswitch)}
    {dw tmp999=m2c::kglobal_inclouds;MYCOPY(dummy62bf9e66_data_2d_1040)}
    {dw tmp999=m2c::kglobal_aboveclouds;MYCOPY(dummy62bf9e66_data_2f_1041)}

          }
         }
        #ifdef M2C_LEGACY_STATIC_INITIALIZERS
        #ifndef DOSBOX_CUSTOM
         namespace {
          struct Initializer {
           Initializer() { m2c::Initializer_horizon(); }
          };
          static const Initializer i;
         }
        #endif
        #endif
        
