/* THIS IS GENERATED FILE */

        
#include "music.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
installmusic:
	// 1416 
	/* mov	bx,MusicCard ;* kill: assume all (except cf) */
	bx = musiccard;
edummylabel1:
	// 4369 
__disp=*(dw*)(((db*)&_installmusic)+bx);
	/* jmp	_InstallMusic[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
installnull:
	// 4371 
	// 0 ;---------------------------
	/* clc			;cf = 0 = ok */
	CLC;
	/* ret */
	RETF(0);
	// 0 ;---------------------------
installspkr:
	// 4373 
	// 0 ;---------------------------
	// 0 ;* allocate memory for speaker driver
	/* mov	bx,PSIZE_SPEAKER */
	bx = (3741/16)+1;
	/* mov	ah,048h		;DOS allocate memory block */
	ah = 0x048;
	/* int	021h */
	_INT(0x021);
	/* jnc	__m2c_macrolocal_1_skip */
	if (!CF) {goto __m2c_macrolocal_1_skip;}
	/* jmp	InstallMemErr */
	goto installmemerr;
__m2c_macrolocal_1_skip:
	// 4375 
	/* mov	MusicDriverSeg,ax */
	musicdriverseg = ax;
	// 0 ;* load speaker driver
	/* push	es */
	PUSH(es);
	/* mov	cx,FSIZE_SPEAKER */
	cx = 3741;
	/* mov	dx,OFFSET SpeakerBin */
	dx = m2c::near_offset_external(speakerbin);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* xor	di,di */
	XOR(di, di);
	/* call	LoadFile */
	CALLF(loadfile, 0);
	/* pop	es */
	POP(es);
	/* jc	InstallFileErr */
	if (CF) {goto installfileerr;}
	/* mov	dx,0		;no I/O port address */
	dx = 0;
	/* jmp	ContInstall */
	goto continstall;
	// 0 ;---------------------------
installblst:
	// 4377 
installadlb:
	// 4379 
	// 0 ;---------------------------
	// 0 ;* allocate memory for AdLib driver
	/* mov	bx,PSIZE_ADLIB */
	bx = (10970/16)+1;
	/* mov	ah,048h		;DOS allocate memory block */
	ah = 0x048;
	/* int	021h */
	_INT(0x021);
	/* jc	InstallMemErr */
	if (CF) {goto installmemerr;}
	/* mov	MusicDriverSeg,ax */
	musicdriverseg = ax;
	// 0 ;* load AdLib driver
	/* push	es */
	PUSH(es);
	/* mov	cx,FSIZE_ADLIB */
	cx = 10970;
	/* mov	dx,OFFSET AdLibBin */
	dx = m2c::near_offset_external(adlibbin);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* xor	di,di */
	XOR(di, di);
	/* call	LoadFile */
	CALLF(loadfile, 0);
	/* pop	es */
	POP(es);
	/* jc	InstallFileErr */
	if (CF) {goto installfileerr;}
	/* mov	dx,00388h	;I/O port address */
	dx = 0x00388;
	/* jmp	ContInstall */
	goto continstall;
	// 0 ;---------------------------
installrlnd:
	// 4381 
	// 0 ;---------------------------
	// 0 ;* allocate memory for Roland driver
	/* mov	bx,PSIZE_ROLAND */
	bx = (8300/16)+1;
	/* mov	ah,048h		;DOS allocate memory block */
	ah = 0x048;
	/* int	021h */
	_INT(0x021);
	/* jc	InstallMemErr */
	if (CF) {goto installmemerr;}
	/* mov	MusicDriverSeg,ax */
	musicdriverseg = ax;
	// 0 ;* load Roland driver
	/* push	es */
	PUSH(es);
	/* mov	cx,FSIZE_ROLAND */
	cx = 8300;
	/* mov	dx,OFFSET RolandBin */
	dx = m2c::near_offset_external(rolandbin);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* xor	di,di */
	XOR(di, di);
	/* call	LoadFile */
	CALLF(loadfile, 0);
	/* pop	es */
	POP(es);
	/* jc	InstallFileErr */
	if (CF) {goto installfileerr;}
	/* mov	dx,00331h	;I/O port address */
	dx = 0x00331;
	// 0 ;---------------------------
continstall:
	// 4383 
	// 0 ;---------------------------
	// 0 ;* initialise
	/* mov	ah,0 */
	ah = 0;
	/* mov	cx,0 */
	cx = 0;
	/* call	DWORD PTR MusicDriver */
	CALLF(__dispatch_call_ext, musicdriver);
	/* cmp	al,0 */
	CMP(al, 0);
	/* jne	InstallCardErr */
	if ((db)(al) != (db)(0)) {goto installcarderr;}
	// 0 ;* set timer rate (for 50Hz)
	/* mov	ah,2 */
	ah = 2;
	/* mov	cx,23864 */
	cx = 23864;
	/* call	DWORD PTR MusicDriver */
	CALLF(__dispatch_call_ext, musicdriver);
	/* cmp	al,0 */
	CMP(al, 0);
	/* jne	InstallCardErr */
	if ((db)(al) != (db)(0)) {goto installcarderr;}
	// 0 ;* start theme tune
	/* mov	ah,4 */
	ah = 4;
	/* mov	al,1 */
	al = 1;
	/* call	DWORD PTR MusicDriver */
	CALLF(__dispatch_call_ext, musicdriver);
	/* cmp	al,0 */
	CMP(al, 0);
	/* jne	InstallCardErr */
	if ((db)(al) != (db)(0)) {goto installcarderr;}
	/* mov	Installed,1 */
	installed = 1;
	/* clc			;cf = 0 = ok */
	CLC;
	/* ret */
	RETF(0);
	// 0 ;---------------------------
