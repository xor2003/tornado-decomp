/* THIS IS GENERATED FILE */

        
#include "framepan.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
loadframepan:
	// 302 
	/* mov	al,COL_BLACK ;* kill: assume all */
	al = 0;
edummylabel1:
	// 4369 
	/* mov	bl,192 */
	bl = 192;
	/* mov	bh,199 */
	bh = 199;
	/* mov	cx,0 */
	cx = 0;
	/* mov	dx,319 */
	dx = 319;
	/* call	BlockFill */
	CALLF(blockfill, 0);
	/* ret */
	RETN(0);
updateframe:
	// 319 
	/* test	IronWork,1	;ironwork shown? */
	TEST(ironwork, 1);
edummylabel2:
	// 4371 
	/* jz	@F		;no -> */
	if (ZF) {goto dummylabel1;}
	/* call	DrawIronWork */
	CALLF(drawironwork, 0);
dummylabel1:
	// 4373 
	/* @@:		ret */
	RETN(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kloadframepan: 	goto loadframepan;
        case m2c::kupdateframe: 	goto updateframe;
        default: return __dispatch_call(__disp, _state);
    };
}

