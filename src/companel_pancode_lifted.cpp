/* THIS IS GENERATED FILE */

        
#include "companel.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
setpanelmode:
	// 256 
	/* mov	PanelMode,ax ;* kill: ax, bx, flags */
	panelmode = ax;
edummylabel1:
	// 4369 
	/* mov	bx,ScreenMode */
	bx = screenmode;
	/* shr	bx,1		;/2 byte index */
	SHR(bx, 1);
	/* mov	al,CountLoad[bx] */
	al = *((&countload)+bx);
	/* mov	PanelLoad,al */
	*(panelload) = al;
	/* ret */
	RETF(0);
initpanels:
	// 276 
	/* test	IronWork,1	;ironwork enabled? */
	TEST(ironwork, 1);
edummylabel2:
	// 4371 
	/* jz	@F		;no -> */
	if (ZF) {goto dummylabel1;}
	/* mov	bx,ScreenMode */
	bx = screenmode;
	/* call	_InitPanels[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&_initpanels)+bx));
	// 0 ;@@:
	/* ret */
	RETF(0);
loadpanel:
	// 293 
	/* mov	bx,ScreenMode ;* kill: assume all */
	bx = screenmode;
edummylabel3:
	// 4373 
	/* call	_LoadPanel[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&_loadpanel)+bx));
	/* ret */
	RETF(0);
clearpilotpanel:
	// 306 
	/* mov	bx,ScreenMode ;* kill: assume all */
	bx = screenmode;
edummylabel4:
	// 4375 
	/* call	_ClrPilotPanel[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&_clrpilotpanel)+bx));
	/* ret */
	RETF(0);
clearnavigpanel:
	// 319 
	/* mov	bx,ScreenMode ;* kill: assume all */
	bx = screenmode;
edummylabel5:
	// 4377 
	/* call	_ClrNavigPanel[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&_clrnavigpanel)+bx));
	/* ret */
	RETF(0);
drawpilotpanel:
	// 332 
	/* mov	bx,ScreenMode ;* kill: assume all */
	bx = screenmode;
edummylabel6:
	// 4379 
	/* call	_DrawPilotPanel[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&_drawpilotpanel)+bx));
	/* ret */
	RETF(0);
drawnavigpanel:
	// 345 
	/* mov	bx,ScreenMode ;* kill: assume all */
	bx = screenmode;
edummylabel7:
	// 4381 
	/* call	_DrawNavigPanel[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&_drawnavigpanel)+bx));
	/* ret */
	RETF(0);
drawironwork:
	// 358 
	/* mov	bx,ScreenMode ;* kill: assume all */
	bx = screenmode;
edummylabel8:
	// 4383 
	/* call	_DrawIronWork[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&_drawironwork)+bx));
	/* ret */
	RETF(0);
drawbrackets:
	// 371 
	/* mov	bx,ScreenMode ;* kill: assume all */
	bx = screenmode;
edummylabel9:
	// 4385 
	/* call	_DrawBrackets[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&_drawbrackets)+bx));
	/* ret */
	RETF(0);
updatepanel:
	// 385 
	// 0 ;------------
	// 0 ;* load panel (if required)
	// 0 ;------------
edummylabel10:
	// 4387 
	/* cmp	PanelLoad,0	;load panel? */
	CMP(*(panelload), 0);
	/* je	@F		;no -> */
	if ((dw)(*(panelload)) == (dw)(0)) {goto dummylabel1;}
	/* dec	PanelLoad	;update load count */
	DEC(*(panelload));
	/* call	LoadPanel */
	CALLF(loadpanel, 0);
	// 0 ;--------------
	// 0 ;* update panel (wrt PanelMode)
	// 0 ;--------------
dummylabel1:
	// 4389 
	/* @@:		mov	bx,PanelMode */
	bx = panelmode;
	/* call	_UpdatePanel[bx] */
	CALL(__dispatch_call_ext, *(dw*)(((db*)&_updatepanel)+bx));
	/* ret */
	RETF(0);
null:
	// 410 
	/* clc		;cf = 0 = no error */
	CLC;
edummylabel11:
	// 4391 
/* m2c-phantom removed: 	J(RETF(0));	// 412 ret */

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::kclearnavigpanel: 	goto clearnavigpanel;
        case m2c::kclearpilotpanel: 	goto clearpilotpanel;
        case m2c::kdrawbrackets: 	goto drawbrackets;
        case m2c::kdrawironwork: 	goto drawironwork;
        case m2c::kdrawnavigpanel: 	goto drawnavigpanel;
        case m2c::kdrawpilotpanel: 	goto drawpilotpanel;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel10: 	goto edummylabel10;
        case m2c::kedummylabel11: 	goto edummylabel11;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kinitpanels: 	goto initpanels;
        case m2c::kloadpanel: 	goto loadpanel;
        case m2c::knull: 	goto null;
        case m2c::ksetpanelmode: 	goto setpanelmode;
        case m2c::kupdatepanel: 	goto updatepanel;
        default: return __dispatch_call(__disp, _state);
    };
}

