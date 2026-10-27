/* THIS IS GENERATED FILE */

        
#include "soundfx.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
installsound:
	// 1977 
	// 0 ;* init SoundOn flag wrt SoundOption
edummylabel1:
	// 4369 
	/* cmp	SoundOption,SOUND_OPT_OFF */
	CMP(soundoption, 0);
	/* je	@F */
	if ((dw)(soundoption) == (dw)(0)) {goto dummylabel1;}
	/* mov	SoundOn,1 */
	soundon = 1;
	// 0 ;* install sound card driver
dummylabel1:
	// 4371 
	/* @@:		mov	bx,SoundCard */
	bx = soundcard;
__disp=*(dw*)(((db*)&_installsound)+bx);
	/* jmp	_InstallSound[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
installnull:
	// 4373 
	// 0 ;---------------------------
	/* clc			;cf = 0 = ok */
	CLC;
	/* ret */
	RETF(0);
	// 0 ;---------------------------
installspkr:
	// 4375 
	// 0 ;---------------------------
	// 0 ;* allocate memory for speaker driver
	/* mov	bx,PSIZE_SPEAKER */
	bx = (2046/16)+1;
	/* mov	ah,048h		;DOS allocate memory block */
	ah = 0x048;
	/* int	021h */
	_INT(0x021);
	/* jnc	__m2c_macrolocal_1_skip */
	if (!CF) {goto __m2c_macrolocal_1_skip;}
	/* jmp	InstallMemErr */
	goto installmemerr;
__m2c_macrolocal_1_skip:
	// 4377 
	/* mov	Driver1Seg,ax */
	driver1seg = ax;
	// 0 ;* load speaker driver
	/* push	es */
	PUSH(es);
	/* mov	cx,FSIZE_SPEAKER */
	cx = 2046;
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
	/* jnc	__m2c_macrolocal_2_skip */
	if (!CF) {goto __m2c_macrolocal_2_skip;}
	/* jmp	InstallFileErr */
	goto installfileerr;
__m2c_macrolocal_2_skip:
	// 4379 
	// 0 ;* set speaker driver interrupt vector (080h)
	/* push	ds */
	PUSH(ds);
	/* mov	al,080h */
	al = 0x080;
	/* mov	ds,Driver1Seg */
	m2c::set_segment_register(ds, driver1seg);
	/* xor	dx,dx */
	XOR(dx, dx);
	/* mov	ah,025h		;DOS set interrupt vector */
	ah = 0x025;
	/* int	021h */
	_INT(0x021);
	/* pop	ds */
	POP(ds);
	/* mov	Installed,1 */
	installed = 1;
	/* clc			;cf = 0 = ok */
	CLC;
	/* ret */
	RETF(0);
	// 0 ;---------------------------
installblst:
	// 4381 
	// 0 ;---------------------------
	// 0 ;* allocate memory for SoundBlaster driver
	/* mov	bx,PSIZE_SBLASTER */
	bx = (24832/16)+1;
	/* mov	ah,048h		;DOS allocate memory block */
	ah = 0x048;
	/* int	021h */
	_INT(0x021);
	/* jnc	__m2c_macrolocal_3_skip */
	if (!CF) {goto __m2c_macrolocal_3_skip;}
	/* jmp	InstallMemErr */
	goto installmemerr;
__m2c_macrolocal_3_skip:
	// 4383 
	/* mov	Driver2Seg,ax */
	driver2seg = ax;
	// 0 ;* load SoundBlaster driver
	/* push	es */
	PUSH(es);
	/* mov	cx,FSIZE_SBLASTER */
	cx = 24832;
	/* mov	dx,OFFSET SBlasterBin */
	dx = m2c::near_offset_external(sblasterbin);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* xor	di,di */
	XOR(di, di);
	/* call	LoadFile */
	CALLF(loadfile, 0);
	/* pop	es */
	POP(es);
	/* jnc	__m2c_macrolocal_4_skip */
	if (!CF) {goto __m2c_macrolocal_4_skip;}
	/* jmp	InstallFileErr */
	goto installfileerr;
__m2c_macrolocal_4_skip:
	// 4385 
	// 0 ;* set SoundBlaster driver interrupt vector (081h)
	/* push	ds */
	PUSH(ds);
	/* mov	al,081h */
	al = 0x081;
	/* mov	ds,Driver2Seg */
	m2c::set_segment_register(ds, driver2seg);
	/* xor	dx,dx */
	XOR(dx, dx);
	/* mov	ah,025h		;DOS set interrupt vector */
	ah = 0x025;
	/* int	021h */
	_INT(0x021);
	/* pop	ds */
	POP(ds);
	// 0 ;* init SoundBlaster (check card is present)
	/* mov	ah,BLST_INIT */
	ah = 0x005;
	/* int	081h */
	_INT(0x081);
	/* cmp	al,055h		;card present? */
	CMP(al, 0x055);
	/* jne	__m2c_macrolocal_6_skip */
	if ((db)(al) != (db)(0x055)) {goto __m2c_macrolocal_6_skip;}
	/* jmp	InstallCardErr */
	goto installcarderr;
__m2c_macrolocal_6_skip:
	// 4387 
	// 0 ;no ->
	// 0 ;* >>>>> fall into AdLib code <<<<<
	// 0 ;---------------------------
installadlb:
	// 4389 
	// 0 ;---------------------------
	// 0 ;* allocate memory for AdLib driver
	/* mov	bx,PSIZE_ADLIB */
	bx = (4424/16)+1;
	/* mov	ah,048h		;DOS allocate memory block */
	ah = 0x048;
	/* int	021h */
	_INT(0x021);
	/* jnc	__m2c_macrolocal_7_skip */
	if (!CF) {goto __m2c_macrolocal_7_skip;}
	/* jmp	InstallMemErr */
	goto installmemerr;
__m2c_macrolocal_7_skip:
	// 4391 
	/* mov	Driver1Seg,ax */
	driver1seg = ax;
	// 0 ;* load AdLib driver
	/* push	es */
	PUSH(es);
	/* mov	cx,FSIZE_ADLIB */
	cx = 4424;
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
	/* jnc	__m2c_macrolocal_8_skip */
	if (!CF) {goto __m2c_macrolocal_8_skip;}
	/* jmp	InstallFileErr */
	goto installfileerr;
__m2c_macrolocal_8_skip:
	// 4393 
	// 0 ;* set AdLib driver interrupt vector (080h)
	/* push	ds */
	PUSH(ds);
	/* mov	al,080h */
	al = 0x080;
	/* mov	ds,Driver1Seg */
	m2c::set_segment_register(ds, driver1seg);
	/* xor	dx,dx */
	XOR(dx, dx);
	/* mov	ah,025h		;DOS set interrupt vector */
	ah = 0x025;
	/* int	021h */
	_INT(0x021);
	/* pop	ds */
	POP(ds);
	// 0 ;* init AdLib (check card is present)
	/* mov	ah,ADLB_INIT */
	ah = 0x014;
	/* int	080h */
	_INT(0x080);
	/* cmp	al,055h		;card present? */
	CMP(al, 0x055);
	/* jne	__m2c_macrolocal_10_skip */
	if ((db)(al) != (db)(0x055)) {goto __m2c_macrolocal_10_skip;}
	/* jmp	InstallCardErr */
	goto installcarderr;
__m2c_macrolocal_10_skip:
	// 4395 
	// 0 ;no ->
	/* mov	Installed,1 */
	installed = 1;
	/* clc			;cf = 0 = ok */
	CLC;
	/* ret */
	RETF(0);
	// 0 ;---------------------------
installrlnd:
	// 4397 
	// 0 ;---------------------------
	// 0 ;* allocate memory for Roland driver
	/* mov	bx,PSIZE_ROLAND */
	bx = (7492/16)+1;
	/* mov	ah,048h		;DOS allocate memory block */
	ah = 0x048;
	/* int	021h */
	_INT(0x021);
	/* jnc	__m2c_macrolocal_11_skip */
	if (!CF) {goto __m2c_macrolocal_11_skip;}
	/* jmp	InstallMemErr */
	goto installmemerr;
__m2c_macrolocal_11_skip:
	// 4399 
	/* mov	Driver1Seg,ax */
	driver1seg = ax;
	// 0 ;* load Roland driver
	/* push	es */
	PUSH(es);
	/* mov	cx,FSIZE_ROLAND */
	cx = 7492;
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
	/* jnc	__m2c_macrolocal_12_skip */
	if (!CF) {goto __m2c_macrolocal_12_skip;}
	/* jmp	InstallFileErr */
	goto installfileerr;
__m2c_macrolocal_12_skip:
	// 4401 
	// 0 ;* set Roland driver interrupt vector (080h)
	/* push	ds */
	PUSH(ds);
	/* mov	al,080h */
	al = 0x080;
	/* mov	ds,Driver1Seg */
	m2c::set_segment_register(ds, driver1seg);
	/* xor	dx,dx */
	XOR(dx, dx);
	/* mov	ah,025h		;DOS set interrupt vector */
	ah = 0x025;
	/* int	021h */
	_INT(0x021);
	/* pop	ds */
	POP(ds);
	// 0 ;* init Roland (check card is present)
	/* mov	ah,RLND_INIT */
	ah = 0x014;
	/* int	080h */
	_INT(0x080);
	/* cmp	al,055h		;card present? */
	CMP(al, 0x055);
	/* jne	__m2c_macrolocal_14_skip */
	if ((db)(al) != (db)(0x055)) {goto __m2c_macrolocal_14_skip;}
	/* jmp	InstallCardErr */
	goto installcarderr;
__m2c_macrolocal_14_skip:
	// 4403 
	// 0 ;no ->
	/* mov	Installed,1 */
	installed = 1;
	/* clc			;cf = 0 = ok */
	CLC;
	/* ret */
	RETF(0);
	// 0 ;---------------------------
installmemerr:
	// 4405 
	// 0 ;---------------------------
	/* mov	DieFlag,SYS_ERR_SMEM */
	dieflag = 243;
	/* stc			;cf = 1 = error */
	STC;
	/* ret */
	RETF(0);
	// 0 ;---------------------------
installfileerr:
	// 4407 
	// 0 ;---------------------------
	/* mov	DieFlag,SYS_ERR_SDRVR */
	dieflag = 242;
	/* stc			;cf = 1 = error */
	STC;
	/* ret */
	RETF(0);
	// 0 ;---------------------------
installcarderr:
	// 4409 
	// 0 ;---------------------------
	/* mov	DieFlag,SYS_ERR_SCARD */
	dieflag = 241;
	/* stc			;cf = 1 = error */
	STC;
	/* ret */
	RETF(0);
normalisesound:
	// 2200 
	// 0 ;* only normalise if installed and not already normalised
edummylabel2:
	// 4411 
	/* test	Installed,1	;installed? */
	TEST(installed, 1);
	/* jz	@F		;no -> */
	if (!(installed & 1)) {goto dummylabel2;}
	/* test	Normalised,1	;already normalised? */
	TEST(normalised, 1);
	/* jnz	@F		;yes -> */
	if ((normalised & 1) != 0) {goto dummylabel2;}
	/* mov	Normalised,1 */
	normalised = 1;
	/* mov	bx,SoundCard */
	bx = soundcard;
__disp=*(dw*)(((db*)&_normalisesound)+bx);
	/* jmp	_NormaliseSound[bx] */
	J(return __dispatch_call_ext(__disp, _state));
dummylabel2:
	// 4413 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
normalnull:
	// 4415 
	// 0 ;---------------------------
	/* ret */
	RETF(0);
	// 0 ;---------------------------
normalspkr:
	// 4417 
	// 0 ;---------------------------
	/* mov	ah,SPKR_NORM */
	ah = 0x002;
	/* int	080h */
	_INT(0x080);
	/* cli */
	CLI;
	/* mov	ah,SPKR_REFRESH */
	ah = 0x001;
	/* int	080h */
	_INT(0x080);
	// 0 ;refresh required to assert normalise
	/* sti */
	STI;
	/* ret */
	RETF(0);
	// 0 ;---------------------------
normalblst:
	// 4419 
	// 0 ;---------------------------
	/* mov	ah,BLST_NORM */
	ah = 0x002;
	/* int	081h */
	_INT(0x081);
	/* mov	ah,ADLB_NORM */
	ah = 0x002;
	/* int	080h */
	_INT(0x080);
	/* ret */
	RETF(0);
	// 0 ;---------------------------
normaladlb:
	// 4421 
	// 0 ;---------------------------
	// 0 ;* check if changed to AdLib after SoundBlaster fault
	/* test	BlstFault,1	;SoundBlaster fault? */
	TEST(blstfault, 1);
	/* jnz	NormalBlst	;yes, normalise SoundBlaster -> */
	if ((blstfault & 1) != 0) {goto normalblst;}
	/* mov	ah,ADLB_NORM */
	ah = 0x002;
	/* int	080h */
	_INT(0x080);
	/* ret */
	RETF(0);
	// 0 ;---------------------------
normalrlnd:
	// 4423 
	// 0 ;---------------------------
	/* mov	ah,RLND_NORM */
	ah = 0x013;
	/* int	080h */
	_INT(0x080);
	/* ret */
	RETF(0);
suspendsound:
	// 2269 
	// 0 ;* clear vars
edummylabel3:
	// 4425 
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	SoundOn,al */
	soundon = al;
	/* mov	EngSoundOn,al */
	engsoundon = al;
	// 0 ;* turn off effects
	/* mov	bx,SoundCard */
	bx = soundcard;
__disp=*(dw*)(((db*)&_suspendsound)+bx);
	/* jmp	_SuspendSound[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
suspendnull:
	// 4427 
	// 0 ;---------------------------
	/* ret */
	RETF(0);
	// 0 ;---------------------------
suspendspkr:
	// 4429 
	// 0 ;---------------------------
	/* mov	ah,SPKR_FXOFF1 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
	/* cli */
	CLI;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Ch1Priority,al */
	ch1priority = al;
	/* mov	Ch1Flags,al */
	ch1flags = al;
	/* mov	Ch1Timer,ax */
	ch1timer = ax;
	/* sti */
	STI;
	/* ret */
	RETF(0);
	// 0 ;---------------------------
suspendblst:
	// 4431 
	// 0 ;---------------------------
	/* mov	ah,BLST_FXOFF1 */
	ah = 0x001;
	/* int	081h */
	_INT(0x081);
	/* cli */
	CLI;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Ch3Priority,al */
	ch3priority = al;
	/* mov	Ch3Flags,al */
	ch3flags = al;
	/* mov	Ch3Timer,ax */
	ch3timer = ax;
	/* sti */
	STI;
	// 0 ;* >>>>> fall into AdLib code <<<<<
	// 0 ;---------------------------
suspendadlb:
	// 4433 
	// 0 ;---------------------------
	/* mov	ah,ADLB_FXOFF1 */
	ah = 0x006;
	/* int	080h */
	_INT(0x080);
	/* cli */
	CLI;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Ch1Priority,al */
	ch1priority = al;
	/* mov	Ch1Flags,al */
	ch1flags = al;
	/* mov	Ch1Timer,ax */
	ch1timer = ax;
	/* sti */
	STI;
	/* mov	ah,ADLB_FXOFF2 */
	ah = 0x007;
	/* int	080h */
	_INT(0x080);
	/* cli */
	CLI;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Ch2Priority,al */
	ch2priority = al;
	/* mov	Ch2Flags,al */
	ch2flags = al;
	/* mov	Ch2Timer,ax */
	ch2timer = ax;
	/* sti */
	STI;
	/* ret */
	RETF(0);
	// 0 ;---------------------------
suspendrlnd:
	// 4435 
	// 0 ;---------------------------
	/* mov	ah,RLND_FXOFF1 */
	ah = 0x006;
	/* int	080h */
	_INT(0x080);
	/* cli */
	CLI;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Ch1Priority,al */
	ch1priority = al;
	/* mov	Ch1Flags,al */
	ch1flags = al;
	/* mov	Ch1Timer,ax */
	ch1timer = ax;
	/* sti */
	STI;
	/* mov	ah,RLND_FXOFF2 */
	ah = 0x007;
	/* int	080h */
	_INT(0x080);
	/* cli */
	CLI;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Ch2Priority,al */
	ch2priority = al;
	/* mov	Ch2Flags,al */
	ch2flags = al;
	/* mov	Ch2Timer,ax */
	ch2timer = ax;
	/* sti */
	STI;
	/* ret */
	RETF(0);
resumesound:
	// 2367 
	/* cmp	SoundOption,SOUND_OPT_OFF	;sound effects off? */
	CMP(soundoption, 0);
edummylabel4:
	// 4437 
	/* je	@F				;yes, do not resume -> */
	if (ZF) {goto dummylabel3;}
	/* mov	SoundOn,1 */
	soundon = 1;
	/* mov	EngSoundOn,0	;retrigger engine sound */
	engsoundon = 0;
dummylabel3:
	// 4439 
	/* @@:		ret */
	RETF(0);
refreshsound:
	// 2384 
	// 0 ;------------------
	// 0 ;* update channel 1
	// 0 ;------------------
