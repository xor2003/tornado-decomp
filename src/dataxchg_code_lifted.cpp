/* THIS IS GENERATED FILE */

        
#include "dataxchg.h"

                

 static bool _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group1:
    _begin:
loadgamedata:
	// 1841 
	// 0 ;---------------------
	// 0 ;* load game play data
	// 0 ;---------------------
edummylabel1:
	// 4369 
	/* mov	cx,GameDataSize */
	cx = gamedatasize;
	/* mov	dx,OFFSET GamePlayIn */
	dx = m2c::near_offset_external(gameplayin);
	/* mov	di,OFFSET GamePlayData */
	di = m2c::near_offset_external(gameplaydata);
	/* push	WORD PTR GamePlayData	;store data start datum */
	PUSH(*(dw*)(&gameplaydata));
	/* call	LoadFile */
	CALLF(loadfile, 0);
	/* pop	WORD PTR GamePlayData	;restore data start datum */
	POP(*(dw*)(&gameplaydata));
	/* mov	al,SYS_ERR_LD_GAME */
	al = 252;
	/* jnc	__m2c_macrolocal_1_skip */
	if (!CF) {goto __m2c_macrolocal_1_skip;}
	/* jmp	LoadGameError */
	goto loadgameerror;
__m2c_macrolocal_1_skip:
	// 4371 
	// 0 ;----------------
	// 0 ;* load misc data
	// 0 ;----------------
	/* mov	cx,MiscDataSize */
	cx = miscdatasize;
	/* mov	dx,OFFSET MiscDataIn */
	dx = m2c::near_offset_external(miscdatain);
	/* mov	di,OFFSET MiscData */
	di = m2c::near_offset_external(miscdata);
	/* mov	ax,SEG MiscData */
	ax = m2c::segment_of_external(miscdata);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* call	LoadFile */
	CALLF(loadfile, 0);
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	al,SYS_ERR_LD_MISC */
	al = 237;
	/* jnc	__m2c_macrolocal_2_skip */
	if (!CF) {goto __m2c_macrolocal_2_skip;}
	/* jmp	LoadGameError */
	goto loadgameerror;
