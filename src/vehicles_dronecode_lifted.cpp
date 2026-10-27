/* THIS IS GENERATED FILE */

        
#include "vehicles.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
initconvoys:
	// 2097 
	/* mov	bx,TRUCK ;* kill: assume all */
	bx = 0;
edummylabel1:
	// 4369 
	/* mov	cx,NUM_TRUCKS */
	cx = 4;
	/* mov	si,OFFSET ATruckConvoy1 */
	si = m2c::near_offset_external(atruckconvoy1);
	/* mov	di,OFFSET ATruck1Route */
	di = m2c::near_offset_external(atruck1route);
	/* call	InitOneConvoy */
	CALL(initoneconvoy, 0);
	/* mov	bx,TRUCK */
	bx = 0;
	/* mov	cx,NUM_TRUCKS */
	cx = 4;
	/* mov	si,OFFSET ATruckConvoy2 */
	si = m2c::near_offset_external(atruckconvoy2);
	/* mov	di,OFFSET ATruck2Route */
	di = m2c::near_offset_external(atruck2route);
	/* call	InitOneConvoy */
	CALL(initoneconvoy, 0);
	/* mov	bx,TRUCK */
	bx = 0;
	/* mov	cx,NUM_TRUCKS */
	cx = 4;
	/* mov	si,OFFSET ETruckConvoy1 */
	si = m2c::near_offset_external(etruckconvoy1);
	/* mov	di,OFFSET ETruck1Route */
	di = m2c::near_offset_external(etruck1route);
	/* call	InitOneConvoy */
	CALL(initoneconvoy, 0);
	/* mov	bx,TRUCK */
	bx = 0;
	/* mov	cx,NUM_TRUCKS */
	cx = 4;
	/* mov	si,OFFSET ETruckConvoy2 */
	si = m2c::near_offset_external(etruckconvoy2);
	/* mov	di,OFFSET ETruck2Route */
	di = m2c::near_offset_external(etruck2route);
	/* call	InitOneConvoy */
	CALL(initoneconvoy, 0);
	/* mov	bx,TRAIN */
	bx = 2;
	/* mov	cx,NUM_TRAINS */
	cx = 8;
	/* mov	si,OFFSET ATrain1 */
	si = m2c::near_offset_external(atrain1);
	/* mov	di,OFFSET ATrain1Route */
	di = m2c::near_offset_external(atrain1route);
	/* call	InitOneConvoy */
	CALL(initoneconvoy, 0);
	/* mov	bx,TRAIN */
	bx = 2;
	/* mov	cx,NUM_TRAINS */
	cx = 8;
	/* mov	si,OFFSET ATrain2 */
	si = m2c::near_offset_external(atrain2);
	/* mov	di,OFFSET ATrain2Route */
	di = m2c::near_offset_external(atrain2route);
	/* call	InitOneConvoy */
	CALL(initoneconvoy, 0);
	/* mov	bx,TRAIN */
	bx = 2;
	/* mov	cx,NUM_TRAINS */
	cx = 8;
	/* mov	si,OFFSET ETrain1 */
	si = m2c::near_offset_external(etrain1);
	/* mov	di,OFFSET ETrain1Route */
	di = m2c::near_offset_external(etrain1route);
	/* call	InitOneConvoy */
	CALL(initoneconvoy, 0);
	/* mov	bx,TRAIN */
	bx = 2;
	/* mov	cx,NUM_TRAINS */
	cx = 8;
	/* mov	si,OFFSET ETrain2 */
	si = m2c::near_offset_external(etrain2);
	/* mov	di,OFFSET ETrain2Route */
	di = m2c::near_offset_external(etrain2route);
	/* call	InitOneConvoy */
	CALL(initoneconvoy, 0);
	/* ret */
	RETF(0);
initoneconvoy:
	// 2151 
	/* test	CNVY_ACTIVE[si],1	;convoy active? */
	TEST(((convoy*)raddr(ds,si))->cnvy_active, 1);
edummylabel2:
	// 4371 
	/* jz	ExitInit		;no -> */
	if (ZF) {goto exitinit;}
	// 0 ;* store params
	/* mov	VehicleType,bx */
	vehicletype = bx;
	/* mov	NumVehicles,cx */
	numvehicles = cx;
	/* mov	ConvoyPtr,si */
	convoyptr = si;
	/* mov	RoutePtr,di */
	routeptr = di;
	// 0 ;* init convoy speed
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	CNVY_SPEED[si],ax	;speed = 0 */
	m2c::setdata(&(*(dw*)(((db*)&((convoy*)raddr(ds,si))->cnvy_speed))), m2c::getdata(ax));
	/* mov	ah,ROUTE_SPEED[di]	;aiming speed * 256 */
	ah = m2c::getdata(((route_node*)raddr(ds,di))->route_speed);
	/* mov	CNVY_AIM_SPEED[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((convoy*)raddr(ds,si))->cnvy_aim_speed))), m2c::getdata(ax));
	// 0 ;* init convoy event
	/* mov	al,ROUTE_DRONE[di] */
	al = m2c::getdata(((route_node*)raddr(ds,di))->route_drone);
	/* mov	CNVY_DRONE[si],al */
	m2c::setdata(&(((convoy*)raddr(ds,si))->cnvy_drone), m2c::getdata(al));
	/* mov	al,ROUTE_EVENT[di] */
	al = m2c::getdata(((route_node*)raddr(ds,di))->route_event);
	/* mov	CNVY_EVENT[si],al */
	m2c::setdata(&(((convoy*)raddr(ds,si))->cnvy_event), m2c::getdata(al));
	// 0 ;* init each vehicle in convoy (if active)
	/* add	si,CNVY_REC_SIZE	;ptr -> first vehicle in convoy */
	ADD(si, 10);
initloop:
	// 4373 
	/* InitLoop:	cmp	_VEH_SIDE[si],DEAD	;vehicle active? */
	CMP(((vehicle*)raddr(ds,(6+18)+si))->veh_side, 0);
	/* je	InitNext      		;no -> */
	if ((db)(((vehicle*)raddr(ds,(6+18)+si))->veh_side) == (db)(0)) {goto initnext;}
	/* mov	_VEH_NODE_PTR[si],di	;ptr -> first route node */
	m2c::setdata(&(*(dw*)(((db*)&((vehicle*)raddr(ds,(6+18)+si))->veh_node_ptr))), m2c::getdata(di));
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	_VP_PITCH[si],ax	;pitch = 0 */
	m2c::setdata(&(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_pitch))), m2c::getdata(ax));
	/* mov	_VP_ROLL[si],ax		;roll = 0 */
	m2c::setdata(&(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_roll))), m2c::getdata(ax));
	/* mov	_VEH_EVENT[si],al */
	m2c::setdata(&(((vehicle*)raddr(ds,(6+18)+si))->veh_event), m2c::getdata(al));
	/* mov	_VEH_DIST_FINE[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((vehicle*)raddr(ds,(6+18)+si))->veh_dist_fine))), m2c::getdata(ax));
	/* mov	_VEH_XFINE[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((vehicle*)raddr(ds,(6+18)+si))->veh_xfine))), m2c::getdata(ax));
	/* mov	_VEH_YFINE[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((vehicle*)raddr(ds,(6+18)+si))->veh_yfine))), m2c::getdata(ax));
	/* mov	_VEH_ZFINE[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((vehicle*)raddr(ds,(6+18)+si))->veh_zfine))), m2c::getdata(ax));
	/* mov	MOB_TYPE[si],OTYPE_MOBILE1	;skew only mobile */
	m2c::setdata(&(((mobile*)raddr(ds,si))->mob_type), m2c::getdata(2));