edummylabel5:
	// 4441 
	/* cmp	Ch1Priority,0	;channel 1 in use? */
	CMP(ch1priority, 0);
	/* je	SkipCh1		;no -> */
	if ((dw)(ch1priority) == (dw)(0)) {goto skipch1;}
	/* mov	ax,Ch1Timer */
	ax = ch1timer;
	/* cmp	ax,-1		;continuous? */
	CMP(ax, -1);
	/* je	SkipCh1		;yes -> */
	if ((dw)(ax) == (dw)(-1)) {goto skipch1;}
	/* sub	ax,1		;time up? */
	SUB(ax, 1);
	/* jnc	@F		;no -> */
	if (!CF) {goto dummylabel4;}
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Ch1Priority,al */
	ch1priority = al;
dummylabel4:
	// 4443 
	/* @@:		mov	Ch1Timer,ax */
	ch1timer = ax;
	// 0 ;------------------
	// 0 ;* update channel 2
	// 0 ;------------------
skipch1:
	// 4445 
	/* SkipCh1:	cmp	Ch2Priority,0	;channel 2 in use? */
	CMP(ch2priority, 0);
	/* je	SkipCh2		;no -> */
	if ((dw)(ch2priority) == (dw)(0)) {goto skipch2;}
	/* mov	ax,Ch2Timer */
	ax = ch2timer;
	/* cmp	ax,-1		;continuous? */
	CMP(ax, -1);
	/* je	SkipCh2		;yes -> */
	if ((dw)(ax) == (dw)(-1)) {goto skipch2;}
	/* sub	ax,1		;time up? */
	SUB(ax, 1);
	/* jnc	@F		;no -> */
	if (!CF) {goto dummylabel5;}
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Ch2Priority,al */
	ch2priority = al;
dummylabel5:
	// 4447 
	/* @@:		mov	Ch2Timer,ax */
	ch2timer = ax;
	// 0 ;------------------
	// 0 ;* update channel 3
	// 0 ;------------------
skipch2:
	// 4449 
	/* SkipCh2:	cmp	Ch3Priority,0	;channel 3 in use? */
	CMP(ch3priority, 0);
	/* je	SkipCh3		;no -> */
	if ((dw)(ch3priority) == (dw)(0)) {goto skipch3;}
	/* mov	ax,Ch3Timer */
	ax = ch3timer;
	/* cmp	ax,-1		;continuous? */
	CMP(ax, -1);
	/* je	SkipCh3		;yes -> */
	if ((dw)(ax) == (dw)(-1)) {goto skipch3;}
	/* sub	ax,1		;time up? */
	SUB(ax, 1);
	/* jnc	@F		;no -> */
	if (!CF) {goto dummylabel6;}
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Ch3Priority,al */
	ch3priority = al;
dummylabel6:
	// 4451 
	/* @@:		mov	Ch3Timer,ax */
	ch3timer = ax;
	// 0 ;---------
	// 0 ;* refresh
	// 0 ;---------
skipch3:
	// 4453 
	/* SkipCh3:	mov	bx,SoundCard */
	bx = soundcard;
__disp=*(dw*)(((db*)&_refreshsound)+bx);
	/* jmp	_RefreshSound[bx] */
	J(return __dispatch_call_ext(__disp, _state));
	// 0 ;---------------------------
refreshnull:
	// 4455 
	// 0 ;---------------------------
	/* ret */
	RETF(0);
	// 0 ;---------------------------
refreshspkr:
	// 4457 
	// 0 ;---------------------------
	/* mov	ah,SPKR_REFRESH */
	ah = 0x001;
	/* int	080h */
	_INT(0x080);
	/* ret */
	RETF(0);
	// 0 ;---------------------------
refreshblst:
	// 4459 
refreshadlb:
	// 4461 
	// 0 ;---------------------------
	/* mov	ah,ADLB_REFRESH */
	ah = 0x001;
	/* int	080h */
	_INT(0x080);
	/* ret */
	RETF(0);
	// 0 ;---------------------------
refreshrlnd:
	// 4463 
	// 0 ;---------------------------
	/* mov	ah,RLND_REFRESH */
	ah = 0x001;
	/* int	080h */
	_INT(0x080);
	/* ret */
	RETF(0);
updatesound:
	// 2472 
	/* test	SoundOn,1	;sound enabled? */
	TEST(soundon, 1);
edummylabel6:
	// 4465 
	/* jz	@F		;no -> */
	if (ZF) {goto dummylabel7;}
	/* mov	bx,SoundCard */
	bx = soundcard;
__disp=*(dw*)(((db*)&_updatesound)+bx);
	/* jmp	_UpdateSound[bx] */
	J(return __dispatch_call_ext(__disp, _state));
dummylabel7:
	// 4467 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
updatenull:
	// 4469 
	// 0 ;---------------------------
	/* ret */
	RETF(0);
	// 0 ;---------------------------
updatespkr:
	// 4471 
	// 0 ;---------------------------
	// 0 ;* >>>>> looping sounds timeout <<<<<
	/* cmp	Ch1Priority,0		;sound channel free? */
	CMP(ch1priority, 0);
	/* jne	@F			;no -> */
	if ((dw)(ch1priority) != (dw)(0)) {goto dummylabel8;}
	/* test	Ch1Flags,SFLG_LOOP	;looping sound? */
	TEST(ch1flags, 0x1);
	/* jz	@F			;no -> */
	if (!(ch1flags & 0x1)) {goto dummylabel8;}
	/* mov	ah,SPKR_FXOFF1 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
	/* cli */
	CLI;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Ch1Priority,al */
	ch1priority = al;
	/* mov	Ch1Flags,al */
	ch1flags = al;
	/* mov	Ch1Timer,ax */
	ch1timer = ax;
	/* sti */
	STI;
	// 0 ;* >>>>> lock on growl sound <<<<<
dummylabel8:
	// 4473 
	/* @@:		cmp	Ch1Priority,SPKR_PR_GROWL	;override? */
	CMP(ch1priority, 5);
	/* ja	SkipGrowlSpkr			;no -> */
	if ((dw)(ch1priority) > (dw)(5)) {goto skipgrowlspkr;}
	// 0 ;* check air radar lock
	/* cmp	AirTgtPtr,-1 */
	CMP(airtgtptr, -1);
	/* je	GrowlOffSpkr */
	if ((dw)(airtgtptr) == (dw)(-1)) {goto growloffspkr;}
	// 0 ;* Sidewinders must have IR lock
	/* cmp	ArmMode,ARM_SIDEWINDER */
	CMP(armmode, 18);
	/* jne	@F */
	if ((dw)(armmode) != (dw)(18)) {goto dummylabel9;}
	/* test	IRLockFlag,1 */
	TEST(irlockflag, 1);
	/* jz	GrowlOffSpkr */
	if (!(irlockflag & 1)) {goto growloffspkr;}
	// 0 ;* growl on, start growl if not if growling already
dummylabel9:
	// 4475 
	/* @@:		cmp	Ch1Priority,SPKR_PR_GROWL */
	CMP(ch1priority, 5);
	/* je	SkipGrowlSpkr */
	if ((dw)(ch1priority) == (dw)(5)) {goto skipgrowlspkr;}
	/* mov	EngSoundOn,0 */
	engsoundon = 0;
	/* cli */
	CLI;
	/* mov	Ch1Priority,SPKR_PR_GROWL */
	ch1priority = 5;
	/* mov	Ch1Flags,SPKR_FL_GROWL */
	ch1flags = 0;
	/* mov	Ch1Timer,SPKR_TM_GROWL */
	ch1timer = -1;
	/* sti */
	STI;
	/* mov	al,SPKR_FX_GROWL */
	al = 0x00b;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,SPKR_FXON1 */
	ah = 0x004;
	/* int	080h */
	_INT(0x080);
	/* jmp	SkipGrowlSpkr */
	goto skipgrowlspkr;
	// 0 ;* growl off, stop growl if growling
growloffspkr:
	// 4477 
	/* GrowlOffSpkr:	cmp	Ch1Priority,SPKR_PR_GROWL */
	CMP(ch1priority, 5);
	/* jne	SkipGrowlSpkr */
	if ((dw)(ch1priority) != (dw)(5)) {goto skipgrowlspkr;}
	/* mov	ah,SPKR_FXOFF1 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
	/* cli */
	CLI;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Ch1Priority,al */
	ch1priority = al;
	/* mov	Ch1Flags,al */
	ch1flags = al;
	/* mov	Ch1Timer,ax */
	ch1timer = ax;
	/* sti */
	STI;
	// 0 ;* >>>>> rumble sound <<<<<
skipgrowlspkr:
	// 4479 
	/* SkipGrowlSpkr:	cmp	Ch1Priority,SPKR_PR_RUMBLE	;override? */
	CMP(ch1priority, 1);
	/* ja	SkipRumbleSpkr			;no -> */
	if ((dw)(ch1priority) > (dw)(1)) {goto skiprumblespkr;}
	/* mov	al,ShakePriority */
	al = shakepriority;
	/* mov	ah,1			;assume rumble */
	ah = 1;
	/* cmp	al,SHAKE_BRAKE		;brake? */
	CMP(al, 240);
	/* je	@F			;yes -> */
	if ((db)(al) == (db)(240)) {goto dummylabel10;}
	/* cmp	al,SHAKE_BUFFET		;buffet? */
	CMP(al, 245);
	/* je	@F			;yes -> */
	if ((db)(al) == (db)(245)) {goto dummylabel10;}
	/* cmp	al,SHAKE_OFF_HARD	;off hard? */
	CMP(al, 250);
	/* je	@F			;yes -> */
	if ((db)(al) == (db)(250)) {goto dummylabel10;}
	/* cmp	al,SHAKE_WHEELS_UP	;wheels up? */
	CMP(al, 255);
	/* je	@F			;yes -> */
	if ((db)(al) == (db)(255)) {goto dummylabel10;}
	/* xor	ah,ah			;no rumble */
	XOR(ah, ah);
dummylabel10:
	// 4481 
	/* @@:		cmp	Ch1Priority,SPKR_PR_RUMBLE	;rumbling already? */
	CMP(ch1priority, 1);
	/* je	ContRumbleSpkr			;yes -> */
	if ((dw)(ch1priority) == (dw)(1)) {goto contrumblespkr;}
	/* test	ah,ah		;start rumble? */
	TEST(ah, ah);
	/* jz	SkipRumbleSpkr	;no -> */
	if (!(ah & ah)) {goto skiprumblespkr;}
	/* mov	EngSoundOn,0 */
	engsoundon = 0;
	/* cli */
	CLI;
	/* mov	Ch1Priority,SPKR_PR_RUMBLE */
	ch1priority = 1;
	/* mov	Ch1Flags,SPKR_FL_RUMBLE */
	ch1flags = 0;
	/* mov	Ch1Timer,SPKR_TM_RUMBLE */
	ch1timer = -1;
	/* sti */
	STI;
	/* mov	al,SPKR_FX_RUMBLE */
	al = 0x009;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,SPKR_FXON1 */
	ah = 0x004;
	/* int	080h */
	_INT(0x080);
	/* jmp	SkipRumbleSpkr */
	goto skiprumblespkr;
contrumblespkr:
	// 4483 
	/* ContRumbleSpkr:	test	ah,ah		;rumble still valid? */
	TEST(ah, ah);
	/* jnz	SkipRumbleSpkr	;yes -> */
	if ((ah & ah) != 0) {goto skiprumblespkr;}
	/* mov	ah,SPKR_FXOFF1 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
	/* cli */
	CLI;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Ch1Priority,al */
	ch1priority = al;
	/* mov	Ch1Flags,al */
	ch1flags = al;
	/* mov	Ch1Timer,ax */
	ch1timer = ax;
	/* sti */
	STI;
	// 0 ;stop rumble
	// 0 ;* >>>>> engine sound <<<<<
skiprumblespkr:
	// 4485 
	/* SkipRumbleSpkr:	cmp	SoundOption,SOUND_OPT_ENG	;engine sound option? */
	CMP(soundoption, 2);
	/* jne	EngOffSpkr			;no -> */
	if ((dw)(soundoption) != (dw)(2)) {goto engoffspkr;}
	/* cmp	Ch1Priority,0	;channel 1 in use? */
	CMP(ch1priority, 0);
	/* jne	EngOffSpkr	;yes -> */
	if ((dw)(ch1priority) != (dw)(0)) {goto engoffspkr;}
	/* mov	ax,Rpm1 */
	ax = rpm1;
	/* or	ax,Rpm2		;any rpm? */
	OR(ax, rpm2);
	/* jz	EngOffSpkr	;no (engines damaged, no fuel etc.) -> */
	if (ax == 0) {goto engoffspkr;}
	// 0 ;* calc "revs" value
	// 0 ;* Rpm1 (0 .. 100 * 256 (idle = 63%))
	// 0 ;* Rpm2 (0 .. 100 * 256 (idle = 63%))
	// 0 ;* Reheat (0 .. 128)
	// 0 ;* revs = max(Rpm1, Rpm2)
	/* mov	ax,Rpm1 */
	ax = rpm1;
	/* mov	dx,Rpm2 */
	dx = rpm2;
	/* cmp	ax,dx */
	CMP(ax, dx);
	/* jae	@F */
	if ((dw)(ax) >= (dw)(dx)) {goto dummylabel11;}
	/* mov	ax,dx */
	ax = dx;
	// 0 ;* revs = 74 - max(revs - idle, 0) / 128 + 48 = 122 .. 48
dummylabel11:
	// 4487 
	/* @@:		sub	ax,63*256 */
	SUB(ax, 63*256);
	/* cmc */
	CMC;
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* cwd			;if passed cf = 1 then dx = 0 */
	CWD;
	/* rcl	ax,1 */
	RCL(ax, 1);
	/* and	ax,dx */
	AND(ax, dx);
	/* mov	cl,7 */
	cl = 7;
	/* shr	ax,cl		;0 .. 74 */
	SHR(ax, cl);
	/* mov	ah,74 */
	ah = 74;
	/* sub	ah,al		;74 .. 0 */
	SUB(ah, al);
	/* add	ah,48		;122 .. 48 */
	ADD(ah, 48);
	/* mov	Tmp1,ah */
	tmp1 = ah;
	// 0 ;* sort engine sound
	/* test	EngSoundOn,1	;engine sound on? */
	TEST(engsoundon, 1);
	/* jnz	EngAdjustSpkr	;yes -> */
	if ((engsoundon & 1) != 0) {goto engadjustspkr;}
	// 0 ;* start engine sound
	/* mov	al,SPKR_FX_INT_ENG	;assume internal engine */
	al = 0x000;
	/* test	QuieterCockpit,1		;in cockpit? */
	TEST(quietercockpit, 1);
	/* jnz	@F			;yes -> */
	if ((quietercockpit & 1) != 0) {goto dummylabel12;}
	/* mov	al,SPKR_FX_EXT_ENG	;external engine */
	al = 0x001;
dummylabel12:
	// 4489 
	/* @@:	mov	ah,SPKR_FXON1 */
	ah = 0x004;
	/* int	080h */
	_INT(0x080);
	/* mov	EngSoundOn,1 */
	engsoundon = 1;
	// 0 ;* adjust engine revs
engadjustspkr:
	// 4491 
	/* EngAdjustSpkr:	mov	al,Tmp1 */
	al = tmp1;
	/* mov	ah,SPKR_REVS1 */
	ah = 0x007;
	/* int	080h */
	_INT(0x080);
	/* jmp	EngOkSpkr */
	goto engokspkr;
	// 0 ;* turn engine sound off (if not already)
engoffspkr:
	// 4493 
	/* EngOffSpkr:	test	EngSoundOn,1	;engine sound already off? */
	TEST(engsoundon, 1);
	/* jz	EngOkSpkr	;yes -> */
	if (!(engsoundon & 1)) {goto engokspkr;}
	/* mov	ah,SPKR_FXOFF1 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
	/* cli */
	CLI;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Ch1Priority,al */
	ch1priority = al;
	/* mov	Ch1Flags,al */
	ch1flags = al;
	/* mov	Ch1Timer,ax */
	ch1timer = ax;
	/* sti */
	STI;
	/* mov	EngSoundOn,0 */
	engsoundon = 0;
engokspkr:
	// 4495 
	/* EngOkSpkr:	ret */
	RETF(0);
	// 0 ;---------------------------
updateblst:
	// 4497 
	// 0 ;---------------------------
	// 0 ;* >>>>> check DSP status <<<<<
	/* mov	ah,BLST_FAULT */
	ah = 0x006;
	/* int	081h */
	_INT(0x081);
	/* test	al,al			;fault? */
	TEST(al, al);
	/* jz	@F			;no -> */
	if (!(al & al)) {goto dummylabel13;}
	/* mov	BlstFault,1		;flag fault condition */
	blstfault = 1;
	/* mov	EngSoundOn,0		;retrigger engine sound */
	engsoundon = 0;
	/* mov	SoundCard,SND_ADLIB	;switch to AdLib */
	soundcard = 6;
	/* jmp	UpdateAdLb */
	goto updateadlb;