__m2c_macrolocal_2_skip:
	// 4373 
	// 0 ;-------------------------
	// 0 ;* transfer duplicate data
	// 0 ;-------------------------
	// 0 ;* model
	/* mov	si,OFFSET _M_VIEW */
	si = m2c::near_offset_external(_m_view);
	/* mov	di,OFFSET M_VIEW */
	di = m2c::near_offset_external(m_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 1882 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(si = m2c::near_offset_external(_m_view););	// 1883 						mov	si,OFFSET _M_VIEW */
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(m_view););	// 1884 mov	di,OFFSET M_VIEW */
	// 1885 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* mov	ax,_FuelWt */
	ax = _fuelwt;
	/* mov	FuelWt,ax */
	fuelwt = ax;
	// 0 ;* explore mode
	/* mov	si,OFFSET _EXP_VIEW */
	si = m2c::near_offset_external(_exp_view);
	/* mov	di,OFFSET EXP_VIEW */
	di = m2c::near_offset_external(exp_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 1894 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(si = m2c::near_offset_external(_exp_view););	// 1895 						mov	si,OFFSET _EXP_VIEW */
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(exp_view););	// 1896 mov	di,OFFSET EXP_VIEW */
	// 1897 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* mov	ax,_ExpMapZoom */
	ax = _expmapzoom;
	/* mov	ExpMapZoom,ax */
	expmapzoom = ax;
	// 0 ;* visual
	/* mov	ax,_SecScanCnt1 */
	ax = _secscancnt1;
	/* mov	SecScanCnt1,ax */
	secscancnt1 = ax;
	/* mov	ax,_SecScanOff1 */
	ax = _secscanoff1;
	/* mov	SecScanOff1,ax */
	secscanoff1 = ax;
	/* mov	ax,_SecScanCnt2 */
	ax = _secscancnt2;
	/* mov	SecScanCnt2,ax */
	secscancnt2 = ax;
	/* mov	ax,_SecScanOff2 */
	ax = _secscanoff2;
	/* mov	SecScanOff2,ax */
	secscanoff2 = ax;
	/* mov	ax,WORD PTR _CloudBase */
	ax = *(dw*)(&_cloudbase);
	/* mov	WORD PTR CloudBase,ax */
	*(dw*)(&cloudbase) = ax;
	/* mov	ax,WORD PTR _CloudBase+2 */
	ax = *(dw*)(((db*)&_cloudbase)+2);
	/* mov	WORD PTR CloudBase+2,ax */
	*(dw*)(((db*)&cloudbase)+2) = ax;
	/* mov	ax,_CloudDepth */
	ax = _clouddepth;
	/* mov	CloudDepth,ax */
	clouddepth = ax;
	/* mov	al,_GndTextEnabled */
	al = _gndtextenabled;
	/* mov	GndTextEnabled,al */
	gndtextenabled = al;
	/* mov	al,_TreesEnabled */
	al = _treesenabled;
	/* mov	TreesEnabled,al */
	treesenabled = al;
	/* mov	al,_HillTxtEnabled */
	al = _hilltxtenabled;
	/* mov	HillTextEnabled,al */
	hilltextenabled = al;
	/* mov	al,_CloudsEnabled */
	al = _cloudsenabled;
	/* mov	CloudsEnabled,al */
	cloudsenabled = al;
	/* mov	al,_StarsEnabled */
	al = _starsenabled;
	/* mov	StarsEnabled,al */
	starsenabled = al;
	/* mov	al,_GradEnabled */
	al = _gradenabled;
	/* mov	GradEnabled,al */
	gradenabled = al;
	/* mov	al,_Overcast */
	al = _overcast;
	/* mov	Overcast,al */
	overcast = al;
	/* mov	al,_Fog */
	al = _fog;
	/* mov	Fog,al */
	fog = al;
	/* mov	al,_Night */
	al = _night;
	/* mov	Night,al */
	night = al;
	/* mov	al,_PanelLight */
	al = _panellight;
	/* mov	PanelLight,al */
	panellight = al;
	// 0 ;* CH FlightStick Pro
	/* mov	al,_CHStick */
	al = _chstick;
	/* mov	CHStick,al */
	chstick = al;
	// 0 ;* ThrustMaster FCS
	/* mov	al,_ThrustMaster */
	al = _thrustmaster;
	/* mov	ThrustMaster,al */
	thrustmaster = al;
	/* mov	ax,_TM_MinX */
	ax = _tm_minx;
	/* mov	TM_MinX,ax */
	tm_minx = ax;
	/* mov	ax,_TM_MinY */
	ax = _tm_miny;
	/* mov	TM_MinY,ax */
	tm_miny = ax;
	/* mov	ax,_TM_MidX */
	ax = _tm_midx;
	/* mov	TM_MidX,ax */
	tm_midx = ax;
	/* mov	ax,_TM_MidY */
	ax = _tm_midy;
	/* mov	TM_MidY,ax */
	tm_midy = ax;
	/* mov	ax,_TM_MaxX */
	ax = _tm_maxx;
	/* mov	TM_MaxX,ax */
	tm_maxx = ax;
	/* mov	ax,_TM_MaxY */
	ax = _tm_maxy;
	/* mov	TM_MaxY,ax */
	tm_maxy = ax;
	/* mov	ax,_TM_CoolieCn */
	ax = _tm_cooliecn;
	/* mov	TM_CoolieCn,ax */
	tm_cooliecn = ax;
	/* mov	ax,_TM_CoolieLt */
	ax = _tm_coolielt;
	/* mov	TM_CoolieLt,ax */
	tm_coolielt = ax;
	/* mov	ax,_TM_CoolieDn */
	ax = _tm_cooliedn;
	/* mov	TM_CoolieDn,ax */
	tm_cooliedn = ax;
	/* mov	ax,_TM_CoolieRt */
	ax = _tm_cooliert;
	/* mov	TM_CoolieRt,ax */
	tm_cooliert = ax;
	/* mov	ax,_TM_CoolieUp */
	ax = _tm_coolieup;
	/* mov	TM_CoolieUp,ax */
	tm_coolieup = ax;
	/* clc		;cf = 0 = ok */
	CLC;
	/* ret */
	RETN(0);