initnext:
	// 4375 
	/* InitNext:	add	si,NEXT_VEHICLE */
	ADD(si, 6+18+16);
	/* loop	InitLoop */
	LOOP(initloop);
exitinit:
	// 4377 
	/* ExitInit:	ret */
	RETN(0);
updateconvoys:
	// 2199 
	/* mov	bx,TRUCK ;* kill: assume all */
	bx = 0;
edummylabel3:
	// 4379 
	/* mov	cx,NUM_TRUCKS */
	cx = 4;
	/* mov	si,OFFSET ATruckConvoy1 */
	si = m2c::near_offset_external(atruckconvoy1);
	/* mov	di,OFFSET ATruck1Route */
	di = m2c::near_offset_external(atruck1route);
	/* call	UpdateOneConvoy */
	CALL(updateoneconvoy, 0);
	/* mov	bx,TRUCK */
	bx = 0;
	/* mov	cx,NUM_TRUCKS */
	cx = 4;
	/* mov	si,OFFSET ATruckConvoy2 */
	si = m2c::near_offset_external(atruckconvoy2);
	/* mov	di,OFFSET ATruck2Route */
	di = m2c::near_offset_external(atruck2route);
	/* call	UpdateOneConvoy */
	CALL(updateoneconvoy, 0);
	/* mov	bx,TRUCK */
	bx = 0;
	/* mov	cx,NUM_TRUCKS */
	cx = 4;
	/* mov	si,OFFSET ETruckConvoy1 */
	si = m2c::near_offset_external(etruckconvoy1);
	/* mov	di,OFFSET ETruck1Route */
	di = m2c::near_offset_external(etruck1route);
	/* call	UpdateOneConvoy */
	CALL(updateoneconvoy, 0);
	/* mov	bx,TRUCK */
	bx = 0;
	/* mov	cx,NUM_TRUCKS */
	cx = 4;
	/* mov	si,OFFSET ETruckConvoy2 */
	si = m2c::near_offset_external(etruckconvoy2);
	/* mov	di,OFFSET ETruck2Route */
	di = m2c::near_offset_external(etruck2route);
	/* call	UpdateOneConvoy */
	CALL(updateoneconvoy, 0);
	/* mov	bx,TRAIN */
	bx = 2;
	/* mov	cx,NUM_TRAINS */
	cx = 8;
	/* mov	si,OFFSET ATrain1 */
	si = m2c::near_offset_external(atrain1);
	/* mov	di,OFFSET ATrain1Route */
	di = m2c::near_offset_external(atrain1route);
	/* call	UpdateOneConvoy */
	CALL(updateoneconvoy, 0);
	/* mov	bx,TRAIN */
	bx = 2;
	/* mov	cx,NUM_TRAINS */
	cx = 8;
	/* mov	si,OFFSET ATrain2 */
	si = m2c::near_offset_external(atrain2);
	/* mov	di,OFFSET ATrain2Route */
	di = m2c::near_offset_external(atrain2route);
	/* call	UpdateOneConvoy */
	CALL(updateoneconvoy, 0);
	/* mov	bx,TRAIN */
	bx = 2;
	/* mov	cx,NUM_TRAINS */
	cx = 8;
	/* mov	si,OFFSET ETrain1 */
	si = m2c::near_offset_external(etrain1);
	/* mov	di,OFFSET ETrain1Route */
	di = m2c::near_offset_external(etrain1route);
	/* call	UpdateOneConvoy */
	CALL(updateoneconvoy, 0);
	/* mov	bx,TRAIN */
	bx = 2;
	/* mov	cx,NUM_TRAINS */
	cx = 8;
	/* mov	si,OFFSET ETrain2 */
	si = m2c::near_offset_external(etrain2);
	/* mov	di,OFFSET ETrain2Route */
	di = m2c::near_offset_external(etrain2route);
	/* call	UpdateOneConvoy */
	CALL(updateoneconvoy, 0);
	/* ret */
	RETF(0);
updateoneconvoy:
	// 2253 
	/* test	CNVY_ACTIVE[si],1	;convoy active? */
	TEST(((convoy*)raddr(ds,si))->cnvy_active, 1);
edummylabel4:
	// 4381 
	/* jnz	__m2c_macrolocal_1_skip */
	if (!ZF) {goto __m2c_macrolocal_1_skip;}
	/* jmp	ExitUpdate */
	goto exitupdate;
__m2c_macrolocal_1_skip:
	// 4383 
	// 0 ;no ->
	/* mov	LeadVehicle,1	;first active vehicle is leader */
	leadvehicle = 1;
	/* mov	StopConvoy,0 */
	stopconvoy = 0;
	// 0 ;--------------
	// 0 ;* store params
	// 0 ;--------------
	/* mov	VehicleType,bx */
	vehicletype = bx;
	/* mov	NumVehicles,cx */
	numvehicles = cx;
	/* mov	ConvoyPtr,si */
	convoyptr = si;
	/* mov	RoutePtr,di */
	routeptr = di;
	// 0 ;-------------------
	// 0 ;* sort convoy event
	// 0 ;-------------------
	/* cmp	CNVY_EVENT[si],-1	;wait for event? */
	CMP(((convoy*)raddr(ds,si))->cnvy_event, -1);
	/* je	SortDelay		;no -> */
	if ((db)(((convoy*)raddr(ds,si))->cnvy_event) == (db)(-1)) {goto sortdelay;}
	/* mov	bl,CNVY_DRONE[si]	;fetch drone number */
	bl = m2c::getdata(((convoy*)raddr(ds,si))->cnvy_drone);
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1		;*2 word index */
	SHL(bx, 1);
	/* mov	di,DronePtrs[bx]	;di -> drone data */
	di = *(dw*)(((db*)&droneptrs)+bx);
	/* mov	al,_DRONE_EVENT[di] */
	al = m2c::getdata(((drone_data*)raddr(ds,(6+18)+di))->drone_event);
	/* cmp	al,CNVY_EVENT[si]	;event satisfied? */
	CMP(al, ((convoy*)raddr(ds,si))->cnvy_event);
	/* jb	@F			;no -> */
	if ((db)(al) < (db)(((convoy*)raddr(ds,si))->cnvy_event)) {goto dummylabel1;}
	/* mov	CNVY_DRONE[si],0	;clear event */
	m2c::setdata(&(((convoy*)raddr(ds,si))->cnvy_drone), m2c::getdata(0));
	/* mov	CNVY_EVENT[si],-1 */
	m2c::setdata(&(((convoy*)raddr(ds,si))->cnvy_event), m2c::getdata(-1));
	/* mov	CNVY_DELAY[si],DLY_AFTER_EVENT */
	m2c::setdata(&(*(dw*)(((db*)&((convoy*)raddr(ds,si))->cnvy_delay))), m2c::getdata(30*100));
	/* jmp	SortDelay */
	goto sortdelay;
dummylabel1:
	// 4385 
	/* @@:		xor	ax,ax		;aiming speed = 0 */
	XOR(ax, ax);
	/* jmp	ContSpeed	;override route leg speed -> */
	goto contspeed;
	// 0 ;-------------------
	// 0 ;* sort convoy delay
	// 0 ;-------------------