dummylabel13:
	// 4499 
	// 0 ;* >>>>> engine sound <<<<<
	/* cmp	SoundOption,SOUND_OPT_ENG	;engine sound option? */
	CMP(soundoption, 2);
	/* jne	EngOffBlst			;no -> */
	if ((dw)(soundoption) != (dw)(2)) {goto engoffblst;}
	/* cmp	Ch3Priority,0	;channel 3 in use? */
	CMP(ch3priority, 0);
	/* jne	EngOffBlst	;yes -> */
	if ((dw)(ch3priority) != (dw)(0)) {goto engoffblst;}
	/* mov	ax,Rpm1 */
	ax = rpm1;
	/* or	ax,Rpm2		;any rpm? */
	OR(ax, rpm2);
	/* jz	EngOffBlst	;no (engines damaged, no fuel etc.) -> */
	if (ax == 0) {goto engoffblst;}
	// 0 ;* calc "revs" value
	// 0 ;* Rpm1 (0 .. 100 * 256 (idle = 63%))
	// 0 ;* Rpm2 (0 .. 100 * 256 (idle = 63%))
	// 0 ;* Reheat (0 .. 128)
	// 0 ;* revs = max(Rpm1, Rpm2)
	/* mov	ax,Rpm1 */
	ax = rpm1;
	/* mov	dx,Rpm2 */
	dx = rpm2;
	/* cmp	ax,dx */
	CMP(ax, dx);
	/* jae	@F */
	if ((dw)(ax) >= (dw)(dx)) {goto dummylabel14;}
	/* mov	ax,dx */
	ax = dx;
	// 0 ;* if revs >= idle then
	// 0 ;*    revs = (revs - idle) / 128 + 40 + Reheat / 8 = 40 .. 130
	// 0 ;* else
	// 0 ;*    revs = revs / 512 + 8 = 8 .. 39
	// 0 ;* endif
dummylabel14:
	// 4501 
	/* @@:		cmp	ax,63*256	;revs < idle? */
	CMP(ax, 63*256);
	/* jb	@F		;yes -> */
	if ((dw)(ax) < (dw)(63*256)) {goto dummylabel15;}
	/* sub	ax,63*256 */
	SUB(ax, 63*256);
	/* mov	cl,7 */
	cl = 7;
	/* shr	ax,cl		;0 .. 74 */
	SHR(ax, cl);
	/* add	al,40		;40 .. 114 */
	ADD(al, 40);
	/* mov	dl,al */
	dl = al;
	/* mov	ax,Reheat */
	ax = reheat;
	/* mov	cl,3 */
	cl = 3;
	/* shr	ax,cl		;0 .. 16 */
	SHR(ax, cl);
	/* add	dl,al		;16 .. 130 */
	ADD(dl, al);
	/* jmp	EngContBlst */
	goto engcontblst;
	// 0 ;* spool down
dummylabel15:
	// 4503 
	/* @@:		mov	cl,9 */
	cl = 9;
	/* shr	dx,cl		;0 .. 31 */
	SHR(dx, cl);
	/* add	dl,8		;8 .. 39 */
	ADD(dl, 8);
	// 0 ;* sort engine sound
engcontblst:
	// 4505 
	/* EngContBlst:	test	EngSoundOn,1	;engine sound on? */
	TEST(engsoundon, 1);
	/* jz	@F		;no -> */
	if (!(engsoundon & 1)) {goto dummylabel16;}
	// 0 ;* adjust engine revs
	/* mov	ah,BLST_REVS1 */
	ah = 0x004;
	/* int	081h */
	_INT(0x081);
	/* jmp	EngOkBlst */
	goto engokblst;
	// 0 ;* start engine sound
dummylabel16:
	// 4507 
	/* @@:		mov	al,BLST_FX_INT_ENG	;assume internal engine */
	al = 0x007;
	/* test	QuieterCockpit,1		;in cockpit? */
	TEST(quietercockpit, 1);
	/* jnz	@F			;yes -> */
	if ((quietercockpit & 1) != 0) {goto dummylabel17;}
	/* mov	al,BLST_FX_EXT_ENG	;external engine */
	al = 0x003;
dummylabel17:
	// 4509 
	/* @@:	mov	ah,BLST_FXON1 */
	ah = 0x000;
	/* int	081h */
	_INT(0x081);
	/* mov	EngSoundOn,1 */
	engsoundon = 1;
	/* jmp	EngOkBlst */
	goto engokblst;
	// 0 ;* turn engine sound off (if not already)
engoffblst:
	// 4511 
	/* EngOffBlst:	test	EngSoundOn,1	;engine sound already off? */
	TEST(engsoundon, 1);
	/* jz	EngOkBlst	;yes -> */
	if (!(engsoundon & 1)) {goto engokblst;}
	/* mov	ah,BLST_FXOFF1 */
	ah = 0x001;
	/* int	081h */
	_INT(0x081);
	/* cli */
	CLI;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Ch3Priority,al */
	ch3priority = al;
	/* mov	Ch3Flags,al */
	ch3flags = al;
	/* mov	Ch3Timer,ax */
	ch3timer = ax;
	/* sti */
	STI;
	/* mov	EngSoundOn,0 */
	engsoundon = 0;
	// 0 ;* >>>>> jump into AdLib code <<<<<
engokblst:
	// 4513 
	/* EngOkBlst:	jmp	IntoUpdateAdLb */
	goto intoupdateadlb;
	// 0 ;---------------------------
updateadlb:
	// 4515 
	// 0 ;---------------------------
	// 0 ;* >>>>> engine sound <<<<<
	/* cmp	SoundOption,SOUND_OPT_ENG	;engine sound option? */
	CMP(soundoption, 2);
	/* jne	EngOffAdLb			;no -> */
	if ((dw)(soundoption) != (dw)(2)) {goto engoffadlb;}
	/* mov	ax,Rpm1 */
	ax = rpm1;
	/* or	ax,Rpm2		;any rpm? */
	OR(ax, rpm2);
	/* jz	EngOffAdLb	;no (engines damaged, no fuel etc.) -> */
	if (ax == 0) {goto engoffadlb;}
	// 0 ;* calc "revs" value
	// 0 ;* Rpm1 (0 .. 100 * 256 (idle = 63%))
	// 0 ;* Rpm2 (0 .. 100 * 256 (idle = 63%))
	// 0 ;* Reheat (0 .. 128)
	// 0 ;* revs = max(Rpm1, Rpm2)
	/* mov	ax,Rpm1 */
	ax = rpm1;
	/* mov	dx,Rpm2 */
	dx = rpm2;
	/* cmp	ax,dx */
	CMP(ax, dx);
	/* jae	@F */
	if ((dw)(ax) >= (dw)(dx)) {goto dummylabel18;}
	/* mov	ax,dx */
	ax = dx;
dummylabel18:
	// 4517 
	/* @@:		mov	bp,ax		;store revs */
	bp = ax;
	// 0 ;* revs = max(revs - idle, 0) / 47 + Reheat / 4 = 0 .. 233
	/* sub	ax,63*256 */
	SUB(ax, 63*256);
	/* cmc */
	CMC;
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* cwd			;if passed cf = 1 then dx = 0 */
	CWD;
	/* rcl	ax,1 */
	RCL(ax, 1);
	/* and	ax,dx */
	AND(ax, dx);
	/* xor	dx,dx */
	XOR(dx, dx);
	/* mov	bx,47 */
	bx = 47;
	/* div	bx		;0 .. 201 */
	DIV2(bx);
	/* mov	dx,Reheat */
	dx = reheat;
	/* mov	cl,2 */
	cl = 2;
	/* shr	dx,cl		;0 .. 32 */
	SHR(dx, cl);
	/* add	al,dl		;0 .. 233 */
	ADD(al, dl);
	/* mov	Tmp1,al */
	tmp1 = al;
	// 0 ;* vol = revs / 2048 + 32 + Reheat / 32 = 12 .. 54
	/* mov	ax,bp		;restore revs */
	ax = bp;
	/* mov	cl,11 */
	cl = 11;
	/* shr	ax,cl		;0 .. 12 */
	SHR(ax, cl);
	/* add	al,32		;12 .. 44 */
	ADD(al, 32);
	/* mov	dx,Reheat */
	dx = reheat;
	/* mov	cl,5 */
	cl = 5;
	/* shr	dx,cl		;0 .. 4 */
	SHR(dx, cl);
	/* add	al,dl		;12 .. 48 */
	ADD(al, dl);
	/* mov	Tmp2,al */
	tmp2 = al;
	// 0 ;* sort engine sound
	/* test	EngSoundOn,1	;engine sound on? */
	TEST(engsoundon, 1);
	/* jnz	EngAdjustAdLb	;yes -> */
	if ((engsoundon & 1) != 0) {goto engadjustadlb;}
	// 0 ;* start engine sound
	/* mov	al,ADLB_FX_INT_ENG	;assume internal engine */
	al = 0x000;
	/* test	QuieterCockpit,1		;in cockpit? */
	TEST(quietercockpit, 1);
	/* jnz	@F			;yes -> */
	if ((quietercockpit & 1) != 0) {goto dummylabel19;}
	/* mov	al,ADLB_FX_EXT_ENG	;external engine */
	al = 0x001;
dummylabel19:
	// 4519 
	/* @@:	mov	ah,ADLB_FXON1 */
	ah = 0x004;
	/* int	080h */
	_INT(0x080);
	/* mov	EngSoundOn,1 */
	engsoundon = 1;
	// 0 ;* adjust engine revs
engadjustadlb:
	// 4521 
	/* EngAdjustAdLb:	mov	al,Tmp1 */
	al = tmp1;
	/* mov	ah,ADLB_REVS1 */
	ah = 0x00a;
	/* int	080h */
	_INT(0x080);
	/* mov	al,Tmp2 */
	al = tmp2;
	/* mov	ah,ADLB_VOL1 */
	ah = 0x00e;
	/* int	080h */
	_INT(0x080);
	/* jmp	IntoUpdateAdLb */
	goto intoupdateadlb;
	// 0 ;* turn engine sound off (if not already)
engoffadlb:
	// 4523 
	/* EngOffAdLb:	test	EngSoundOn,1	;engine sound already off? */
	TEST(engsoundon, 1);
	/* jz	IntoUpdateAdLb	;yes -> */
	if (!(engsoundon & 1)) {goto intoupdateadlb;}
zxcv:
	// 4525 
	/* mov	ah,ADLB_FXOFF1 */
	ah = 0x006;
	/* int	080h */
	_INT(0x080);
	/* cli */
	CLI;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Ch1Priority,al */
	ch1priority = al;
	/* mov	Ch1Flags,al */
	ch1flags = al;
	/* mov	Ch1Timer,ax */
	ch1timer = ax;
	/* sti */
	STI;
	/* mov	EngSoundOn,0 */
	engsoundon = 0;
	// 0 ;* >>>>> looping sounds timeout <<<<<
intoupdateadlb:
	// 4527 
	/* IntoUpdateAdLb:	cmp	Ch2Priority,0		;sound channel free? */
	CMP(ch2priority, 0);
	/* jne	@F			;no -> */
	if ((dw)(ch2priority) != (dw)(0)) {goto dummylabel20;}
	/* test	Ch2Flags,SFLG_LOOP	;looping sound? */
	TEST(ch2flags, 0x1);
	/* jz	@F			;no -> */
	if (!(ch2flags & 0x1)) {goto dummylabel20;}
	/* mov	ah,ADLB_FXOFF2 */
	ah = 0x007;
	/* int	080h */
	_INT(0x080);
	/* cli */
	CLI;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Ch2Priority,al */
	ch2priority = al;
	/* mov	Ch2Flags,al */
	ch2flags = al;
	/* mov	Ch2Timer,ax */
	ch2timer = ax;
	/* sti */
	STI;
	// 0 ;* >>>>> lock on growl sound <<<<<
dummylabel20:
	// 4529 
	/* @@:		cmp	Ch2Priority,ADLB_PR_GROWL	;override? */
	CMP(ch2priority, 5);
	/* ja	SkipGrowlAdLb			;no -> */
	if ((dw)(ch2priority) > (dw)(5)) {goto skipgrowladlb;}
	// 0 ;* check air radar lock
	/* cmp	AirTgtPtr,-1 */
	CMP(airtgtptr, -1);
	/* je	GrowlOffAdLb */
	if ((dw)(airtgtptr) == (dw)(-1)) {goto growloffadlb;}
	// 0 ;* Sidewinders must have IR lock
	/* cmp	ArmMode,ARM_SIDEWINDER */
	CMP(armmode, 18);
	/* jne	@F */
	if ((dw)(armmode) != (dw)(18)) {goto dummylabel21;}
	/* test	IRLockFlag,1 */
	TEST(irlockflag, 1);
	/* jz	GrowlOffAdLb */
	if (!(irlockflag & 1)) {goto growloffadlb;}
	// 0 ;* growl on, start growl if not if growling already
dummylabel21:
	// 4531 
	/* @@:		cmp	Ch2Priority,ADLB_PR_GROWL */
	CMP(ch2priority, 5);
	/* je	SkipGrowlAdLb */
	if ((dw)(ch2priority) == (dw)(5)) {goto skipgrowladlb;}
	/* cli */
	CLI;
	/* mov	Ch2Priority,ADLB_PR_GROWL */
	ch2priority = 5;
	/* mov	Ch2Flags,ADLB_FL_GROWL */
	ch2flags = 0;
	/* mov	Ch2Timer,ADLB_TM_GROWL */
	ch2timer = -1;
	/* sti */
	STI;
	/* mov	al,ADLB_FX_GROWL */
	al = 0x00b;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,ADLB_FXON2 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
	/* jmp	SkipGrowlAdLb */
	goto skipgrowladlb;
	// 0 ;* growl off, stop growl if growling
growloffadlb:
	// 4533 
	/* GrowlOffAdLb:	cmp	Ch2Priority,ADLB_PR_GROWL */
	CMP(ch2priority, 5);
	/* jne	SkipGrowlAdLb */
	if ((dw)(ch2priority) != (dw)(5)) {goto skipgrowladlb;}
	/* mov	ah,ADLB_FXOFF2 */
	ah = 0x007;
	/* int	080h */
	_INT(0x080);
	/* cli */
	CLI;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Ch2Priority,al */
	ch2priority = al;
	/* mov	Ch2Flags,al */
	ch2flags = al;
	/* mov	Ch2Timer,ax */
	ch2timer = ax;
	/* sti */
	STI;
	// 0 ;* >>>>> rumble sound <<<<<
skipgrowladlb:
	// 4535 
	/* SkipGrowlAdLb:	cmp	Ch2Priority,ADLB_PR_RUMBLE	;override? */
	CMP(ch2priority, 1);
	/* ja	SkipRumbleAdLb			;no -> */
	if ((dw)(ch2priority) > (dw)(1)) {goto skiprumbleadlb;}
	/* mov	al,ShakePriority */
	al = shakepriority;
	/* mov	ah,1			;assume rumble */
	ah = 1;
	/* cmp	al,SHAKE_BRAKE		;brake? */
	CMP(al, 240);
	/* je	@F			;yes -> */
	if ((db)(al) == (db)(240)) {goto dummylabel22;}
	/* cmp	al,SHAKE_BUFFET		;buffet? */
	CMP(al, 245);
	/* je	@F			;yes -> */
	if ((db)(al) == (db)(245)) {goto dummylabel22;}
	/* cmp	al,SHAKE_OFF_HARD	;off hard? */
	CMP(al, 250);
	/* je	@F			;yes -> */
	if ((db)(al) == (db)(250)) {goto dummylabel22;}
	/* cmp	al,SHAKE_WHEELS_UP	;wheels up? */
	CMP(al, 255);
	/* je	@F			;yes -> */
	if ((db)(al) == (db)(255)) {goto dummylabel22;}
	/* xor	ah,ah			;no rumble */
	XOR(ah, ah);
dummylabel22:
	// 4537 
	/* @@:		cmp	Ch2Priority,ADLB_PR_RUMBLE	;rumbling already? */
	CMP(ch2priority, 1);
	/* je	ContRumbleAdLb			;yes -> */
	if ((dw)(ch2priority) == (dw)(1)) {goto contrumbleadlb;}
	/* test	ah,ah		;start rumble? */
	TEST(ah, ah);
	/* jz	SkipRumbleAdLb	;no -> */
	if (!(ah & ah)) {goto skiprumbleadlb;}
	/* cli */
	CLI;
	/* mov	Ch2Priority,ADLB_PR_RUMBLE */
	ch2priority = 1;
	/* mov	Ch2Flags,ADLB_FL_RUMBLE */
	ch2flags = 0;
	/* mov	Ch2Timer,ADLB_TM_RUMBLE */
	ch2timer = -1;
	/* sti */
	STI;
	/* mov	al,ADLB_FX_RUMBLE */
	al = 0x009;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,ADLB_FXON2 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
	/* jmp	SkipRumbleAdLb */
	goto skiprumbleadlb;