loadgameerror:
	// 4375 
	/* LoadGameError:	mov	DieFlag,al */
	dieflag = al;
	/* ret */
	RETN(0);
savegamedata:
	// 1980 
	// 0 ;------------------
	// 0 ;* combine warnings
	// 0 ;------------------
edummylabel2:
	// 4377 
	/* mov	ax,RedWarnings1 */
	ax = redwarnings1;
	/* or	ax,RedWarnings2 */
	OR(ax, redwarnings2);
	/* mov	RedWarnings,ax */
	redwarnings = ax;
	/* mov	ax,AmbWarnings1 */
	ax = ambwarnings1;
	/* or	ax,AmbWarnings2 */
	OR(ax, ambwarnings2);
	/* mov	AmbWarnings,ax */
	ambwarnings = ax;
	// 0 ;-------------------------
	// 0 ;* transfer duplicate data
	// 0 ;-------------------------
	// 0 ;* model
	/* mov	si,OFFSET M_VIEW */
	si = m2c::near_offset_external(m_view);
	/* mov	di,OFFSET _M_VIEW */
	di = m2c::near_offset_external(_m_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 2001 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(si = m2c::near_offset_external(m_view););	// 2002 						mov	si,OFFSET M_VIEW */
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(_m_view););	// 2003 mov	di,OFFSET _M_VIEW */
	// 2004 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* mov	ax,FuelWt */
	ax = fuelwt;
	/* mov	_FuelWt,ax */
	_fuelwt = ax;
	// 0 ;* explore mode
	/* mov	si,OFFSET EXP_VIEW */
	si = m2c::near_offset_external(exp_view);
	/* mov	di,OFFSET _EXP_VIEW */
	di = m2c::near_offset_external(_exp_view);
	/* mov	cx,VIEW_REC_SIZE/2 */
	cx = 18/2;
	// 2013 						rep	movsw
	/* rep	movsw */
	REP MOVSW;
/* m2c-phantom removed: 	R(si = m2c::near_offset_external(exp_view););	// 2014 						mov	si,OFFSET EXP_VIEW */
/* m2c-phantom removed: 	R(di = m2c::near_offset_external(_exp_view););	// 2015 mov	di,OFFSET _EXP_VIEW */
	// 2016 rep	movsw
	/* rep	movsw */
	REP MOVSW;
	/* mov	ax,ExpMapZoom */
	ax = expmapzoom;
	/* mov	_ExpMapZoom,ax */
	_expmapzoom = ax;
	// 0 ;* visual
	/* mov	ax,SecScanCnt1 */
	ax = secscancnt1;
	/* mov	_SecScanCnt1,ax */
	_secscancnt1 = ax;
	/* mov	ax,SecScanOff1 */
	ax = secscanoff1;
	/* mov	_SecScanOff1,ax */
	_secscanoff1 = ax;
	/* mov	ax,SecScanCnt2 */
	ax = secscancnt2;
	/* mov	_SecScanCnt2,ax */
	_secscancnt2 = ax;
	/* mov	ax,SecScanOff2 */
	ax = secscanoff2;
	/* mov	_SecScanOff2,ax */
	_secscanoff2 = ax;
	/* mov	ax,WORD PTR CloudBase */
	ax = *(dw*)(&cloudbase);
	/* mov	WORD PTR _CloudBase,ax */
	*(dw*)(&_cloudbase) = ax;
	/* mov	ax,WORD PTR CloudBase+2 */
	ax = *(dw*)(((db*)&cloudbase)+2);
	/* mov	WORD PTR _CloudBase+2,ax */
	*(dw*)(((db*)&_cloudbase)+2) = ax;
	/* mov	ax,CloudDepth */
	ax = clouddepth;
	/* mov	_CloudDepth,ax */
	_clouddepth = ax;
	/* mov	al,GndTextEnabled */
	al = gndtextenabled;
	/* mov	_GndTextEnabled,al */
	_gndtextenabled = al;
	/* mov	al,TreesEnabled */
	al = treesenabled;
	/* mov	_TreesEnabled,al */
	_treesenabled = al;
	/* mov	al,HillTextEnabled */
	al = hilltextenabled;
	/* mov	_HillTxtEnabled,al */
	_hilltxtenabled = al;
	/* mov	al,CloudsEnabled */
	al = cloudsenabled;
	/* mov	_CloudsEnabled,al */
	_cloudsenabled = al;
	/* mov	al,StarsEnabled */
	al = starsenabled;
	/* mov	_StarsEnabled,al */
	_starsenabled = al;
	/* mov	al,GradEnabled */
	al = gradenabled;
	/* mov	_GradEnabled,al */
	_gradenabled = al;
	// 0 ;* ThrustMaster
	/* mov	ax,TM_MidX */
	ax = tm_midx;
	/* mov	_TM_MidX,ax */
	_tm_midx = ax;
	/* mov	ax,TM_MidY */
	ax = tm_midy;
	/* mov	_TM_MidY,ax */
	_tm_midy = ax;
	// 0 ;---------------------
	// 0 ;* save game play data
	// 0 ;---------------------
	/* mov	cx,GameDataSize */
	cx = gamedatasize;
	/* mov	dx,OFFSET GamePlayOut */
	dx = m2c::near_offset_external(gameplayout);
	/* mov	di,OFFSET GamePlayData */
	di = m2c::near_offset_external(gameplaydata);
	/* call	SaveFile */
	CALLF(savefile, 0);
	/* jc	SaveGameError */
	if (CF) {goto savegameerror;}
	// 0 ;-------------------------------
	// 0 ;* save weapon impact point data
	// 0 ;-------------------------------
	/* mov	cx,NUM_IMPACTS*IMP_REC_SIZE */
	cx = 128*8;
	/* mov	dx,OFFSET ImpactOut */
	dx = m2c::near_offset_external(impactout);
	/* mov	ax,SEG ImpactList */
	ax = m2c::segment_of_external(impactlist);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	di,OFFSET ImpactList */
	di = m2c::near_offset_external(impactlist);
	/* call	SaveFile */
	CALLF(savefile, 0);
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* jc	SaveImpError */
	if (CF) {goto saveimperror;}
	/* ret */
	RETN(0);