sortdelay:
	// 4387 
	/* SortDelay:	mov	ax,CNVY_DELAY[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((convoy*)raddr(ds,si))->cnvy_delay)));
	/* test	ax,ax		;delaying? */
	TEST(ax, ax);
	/* jz	SortSpeed	;no -> */
	if (!(ax & ax)) {goto sortspeed;}
	// 0 ;* do not start delay until convoy has stopped
	/* cmp	CNVY_SPEED[si],0	;convoy stopped? */
	CMP(*(dw*)(((db*)&((convoy*)raddr(ds,si))->cnvy_speed)), 0);
	/* jne	@F			;no -> */
	if ((dw)(*(dw*)(((db*)&((convoy*)raddr(ds,si))->cnvy_speed))) != (dw)(0)) {goto dummylabel2;}
	/* sub	ax,LastFrame */
	SUB(ax, lastframe);
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
	/* mov	CNVY_DELAY[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((convoy*)raddr(ds,si))->cnvy_delay))), m2c::getdata(ax));
dummylabel2:
	// 4389 
	/* @@:		xor	ax,ax		;aiming speed = 0 */
	XOR(ax, ax);
	/* jmp	ContSpeed	;override route leg speed -> */
	goto contspeed;
	// 0 ;-------------------
	// 0 ;* sort convoy speed
	// 0 ;-------------------
	// 0 ;* error = aim speed - speed
	// 0 ;*
	// 0 ;* select error
	// 0 ;* case = 0 (no change)
	// 0 ;*    accel = 0
	// 0 ;* case > 0 (accelerate)
	// 0 ;*    accel = min(ACCEL_RATE * DeltaTime, error)
	// 0 ;* case < 0 (decelerate)
	// 0 ;*    accel = max(DECEL_RATE * DeltaTime, error)
	// 0 ;* endselect
	// 0 ;*
	// 0 ;* speed = speed + accel
sortspeed:
	// 4391 
	/* SortSpeed:	mov	ax,CNVY_AIM_SPEED[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((convoy*)raddr(ds,si))->cnvy_aim_speed)));
contspeed:
	// 4393 
	/* ContSpeed:	sub	ax,CNVY_SPEED[si] */
	SUB(ax, *(dw*)(((db*)&((convoy*)raddr(ds,si))->cnvy_speed)));
	/* jz	SetSpeed	;zero error -> */
	if (ax == 0) {goto setspeed;}
	/* mov	bp,ax		;bp = error */
	bp = ax;
	/* js	Decelerate	;error < 0 -> */
	if ((short)(ax) < 0) {goto decelerate;}
accelerate:
	// 4395 
	/* Accelerate:	mov	ax,ACCEL_RATE */
	ax = 4*256;
	/* mov	dx,DeltaTime */
	dx = deltatime;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* cmp	ax,bp		;change <= error? */
	CMP(ax, bp);
	/* jle	SetSpeed	;yes -> */
	if ((short)(ax) <= (short)(bp)) {goto setspeed;}
	/* mov	ax,bp */
	ax = bp;
	/* jmp	SetSpeed */
	goto setspeed;
decelerate:
	// 4397 
	/* Decelerate:	mov	ax,DECEL_RATE */
	ax = -8*256;
	/* mov	dx,DeltaTime */
	dx = deltatime;
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	/* cmp	ax,bp		;change >= error? */
	CMP(ax, bp);
	/* jge	SetSpeed	;yes -> */
	if ((short)(ax) >= (short)(bp)) {goto setspeed;}
	/* mov	ax,bp */
	ax = bp;
setspeed:
	// 4399 
	/* SetSpeed:	add	CNVY_SPEED[si],ax */
	ADD(*(dw*)(((db*)&((convoy*)raddr(ds,si))->cnvy_speed)), ax);
	// 0 ;-----------------
	// 0 ;* update vehicles
	// 0 ;-----------------
	/* add	si,CNVY_REC_SIZE	;si -> first vehicle */
	ADD(si, 10);
updateloop:
	// 4401 
	/* UpdateLoop:	cmp	_VEH_SIDE[si],DEAD	;vehicle active? */
	CMP(((vehicle*)raddr(ds,(6+18)+si))->veh_side, 0);
	/* jne	__m2c_macrolocal_5_skip */
	if ((db)(((vehicle*)raddr(ds,(6+18)+si))->veh_side) != (db)(0)) {goto __m2c_macrolocal_5_skip;}
	/* jmp	SkipUpdate */
	goto skipupdate;
__m2c_macrolocal_5_skip:
	// 4403 
	// 0 ;no ->
	// 0 ;* dist moved = speed * cos(pitch) * DeltaTime
	/* mov	bx,ConvoyPtr */
	bx = convoyptr;
	/* mov	ax,CNVY_SPEED[bx] */
	ax = m2c::getdata(*(dw*)(((db*)&((convoy*)raddr(ds,bx))->cnvy_speed)));
	// 0 ;* headlamp animation
	/* and	MOB_ANIM[si],NOT HEADLAMPS	;assume off */
	AND(((mobile*)raddr(ds,si))->mob_anim, ~0x1);
	/* test	ax,ax		;speed = 0? */
	TEST(ax, ax);
	/* jz	LampsOk		;yes -> */
	if (!(ax & ax)) {goto lampsok;}
	/* cmp	Night,0		;night? */
	CMP(night, 0);
	/* jne	@F		;yes -> */
	if ((dw)(night) != (dw)(0)) {goto dummylabel3;}
	/* cmp	Fog,0		;fog? */
	CMP(fog, 0);
	/* je	LampsOk		;no -> */
	if ((dw)(fog) == (dw)(0)) {goto lampsok;}
dummylabel3:
	// 4405 
	/* @@:		or	MOB_ANIM[si],HEADLAMPS */
	OR(((mobile*)raddr(ds,si))->mob_anim, 0x1);
	// 0 ;* calc speed * cos(pitch) wrt vehicle type
lampsok:
	// 4407 
	/* LampsOk:	cmp	WORD PTR _VP_PITCH[si],0	;any pitch? */
	CMP(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_pitch)), 0);
	/* je	@F	 		     	;no -> */
	if ((dw)(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_pitch))) == (dw)(0)) {goto dummylabel4;}
	/* mov	bx,VehicleType */
	bx = vehicletype;
	/* mov	dx,CosSlope[bx] */
	dx = *(dw*)(((db*)&cosslope)+bx);
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	// 0 ;speed * cos(pitch)
dummylabel4:
	// 4409 
	/* @@:		mov	dx,DeltaTime */
	dx = deltatime;
	/* imul	dx		;(result always positive) */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* xchg	al,dh	;/256 retaining lsb in dh */
	XCHG(al, dh);
	/* xchg	al,dl */
	XCHG(al, dl);
	/* xchg	al,ah */
	XCHG(al, ah);
	/* shl	dh,1	;extract 1/2 bit */
	SHL(dh, 1);
	/* mov	dh,0 */
	dh = 0;
	/* adc	ax,0	;round up */
	ADC(ax, 0);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	Dist,dx */
	dist = dx;
	/* mov	DistFine,ax */
	distfine = ax;
	// 0 ;* dist to go = dist to go - dist moved
	/* mov	dx,_VEH_DIST[si] */
	dx = m2c::getdata(*(dw*)(((db*)&((vehicle*)raddr(ds,(6+18)+si))->veh_dist)));
	/* mov	ax,_VEH_DIST_FINE[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((vehicle*)raddr(ds,(6+18)+si))->veh_dist_fine)));
	/* sub	ax,DistFine */
	SUB(ax, distfine);
	/* sbb	dx,Dist */
	SBB(dx, dist);
	/* jc	Overshoot	;satisfied route node -> */
	if (CF) {goto overshoot;}
	// 0 ;------------------------
	// 0 ;* travel along route leg
	// 0 ;------------------------
	/* mov	_VEH_DIST[si],dx */
	m2c::setdata(&(*(dw*)(((db*)&((vehicle*)raddr(ds,(6+18)+si))->veh_dist))), m2c::getdata(dx));
	/* mov	_VEH_DIST_FINE[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((vehicle*)raddr(ds,(6+18)+si))->veh_dist_fine))), m2c::getdata(ax));
	/* mov	bx,ConvoyPtr */
	bx = convoyptr;
	/* mov	ax,CNVY_SPEED[bx] */
	ax = m2c::getdata(*(dw*)(((db*)&((convoy*)raddr(ds,bx))->cnvy_speed)));
	/* call	CalcDXYZwrtT */
	CALL(calcdxyzwrtt, 0);
	/* call	UpdateMobile */
	CALLF(updatemobile, 0);
	/* call	SortSlope */
	CALL(sortslope, 0);
	// 0 ;* if lead vehicle and above ground then check bridge ok
	/* test	LeadVehicle,1 */
	TEST(leadvehicle, 1);
	/* jz	@F */
	if (!(leadvehicle & 1)) {goto dummylabel5;}
	/* cmp	WORD PTR _VP_ZFT_LO[si],0 */
	CMP(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_zft)), 0);
	/* je	@F */
	if ((dw)(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_zft))) == (dw)(0)) {goto dummylabel5;}
	/* call	CheckBridge */
	CALL(checkbridge, 0);