contrumbleadlb:
	// 4539 
	/* ContRumbleAdLb:	test	ah,ah		;rumble still valid? */
	TEST(ah, ah);
	/* jnz	SkipRumbleAdLb	;yes -> */
	if ((ah & ah) != 0) {goto skiprumbleadlb;}
	/* mov	ah,ADLB_FXOFF2 */
	ah = 0x007;
	/* int	080h */
	_INT(0x080);
	/* cli */
	CLI;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Ch2Priority,al */
	ch2priority = al;
	/* mov	Ch2Flags,al */
	ch2flags = al;
	/* mov	Ch2Timer,ax */
	ch2timer = ax;
	/* sti */
	STI;
	// 0 ;stop rumble
skiprumbleadlb:
	// 4541 
	/* SkipRumbleAdLb:	ret */
	RETF(0);
	// 0 ;---------------------------
updaterlnd:
	// 4543 
	// 0 ;---------------------------
	// 0 ;* >>>>> looping sounds timeout <<<<<
	/* cmp	Ch2Priority,0		;sound channel free? */
	CMP(ch2priority, 0);
	/* jne	@F			;no -> */
	if ((dw)(ch2priority) != (dw)(0)) {goto dummylabel23;}
	/* test	Ch2Flags,SFLG_LOOP	;looping sound? */
	TEST(ch2flags, 0x1);
	/* jz	@F			;no -> */
	if (!(ch2flags & 0x1)) {goto dummylabel23;}
	/* mov	ah,RLND_FXOFF2 */
	ah = 0x007;
	/* int	080h */
	_INT(0x080);
	/* cli */
	CLI;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Ch2Priority,al */
	ch2priority = al;
	/* mov	Ch2Flags,al */
	ch2flags = al;
	/* mov	Ch2Timer,ax */
	ch2timer = ax;
	/* sti */
	STI;
	// 0 ;* >>>>> lock on growl sound <<<<<
dummylabel23:
	// 4545 
	/* @@:		cmp	Ch2Priority,RLND_PR_GROWL	;override? */
	CMP(ch2priority, 5);
	/* ja	SkipGrowlRlnd			;no -> */
	if ((dw)(ch2priority) > (dw)(5)) {goto skipgrowlrlnd;}
	// 0 ;* check air radar lock
	/* cmp	AirTgtPtr,-1 */
	CMP(airtgtptr, -1);
	/* je	GrowlOffRlnd */
	if ((dw)(airtgtptr) == (dw)(-1)) {goto growloffrlnd;}
	// 0 ;* Sidewinders must have IR lock
	/* cmp	ArmMode,ARM_SIDEWINDER */
	CMP(armmode, 18);
	/* jne	@F */
	if ((dw)(armmode) != (dw)(18)) {goto dummylabel24;}
	/* test	IRLockFlag,1 */
	TEST(irlockflag, 1);
	/* jz	GrowlOffRlnd */
	if (!(irlockflag & 1)) {goto growloffrlnd;}
	// 0 ;* growl on, start growl if not if growling already
dummylabel24:
	// 4547 
	/* @@:		cmp	Ch2Priority,RLND_PR_GROWL */
	CMP(ch2priority, 5);
	/* je	SkipGrowlRlnd */
	if ((dw)(ch2priority) == (dw)(5)) {goto skipgrowlrlnd;}
	/* cli */
	CLI;
	/* mov	Ch2Priority,RLND_PR_GROWL */
	ch2priority = 5;
	/* mov	Ch2Flags,RLND_FL_GROWL */
	ch2flags = 0;
	/* mov	Ch2Timer,RLND_TM_GROWL */
	ch2timer = -1;
	/* sti */
	STI;
	/* mov	al,RLND_FX_GROWL */
	al = 0x00b;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,RLND_FXON2 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
	/* jmp	SkipGrowlRlnd */
	goto skipgrowlrlnd;
	// 0 ;* growl off, stop growl if growling
growloffrlnd:
	// 4549 
	/* GrowlOffRlnd:	cmp	Ch2Priority,RLND_PR_GROWL */
	CMP(ch2priority, 5);
	/* jne	SkipGrowlRlnd */
	if ((dw)(ch2priority) != (dw)(5)) {goto skipgrowlrlnd;}
	/* mov	ah,RLND_FXOFF2 */
	ah = 0x007;
	/* int	080h */
	_INT(0x080);
	/* cli */
	CLI;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Ch2Priority,al */
	ch2priority = al;
	/* mov	Ch2Flags,al */
	ch2flags = al;
	/* mov	Ch2Timer,ax */
	ch2timer = ax;
	/* sti */
	STI;
	// 0 ;* >>>>> rumble sound <<<<<
skipgrowlrlnd:
	// 4551 
	/* SkipGrowlRlnd:	cmp	Ch2Priority,RLND_PR_RUMBLE	;override? */
	CMP(ch2priority, 1);
	/* ja	SkipRumbleRlnd			;no -> */
	if ((dw)(ch2priority) > (dw)(1)) {goto skiprumblerlnd;}
	/* mov	al,ShakePriority */
	al = shakepriority;
	/* mov	ah,1			;assume rumble */
	ah = 1;
	/* cmp	al,SHAKE_BRAKE		;brake? */
	CMP(al, 240);
	/* je	@F			;yes -> */
	if ((db)(al) == (db)(240)) {goto dummylabel25;}
	/* cmp	al,SHAKE_BUFFET		;buffet? */
	CMP(al, 245);
	/* je	@F			;yes -> */
	if ((db)(al) == (db)(245)) {goto dummylabel25;}
	/* cmp	al,SHAKE_OFF_HARD	;off hard? */
	CMP(al, 250);
	/* je	@F			;yes -> */
	if ((db)(al) == (db)(250)) {goto dummylabel25;}
	/* cmp	al,SHAKE_WHEELS_UP	;wheels up? */
	CMP(al, 255);
	/* je	@F			;yes -> */
	if ((db)(al) == (db)(255)) {goto dummylabel25;}
	/* xor	ah,ah			;no rumble */
	XOR(ah, ah);
dummylabel25:
	// 4553 
	/* @@:		cmp	Ch2Priority,RLND_PR_RUMBLE	;rumbling already? */
	CMP(ch2priority, 1);
	/* je	ContRumbleRlnd			;yes -> */
	if ((dw)(ch2priority) == (dw)(1)) {goto contrumblerlnd;}
	/* test	ah,ah		;start rumble? */
	TEST(ah, ah);
	/* jz	SkipRumbleRlnd	;no -> */
	if (!(ah & ah)) {goto skiprumblerlnd;}
	/* cli */
	CLI;
	/* mov	Ch2Priority,RLND_PR_RUMBLE */
	ch2priority = 1;
	/* mov	Ch2Flags,RLND_FL_RUMBLE */
	ch2flags = 0;
	/* mov	Ch2Timer,RLND_TM_RUMBLE */
	ch2timer = -1;
	/* sti */
	STI;
	/* mov	al,RLND_FX_RUMBLE */
	al = 0x009;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,RLND_FXON2 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
	/* jmp	SkipRumbleRlnd */
	goto skiprumblerlnd;
contrumblerlnd:
	// 4555 
	/* ContRumbleRlnd:	test	ah,ah		;rumble still valid? */
	TEST(ah, ah);
	/* jnz	SkipRumbleRlnd	;yes -> */
	if ((ah & ah) != 0) {goto skiprumblerlnd;}
	/* mov	ah,RLND_FXOFF2 */
	ah = 0x007;
	/* int	080h */
	_INT(0x080);
	/* cli */
	CLI;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Ch2Priority,al */
	ch2priority = al;
	/* mov	Ch2Flags,al */
	ch2flags = al;
	/* mov	Ch2Timer,ax */
	ch2timer = ax;
	/* sti */
	STI;
	// 0 ;stop rumble
	// 0 ;* >>>>> engine sound <<<<<
skiprumblerlnd:
	// 4557 
	/* SkipRumbleRlnd:	cmp	SoundOption,SOUND_OPT_ENG	;engine sound option? */
	CMP(soundoption, 2);
	/* jne	EngOffRlnd			;no -> */
	if ((dw)(soundoption) != (dw)(2)) {goto engoffrlnd;}
	/* mov	ax,Rpm1 */
	ax = rpm1;
	/* or	ax,Rpm2		;any rpm? */
	OR(ax, rpm2);
	/* jz	EngOffRlnd	;no (engines damaged, no fuel etc.) -> */
	if (ax == 0) {goto engoffrlnd;}
	// 0 ;* calc "revs" value
	// 0 ;* Rpm1 (0 .. 100 * 256 (idle = 63%))
	// 0 ;* Rpm2 (0 .. 100 * 256 (idle = 63%))
	// 0 ;* Reheat (0 .. 128)
	// 0 ;* revs = max(Rpm1, Rpm2)
	/* mov	ax,Rpm1 */
	ax = rpm1;
	/* mov	dx,Rpm2 */
	dx = rpm2;
	/* cmp	ax,dx */
	CMP(ax, dx);
	/* jae	@F */
	if ((dw)(ax) >= (dw)(dx)) {goto dummylabel26;}
	/* mov	ax,dx */
	ax = dx;
	// 0 ;* revs = max(revs - idle, 0) / 128 + 26 = 26 .. 100
dummylabel26:
	// 4559 
	/* @@: 		mov	bp,ax		;store revs */
	bp = ax;
	/* sub	ax,63*256 */
	SUB(ax, 63*256);
	/* cmc */
	CMC;
	/* rcr	ax,1 */
	RCR(ax, 1);
	/* cwd			;if passed cf = 1 then dx = 0 */
	CWD;
	/* rcl	ax,1 */
	RCL(ax, 1);
	/* and	ax,dx */
	AND(ax, dx);
	/* mov	cl,7 */
	cl = 7;
	/* shr	ax,cl		;0 .. 74 */
	SHR(ax, cl);
	/* add	al,26		;26 .. 100 */
	ADD(al, 26);
	/* mov	Tmp1,al */
	tmp1 = al;
	// 0 ;* vol = revs / 256 + 8 + Reheat / 16 = 8 .. 116
	/* mov	ax,bp		;restore revs */
	ax = bp;
	/* mov	al,ah		;0 .. 100 */
	al = ah;
	/* add	al,8		;8 .. 108 */
	ADD(al, 8);
	/* mov	dx,Reheat */
	dx = reheat;
	/* mov	cl,4 */
	cl = 4;
	/* shr	dx,cl		;0 .. 8 */
	SHR(dx, cl);
	/* add	al,dl		;8 .. 116 */
	ADD(al, dl);
	/* mov	Tmp2,al */
	tmp2 = al;
	// 0 ;* sort engine sound
	/* test	EngSoundOn,1	;engine sound on? */
	TEST(engsoundon, 1);
	/* jnz	EngAdjustRlnd	;yes -> */
	if ((engsoundon & 1) != 0) {goto engadjustrlnd;}
	// 0 ;* start engine sound
	/* mov	al,RLND_FX_INT_ENG	;assume internal engine */
	al = 0x000;
	/* test	QuieterCockpit,1		;in cockpit? */
	TEST(quietercockpit, 1);
	/* jnz	@F			;yes -> */
	if ((quietercockpit & 1) != 0) {goto dummylabel27;}
	/* mov	al,RLND_FX_EXT_ENG	;external engine */
	al = 0x001;
dummylabel27:
	// 4561 
	/* @@:	mov	ah,RLND_FXON1 */
	ah = 0x004;
	/* int	080h */
	_INT(0x080);
	/* mov	EngSoundOn,1 */
	engsoundon = 1;
	// 0 ;* adjust engine revs
engadjustrlnd:
	// 4563 
	/* EngAdjustRlnd:	mov	al,Tmp1 */
	al = tmp1;
	/* mov	ah,RLND_REVS1 */
	ah = 0x00a;
	/* int	080h */
	_INT(0x080);
	/* mov	al,Tmp2 */
	al = tmp2;
	/* mov	ah,RLND_VOL1 */
	ah = 0x00e;
	/* int	080h */
	_INT(0x080);
	/* jmp	EngOkRlnd */
	goto engokrlnd;
	// 0 ;* turn engine sound off (if not already)
engoffrlnd:
	// 4565 
	/* EngOffRlnd:	test	EngSoundOn,1	;engine sound already off? */
	TEST(engsoundon, 1);
	/* jz	EngOkRlnd	;yes -> */
	if (!(engsoundon & 1)) {goto engokrlnd;}
	/* mov	ah,RLND_FXOFF1 */
	ah = 0x006;
	/* int	080h */
	_INT(0x080);
	/* cli */
	CLI;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Ch1Priority,al */
	ch1priority = al;
	/* mov	Ch1Flags,al */
	ch1flags = al;
	/* mov	Ch1Timer,ax */
	ch1timer = ax;
	/* sti */
	STI;
	/* mov	EngSoundOn,0 */
	engsoundon = 0;
engokrlnd:
	// 4567 
	/* EngOkRlnd:	ret */
	RETF(0);
explosound1:
	// 3141 
	/* test	SoundOn,1	;sound enabled? */
	TEST(soundon, 1);
edummylabel7:
	// 4569 
	/* jz	@F		;no -> */
	if (ZF) {goto dummylabel28;}
	/* mov	bx,SoundCard */
	bx = soundcard;
__disp=*(dw*)(((db*)&_explosound1)+bx);
	/* jmp	_ExploSound1[bx] */
	J(return __dispatch_call_ext(__disp, _state));
dummylabel28:
	// 4571 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
explo1null:
	// 4573 
	// 0 ;---------------------------
	/* ret */
	RETF(0);
	// 0 ;---------------------------
explo1spkr:
	// 4575 
	// 0 ;---------------------------
	/* cmp	Ch1Priority,SPKR_PR_EXPLO1	;override? */
	CMP(ch1priority, 200);
	/* ja	Explo1ExitSpkr			;no -> */
	if ((dw)(ch1priority) > (dw)(200)) {goto explo1exitspkr;}
	// 0 ;* prevent retrigger in same frame
	/* jne	@F		;explosion sound not playing -> */
	if ((dw)(ch1priority) != (dw)(200)) {goto dummylabel29;}
	/* cmp	Ch1Timer,SPKR_TM_EXPLO1-5 */
	CMP(ch1timer, 50-5);
	/* ja	Explo1ExitSpkr */
	if ((dw)(ch1timer) > (dw)(50-5)) {goto explo1exitspkr;}
dummylabel29:
	// 4577 
	/* @@:		mov	EngSoundOn,0 */
	engsoundon = 0;
	/* cli */
	CLI;
	/* mov	Ch1Priority,SPKR_PR_EXPLO1 */
	ch1priority = 200;
	/* mov	Ch1Flags,SPKR_FL_EXPLO1 */
	ch1flags = 0;
	/* mov	Ch1Timer,SPKR_TM_EXPLO1 */
	ch1timer = 50;
	/* sti */
	STI;
	/* mov	al,SPKR_FX_EXPLO1 */
	al = 0x003;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,SPKR_FXON1 */
	ah = 0x004;
	/* int	080h */
	_INT(0x080);
explo1exitspkr:
	// 4579 
	/* Explo1ExitSpkr:	ret */
	RETF(0);
	// 0 ;---------------------------
explo1blst:
	// 4581 
	// 0 ;---------------------------
	/* cmp	Ch3Priority,BLST_PR_EXPLO1	;override? */
	CMP(ch3priority, 200);
	/* ja	Explo1ExitBlst			;no -> */
	if ((dw)(ch3priority) > (dw)(200)) {goto explo1exitblst;}
	// 0 ;* prevent retrigger in same frame
	/* jne	@F		;explosion sound not playing -> */
	if ((dw)(ch3priority) != (dw)(200)) {goto dummylabel30;}
	/* cmp	Ch3Timer,BLST_TM_EXPLO1-5 */
	CMP(ch3timer, 65-5);
	/* ja	Explo1ExitBlst */
	if ((dw)(ch3timer) > (dw)(65-5)) {goto explo1exitblst;}
dummylabel30:
	// 4583 
	/* @@:		mov	EngSoundOn,0 */
	engsoundon = 0;
	/* cli */
	CLI;
	/* mov	Ch3Priority,BLST_PR_EXPLO1 */
	ch3priority = 200;
	/* mov	Ch3Flags,BLST_FL_EXPLO1 */
	ch3flags = 0;
	/* mov	Ch3Timer,BLST_TM_EXPLO1 */
	ch3timer = 65;
	/* sti */
	STI;
	/* mov	al,BLST_FX_EXPLO1 */
	al = 0x001;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,BLST_FXON1 */
	ah = 0x000;
	/* int	081h */
	_INT(0x081);
explo1exitblst:
	// 4585 
	/* Explo1ExitBlst:	ret */
	RETF(0);
	// 0 ;---------------------------
explo1adlb:
	// 4587 
	// 0 ;---------------------------
	/* cmp	Ch2Priority,ADLB_PR_EXPLO1	;override? */
	CMP(ch2priority, 200);
	/* ja	Explo1ExitAdLb			;no -> */
	if ((dw)(ch2priority) > (dw)(200)) {goto explo1exitadlb;}
	// 0 ;* prevent retrigger in same frame
	/* jne	@F		;explosion sound not playing -> */
	if ((dw)(ch2priority) != (dw)(200)) {goto dummylabel31;}
	/* cmp	Ch2Timer,ADLB_TM_EXPLO1-5 */
	CMP(ch2timer, 65-5);
	/* ja	Explo1ExitAdLb */
	if ((dw)(ch2timer) > (dw)(65-5)) {goto explo1exitadlb;}
