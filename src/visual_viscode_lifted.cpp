/* THIS IS GENERATED FILE */

        
#include "visual.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
visual:
	// 67 
	/* call	InitVisual ;* kill: assume all */
	CALL(initvisual, 0);
edummylabel1:
	// 4369 
	/* call	CalcAngles */
	CALL(calcangles, 0);
	/* call	CalcAFactors */
	CALL(calcafactors, 0);
	/* call	RotateView */
	CALL(rotateview, 0);
	/* call	CalcSctrGrid */
	CALL(calcsctrgrid, 0);
	/* call	CalcObjGrid */
	CALL(calcobjgrid, 0);
	/* call	CalcSctrOffsets */
	CALL(calcsctroffsets, 0);
	/* call	InitClouds */
	CALL(initclouds, 0);
	/* call	DrawHorizon */
	CALL(drawhorizon, 0);
	/* call	ScanSectors */
	CALL(scansectors, 0);
	/* call	UserVisual */
	CALL(uservisual, 0);
	/* call	ScanCraters */
	CALL(scancraters, 0);
	/* call	ScanSmoke */
	CALL(scansmoke, 0);
	// 0 ;----------------------------------
	// 0 ;* sort drawing order wrt CloudMode
	// 0 ;----------------------------------
	/* mov	bx,CloudMode */
	bx = cloudmode;
__disp=*(dw*)(((db*)&sortclouds)+bx);
	/* jmp	SortClouds[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;------------------------
	// 0 ;* viewpoint below clouds
	// 0 ;------------------------
belowclouds:
	// 4371 
	/* BelowClouds:   	test	Overcast,1	;overcast? */
	TEST(overcast, 1);
	/* jnz	@F		;yes -> */
	if ((overcast & 1) != 0) {goto dummylabel1;}
	/* call	DrawStars	;draw stars at night */
	CALL(drawstars, 0);
	/* call	DrawObjects3	;objects above clouds */
	CALL(drawobjects3, 0);
	/* call	DrawClouds2	;cloud top */
	CALL(drawclouds2, 0);
	/* call	DrawObjects2	;objects in clouds */
	CALL(drawobjects2, 0);
	/* call	DrawClouds1	;cloud base */
	CALL(drawclouds1, 0);
dummylabel1:
	// 4373 
	/* @@:		call	DrawFarObjects	;far objects */
	CALL(drawfarobjects, 0);
	/* call	DrawObjects1	;objects below clouds */
	CALL(drawobjects1, 0);
	/* ret */
	RETF(0);
	// 0 ;---------------------
	// 0 ;* viewpoint in clouds
	// 0 ;---------------------
inclouds:
	// 4375 
	/* InClouds:   	test	Overcast,1	;overcast? */
	TEST(overcast, 1);
	/* jnz	@F		;yes -> */
	if ((overcast & 1) != 0) {goto dummylabel2;}
	/* call	DrawStars	;draw stars at night */
	CALL(drawstars, 0);
	/* call	DrawObjects3	;objects above clouds */
	CALL(drawobjects3, 0);
	/* call	DrawClouds2	;cloud top */
	CALL(drawclouds2, 0);
	/* call	DrawFarObjects	;far objects */
	CALL(drawfarobjects, 0);
	/* call	DrawObjects1	;objects below clouds */
	CALL(drawobjects1, 0);
	/* call	DrawClouds1	;cloud base */
	CALL(drawclouds1, 0);
	/* call	DrawObjects2	;objects in clouds */
	CALL(drawobjects2, 0);
dummylabel2:
	// 4377 
	/* @@:		ret */
	RETF(0);
	// 0 ;------------------------
	// 0 ;* viewpoint above clouds
	// 0 ;------------------------
aboveclouds:
	// 4379 
	/* AboveClouds:   	call	DrawStars	;draw stars at night */
	CALL(drawstars, 0);
	/* test	Overcast,1	;overcast? */
	TEST(overcast, 1);
	/* jnz	@F		;yes -> */
	if ((overcast & 1) != 0) {goto dummylabel3;}
	/* call	DrawFarObjects	;far objects */
	CALL(drawfarobjects, 0);
	/* call	DrawObjects1	;objects below clouds */
	CALL(drawobjects1, 0);
	/* call	DrawClouds1	;cloud base */
	CALL(drawclouds1, 0);
	/* call	DrawObjects2	;objects in clouds */
	CALL(drawobjects2, 0);
dummylabel3:
	// 4381 
	/* @@:		call	DrawClouds2	;cloud top */
	CALL(drawclouds2, 0);
	/* call	DrawObjects3	;objects above clouds */
	CALL(drawobjects3, 0);
	/* ret */
	RETF(0);
mobilevisual:
	// 140 
	/* push	di ;* kill: assume all */
	PUSH(di);
edummylabel2:
	// 4383 
	/* call	InitVisual */
	CALL(initvisual, 0);
	/* call	CalcAngles */
	CALL(calcangles, 0);
	/* call	CalcAFactors */
	CALL(calcafactors, 0);
	/* call	CalcSctrGrid */
	CALL(calcsctrgrid, 0);
	/* call	CalcObjGrid */
	CALL(calcobjgrid, 0);
	/* call	CalcSctrOffsets */
	CALL(calcsctroffsets, 0);
	/* call	InitClouds */
	CALL(initclouds, 0);
	/* pop	si */
	POP(si);
	/* call	DrawMobile */
	CALL(drawmobile, 0);
	/* call	DrawObjects1 */
	CALL(drawobjects1, 0);
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
                case m2c::kaboveclouds: 	goto aboveclouds;
        case m2c::kbelowclouds: 	goto belowclouds;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kinclouds: 	goto inclouds;
        case m2c::kmobilevisual: 	goto mobilevisual;
        case m2c::kvisual: 	goto visual;
        default: return __dispatch_call(__disp, _state);
    };
}