dummylabel5:
	// 4411 
	/* @@:		jmp	UpdateNext */
	goto updatenext;
	// 0 ;----------------------
	// 0 ;* satisfied route node
	// 0 ;----------------------
	// 0 ;* delete mobile (need to re-establish position)
overshoot:
	// 4413 
	/* Overshoot:	call	DeleteMobile */
	CALLF(deletemobile, 0);
	// 0 ;* point to next node
	/* mov	di,_VEH_NODE_PTR[si] */
	di = m2c::getdata(*(dw*)(((db*)&((vehicle*)raddr(ds,(6+18)+si))->veh_node_ptr)));
	/* test	ROUTE_ATTR[di],RN_LINK	;link back to first node? */
	TEST(((route_node*)raddr(ds,di))->route_attr, 0x2);
	/* jz	@F			;no -> */
	if (!(((route_node*)raddr(ds,di))->route_attr & 0x2)) {goto dummylabel6;}
	/* mov	di,RoutePtr */
	di = routeptr;
	/* mov	_VEH_EVENT[si],0	;reset event count */
	m2c::setdata(&(((vehicle*)raddr(ds,(6+18)+si))->veh_event), m2c::getdata(0));
	/* jmp	SetNodePtr */
	goto setnodeptr;
dummylabel6:
	// 4415 
	/* @@:		add	di,ROUTE_REC_SIZE */
	ADD(di, 14);
	/* inc	_VEH_EVENT[si]		;inc event count */
	INC(((vehicle*)raddr(ds,(6+18)+si))->veh_event);
setnodeptr:
	// 4417 
	/* SetNodePtr:	mov	_VEH_NODE_PTR[si],di */
	m2c::setdata(&(*(dw*)(((db*)&((vehicle*)raddr(ds,(6+18)+si))->veh_node_ptr))), m2c::getdata(di));
	// 0 ;* check for upslope / down slope
	/* test	ROUTE_ATTR[di],RN_UPSLOPE	;upslope? */
	TEST(((route_node*)raddr(ds,di))->route_attr, 0x10);
	/* jz	@F	 			;no -> */
	if (!(((route_node*)raddr(ds,di))->route_attr & 0x10)) {goto dummylabel7;}
	/* mov	WORD PTR _VP_PITCH[si],PITCH_UP */
	m2c::setdata(&(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_pitch))), m2c::getdata(3));
	/* mov	MOB_TYPE[si],OTYPE_MOBILE4	;mobile on bridge */
	m2c::setdata(&(((mobile*)raddr(ds,si))->mob_type), m2c::getdata(8));
	/* jmp	SlopeOk */
	goto slopeok;
dummylabel7:
	// 4419 
	/* @@:		test	ROUTE_ATTR[di],RN_DNSLOPE	;downslope? */
	TEST(((route_node*)raddr(ds,di))->route_attr, 0x20);
	/* jz	SlopeOk				;no -> */
	if (!(((route_node*)raddr(ds,di))->route_attr & 0x20)) {goto slopeok;}
	/* mov	_VP_PITCH[si],PITCH_DN */
	m2c::setdata(&(*(db*)&((viewpoint*)raddr(ds,(6)+si))->vp_pitch), m2c::getdata(512-3));
	// 0 ;* if lead vehicle then
	// 0 ;*    set convoy aiming speed
	// 0 ;*    if delay required then
	// 0 ;*       set delay
	// 0 ;*    endif
	// 0 ;*    set event
	// 0 ;* endif
slopeok:
	// 4421 
	/* SlopeOk:	test	LeadVehicle,1	;leader? */
	TEST(leadvehicle, 1);
	/* jz	SkipLeader	;no -> */
	if (!(leadvehicle & 1)) {goto skipleader;}
	/* mov	bx,ConvoyPtr */
	bx = convoyptr;
	/* mov	ah,ROUTE_SPEED[di]	;aiming speed * 256 */
	ah = m2c::getdata(((route_node*)raddr(ds,di))->route_speed);
	/* xor	al,al */
	XOR(al, al);
	/* mov	CNVY_AIM_SPEED[bx],ax */
	m2c::setdata(&(*(dw*)(((db*)&((convoy*)raddr(ds,bx))->cnvy_aim_speed))), m2c::getdata(ax));
	/* test	ROUTE_ATTR[di],RN_DELAY	;wait for delay period? */
	TEST(((route_node*)raddr(ds,di))->route_attr, 0x8);
	/* jz	@F			;no -> */
	if (!(((route_node*)raddr(ds,di))->route_attr & 0x8)) {goto dummylabel8;}
	/* mov	CNVY_DELAY[bx],DLY_AFTER_EVENT */
	m2c::setdata(&(*(dw*)(((db*)&((convoy*)raddr(ds,bx))->cnvy_delay))), m2c::getdata(30*100));
dummylabel8:
	// 4423 
	/* @@:		mov	al,ROUTE_DRONE[di] */
	al = m2c::getdata(((route_node*)raddr(ds,di))->route_drone);
	/* mov	CNVY_DRONE[bx],al */
	m2c::setdata(&(((convoy*)raddr(ds,bx))->cnvy_drone), m2c::getdata(al));
	/* mov	al,ROUTE_EVENT[di] */
	al = m2c::getdata(((route_node*)raddr(ds,di))->route_event);
	/* mov	CNVY_EVENT[bx],al */
	m2c::setdata(&(((convoy*)raddr(ds,bx))->cnvy_event), m2c::getdata(al));
	// 0 ;----------------------------------------------------------------------------
	// 0 ;* When a vehicle passes a route node, the vehicle's position needs to be
	// 0 ;* re-calculated using the node as a datum. This is to reduce errors. The
	// 0 ;* overshoot distance must be taken into account.
	// 0 ;----------------------------------------------------------------------------
	// 0 ;* overshoot dist = dist moved - dist to go