savegameerror:
	// 4379 
	/* SaveGameError:	mov	DieFlag,SYS_ERR_SV_GAME */
	dieflag = 251;
	/* ret */
	RETN(0);
saveimperror:
	// 4381 
	/* SaveImpError:	mov	DieFlag,SYS_ERR_SV_IMP */
	dieflag = 238;
	/* ret */
	RETN(0);
loadmapdata:
	// 2090 
	// 0 ;---------------
	// 0 ;* load LAYER.IN
	// 0 ;---------------
edummylabel3:
	// 4383 
	/* mov	cx,MapLayerSize */
	cx = maplayersize;
	/* mov	dx,OFFSET LayersIn */
	dx = m2c::near_offset_external(layersin);
	/* mov	di,OFFSET MapLayers */
	di = m2c::near_offset_external(maplayers);
	/* mov	ax,SEG MapLayers */
	ax = m2c::segment_of_external(maplayers);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* call	LoadFile */
	CALLF(loadfile, 0);
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	al,SYS_ERR_LD_LYR */
	al = 250;
	/* jc	LoadMapError */
	if (CF) {goto loadmaperror;}
	// 0 ;------------------
	// 0 ;* load OBSECDEF.IN
	// 0 ;------------------
	/* mov	cx,SEC_MAP_SIZE */
	cx = sec_map_size;
	/* mov	dx,OFFSET GndObjectsIn */
	dx = m2c::near_offset_external(gndobjectsin);
	/* mov	di,OFFSET SectorDataStart */
	di = m2c::near_offset_external(sectordatastart);
	/* mov	ax,SEG SectorDataStart */
	ax = m2c::segment_of_external(sectordatastart);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* call	LoadFile */
	CALLF(loadfile, 0);
	/* mov	GndDataSize,ax */
	gnddatasize = ax;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	al,SYS_ERR_LD_OBJ */
	al = 249;
	/* jc	LoadMapError */
	if (CF) {goto loadmaperror;}
	// 0 ;-----------------
	// 0 ;* load MSECDEF.IN
	// 0 ;-----------------
	/* mov	cx,MSEC_MAP_SIZE */
	cx = msec_map_size;
	/* mov	dx,OFFSET MobObjectsIn */
	dx = m2c::near_offset_external(mobobjectsin);
	/* mov	di,OFFSET MSctrDataStart */
	di = m2c::near_offset_external(msctrdatastart);
	/* mov	ax,SEG MSctrDataStart */
	ax = m2c::segment_of_external(msctrdatastart);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* call	LoadFile */
	CALLF(loadfile, 0);
	/* mov	MobDataSize,ax */
	mobdatasize = ax;
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	al,SYS_ERR_LD_MOB */
	al = 247;
	/* jc	LoadMapError */
	if (CF) {goto loadmaperror;}
	// 0 ;---------------------------
	// 0 ;* init visual sector tables
	// 0 ;---------------------------
	/* call	BuildSctrTables */
	CALLF(buildsctrtables, 0);
	/* clc			;cf = 0 = ok */
	CLC;
	/* ret */
	RETN(0);