dummylabel31:
	// 4589 
	/* @@:	cli */
	CLI;
	/* mov	Ch2Priority,ADLB_PR_EXPLO1 */
	ch2priority = 200;
	/* mov	Ch2Flags,ADLB_FL_EXPLO1 */
	ch2flags = 0;
	/* mov	Ch2Timer,ADLB_TM_EXPLO1 */
	ch2timer = 65;
	/* sti */
	STI;
	/* mov	al,ADLB_FX_EXPLO1 */
	al = 0x003;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,ADLB_FXON2 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
explo1exitadlb:
	// 4591 
	/* Explo1ExitAdLb:	ret */
	RETF(0);
	// 0 ;---------------------------
explo1rlnd:
	// 4593 
	// 0 ;---------------------------
	/* cmp	Ch2Priority,RLND_PR_EXPLO1	;override? */
	CMP(ch2priority, 200);
	/* ja	Explo1ExitRlnd			;no -> */
	if ((dw)(ch2priority) > (dw)(200)) {goto explo1exitrlnd;}
	// 0 ;* prevent retrigger in same frame
	/* jne	@F		;explosion sound not playing -> */
	if ((dw)(ch2priority) != (dw)(200)) {goto dummylabel32;}
	/* cmp	Ch2Timer,RLND_TM_EXPLO1-5 */
	CMP(ch2timer, 65-5);
	/* ja	Explo1ExitRlnd */
	if ((dw)(ch2timer) > (dw)(65-5)) {goto explo1exitrlnd;}
dummylabel32:
	// 4595 
	/* @@:	cli */
	CLI;
	/* mov	Ch2Priority,RLND_PR_EXPLO1 */
	ch2priority = 200;
	/* mov	Ch2Flags,RLND_FL_EXPLO1 */
	ch2flags = 0;
	/* mov	Ch2Timer,RLND_TM_EXPLO1 */
	ch2timer = 65;
	/* sti */
	STI;
	/* mov	al,RLND_FX_EXPLO1 */
	al = 0x003;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,RLND_FXON2 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
explo1exitrlnd:
	// 4597 
	/* Explo1ExitRlnd:	ret */
	RETF(0);
explosound2:
	// 3249 
	/* test	SoundOn,1	;sound enabled? */
	TEST(soundon, 1);
edummylabel8:
	// 4599 
	/* jz	@F		;no -> */
	if (ZF) {goto dummylabel33;}
	/* mov	bx,SoundCard */
	bx = soundcard;
__disp=*(dw*)(((db*)&_explosound2)+bx);
	/* jmp	_ExploSound2[bx] */
	J(return __dispatch_call_ext(__disp, _state));
dummylabel33:
	// 4601 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
explo2null:
	// 4603 
	// 0 ;---------------------------
	/* ret */
	RETF(0);
	// 0 ;---------------------------
explo2spkr:
	// 4605 
	// 0 ;---------------------------
	/* cmp	Ch1Priority,SPKR_PR_EXPLO2	;override? */
	CMP(ch1priority, 190);
	/* ja	Explo2ExitSpkr			;no -> */
	if ((dw)(ch1priority) > (dw)(190)) {goto explo2exitspkr;}
	// 0 ;* prevent retrigger in same frame
	/* jne	@F		;explosion sound not playing -> */
	if ((dw)(ch1priority) != (dw)(190)) {goto dummylabel34;}
	/* cmp	Ch1Timer,SPKR_TM_EXPLO2-5 */
	CMP(ch1timer, 50-5);
	/* ja	Explo2ExitSpkr */
	if ((dw)(ch1timer) > (dw)(50-5)) {goto explo2exitspkr;}
dummylabel34:
	// 4607 
	/* @@:		mov	EngSoundOn,0 */
	engsoundon = 0;
	/* cli */
	CLI;
	/* mov	Ch1Priority,SPKR_PR_EXPLO2 */
	ch1priority = 190;
	/* mov	Ch1Flags,SPKR_FL_EXPLO2 */
	ch1flags = 0;
	/* mov	Ch1Timer,SPKR_TM_EXPLO2 */
	ch1timer = 50;
	/* sti */
	STI;
	/* mov	al,SPKR_FX_EXPLO2 */
	al = 0x004;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,SPKR_FXON1 */
	ah = 0x004;
	/* int	080h */
	_INT(0x080);
explo2exitspkr:
	// 4609 
	/* Explo2ExitSpkr:	ret */
	RETF(0);
	// 0 ;---------------------------
explo2blst:
	// 4611 
	// 0 ;---------------------------
	/* cmp	Ch3Priority,BLST_PR_EXPLO2	;override? */
	CMP(ch3priority, 190);
	/* ja	Explo2ExitBlst			;no -> */
	if ((dw)(ch3priority) > (dw)(190)) {goto explo2exitblst;}
	// 0 ;* prevent retrigger in same frame
	/* jne	@F		;explosion sound not playing -> */
	if ((dw)(ch3priority) != (dw)(190)) {goto dummylabel35;}
	/* cmp	Ch3Timer,BLST_TM_EXPLO2-5 */
	CMP(ch3timer, 65-5);
	/* ja	Explo2ExitBlst */
	if ((dw)(ch3timer) > (dw)(65-5)) {goto explo2exitblst;}
dummylabel35:
	// 4613 
	/* @@:		mov	EngSoundOn,0 */
	engsoundon = 0;
	/* cli */
	CLI;
	/* mov	Ch3Priority,BLST_PR_EXPLO2 */
	ch3priority = 190;
	/* mov	Ch3Flags,BLST_FL_EXPLO2 */
	ch3flags = 0;
	/* mov	Ch3Timer,BLST_TM_EXPLO2 */
	ch3timer = 65;
	/* sti */
	STI;
	/* mov	al,BLST_FX_EXPLO2 */
	al = 0x002;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,BLST_FXON1 */
	ah = 0x000;
	/* int	081h */
	_INT(0x081);
explo2exitblst:
	// 4615 
	/* Explo2ExitBlst:	ret */
	RETF(0);
	// 0 ;---------------------------
explo2adlb:
	// 4617 
	// 0 ;---------------------------
	/* cmp	Ch2Priority,ADLB_PR_EXPLO2	;override? */
	CMP(ch2priority, 190);
	/* ja	Explo2ExitAdLb			;no -> */
	if ((dw)(ch2priority) > (dw)(190)) {goto explo2exitadlb;}
	// 0 ;* prevent retrigger in same frame
	/* jne	@F		;explosion sound not playing -> */
	if ((dw)(ch2priority) != (dw)(190)) {goto dummylabel36;}
	/* cmp	Ch2Timer,ADLB_TM_EXPLO2-5 */
	CMP(ch2timer, 65-5);
	/* ja	Explo2ExitAdLb */
	if ((dw)(ch2timer) > (dw)(65-5)) {goto explo2exitadlb;}
dummylabel36:
	// 4619 
	/* @@:	cli */
	CLI;
	/* mov	Ch2Priority,ADLB_PR_EXPLO2 */
	ch2priority = 190;
	/* mov	Ch2Flags,ADLB_FL_EXPLO2 */
	ch2flags = 0;
	/* mov	Ch2Timer,ADLB_TM_EXPLO2 */
	ch2timer = 65;
	/* sti */
	STI;
	/* mov	al,ADLB_FX_EXPLO2 */
	al = 0x004;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,ADLB_FXON2 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
explo2exitadlb:
	// 4621 
	/* Explo2ExitAdLb:	ret */
	RETF(0);
	// 0 ;---------------------------
explo2rlnd:
	// 4623 
	// 0 ;---------------------------
	/* cmp	Ch2Priority,RLND_PR_EXPLO2	;override? */
	CMP(ch2priority, 190);
	/* ja	Explo2ExitRlnd			;no -> */
	if ((dw)(ch2priority) > (dw)(190)) {goto explo2exitrlnd;}
	// 0 ;* prevent retrigger in same frame
	/* jne	@F		;explosion sound not playing -> */
	if ((dw)(ch2priority) != (dw)(190)) {goto dummylabel37;}
	/* cmp	Ch2Timer,RLND_TM_EXPLO2-5 */
	CMP(ch2timer, 65-5);
	/* ja	Explo2ExitRlnd */
	if ((dw)(ch2timer) > (dw)(65-5)) {goto explo2exitrlnd;}
dummylabel37:
	// 4625 
	/* @@:	cli */
	CLI;
	/* mov	Ch2Priority,RLND_PR_EXPLO2 */
	ch2priority = 190;
	/* mov	Ch2Flags,RLND_FL_EXPLO2 */
	ch2flags = 0;
	/* mov	Ch2Timer,RLND_TM_EXPLO2 */
	ch2timer = 65;
	/* sti */
	STI;
	/* mov	al,RLND_FX_EXPLO2 */
	al = 0x004;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,RLND_FXON2 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
explo2exitrlnd:
	// 4627 
	/* Explo2ExitRlnd:	ret */
	RETF(0);
explosound3:
	// 3357 
	/* test	SoundOn,1	;sound enabled? */
	TEST(soundon, 1);
edummylabel9:
	// 4629 
	/* jz	@F		;no -> */
	if (ZF) {goto dummylabel38;}
	/* mov	bx,SoundCard */
	bx = soundcard;
__disp=*(dw*)(((db*)&_explosound3)+bx);
	/* jmp	_ExploSound3[bx] */
	J(return __dispatch_call_ext(__disp, _state));
dummylabel38:
	// 4631 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
explo3null:
	// 4633 
	// 0 ;---------------------------
	/* ret */
	RETF(0);
	// 0 ;---------------------------
explo3spkr:
	// 4635 
	// 0 ;---------------------------
	/* cmp	Ch1Priority,SPKR_PR_EXPLO3	;override? */
	CMP(ch1priority, 180);
	/* ja	Explo3ExitSpkr			;no -> */
	if ((dw)(ch1priority) > (dw)(180)) {goto explo3exitspkr;}
	// 0 ;* prevent retrigger in same frame
	/* jne	@F		;explosion sound not playing -> */
	if ((dw)(ch1priority) != (dw)(180)) {goto dummylabel39;}
	/* cmp	Ch1Timer,SPKR_TM_EXPLO3-5 */
	CMP(ch1timer, 25-5);
	/* ja	Explo3ExitSpkr */
	if ((dw)(ch1timer) > (dw)(25-5)) {goto explo3exitspkr;}
dummylabel39:
	// 4637 
	/* @@:		mov	EngSoundOn,0 */
	engsoundon = 0;
	/* cli */
	CLI;
	/* mov	Ch1Priority,SPKR_PR_EXPLO3 */
	ch1priority = 180;
	/* mov	Ch1Flags,SPKR_FL_EXPLO3 */
	ch1flags = 0;
	/* mov	Ch1Timer,SPKR_TM_EXPLO3 */
	ch1timer = 25;
	/* sti */
	STI;
	/* mov	al,SPKR_FX_EXPLO3 */
	al = 0x002;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,SPKR_FXON1 */
	ah = 0x004;
	/* int	080h */
	_INT(0x080);
explo3exitspkr:
	// 4639 
	/* Explo3ExitSpkr:	ret */
	RETF(0);
	// 0 ;---------------------------
explo3blst:
	// 4641 
	// 0 ;---------------------------
	/* cmp	Ch3Priority,BLST_PR_EXPLO3	;override? */
	CMP(ch3priority, 180);
	/* ja	Explo3ExitBlst			;no -> */
	if ((dw)(ch3priority) > (dw)(180)) {goto explo3exitblst;}
	// 0 ;* prevent retrigger in same frame
	/* jne	@F		;explosion sound not playing -> */
	if ((dw)(ch3priority) != (dw)(180)) {goto dummylabel40;}
	/* cmp	Ch3Timer,BLST_TM_EXPLO3-5 */
	CMP(ch3timer, 35-5);
	/* ja	Explo3ExitBlst */
	if ((dw)(ch3timer) > (dw)(35-5)) {goto explo3exitblst;}
dummylabel40:
	// 4643 
	/* @@:		mov	EngSoundOn,0 */
	engsoundon = 0;
	/* cli */
	CLI;
	/* mov	Ch3Priority,BLST_PR_EXPLO3 */
	ch3priority = 180;
	/* mov	Ch3Flags,BLST_FL_EXPLO3 */
	ch3flags = 0;
	/* mov	Ch3Timer,BLST_TM_EXPLO3 */
	ch3timer = 35;
	/* sti */
	STI;
	/* mov	al,BLST_FX_EXPLO3 */
	al = 0x004;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,BLST_FXON1 */
	ah = 0x000;
	/* int	081h */
	_INT(0x081);
explo3exitblst:
	// 4645 
	/* Explo3ExitBlst:	ret */
	RETF(0);
	// 0 ;---------------------------
explo3adlb:
	// 4647 
	// 0 ;---------------------------
	/* cmp	Ch2Priority,ADLB_PR_EXPLO3	;override? */
	CMP(ch2priority, 180);
	/* ja	Explo3ExitAdLb			;no -> */
	if ((dw)(ch2priority) > (dw)(180)) {goto explo3exitadlb;}
	// 0 ;* prevent retrigger in same frame
	/* jne	@F		;explosion sound not playing -> */
	if ((dw)(ch2priority) != (dw)(180)) {goto dummylabel41;}
	/* cmp	Ch2Timer,ADLB_TM_EXPLO3-5 */
	CMP(ch2timer, 35-5);
	/* ja	Explo3ExitAdLb */
	if ((dw)(ch2timer) > (dw)(35-5)) {goto explo3exitadlb;}
dummylabel41:
	// 4649 
	/* @@:	cli */
	CLI;
	/* mov	Ch2Priority,ADLB_PR_EXPLO3 */
	ch2priority = 180;
	/* mov	Ch2Flags,ADLB_FL_EXPLO3 */
	ch2flags = 0;
	/* mov	Ch2Timer,ADLB_TM_EXPLO3 */
	ch2timer = 35;
	/* sti */
	STI;
	/* mov	al,ADLB_FX_EXPLO3 */
	al = 0x002;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,ADLB_FXON2 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
explo3exitadlb:
	// 4651 
	/* Explo3ExitAdLb:	ret */
	RETF(0);
	// 0 ;---------------------------
explo3rlnd:
	// 4653 
	// 0 ;---------------------------
	/* cmp	Ch2Priority,RLND_PR_EXPLO3	;override? */
	CMP(ch2priority, 180);
	/* ja	Explo3ExitRlnd			;no -> */
	if ((dw)(ch2priority) > (dw)(180)) {goto explo3exitrlnd;}
	// 0 ;* prevent retrigger in same frame
	/* jne	@F		;explosion sound not playing -> */
	if ((dw)(ch2priority) != (dw)(180)) {goto dummylabel42;}
	/* cmp	Ch2Timer,RLND_TM_EXPLO3-5 */
	CMP(ch2timer, 35-5);
	/* ja	Explo3ExitRlnd */
	if ((dw)(ch2timer) > (dw)(35-5)) {goto explo3exitrlnd;}
dummylabel42:
	// 4655 
	/* @@:	cli */
	CLI;
	/* mov	Ch2Priority,RLND_PR_EXPLO3 */
	ch2priority = 180;
	/* mov	Ch2Flags,RLND_FL_EXPLO3 */
	ch2flags = 0;
	/* mov	Ch2Timer,RLND_TM_EXPLO3 */
	ch2timer = 35;
	/* sti */
	STI;
	/* mov	al,RLND_FX_EXPLO3 */
	al = 0x002;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,RLND_FXON2 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
explo3exitrlnd:
	// 4657 
	/* Explo3ExitRlnd:	ret */
	RETF(0);
screechsound:
	// 3465 
	/* test	SoundOn,1	;sound enabled? */
	TEST(soundon, 1);
edummylabel10:
	// 4659 
	/* jz	@F		;no -> */
	if (ZF) {goto dummylabel43;}
	/* mov	bx,SoundCard */
	bx = soundcard;
__disp=*(dw*)(((db*)&_screechsound)+bx);
	/* jmp	_ScreechSound[bx] */
	J(return __dispatch_call_ext(__disp, _state));
dummylabel43:
	// 4661 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
screechnull:
	// 4663 
	// 0 ;---------------------------
	/* ret */
	RETF(0);
	// 0 ;---------------------------
screechspkr:
	// 4665 
	// 0 ;---------------------------
	/* cmp	Ch1Priority,SPKR_PR_SCREECH	;override? */
	CMP(ch1priority, 150);
	/* ja	@F				;no -> */
	if ((dw)(ch1priority) > (dw)(150)) {goto dummylabel44;}
	/* mov	EngSoundOn,0 */
	engsoundon = 0;
	/* cli */
	CLI;
	/* mov	Ch1Priority,SPKR_PR_SCREECH */
	ch1priority = 150;
	/* mov	Ch1Flags,SPKR_FL_SCREECH */
	ch1flags = 0;
	/* mov	Ch1Timer,SPKR_TM_SCREECH */
	ch1timer = 8;
	/* sti */
	STI;
	/* mov	al,SPKR_FX_SCREECH */
	al = 0x00a;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,SPKR_FXON1 */
	ah = 0x004;
	/* int	080h */
	_INT(0x080);