skipleader:
	// 4425 
	/* SkipLeader:	mov	dx,Dist */
	dx = dist;
	/* mov	ax,DistFine */
	ax = distfine;
	/* sub	ax,_VEH_DIST_FINE[si] */
	SUB(ax, *(dw*)(((db*)&((vehicle*)raddr(ds,(6+18)+si))->veh_dist_fine)));
	/* sbb	dx,_VEH_DIST[si] */
	SBB(dx, *(dw*)(((db*)&((vehicle*)raddr(ds,(6+18)+si))->veh_dist)));
	// 0 ;* fetch dist to next node
	/* mov	cx,ROUTE_DIST[di] */
	cx = m2c::getdata(*(dw*)(((db*)&((route_node*)raddr(ds,di))->route_dist)));
	/* xor	bx,bx */
	XOR(bx, bx);
	// 0 ;* dist to go = node dist - overshoot dist
	/* sub	bx,ax */
	SUB(bx, ax);
	/* sbb	cx,dx */
	SBB(cx, dx);
	/* mov	_VEH_DIST[si],cx */
	m2c::setdata(&(*(dw*)(((db*)&((vehicle*)raddr(ds,(6+18)+si))->veh_dist))), m2c::getdata(cx));
	/* mov	_VEH_DIST_FINE[si],bx */
	m2c::setdata(&(*(dw*)(((db*)&((vehicle*)raddr(ds,(6+18)+si))->veh_dist_fine))), m2c::getdata(bx));
	/* xchg	al,dh	;/256 retaining lsb in dh */
	XCHG(al, dh);
	/* xchg	al,dl */
	XCHG(al, dl);
	/* xchg	al,ah */
	XCHG(al, ah);
	/* shl	dh,1	;extract 1/2 bit */
	SHL(dh, 1);
	/* mov	dh,0 */
	dh = 0;
	/* adc	ax,0	;round up */
	ADC(ax, 0);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;ax = overshoot dist * 256
	/* push	ax */
	PUSH(ax);
	// 0 ;* sort new heading
	/* mov	ax,ROUTE_DIR[di] */
	ax = m2c::getdata(*(dw*)(((db*)&((route_node*)raddr(ds,di))->route_dir)));
	/* mov	_VP_HDG[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_hdg))), m2c::getdata(ax));
	// 0 ;* place vehicle at route node (datum)
	/* xor	ah,ah */
	XOR(ah, ah);
	/* mov	al,ROUTE_XSEC[di] */
	al = m2c::getdata(((route_node*)raddr(ds,di))->route_xsec);
	/* mov	_VP_XSEC[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_xsec))), m2c::getdata(ax));
	/* mov	al,ROUTE_YSEC[di] */
	al = m2c::getdata(((route_node*)raddr(ds,di))->route_ysec);
	/* mov	_VP_YSEC[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_ysec))), m2c::getdata(ax));
	/* mov	ax,ROUTE_XFT[di] */
	ax = m2c::getdata(*(dw*)(((db*)&((route_node*)raddr(ds,di))->route_xft)));
	/* mov	_VP_XFT[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_xft))), m2c::getdata(ax));
	/* mov	ax,ROUTE_YFT[di] */
	ax = m2c::getdata(*(dw*)(((db*)&((route_node*)raddr(ds,di))->route_yft)));
	/* mov	_VP_YFT[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_yft))), m2c::getdata(ax));
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	_VEH_XFINE[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((vehicle*)raddr(ds,(6+18)+si))->veh_xfine))), m2c::getdata(ax));
	/* mov	_VEH_YFINE[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((vehicle*)raddr(ds,(6+18)+si))->veh_yfine))), m2c::getdata(ax));
	// 0 ;* recreate mobile at route node
	/* call	CreateMobile */
	CALLF(createmobile, 0);
	// 0 ;* compensate for overshoot
	/* pop	ax */
	POP(ax);
	/* call	CalcDXYZ */
	CALL(_group1, m2c::kcalcdxyz);
	/* call	UpdateMobile */
	CALLF(updatemobile, 0);
	/* call	SortSlope */
	CALL(sortslope, 0);
updatenext:
	// 4427 
	/* UpdateNext:	mov	LeadVehicle,0 */
	leadvehicle = 0;
skipupdate:
	// 4429 
	/* SkipUpdate:	add	si,NEXT_VEHICLE */
	ADD(si, 6+18+16);
	/* dec	NumVehicles */
	DEC(numvehicles);
	/* jz	__m2c_macrolocal_9_skip */
	if (numvehicles == 0) {goto __m2c_macrolocal_9_skip;}
	/* jmp	UpdateLoop */
	goto updateloop;
__m2c_macrolocal_9_skip:
	// 4431 
	// 0 ;-----------------------
	// 0 ;* check for stop convoy (only stop convoy after updating all vehicles)
	// 0 ;-----------------------
	/* test	StopConvoy,1 */
	TEST(stopconvoy, 1);
	/* jz	ExitUpdate */
	if (!(stopconvoy & 1)) {goto exitupdate;}
	/* mov	si,ConvoyPtr */
	si = convoyptr;
	/* mov	[si].CNVY_ACTIVE,0 */
	m2c::setdata(&(*((db*)((db*)&((convoy*)raddr(ds,si))->cnvy_active))), m2c::getdata(0));
	/* mov	[si].CNVY_SPEED,0 */
	m2c::setdata(&(*((dw*)((db*)&((convoy*)raddr(ds,si))->cnvy_speed))), m2c::getdata(0));
	/* mov	[si].CNVY_AIM_SPEED,0 */
	m2c::setdata(&(*((dw*)((db*)&((convoy*)raddr(ds,si))->cnvy_aim_speed))), m2c::getdata(0));
exitupdate:
	// 4433 
	/* ExitUpdate:	ret */
	RETN(0);
dronecode_0_proc:
	// 2571 
calcdxyz:
	// 4435 
	// 0 ;* note: Returns via CalcDXYZwrtT
	/* mov	di,32767	;frame time = 1 sec (no effect) */
	di = 32767;
	/* jmp	IntoCalcDXYZ */
	goto intocalcdxyz;
	// 0 ;* CalcDXYZwrtT - calc delta x, y, z wrt time (speed)
	// 0 ;*
	// 0 ;* pass: ax = speed (ft/sec * 256)
	// 0 ;*       si -> MOBILE + VIEWPOINT + VEHICLE compound data block
	// 0 ;* ret : ax = delta xft, _VEH_XFINE[si]
	// 0 ;*       bx = delta yft, _VEH_YFINE[si]
	// 0 ;*       cx = delta zft, _VEH_ZFINE[si]
	// 0 ;* kill: dx, di, bp, flags
	// 0 ;*
	// 0 ;* note: Pre-calculated values for cos(pitch) and sin(pitch) are used, instead
	// 0 ;*       of using standard SinTable[] and CosTable[] values, as greater accuracy
	// 0 ;*       is required.
calcdxyzwrtt:
	// 2587 
	/* mov	di,DeltaTime */
	di = deltatime;
intocalcdxyz:
	// 4437 
	// 0 ;<<<<< from CalcDXYZ <<<<<
	/* mov	cx,ax		;store speed */
	cx = ax;
	// 0 ;* calc speed * cos(pitch) wrt vehicle type
	/* cmp	WORD PTR _VP_PITCH[si],0	;any pitch? */
	CMP(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_pitch)), 0);
	/* je	@F	 		     	;no -> */
	if ((dw)(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_pitch))) == (dw)(0)) {goto dummylabel9;}
	/* mov	bx,VehicleType */
	bx = vehicletype;
	/* mov	dx,CosSlope[bx] */
	dx = *(dw*)(((db*)&cosslope)+bx);
	/* imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	// 0 ;speed * cos(pitch)
dummylabel9:
	// 4439 
	/* @@:		mov	bp,ax */
	bp = ax;
	// 0 ;* delta xft = speed * cos(pitch) * sin(hdg) * DeltaTime / 256
	/* mov	bx,_VP_HDG[si] */
	bx = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_hdg)));
	/* and	bx,001ffh */
	AND(bx, 0x001ff);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* mov	ax,SinTable[bx] */
	ax = *(dw*)(((db*)&sintable)+bx);
	/* mov	bx,CosTable[bx] */
	bx = *(dw*)(((db*)&costable)+bx);
	// 0 ;ax = sin(hdg), bx = cos(hdg)