loadmaperror:
	// 4385 
	/* LoadMapError:	mov	DieFlag,al */
	dieflag = al;
	/* ret */
	RETN(0);
savemapdata:
	// 2154 
	// 0 ;-------------------
	// 0 ;* save OBSECDEF.OUT
	// 0 ;-------------------
edummylabel4:
	// 4387 
	/* mov	cx,GndDataSize */
	cx = gnddatasize;
	/* mov	dx,OFFSET GndObjectsOut */
	dx = m2c::near_offset_external(gndobjectsout);
	/* mov	di,OFFSET SectorDataStart */
	di = m2c::near_offset_external(sectordatastart);
	/* mov	ax,SEG SectorDataStart */
	ax = m2c::segment_of_external(sectordatastart);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* call	SaveFile */
	CALLF(savefile, 0);
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	al,SYS_ERR_SV_OBJ */
	al = 248;
	/* jc	SaveMapError */
	if (CF) {goto savemaperror;}
	// 0 ;------------------
	// 0 ;* save MSECDEF.OUT
	// 0 ;------------------
	/* mov	cx,MobDataSize */
	cx = mobdatasize;
	/* mov	dx,OFFSET MobObjectsOut */
	dx = m2c::near_offset_external(mobobjectsout);
	/* mov	di,OFFSET MSctrDataStart */
	di = m2c::near_offset_external(msctrdatastart);
	/* mov	ax,SEG MSctrDataStart */
	ax = m2c::segment_of_external(msctrdatastart);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* call	SaveFile */
	CALLF(savefile, 0);
	/* mov	ax,DATA */
	ax = seg_offset(data);
	/* mov	es,ax */
	m2c::set_segment_register(es, ax);
	/* mov	al,SYS_ERR_SV_MOB */
	al = 246;
	/* jc	SaveMapError */
	if (CF) {goto savemaperror;}
	/* ret */
	RETN(0);
savemaperror:
	// 4389 
	/* SaveMapError:	mov	DieFlag,al */
	dieflag = al;
	/* ret */
	RETN(0);

            assert(0);
            __dispatch_call_ext:
            __dispatch_call:
        #ifdef DOSBOX_CUSTOM
            if ((__disp >> 16) == 0xf000)
            {cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
        #endif
            switch (__disp) {
                case m2c::k__m2c_macrolocal_1_skip: 	goto __m2c_macrolocal_1_skip;
        case m2c::k__m2c_macrolocal_2_skip: 	goto __m2c_macrolocal_2_skip;
        case m2c::kedummylabel1: 	goto edummylabel1;
        case m2c::kedummylabel2: 	goto edummylabel2;
        case m2c::kedummylabel3: 	goto edummylabel3;
        case m2c::kedummylabel4: 	goto edummylabel4;
        case m2c::kloadgamedata: 	goto loadgamedata;
        case m2c::kloadgameerror: 	goto loadgameerror;
        case m2c::kloadmapdata: 	goto loadmapdata;
        case m2c::kloadmaperror: 	goto loadmaperror;
        case m2c::ksavegamedata: 	goto savegamedata;
        case m2c::ksavegameerror: 	goto savegameerror;
        case m2c::ksaveimperror: 	goto saveimperror;
        case m2c::ksavemapdata: 	goto savemapdata;
        case m2c::ksavemaperror: 	goto savemaperror;
        default: return __dispatch_call(__disp, _state);
    };
}