dummylabel44:
	// 4667 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
screechblst:
	// 4669 
	// 0 ;---------------------------
	/* cmp	Ch3Priority,BLST_PR_SCREECH	;override? */
	CMP(ch3priority, 150);
	/* ja	@F				;no -> */
	if ((dw)(ch3priority) > (dw)(150)) {goto dummylabel45;}
	/* mov	EngSoundOn,0 */
	engsoundon = 0;
	/* cli */
	CLI;
	/* mov	Ch3Priority,BLST_PR_SCREECH */
	ch3priority = 150;
	/* mov	Ch3Flags,BLST_FL_SCREECH */
	ch3flags = 0;
	/* mov	Ch3Timer,BLST_TM_SCREECH */
	ch3timer = 8;
	/* sti */
	STI;
	/* mov	al,BLST_FX_SCREECH */
	al = 0x008;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,BLST_FXON1 */
	ah = 0x000;
	/* int	081h */
	_INT(0x081);
dummylabel45:
	// 4671 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
screechadlb:
	// 4673 
	// 0 ;---------------------------
	/* cmp	Ch2Priority,ADLB_PR_SCREECH	;override? */
	CMP(ch2priority, 150);
	/* ja	@F				;no -> */
	if ((dw)(ch2priority) > (dw)(150)) {goto dummylabel46;}
	/* cli */
	CLI;
	/* mov	Ch2Priority,ADLB_PR_SCREECH */
	ch2priority = 150;
	/* mov	Ch2Flags,ADLB_FL_SCREECH */
	ch2flags = 0;
	/* mov	Ch2Timer,ADLB_TM_SCREECH */
	ch2timer = 8;
	/* sti */
	STI;
	/* mov	al,ADLB_FX_SCREECH */
	al = 0x00a;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,ADLB_FXON2 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
dummylabel46:
	// 4675 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
screechrlnd:
	// 4677 
	// 0 ;---------------------------
	/* cmp	Ch2Priority,RLND_PR_SCREECH	;override? */
	CMP(ch2priority, 150);
	/* ja	@F				;no -> */
	if ((dw)(ch2priority) > (dw)(150)) {goto dummylabel47;}
	/* cli */
	CLI;
	/* mov	Ch2Priority,RLND_PR_SCREECH */
	ch2priority = 150;
	/* mov	Ch2Flags,RLND_FL_SCREECH */
	ch2flags = 0;
	/* mov	Ch2Timer,RLND_TM_SCREECH */
	ch2timer = 8;
	/* sti */
	STI;
	/* mov	al,RLND_FX_SCREECH */
	al = 0x00a;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,RLND_FXON2 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
dummylabel47:
	// 4679 
	/* @@:		ret */
	RETF(0);
morsedotsound:
	// 3555 
	/* test	SoundOn,1	;sound enabled? */
	TEST(soundon, 1);
edummylabel11:
	// 4681 
	/* jz	@F		;no -> */
	if (ZF) {goto dummylabel48;}
	/* mov	bx,SoundCard */
	bx = soundcard;
__disp=*(dw*)(((db*)&_morsedotsound)+bx);
	/* jmp	_MorseDotSound[bx] */
	J(return __dispatch_call_ext(__disp, _state));
dummylabel48:
	// 4683 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
morsedotnull:
	// 4685 
	// 0 ;---------------------------
	/* ret */
	RETF(0);
	// 0 ;---------------------------
morsedotspkr:
	// 4687 
	// 0 ;---------------------------
	/* cmp	Ch1Priority,SPKR_PR_MDOT	;override? */
	CMP(ch1priority, 100);
	/* ja	@F				;no -> */
	if ((dw)(ch1priority) > (dw)(100)) {goto dummylabel49;}
	/* mov	EngSoundOn,0 */
	engsoundon = 0;
	/* cli */
	CLI;
	/* mov	Ch1Priority,SPKR_PR_MDOT */
	ch1priority = 100;
	/* mov	Ch1Flags,SPKR_FL_MDOT */
	ch1flags = 0;
	/* mov	Ch1Timer,SPKR_TM_MDOT */
	ch1timer = 5;
	/* sti */
	STI;
	/* mov	al,SPKR_FX_MDOT */
	al = 0x013;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,SPKR_FXON1 */
	ah = 0x004;
	/* int	080h */
	_INT(0x080);
dummylabel49:
	// 4689 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
morsedotblst:
	// 4691 
morsedotadlb:
	// 4693 
	// 0 ;---------------------------
	/* cmp	Ch2Priority,ADLB_PR_MDOT	;override? */
	CMP(ch2priority, 100);
	/* ja	@F				;no -> */
	if ((dw)(ch2priority) > (dw)(100)) {goto dummylabel50;}
	/* cli */
	CLI;
	/* mov	Ch2Priority,ADLB_PR_MDOT */
	ch2priority = 100;
	/* mov	Ch2Flags,ADLB_FL_MDOT */
	ch2flags = 0;
	/* mov	Ch2Timer,ADLB_TM_MDOT */
	ch2timer = 5;
	/* sti */
	STI;
	/* mov	al,ADLB_FX_MDOT */
	al = 0x013;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,ADLB_FXON2 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
	// 0 ;kbs
dummylabel50:
	// 4695 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
morsedotrlnd:
	// 4697 
	// 0 ;---------------------------
	/* cmp	Ch2Priority,RLND_PR_MDOT	;override? */
	CMP(ch2priority, 100);
	/* ja	@F				;no -> */
	if ((dw)(ch2priority) > (dw)(100)) {goto dummylabel51;}
	/* cli */
	CLI;
	/* mov	Ch2Priority,RLND_PR_MDOT */
	ch2priority = 100;
	/* mov	Ch2Flags,RLND_FL_MDOT */
	ch2flags = 0;
	/* mov	Ch2Timer,RLND_TM_MDOT */
	ch2timer = 5;
	/* sti */
	STI;
	/* mov	al,RLND_FX_MDOT */
	al = 0x013;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,RLND_FXON2 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
dummylabel51:
	// 4699 
	/* @@:		ret */
	RETF(0);
morsedashsound:
	// 3629 
	/* test	SoundOn,1	;sound enabled? */
	TEST(soundon, 1);
edummylabel12:
	// 4701 
	/* jz	@F		;no -> */
	if (ZF) {goto dummylabel52;}
	/* mov	bx,SoundCard */
	bx = soundcard;
__disp=*(dw*)(((db*)&_morsedashsound)+bx);
	/* jmp	_MorseDashSound[bx] */
	J(return __dispatch_call_ext(__disp, _state));
dummylabel52:
	// 4703 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
morsedashnull:
	// 4705 
	// 0 ;---------------------------
	/* ret */
	RETF(0);
	// 0 ;---------------------------
morsedashspkr:
	// 4707 
	// 0 ;---------------------------
	/* cmp	Ch1Priority,SPKR_PR_MDASH	;override? */
	CMP(ch1priority, 99);
	/* ja	@F				;no -> */
	if ((dw)(ch1priority) > (dw)(99)) {goto dummylabel53;}
	/* mov	EngSoundOn,0 */
	engsoundon = 0;
	/* cli */
	CLI;
	/* mov	Ch1Priority,SPKR_PR_MDASH */
	ch1priority = 99;
	/* mov	Ch1Flags,SPKR_FL_MDASH */
	ch1flags = 0;
	/* mov	Ch1Timer,SPKR_TM_MDASH */
	ch1timer = 20;
	/* sti */
	STI;
	/* mov	al,SPKR_FX_MDASH */
	al = 0x012;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,SPKR_FXON1 */
	ah = 0x004;
	/* int	080h */
	_INT(0x080);
dummylabel53:
	// 4709 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
morsedashblst:
	// 4711 
morsedashadlb:
	// 4713 
	// 0 ;---------------------------
	/* cmp	Ch2Priority,ADLB_PR_MDASH	;override? */
	CMP(ch2priority, 99);
	/* ja	@F				;no -> */
	if ((dw)(ch2priority) > (dw)(99)) {goto dummylabel54;}
	/* cli */
	CLI;
	/* mov	Ch2Priority,ADLB_PR_MDASH */
	ch2priority = 99;
	/* mov	Ch2Flags,ADLB_FL_MDASH */
	ch2flags = 0;
	/* mov	Ch2Timer,ADLB_TM_MDASH */
	ch2timer = -1;
	/* sti */
	STI;
	/* mov	al,ADLB_FX_MDASH */
	al = 0x012;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,ADLB_FXON2 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
dummylabel54:
	// 4715 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
morsedashrlnd:
	// 4717 
	// 0 ;---------------------------
	/* cmp	Ch2Priority,RLND_PR_MDASH	;override? */
	CMP(ch2priority, 99);
	/* ja	@F				;no -> */
	if ((dw)(ch2priority) > (dw)(99)) {goto dummylabel55;}
	/* cli */
	CLI;
	/* mov	Ch2Priority,RLND_PR_MDASH */
	ch2priority = 99;
	/* mov	Ch2Flags,RLND_FL_MDASH */
	ch2flags = 0;
	/* mov	Ch2Timer,RLND_TM_MDASH */
	ch2timer = 20;
	/* sti */
	STI;
	/* mov	al,RLND_FX_MDASH */
	al = 0x012;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,RLND_FXON2 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
dummylabel55:
	// 4719 
	/* @@:		ret */
	RETF(0);
gearsound:
	// 3702 
	/* test	SoundOn,1	;sound enabled? */
	TEST(soundon, 1);
edummylabel13:
	// 4721 
	/* jz	@F		;no -> */
	if (ZF) {goto dummylabel56;}
	/* mov	bx,SoundCard */
	bx = soundcard;
__disp=*(dw*)(((db*)&_gearsound)+bx);
	/* jmp	_GearSound[bx] */
	J(return __dispatch_call_ext(__disp, _state));
dummylabel56:
	// 4723 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
gearnull:
	// 4725 
	// 0 ;---------------------------
	/* ret */
	RETF(0);
	// 0 ;---------------------------
gearspkr:
	// 4727 
	// 0 ;---------------------------
	/* cmp	Ch1Priority,SPKR_PR_GEAR	;override? */
	CMP(ch1priority, 80);
	/* ja	@F				;no -> */
	if ((dw)(ch1priority) > (dw)(80)) {goto dummylabel57;}
	/* mov	EngSoundOn,0 */
	engsoundon = 0;
	/* cli */
	CLI;
	/* mov	Ch1Priority,SPKR_PR_GEAR */
	ch1priority = 80;
	/* mov	Ch1Flags,SPKR_FL_GEAR */
	ch1flags = 0;
	/* mov	Ch1Timer,SPKR_TM_GEAR */
	ch1timer = 40;
	/* sti */
	STI;
	/* mov	al,SPKR_FX_GEAR */
	al = 0x010;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,SPKR_FXON1 */
	ah = 0x004;
	/* int	080h */
	_INT(0x080);
dummylabel57:
	// 4729 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
gearblst:
	// 4731 
gearadlb:
	// 4733 
	// 0 ;---------------------------
	/* cmp	Ch2Priority,ADLB_PR_GEAR	;override? */
	CMP(ch2priority, 80);
	/* ja	@F				;no -> */
	if ((dw)(ch2priority) > (dw)(80)) {goto dummylabel58;}
	/* cli */
	CLI;
	/* mov	Ch2Priority,ADLB_PR_GEAR */
	ch2priority = 80;
	/* mov	Ch2Flags,ADLB_FL_GEAR */
	ch2flags = 0;
	/* mov	Ch2Timer,ADLB_TM_GEAR */
	ch2timer = 75;
	/* sti */
	STI;
	/* mov	al,ADLB_FX_GEAR */
	al = 0x010;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,ADLB_FXON2 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
dummylabel58:
	// 4735 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
gearrlnd:
	// 4737 
	// 0 ;---------------------------
	/* cmp	Ch2Priority,RLND_PR_GEAR	;override? */
	CMP(ch2priority, 80);
	/* ja	@F				;no -> */
	if ((dw)(ch2priority) > (dw)(80)) {goto dummylabel59;}
	/* cli */
	CLI;
	/* mov	Ch2Priority,RLND_PR_GEAR */
	ch2priority = 80;
	/* mov	Ch2Flags,RLND_FL_GEAR */
	ch2flags = 0;
	/* mov	Ch2Timer,RLND_TM_GEAR */
	ch2timer = 75;
	/* sti */
	STI;
	/* mov	al,RLND_FX_GEAR */
	al = 0x010;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,RLND_FXON2 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
dummylabel59:
	// 4739 
	/* @@:		ret */
	RETF(0);
attentionsound:
	// 3775 
	/* test	SoundOn,1	;sound enabled? */
	TEST(soundon, 1);
edummylabel14:
	// 4741 
	/* jz	@F		;no -> */
	if (ZF) {goto dummylabel60;}
	/* mov	bx,SoundCard */
	bx = soundcard;
__disp=*(dw*)(((db*)&_attentionsound)+bx);
	/* jmp	_AttentionSound[bx] */
	J(return __dispatch_call_ext(__disp, _state));
dummylabel60:
	// 4743 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
attentionnull:
	// 4745 
	// 0 ;---------------------------
	/* ret */
	RETF(0);
	// 0 ;---------------------------
attentionspkr:
	// 4747 
	// 0 ;---------------------------
	/* cmp	Ch1Priority,SPKR_PR_ATTN	;override? */
	CMP(ch1priority, 250);
	/* ja	@F				;no -> */
	if ((dw)(ch1priority) > (dw)(250)) {goto dummylabel61;}
	/* mov	EngSoundOn,0 */
	engsoundon = 0;
	/* cli */
	CLI;
	/* mov	Ch1Priority,SPKR_PR_ATTN */
	ch1priority = 250;
	/* mov	Ch1Flags,SPKR_FL_ATTN */
	ch1flags = 0x1;
	/* mov	Ch1Timer,SPKR_TM_ATTN */
	ch1timer = 150;
	/* sti */
	STI;
	/* mov	al,SPKR_FX_ATTN */
	al = 0x00d;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,SPKR_FXON1 */
	ah = 0x004;
	/* int	080h */
	_INT(0x080);
dummylabel61:
	// 4749 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
attentionblst:
	// 4751 
attentionadlb:
	// 4753 
	// 0 ;---------------------------
	/* test CockpitViews,0 */
	TEST(cockpitviews, 0);
	/* jnz	@F */
	if ((cockpitviews & 0) != 0) {goto dummylabel62;}
	/* cmp	Ch2Priority,ADLB_PR_ATTN	;override? */
	CMP(ch2priority, 250);
	/* ja	@F				;no -> */
	if ((dw)(ch2priority) > (dw)(250)) {goto dummylabel62;}
	/* cli */
	CLI;
	/* mov	Ch2Priority,ADLB_PR_ATTN */
	ch2priority = 250;
	/* mov	Ch2Flags,ADLB_FL_ATTN */
	ch2flags = 0x1;
	/* mov	Ch2Timer,ADLB_TM_ATTN */
	ch2timer = 150;
	/* sti */
	STI;
	/* mov	al,ADLB_FX_ATTN */
	al = 0x00d;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,ADLB_FXON2 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
dummylabel62:
	// 4755 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
attentionrlnd:
	// 4757 
	// 0 ;---------------------------
	/* cmp	Ch2Priority,RLND_PR_ATTN	;override? */
	CMP(ch2priority, 250);
	/* ja	@F				;no -> */
	if ((dw)(ch2priority) > (dw)(250)) {goto dummylabel63;}
	/* cli */
	CLI;
	/* mov	Ch2Priority,RLND_PR_ATTN */
	ch2priority = 250;
	/* mov	Ch2Flags,RLND_FL_ATTN */
	ch2flags = 0x1;
	/* mov	Ch2Timer,RLND_TM_ATTN */
	ch2timer = 150;
	/* sti */
	STI;
	/* mov	al,RLND_FX_ATTN */
	al = 0x00d;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,RLND_FXON2 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
dummylabel63:
	// 4759 
	/* @@:		ret */
	RETF(0);
killattnsound:
	// 3850 
	/* test	SoundOn,1	;sound enabled? */
	TEST(soundon, 1);
edummylabel15:
	// 4761 
	/* jz	@F		;no -> */
	if (ZF) {goto dummylabel64;}
	/* mov	bx,SoundCard */
	bx = soundcard;
__disp=*(dw*)(((db*)&_killattnsound)+bx);
	/* jmp	_KillAttnSound[bx] */
	J(return __dispatch_call_ext(__disp, _state));
dummylabel64:
	// 4763 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
killattnnull:
	// 4765 
	// 0 ;---------------------------
	/* ret */
	RETF(0);
	// 0 ;---------------------------