/* m2c-phantom removed: 	R(ax = *(dw*)(((db*)&sintable)+bx););	// 2614 mov	ax,SinTable[bx] */
/* m2c-phantom removed: 	R(bx = *(dw*)(((db*)&costable)+bx););	// 2615 mov	bx,CosTable[bx] */
	/* imul	bp */
	IMUL1_2(bp);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	// 0 ;speed * cos(pitch) * sin(hdg)
	/* imul	di */
	IMUL1_2(di);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	// 0 ;speed * cos(pitch) * sin(hdg) * DeltaTime
	/* cwd			;align for xft, xfine */
	CWD;
	/* mov	dl,ah */
	dl = ah;
	/* mov	ah,al */
	ah = al;
	/* xor	al,al */
	XOR(al, al);
	/* add	_VEH_XFINE[si],ax */
	ADD(*(dw*)(((db*)&((vehicle*)raddr(ds,(6+18)+si))->veh_xfine)), ax);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,bp		;ax = speed * cos(pitch) */
	ax = bp;
	/* mov	bp,dx		;bp = delta xft */
	bp = dx;
	// 0 ;* delta yft = speed * cos(pitch) * cos(hdg) * DeltaTime / 256
	/* imul	bx */
	IMUL1_2(bx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	// 0 ;speed * cos(pitch) * cos(hdg)
	/* imul	di */
	IMUL1_2(di);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	// 0 ;speed * cos(pitch) * cos(hdg) * DeltaTime
	/* cwd			;align for yft, yfine */
	CWD;
	/* mov	dl,ah */
	dl = ah;
	/* mov	ah,al */
	ah = al;
	/* xor	al,al */
	XOR(al, al);
	/* add	_VEH_YFINE[si],ax */
	ADD(*(dw*)(((db*)&((vehicle*)raddr(ds,(6+18)+si))->veh_yfine)), ax);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,cx		;ax = speed */
	ax = cx;
	/* mov	cx,dx		;cx = delta yft */
	cx = dx;
	// 0 ;* delta zft = speed * sin(pitch) * DeltaTime / 256
	/* xor	dx,dx		;assume delta zft = 0 */
	XOR(dx, dx);
	/* cmp	WORD PTR _VP_PITCH[si],0	;any pitch? */
	CMP(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_pitch)), 0);
	/* je	SkipZCalc		     	;no -> */
	if ((dw)(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_pitch))) == (dw)(0)) {goto skipzcalc;}
	/* mov	bx,VehicleType */
	bx = vehicletype;
	/* mov	dx,SinSlope[bx] */
	dx = *(dw*)(((db*)&sinslope)+bx);
	/* cmp	WORD PTR _VP_PITCH[si],PITCH_UP	;upslope? */
	CMP(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_pitch)), 3);
	/* je	@F	 	     		;yes -> */
	if ((dw)(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_pitch))) == (dw)(3)) {goto dummylabel10;}
	/* neg	dx */
	NEG(dx);
dummylabel10:
	// 4441 
	/* @@:		imul	dx */
	IMUL1_2(dx);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	// 0 ;speed * sin(pitch)
	/* imul	di */
	IMUL1_2(di);
	/* shl	ax,1		;*2 */
	SHL(ax, 1);
	/* rcl	dx,1 */
	RCL(dx, 1);
	/* shl	ax,1		;1/2 bit round up */
	SHL(ax, 1);
	/* adc	dx,0 */
	ADC(dx, 0);
	/* mov	ax,dx */
	ax = dx;
	// 0 ;speed * sin(pitch) * DeltaTime
	/* cwd			;align for zft, zfine */
	CWD;
	/* mov	dl,ah */
	dl = ah;
	/* mov	ah,al */
	ah = al;
	/* xor	al,al */
	XOR(al, al);
	/* add	_VEH_ZFINE[si],ax */
	ADD(*(dw*)(((db*)&((vehicle*)raddr(ds,(6+18)+si))->veh_zfine)), ax);
	/* adc	dx,0 */
	ADC(dx, 0);
	// 0 ;* shuffle return values
	// 0 ;* bp = delta xft
	// 0 ;* cx = delta yft
	// 0 ;* dx = delta zft
skipzcalc:
	// 4443 
	/* SkipZCalc:	mov	ax,bp		;ax = delta xft */
	ax = bp;
	/* mov	bx,cx		;bx = delta yft */
	bx = cx;
	/* mov	cx,dx		;cx = delta zft */
	cx = dx;
	/* ret */
	RETN(0);
sortslope:
	// 2711 
	// 0 ;* if upslope then
	// 0 ;*    if zft >= BRIDGE_HT
	// 0 ;*       zft = BRIDGE_HT
	// 0 ;*       zfine = 0
	// 0 ;*       pitch = 0
	// 0 ;*    endif
	// 0 ;* endif
edummylabel5:
	// 4445 
	/* cmp	WORD PTR _VP_PITCH[si],PITCH_UP	;upslope? */
	CMP(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_pitch)), 3);
	/* jne	@F	 	     		;no -> */
	if ((dw)(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_pitch))) != (dw)(3)) {goto dummylabel11;}
	/* cmp	WORD PTR _VP_ZFT_LO[si],BRIDGE_HT	;zft >= BRIDGE_HT? */
	CMP(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_zft)), 32);
	/* jb	ExitSlope				;no -> */
	if ((dw)(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_zft))) < (dw)(32)) {goto exitslope;}
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	WORD PTR _VP_ZFT_LO[si],BRIDGE_HT */
	m2c::setdata(&(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_zft))), m2c::getdata(32));
	/* mov	_VEH_ZFINE[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((vehicle*)raddr(ds,(6+18)+si))->veh_zfine))), m2c::getdata(ax));
	/* mov	_VP_PITCH[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_pitch))), m2c::getdata(ax));
	/* jmp	ExitSlope */
	goto exitslope;
	// 0 ;* if downslope then
	// 0 ;*    if zft < 0 then
	// 0 ;*       zft = 0
	// 0 ;*       zfine = 0
	// 0 ;*       pitch = 0
	// 0 ;*    endif
	// 0 ;* endif
dummylabel11:
	// 4447 
	/* @@:		cmp	_VP_PITCH[si],PITCH_DN	;downslope? */
	CMP(*(db*)&((viewpoint*)raddr(ds,(6)+si))->vp_pitch, 512-3);
	/* jne	ExitSlope     		;no -> */
	if ((db)(*(db*)&((viewpoint*)raddr(ds,(6)+si))->vp_pitch) != (db)(512-3)) {goto exitslope;}
	/* cmp	WORD PTR _VP_ZFT_HI[si],0	;zft < 0? */
	CMP(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6+(2))+si))->vp_zft)), 0);
	/* jns	ExitSlope			;no -> */
	CMP(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6+(2))+si))->vp_zft)), 0);
	if (!SF) {goto exitslope;}
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	WORD PTR _VP_ZFT_HI[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6+(2))+si))->vp_zft))), m2c::getdata(ax));
	/* mov	WORD PTR _VP_ZFT_LO[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_zft))), m2c::getdata(ax));
	/* mov	_VEH_ZFINE[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((vehicle*)raddr(ds,(6+18)+si))->veh_zfine))), m2c::getdata(ax));
	/* mov	_VP_PITCH[si],ax */
	m2c::setdata(&(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_pitch))), m2c::getdata(ax));
	/* mov	MOB_TYPE[si],OTYPE_MOBILE1	;skew only mobile */
	m2c::setdata(&(((mobile*)raddr(ds,si))->mob_type), m2c::getdata(2));
