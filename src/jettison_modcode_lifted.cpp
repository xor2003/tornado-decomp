/* THIS IS GENERATED FILE */

        
#include "jettison.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
jetexttanks:
	// 1203 
	/* cmp	Jettison,JET_EXT_TANKS	;already jettisoned? */
	CMP(jettison, 1);
edummylabel1:
	// 4369 
	/* jae	@F			;yes -> */
	if (!CF) {goto dummylabel1;}
	/* call	Jettison1 */
	CALL(_group1, m2c::kjettison1);
	/* mov	Jettison,JET_EXT_TANKS */
	jettison = 1;
dummylabel1:
	// 4371 
	/* @@:		ret */
	RETN(0);
jetextstores:
	// 1218 
	/* cmp	Jettison,JET_EXT_STORES	;already jettisoned? */
	CMP(jettison, 2);
edummylabel2:
	// 4373 
	/* jae	@F		   	;yes -> */
	if (!CF) {goto dummylabel2;}
	/* call	Jettison2 */
	CALL(_group1, m2c::kjettison2);
	/* mov	Jettison,JET_EXT_STORES */
	jettison = 2;
dummylabel2:
	// 4375 
	/* @@:		ret */
	RETN(0);
jetall:
	// 1233 
	/* cmp	Jettison,JET_ALL	;already jettisoned? */
	CMP(jettison, 3);
edummylabel3:
	// 4377 
	/* je	@F			;yes -> */
	if (ZF) {goto dummylabel3;}
	/* call	Jettison3 */
	CALL(jettison3, 0);
	/* mov	Jettison,JET_ALL */
	jettison = 3;
dummylabel3:
	// 4379 
	/* @@:		ret */
	RETN(0);
jettison3:
	// 1252 
	// 0 ;---------------------------
edummylabel4:
	// 4381 
	/* cmp	FuelWt,1000	;less than minimal fuel already? */
	CMP(fuelwt, 1000);
	/* jb	@F		;yes -> */
	if ((dw)(fuelwt) < (dw)(1000)) {goto dummylabel4;}
	/* mov	FuelWt,1000 */
	fuelwt = 1000;
	/* mov	FuelWtFine,0 */
	fuelwtfine = 0;
dummylabel4:
	// 4383 
	/* @@:		mov	ExtStores[EXT_SIDEWINDER],0 */
	*(dw*)(((db*)&extstores)+12) = 0;
	// 0 ;---------------------------
jettison2:
	// 4385 
	// 0 ;external stores + external tanks
	// 0 ;---------------------------
	/* xor	ax,ax */
	XOR(ax, ax);
	/* mov	ExtStores[EXT_GPB1000],ax */
	*(dw*)(((db*)&extstores)+0) = ax;
	/* mov	ExtStores[EXT_RET1000],ax */
	*(dw*)(((db*)&extstores)+2) = ax;
	/* mov	ExtStores[EXT_LGB1000],ax */
	*(dw*)(((db*)&extstores)+4) = ax;
	/* mov	ExtStores[EXT_BL755],ax */
	*(dw*)(((db*)&extstores)+6) = ax;
	/* mov	ExtStores[EXT_JP233],ax */
	*(dw*)(((db*)&extstores)+8) = ax;
	/* mov	ExtStores[EXT_ALARM],ax */
	*(dw*)(((db*)&extstores)+10) = ax;
	/* mov	ExtStores[EXT_SKYFLASH],ax */
	*(dw*)(((db*)&extstores)+14) = ax;
	/* mov	ExtStores[EXT_BOZ100],ax */
	*(dw*)(((db*)&extstores)+16) = ax;
	/* mov	ExtStores[EXT_SKYSHADOW],ax */
	*(dw*)(((db*)&extstores)+18) = ax;
	// 0 ;* clear chaff, flares and ECM (except ADV)
	/* cmp	TornadoType,ADV_TORNADO	;ADV */
	CMP(tornadotype, 2);
	/* je	@F			;yes (internal) -> */
	if ((dw)(tornadotype) == (dw)(2)) {goto dummylabel5;}
	/* mov	ChaffCntr,ax */
	chaffcntr = ax;
	/* mov	FlareCntr,ax */
	flarecntr = ax;
	/* mov	ECMFitted,al */
	ecmfitted = al;
	/* mov	ECMActive,al */
	ecmactive = al;
	// 0 ;* clear all packages