installmemerr:
	// 4385 
	// 0 ;---------------------------
	/* mov	DieFlag,SYS_ERR_MMEM */
	dieflag = 234;
	/* stc			;cf = 1 = error */
	STC;
	/* ret */
	RETF(0);
	// 0 ;---------------------------
installfileerr:
	// 4387 
	// 0 ;---------------------------
	/* mov	DieFlag,SYS_ERR_MDRVR */
	dieflag = 233;
	/* stc			;cf = 1 = error */
	STC;
	/* ret */
	RETF(0);
	// 0 ;---------------------------
installcarderr:
	// 4389 
	// 0 ;---------------------------
	/* mov	DieFlag,SYS_ERR_MCARD */
	dieflag = 232;
	/* stc			;cf = 1 = error */
	STC;
	/* ret */
	RETF(0);
normalisemusic:
	// 1554 
	// 0 ;* only normalise if installed and not already normalised
edummylabel2:
	// 4391 
	/* test	Installed,1	;installed? */
	TEST(installed, 1);
	/* jz	@F		;no -> */
	if (!(installed & 1)) {goto dummylabel1;}
	/* test	Normalised,1	;already normalised? */
	TEST(normalised, 1);
	/* jnz	@F		;yes -> */
	if ((normalised & 1) != 0) {goto dummylabel1;}
	/* mov	Normalised,1 */
	normalised = 1;
	// 0 ;* stop theme music
	/* mov	ah,7 */
	ah = 7;
	/* call	DWORD PTR MusicDriver */
	CALLF(__dispatch_call_ext, musicdriver);
	// 0 ;* refresh (required to assert stop)
	/* mov	ah,3 */
	ah = 3;
	/* cli */
	CLI;
	/* call	DWORD PTR MusicDriver */
	CALLF(__dispatch_call_ext, musicdriver);
	/* sti */
	STI;
	// 0 ;* remove music driver
	/* mov	ah,1 */
	ah = 1;
	/* call	DWORD PTR MusicDriver */
	CALLF(__dispatch_call_ext, musicdriver);
dummylabel1:
	// 4393 
	/* @@:		ret */
	RETF(0);
suspendmusic:
	// 1586 
	/* test	Installed,1 ;* kill: assume all */
	TEST(installed, 1);
edummylabel3:
	// 4395 
	/* jz	@F */
	if (ZF) {goto dummylabel2;}
	/* mov	ah,7 */
	ah = 7;
	/* call	DWORD PTR MusicDriver */
	CALLF(__dispatch_call_ext, musicdriver);
dummylabel2:
	// 4397 
	/* @@:		ret */
	RETF(0);
resumemusic:
	// 1601 
	/* test	Installed,1 ;* kill: assume all */
	TEST(installed, 1);
edummylabel4:
	// 4399 
	/* jz	@F */
	if (ZF) {goto dummylabel3;}
	/* mov	ah,4 */
	ah = 4;
	/* mov	al,1 */
	al = 1;
	/* call	DWORD PTR MusicDriver */
	CALLF(__dispatch_call_ext, musicdriver);
dummylabel3:
	// 4401 
	/* @@:		ret */
	RETF(0);
refreshmusic:
	// 1619 
	/* test	Installed,1 ;* note: Call from 50Hz interrupt. */
	TEST(installed, 1);
edummylabel5:
	// 4403 
	/* jz	@F */
	if (ZF) {goto dummylabel4;}
	/* mov	ah,3 */
	ah = 3;
	/* call	DWORD PTR MusicDriver */
	CALLF(__dispatch_call_ext, musicdriver);
dummylabel4:
	// 4405 
	/* @@:		ret */
	RETF(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::k__m2c_macrolocal_1_skip: 	goto __m2c_macrolocal_1_skip;
        case m2c::kcontinstall: 	goto continstall;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kinstalladlb: 	goto installadlb;
        case m2c::kinstallblst: 	goto installblst;
        case m2c::kinstallcarderr: 	goto installcarderr;
        case m2c::kinstallfileerr: 	goto installfileerr;
        case m2c::kinstallmemerr: 	goto installmemerr;
        case m2c::kinstallmusic: 	goto installmusic;
        case m2c::kinstallnull: 	goto installnull;
        case m2c::kinstallrlnd: 	goto installrlnd;
        case m2c::kinstallspkr: 	goto installspkr;
        case m2c::knormalisemusic: 	goto normalisemusic;
        case m2c::krefreshmusic: 	goto refreshmusic;
        case m2c::kresumemusic: 	goto resumemusic;
        case m2c::ksuspendmusic: 	goto suspendmusic;
        default: return __dispatch_call(__disp, _state);
    };
}