exitslope:
	// 4449 
	/* ExitSlope:	ret */
	RETN(0);
checkbridge:
	// 2765 
	// 0 ;----------------------
	// 0 ;* ensure on active map
	// 0 ;----------------------
edummylabel6:
	// 4451 
	/* cmp	WORD PTR _VP_XSEC[si],31 */
	CMP(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_xsec)), 31);
	/* jbe	__m2c_macrolocal_18_skip */
	if ((dw)(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_xsec))) <= (dw)(31)) {goto __m2c_macrolocal_18_skip;}
	/* jmp	ExitCheck */
	goto exitcheck;
__m2c_macrolocal_18_skip:
	// 4453 
	/* cmp	WORD PTR _VP_YSEC[si],31 */
	CMP(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_ysec)), 31);
	/* jbe	__m2c_macrolocal_19_skip */
	if ((dw)(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_ysec))) <= (dw)(31)) {goto __m2c_macrolocal_19_skip;}
	/* jmp	ExitCheck */
	goto exitcheck;
__m2c_macrolocal_19_skip:
	// 4455 
	// 0 ;----------------------------
	// 0 ;* get ground object list ptr (if occupied sector)
	// 0 ;----------------------------
	// 0 ;* calc map index = x sec + y sec * 32
	/* mov	bp,_VP_YSEC[si] */
	bp = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_ysec)));
	/* shl	bp,1 */
	SHL(bp, 1);
	/* shl	bp,1 */
	SHL(bp, 1);
	/* shl	bp,1 */
	SHL(bp, 1);
	/* shl	bp,1 */
	SHL(bp, 1);
	/* shl	bp,1 */
	SHL(bp, 1);
	/* add	bp,_VP_XSEC[si] */
	ADD(bp, *(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_xsec)));
	// 0 ;* test for occupied sector
	/* mov	al,SectorLayer1[bp] */
	al = *((&sectorlayer1)+bp);
	/* test	al,al */
	TEST(al, al);
	/* jnz	__m2c_macrolocal_20_skip */
	if ((al & al) != 0) {goto __m2c_macrolocal_20_skip;}
	/* jmp	ExitCheck */
	goto exitcheck;
__m2c_macrolocal_20_skip:
	// 4457 
	// 0 ;* calc ptr to sector data record
	/* mov	bl,al */
	bl = al;
	/* xor	bh,bh */
	XOR(bh, bh);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* shl	bx,1 */
	SHL(bx, 1);
	/* add	bx,OFFSET SectorTable */
	ADD(bx, m2c::near_offset_external(sectortable));
	// m2c-dedup: removed duplicate expansion row: R(ADD(bx, m2c::near_offset_external(sectortable)));	// 2807 						add	bx,OFFSET SectorTable
	// 0 ;* get ptr to ground object list
	/* mov	di,[bx].SEC_OBJ_PTR */
	di = m2c::getdata(*((dw*)((db*)&((sectordata*)raddr(ds,bx))->sec_obj_ptr)));
	// 0 ;* calc heading index
	/* mov	bx,_VP_HDG[si] */
	bx = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_hdg)));
	/* mov	cl,7 */
	cl = 7;
	/* shr	bx,cl		;0 .. 3 */
	SHR(bx, cl);
	/* shl	bx,1		;0 .. 6 step 2 */
	SHL(bx, 1);
	// 0 ;* xgrid = (xft + 8192) / 256
	/* mov	ax,_VP_XFT[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_xft)));
	/* add	ax,8192 */
	ADD(ax, 8192);
	/* mov	dl,ah		;dl = xgrid */
	dl = ah;
	// 0 ;* ygrid = (yft + 8192) / 256
	/* mov	ax,_VP_YFT[si] */
	ax = m2c::getdata(*(dw*)(((db*)&((viewpoint*)raddr(ds,(6)+si))->vp_yft)));
	/* add	ax,8192 */
	ADD(ax, 8192);
	/* mov	dh,ah		;dh = ygrid */
	dh = ah;
	// 0 ;--------------------------------------------
	// 0 ;* scan ground object list for damaged bridge
	// 0 ;--------------------------------------------
	/* mov	ax,SECDATA1 */
	ax = seg_offset(secdata1);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	// 0 ;---------------------------
gndobjloop:
	// 4459 
	// 0 ;---------------------------
	// 0 ;* check for end of list (-1 terminator)
	/* cmp	ES:[di].GND_NUM,-1 */
	CMP(*((db*)((db*)&((gndobj*)raddr(es,di))->gnd_num)), -1);
	/* je	ExitGndObj */
	if ((db)(*((db*)((db*)&((gndobj*)raddr(es,di))->gnd_num))) == (db)(-1)) {goto exitgndobj;}
	// 0 ;* check object dead
	/* test	ES:[di].GND_ANIM,OBJECT_DEAD */
	TEST(*((db*)((db*)&((gndobj*)raddr(es,di))->gnd_anim)), 0x80);
	/* jz	NextGndObj */
	if (!(*((db*)((db*)&((gndobj*)raddr(es,di))->gnd_anim)) & 0x80)) {goto nextgndobj;}
	// 0 ;* check object ahead of vehicle (wrt heading)
__disp=*(dw*)(((db*)&checkswitch)+bx);
	/* jmp	CheckSwitch[bx] */
	J(return __dispatch_call_ext(__disp, _state));
checkhdgn:
	// 4461 
	/* CheckHdgN:	cmp	ES:[di].GND_XGRID,dl	;obj xgrid = veh xgrid? */
	CMP(*((db*)((db*)&((gndobj*)raddr(es,di))->gnd_xgrid)), dl);
	/* jne	NextGndObj		;no -> */
	if ((db)(*((db*)((db*)&((gndobj*)raddr(es,di))->gnd_xgrid))) != (db)(dl)) {goto nextgndobj;}
	/* cmp	ES:[di].GND_YGRID,dh	;obj ygrid >= veh ygrid? */
	CMP(*((db*)((db*)&((gndobj*)raddr(es,di))->gnd_ygrid)), dh);
	/* jae	ContGndObj		;yes -> */
	if ((db)(*((db*)((db*)&((gndobj*)raddr(es,di))->gnd_ygrid))) >= (db)(dh)) {goto contgndobj;}
	/* jmp	NextGndObj */
	goto nextgndobj;
checkhdge:
	// 4463 
	/* CheckHdgE:	cmp	ES:[di].GND_YGRID,dh	;obj ygrid = veh ygrid? */
	CMP(*((db*)((db*)&((gndobj*)raddr(es,di))->gnd_ygrid)), dh);
	/* jne	NextGndObj		;no -> */
	if ((db)(*((db*)((db*)&((gndobj*)raddr(es,di))->gnd_ygrid))) != (db)(dh)) {goto nextgndobj;}
	/* cmp	ES:[di].GND_XGRID,dl	;obj xgrid >= veh xgrid? */
	CMP(*((db*)((db*)&((gndobj*)raddr(es,di))->gnd_xgrid)), dl);
	/* jae	ContGndObj		;yes -> */
	if ((db)(*((db*)((db*)&((gndobj*)raddr(es,di))->gnd_xgrid))) >= (db)(dl)) {goto contgndobj;}
	/* jmp	NextGndObj */
	goto nextgndobj;