killattnspkr:
	// 4767 
	// 0 ;---------------------------
	/* cmp	Ch1Priority,SPKR_PR_ATTN	;override? */
	CMP(ch1priority, 250);
	/* jne	@F				;no -> */
	if ((dw)(ch1priority) != (dw)(250)) {goto dummylabel65;}
	// 0 ;* attention sound fails to cancel sometimes - so try more than once
	/* mov	ah,ADLB_FXOFF1 */
	ah = 0x006;
	/* int	080h */
	_INT(0x080);
	/* cli */
	CLI;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Ch1Priority,al */
	ch1priority = al;
	/* mov	Ch1Flags,al */
	ch1flags = al;
	/* mov	Ch1Timer,ax */
	ch1timer = ax;
	/* sti */
	STI;
	/* mov	ah,ADLB_FXOFF1 */
	ah = 0x006;
	/* int	080h */
	_INT(0x080);
	/* cli */
	CLI;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Ch1Priority,al */
	ch1priority = al;
	/* mov	Ch1Flags,al */
	ch1flags = al;
	/* mov	Ch1Timer,ax */
	ch1timer = ax;
	/* sti */
	STI;
	/* mov	ah,ADLB_FXOFF1 */
	ah = 0x006;
	/* int	080h */
	_INT(0x080);
	/* cli */
	CLI;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Ch1Priority,al */
	ch1priority = al;
	/* mov	Ch1Flags,al */
	ch1flags = al;
	/* mov	Ch1Timer,ax */
	ch1timer = ax;
	/* sti */
	STI;
dummylabel65:
	// 4769 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
killattnblst:
	// 4771 
killattnadlb:
	// 4773 
	// 0 ;---------------------------
	/* cmp	Ch2Priority,ADLB_PR_ATTN	;override? */
	CMP(ch2priority, 250);
	/* jne	@F				;no -> */
	if ((dw)(ch2priority) != (dw)(250)) {goto dummylabel66;}
	/* mov	ah,ADLB_FXOFF2 */
	ah = 0x007;
	/* int	080h */
	_INT(0x080);
	/* cli */
	CLI;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Ch2Priority,al */
	ch2priority = al;
	/* mov	Ch2Flags,al */
	ch2flags = al;
	/* mov	Ch2Timer,ax */
	ch2timer = ax;
	/* sti */
	STI;
dummylabel66:
	// 4775 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
killattnrlnd:
	// 4777 
	// 0 ;---------------------------
	/* cmp	Ch2Priority,RLND_PR_ATTN	;override? */
	CMP(ch2priority, 250);
	/* jne	@F				;no -> */
	if ((dw)(ch2priority) != (dw)(250)) {goto dummylabel67;}
	/* mov	ah,RLND_FXOFF2 */
	ah = 0x007;
	/* int	080h */
	_INT(0x080);
	/* cli */
	CLI;
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	Ch2Priority,al */
	ch2priority = al;
	/* mov	Ch2Flags,al */
	ch2flags = al;
	/* mov	Ch2Timer,ax */
	ch2timer = ax;
	/* sti */
	STI;
dummylabel67:
	// 4779 
	/* @@:		ret */
	RETF(0);
cannonsound:
	// 3937 
	/* test	SoundOn,1	;sound enabled? */
	TEST(soundon, 1);
edummylabel16:
	// 4781 
	/* jz	@F		;no -> */
	if (ZF) {goto dummylabel68;}
	/* mov	bx,SoundCard */
	bx = soundcard;
__disp=*(dw*)(((db*)&_cannonsound)+bx);
	/* jmp	_CannonSound[bx] */
	J(return __dispatch_call_ext(__disp, _state));
dummylabel68:
	// 4783 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
cannonnull:
	// 4785 
	// 0 ;---------------------------
	/* ret */
	RETF(0);
	// 0 ;---------------------------
cannonspkr:
	// 4787 
	// 0 ;---------------------------
	/* cmp	Ch1Priority,SPKR_PR_CANNON	;override? */
	CMP(ch1priority, 210);
	/* jae	@F				;no -> */
	if ((dw)(ch1priority) >= (dw)(210)) {goto dummylabel69;}
	/* mov	EngSoundOn,0 */
	engsoundon = 0;
	/* cli */
	CLI;
	/* mov	Ch1Priority,SPKR_PR_CANNON */
	ch1priority = 210;
	/* mov	Ch1Flags,SPKR_FL_CANNON */
	ch1flags = 0;
	/* mov	Ch1Timer,SPKR_TM_CANNON */
	ch1timer = 25;
	/* sti */
	STI;
	/* mov	al,SPKR_FX_CANNON */
	al = 0x008;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,SPKR_FXON1 */
	ah = 0x004;
	/* int	080h */
	_INT(0x080);
dummylabel69:
	// 4789 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
cannonblst:
	// 4791 
	// 0 ;---------------------------
	/* cmp	Ch3Priority,BLST_PR_CANNON	;override? */
	CMP(ch3priority, 210);
	/* jae	@F				;no -> */
	if ((dw)(ch3priority) >= (dw)(210)) {goto dummylabel70;}
	/* mov	EngSoundOn,0 */
	engsoundon = 0;
	/* cli */
	CLI;
	/* mov	Ch3Priority,BLST_PR_CANNON */
	ch3priority = 210;
	/* mov	Ch3Flags,BLST_FL_CANNON */
	ch3flags = 0;
	/* mov	Ch3Timer,BLST_TM_CANNON */
	ch3timer = 25;
	/* sti */
	STI;
	/* mov	al,BLST_FX_CANNON */
	al = 0x000;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,BLST_FXON1 */
	ah = 0x000;
	/* int	081h */
	_INT(0x081);
dummylabel70:
	// 4793 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
cannonadlb:
	// 4795 
	// 0 ;---------------------------
	/* cmp	Ch2Priority,ADLB_PR_CANNON	;override? */
	CMP(ch2priority, 210);
	/* jae	@F				;no -> */
	if ((dw)(ch2priority) >= (dw)(210)) {goto dummylabel71;}
	/* cli */
	CLI;
	/* mov	Ch2Priority,ADLB_PR_CANNON */
	ch2priority = 210;
	/* mov	Ch2Flags,ADLB_FL_CANNON */
	ch2flags = 0;
	/* mov	Ch2Timer,ADLB_TM_CANNON */
	ch2timer = 25;
	/* sti */
	STI;
	/* mov	al,ADLB_FX_CANNON */
	al = 0x008;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,ADLB_FXON2 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
dummylabel71:
	// 4797 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
cannonrlnd:
	// 4799 
	// 0 ;---------------------------
	/* cmp	Ch2Priority,RLND_PR_CANNON	;override? */
	CMP(ch2priority, 210);
	/* jae	@F				;no -> */
	if ((dw)(ch2priority) >= (dw)(210)) {goto dummylabel72;}
	/* cli */
	CLI;
	/* mov	Ch2Priority,RLND_PR_CANNON */
	ch2priority = 210;
	/* mov	Ch2Flags,RLND_FL_CANNON */
	ch2flags = 0;
	/* mov	Ch2Timer,RLND_TM_CANNON */
	ch2timer = 25;
	/* sti */
	STI;
	/* mov	al,RLND_FX_CANNON */
	al = 0x008;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,RLND_FXON2 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
dummylabel72:
	// 4801 
	/* @@:		ret */
	RETF(0);
launchsound:
	// 4027 
	/* test	SoundOn,1	;sound enabled? */
	TEST(soundon, 1);
edummylabel17:
	// 4803 
	/* jz	@F		;no -> */
	if (ZF) {goto dummylabel73;}
	/* mov	bx,SoundCard */
	bx = soundcard;
__disp=*(dw*)(((db*)&_launchsound)+bx);
	/* jmp	_LaunchSound[bx] */
	J(return __dispatch_call_ext(__disp, _state));
dummylabel73:
	// 4805 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
launchnull:
	// 4807 
	// 0 ;---------------------------
	/* ret */
	RETF(0);
	// 0 ;---------------------------
launchspkr:
	// 4809 
	// 0 ;---------------------------
	/* cmp	Ch1Priority,SPKR_PR_LAUNCH	;override? */
	CMP(ch1priority, 255);
	/* ja	@F				;no -> */
	if ((dw)(ch1priority) > (dw)(255)) {goto dummylabel74;}
	/* mov	EngSoundOn,0 */
	engsoundon = 0;
	/* cli */
	CLI;
	/* mov	Ch1Priority,SPKR_PR_LAUNCH */
	ch1priority = 255;
	/* mov	Ch1Flags,SPKR_FL_LAUNCH */
	ch1flags = 0;
	/* mov	Ch1Timer,SPKR_TM_LAUNCH */
	ch1timer = 10;
	/* sti */
	STI;
	/* mov	al,SPKR_FX_LAUNCH */
	al = 0x007;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,SPKR_FXON1 */
	ah = 0x004;
	/* int	080h */
	_INT(0x080);
dummylabel74:
	// 4811 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
launchblst:
	// 4813 
launchadlb:
	// 4815 
	// 0 ;---------------------------
	/* cmp	Ch2Priority,ADLB_PR_LAUNCH	;override? */
	CMP(ch2priority, 255);
	/* ja	@F				;no -> */
	if ((dw)(ch2priority) > (dw)(255)) {goto dummylabel75;}
	/* cli */
	CLI;
	/* mov	Ch2Priority,ADLB_PR_LAUNCH */
	ch2priority = 255;
	/* mov	Ch2Flags,ADLB_FL_LAUNCH */
	ch2flags = 0;
	/* mov	Ch2Timer,ADLB_TM_LAUNCH */
	ch2timer = 40;
	/* sti */
	STI;
	/* mov	al,ADLB_FX_LAUNCH */
	al = 0x007;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,ADLB_FXON2 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
dummylabel75:
	// 4817 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
launchrlnd:
	// 4819 
	// 0 ;---------------------------
	/* cmp	Ch2Priority,RLND_PR_LAUNCH	;override? */
	CMP(ch2priority, 255);
	/* ja	@F				;no -> */
	if ((dw)(ch2priority) > (dw)(255)) {goto dummylabel76;}
	/* cli */
	CLI;
	/* mov	Ch2Priority,RLND_PR_LAUNCH */
	ch2priority = 255;
	/* mov	Ch2Flags,RLND_FL_LAUNCH */
	ch2flags = 0;
	/* mov	Ch2Timer,RLND_TM_LAUNCH */
	ch2timer = 35;
	/* sti */
	STI;
	/* mov	al,RLND_FX_LAUNCH */
	al = 0x007;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,RLND_FXON2 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
dummylabel76:
	// 4821 
	/* @@:		ret */
	RETF(0);
rwralertsound:
	// 4100 
	/* test	SoundOn,1	;sound enabled? */
	TEST(soundon, 1);
edummylabel18:
	// 4823 
	/* jz	@F		;no -> */
	if (ZF) {goto dummylabel77;}
	/* mov	bx,SoundCard */
	bx = soundcard;
__disp=*(dw*)(((db*)&_rwralertsound)+bx);
	/* jmp	_RWRAlertSound[bx] */
	J(return __dispatch_call_ext(__disp, _state));
dummylabel77:
	// 4825 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
rwralertnull:
	// 4827 
	// 0 ;---------------------------
	/* ret */
	RETF(0);
	// 0 ;---------------------------
rwralertspkr:
	// 4829 
	// 0 ;---------------------------
	/* cmp	Ch1Priority,SPKR_PR_RWR	;override? */
	CMP(ch1priority, 240);
	/* ja	@F		    	;no -> */
	if ((dw)(ch1priority) > (dw)(240)) {goto dummylabel78;}
	/* mov	EngSoundOn,0 */
	engsoundon = 0;
	/* cli */
	CLI;
	/* mov	Ch1Priority,SPKR_PR_RWR */
	ch1priority = 240;
	/* mov	Ch1Flags,SPKR_FL_RWR */
	ch1flags = 0x1;
	/* mov	Ch1Timer,SPKR_TM_RWR */
	ch1timer = 50;
	/* sti */
	STI;
	/* mov	al,SPKR_FX_RWR */
	al = 0x00c;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,SPKR_FXON1 */
	ah = 0x004;
	/* int	080h */
	_INT(0x080);
dummylabel78:
	// 4831 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
rwralertblst:
	// 4833 
rwralertadlb:
	// 4835 
	// 0 ;---------------------------
	/* cmp	Ch2Priority,ADLB_PR_RWR	;override? */
	CMP(ch2priority, 240);
	/* ja	@F		       	;no -> */
	if ((dw)(ch2priority) > (dw)(240)) {goto dummylabel79;}
	/* cli */
	CLI;
	/* mov	Ch2Priority,ADLB_PR_RWR */
	ch2priority = 240;
	/* mov	Ch2Flags,ADLB_FL_RWR */
	ch2flags = 0x1;
	/* mov	Ch2Timer,ADLB_TM_RWR */
	ch2timer = 50;
	/* sti */
	STI;
	/* mov	al,ADLB_FX_RWR */
	al = 0x00c;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,ADLB_FXON2 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
dummylabel79:
	// 4837 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
rwralertrlnd:
	// 4839 
	// 0 ;---------------------------
	/* cmp	Ch2Priority,RLND_PR_RWR	;override? */
	CMP(ch2priority, 240);
	/* ja	@F			;no -> */
	if ((dw)(ch2priority) > (dw)(240)) {goto dummylabel80;}
	/* cli */
	CLI;
	/* mov	Ch2Priority,RLND_PR_RWR */
	ch2priority = 240;
	/* mov	Ch2Flags,RLND_FL_RWR */
	ch2flags = 0x1;
	/* mov	Ch2Timer,RLND_TM_RWR */
	ch2timer = 50;
	/* sti */
	STI;
	/* mov	al,RLND_FX_RWR */
	al = 0x00c;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,RLND_FXON2 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
dummylabel80:
	// 4841 
	/* @@:		ret */
	RETF(0);
decoysound:
	// 4173 
	/* test	SoundOn,1	;sound enabled? */
	TEST(soundon, 1);
edummylabel19:
	// 4843 
	/* jz	@F		;no -> */
	if (ZF) {goto dummylabel81;}
	/* mov	bx,SoundCard */
	bx = soundcard;
__disp=*(dw*)(((db*)&_decoysound)+bx);
	/* jmp	_DecoySound[bx] */
	J(return __dispatch_call_ext(__disp, _state));
dummylabel81:
	// 4845 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
decoynull:
	// 4847 
	// 0 ;---------------------------
	/* ret */
	RETF(0);
	// 0 ;---------------------------
decoyspkr:
	// 4849 
	// 0 ;---------------------------
	/* cmp	Ch1Priority,SPKR_PR_DECOY	;override? */
	CMP(ch1priority, 125);
	/* ja	@F				;no -> */
	if ((dw)(ch1priority) > (dw)(125)) {goto dummylabel82;}
	/* mov	EngSoundOn,0 */
	engsoundon = 0;
	/* cli */
	CLI;
	/* mov	Ch1Priority,SPKR_PR_DECOY */
	ch1priority = 125;
	/* mov	Ch1Flags,SPKR_FL_DECOY */
	ch1flags = 0;
	/* mov	Ch1Timer,SPKR_TM_DECOY */
	ch1timer = 5;
	/* sti */
	STI;
	/* mov	al,SPKR_FX_DECOY */
	al = 0x005;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,SPKR_FXON1 */
	ah = 0x004;
	/* int	080h */
	_INT(0x080);
dummylabel82:
	// 4851 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
decoyblst:
	// 4853 
decoyadlb:
	// 4855 
	// 0 ;---------------------------
	/* cmp	Ch2Priority,ADLB_PR_DECOY	;override? */
	CMP(ch2priority, 125);
	/* ja	@F				;no -> */
	if ((dw)(ch2priority) > (dw)(125)) {goto dummylabel83;}
	/* cli */
	CLI;
	/* mov	Ch2Priority,ADLB_PR_DECOY */
	ch2priority = 125;
	/* mov	Ch2Flags,ADLB_FL_DECOY */
	ch2flags = 0;
	/* mov	Ch2Timer,ADLB_TM_DECOY */
	ch2timer = 5;
	/* sti */
	STI;
	/* mov	al,ADLB_FX_DECOY */
	al = 0x005;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,ADLB_FXON2 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
dummylabel83:
	// 4857 
	/* @@:		ret */
	RETF(0);
	// 0 ;---------------------------
decoyrlnd:
	// 4859 
	// 0 ;---------------------------
	/* cmp	Ch2Priority,RLND_PR_DECOY	;override? */
	CMP(ch2priority, 125);
	/* ja	@F				;no -> */
	if ((dw)(ch2priority) > (dw)(125)) {goto dummylabel84;}
	/* cli */
	CLI;
	/* mov	Ch2Priority,RLND_PR_DECOY */
	ch2priority = 125;
	/* mov	Ch2Flags,RLND_FL_DECOY */
	ch2flags = 0;
	/* mov	Ch2Timer,RLND_TM_DECOY */
	ch2timer = 5;
	/* sti */
	STI;
	/* mov	al,RLND_FX_DECOY */
	al = 0x005;
	/* xor	dl,dl		;default playback rate */
	XOR(dl, dl);
	/* mov	ah,RLND_FXON2 */
	ah = 0x005;
	/* int	080h */
	_INT(0x080);