dummylabel5:
	// 4387 
	/* @@:		mov	si,OFFSET Packages */
	si = m2c::near_offset_external(packages);
	/* mov	cx,NUM_PACKAGES */
	cx = 3;
dummylabel6:
	// 4389 
	/* @@:		mov	[si].PACK_WEAP_TYPE,NULL_WEAPON */
	m2c::setdata(&(*((dw*)((db*)&((package*)raddr(ds,si))->pack_weap_type))), m2c::getdata(-1));
	/* add	si,PACK_REC_SIZE */
	ADD(si, 8);
	/* loop	@B */
	LOOP(dummylabel6);
	/* mov	PackagePtr,-1 */
	packageptr = -1;
	// 0 ;* disarm (unless cannon or Sidewinder armed and available)
	/* cmp	ArmMode,ARM_CANNON */
	CMP(armmode, 16);
	/* jne	@F */
	if ((dw)(armmode) != (dw)(16)) {goto dummylabel7;}
	/* cmp	Cannons,0 */
	CMP(cannons, 0);
	/* ja	ArmOk */
	if ((dw)(cannons) > (dw)(0)) {goto armok;}
dummylabel7:
	// 4391 
	/* @@:		cmp	ArmMode,ARM_SIDEWINDER */
	CMP(armmode, 18);
	/* jne	@F */
	if ((dw)(armmode) != (dw)(18)) {goto dummylabel8;}
	/* cmp	ExtStores[EXT_SIDEWINDER],0 */
	CMP(*(dw*)(((db*)&extstores)+12), 0);
	/* ja	ArmOk */
	if ((dw)(*(dw*)(((db*)&extstores)+12)) > (dw)(0)) {goto armok;}
dummylabel8:
	// 4393 
	/* @@:		mov	ArmMode,ARM_OFF */
	armmode = 0;
	/* mov	ax,ARM_CANNON	;assume cannons available */
	ax = 16;
	/* cmp	Cannons,0	;any cannons? */
	CMP(cannons, 0);
	/* ja	@F		;yes -> */
	if ((dw)(cannons) > (dw)(0)) {goto dummylabel9;}
	/* mov	ax,ARM_OFF */
	ax = 0;
dummylabel9:
	// 4395 
	/* @@:		mov	AirArmMode,ax */
	airarmmode = ax;
armok:
	// 4397 
	// 0 ;---------------------------
jettison1:
	// 4399 
	// 0 ;external tanks
	// 0 ;---------------------------
	/* mov	ExtStores[EXT_DROPTANK],0 */
	*(dw*)(((db*)&extstores)+20) = 0;
	/* mov	ax,MAX_ADV_FUEL	;assume ADV */
	ax = max_adv_fuel;
	/* cmp	TornadoType,ADV_TORNADO	;ADV? */
	CMP(tornadotype, 2);
	/* je	@F			;yes -> */
	if ((dw)(tornadotype) == (dw)(2)) {goto dummylabel10;}
	/* mov	ax,MAX_IDS_FUEL */
	ax = max_ids_fuel;
dummylabel10:
	// 4401 
	/* @@:		cmp	FuelWt,ax  	;any external fuel? */
	CMP(fuelwt, ax);
	/* jb	@F	   	;no -> */
	if ((dw)(fuelwt) < (dw)(ax)) {goto dummylabel11;}
	/* mov	FuelWt,ax */
	fuelwt = ax;
	/* mov	FuelWtFine,0 */
	fuelwtfine = 0;
dummylabel11:
	// 4403 
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
                case m2c::karmok: 	goto armok;
        case m2c::kdummylabel1: 	goto dummylabel1;
        case m2c::kdummylabel10: 	goto dummylabel10;
        case m2c::kdummylabel11: 	goto dummylabel11;
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
        case m2c::kjetall: 	goto jetall;
        case m2c::kjetextstores: 	goto jetextstores;
        case m2c::kjetexttanks: 	goto jetexttanks;
        case m2c::kjettison1: 	goto jettison1;
        case m2c::kjettison2: 	goto jettison2;
        case m2c::kjettison3: 	goto jettison3;
        default: return __dispatch_call(__disp, _state);
    };
}