checkhdgs:
	// 4465 
	/* CheckHdgS:	cmp	ES:[di].GND_XGRID,dl	;obj xgrid = veh xgrid? */
	CMP(*((db*)((db*)&((gndobj*)raddr(es,di))->gnd_xgrid)), dl);
	/* jne	NextGndObj		;no -> */
	if ((db)(*((db*)((db*)&((gndobj*)raddr(es,di))->gnd_xgrid))) != (db)(dl)) {goto nextgndobj;}
	/* cmp	ES:[di].GND_YGRID,dh	;obj ygrid <= veh ygrid? */
	CMP(*((db*)((db*)&((gndobj*)raddr(es,di))->gnd_ygrid)), dh);
	/* jbe	ContGndObj		;yes -> */
	if ((db)(*((db*)((db*)&((gndobj*)raddr(es,di))->gnd_ygrid))) <= (db)(dh)) {goto contgndobj;}
	/* jmp	NextGndObj */
	goto nextgndobj;
checkhdgw:
	// 4467 
	/* CheckHdgW:	cmp	ES:[di].GND_YGRID,dh	;obj ygrid = veh ygrid? */
	CMP(*((db*)((db*)&((gndobj*)raddr(es,di))->gnd_ygrid)), dh);
	/* jne	NextGndObj		;no -> */
	if ((db)(*((db*)((db*)&((gndobj*)raddr(es,di))->gnd_ygrid))) != (db)(dh)) {goto nextgndobj;}
	/* cmp	ES:[di].GND_XGRID,dl	;obj xgrid <= veh xgrid? */
	CMP(*((db*)((db*)&((gndobj*)raddr(es,di))->gnd_xgrid)), dl);
	/* jbe	ContGndObj		;yes -> */
	if ((db)(*((db*)((db*)&((gndobj*)raddr(es,di))->gnd_xgrid))) <= (db)(dl)) {goto contgndobj;}
	/* jmp	NextGndObj */
	goto nextgndobj;
	// 0 ;* check if destroyed bridge object
contgndobj:
	// 4469 
	/* ContGndObj:	mov	al,ES:[di].GND_NUM */
	al = m2c::getdata(*((db*)((db*)&((gndobj*)raddr(es,di))->gnd_num)));
	/* cmp	al,GND_EMBCRATER */
	CMP(al, 104);
	/* je	@F */
	if ((db)(al) == (db)(104)) {goto dummylabel12;}
	/* cmp	al,GND_RBEWD */
	CMP(al, 100);
	/* je	@F */
	if ((db)(al) == (db)(100)) {goto dummylabel12;}
	/* cmp	al,GND_RBNSD */
	CMP(al, 101);
	/* je	@F */
	if ((db)(al) == (db)(101)) {goto dummylabel12;}
	/* cmp	al,GND_RLBEWD */
	CMP(al, 102);
	/* je	@F */
	if ((db)(al) == (db)(102)) {goto dummylabel12;}
	/* cmp	al,GND_RLBNSD */
	CMP(al, 103);
	/* je	@F */
	if ((db)(al) == (db)(103)) {goto dummylabel12;}
	/* jmp	NextGndObj */
	goto nextgndobj;
	// 0 ;* stop convoy (damaged bridge ahead)
dummylabel12:
	// 4471 
	/* @@:		mov	StopConvoy,1 */
	stopconvoy = 1;
	/* jmp	ExitGndObj */
	goto exitgndobj;
nextgndobj:
	// 4473 
	/* NextGndObj:	add	di,GND_REC_SIZE */
	ADD(di, 4);
	/* jmp	GndObjLoop */
	goto gndobjloop;
exitgndobj:
	// 4475 
	/* ExitGndObj:	mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
exitcheck:
	// 4477 
	/* ExitCheck:	ret */
	RETN(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::k__m2c_macrolocal_18_skip: 	goto __m2c_macrolocal_18_skip;
        case m2c::k__m2c_macrolocal_19_skip: 	goto __m2c_macrolocal_19_skip;
        case m2c::k__m2c_macrolocal_1_skip: 	goto __m2c_macrolocal_1_skip;
        case m2c::k__m2c_macrolocal_20_skip: 	goto __m2c_macrolocal_20_skip;
        case m2c::k__m2c_macrolocal_5_skip: 	goto __m2c_macrolocal_5_skip;
        case m2c::k__m2c_macrolocal_9_skip: 	goto __m2c_macrolocal_9_skip;
        case m2c::kaccelerate: 	goto accelerate;
        case m2c::kcalcdxyz: 	goto calcdxyz;
        case m2c::kcalcdxyzwrtt: 	goto calcdxyzwrtt;
        case m2c::kcheckbridge: 	goto checkbridge;
        case m2c::kcheckhdge: 	goto checkhdge;
        case m2c::kcheckhdgn: 	goto checkhdgn;
        case m2c::kcheckhdgs: 	goto checkhdgs;
        case m2c::kcheckhdgw: 	goto checkhdgw;
        case m2c::kcontgndobj: 	goto contgndobj;
        case m2c::kcontspeed: 	goto contspeed;
        case m2c::kdecelerate: 	goto decelerate;
        case m2c::kdronecode_0_proc: 	goto dronecode_0_proc;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel10: 	goto dummylabel10;
        case m2c::kdummylabel11: 	goto dummylabel11;
        case m2c::kdummylabel12: 	goto dummylabel12;
        case m2c::kdummylabel2: 	goto dummylabel2;
        case m2c::kdummylabel3: 	goto dummylabel3;
        case m2c::kdummylabel4: 	goto dummylabel4;
        case m2c::kdummylabel5: 	goto dummylabel5;
        case m2c::kdummylabel6: 	goto dummylabel6;
        case m2c::kdummylabel7: 	goto dummylabel7;
        case m2c::kdummylabel8: 	goto dummylabel8;
        case m2c::kdummylabel9: 	goto dummylabel9;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kedummylabel5: 	goto edummylabel5;
        case m2c::kedummylabel6: 	goto edummylabel6;
        case m2c::kexitcheck: 	goto exitcheck;
        case m2c::kexitgndobj: 	goto exitgndobj;
        case m2c::kexitinit: 	goto exitinit;
        case m2c::kexitslope: 	goto exitslope;
        case m2c::kexitupdate: 	goto exitupdate;
        case m2c::kgndobjloop: 	goto gndobjloop;
        case m2c::kinitconvoys: 	goto initconvoys;
        case m2c::kinitloop: 	goto initloop;
        case m2c::kinitnext: 	goto initnext;
        case m2c::kinitoneconvoy: 	goto initoneconvoy;
        case m2c::kintocalcdxyz: 	goto intocalcdxyz;
        case m2c::klampsok: 	goto lampsok;
        case m2c::knextgndobj: 	goto nextgndobj;
        case m2c::kovershoot: 	goto overshoot;
        case m2c::ksetnodeptr: 	goto setnodeptr;
        case m2c::ksetspeed: 	goto setspeed;
        case m2c::kskipleader: 	goto skipleader;
        case m2c::kskipupdate: 	goto skipupdate;
        case m2c::kskipzcalc: 	goto skipzcalc;
        case m2c::kslopeok: 	goto slopeok;
        case m2c::ksortdelay: 	goto sortdelay;
        case m2c::ksortslope: 	goto sortslope;
        case m2c::ksortspeed: 	goto sortspeed;
        case m2c::kupdateconvoys: 	goto updateconvoys;
        case m2c::kupdateloop: 	goto updateloop;
        case m2c::kupdatenext: 	goto updatenext;
        case m2c::kupdateoneconvoy: 	goto updateoneconvoy;
        default: return __dispatch_call(__disp, _state);
    };
}