dummylabel84:
	// 4861 
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
                case m2c::k__m2c_macrolocal_10_skip: 	goto __m2c_macrolocal_10_skip;
        case m2c::k__m2c_macrolocal_11_skip: 	goto __m2c_macrolocal_11_skip;
        case m2c::k__m2c_macrolocal_12_skip: 	goto __m2c_macrolocal_12_skip;
        case m2c::k__m2c_macrolocal_14_skip: 	goto __m2c_macrolocal_14_skip;
        case m2c::k__m2c_macrolocal_1_skip: 	goto __m2c_macrolocal_1_skip;
        case m2c::k__m2c_macrolocal_2_skip: 	goto __m2c_macrolocal_2_skip;
        case m2c::k__m2c_macrolocal_3_skip: 	goto __m2c_macrolocal_3_skip;
        case m2c::k__m2c_macrolocal_4_skip: 	goto __m2c_macrolocal_4_skip;
        case m2c::k__m2c_macrolocal_6_skip: 	goto __m2c_macrolocal_6_skip;
        case m2c::k__m2c_macrolocal_7_skip: 	goto __m2c_macrolocal_7_skip;
        case m2c::k__m2c_macrolocal_8_skip: 	goto __m2c_macrolocal_8_skip;
        case m2c::kattentionadlb: 	goto attentionadlb;
        case m2c::kattentionblst: 	goto attentionblst;
        case m2c::kattentionnull: 	goto attentionnull;
        case m2c::kattentionrlnd: 	goto attentionrlnd;
        case m2c::kattentionsound: 	goto attentionsound;
        case m2c::kattentionspkr: 	goto attentionspkr;
        case m2c::kcannonadlb: 	goto cannonadlb;
        case m2c::kcannonblst: 	goto cannonblst;
        case m2c::kcannonnull: 	goto cannonnull;
        case m2c::kcannonrlnd: 	goto cannonrlnd;
        case m2c::kcannonsound: 	goto cannonsound;
        case m2c::kcannonspkr: 	goto cannonspkr;
        case m2c::kcontrumbleadlb: 	goto contrumbleadlb;
        case m2c::kcontrumblerlnd: 	goto contrumblerlnd;
        case m2c::kcontrumblespkr: 	goto contrumblespkr;
        case m2c::kdecoyadlb: 	goto decoyadlb;
        case m2c::kdecoyblst: 	goto decoyblst;
        case m2c::kdecoynull: 	goto decoynull;
        case m2c::kdecoyrlnd: 	goto decoyrlnd;
        case m2c::kdecoysound: 	goto decoysound;
        case m2c::kdecoyspkr: 	goto decoyspkr;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel10: 	goto dummylabel10;
        case m2c::kdummylabel11: 	goto dummylabel11;
        case m2c::kdummylabel12: 	goto dummylabel12;
        case m2c::kdummylabel13: 	goto dummylabel13;
        case m2c::kdummylabel14: 	goto dummylabel14;
        case m2c::kdummylabel15: 	goto dummylabel15;
        case m2c::kdummylabel16: 	goto dummylabel16;
        case m2c::kdummylabel17: 	goto dummylabel17;
        case m2c::kdummylabel18: 	goto dummylabel18;
        case m2c::kdummylabel19: 	goto dummylabel19;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel20: 	goto dummylabel20;
        case m2c::kdummylabel21: 	goto dummylabel21;
        case m2c::kdummylabel22: 	goto dummylabel22;
        case m2c::kdummylabel23: 	goto dummylabel23;
        case m2c::kdummylabel24: 	goto dummylabel24;
        case m2c::kdummylabel25: 	goto dummylabel25;
        case m2c::kdummylabel26: 	goto dummylabel26;
        case m2c::kdummylabel27: 	goto dummylabel27;
        case m2c::kdummylabel28: 	goto dummylabel28;
        case m2c::kdummylabel29: 	goto dummylabel29;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kdummylabel30: 	goto dummylabel30;
        case m2c::kdummylabel31: 	goto dummylabel31;
        case m2c::kdummylabel32: 	goto dummylabel32;
        case m2c::kdummylabel33: 	goto dummylabel33;
        case m2c::kdummylabel34: 	goto dummylabel34;
        case m2c::kdummylabel35: 	goto dummylabel35;
        case m2c::kdummylabel36: 	goto dummylabel36;
        case m2c::kdummylabel37: 	goto dummylabel37;
        case m2c::kdummylabel38: 	goto dummylabel38;
        case m2c::kdummylabel39: 	goto dummylabel39;
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kdummylabel40: 	goto dummylabel40;
        case m2c::kdummylabel41: 	goto dummylabel41;
        case m2c::kdummylabel42: 	goto dummylabel42;
        case m2c::kdummylabel43: 	goto dummylabel43;
        case m2c::kdummylabel44: 	goto dummylabel44;
        case m2c::kdummylabel45: 	goto dummylabel45;
        case m2c::kdummylabel46: 	goto dummylabel46;
        case m2c::kdummylabel47: 	goto dummylabel47;
        case m2c::kdummylabel48: 	goto dummylabel48;
        case m2c::kdummylabel49: 	goto dummylabel49;
        case m2c::kdummylabel5: 	goto dummylabel5;
        case m2c::kdummylabel50: 	goto dummylabel50;
        case m2c::kdummylabel51: 	goto dummylabel51;
        case m2c::kdummylabel52: 	goto dummylabel52;
        case m2c::kdummylabel53: 	goto dummylabel53;
        case m2c::kdummylabel54: 	goto dummylabel54;
        case m2c::kdummylabel55: 	goto dummylabel55;
        case m2c::kdummylabel56: 	goto dummylabel56;
        case m2c::kdummylabel57: 	goto dummylabel57;
        case m2c::kdummylabel58: 	goto dummylabel58;
        case m2c::kdummylabel59: 	goto dummylabel59;
        case m2c::kdummylabel6: 	goto dummylabel6;
        case m2c::kdummylabel60: 	goto dummylabel60;
        case m2c::kdummylabel61: 	goto dummylabel61;
        case m2c::kdummylabel62: 	goto dummylabel62;
        case m2c::kdummylabel63: 	goto dummylabel63;
        case m2c::kdummylabel64: 	goto dummylabel64;
        case m2c::kdummylabel65: 	goto dummylabel65;
        case m2c::kdummylabel66: 	goto dummylabel66;
        case m2c::kdummylabel67: 	goto dummylabel67;
        case m2c::kdummylabel68: 	goto dummylabel68;
        case m2c::kdummylabel69: 	goto dummylabel69;
        case m2c::kdummylabel7: 	goto dummylabel7;
        case m2c::kdummylabel70: 	goto dummylabel70;
        case m2c::kdummylabel71: 	goto dummylabel71;
        case m2c::kdummylabel72: 	goto dummylabel72;
        case m2c::kdummylabel73: 	goto dummylabel73;
        case m2c::kdummylabel74: 	goto dummylabel74;
        case m2c::kdummylabel75: 	goto dummylabel75;
        case m2c::kdummylabel76: 	goto dummylabel76;
        case m2c::kdummylabel77: 	goto dummylabel77;
        case m2c::kdummylabel78: 	goto dummylabel78;
        case m2c::kdummylabel79: 	goto dummylabel79;
        case m2c::kdummylabel8: 	goto dummylabel8;
        case m2c::kdummylabel80: 	goto dummylabel80;
        case m2c::kdummylabel81: 	goto dummylabel81;
        case m2c::kdummylabel82: 	goto dummylabel82;
        case m2c::kdummylabel83: 	goto dummylabel83;
        case m2c::kdummylabel84: 	goto dummylabel84;
        case m2c::kdummylabel9: 	goto dummylabel9;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel10: 	goto edummylabel10;
        case m2c::kedummylabel11: 	goto edummylabel11;
        case m2c::kedummylabel12: 	goto edummylabel12;
        case m2c::kedummylabel13: 	goto edummylabel13;
        case m2c::kedummylabel14: 	goto edummylabel14;
        case m2c::kedummylabel15: 	goto edummylabel15;
        case m2c::kedummylabel16: 	goto edummylabel16;
        case m2c::kedummylabel17: 	goto edummylabel17;
        case m2c::kedummylabel18: 	goto edummylabel18;
        case m2c::kedummylabel19: 	goto edummylabel19;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kedummylabel7: 	goto edummylabel7;
        case m2c::kedummylabel8: 	goto edummylabel8;
        case m2c::kedummylabel9: 	goto edummylabel9;
        case m2c::kengadjustadlb: 	goto engadjustadlb;
        case m2c::kengadjustrlnd: 	goto engadjustrlnd;
        case m2c::kengadjustspkr: 	goto engadjustspkr;
        case m2c::kengcontblst: 	goto engcontblst;
        case m2c::kengoffadlb: 	goto engoffadlb;
        case m2c::kengoffblst: 	goto engoffblst;
        case m2c::kengoffrlnd: 	goto engoffrlnd;
        case m2c::kengoffspkr: 	goto engoffspkr;
        case m2c::kengokblst: 	goto engokblst;
        case m2c::kengokrlnd: 	goto engokrlnd;
        case m2c::kengokspkr: 	goto engokspkr;
        case m2c::kexplo1adlb: 	goto explo1adlb;
        case m2c::kexplo1blst: 	goto explo1blst;
        case m2c::kexplo1exitadlb: 	goto explo1exitadlb;
        case m2c::kexplo1exitblst: 	goto explo1exitblst;
        case m2c::kexplo1exitrlnd: 	goto explo1exitrlnd;
        case m2c::kexplo1exitspkr: 	goto explo1exitspkr;
        case m2c::kexplo1null: 	goto explo1null;
        case m2c::kexplo1rlnd: 	goto explo1rlnd;
        case m2c::kexplo1spkr: 	goto explo1spkr;
        case m2c::kexplo2adlb: 	goto explo2adlb;
        case m2c::kexplo2blst: 	goto explo2blst;
        case m2c::kexplo2exitadlb: 	goto explo2exitadlb;
        case m2c::kexplo2exitblst: 	goto explo2exitblst;
        case m2c::kexplo2exitrlnd: 	goto explo2exitrlnd;
        case m2c::kexplo2exitspkr: 	goto explo2exitspkr;
        case m2c::kexplo2null: 	goto explo2null;
        case m2c::kexplo2rlnd: 	goto explo2rlnd;
        case m2c::kexplo2spkr: 	goto explo2spkr;
        case m2c::kexplo3adlb: 	goto explo3adlb;
        case m2c::kexplo3blst: 	goto explo3blst;
        case m2c::kexplo3exitadlb: 	goto explo3exitadlb;
        case m2c::kexplo3exitblst: 	goto explo3exitblst;
        case m2c::kexplo3exitrlnd: 	goto explo3exitrlnd;
        case m2c::kexplo3exitspkr: 	goto explo3exitspkr;
        case m2c::kexplo3null: 	goto explo3null;
        case m2c::kexplo3rlnd: 	goto explo3rlnd;
        case m2c::kexplo3spkr: 	goto explo3spkr;
        case m2c::kexplosound1: 	goto explosound1;
        case m2c::kexplosound2: 	goto explosound2;
        case m2c::kexplosound3: 	goto explosound3;
        case m2c::kgearadlb: 	goto gearadlb;
        case m2c::kgearblst: 	goto gearblst;
        case m2c::kgearnull: 	goto gearnull;
        case m2c::kgearrlnd: 	goto gearrlnd;
        case m2c::kgearsound: 	goto gearsound;
        case m2c::kgearspkr: 	goto gearspkr;
        case m2c::kgrowloffadlb: 	goto growloffadlb;
        case m2c::kgrowloffrlnd: 	goto growloffrlnd;
        case m2c::kgrowloffspkr: 	goto growloffspkr;
        case m2c::kinstalladlb: 	goto installadlb;
        case m2c::kinstallblst: 	goto installblst;
        case m2c::kinstallcarderr: 	goto installcarderr;
        case m2c::kinstallfileerr: 	goto installfileerr;
        case m2c::kinstallmemerr: 	goto installmemerr;
        case m2c::kinstallnull: 	goto installnull;
        case m2c::kinstallrlnd: 	goto installrlnd;
        case m2c::kinstallsound: 	goto installsound;
        case m2c::kinstallspkr: 	goto installspkr;
        case m2c::kintoupdateadlb: 	goto intoupdateadlb;
        case m2c::kkillattnadlb: 	goto killattnadlb;
        case m2c::kkillattnblst: 	goto killattnblst;
        case m2c::kkillattnnull: 	goto killattnnull;
        case m2c::kkillattnrlnd: 	goto killattnrlnd;
        case m2c::kkillattnsound: 	goto killattnsound;
        case m2c::kkillattnspkr: 	goto killattnspkr;
        case m2c::klaunchadlb: 	goto launchadlb;
        case m2c::klaunchblst: 	goto launchblst;
        case m2c::klaunchnull: 	goto launchnull;
        case m2c::klaunchrlnd: 	goto launchrlnd;
        case m2c::klaunchsound: 	goto launchsound;
        case m2c::klaunchspkr: 	goto launchspkr;
        case m2c::kmorsedashadlb: 	goto morsedashadlb;
        case m2c::kmorsedashblst: 	goto morsedashblst;
        case m2c::kmorsedashnull: 	goto morsedashnull;
        case m2c::kmorsedashrlnd: 	goto morsedashrlnd;
        case m2c::kmorsedashsound: 	goto morsedashsound;
        case m2c::kmorsedashspkr: 	goto morsedashspkr;
        case m2c::kmorsedotadlb: 	goto morsedotadlb;
        case m2c::kmorsedotblst: 	goto morsedotblst;
        case m2c::kmorsedotnull: 	goto morsedotnull;
        case m2c::kmorsedotrlnd: 	goto morsedotrlnd;
        case m2c::kmorsedotsound: 	goto morsedotsound;
        case m2c::kmorsedotspkr: 	goto morsedotspkr;
        case m2c::knormaladlb: 	goto normaladlb;
        case m2c::knormalblst: 	goto normalblst;
        case m2c::knormalisesound: 	goto normalisesound;
        case m2c::knormalnull: 	goto normalnull;
        case m2c::knormalrlnd: 	goto normalrlnd;
        case m2c::knormalspkr: 	goto normalspkr;
        case m2c::krefreshadlb: 	goto refreshadlb;
        case m2c::krefreshblst: 	goto refreshblst;
        case m2c::krefreshnull: 	goto refreshnull;
        case m2c::krefreshrlnd: 	goto refreshrlnd;
        case m2c::krefreshsound: 	goto refreshsound;
        case m2c::krefreshspkr: 	goto refreshspkr;
        case m2c::kresumesound: 	goto resumesound;
        case m2c::krwralertadlb: 	goto rwralertadlb;
        case m2c::krwralertblst: 	goto rwralertblst;
        case m2c::krwralertnull: 	goto rwralertnull;
        case m2c::krwralertrlnd: 	goto rwralertrlnd;
        case m2c::krwralertsound: 	goto rwralertsound;
        case m2c::krwralertspkr: 	goto rwralertspkr;
        case m2c::kscreechadlb: 	goto screechadlb;
        case m2c::kscreechblst: 	goto screechblst;
        case m2c::kscreechnull: 	goto screechnull;
        case m2c::kscreechrlnd: 	goto screechrlnd;
        case m2c::kscreechsound: 	goto screechsound;
        case m2c::kscreechspkr: 	goto screechspkr;
        case m2c::kskipch1: 	goto skipch1;
        case m2c::kskipch2: 	goto skipch2;
        case m2c::kskipch3: 	goto skipch3;
        case m2c::kskipgrowladlb: 	goto skipgrowladlb;
        case m2c::kskipgrowlrlnd: 	goto skipgrowlrlnd;
        case m2c::kskipgrowlspkr: 	goto skipgrowlspkr;
        case m2c::kskiprumbleadlb: 	goto skiprumbleadlb;
        case m2c::kskiprumblerlnd: 	goto skiprumblerlnd;
        case m2c::kskiprumblespkr: 	goto skiprumblespkr;
        case m2c::ksuspendadlb: 	goto suspendadlb;
        case m2c::ksuspendblst: 	goto suspendblst;
        case m2c::ksuspendnull: 	goto suspendnull;
        case m2c::ksuspendrlnd: 	goto suspendrlnd;
        case m2c::ksuspendsound: 	goto suspendsound;
        case m2c::ksuspendspkr: 	goto suspendspkr;
        case m2c::kupdateadlb: 	goto updateadlb;
        case m2c::kupdateblst: 	goto updateblst;
        case m2c::kupdatenull: 	goto updatenull;
        case m2c::kupdaterlnd: 	goto updaterlnd;
        case m2c::kupdatesound: 	goto updatesound;
        case m2c::kupdatespkr: 	goto updatespkr;
        case m2c::kzxcv: 	goto zxcv;
        default: return __dispatch_call(__disp, _state);
    };
}

