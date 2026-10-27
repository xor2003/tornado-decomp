/* THIS IS GENERATED FILE */

        
#include "twoplyr.h"

                

 static bool _group2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group2:
    _begin:
oppfirecannon:
	// 2212 
	// 0 ;* fire cannon (assume ADV)
edummylabel4:
	// 4437 
	/* mov	ax,OppVtas */
	ax = oppvtas;
	/* xor	dl,dl */
	XOR(dl, dl);
	/* mov	dh,RHS_CANNON */
	dh = 0x1;
	/* mov	si,OFFSET OPP_VIEW */
	si = m2c::near_offset_external(opp_view);
	/* mov	di,OFFSET OPP_MOBILE */
	di = m2c::near_offset_external(opp_mobile);
	/* call	FireCannon */
	CALL(firecannon, 0);
	/* ret */
	RETF(0);
oppfiremissile:
	// 2233 
	/* mov	ax,OppVtas ;* kill: assume all */
	ax = oppvtas;
edummylabel5:
	// 4439 
	/* xor	dl,dl */
	XOR(dl, dl);
	/* mov	si,OFFSET OPP_VIEW */
	si = m2c::near_offset_external(opp_view);
	/* mov	di,OFFSET M_MOBILE */
	di = m2c::near_offset_external(m_mobile);
	/* call	LaunchMissile */
	CALL(launchmissile, 0);
	/* ret */
	RETF(0);
oppreldecoy:
	// 2251 
	/* mov	ax,OppVtas ;* kill: assume all */
	ax = oppvtas;
edummylabel6:
	// 4441 
	/* xor	dl,dl */
	XOR(dl, dl);
	/* mov	si,OFFSET OPP_VIEW */
	si = m2c::near_offset_external(opp_view);
	/* call	ReleaseDecoy */
	CALL(releasedecoy, 0);
	/* ret */
	RETF(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::koppfirecannon: 	goto oppfirecannon;
        case m2c::koppfiremissile: 	goto oppfiremissile;
        case m2c::koppreldecoy: 	goto oppreldecoy;
        default: return __dispatch_call(__disp, _state);
    };
}

