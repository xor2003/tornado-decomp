#include "_data.h"
#include <unordered_map>
#if __has_include("_equates.h")
#include "_equates.h"
#endif
extern bool _rvrsmeshfill(m2c::_offsets, struct m2c::_STATE*);
extern bool _rvrspolyfill(m2c::_offsets, struct m2c::_STATE*);
extern bool aaasymbol(m2c::_offsets, struct m2c::_STATE*);
extern bool aborttodos(m2c::_offsets, struct m2c::_STATE*);
extern bool aboveclouds(m2c::_offsets, struct m2c::_STATE*);
extern bool aboveclouds__visual(m2c::_offsets, struct m2c::_STATE*);
extern bool acsymbol(m2c::_offsets, struct m2c::_STATE*);
extern bool advancewp(m2c::_offsets, struct m2c::_STATE*);
extern bool advlayout(m2c::_offsets, struct m2c::_STATE*);
extern bool advlayout2(m2c::_offsets, struct m2c::_STATE*);
extern bool advlayout3(m2c::_offsets, struct m2c::_STATE*);
extern bool aerialexplosion(m2c::_offsets, struct m2c::_STATE*);
extern bool alarmdirect(m2c::_offsets, struct m2c::_STATE*);
extern bool alarmdive(m2c::_offsets, struct m2c::_STATE*);
extern bool alarmfreefall(m2c::_offsets, struct m2c::_STATE*);
extern bool alarmguide(m2c::_offsets, struct m2c::_STATE*);
extern bool alarmkill(m2c::_offsets, struct m2c::_STATE*);
extern bool alarmloiter(m2c::_offsets, struct m2c::_STATE*);
extern bool alarmview(m2c::_offsets, struct m2c::_STATE*);
extern bool alarmzoom(m2c::_offsets, struct m2c::_STATE*);
extern bool alphaonly(m2c::_offsets, struct m2c::_STATE*);
extern bool alt_calccrt(m2c::_offsets, struct m2c::_STATE*);
extern bool alt_circlecrt(m2c::_offsets, struct m2c::_STATE*);
extern bool alt_scalevp(m2c::_offsets, struct m2c::_STATE*);
extern bool altacquire(m2c::_offsets, struct m2c::_STATE*);
extern bool altapproach(m2c::_offsets, struct m2c::_STATE*);
extern bool altmanual(m2c::_offsets, struct m2c::_STATE*);
extern bool alttf(m2c::_offsets, struct m2c::_STATE*);
extern bool arctan(m2c::_offsets, struct m2c::_STATE*);
extern bool arctan2(m2c::_offsets, struct m2c::_STATE*);
extern bool arctan360(m2c::_offsets, struct m2c::_STATE*);
extern bool armagm(m2c::_offsets, struct m2c::_STATE*);
extern bool armalarm(m2c::_offsets, struct m2c::_STATE*);
extern bool armalarmdir(m2c::_offsets, struct m2c::_STATE*);
extern bool armalarmind(m2c::_offsets, struct m2c::_STATE*);
extern bool armbl755(m2c::_offsets, struct m2c::_STATE*);
extern bool armcannon(m2c::_offsets, struct m2c::_STATE*);
extern bool armgpb1000(m2c::_offsets, struct m2c::_STATE*);
extern bool armjp233(m2c::_offsets, struct m2c::_STATE*);
extern bool armjp233__aircraft(m2c::_offsets, struct m2c::_STATE*);
extern bool armlaserguided(m2c::_offsets, struct m2c::_STATE*);
extern bool armlaydown(m2c::_offsets, struct m2c::_STATE*);
extern bool armlgb1000(m2c::_offsets, struct m2c::_STATE*);
extern bool armloft(m2c::_offsets, struct m2c::_STATE*);
extern bool armmanual(m2c::_offsets, struct m2c::_STATE*);
extern bool armnull(m2c::_offsets, struct m2c::_STATE*);
extern bool armok(m2c::_offsets, struct m2c::_STATE*);
extern bool armret1000(m2c::_offsets, struct m2c::_STATE*);
extern bool armsidewinder(m2c::_offsets, struct m2c::_STATE*);
extern bool armskyflash(m2c::_offsets, struct m2c::_STATE*);
extern bool attentionadlb(m2c::_offsets, struct m2c::_STATE*);
extern bool attentionblst(m2c::_offsets, struct m2c::_STATE*);
extern bool attentionnull(m2c::_offsets, struct m2c::_STATE*);
extern bool attentionrlnd(m2c::_offsets, struct m2c::_STATE*);
extern bool attentionsound(m2c::_offsets, struct m2c::_STATE*);
extern bool attentionspkr(m2c::_offsets, struct m2c::_STATE*);
extern bool autopilotdisp(m2c::_offsets, struct m2c::_STATE*);
extern bool banklevent(m2c::_offsets, struct m2c::_STATE*);
extern bool bankrevent(m2c::_offsets, struct m2c::_STATE*);
extern bool belowclouds(m2c::_offsets, struct m2c::_STATE*);
extern bool belowclouds__visual(m2c::_offsets, struct m2c::_STATE*);
extern bool blockfill(m2c::_offsets, struct m2c::_STATE*);
extern bool bombview(m2c::_offsets, struct m2c::_STATE*);
extern bool buildsctrtables(m2c::_offsets, struct m2c::_STATE*);
extern bool calc3doffset(m2c::_offsets, struct m2c::_STATE*);
extern bool calcafactors(m2c::_offsets, struct m2c::_STATE*);
extern bool calcangdiff(m2c::_offsets, struct m2c::_STATE*);
extern bool calcangles(m2c::_offsets, struct m2c::_STATE*);
extern bool calcbfactors(m2c::_offsets, struct m2c::_STATE*);
extern bool calccentre1(m2c::_offsets, struct m2c::_STATE*);
extern bool calccentre16(m2c::_offsets, struct m2c::_STATE*);
extern bool calccentre16__secscan(m2c::_offsets, struct m2c::_STATE*);
extern bool calccentre1__secscan(m2c::_offsets, struct m2c::_STATE*);
extern bool calccentre2(m2c::_offsets, struct m2c::_STATE*);
extern bool calccentre2__secscan(m2c::_offsets, struct m2c::_STATE*);
extern bool calccentre8(m2c::_offsets, struct m2c::_STATE*);
extern bool calccentre8__secscan(m2c::_offsets, struct m2c::_STATE*);
extern bool calccfactors(m2c::_offsets, struct m2c::_STATE*);
extern bool calccirclecrt(m2c::_offsets, struct m2c::_STATE*);
extern bool calcdeltatime(m2c::_offsets, struct m2c::_STATE*);
extern bool calcdeltaxy(m2c::_offsets, struct m2c::_STATE*);
extern bool calcdfactors(m2c::_offsets, struct m2c::_STATE*);
extern bool calceta(m2c::_offsets, struct m2c::_STATE*);
extern bool calceyecoords(m2c::_offsets, struct m2c::_STATE*);
extern bool calceyeposition(m2c::_offsets, struct m2c::_STATE*);
extern bool calcgndheight(m2c::_offsets, struct m2c::_STATE*);
extern bool calcintercept(m2c::_offsets, struct m2c::_STATE*);
extern bool calcmobmaxdim(m2c::_offsets, struct m2c::_STATE*);
extern bool calcnmiles(m2c::_offsets, struct m2c::_STATE*);
extern bool calcnodepos1(m2c::_offsets, struct m2c::_STATE*);
extern bool calcnodepos16(m2c::_offsets, struct m2c::_STATE*);
extern bool calcnodepos2(m2c::_offsets, struct m2c::_STATE*);
extern bool calcnodepos8(m2c::_offsets, struct m2c::_STATE*);
extern bool calcobjectpos1(m2c::_offsets, struct m2c::_STATE*);
extern bool calcobjectpos16(m2c::_offsets, struct m2c::_STATE*);
extern bool calcobjectpos2(m2c::_offsets, struct m2c::_STATE*);
extern bool calcobjectpos4(m2c::_offsets, struct m2c::_STATE*);
extern bool calcobjectpos8(m2c::_offsets, struct m2c::_STATE*);
extern bool calcobjgrid(m2c::_offsets, struct m2c::_STATE*);
extern bool calcoutcodes(m2c::_offsets, struct m2c::_STATE*);
extern bool calcrngbrgvp_af(m2c::_offsets, struct m2c::_STATE*);
extern bool calcrngbrgvp_vp(m2c::_offsets, struct m2c::_STATE*);
extern bool calcrngbrgvp_wp(m2c::_offsets, struct m2c::_STATE*);
extern bool calcrngbrgwp_wp(m2c::_offsets, struct m2c::_STATE*);
extern bool calcrngrelco(m2c::_offsets, struct m2c::_STATE*);
extern bool calcrotategrid1(m2c::_offsets, struct m2c::_STATE*);
extern bool calcrotategrid2(m2c::_offsets, struct m2c::_STATE*);
extern bool calcrotategrid3(m2c::_offsets, struct m2c::_STATE*);
extern bool calcscale1(m2c::_offsets, struct m2c::_STATE*);
extern bool calcscale16(m2c::_offsets, struct m2c::_STATE*);
extern bool calcscale2(m2c::_offsets, struct m2c::_STATE*);
extern bool calcscale4(m2c::_offsets, struct m2c::_STATE*);
extern bool calcscale8(m2c::_offsets, struct m2c::_STATE*);
extern bool calcsctrgrid(m2c::_offsets, struct m2c::_STATE*);
extern bool calcsctroffsets(m2c::_offsets, struct m2c::_STATE*);
extern bool calcsinefine(m2c::_offsets, struct m2c::_STATE*);
extern bool calcslantrange(m2c::_offsets, struct m2c::_STATE*);
extern bool calcstoreswt(m2c::_offsets, struct m2c::_STATE*);
extern bool calctgtrelco(m2c::_offsets, struct m2c::_STATE*);
extern bool calcthrow(m2c::_offsets, struct m2c::_STATE*);
extern bool calctransmatrix(m2c::_offsets, struct m2c::_STATE*);
extern bool calcvias(m2c::_offsets, struct m2c::_STATE*);
extern bool calcvkts(m2c::_offsets, struct m2c::_STATE*);
extern bool calczapos(m2c::_offsets, struct m2c::_STATE*);
extern bool calczbpos(m2c::_offsets, struct m2c::_STATE*);
extern bool calczcpos(m2c::_offsets, struct m2c::_STATE*);
extern bool calczdpos(m2c::_offsets, struct m2c::_STATE*);
extern bool calczepos(m2c::_offsets, struct m2c::_STATE*);
extern bool calczfpos(m2c::_offsets, struct m2c::_STATE*);
extern bool calczgpos(m2c::_offsets, struct m2c::_STATE*);
extern bool calczhpos(m2c::_offsets, struct m2c::_STATE*);
extern bool calczipos(m2c::_offsets, struct m2c::_STATE*);
extern bool camrandom(m2c::_offsets, struct m2c::_STATE*);
extern bool camrotateaclk(m2c::_offsets, struct m2c::_STATE*);
extern bool camrotateclk(m2c::_offsets, struct m2c::_STATE*);
extern bool canceltgtwp(m2c::_offsets, struct m2c::_STATE*);
extern bool cannonadlb(m2c::_offsets, struct m2c::_STATE*);
extern bool cannonblst(m2c::_offsets, struct m2c::_STATE*);
extern bool cannonnull(m2c::_offsets, struct m2c::_STATE*);
extern bool cannonrlnd(m2c::_offsets, struct m2c::_STATE*);
extern bool cannonsound(m2c::_offsets, struct m2c::_STATE*);
extern bool cannonspkr(m2c::_offsets, struct m2c::_STATE*);
extern bool cellsprite(m2c::_offsets, struct m2c::_STATE*);
extern bool cga_bfill(m2c::_offsets, struct m2c::_STATE*);
extern bool cga_bsprite(m2c::_offsets, struct m2c::_STATE*);
extern bool cga_dload(m2c::_offsets, struct m2c::_STATE*);
extern bool cga_hfill(m2c::_offsets, struct m2c::_STATE*);
extern bool cga_hline(m2c::_offsets, struct m2c::_STATE*);
extern bool cga_initms(m2c::_offsets, struct m2c::_STATE*);
extern bool cga_initss(m2c::_offsets, struct m2c::_STATE*);
extern bool cga_line(m2c::_offsets, struct m2c::_STATE*);
extern bool cga_loadmouse(m2c::_offsets, struct m2c::_STATE*);
extern bool cga_loadscreen(m2c::_offsets, struct m2c::_STATE*);
extern bool cga_mfill(m2c::_offsets, struct m2c::_STATE*);
extern bool cga_msprite(m2c::_offsets, struct m2c::_STATE*);
extern bool cga_pfill(m2c::_offsets, struct m2c::_STATE*);
extern bool cga_prtc1(m2c::_offsets, struct m2c::_STATE*);
extern bool cga_prtc2(m2c::_offsets, struct m2c::_STATE*);
extern bool cga_prtc3(m2c::_offsets, struct m2c::_STATE*);
extern bool cga_qsprite(m2c::_offsets, struct m2c::_STATE*);
extern bool cga_savemouse(m2c::_offsets, struct m2c::_STATE*);
extern bool cga_savescreen(m2c::_offsets, struct m2c::_STATE*);
extern bool cga_setpx(m2c::_offsets, struct m2c::_STATE*);
extern bool cga_sfill(m2c::_offsets, struct m2c::_STATE*);
extern bool cga_ssprite(m2c::_offsets, struct m2c::_STATE*);
extern bool cga_uncomppic(m2c::_offsets, struct m2c::_STATE*);
extern bool cga_vline(m2c::_offsets, struct m2c::_STATE*);
extern bool cga_vmode(m2c::_offsets, struct m2c::_STATE*);
extern bool charsprite(m2c::_offsets, struct m2c::_STATE*);
extern bool checkfailures(m2c::_offsets, struct m2c::_STATE*);
extern bool checkhdge(m2c::_offsets, struct m2c::_STATE*);
extern bool checkhdgn(m2c::_offsets, struct m2c::_STATE*);
extern bool checkhdgs(m2c::_offsets, struct m2c::_STATE*);
extern bool checkhdgw(m2c::_offsets, struct m2c::_STATE*);
extern bool checkirlock(m2c::_offsets, struct m2c::_STATE*);
extern bool checktimeout(m2c::_offsets, struct m2c::_STATE*);
extern bool chggameviewmode(m2c::_offsets, struct m2c::_STATE*);
extern bool circleexit(m2c::_offsets, struct m2c::_STATE*);
extern bool circlesmoke(m2c::_offsets, struct m2c::_STATE*);
extern bool clearcomms(m2c::_offsets, struct m2c::_STATE*);
extern bool clearnavigpanel(m2c::_offsets, struct m2c::_STATE*);
extern bool clearpilotpanel(m2c::_offsets, struct m2c::_STATE*);
extern bool clipabove(m2c::_offsets, struct m2c::_STATE*);
extern bool clipaboveleft(m2c::_offsets, struct m2c::_STATE*);
extern bool clipaboveright(m2c::_offsets, struct m2c::_STATE*);
extern bool clipbelow(m2c::_offsets, struct m2c::_STATE*);
extern bool clipbelowleft(m2c::_offsets, struct m2c::_STATE*);
extern bool clipbelowright(m2c::_offsets, struct m2c::_STATE*);
extern bool clipleft(m2c::_offsets, struct m2c::_STATE*);
extern bool clippoly(m2c::_offsets, struct m2c::_STATE*);
extern bool clippoly__com_clip(m2c::_offsets, struct m2c::_STATE*);
extern bool clippolydots(m2c::_offsets, struct m2c::_STATE*);
extern bool clippolyline(m2c::_offsets, struct m2c::_STATE*);
extern bool clippolyline__com_clip(m2c::_offsets, struct m2c::_STATE*);
extern bool clipright(m2c::_offsets, struct m2c::_STATE*);
extern bool closefile(m2c::_offsets, struct m2c::_STATE*);
extern bool cloudcheck1(m2c::_offsets, struct m2c::_STATE*);
extern bool cloudcheck2(m2c::_offsets, struct m2c::_STATE*);
extern bool cls(m2c::_offsets, struct m2c::_STATE*);
extern bool commsintr(m2c::_offsets, struct m2c::_STATE*);
extern bool configurevisual(m2c::_offsets, struct m2c::_STATE*);
extern bool control_proc(m2c::_offsets, struct m2c::_STATE*);
extern bool convnumdol(m2c::_offsets, struct m2c::_STATE*);
extern bool copypreviewpan(m2c::_offsets, struct m2c::_STATE*);
extern bool cratercollision(m2c::_offsets, struct m2c::_STATE*);
extern bool createfile(m2c::_offsets, struct m2c::_STATE*);
extern bool createmobile(m2c::_offsets, struct m2c::_STATE*);
extern bool criterrintr(m2c::_offsets, struct m2c::_STATE*);
extern bool ctrlair1(m2c::_offsets, struct m2c::_STATE*);
extern bool ctrlapproach(m2c::_offsets, struct m2c::_STATE*);
extern bool ctrlapproach__aircraft(m2c::_offsets, struct m2c::_STATE*);
extern bool ctrlcombat(m2c::_offsets, struct m2c::_STATE*);
extern bool ctrlgnd1(m2c::_offsets, struct m2c::_STATE*);
extern bool ctrllanding(m2c::_offsets, struct m2c::_STATE*);
extern bool ctrlnull(m2c::_offsets, struct m2c::_STATE*);
extern bool ctrlnull__aircraft(m2c::_offsets, struct m2c::_STATE*);
extern bool ctrlnull__smoke(m2c::_offsets, struct m2c::_STATE*);
extern bool ctrltakeoff(m2c::_offsets, struct m2c::_STATE*);
extern bool ctrltakeoff__aircraft(m2c::_offsets, struct m2c::_STATE*);
extern bool ctrltaxi(m2c::_offsets, struct m2c::_STATE*);
extern bool ctrltouchdown(m2c::_offsets, struct m2c::_STATE*);
extern bool ctrltouchdown__aircraft(m2c::_offsets, struct m2c::_STATE*);
extern bool ctrltrack(m2c::_offsets, struct m2c::_STATE*);
extern bool ctrltrack__aircraft(m2c::_offsets, struct m2c::_STATE*);
extern bool cycliccheck(m2c::_offsets, struct m2c::_STATE*);
extern bool damadc(m2c::_offsets, struct m2c::_STATE*);
extern bool damageddisp(m2c::_offsets, struct m2c::_STATE*);
extern bool damageddispmfd(m2c::_offsets, struct m2c::_STATE*);
extern bool damairbrakes(m2c::_offsets, struct m2c::_STATE*);
extern bool damecm(m2c::_offsets, struct m2c::_STATE*);
extern bool damengine1(m2c::_offsets, struct m2c::_STATE*);
extern bool damengine2(m2c::_offsets, struct m2c::_STATE*);
extern bool damenginefire(m2c::_offsets, struct m2c::_STATE*);
extern bool damflaps(m2c::_offsets, struct m2c::_STATE*);
extern bool damgear(m2c::_offsets, struct m2c::_STATE*);
extern bool damhud(m2c::_offsets, struct m2c::_STATE*);
extern bool damnavigmfd(m2c::_offsets, struct m2c::_STATE*);
extern bool damoxygen(m2c::_offsets, struct m2c::_STATE*);
extern bool dampilotmfd(m2c::_offsets, struct m2c::_STATE*);
extern bool damradar(m2c::_offsets, struct m2c::_STATE*);
extern bool damrwr(m2c::_offsets, struct m2c::_STATE*);
extern bool damspils(m2c::_offsets, struct m2c::_STATE*);
extern bool damtab1(m2c::_offsets, struct m2c::_STATE*);
extern bool damtab2(m2c::_offsets, struct m2c::_STATE*);
extern bool damthrustrvrs(m2c::_offsets, struct m2c::_STATE*);
extern bool damwheelbrakes(m2c::_offsets, struct m2c::_STATE*);
extern bool damwingsweep(m2c::_offsets, struct m2c::_STATE*);
extern bool decoyadlb(m2c::_offsets, struct m2c::_STATE*);
extern bool decoyblst(m2c::_offsets, struct m2c::_STATE*);
extern bool decoynull(m2c::_offsets, struct m2c::_STATE*);
extern bool decoyrlnd(m2c::_offsets, struct m2c::_STATE*);
extern bool decoysound(m2c::_offsets, struct m2c::_STATE*);
extern bool decoyspkr(m2c::_offsets, struct m2c::_STATE*);
extern bool decworddol(m2c::_offsets, struct m2c::_STATE*);
extern bool deletemobile(m2c::_offsets, struct m2c::_STATE*);
extern bool destroytornado(m2c::_offsets, struct m2c::_STATE*);
extern bool dloadcopy(m2c::_offsets, struct m2c::_STATE*);
extern bool dloadflip(m2c::_offsets, struct m2c::_STATE*);
extern bool dotclip(m2c::_offsets, struct m2c::_STATE*);
extern bool doubletrack1(m2c::_offsets, struct m2c::_STATE*);
extern bool doubletrack2(m2c::_offsets, struct m2c::_STATE*);
extern bool download(m2c::_offsets, struct m2c::_STATE*);
extern bool drawadirollbug(m2c::_offsets, struct m2c::_STATE*);
extern bool drawairfield(m2c::_offsets, struct m2c::_STATE*);
extern bool drawbrackets(m2c::_offsets, struct m2c::_STATE*);
extern bool drawclouds1(m2c::_offsets, struct m2c::_STATE*);
extern bool drawclouds2(m2c::_offsets, struct m2c::_STATE*);
extern bool drawfarobjects(m2c::_offsets, struct m2c::_STATE*);
extern bool drawfeatures1(m2c::_offsets, struct m2c::_STATE*);
extern bool drawfeatures2(m2c::_offsets, struct m2c::_STATE*);
extern bool drawflatobject(m2c::_offsets, struct m2c::_STATE*);
extern bool drawgndobject(m2c::_offsets, struct m2c::_STATE*);
extern bool drawhillface(m2c::_offsets, struct m2c::_STATE*);
extern bool drawhorizon(m2c::_offsets, struct m2c::_STATE*);
extern bool drawirimage(m2c::_offsets, struct m2c::_STATE*);
extern bool drawironwork(m2c::_offsets, struct m2c::_STATE*);
extern bool drawmapborder(m2c::_offsets, struct m2c::_STATE*);
extern bool drawmobile(m2c::_offsets, struct m2c::_STATE*);
extern bool drawmobobject1(m2c::_offsets, struct m2c::_STATE*);
extern bool drawmobobject2(m2c::_offsets, struct m2c::_STATE*);
extern bool drawmobobject3(m2c::_offsets, struct m2c::_STATE*);
extern bool drawnavigpanel(m2c::_offsets, struct m2c::_STATE*);
extern bool drawobjects1(m2c::_offsets, struct m2c::_STATE*);
extern bool drawobjects2(m2c::_offsets, struct m2c::_STATE*);
extern bool drawobjects3(m2c::_offsets, struct m2c::_STATE*);
extern bool drawpilotpanel(m2c::_offsets, struct m2c::_STATE*);
extern bool drawpoly(m2c::_offsets, struct m2c::_STATE*);
extern bool drawpoly__com_clip(m2c::_offsets, struct m2c::_STATE*);
extern bool drawpolydots(m2c::_offsets, struct m2c::_STATE*);
extern bool drawpolyline(m2c::_offsets, struct m2c::_STATE*);
extern bool drawpolyline__com_clip(m2c::_offsets, struct m2c::_STATE*);
extern bool drawpreviewpan(m2c::_offsets, struct m2c::_STATE*);
extern bool drawradarnoise(m2c::_offsets, struct m2c::_STATE*);
extern bool drawrailways(m2c::_offsets, struct m2c::_STATE*);
extern bool drawrectangle(m2c::_offsets, struct m2c::_STATE*);
extern bool drawrivers(m2c::_offsets, struct m2c::_STATE*);
extern bool drawroads(m2c::_offsets, struct m2c::_STATE*);
extern bool drawrunways(m2c::_offsets, struct m2c::_STATE*);
extern bool drawsector(m2c::_offsets, struct m2c::_STATE*);
extern bool drawsmoke(m2c::_offsets, struct m2c::_STATE*);
extern bool drawsmokeobject(m2c::_offsets, struct m2c::_STATE*);
extern bool drawspecials(m2c::_offsets, struct m2c::_STATE*);
extern bool drawstars(m2c::_offsets, struct m2c::_STATE*);
extern bool drawstatmobiles(m2c::_offsets, struct m2c::_STATE*);
extern bool drawtaxiways(m2c::_offsets, struct m2c::_STATE*);
extern bool drawtown(m2c::_offsets, struct m2c::_STATE*);
extern bool drawweapons(m2c::_offsets, struct m2c::_STATE*);
extern bool ecrlayout(m2c::_offsets, struct m2c::_STATE*);
extern bool ecrlayout2(m2c::_offsets, struct m2c::_STATE*);
extern bool ecrlayout3(m2c::_offsets, struct m2c::_STATE*);
extern bool ega_bfill(m2c::_offsets, struct m2c::_STATE*);
extern bool ega_bsprite(m2c::_offsets, struct m2c::_STATE*);
extern bool ega_dload(m2c::_offsets, struct m2c::_STATE*);
extern bool ega_hfill(m2c::_offsets, struct m2c::_STATE*);
extern bool ega_hline(m2c::_offsets, struct m2c::_STATE*);
extern bool ega_initms(m2c::_offsets, struct m2c::_STATE*);
extern bool ega_initqs(m2c::_offsets, struct m2c::_STATE*);
extern bool ega_initss(m2c::_offsets, struct m2c::_STATE*);
extern bool ega_line(m2c::_offsets, struct m2c::_STATE*);
extern bool ega_loadmouse(m2c::_offsets, struct m2c::_STATE*);
extern bool ega_loadscreen(m2c::_offsets, struct m2c::_STATE*);
extern bool ega_mfill(m2c::_offsets, struct m2c::_STATE*);
extern bool ega_msprite(m2c::_offsets, struct m2c::_STATE*);
extern bool ega_pfill(m2c::_offsets, struct m2c::_STATE*);
extern bool ega_prtc1(m2c::_offsets, struct m2c::_STATE*);
extern bool ega_prtc2(m2c::_offsets, struct m2c::_STATE*);
extern bool ega_prtc3(m2c::_offsets, struct m2c::_STATE*);
extern bool ega_qsprite(m2c::_offsets, struct m2c::_STATE*);
extern bool ega_savemouse(m2c::_offsets, struct m2c::_STATE*);
extern bool ega_savescreen(m2c::_offsets, struct m2c::_STATE*);
extern bool ega_setpx(m2c::_offsets, struct m2c::_STATE*);
extern bool ega_sfill(m2c::_offsets, struct m2c::_STATE*);
extern bool ega_ssprite(m2c::_offsets, struct m2c::_STATE*);
extern bool ega_uncomppic(m2c::_offsets, struct m2c::_STATE*);
extern bool ega_vline(m2c::_offsets, struct m2c::_STATE*);
extern bool ega_vmode(m2c::_offsets, struct m2c::_STATE*);
extern bool ejectevent(m2c::_offsets, struct m2c::_STATE*);
extern bool ewrsymbol(m2c::_offsets, struct m2c::_STATE*);
extern bool explo1adlb(m2c::_offsets, struct m2c::_STATE*);
extern bool explo1blst(m2c::_offsets, struct m2c::_STATE*);
extern bool explo1null(m2c::_offsets, struct m2c::_STATE*);
extern bool explo1rlnd(m2c::_offsets, struct m2c::_STATE*);
extern bool explo1spkr(m2c::_offsets, struct m2c::_STATE*);
extern bool explo2adlb(m2c::_offsets, struct m2c::_STATE*);
extern bool explo2blst(m2c::_offsets, struct m2c::_STATE*);
extern bool explo2null(m2c::_offsets, struct m2c::_STATE*);
extern bool explo2rlnd(m2c::_offsets, struct m2c::_STATE*);
extern bool explo2spkr(m2c::_offsets, struct m2c::_STATE*);
extern bool explo3adlb(m2c::_offsets, struct m2c::_STATE*);
extern bool explo3blst(m2c::_offsets, struct m2c::_STATE*);
extern bool explo3null(m2c::_offsets, struct m2c::_STATE*);
extern bool explo3rlnd(m2c::_offsets, struct m2c::_STATE*);
extern bool explo3spkr(m2c::_offsets, struct m2c::_STATE*);
extern bool exploreintr100(m2c::_offsets, struct m2c::_STATE*);
extern bool explosound1(m2c::_offsets, struct m2c::_STATE*);
extern bool explosound2(m2c::_offsets, struct m2c::_STATE*);
extern bool explosound3(m2c::_offsets, struct m2c::_STATE*);
extern bool ext_calccrt(m2c::_offsets, struct m2c::_STATE*);
extern bool ext_circlecrt(m2c::_offsets, struct m2c::_STATE*);
extern bool ext_scalevp(m2c::_offsets, struct m2c::_STATE*);
extern bool fadedown(m2c::_offsets, struct m2c::_STATE*);
extern bool fadein(m2c::_offsets, struct m2c::_STATE*);
extern bool fadeout(m2c::_offsets, struct m2c::_STATE*);
extern bool fadeup(m2c::_offsets, struct m2c::_STATE*);
extern bool farhillsort(m2c::_offsets, struct m2c::_STATE*);
extern bool fastarccos(m2c::_offsets, struct m2c::_STATE*);
extern bool fastarcsin(m2c::_offsets, struct m2c::_STATE*);
extern bool fastarctan(m2c::_offsets, struct m2c::_STATE*);
extern bool fastcyclic(m2c::_offsets, struct m2c::_STATE*);
extern bool fastrandx(m2c::_offsets, struct m2c::_STATE*);
extern bool firecannon(m2c::_offsets, struct m2c::_STATE*);
extern bool fixgmrpalette(m2c::_offsets, struct m2c::_STATE*);
extern bool fixirpalette(m2c::_offsets, struct m2c::_STATE*);
extern bool flirdisp(m2c::_offsets, struct m2c::_STATE*);
extern bool flirdisp__mfd(m2c::_offsets, struct m2c::_STATE*);
extern bool flirdisp_ori(m2c::_offsets, struct m2c::_STATE*);
extern bool flirdisp_ori2(m2c::_offsets, struct m2c::_STATE*);
extern bool flirdisp_ori3(m2c::_offsets, struct m2c::_STATE*);
extern bool flirdisp_ori__mfd(m2c::_offsets, struct m2c::_STATE*);
extern bool forwardevent(m2c::_offsets, struct m2c::_STATE*);
extern bool fwrite(m2c::_offsets, struct m2c::_STATE*);
extern bool gameintr100(m2c::_offsets, struct m2c::_STATE*);
extern bool gameintr20(m2c::_offsets, struct m2c::_STATE*);
extern bool gearadlb(m2c::_offsets, struct m2c::_STATE*);
extern bool gearblst(m2c::_offsets, struct m2c::_STATE*);
extern bool gearnull(m2c::_offsets, struct m2c::_STATE*);
extern bool gearrlnd(m2c::_offsets, struct m2c::_STATE*);
extern bool gearsound(m2c::_offsets, struct m2c::_STATE*);
extern bool gearspkr(m2c::_offsets, struct m2c::_STATE*);
extern bool getchar(m2c::_offsets, struct m2c::_STATE*);
extern bool getdronealive(m2c::_offsets, struct m2c::_STATE*);
extern bool getdronechaff(m2c::_offsets, struct m2c::_STATE*);
extern bool getdroneflare(m2c::_offsets, struct m2c::_STATE*);
extern bool getdroneillum(m2c::_offsets, struct m2c::_STATE*);
extern bool getdronespeed(m2c::_offsets, struct m2c::_STATE*);
extern bool gndmappingradar(m2c::_offsets, struct m2c::_STATE*);
extern bool gosub(m2c::_offsets, struct m2c::_STATE*);
extern bool groundcollision(m2c::_offsets, struct m2c::_STATE*);
extern bool hdgacquire(m2c::_offsets, struct m2c::_STATE*);
extern bool hdgapproach(m2c::_offsets, struct m2c::_STATE*);
extern bool hdgmanual(m2c::_offsets, struct m2c::_STATE*);
extern bool hdgtrack(m2c::_offsets, struct m2c::_STATE*);
extern bool hem_vmode(m2c::_offsets, struct m2c::_STATE*);
extern bool hgc_dload(m2c::_offsets, struct m2c::_STATE*);
extern bool hgc_vmode(m2c::_offsets, struct m2c::_STATE*);
extern bool hlinedraw(m2c::_offsets, struct m2c::_STATE*);
extern bool horizonclip(m2c::_offsets, struct m2c::_STATE*);
extern bool horizonfill(m2c::_offsets, struct m2c::_STATE*);
extern bool hudalarmdir(m2c::_offsets, struct m2c::_STATE*);
extern bool hudalarmdir2(m2c::_offsets, struct m2c::_STATE*);
extern bool hudalarmind(m2c::_offsets, struct m2c::_STATE*);
extern bool hudalarmind2(m2c::_offsets, struct m2c::_STATE*);
extern bool hudcannon(m2c::_offsets, struct m2c::_STATE*);
extern bool hudcannon2(m2c::_offsets, struct m2c::_STATE*);
extern bool hudjp233(m2c::_offsets, struct m2c::_STATE*);
extern bool hudjp2332(m2c::_offsets, struct m2c::_STATE*);
extern bool hudlaserguided(m2c::_offsets, struct m2c::_STATE*);
extern bool hudlaserguided2(m2c::_offsets, struct m2c::_STATE*);
extern bool hudlaydownbomb(m2c::_offsets, struct m2c::_STATE*);
extern bool hudlaydownbomb2(m2c::_offsets, struct m2c::_STATE*);
extern bool hudloftbomb(m2c::_offsets, struct m2c::_STATE*);
extern bool hudloftbomb2(m2c::_offsets, struct m2c::_STATE*);
extern bool hudmanualbomb(m2c::_offsets, struct m2c::_STATE*);
extern bool hudmanualbomb2(m2c::_offsets, struct m2c::_STATE*);
extern bool hudnavigation(m2c::_offsets, struct m2c::_STATE*);
extern bool hudnavigation2(m2c::_offsets, struct m2c::_STATE*);
extern bool hudsidewinder(m2c::_offsets, struct m2c::_STATE*);
extern bool hudsidewinder2(m2c::_offsets, struct m2c::_STATE*);
extern bool hudskyflash(m2c::_offsets, struct m2c::_STATE*);
extern bool hudskyflash2(m2c::_offsets, struct m2c::_STATE*);
extern bool idslayout(m2c::_offsets, struct m2c::_STATE*);
extern bool idslayout2(m2c::_offsets, struct m2c::_STATE*);
extern bool idslayout3(m2c::_offsets, struct m2c::_STATE*);
extern bool ifthen(m2c::_offsets, struct m2c::_STATE*);
extern bool ifthenelse(m2c::_offsets, struct m2c::_STATE*);
extern bool illegal(m2c::_offsets, struct m2c::_STATE*);
extern bool ilsdisp(m2c::_offsets, struct m2c::_STATE*);
extern bool inclouds(m2c::_offsets, struct m2c::_STATE*);
extern bool inclouds__visual(m2c::_offsets, struct m2c::_STATE*);
extern bool initairexplo(m2c::_offsets, struct m2c::_STATE*);
extern bool initairtrail(m2c::_offsets, struct m2c::_STATE*);
extern bool initburning(m2c::_offsets, struct m2c::_STATE*);
extern bool initclouds(m2c::_offsets, struct m2c::_STATE*);
extern bool initcomms(m2c::_offsets, struct m2c::_STATE*);
extern bool initconvoys(m2c::_offsets, struct m2c::_STATE*);
extern bool initcrater1(m2c::_offsets, struct m2c::_STATE*);
extern bool initcrater2(m2c::_offsets, struct m2c::_STATE*);
extern bool initcrater3(m2c::_offsets, struct m2c::_STATE*);
extern bool initctrldevice(m2c::_offsets, struct m2c::_STATE*);
extern bool initgame(m2c::_offsets, struct m2c::_STATE*);
extern bool inithelicops(m2c::_offsets, struct m2c::_STATE*);
extern bool initjoy1(m2c::_offsets, struct m2c::_STATE*);
extern bool initjoy1__explore(m2c::_offsets, struct m2c::_STATE*);
extern bool initjoy2(m2c::_offsets, struct m2c::_STATE*);
extern bool initjoy2__explore(m2c::_offsets, struct m2c::_STATE*);
extern bool initkbd(m2c::_offsets, struct m2c::_STATE*);
extern bool initkbd1(m2c::_offsets, struct m2c::_STATE*);
extern bool initkbd2(m2c::_offsets, struct m2c::_STATE*);
extern bool initkickup(m2c::_offsets, struct m2c::_STATE*);
extern bool initmodel(m2c::_offsets, struct m2c::_STATE*);
extern bool initmouse(m2c::_offsets, struct m2c::_STATE*);
extern bool initmsprites(m2c::_offsets, struct m2c::_STATE*);
extern bool initpalettes(m2c::_offsets, struct m2c::_STATE*);
extern bool initpanels(m2c::_offsets, struct m2c::_STATE*);
extern bool initplanes(m2c::_offsets, struct m2c::_STATE*);
extern bool initqsprites(m2c::_offsets, struct m2c::_STATE*);
extern bool initssprites(m2c::_offsets, struct m2c::_STATE*);
extern bool inittwoplayer(m2c::_offsets, struct m2c::_STATE*);
extern bool initvisual(m2c::_offsets, struct m2c::_STATE*);
extern bool initweapons(m2c::_offsets, struct m2c::_STATE*);
extern bool installadlb(m2c::_offsets, struct m2c::_STATE*);
extern bool installadlb__soundfx(m2c::_offsets, struct m2c::_STATE*);
extern bool installblst(m2c::_offsets, struct m2c::_STATE*);
extern bool installblst__soundfx(m2c::_offsets, struct m2c::_STATE*);
extern bool installcriterr(m2c::_offsets, struct m2c::_STATE*);
extern bool installkbd(m2c::_offsets, struct m2c::_STATE*);
extern bool installmouse(m2c::_offsets, struct m2c::_STATE*);
extern bool installmusic(m2c::_offsets, struct m2c::_STATE*);
extern bool installnull(m2c::_offsets, struct m2c::_STATE*);
extern bool installnull__soundfx(m2c::_offsets, struct m2c::_STATE*);
extern bool installoverflow(m2c::_offsets, struct m2c::_STATE*);
extern bool installrlnd(m2c::_offsets, struct m2c::_STATE*);
extern bool installrlnd__soundfx(m2c::_offsets, struct m2c::_STATE*);
extern bool installsound(m2c::_offsets, struct m2c::_STATE*);
extern bool installspkr(m2c::_offsets, struct m2c::_STATE*);
extern bool installspkr__soundfx(m2c::_offsets, struct m2c::_STATE*);
extern bool installtimer(m2c::_offsets, struct m2c::_STATE*);
extern bool installuser100(m2c::_offsets, struct m2c::_STATE*);
extern bool installuser20(m2c::_offsets, struct m2c::_STATE*);
extern bool instantfadein(m2c::_offsets, struct m2c::_STATE*);
extern bool instantfadeout(m2c::_offsets, struct m2c::_STATE*);
extern bool int_calccrt(m2c::_offsets, struct m2c::_STATE*);
extern bool int_circlecrt(m2c::_offsets, struct m2c::_STATE*);
extern bool int_scalevp(m2c::_offsets, struct m2c::_STATE*);
extern bool interleavedata(m2c::_offsets, struct m2c::_STATE*);
extern bool intoaboveclip(m2c::_offsets, struct m2c::_STATE*);
extern bool intoaboveclip__com_clip(m2c::_offsets, struct m2c::_STATE*);
extern bool intobehindclip(m2c::_offsets, struct m2c::_STATE*);
extern bool intobelowclip(m2c::_offsets, struct m2c::_STATE*);
extern bool intobelowclip__com_clip(m2c::_offsets, struct m2c::_STATE*);
extern bool intoleftclip(m2c::_offsets, struct m2c::_STATE*);
extern bool intoleftclip__com_clip(m2c::_offsets, struct m2c::_STATE*);
extern bool intorightclip(m2c::_offsets, struct m2c::_STATE*);
extern bool intorightclip__com_clip(m2c::_offsets, struct m2c::_STATE*);
extern bool jetall(m2c::_offsets, struct m2c::_STATE*);
extern bool jetextstores(m2c::_offsets, struct m2c::_STATE*);
extern bool jetexttanks(m2c::_offsets, struct m2c::_STATE*);
extern bool joyailacquire(m2c::_offsets, struct m2c::_STATE*);
extern bool joyailapproach(m2c::_offsets, struct m2c::_STATE*);
extern bool joyailmanual(m2c::_offsets, struct m2c::_STATE*);
extern bool joyailtrack(m2c::_offsets, struct m2c::_STATE*);
extern bool joyeleacquire(m2c::_offsets, struct m2c::_STATE*);
extern bool joyeleapproach(m2c::_offsets, struct m2c::_STATE*);
extern bool joyelemanual(m2c::_offsets, struct m2c::_STATE*);
extern bool joyeletf(m2c::_offsets, struct m2c::_STATE*);
extern bool kbdailacquire(m2c::_offsets, struct m2c::_STATE*);
extern bool kbdailapproach(m2c::_offsets, struct m2c::_STATE*);
extern bool kbdailmanual(m2c::_offsets, struct m2c::_STATE*);
extern bool kbdailtrack(m2c::_offsets, struct m2c::_STATE*);
extern bool kbdautothrot(m2c::_offsets, struct m2c::_STATE*);
extern bool kbdeleacquire(m2c::_offsets, struct m2c::_STATE*);
extern bool kbdeleapproach(m2c::_offsets, struct m2c::_STATE*);
extern bool kbdelemanual(m2c::_offsets, struct m2c::_STATE*);
extern bool kbdeletf(m2c::_offsets, struct m2c::_STATE*);
extern bool kbdelevators(m2c::_offsets, struct m2c::_STATE*);
extern bool kbdintr(m2c::_offsets, struct m2c::_STATE*);
extern bool kbdrudder(m2c::_offsets, struct m2c::_STATE*);
extern bool keypress(m2c::_offsets, struct m2c::_STATE*);
extern bool kf_scannavig(m2c::_offsets, struct m2c::_STATE*);
extern bool kf_scanpilot(m2c::_offsets, struct m2c::_STATE*);
extern bool kf_updatenavig(m2c::_offsets, struct m2c::_STATE*);
extern bool kf_updatepilot(m2c::_offsets, struct m2c::_STATE*);
extern bool killattnadlb(m2c::_offsets, struct m2c::_STATE*);
extern bool killattnblst(m2c::_offsets, struct m2c::_STATE*);
extern bool killattnnull(m2c::_offsets, struct m2c::_STATE*);
extern bool killattnrlnd(m2c::_offsets, struct m2c::_STATE*);
extern bool killattnsound(m2c::_offsets, struct m2c::_STATE*);
extern bool killattnspkr(m2c::_offsets, struct m2c::_STATE*);
extern bool launchadlb(m2c::_offsets, struct m2c::_STATE*);
extern bool launchalarm(m2c::_offsets, struct m2c::_STATE*);
extern bool launchblst(m2c::_offsets, struct m2c::_STATE*);
extern bool launchmissile(m2c::_offsets, struct m2c::_STATE*);
extern bool launchnull(m2c::_offsets, struct m2c::_STATE*);
extern bool launchrlnd(m2c::_offsets, struct m2c::_STATE*);
extern bool launchsound(m2c::_offsets, struct m2c::_STATE*);
extern bool launchspkr(m2c::_offsets, struct m2c::_STATE*);
extern bool limitpfine(m2c::_offsets, struct m2c::_STATE*);
extern bool limitpitch(m2c::_offsets, struct m2c::_STATE*);
extern bool linedraw(m2c::_offsets, struct m2c::_STATE*);
extern bool linerail1(m2c::_offsets, struct m2c::_STATE*);
extern bool linerail16(m2c::_offsets, struct m2c::_STATE*);
extern bool linerail2(m2c::_offsets, struct m2c::_STATE*);
extern bool linerail8(m2c::_offsets, struct m2c::_STATE*);
extern bool lineroad1(m2c::_offsets, struct m2c::_STATE*);
extern bool lineroad16(m2c::_offsets, struct m2c::_STATE*);
extern bool lineroad2(m2c::_offsets, struct m2c::_STATE*);
extern bool lineroad8(m2c::_offsets, struct m2c::_STATE*);
extern bool loadextrnpan(m2c::_offsets, struct m2c::_STATE*);
extern bool loadfile(m2c::_offsets, struct m2c::_STATE*);
extern bool loadframepan(m2c::_offsets, struct m2c::_STATE*);
extern bool loadgamedata(m2c::_offsets, struct m2c::_STATE*);
extern bool loadlookdownpan(m2c::_offsets, struct m2c::_STATE*);
extern bool loadmapdata(m2c::_offsets, struct m2c::_STATE*);
extern bool loadmappan(m2c::_offsets, struct m2c::_STATE*);
extern bool loadnavigpan(m2c::_offsets, struct m2c::_STATE*);
extern bool loadnsidepan(m2c::_offsets, struct m2c::_STATE*);
extern bool loadpicture(m2c::_offsets, struct m2c::_STATE*);
extern bool loadpilotpan(m2c::_offsets, struct m2c::_STATE*);
extern bool loadpsidepan(m2c::_offsets, struct m2c::_STATE*);
extern bool locatemobiles(m2c::_offsets, struct m2c::_STATE*);
extern bool makecrater(m2c::_offsets, struct m2c::_STATE*);
extern bool makesmokeeffect(m2c::_offsets, struct m2c::_STATE*);
extern bool makevertex1(m2c::_offsets, struct m2c::_STATE*);
extern bool makevertex1__towns(m2c::_offsets, struct m2c::_STATE*);
extern bool makevertex2(m2c::_offsets, struct m2c::_STATE*);
extern bool mapcompass(m2c::_offsets, struct m2c::_STATE*);
extern bool mapdisp(m2c::_offsets, struct m2c::_STATE*);
extern bool mapdisp__mfd(m2c::_offsets, struct m2c::_STATE*);
extern bool mapexplore(m2c::_offsets, struct m2c::_STATE*);
extern bool mapview(m2c::_offsets, struct m2c::_STATE*);
extern bool maxdamage(m2c::_offsets, struct m2c::_STATE*);
extern bool meddamage(m2c::_offsets, struct m2c::_STATE*);
extern bool meshfill(m2c::_offsets, struct m2c::_STATE*);
extern bool mindamage(m2c::_offsets, struct m2c::_STATE*);
extern bool missileview(m2c::_offsets, struct m2c::_STATE*);
extern bool mobilecollision(m2c::_offsets, struct m2c::_STATE*);
extern bool mobilevisual(m2c::_offsets, struct m2c::_STATE*);
extern bool morsedashadlb(m2c::_offsets, struct m2c::_STATE*);
extern bool morsedashblst(m2c::_offsets, struct m2c::_STATE*);
extern bool morsedashnull(m2c::_offsets, struct m2c::_STATE*);
extern bool morsedashrlnd(m2c::_offsets, struct m2c::_STATE*);
extern bool morsedashsound(m2c::_offsets, struct m2c::_STATE*);
extern bool morsedashspkr(m2c::_offsets, struct m2c::_STATE*);
extern bool morsedotadlb(m2c::_offsets, struct m2c::_STATE*);
extern bool morsedotblst(m2c::_offsets, struct m2c::_STATE*);
extern bool morsedotnull(m2c::_offsets, struct m2c::_STATE*);
extern bool morsedotrlnd(m2c::_offsets, struct m2c::_STATE*);
extern bool morsedotsound(m2c::_offsets, struct m2c::_STATE*);
extern bool morsedotspkr(m2c::_offsets, struct m2c::_STATE*);
extern bool moveviewpoint(m2c::_offsets, struct m2c::_STATE*);
extern bool mslsymbol1(m2c::_offsets, struct m2c::_STATE*);
extern bool mslsymbol2(m2c::_offsets, struct m2c::_STATE*);
extern bool msprite(m2c::_offsets, struct m2c::_STATE*);
extern bool nearhillsort(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv0(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv1(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv10(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv11(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv12(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv13(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv14(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv15(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv16(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv17(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv18(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv19(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv2(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv20(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv21(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv22(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv23(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv24(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv25(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv26(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv27(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv28(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv29(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv3(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv30(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv31(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv32(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv4(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv5(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv6(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv7(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv8(m2c::_offsets, struct m2c::_STATE*);
extern bool negsubdiv9(m2c::_offsets, struct m2c::_STATE*);
extern bool nextesmkline(m2c::_offsets, struct m2c::_STATE*);
extern bool nextesmokeline(m2c::_offsets, struct m2c::_STATE*);
extern bool nextosmkline(m2c::_offsets, struct m2c::_STATE*);
extern bool nextosmokeline(m2c::_offsets, struct m2c::_STATE*);
extern bool normaladlb(m2c::_offsets, struct m2c::_STATE*);
extern bool normalblst(m2c::_offsets, struct m2c::_STATE*);
extern bool normalisemusic(m2c::_offsets, struct m2c::_STATE*);
extern bool normalisesound(m2c::_offsets, struct m2c::_STATE*);
extern bool normalnull(m2c::_offsets, struct m2c::_STATE*);
extern bool normalrlnd(m2c::_offsets, struct m2c::_STATE*);
extern bool normalspkr(m2c::_offsets, struct m2c::_STATE*);
extern bool null(m2c::_offsets, struct m2c::_STATE*);
extern bool null__com_drvr(m2c::_offsets, struct m2c::_STATE*);
extern bool nullcyclic(m2c::_offsets, struct m2c::_STATE*);
extern bool nullpoly(m2c::_offsets, struct m2c::_STATE*);
extern bool nullpoly__com_clip(m2c::_offsets, struct m2c::_STATE*);
extern bool nullpolydots(m2c::_offsets, struct m2c::_STATE*);
extern bool nullpolyline(m2c::_offsets, struct m2c::_STATE*);
extern bool nullpolyline__com_clip(m2c::_offsets, struct m2c::_STATE*);
extern bool numonly(m2c::_offsets, struct m2c::_STATE*);
extern bool objectdistsort1(m2c::_offsets, struct m2c::_STATE*);
extern bool objectdistsort2(m2c::_offsets, struct m2c::_STATE*);
extern bool objectdistsort3(m2c::_offsets, struct m2c::_STATE*);
extern bool objectdistsort4(m2c::_offsets, struct m2c::_STATE*);
extern bool objectpreview(m2c::_offsets, struct m2c::_STATE*);
extern bool oct1(m2c::_offsets, struct m2c::_STATE*);
extern bool oct2(m2c::_offsets, struct m2c::_STATE*);
extern bool oct7(m2c::_offsets, struct m2c::_STATE*);
extern bool oct8(m2c::_offsets, struct m2c::_STATE*);
extern bool octant1(m2c::_offsets, struct m2c::_STATE*);
extern bool octant1__polyfill(m2c::_offsets, struct m2c::_STATE*);
extern bool octant2(m2c::_offsets, struct m2c::_STATE*);
extern bool octant2__polyfill(m2c::_offsets, struct m2c::_STATE*);
extern bool octant3(m2c::_offsets, struct m2c::_STATE*);
extern bool octant4(m2c::_offsets, struct m2c::_STATE*);
extern bool octant5(m2c::_offsets, struct m2c::_STATE*);
extern bool octant6(m2c::_offsets, struct m2c::_STATE*);
extern bool octant7(m2c::_offsets, struct m2c::_STATE*);
extern bool octant7__polyfill(m2c::_offsets, struct m2c::_STATE*);
extern bool octant8(m2c::_offsets, struct m2c::_STATE*);
extern bool octant8__polyfill(m2c::_offsets, struct m2c::_STATE*);
extern bool overflowintr(m2c::_offsets, struct m2c::_STATE*);
extern bool p_bcdat(m2c::_offsets, struct m2c::_STATE*);
extern bool p_char1(m2c::_offsets, struct m2c::_STATE*);
extern bool p_char2(m2c::_offsets, struct m2c::_STATE*);
extern bool p_char3(m2c::_offsets, struct m2c::_STATE*);
extern bool p_crsr(m2c::_offsets, struct m2c::_STATE*);
extern bool p_decat(m2c::_offsets, struct m2c::_STATE*);
extern bool p_defcl(m2c::_offsets, struct m2c::_STATE*);
extern bool p_end(m2c::_offsets, struct m2c::_STATE*);
extern bool p_ext(m2c::_offsets, struct m2c::_STATE*);
extern bool p_hexat(m2c::_offsets, struct m2c::_STATE*);
extern bool p_input(m2c::_offsets, struct m2c::_STATE*);
extern bool p_nop(m2c::_offsets, struct m2c::_STATE*);
extern bool p_over0(m2c::_offsets, struct m2c::_STATE*);
extern bool p_over1(m2c::_offsets, struct m2c::_STATE*);
extern bool p_rect(m2c::_offsets, struct m2c::_STATE*);
extern bool p_rend(m2c::_offsets, struct m2c::_STATE*);
extern bool p_text(m2c::_offsets, struct m2c::_STATE*);
extern bool p_title(m2c::_offsets, struct m2c::_STATE*);
extern bool p_ulend(m2c::_offsets, struct m2c::_STATE*);
extern bool p_uline(m2c::_offsets, struct m2c::_STATE*);
extern bool parsecmndline(m2c::_offsets, struct m2c::_STATE*);
extern bool pauseplayevent(m2c::_offsets, struct m2c::_STATE*);
extern bool pd_attr(m2c::_offsets, struct m2c::_STATE*);
extern bool pd_decb(m2c::_offsets, struct m2c::_STATE*);
extern bool pd_decw(m2c::_offsets, struct m2c::_STATE*);
extern bool pd_hexb(m2c::_offsets, struct m2c::_STATE*);
extern bool pd_hexl(m2c::_offsets, struct m2c::_STATE*);
extern bool pd_hexw(m2c::_offsets, struct m2c::_STATE*);
extern bool pd_line(m2c::_offsets, struct m2c::_STATE*);
extern bool pd_qspr(m2c::_offsets, struct m2c::_STATE*);
extern bool pd_vga(m2c::_offsets, struct m2c::_STATE*);
extern bool pd_x(m2c::_offsets, struct m2c::_STATE*);
extern bool pd_xmov(m2c::_offsets, struct m2c::_STATE*);
extern bool pd_xy(m2c::_offsets, struct m2c::_STATE*);
extern bool pd_xymv(m2c::_offsets, struct m2c::_STATE*);
extern bool pd_y(m2c::_offsets, struct m2c::_STATE*);
extern bool pd_ymov(m2c::_offsets, struct m2c::_STATE*);
extern bool pictureevent(m2c::_offsets, struct m2c::_STATE*);
extern bool pitchdnevent(m2c::_offsets, struct m2c::_STATE*);
extern bool pitchupevent(m2c::_offsets, struct m2c::_STATE*);
extern bool polyclip(m2c::_offsets, struct m2c::_STATE*);
extern bool polydotclip(m2c::_offsets, struct m2c::_STATE*);
extern bool polyfill(m2c::_offsets, struct m2c::_STATE*);
extern bool polyline(m2c::_offsets, struct m2c::_STATE*);
extern bool polylineclip(m2c::_offsets, struct m2c::_STATE*);
extern bool polyrail1(m2c::_offsets, struct m2c::_STATE*);
extern bool polyrail2(m2c::_offsets, struct m2c::_STATE*);
extern bool polyroad1(m2c::_offsets, struct m2c::_STATE*);
extern bool polyroad2(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv0(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv1(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv10(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv11(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv12(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv13(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv14(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv15(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv16(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv17(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv18(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv19(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv2(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv20(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv21(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv22(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv23(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv24(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv25(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv26(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv27(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv28(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv29(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv3(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv30(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv31(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv32(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv4(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv5(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv6(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv7(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv8(m2c::_offsets, struct m2c::_STATE*);
extern bool possubdiv9(m2c::_offsets, struct m2c::_STATE*);
extern bool pp_attr(m2c::_offsets, struct m2c::_STATE*);
extern bool pp_decw(m2c::_offsets, struct m2c::_STATE*);
extern bool pp_str(m2c::_offsets, struct m2c::_STATE*);
extern bool previewintr100(m2c::_offsets, struct m2c::_STATE*);
extern bool printchar(m2c::_offsets, struct m2c::_STATE*);
extern bool printchar1(m2c::_offsets, struct m2c::_STATE*);
extern bool printchar2(m2c::_offsets, struct m2c::_STATE*);
extern bool printchar3(m2c::_offsets, struct m2c::_STATE*);
extern bool printdebuginfo(m2c::_offsets, struct m2c::_STATE*);
extern bool printdecword(m2c::_offsets, struct m2c::_STATE*);
extern bool printdol(m2c::_offsets, struct m2c::_STATE*);
extern bool printhexbyte(m2c::_offsets, struct m2c::_STATE*);
extern bool pv_attr(m2c::_offsets, struct m2c::_STATE*);
extern bool pv_chr(m2c::_offsets, struct m2c::_STATE*);
extern bool pv_decb(m2c::_offsets, struct m2c::_STATE*);
extern bool pv_decw(m2c::_offsets, struct m2c::_STATE*);
extern bool pv_eta(m2c::_offsets, struct m2c::_STATE*);
extern bool pv_hexb(m2c::_offsets, struct m2c::_STATE*);
extern bool pv_hexl(m2c::_offsets, struct m2c::_STATE*);
extern bool pv_hexw(m2c::_offsets, struct m2c::_STATE*);
extern bool pv_pdeg(m2c::_offsets, struct m2c::_STATE*);
extern bool pv_rng(m2c::_offsets, struct m2c::_STATE*);
extern bool pv_str(m2c::_offsets, struct m2c::_STATE*);
extern bool pv_x(m2c::_offsets, struct m2c::_STATE*);
extern bool pv_xy(m2c::_offsets, struct m2c::_STATE*);
extern bool pv_y(m2c::_offsets, struct m2c::_STATE*);
extern bool qcalcgndheight(m2c::_offsets, struct m2c::_STATE*);
extern bool qfadein(m2c::_offsets, struct m2c::_STATE*);
extern bool qfadeout(m2c::_offsets, struct m2c::_STATE*);
extern bool qspothta(m2c::_offsets, struct m2c::_STATE*);
extern bool qspothtb(m2c::_offsets, struct m2c::_STATE*);
extern bool qspothtc(m2c::_offsets, struct m2c::_STATE*);
extern bool qspothtd(m2c::_offsets, struct m2c::_STATE*);
extern bool qspothte(m2c::_offsets, struct m2c::_STATE*);
extern bool qspothtf(m2c::_offsets, struct m2c::_STATE*);
extern bool qspothtg(m2c::_offsets, struct m2c::_STATE*);
extern bool qspothth(m2c::_offsets, struct m2c::_STATE*);
extern bool qspothti(m2c::_offsets, struct m2c::_STATE*);
extern bool qsprite(m2c::_offsets, struct m2c::_STATE*);
extern bool quad1(m2c::_offsets, struct m2c::_STATE*);
extern bool quad2(m2c::_offsets, struct m2c::_STATE*);
extern bool quad3(m2c::_offsets, struct m2c::_STATE*);
extern bool quad4(m2c::_offsets, struct m2c::_STATE*);
extern bool quicklineclip(m2c::_offsets, struct m2c::_STATE*);
extern bool quickoutcodes(m2c::_offsets, struct m2c::_STATE*);
extern bool quicksetup(m2c::_offsets, struct m2c::_STATE*);
extern bool radardisp(m2c::_offsets, struct m2c::_STATE*);
extern bool radardisp__tab(m2c::_offsets, struct m2c::_STATE*);
extern bool randomizeclouds(m2c::_offsets, struct m2c::_STATE*);
extern bool randx(m2c::_offsets, struct m2c::_STATE*);
extern bool readdacblock(m2c::_offsets, struct m2c::_STATE*);
extern bool readdata(m2c::_offsets, struct m2c::_STATE*);
extern bool readjoysticks(m2c::_offsets, struct m2c::_STATE*);
extern bool readmouse(m2c::_offsets, struct m2c::_STATE*);
extern bool readmousemotion(m2c::_offsets, struct m2c::_STATE*);
extern bool recaljoysticks(m2c::_offsets, struct m2c::_STATE*);
extern bool refdisp(m2c::_offsets, struct m2c::_STATE*);
extern bool refreshadlb(m2c::_offsets, struct m2c::_STATE*);
extern bool refreshblst(m2c::_offsets, struct m2c::_STATE*);
extern bool refreshmusic(m2c::_offsets, struct m2c::_STATE*);
extern bool refreshnull(m2c::_offsets, struct m2c::_STATE*);
extern bool refreshrlnd(m2c::_offsets, struct m2c::_STATE*);
extern bool refreshsound(m2c::_offsets, struct m2c::_STATE*);
extern bool refreshspkr(m2c::_offsets, struct m2c::_STATE*);
extern bool releasebomb(m2c::_offsets, struct m2c::_STATE*);
extern bool releasedecoy(m2c::_offsets, struct m2c::_STATE*);
extern bool releasepackage(m2c::_offsets, struct m2c::_STATE*);
extern bool reseed(m2c::_offsets, struct m2c::_STATE*);
extern bool resetmouse(m2c::_offsets, struct m2c::_STATE*);
extern bool restorecriterr(m2c::_offsets, struct m2c::_STATE*);
extern bool restorekbd(m2c::_offsets, struct m2c::_STATE*);
extern bool restoremouse(m2c::_offsets, struct m2c::_STATE*);
extern bool restoreoverflow(m2c::_offsets, struct m2c::_STATE*);
extern bool restoretimer(m2c::_offsets, struct m2c::_STATE*);
extern bool resumemusic(m2c::_offsets, struct m2c::_STATE*);
extern bool resumesound(m2c::_offsets, struct m2c::_STATE*);
extern bool retrievedata(m2c::_offsets, struct m2c::_STATE*);
extern bool reverseevent(m2c::_offsets, struct m2c::_STATE*);
extern bool rotatenull(m2c::_offsets, struct m2c::_STATE*);
extern bool rotateview(m2c::_offsets, struct m2c::_STATE*);
extern bool rotateviewbk(m2c::_offsets, struct m2c::_STATE*);
extern bool rotateviewdn(m2c::_offsets, struct m2c::_STATE*);
extern bool rotateviewft(m2c::_offsets, struct m2c::_STATE*);
extern bool rotateviewlt(m2c::_offsets, struct m2c::_STATE*);
extern bool rotateviewrt(m2c::_offsets, struct m2c::_STATE*);
extern bool rotateviewup(m2c::_offsets, struct m2c::_STATE*);
extern bool routeplandisp(m2c::_offsets, struct m2c::_STATE*);
extern bool rvrsmeshfill(m2c::_offsets, struct m2c::_STATE*);
extern bool rvrsoctant1(m2c::_offsets, struct m2c::_STATE*);
extern bool rvrsoctant2(m2c::_offsets, struct m2c::_STATE*);
extern bool rvrsoctant3(m2c::_offsets, struct m2c::_STATE*);
extern bool rvrsoctant4(m2c::_offsets, struct m2c::_STATE*);
extern bool rvrsoctant5(m2c::_offsets, struct m2c::_STATE*);
extern bool rvrsoctant6(m2c::_offsets, struct m2c::_STATE*);
extern bool rvrsoctant7(m2c::_offsets, struct m2c::_STATE*);
extern bool rvrsoctant8(m2c::_offsets, struct m2c::_STATE*);
extern bool rvrspolyfill(m2c::_offsets, struct m2c::_STATE*);
extern bool rwralertadlb(m2c::_offsets, struct m2c::_STATE*);
extern bool rwralertblst(m2c::_offsets, struct m2c::_STATE*);
extern bool rwralertnull(m2c::_offsets, struct m2c::_STATE*);
extern bool rwralertrlnd(m2c::_offsets, struct m2c::_STATE*);
extern bool rwralertsound(m2c::_offsets, struct m2c::_STATE*);
extern bool rwralertspkr(m2c::_offsets, struct m2c::_STATE*);
extern bool rxopponentdata(m2c::_offsets, struct m2c::_STATE*);
extern bool samsymbol(m2c::_offsets, struct m2c::_STATE*);
extern bool savefile(m2c::_offsets, struct m2c::_STATE*);
extern bool savegamedata(m2c::_offsets, struct m2c::_STATE*);
extern bool savemapdata(m2c::_offsets, struct m2c::_STATE*);
extern bool scancraters(m2c::_offsets, struct m2c::_STATE*);
extern bool scanface(m2c::_offsets, struct m2c::_STATE*);
extern bool scanhills(m2c::_offsets, struct m2c::_STATE*);
extern bool scansectors(m2c::_offsets, struct m2c::_STATE*);
extern bool scansmoke(m2c::_offsets, struct m2c::_STATE*);
extern bool scantrees(m2c::_offsets, struct m2c::_STATE*);
extern bool scanvertex1(m2c::_offsets, struct m2c::_STATE*);
extern bool scanvertex16(m2c::_offsets, struct m2c::_STATE*);
extern bool scanvertex16__features(m2c::_offsets, struct m2c::_STATE*);
extern bool scanvertex1__clouds(m2c::_offsets, struct m2c::_STATE*);
extern bool scanvertex1__features(m2c::_offsets, struct m2c::_STATE*);
extern bool scanvertex1__towns(m2c::_offsets, struct m2c::_STATE*);
extern bool scanvertex2(m2c::_offsets, struct m2c::_STATE*);
extern bool scanvertex2__clouds(m2c::_offsets, struct m2c::_STATE*);
extern bool scanvertex2__features(m2c::_offsets, struct m2c::_STATE*);
extern bool scanvertex2__towns(m2c::_offsets, struct m2c::_STATE*);
extern bool scanvertex8(m2c::_offsets, struct m2c::_STATE*);
extern bool scanvertex8__clouds(m2c::_offsets, struct m2c::_STATE*);
extern bool scanvertex8__features(m2c::_offsets, struct m2c::_STATE*);
extern bool scanvertex8__towns(m2c::_offsets, struct m2c::_STATE*);
extern bool screechadlb(m2c::_offsets, struct m2c::_STATE*);
extern bool screechblst(m2c::_offsets, struct m2c::_STATE*);
extern bool screechnull(m2c::_offsets, struct m2c::_STATE*);
extern bool screechrlnd(m2c::_offsets, struct m2c::_STATE*);
extern bool screechsound(m2c::_offsets, struct m2c::_STATE*);
extern bool screechspkr(m2c::_offsets, struct m2c::_STATE*);
extern bool screenshaker(m2c::_offsets, struct m2c::_STATE*);
extern bool selectafds(m2c::_offsets, struct m2c::_STATE*);
extern bool selectautomfd(m2c::_offsets, struct m2c::_STATE*);
extern bool selectcase(m2c::_offsets, struct m2c::_STATE*);
extern bool selectflir(m2c::_offsets, struct m2c::_STATE*);
extern bool selectloopback(m2c::_offsets, struct m2c::_STATE*);
extern bool selectloopback__mfd(m2c::_offsets, struct m2c::_STATE*);
extern bool selectmap(m2c::_offsets, struct m2c::_STATE*);
extern bool selectmap__mfd(m2c::_offsets, struct m2c::_STATE*);
extern bool selectmodeok(m2c::_offsets, struct m2c::_STATE*);
extern bool selectmodeok__mfd(m2c::_offsets, struct m2c::_STATE*);
extern bool selectradar(m2c::_offsets, struct m2c::_STATE*);
extern bool selectradar__mfd(m2c::_offsets, struct m2c::_STATE*);
extern bool selectradarmfd(m2c::_offsets, struct m2c::_STATE*);
extern bool selecttiald(m2c::_offsets, struct m2c::_STATE*);
extern bool sendpacket(m2c::_offsets, struct m2c::_STATE*);
extern bool setattributes(m2c::_offsets, struct m2c::_STATE*);
extern bool setchar(m2c::_offsets, struct m2c::_STATE*);
extern bool setdronewpnlock(m2c::_offsets, struct m2c::_STATE*);
extern bool setgameviewmode(m2c::_offsets, struct m2c::_STATE*);
extern bool setgmrpalette(m2c::_offsets, struct m2c::_STATE*);
extern bool sethudlevel(m2c::_offsets, struct m2c::_STATE*);
extern bool setirpalette(m2c::_offsets, struct m2c::_STATE*);
extern bool setmouselimits(m2c::_offsets, struct m2c::_STATE*);
extern bool setmousepos(m2c::_offsets, struct m2c::_STATE*);
extern bool setpanelmode(m2c::_offsets, struct m2c::_STATE*);
extern bool setpixel(m2c::_offsets, struct m2c::_STATE*);
extern bool setsspriteclip(m2c::_offsets, struct m2c::_STATE*);
extern bool settimedate(m2c::_offsets, struct m2c::_STATE*);
extern bool setvideomode(m2c::_offsets, struct m2c::_STATE*);
extern bool setviewmode(m2c::_offsets, struct m2c::_STATE*);
extern bool singletrack1(m2c::_offsets, struct m2c::_STATE*);
extern bool singletrack2(m2c::_offsets, struct m2c::_STATE*);
extern bool slowcyclic(m2c::_offsets, struct m2c::_STATE*);
extern bool sortctrljoy1(m2c::_offsets, struct m2c::_STATE*);
extern bool sortctrljoy2(m2c::_offsets, struct m2c::_STATE*);
extern bool sortctrlkbd(m2c::_offsets, struct m2c::_STATE*);
extern bool sortctrlmouse(m2c::_offsets, struct m2c::_STATE*);
extern bool sortfacedist1(m2c::_offsets, struct m2c::_STATE*);
extern bool sortfacedist16(m2c::_offsets, struct m2c::_STATE*);
extern bool sortfacedist2(m2c::_offsets, struct m2c::_STATE*);
extern bool sortfacedist8(m2c::_offsets, struct m2c::_STATE*);
extern bool sortpolycrt(m2c::_offsets, struct m2c::_STATE*);
extern bool sortpolycrt__com_clip(m2c::_offsets, struct m2c::_STATE*);
extern bool sortprmdecexc(m2c::_offsets, struct m2c::_STATE*);
extern bool sortprmdecinc(m2c::_offsets, struct m2c::_STATE*);
extern bool sortprmline1(m2c::_offsets, struct m2c::_STATE*);
extern bool sortprmline2(m2c::_offsets, struct m2c::_STATE*);
extern bool sortprmpoly1(m2c::_offsets, struct m2c::_STATE*);
extern bool sortprmpoly2(m2c::_offsets, struct m2c::_STATE*);
extern bool sortquad1(m2c::_offsets, struct m2c::_STATE*);
extern bool sortquad2(m2c::_offsets, struct m2c::_STATE*);
extern bool sortquad3(m2c::_offsets, struct m2c::_STATE*);
extern bool sortquad4(m2c::_offsets, struct m2c::_STATE*);
extern bool sortrunway1(m2c::_offsets, struct m2c::_STATE*);
extern bool sortrunway16(m2c::_offsets, struct m2c::_STATE*);
extern bool sortrunway2(m2c::_offsets, struct m2c::_STATE*);
extern bool sortrunway8(m2c::_offsets, struct m2c::_STATE*);
extern bool sortsecdecexc(m2c::_offsets, struct m2c::_STATE*);
extern bool sortsecdecinc(m2c::_offsets, struct m2c::_STATE*);
extern bool sortsecline1(m2c::_offsets, struct m2c::_STATE*);
extern bool sortsecline2(m2c::_offsets, struct m2c::_STATE*);
extern bool sortsecpoly1(m2c::_offsets, struct m2c::_STATE*);
extern bool sortsecpoly2(m2c::_offsets, struct m2c::_STATE*);
extern bool sqrt32(m2c::_offsets, struct m2c::_STATE*);
extern bool ssprite(m2c::_offsets, struct m2c::_STATE*);
extern bool staticcollision(m2c::_offsets, struct m2c::_STATE*);
extern bool stopcomms(m2c::_offsets, struct m2c::_STATE*);
extern bool storeworkscreen(m2c::_offsets, struct m2c::_STATE*);
extern bool surfacecheck(m2c::_offsets, struct m2c::_STATE*);
extern bool suspendadlb(m2c::_offsets, struct m2c::_STATE*);
extern bool suspendblst(m2c::_offsets, struct m2c::_STATE*);
extern bool suspendmusic(m2c::_offsets, struct m2c::_STATE*);
extern bool suspendnull(m2c::_offsets, struct m2c::_STATE*);
extern bool suspendrlnd(m2c::_offsets, struct m2c::_STATE*);
extern bool suspendsound(m2c::_offsets, struct m2c::_STATE*);
extern bool suspendspkr(m2c::_offsets, struct m2c::_STATE*);
extern bool swappalettes(m2c::_offsets, struct m2c::_STATE*);
extern bool switchonlights(m2c::_offsets, struct m2c::_STATE*);
extern bool synccomms(m2c::_offsets, struct m2c::_STATE*);
extern bool tan_bfill(m2c::_offsets, struct m2c::_STATE*);
extern bool tan_bsprite(m2c::_offsets, struct m2c::_STATE*);
extern bool tan_dload(m2c::_offsets, struct m2c::_STATE*);
extern bool tan_hfill(m2c::_offsets, struct m2c::_STATE*);
extern bool tan_hline(m2c::_offsets, struct m2c::_STATE*);
extern bool tan_initms(m2c::_offsets, struct m2c::_STATE*);
extern bool tan_initss(m2c::_offsets, struct m2c::_STATE*);
extern bool tan_line(m2c::_offsets, struct m2c::_STATE*);
extern bool tan_loadmouse(m2c::_offsets, struct m2c::_STATE*);
extern bool tan_loadscreen(m2c::_offsets, struct m2c::_STATE*);
extern bool tan_mfill(m2c::_offsets, struct m2c::_STATE*);
extern bool tan_msprite(m2c::_offsets, struct m2c::_STATE*);
extern bool tan_pfill(m2c::_offsets, struct m2c::_STATE*);
extern bool tan_prtc1(m2c::_offsets, struct m2c::_STATE*);
extern bool tan_prtc2(m2c::_offsets, struct m2c::_STATE*);
extern bool tan_prtc3(m2c::_offsets, struct m2c::_STATE*);
extern bool tan_qsprite(m2c::_offsets, struct m2c::_STATE*);
extern bool tan_savemouse(m2c::_offsets, struct m2c::_STATE*);
extern bool tan_savescreen(m2c::_offsets, struct m2c::_STATE*);
extern bool tan_setpx(m2c::_offsets, struct m2c::_STATE*);
extern bool tan_sfill(m2c::_offsets, struct m2c::_STATE*);
extern bool tan_ssprite(m2c::_offsets, struct m2c::_STATE*);
extern bool tan_uncomppic(m2c::_offsets, struct m2c::_STATE*);
extern bool tan_vline(m2c::_offsets, struct m2c::_STATE*);
extern bool tan_vmode(m2c::_offsets, struct m2c::_STATE*);
extern bool tangent(m2c::_offsets, struct m2c::_STATE*);
extern bool tdsymadjustlock(m2c::_offsets, struct m2c::_STATE*);
extern bool tdsymadjustlock_ori(m2c::_offsets, struct m2c::_STATE*);
extern bool tdsymadjustlock_ori2(m2c::_offsets, struct m2c::_STATE*);
extern bool tdsymok(m2c::_offsets, struct m2c::_STATE*);
extern bool tdsymok_ori(m2c::_offsets, struct m2c::_STATE*);
extern bool tdsymok_ori2(m2c::_offsets, struct m2c::_STATE*);
extern bool tdsymtargetlock(m2c::_offsets, struct m2c::_STATE*);
extern bool tdsymtargetlock_ori(m2c::_offsets, struct m2c::_STATE*);
extern bool tdsymtargetlock_ori2(m2c::_offsets, struct m2c::_STATE*);
extern bool tdsymzoom(m2c::_offsets, struct m2c::_STATE*);
extern bool tdsymzoom_ori(m2c::_offsets, struct m2c::_STATE*);
extern bool tdsymzoom_ori2(m2c::_offsets, struct m2c::_STATE*);
extern bool tem_dload(m2c::_offsets, struct m2c::_STATE*);
extern bool tem_vmode(m2c::_offsets, struct m2c::_STATE*);
extern bool testsector1(m2c::_offsets, struct m2c::_STATE*);
extern bool testsector16(m2c::_offsets, struct m2c::_STATE*);
extern bool testsector2(m2c::_offsets, struct m2c::_STATE*);
extern bool testsector8(m2c::_offsets, struct m2c::_STATE*);
extern bool tialdadjustlock(m2c::_offsets, struct m2c::_STATE*);
extern bool tialdadjustlock_ori(m2c::_offsets, struct m2c::_STATE*);
extern bool tialdadjustlock_ori2(m2c::_offsets, struct m2c::_STATE*);
extern bool tialddisp(m2c::_offsets, struct m2c::_STATE*);
extern bool tialddisp_ori(m2c::_offsets, struct m2c::_STATE*);
extern bool tialddisp_ori2(m2c::_offsets, struct m2c::_STATE*);
extern bool tialdinit(m2c::_offsets, struct m2c::_STATE*);
extern bool tialdinit_ori(m2c::_offsets, struct m2c::_STATE*);
extern bool tialdinit_ori2(m2c::_offsets, struct m2c::_STATE*);
extern bool tialdsearch(m2c::_offsets, struct m2c::_STATE*);
extern bool tialdsearch_ori(m2c::_offsets, struct m2c::_STATE*);
extern bool tialdsearch_ori2(m2c::_offsets, struct m2c::_STATE*);
extern bool tialdtargetlock(m2c::_offsets, struct m2c::_STATE*);
extern bool tialdtargetlock_ori(m2c::_offsets, struct m2c::_STATE*);
extern bool tialdtargetlock_ori2(m2c::_offsets, struct m2c::_STATE*);
extern bool tialdzoom(m2c::_offsets, struct m2c::_STATE*);
extern bool tialdzoom_ori(m2c::_offsets, struct m2c::_STATE*);
extern bool tialdzoom_ori2(m2c::_offsets, struct m2c::_STATE*);
extern bool timerintr(m2c::_offsets, struct m2c::_STATE*);
extern bool treecollision(m2c::_offsets, struct m2c::_STATE*);
extern bool tv1_calccrt(m2c::_offsets, struct m2c::_STATE*);
extern bool tv1_circlecrt(m2c::_offsets, struct m2c::_STATE*);
extern bool tv1_scalevp(m2c::_offsets, struct m2c::_STATE*);
extern bool tv2_calccrt(m2c::_offsets, struct m2c::_STATE*);
extern bool tv2_circlecrt(m2c::_offsets, struct m2c::_STATE*);
extern bool tv2_scalevp(m2c::_offsets, struct m2c::_STATE*);
extern bool tv3_calccrt(m2c::_offsets, struct m2c::_STATE*);
extern bool tv3_circlecrt(m2c::_offsets, struct m2c::_STATE*);
extern bool tv3_scalevp(m2c::_offsets, struct m2c::_STATE*);
extern bool tv4_calccrt(m2c::_offsets, struct m2c::_STATE*);
extern bool tv4_circlecrt(m2c::_offsets, struct m2c::_STATE*);
extern bool tv4_scalevp(m2c::_offsets, struct m2c::_STATE*);
extern bool tv5_calccrt(m2c::_offsets, struct m2c::_STATE*);
extern bool tv5_circlecrt(m2c::_offsets, struct m2c::_STATE*);
extern bool tv5_scalevp(m2c::_offsets, struct m2c::_STATE*);
extern bool txtornadodata(m2c::_offsets, struct m2c::_STATE*);
extern bool unpackdeltapic(m2c::_offsets, struct m2c::_STATE*);
extern bool updateaaa(m2c::_offsets, struct m2c::_STATE*);
extern bool updateadi2(m2c::_offsets, struct m2c::_STATE*);
extern bool updateadlb(m2c::_offsets, struct m2c::_STATE*);
extern bool updatealarm(m2c::_offsets, struct m2c::_STATE*);
extern bool updateavionics(m2c::_offsets, struct m2c::_STATE*);
extern bool updatebl755(m2c::_offsets, struct m2c::_STATE*);
extern bool updateblst(m2c::_offsets, struct m2c::_STATE*);
extern bool updatecannon(m2c::_offsets, struct m2c::_STATE*);
extern bool updateconvoys(m2c::_offsets, struct m2c::_STATE*);
extern bool updatectrlsface(m2c::_offsets, struct m2c::_STATE*);
extern bool updatedecoy(m2c::_offsets, struct m2c::_STATE*);
extern bool updatedemo(m2c::_offsets, struct m2c::_STATE*);
extern bool updatedestroyed(m2c::_offsets, struct m2c::_STATE*);
extern bool updatedrone(m2c::_offsets, struct m2c::_STATE*);
extern bool updateescope2(m2c::_offsets, struct m2c::_STATE*);
extern bool updateextrn(m2c::_offsets, struct m2c::_STATE*);
extern bool updateframe(m2c::_offsets, struct m2c::_STATE*);
extern bool updategameview(m2c::_offsets, struct m2c::_STATE*);
extern bool updategloc(m2c::_offsets, struct m2c::_STATE*);
extern bool updategpb(m2c::_offsets, struct m2c::_STATE*);
extern bool updatehelicops(m2c::_offsets, struct m2c::_STATE*);
extern bool updatehud(m2c::_offsets, struct m2c::_STATE*);
extern bool updatehud2(m2c::_offsets, struct m2c::_STATE*);
extern bool updatejp233(m2c::_offsets, struct m2c::_STATE*);
extern bool updatelgb(m2c::_offsets, struct m2c::_STATE*);
extern bool updatelnavig(m2c::_offsets, struct m2c::_STATE*);
extern bool updatelookdown(m2c::_offsets, struct m2c::_STATE*);
extern bool updatelookdown__views(m2c::_offsets, struct m2c::_STATE*);
extern bool updatelookup(m2c::_offsets, struct m2c::_STATE*);
extern bool updatelpilot(m2c::_offsets, struct m2c::_STATE*);
extern bool updatemap(m2c::_offsets, struct m2c::_STATE*);
extern bool updatemfd(m2c::_offsets, struct m2c::_STATE*);
extern bool updatemissile(m2c::_offsets, struct m2c::_STATE*);
extern bool updatemobile(m2c::_offsets, struct m2c::_STATE*);
extern bool updatemovingmap(m2c::_offsets, struct m2c::_STATE*);
extern bool updatenavig(m2c::_offsets, struct m2c::_STATE*);
extern bool updatenavig__views(m2c::_offsets, struct m2c::_STATE*);
extern bool updatenavigmfd(m2c::_offsets, struct m2c::_STATE*);
extern bool updatenull(m2c::_offsets, struct m2c::_STATE*);
extern bool updatepanel(m2c::_offsets, struct m2c::_STATE*);
extern bool updatepilot(m2c::_offsets, struct m2c::_STATE*);
extern bool updatepilot__views(m2c::_offsets, struct m2c::_STATE*);
extern bool updatepilotmfd(m2c::_offsets, struct m2c::_STATE*);
extern bool updateplanes(m2c::_offsets, struct m2c::_STATE*);
extern bool updateremote(m2c::_offsets, struct m2c::_STATE*);
extern bool updateret(m2c::_offsets, struct m2c::_STATE*);
extern bool updaterlnd(m2c::_offsets, struct m2c::_STATE*);
extern bool updaternavig(m2c::_offsets, struct m2c::_STATE*);
extern bool updaterpilot(m2c::_offsets, struct m2c::_STATE*);
extern bool updaterwr(m2c::_offsets, struct m2c::_STATE*);
extern bool updaterwr2(m2c::_offsets, struct m2c::_STATE*);
extern bool updatesam(m2c::_offsets, struct m2c::_STATE*);
extern bool updatesatellite(m2c::_offsets, struct m2c::_STATE*);
extern bool updatesound(m2c::_offsets, struct m2c::_STATE*);
extern bool updatespectator(m2c::_offsets, struct m2c::_STATE*);
extern bool updatespkr(m2c::_offsets, struct m2c::_STATE*);
extern bool updatetab(m2c::_offsets, struct m2c::_STATE*);
extern bool updatetab1(m2c::_offsets, struct m2c::_STATE*);
extern bool updatetab2(m2c::_offsets, struct m2c::_STATE*);
extern bool updatetgtwp(m2c::_offsets, struct m2c::_STATE*);
extern bool updatetracking(m2c::_offsets, struct m2c::_STATE*);
extern bool updateweapon(m2c::_offsets, struct m2c::_STATE*);
extern bool updateweapons(m2c::_offsets, struct m2c::_STATE*);
extern bool updatezrk_aaa(m2c::_offsets, struct m2c::_STATE*);
extern bool userhorizon(m2c::_offsets, struct m2c::_STATE*);
extern bool useroptions(m2c::_offsets, struct m2c::_STATE*);
extern bool uservisoptions(m2c::_offsets, struct m2c::_STATE*);
extern bool uservisual(m2c::_offsets, struct m2c::_STATE*);
extern bool validatetiald(m2c::_offsets, struct m2c::_STATE*);
extern bool vcalcoutcodes(m2c::_offsets, struct m2c::_STATE*);
extern bool vdotclip(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_bfill(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_brackets(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_bsprite(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_clrnavigpan(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_clrpilotpan(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_dload(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_drwnavigpan(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_drwnavigpanbrief(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_drwpilotpan(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_hfill(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_hline(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_initms(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_initpanels(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_initqs(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_initss(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_ironwork(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_line(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_loadmouse(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_loadpanel(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_loadscreen(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_mfill(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_msprite(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_pfill(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_prtc1(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_prtc2(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_prtc3(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_qsprite(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_savemouse(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_savescreen(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_setpx(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_sfill(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_ssprite(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_vline(m2c::_offsets, struct m2c::_STATE*);
extern bool vga_vmode(m2c::_offsets, struct m2c::_STATE*);
extern bool vgaphotodflt(m2c::_offsets, struct m2c::_STATE*);
extern bool visual(m2c::_offsets, struct m2c::_STATE*);
extern bool visualinfo(m2c::_offsets, struct m2c::_STATE*);
extern bool vlinedraw(m2c::_offsets, struct m2c::_STATE*);
extern bool vpolyclip(m2c::_offsets, struct m2c::_STATE*);
extern bool vpolylineclip(m2c::_offsets, struct m2c::_STATE*);
extern bool vquicklineclip(m2c::_offsets, struct m2c::_STATE*);
extern bool vquickoutcodes(m2c::_offsets, struct m2c::_STATE*);
extern bool vsetrotation(m2c::_offsets, struct m2c::_STATE*);
extern bool vsetviewport(m2c::_offsets, struct m2c::_STATE*);
extern bool weaponscontrol(m2c::_offsets, struct m2c::_STATE*);
extern bool wpnkilldrone(m2c::_offsets, struct m2c::_STATE*);
extern bool xcalcunclipcrt(m2c::_offsets, struct m2c::_STATE*);
extern bool xdotclip(m2c::_offsets, struct m2c::_STATE*);

namespace m2c{

struct Memory m;

struct Memory types;

db(& stack)[STACK_SIZE]=m.stack;
db(& heap)[HEAP_SIZE]=m.heap;


struct LinkedSegmentAnchor {
    const db* base;
    size_t linear;
    size_t extent;
    bool is_data;
};

dw linked_data_runtime_segment = 0;
static dw linked_data_runtime_segments[8] = {};

static const LinkedSegmentAnchor linked_segment_anchors[] = {
    {reinterpret_cast<const db*>(&::default_seg), 0x0, 0x31d, true},
    {reinterpret_cast<const db*>(&::data), 0x70, 0xdfe8, true},
    {reinterpret_cast<const db*>(&::wsdata), 0xe060, 0xfb40, true},
    {reinterpret_cast<const db*>(&::ssprdata), 0x1dba0, 0x5da, true},
    {reinterpret_cast<const db*>(&::msprdata), 0x1e180, 0x12, true},
    {reinterpret_cast<const db*>(&::qsprdata), 0x1e1a0, 0x12, true},
    {reinterpret_cast<const db*>(&::stack), 0x1e1c0, 0x885e, true},
    {reinterpret_cast<const db*>(&::hdr_data), 0x26a20, 0x4ae, true},
    {reinterpret_cast<const db*>(&::paldata), 0x26ed0, 0xaaa, true},
    {reinterpret_cast<const db*>(&::secdata1), 0x27980, 0x966a, true},
    {reinterpret_cast<const db*>(&::featobj1), 0x30ff0, 0x52d1, true},
    {reinterpret_cast<const db*>(&::grndobj1), 0x362d0, 0xfe4d, true},
    {reinterpret_cast<const db*>(&::flatobj1), 0x46120, 0x1f5f, true},
    {reinterpret_cast<const db*>(&::mobobj1), 0x48080, 0xff27, true},
    {reinterpret_cast<const db*>(&::msecdata1), 0x57fb0, 0x4ad, true},
    {reinterpret_cast<const db*>(&::stardata), 0x58460, 0x640, true},
    {reinterpret_cast<const db*>(&::craterdata), 0x58aa0, 0x700, true},
    {reinterpret_cast<const db*>(&::smokedata), 0x591a0, 0xd00, true},
    {reinterpret_cast<const db*>(&::wpndata), 0x59ea0, 0x1e00, true},
    {reinterpret_cast<const db*>(&::prevdata), 0x5bca0, 0x4e8, true},
};

static const LinkedSegmentAnchor* find_linked_segment_anchor(const void* symbol) {
    const db* ptr = reinterpret_cast<const db*>(symbol);
    const LinkedSegmentAnchor* selected = nullptr;
    for (const LinkedSegmentAnchor& anchor : linked_segment_anchors) {
        if (ptr >= anchor.base && (selected == nullptr || anchor.base >= selected->base)) {
            selected = &anchor;
        }
    }
    return selected;
}

static const LinkedSegmentAnchor* primary_linked_data_anchor() {
    for (const LinkedSegmentAnchor& anchor : linked_segment_anchors) {
        if (anchor.linear != 0 && anchor.is_data) {
            return &anchor;
        }
    }
    return nullptr;
}

static bool is_linked_data_runtime_segment(dw segment) {
    if (segment == 0) {
        return false;
    }
    if (segment == linked_data_runtime_segment) {
        return true;
    }
    for (dw known_segment : linked_data_runtime_segments) {
        if (segment == known_segment) {
            return true;
        }
    }
    return false;
}

static void remember_linked_data_runtime_segment(dw segment) {
    if (segment == 0 || segment >= 0xa000 || is_linked_data_runtime_segment(segment)) {
        return;
    }
    linked_data_runtime_segment = segment;
    for (dw& known_segment : linked_data_runtime_segments) {
        if (known_segment == 0) {
            known_segment = segment;
            return;
        }
    }
    for (size_t i = 1; i < sizeof(linked_data_runtime_segments) / sizeof(linked_data_runtime_segments[0]); ++i) {
        linked_data_runtime_segments[i - 1] = linked_data_runtime_segments[i];
    }
    linked_data_runtime_segments[sizeof(linked_data_runtime_segments) / sizeof(linked_data_runtime_segments[0]) - 1] = segment;
}

db* linked_data_segment_raddr(dw segment, dw offset) {
    for (const LinkedSegmentAnchor& anchor : linked_segment_anchors) {
        if (anchor.is_data && segment == static_cast<dw>(anchor.linear >> 4)) {
            return const_cast<db*>(anchor.base) + offset;
        }
    }
    if (is_linked_data_runtime_segment(segment)) {
        const size_t position = static_cast<size_t>(segment) << 4;
        for (const LinkedSegmentAnchor& anchor : linked_segment_anchors) {
            if (!anchor.is_data || anchor.linear == 0 || anchor.extent == 0) {
                continue;
            }
            const size_t lower = anchor.linear > anchor.extent ? anchor.linear - anchor.extent : 0;
            if (position >= lower && position < anchor.linear + anchor.extent) {
                // A runtime paragraph is an offset inside the anchor's segment,
                // not the anchor base itself: keep the segment-relative delta.
                const ptrdiff_t delta = static_cast<ptrdiff_t>(position) - static_cast<ptrdiff_t>(anchor.linear);
                return const_cast<db*>(anchor.base) + delta + offset;
            }
        }
    }
    return nullptr;
}

void set_segment_register(dw& reg, dw value) {
    reg = value;
    remember_linked_data_runtime_segment(value);
}

dw near_offset_linked_address(const void* symbol) {
    if (const LinkedSegmentAnchor* anchor = find_linked_segment_anchor(symbol)) {
        const size_t linear = anchor->linear + (reinterpret_cast<const db*>(symbol) - anchor->base);
        return static_cast<dw>(linear - ((anchor->linear >> 4) << 4));
    }
    const size_t linear = reinterpret_cast<const db*>(symbol) - reinterpret_cast<const db*>(&m);
    return static_cast<dw>(RM_OFFSET(linear));
}

dw segment_of_linked_address(const void* symbol) {
    if (const LinkedSegmentAnchor* anchor = find_linked_segment_anchor(symbol)) {
        return static_cast<dw>(anchor->linear >> 4);
    }
    const size_t linear = reinterpret_cast<const db*>(symbol) - reinterpret_cast<const db*>(&m);
    return static_cast<dw>(RM_SEGMENT(linear));
}

dd far_offset_linked_address(const void* symbol) {
    return static_cast<dd>(near_offset_linked_address(symbol) | (segment_of_linked_address(symbol) << 16));
}

void copy_linked_program_segment_prefix(dw segment, const void* source, size_t size) {
    bool copied = false;
    for (const LinkedSegmentAnchor& anchor : linked_segment_anchors) {
        if ((anchor.linear >> 4) == segment) {
                std::memmove(const_cast<db*>(anchor.base), source, size);
            copied = true;
        }
    }
    if (!copied) {
        // The target segment may be computed at runtime (e.g. CS plus a
        // paragraph delta passed to DOS AH=26h create-PSP) and never
        // registered through set_segment_register. Register it so the
        // copy routes into an overlapping linked data anchor instead of
        // corrupting raw memory.
        remember_linked_data_runtime_segment(segment);
        if (db* linked = linked_data_segment_raddr(segment, 0)) {
            std::memmove(linked, source, size);
            copied = true;
        }
    }
    if (!copied) {
        std::memmove((db*)&m + (static_cast<size_t>(segment) << 4), source, size);
    }
}

bool dispatch_external_code(_offsets __disp, _STATE* _state, bool* handled) {
    if (handled) { *handled = false; }
    /* Track the executing code offset in eip (like cpu_regs.ip in the
     * DOSBox-hosted build) so PUSH(ip) return words land in real code
     * space and unmarked returns dispatch to a plausible proc. */
    _state->eip = (dd)__disp & 0xffff;
    switch (__disp) {
        case 0x15eb:
            if (handled) { *handled = true; }
            return _rvrsmeshfill(0, _state);
        case 0x15ea:
            if (handled) { *handled = true; }
            return _rvrspolyfill(0, _state);
        case 0x16cf:
            if (handled) { *handled = true; }
            return aaasymbol(0, _state);
        case 0x12ae:
            if (handled) { *handled = true; }
            return aborttodos(0, _state);
        case 0x14a0:
            if (handled) { *handled = true; }
            return aboveclouds(0, _state);
        case 0xfece:
            if (handled) { *handled = true; }
            return aboveclouds__visual(0, _state);
        case 0x16d3:
            if (handled) { *handled = true; }
            return acsymbol(0, _state);
        case 0x1738:
            if (handled) { *handled = true; }
            return advancewp(0, _state);
        case 0x16de:
            if (handled) { *handled = true; }
            return advlayout(0, _state);
        case 0x16e2:
            if (handled) { *handled = true; }
            return advlayout2(0, _state);
        case 0x16e5:
            if (handled) { *handled = true; }
            return advlayout3(0, _state);
        case 0x1813:
            if (handled) { *handled = true; }
            return aerialexplosion(0, _state);
        case 0x17e8:
            if (handled) { *handled = true; }
            return alarmdirect(0, _state);
        case 0x17ee:
            if (handled) { *handled = true; }
            return alarmdive(0, _state);
        case 0x17ec:
            if (handled) { *handled = true; }
            return alarmfreefall(0, _state);
        case 0x17ea:
            if (handled) { *handled = true; }
            return alarmguide(0, _state);
        case 0x17e9:
            if (handled) { *handled = true; }
            return alarmkill(0, _state);
        case 0x17ed:
            if (handled) { *handled = true; }
            return alarmloiter(0, _state);
        case 0x1733:
            if (handled) { *handled = true; }
            return alarmview(0, _state);
        case 0x17eb:
            if (handled) { *handled = true; }
            return alarmzoom(0, _state);
        case 0x1452:
            if (handled) { *handled = true; }
            return alphaonly(0, _state);
        case 0x1552:
            if (handled) { *handled = true; }
            return alt_calccrt(0, _state);
        case 0x1553:
            if (handled) { *handled = true; }
            return alt_circlecrt(0, _state);
        case 0x1550:
            if (handled) { *handled = true; }
            return alt_scalevp(0, _state);
        case 0x175e:
            if (handled) { *handled = true; }
            return altacquire(0, _state);
        case 0x175b:
            if (handled) { *handled = true; }
            return altapproach(0, _state);
        case 0x175a:
            if (handled) { *handled = true; }
            return altmanual(0, _state);
        case 0x1761:
            if (handled) { *handled = true; }
            return alttf(0, _state);
        case 0x13f7:
            if (handled) { *handled = true; }
            return arctan(0, _state);
        case 0x13f8:
            if (handled) { *handled = true; }
            return arctan2(0, _state);
        case 0x13fb:
            if (handled) { *handled = true; }
            return arctan360(0, _state);
        case 0x17d0:
            if (handled) { *handled = true; }
            return armagm(0, _state);
        case 0x17cf:
            if (handled) { *handled = true; }
            return armalarm(0, _state);
        case 0x1803:
            if (handled) { *handled = true; }
            return armalarmdir(0, _state);
        case 0x1805:
            if (handled) { *handled = true; }
            return armalarmind(0, _state);
        case 0x17cd:
            if (handled) { *handled = true; }
            return armbl755(0, _state);
        case 0x1807:
            if (handled) { *handled = true; }
            return armcannon(0, _state);
        case 0x17c8:
            if (handled) { *handled = true; }
            return armgpb1000(0, _state);
        case 0x17ce:
            if (handled) { *handled = true; }
            return armjp233(0, _state);
        case 0xfecf:
            if (handled) { *handled = true; }
            return armjp233__aircraft(0, _state);
        case 0x1802:
            if (handled) { *handled = true; }
            return armlaserguided(0, _state);
        case 0x17ff:
            if (handled) { *handled = true; }
            return armlaydown(0, _state);
        case 0x17cc:
            if (handled) { *handled = true; }
            return armlgb1000(0, _state);
        case 0x1801:
            if (handled) { *handled = true; }
            return armloft(0, _state);
        case 0x17fa:
            if (handled) { *handled = true; }
            return armmanual(0, _state);
        case 0x17c6:
            if (handled) { *handled = true; }
            return armnull(0, _state);
        case 0x17d7:
            if (handled) { *handled = true; }
            return armok(0, _state);
        case 0x17c9:
            if (handled) { *handled = true; }
            return armret1000(0, _state);
        case 0x180a:
            if (handled) { *handled = true; }
            return armsidewinder(0, _state);
        case 0x180f:
            if (handled) { *handled = true; }
            return armskyflash(0, _state);
        case 0x188d:
            if (handled) { *handled = true; }
            return attentionadlb(0, _state);
        case 0x188b:
            if (handled) { *handled = true; }
            return attentionblst(0, _state);
        case 0x1889:
            if (handled) { *handled = true; }
            return attentionnull(0, _state);
        case 0x188e:
            if (handled) { *handled = true; }
            return attentionrlnd(0, _state);
        case 0x1888:
            if (handled) { *handled = true; }
            return attentionsound(0, _state);
        case 0x188a:
            if (handled) { *handled = true; }
            return attentionspkr(0, _state);
        case 0x1758:
            if (handled) { *handled = true; }
            return autopilotdisp(0, _state);
        case 0x18cc:
            if (handled) { *handled = true; }
            return banklevent(0, _state);
        case 0x18ca:
            if (handled) { *handled = true; }
            return bankrevent(0, _state);
        case 0x149e:
            if (handled) { *handled = true; }
            return belowclouds(0, _state);
        case 0xfed0:
            if (handled) { *handled = true; }
            return belowclouds__visual(0, _state);
        case 0x1312:
            if (handled) { *handled = true; }
            return blockfill(0, _state);
        case 0x1732:
            if (handled) { *handled = true; }
            return bombview(0, _state);
        case 0x162c:
            if (handled) { *handled = true; }
            return buildsctrtables(0, _state);
        case 0x1820:
            if (handled) { *handled = true; }
            return calc3doffset(0, _state);
        case 0x14a5:
            if (handled) { *handled = true; }
            return calcafactors(0, _state);
        case 0x17af:
            if (handled) { *handled = true; }
            return calcangdiff(0, _state);
        case 0x14a4:
            if (handled) { *handled = true; }
            return calcangles(0, _state);
        case 0x14a6:
            if (handled) { *handled = true; }
            return calcbfactors(0, _state);
        case 0x1570:
            if (handled) { *handled = true; }
            return calccentre1(0, _state);
        case 0x1573:
            if (handled) { *handled = true; }
            return calccentre16(0, _state);
        case 0xfed2:
            if (handled) { *handled = true; }
            return calccentre16__secscan(0, _state);
        case 0xfed1:
            if (handled) { *handled = true; }
            return calccentre1__secscan(0, _state);
        case 0x1571:
            if (handled) { *handled = true; }
            return calccentre2(0, _state);
        case 0xfed3:
            if (handled) { *handled = true; }
            return calccentre2__secscan(0, _state);
        case 0x1572:
            if (handled) { *handled = true; }
            return calccentre8(0, _state);
        case 0xfed4:
            if (handled) { *handled = true; }
            return calccentre8__secscan(0, _state);
        case 0x14a7:
            if (handled) { *handled = true; }
            return calccfactors(0, _state);
        case 0x154a:
            if (handled) { *handled = true; }
            return calccirclecrt(0, _state);
        case 0x1403:
            if (handled) { *handled = true; }
            return calcdeltatime(0, _state);
        case 0x1404:
            if (handled) { *handled = true; }
            return calcdeltaxy(0, _state);
        case 0x14a8:
            if (handled) { *handled = true; }
            return calcdfactors(0, _state);
        case 0x17b1:
            if (handled) { *handled = true; }
            return calceta(0, _state);
        case 0x181e:
            if (handled) { *handled = true; }
            return calceyecoords(0, _state);
        case 0x1510:
            if (handled) { *handled = true; }
            return calceyeposition(0, _state);
        case 0x15d5:
            if (handled) { *handled = true; }
            return calcgndheight(0, _state);
        case 0x18cf:
            if (handled) { *handled = true; }
            return calcintercept(0, _state);
        case 0x1612:
            if (handled) { *handled = true; }
            return calcmobmaxdim(0, _state);
        case 0x17b0:
            if (handled) { *handled = true; }
            return calcnmiles(0, _state);
        case 0x1594:
            if (handled) { *handled = true; }
            return calcnodepos1(0, _state);
        case 0x1598:
            if (handled) { *handled = true; }
            return calcnodepos16(0, _state);
        case 0x1596:
            if (handled) { *handled = true; }
            return calcnodepos2(0, _state);
        case 0x1597:
            if (handled) { *handled = true; }
            return calcnodepos8(0, _state);
        case 0x1603:
            if (handled) { *handled = true; }
            return calcobjectpos1(0, _state);
        case 0x160a:
            if (handled) { *handled = true; }
            return calcobjectpos16(0, _state);
        case 0x1606:
            if (handled) { *handled = true; }
            return calcobjectpos2(0, _state);
        case 0x1607:
            if (handled) { *handled = true; }
            return calcobjectpos4(0, _state);
        case 0x1609:
            if (handled) { *handled = true; }
            return calcobjectpos8(0, _state);
        case 0x14aa:
            if (handled) { *handled = true; }
            return calcobjgrid(0, _state);
        case 0x1527:
            if (handled) { *handled = true; }
            return calcoutcodes(0, _state);
        case 0x17ad:
            if (handled) { *handled = true; }
            return calcrngbrgvp_af(0, _state);
        case 0x17a6:
            if (handled) { *handled = true; }
            return calcrngbrgvp_vp(0, _state);
        case 0x17aa:
            if (handled) { *handled = true; }
            return calcrngbrgvp_wp(0, _state);
        case 0x17ab:
            if (handled) { *handled = true; }
            return calcrngbrgwp_wp(0, _state);
        case 0x1822:
            if (handled) { *handled = true; }
            return calcrngrelco(0, _state);
        case 0x14ac:
            if (handled) { *handled = true; }
            return calcrotategrid1(0, _state);
        case 0x14ad:
            if (handled) { *handled = true; }
            return calcrotategrid2(0, _state);
        case 0x14ae:
            if (handled) { *handled = true; }
            return calcrotategrid3(0, _state);
        case 0x1515:
            if (handled) { *handled = true; }
            return calcscale1(0, _state);
        case 0x150f:
            if (handled) { *handled = true; }
            return calcscale16(0, _state);
        case 0x1514:
            if (handled) { *handled = true; }
            return calcscale2(0, _state);
        case 0x1512:
            if (handled) { *handled = true; }
            return calcscale4(0, _state);
        case 0x1511:
            if (handled) { *handled = true; }
            return calcscale8(0, _state);
        case 0x14a9:
            if (handled) { *handled = true; }
            return calcsctrgrid(0, _state);
        case 0x150e:
            if (handled) { *handled = true; }
            return calcsctroffsets(0, _state);
        case 0x1698:
            if (handled) { *handled = true; }
            return calcsinefine(0, _state);
        case 0x17b2:
            if (handled) { *handled = true; }
            return calcslantrange(0, _state);
        case 0x17df:
            if (handled) { *handled = true; }
            return calcstoreswt(0, _state);
        case 0x181f:
            if (handled) { *handled = true; }
            return calctgtrelco(0, _state);
        case 0x17fc:
            if (handled) { *handled = true; }
            return calcthrow(0, _state);
        case 0x181d:
            if (handled) { *handled = true; }
            return calctransmatrix(0, _state);
        case 0x1699:
            if (handled) { *handled = true; }
            return calcvias(0, _state);
        case 0x169a:
            if (handled) { *handled = true; }
            return calcvkts(0, _state);
        case 0x15c7:
            if (handled) { *handled = true; }
            return calczapos(0, _state);
        case 0x15c8:
            if (handled) { *handled = true; }
            return calczbpos(0, _state);
        case 0x15c9:
            if (handled) { *handled = true; }
            return calczcpos(0, _state);
        case 0x15ca:
            if (handled) { *handled = true; }
            return calczdpos(0, _state);
        case 0x15cb:
            if (handled) { *handled = true; }
            return calczepos(0, _state);
        case 0x15cc:
            if (handled) { *handled = true; }
            return calczfpos(0, _state);
        case 0x15ce:
            if (handled) { *handled = true; }
            return calczgpos(0, _state);
        case 0x15cf:
            if (handled) { *handled = true; }
            return calczhpos(0, _state);
        case 0x15d2:
            if (handled) { *handled = true; }
            return calczipos(0, _state);
        case 0x1731:
            if (handled) { *handled = true; }
            return camrandom(0, _state);
        case 0x172f:
            if (handled) { *handled = true; }
            return camrotateaclk(0, _state);
        case 0x172d:
            if (handled) { *handled = true; }
            return camrotateclk(0, _state);
        case 0x173a:
            if (handled) { *handled = true; }
            return canceltgtwp(0, _state);
        case 0x189f:
            if (handled) { *handled = true; }
            return cannonadlb(0, _state);
        case 0x189e:
            if (handled) { *handled = true; }
            return cannonblst(0, _state);
        case 0x189b:
            if (handled) { *handled = true; }
            return cannonnull(0, _state);
        case 0x18a0:
            if (handled) { *handled = true; }
            return cannonrlnd(0, _state);
        case 0x1899:
            if (handled) { *handled = true; }
            return cannonsound(0, _state);
        case 0x189c:
            if (handled) { *handled = true; }
            return cannonspkr(0, _state);
        case 0x1482:
            if (handled) { *handled = true; }
            return cellsprite(0, _state);
        case 0x1336:
            if (handled) { *handled = true; }
            return cga_bfill(0, _state);
        case 0x1332:
            if (handled) { *handled = true; }
            return cga_bsprite(0, _state);
        case 0x1320:
            if (handled) { *handled = true; }
            return cga_dload(0, _state);
        case 0x133c:
            if (handled) { *handled = true; }
            return cga_hfill(0, _state);
        case 0x1325:
            if (handled) { *handled = true; }
            return cga_hline(0, _state);
        case 0x1335:
            if (handled) { *handled = true; }
            return cga_initms(0, _state);
        case 0x1334:
            if (handled) { *handled = true; }
            return cga_initss(0, _state);
        case 0x1323:
            if (handled) { *handled = true; }
            return cga_line(0, _state);
        case 0x1338:
            if (handled) { *handled = true; }
            return cga_loadmouse(0, _state);
        case 0x133a:
            if (handled) { *handled = true; }
            return cga_loadscreen(0, _state);
        case 0x1328:
            if (handled) { *handled = true; }
            return cga_mfill(0, _state);
        case 0x132f:
            if (handled) { *handled = true; }
            return cga_msprite(0, _state);
        case 0x1327:
            if (handled) { *handled = true; }
            return cga_pfill(0, _state);
        case 0x132a:
            if (handled) { *handled = true; }
            return cga_prtc1(0, _state);
        case 0x132b:
            if (handled) { *handled = true; }
            return cga_prtc2(0, _state);
        case 0x132c:
            if (handled) { *handled = true; }
            return cga_prtc3(0, _state);
        case 0x1333:
            if (handled) { *handled = true; }
            return cga_qsprite(0, _state);
        case 0x1337:
            if (handled) { *handled = true; }
            return cga_savemouse(0, _state);
        case 0x1339:
            if (handled) { *handled = true; }
            return cga_savescreen(0, _state);
        case 0x1322:
            if (handled) { *handled = true; }
            return cga_setpx(0, _state);
        case 0x1329:
            if (handled) { *handled = true; }
            return cga_sfill(0, _state);
        case 0x132e:
            if (handled) { *handled = true; }
            return cga_ssprite(0, _state);
        case 0x133b:
            if (handled) { *handled = true; }
            return cga_uncomppic(0, _state);
        case 0x1324:
            if (handled) { *handled = true; }
            return cga_vline(0, _state);
        case 0x131f:
            if (handled) { *handled = true; }
            return cga_vmode(0, _state);
        case 0x1480:
            if (handled) { *handled = true; }
            return charsprite(0, _state);
        case 0x17d8:
            if (handled) { *handled = true; }
            return checkfailures(0, _state);
        case 0x17b6:
            if (handled) { *handled = true; }
            return checkhdge(0, _state);
        case 0x17b5:
            if (handled) { *handled = true; }
            return checkhdgn(0, _state);
        case 0x17b7:
            if (handled) { *handled = true; }
            return checkhdgs(0, _state);
        case 0x17b8:
            if (handled) { *handled = true; }
            return checkhdgw(0, _state);
        case 0x17f4:
            if (handled) { *handled = true; }
            return checkirlock(0, _state);
        case 0x165d:
            if (handled) { *handled = true; }
            return checktimeout(0, _state);
        case 0x1712:
            if (handled) { *handled = true; }
            return chggameviewmode(0, _state);
        case 0x1486:
            if (handled) { *handled = true; }
            return circleexit(0, _state);
        case 0x1483:
            if (handled) { *handled = true; }
            return circlesmoke(0, _state);
        case 0x147f:
            if (handled) { *handled = true; }
            return clearcomms(0, _state);
        case 0x16a2:
            if (handled) { *handled = true; }
            return clearnavigpanel(0, _state);
        case 0x16a0:
            if (handled) { *handled = true; }
            return clearpilotpanel(0, _state);
        case 0x1488:
            if (handled) { *handled = true; }
            return clipabove(0, _state);
        case 0x148b:
            if (handled) { *handled = true; }
            return clipaboveleft(0, _state);
        case 0x1489:
            if (handled) { *handled = true; }
            return clipaboveright(0, _state);
        case 0x148c:
            if (handled) { *handled = true; }
            return clipbelow(0, _state);
        case 0x148e:
            if (handled) { *handled = true; }
            return clipbelowleft(0, _state);
        case 0x148d:
            if (handled) { *handled = true; }
            return clipbelowright(0, _state);
        case 0x1492:
            if (handled) { *handled = true; }
            return clipleft(0, _state);
        case 0x152c:
            if (handled) { *handled = true; }
            return clippoly(0, _state);
        case 0xfed5:
            if (handled) { *handled = true; }
            return clippoly__com_clip(0, _state);
        case 0x153e:
            if (handled) { *handled = true; }
            return clippolydots(0, _state);
        case 0x1539:
            if (handled) { *handled = true; }
            return clippolyline(0, _state);
        case 0xfed6:
            if (handled) { *handled = true; }
            return clippolyline__com_clip(0, _state);
        case 0x148f:
            if (handled) { *handled = true; }
            return clipright(0, _state);
        case 0x13ed:
            if (handled) { *handled = true; }
            return closefile(0, _state);
        case 0x163e:
            if (handled) { *handled = true; }
            return cloudcheck1(0, _state);
        case 0x1640:
            if (handled) { *handled = true; }
            return cloudcheck2(0, _state);
        case 0x1459:
            if (handled) { *handled = true; }
            return cls(0, _state);
        case 0x147b:
            if (handled) { *handled = true; }
            return commsintr(0, _state);
        case 0x149b:
            if (handled) { *handled = true; }
            return configurevisual(0, _state);
        case 0x165a:
            if (handled) { *handled = true; }
            return control_proc(0, _state);
        case 0x145b:
            if (handled) { *handled = true; }
            return convnumdol(0, _state);
        case 0x16c2:
            if (handled) { *handled = true; }
            return copypreviewpan(0, _state);
        case 0x1645:
            if (handled) { *handled = true; }
            return cratercollision(0, _state);
        case 0x13ec:
            if (handled) { *handled = true; }
            return createfile(0, _state);
        case 0x157a:
            if (handled) { *handled = true; }
            return createmobile(0, _state);
        case 0x13da:
            if (handled) { *handled = true; }
            return criterrintr(0, _state);
        case 0x1659:
            if (handled) { *handled = true; }
            return ctrlair1(0, _state);
        case 0x17be:
            if (handled) { *handled = true; }
            return ctrlapproach(0, _state);
        case 0xfed7:
            if (handled) { *handled = true; }
            return ctrlapproach__aircraft(0, _state);
        case 0x17c5:
            if (handled) { *handled = true; }
            return ctrlcombat(0, _state);
        case 0x1657:
            if (handled) { *handled = true; }
            return ctrlgnd1(0, _state);
        case 0x17c2:
            if (handled) { *handled = true; }
            return ctrllanding(0, _state);
        case 0x1656:
            if (handled) { *handled = true; }
            return ctrlnull(0, _state);
        case 0xfed9:
            if (handled) { *handled = true; }
            return ctrlnull__aircraft(0, _state);
        case 0xfed8:
            if (handled) { *handled = true; }
            return ctrlnull__smoke(0, _state);
        case 0x17bc:
            if (handled) { *handled = true; }
            return ctrltakeoff(0, _state);
        case 0xfeda:
            if (handled) { *handled = true; }
            return ctrltakeoff__aircraft(0, _state);
        case 0x17c3:
            if (handled) { *handled = true; }
            return ctrltaxi(0, _state);
        case 0x17bf:
            if (handled) { *handled = true; }
            return ctrltouchdown(0, _state);
        case 0xfedb:
            if (handled) { *handled = true; }
            return ctrltouchdown__aircraft(0, _state);
        case 0x17bd:
            if (handled) { *handled = true; }
            return ctrltrack(0, _state);
        case 0xfedc:
            if (handled) { *handled = true; }
            return ctrltrack__aircraft(0, _state);
        case 0x1546:
            if (handled) { *handled = true; }
            return cycliccheck(0, _state);
        case 0x18f5:
            if (handled) { *handled = true; }
            return damadc(0, _state);
        case 0x174d:
            if (handled) { *handled = true; }
            return damageddisp(0, _state);
        case 0x176f:
            if (handled) { *handled = true; }
            return damageddispmfd(0, _state);
        case 0x18e3:
            if (handled) { *handled = true; }
            return damairbrakes(0, _state);
        case 0x18f2:
            if (handled) { *handled = true; }
            return damecm(0, _state);
        case 0x18e4:
            if (handled) { *handled = true; }
            return damengine1(0, _state);
        case 0x18e5:
            if (handled) { *handled = true; }
            return damengine2(0, _state);
        case 0x18f6:
            if (handled) { *handled = true; }
            return damenginefire(0, _state);
        case 0x18e7:
            if (handled) { *handled = true; }
            return damflaps(0, _state);
        case 0x18e1:
            if (handled) { *handled = true; }
            return damgear(0, _state);
        case 0x18ea:
            if (handled) { *handled = true; }
            return damhud(0, _state);
        case 0x18ec:
            if (handled) { *handled = true; }
            return damnavigmfd(0, _state);
        case 0x18f0:
            if (handled) { *handled = true; }
            return damoxygen(0, _state);
        case 0x18eb:
            if (handled) { *handled = true; }
            return dampilotmfd(0, _state);
        case 0x18f1:
            if (handled) { *handled = true; }
            return damradar(0, _state);
        case 0x18f4:
            if (handled) { *handled = true; }
            return damrwr(0, _state);
        case 0x18e9:
            if (handled) { *handled = true; }
            return damspils(0, _state);
        case 0x18ee:
            if (handled) { *handled = true; }
            return damtab1(0, _state);
        case 0x18ef:
            if (handled) { *handled = true; }
            return damtab2(0, _state);
        case 0x18e8:
            if (handled) { *handled = true; }
            return damthrustrvrs(0, _state);
        case 0x18e2:
            if (handled) { *handled = true; }
            return damwheelbrakes(0, _state);
        case 0x18e6:
            if (handled) { *handled = true; }
            return damwingsweep(0, _state);
        case 0x18b7:
            if (handled) { *handled = true; }
            return decoyadlb(0, _state);
        case 0x18b6:
            if (handled) { *handled = true; }
            return decoyblst(0, _state);
        case 0x18b2:
            if (handled) { *handled = true; }
            return decoynull(0, _state);
        case 0x18b9:
            if (handled) { *handled = true; }
            return decoyrlnd(0, _state);
        case 0x18b1:
            if (handled) { *handled = true; }
            return decoysound(0, _state);
        case 0x18b3:
            if (handled) { *handled = true; }
            return decoyspkr(0, _state);
        case 0x145a:
            if (handled) { *handled = true; }
            return decworddol(0, _state);
        case 0x157b:
            if (handled) { *handled = true; }
            return deletemobile(0, _state);
        case 0x167e:
            if (handled) { *handled = true; }
            return destroytornado(0, _state);
        case 0x138a:
            if (handled) { *handled = true; }
            return dloadcopy(0, _state);
        case 0x138b:
            if (handled) { *handled = true; }
            return dloadflip(0, _state);
        case 0x1544:
            if (handled) { *handled = true; }
            return dotclip(0, _state);
        case 0x15b0:
            if (handled) { *handled = true; }
            return doubletrack1(0, _state);
        case 0x15b1:
            if (handled) { *handled = true; }
            return doubletrack2(0, _state);
        case 0x1303:
            if (handled) { *handled = true; }
            return download(0, _state);
        case 0x16c9:
            if (handled) { *handled = true; }
            return drawadirollbug(0, _state);
        case 0x15f4:
            if (handled) { *handled = true; }
            return drawairfield(0, _state);
        case 0x16a7:
            if (handled) { *handled = true; }
            return drawbrackets(0, _state);
        case 0x15e8:
            if (handled) { *handled = true; }
            return drawclouds1(0, _state);
        case 0x15e9:
            if (handled) { *handled = true; }
            return drawclouds2(0, _state);
        case 0x158a:
            if (handled) { *handled = true; }
            return drawfarobjects(0, _state);
        case 0x15b4:
            if (handled) { *handled = true; }
            return drawfeatures1(0, _state);
        case 0x15b5:
            if (handled) { *handled = true; }
            return drawfeatures2(0, _state);
        case 0x1601:
            if (handled) { *handled = true; }
            return drawflatobject(0, _state);
        case 0x1600:
            if (handled) { *handled = true; }
            return drawgndobject(0, _state);
        case 0x15c6:
            if (handled) { *handled = true; }
            return drawhillface(0, _state);
        case 0x1522:
            if (handled) { *handled = true; }
            return drawhorizon(0, _state);
        case 0x176d:
            if (handled) { *handled = true; }
            return drawirimage(0, _state);
        case 0x16a6:
            if (handled) { *handled = true; }
            return drawironwork(0, _state);
        case 0x173e:
            if (handled) { *handled = true; }
            return drawmapborder(0, _state);
        case 0x1579:
            if (handled) { *handled = true; }
            return drawmobile(0, _state);
        case 0x160d:
            if (handled) { *handled = true; }
            return drawmobobject1(0, _state);
        case 0x160e:
            if (handled) { *handled = true; }
            return drawmobobject2(0, _state);
        case 0x1610:
            if (handled) { *handled = true; }
            return drawmobobject3(0, _state);
        case 0x16a5:
            if (handled) { *handled = true; }
            return drawnavigpanel(0, _state);
        case 0x1580:
            if (handled) { *handled = true; }
            return drawobjects1(0, _state);
        case 0x1582:
            if (handled) { *handled = true; }
            return drawobjects2(0, _state);
        case 0x1587:
            if (handled) { *handled = true; }
            return drawobjects3(0, _state);
        case 0x16a3:
            if (handled) { *handled = true; }
            return drawpilotpanel(0, _state);
        case 0x152b:
            if (handled) { *handled = true; }
            return drawpoly(0, _state);
        case 0xfedd:
            if (handled) { *handled = true; }
            return drawpoly__com_clip(0, _state);
        case 0x153d:
            if (handled) { *handled = true; }
            return drawpolydots(0, _state);
        case 0x1537:
            if (handled) { *handled = true; }
            return drawpolyline(0, _state);
        case 0xfede:
            if (handled) { *handled = true; }
            return drawpolyline__com_clip(0, _state);
        case 0x16c4:
            if (handled) { *handled = true; }
            return drawpreviewpan(0, _state);
        case 0x16bf:
            if (handled) { *handled = true; }
            return drawradarnoise(0, _state);
        case 0x15a4:
            if (handled) { *handled = true; }
            return drawrailways(0, _state);
        case 0x145d:
            if (handled) { *handled = true; }
            return drawrectangle(0, _state);
        case 0x15b2:
            if (handled) { *handled = true; }
            return drawrivers(0, _state);
        case 0x1593:
            if (handled) { *handled = true; }
            return drawroads(0, _state);
        case 0x15f7:
            if (handled) { *handled = true; }
            return drawrunways(0, _state);
        case 0x1578:
            if (handled) { *handled = true; }
            return drawsector(0, _state);
        case 0x1648:
            if (handled) { *handled = true; }
            return drawsmoke(0, _state);
        case 0x1649:
            if (handled) { *handled = true; }
            return drawsmokeobject(0, _state);
        case 0x15ee:
            if (handled) { *handled = true; }
            return drawspecials(0, _state);
        case 0x163a:
            if (handled) { *handled = true; }
            return drawstars(0, _state);
        case 0x163b:
            if (handled) { *handled = true; }
            return drawstatmobiles(0, _state);
        case 0x15fd:
            if (handled) { *handled = true; }
            return drawtaxiways(0, _state);
        case 0x15ef:
            if (handled) { *handled = true; }
            return drawtown(0, _state);
        case 0x1814:
            if (handled) { *handled = true; }
            return drawweapons(0, _state);
        case 0x16dc:
            if (handled) { *handled = true; }
            return ecrlayout(0, _state);
        case 0x16e1:
            if (handled) { *handled = true; }
            return ecrlayout2(0, _state);
        case 0x16e4:
            if (handled) { *handled = true; }
            return ecrlayout3(0, _state);
        case 0x1356:
            if (handled) { *handled = true; }
            return ega_bfill(0, _state);
        case 0x134e:
            if (handled) { *handled = true; }
            return ega_bsprite(0, _state);
        case 0x133e:
            if (handled) { *handled = true; }
            return ega_dload(0, _state);
        case 0x135c:
            if (handled) { *handled = true; }
            return ega_hfill(0, _state);
        case 0x1343:
            if (handled) { *handled = true; }
            return ega_hline(0, _state);
        case 0x1354:
            if (handled) { *handled = true; }
            return ega_initms(0, _state);
        case 0x1355:
            if (handled) { *handled = true; }
            return ega_initqs(0, _state);
        case 0x1353:
            if (handled) { *handled = true; }
            return ega_initss(0, _state);
        case 0x1340:
            if (handled) { *handled = true; }
            return ega_line(0, _state);
        case 0x1358:
            if (handled) { *handled = true; }
            return ega_loadmouse(0, _state);
        case 0x135a:
            if (handled) { *handled = true; }
            return ega_loadscreen(0, _state);
        case 0x1345:
            if (handled) { *handled = true; }
            return ega_mfill(0, _state);
        case 0x134d:
            if (handled) { *handled = true; }
            return ega_msprite(0, _state);
        case 0x1344:
            if (handled) { *handled = true; }
            return ega_pfill(0, _state);
        case 0x1347:
            if (handled) { *handled = true; }
            return ega_prtc1(0, _state);
        case 0x1348:
            if (handled) { *handled = true; }
            return ega_prtc2(0, _state);
        case 0x134a:
            if (handled) { *handled = true; }
            return ega_prtc3(0, _state);
        case 0x1350:
            if (handled) { *handled = true; }
            return ega_qsprite(0, _state);
        case 0x1357:
            if (handled) { *handled = true; }
            return ega_savemouse(0, _state);
        case 0x1359:
            if (handled) { *handled = true; }
            return ega_savescreen(0, _state);
        case 0x133f:
            if (handled) { *handled = true; }
            return ega_setpx(0, _state);
        case 0x1346:
            if (handled) { *handled = true; }
            return ega_sfill(0, _state);
        case 0x134b:
            if (handled) { *handled = true; }
            return ega_ssprite(0, _state);
        case 0x135b:
            if (handled) { *handled = true; }
            return ega_uncomppic(0, _state);
        case 0x1342:
            if (handled) { *handled = true; }
            return ega_vline(0, _state);
        case 0x133d:
            if (handled) { *handled = true; }
            return ega_vmode(0, _state);
        case 0x18c1:
            if (handled) { *handled = true; }
            return ejectevent(0, _state);
        case 0x16d2:
            if (handled) { *handled = true; }
            return ewrsymbol(0, _state);
        case 0x1854:
            if (handled) { *handled = true; }
            return explo1adlb(0, _state);
        case 0x1853:
            if (handled) { *handled = true; }
            return explo1blst(0, _state);
        case 0x1851:
            if (handled) { *handled = true; }
            return explo1null(0, _state);
        case 0x1855:
            if (handled) { *handled = true; }
            return explo1rlnd(0, _state);
        case 0x1852:
            if (handled) { *handled = true; }
            return explo1spkr(0, _state);
        case 0x185a:
            if (handled) { *handled = true; }
            return explo2adlb(0, _state);
        case 0x1859:
            if (handled) { *handled = true; }
            return explo2blst(0, _state);
        case 0x1857:
            if (handled) { *handled = true; }
            return explo2null(0, _state);
        case 0x185e:
            if (handled) { *handled = true; }
            return explo2rlnd(0, _state);
        case 0x1858:
            if (handled) { *handled = true; }
            return explo2spkr(0, _state);
        case 0x1868:
            if (handled) { *handled = true; }
            return explo3adlb(0, _state);
        case 0x1864:
            if (handled) { *handled = true; }
            return explo3blst(0, _state);
        case 0x1861:
            if (handled) { *handled = true; }
            return explo3null(0, _state);
        case 0x1869:
            if (handled) { *handled = true; }
            return explo3rlnd(0, _state);
        case 0x1862:
            if (handled) { *handled = true; }
            return explo3spkr(0, _state);
        case 0x166e:
            if (handled) { *handled = true; }
            return exploreintr100(0, _state);
        case 0x1850:
            if (handled) { *handled = true; }
            return explosound1(0, _state);
        case 0x1856:
            if (handled) { *handled = true; }
            return explosound2(0, _state);
        case 0x185f:
            if (handled) { *handled = true; }
            return explosound3(0, _state);
        case 0x1558:
            if (handled) { *handled = true; }
            return ext_calccrt(0, _state);
        case 0x1559:
            if (handled) { *handled = true; }
            return ext_circlecrt(0, _state);
        case 0x1556:
            if (handled) { *handled = true; }
            return ext_scalevp(0, _state);
        case 0x13c2:
            if (handled) { *handled = true; }
            return fadedown(0, _state);
        case 0x13bc:
            if (handled) { *handled = true; }
            return fadein(0, _state);
        case 0x13b9:
            if (handled) { *handled = true; }
            return fadeout(0, _state);
        case 0x13c3:
            if (handled) { *handled = true; }
            return fadeup(0, _state);
        case 0x1592:
            if (handled) { *handled = true; }
            return farhillsort(0, _state);
        case 0x13fa:
            if (handled) { *handled = true; }
            return fastarccos(0, _state);
        case 0x13f9:
            if (handled) { *handled = true; }
            return fastarcsin(0, _state);
        case 0x13f4:
            if (handled) { *handled = true; }
            return fastarctan(0, _state);
        case 0x1547:
            if (handled) { *handled = true; }
            return fastcyclic(0, _state);
        case 0x13ca:
            if (handled) { *handled = true; }
            return fastrandx(0, _state);
        case 0x1809:
            if (handled) { *handled = true; }
            return firecannon(0, _state);
        case 0x1495:
            if (handled) { *handled = true; }
            return fixgmrpalette(0, _state);
        case 0x1493:
            if (handled) { *handled = true; }
            return fixirpalette(0, _state);
        case 0x1768:
            if (handled) { *handled = true; }
            return flirdisp(0, _state);
        case 0xfedf:
            if (handled) { *handled = true; }
            return flirdisp__mfd(0, _state);
        case 0x1770:
            if (handled) { *handled = true; }
            return flirdisp_ori(0, _state);
        case 0x1789:
            if (handled) { *handled = true; }
            return flirdisp_ori2(0, _state);
        case 0x178a:
            if (handled) { *handled = true; }
            return flirdisp_ori3(0, _state);
        case 0xfee0:
            if (handled) { *handled = true; }
            return flirdisp_ori__mfd(0, _state);
        case 0x18c4:
            if (handled) { *handled = true; }
            return forwardevent(0, _state);
        case 0x13ef:
            if (handled) { *handled = true; }
            return fwrite(0, _state);
        case 0x1682:
            if (handled) { *handled = true; }
            return gameintr100(0, _state);
        case 0x167f:
            if (handled) { *handled = true; }
            return gameintr20(0, _state);
        case 0x1886:
            if (handled) { *handled = true; }
            return gearadlb(0, _state);
        case 0x1885:
            if (handled) { *handled = true; }
            return gearblst(0, _state);
        case 0x1882:
            if (handled) { *handled = true; }
            return gearnull(0, _state);
        case 0x1887:
            if (handled) { *handled = true; }
            return gearrlnd(0, _state);
        case 0x1881:
            if (handled) { *handled = true; }
            return gearsound(0, _state);
        case 0x1884:
            if (handled) { *handled = true; }
            return gearspkr(0, _state);
        case 0x144e:
            if (handled) { *handled = true; }
            return getchar(0, _state);
        case 0x18d4:
            if (handled) { *handled = true; }
            return getdronealive(0, _state);
        case 0x18d2:
            if (handled) { *handled = true; }
            return getdronechaff(0, _state);
        case 0x18d3:
            if (handled) { *handled = true; }
            return getdroneflare(0, _state);
        case 0x18d7:
            if (handled) { *handled = true; }
            return getdroneillum(0, _state);
        case 0x18d1:
            if (handled) { *handled = true; }
            return getdronespeed(0, _state);
        case 0x1756:
            if (handled) { *handled = true; }
            return gndmappingradar(0, _state);
        case 0x1629:
            if (handled) { *handled = true; }
            return gosub(0, _state);
        case 0x1641:
            if (handled) { *handled = true; }
            return groundcollision(0, _state);
        case 0x1765:
            if (handled) { *handled = true; }
            return hdgacquire(0, _state);
        case 0x1764:
            if (handled) { *handled = true; }
            return hdgapproach(0, _state);
        case 0x1763:
            if (handled) { *handled = true; }
            return hdgmanual(0, _state);
        case 0x1766:
            if (handled) { *handled = true; }
            return hdgtrack(0, _state);
        case 0x131d:
            if (handled) { *handled = true; }
            return hem_vmode(0, _state);
        case 0x131c:
            if (handled) { *handled = true; }
            return hgc_dload(0, _state);
        case 0x131a:
            if (handled) { *handled = true; }
            return hgc_vmode(0, _state);
        case 0x1307:
            if (handled) { *handled = true; }
            return hlinedraw(0, _state);
        case 0x1543:
            if (handled) { *handled = true; }
            return horizonclip(0, _state);
        case 0x1313:
            if (handled) { *handled = true; }
            return horizonfill(0, _state);
        case 0x16fc:
            if (handled) { *handled = true; }
            return hudalarmdir(0, _state);
        case 0x170a:
            if (handled) { *handled = true; }
            return hudalarmdir2(0, _state);
        case 0x16fd:
            if (handled) { *handled = true; }
            return hudalarmind(0, _state);
        case 0x170b:
            if (handled) { *handled = true; }
            return hudalarmind2(0, _state);
        case 0x16fe:
            if (handled) { *handled = true; }
            return hudcannon(0, _state);
        case 0x170d:
            if (handled) { *handled = true; }
            return hudcannon2(0, _state);
        case 0x16fb:
            if (handled) { *handled = true; }
            return hudjp233(0, _state);
        case 0x1708:
            if (handled) { *handled = true; }
            return hudjp2332(0, _state);
        case 0x16f8:
            if (handled) { *handled = true; }
            return hudlaserguided(0, _state);
        case 0x1707:
            if (handled) { *handled = true; }
            return hudlaserguided2(0, _state);
        case 0x16f5:
            if (handled) { *handled = true; }
            return hudlaydownbomb(0, _state);
        case 0x1705:
            if (handled) { *handled = true; }
            return hudlaydownbomb2(0, _state);
        case 0x16f6:
            if (handled) { *handled = true; }
            return hudloftbomb(0, _state);
        case 0x1706:
            if (handled) { *handled = true; }
            return hudloftbomb2(0, _state);
        case 0x16f3:
            if (handled) { *handled = true; }
            return hudmanualbomb(0, _state);
        case 0x1704:
            if (handled) { *handled = true; }
            return hudmanualbomb2(0, _state);
        case 0x16ef:
            if (handled) { *handled = true; }
            return hudnavigation(0, _state);
        case 0x1703:
            if (handled) { *handled = true; }
            return hudnavigation2(0, _state);
        case 0x1700:
            if (handled) { *handled = true; }
            return hudsidewinder(0, _state);
        case 0x170f:
            if (handled) { *handled = true; }
            return hudsidewinder2(0, _state);
        case 0x1701:
            if (handled) { *handled = true; }
            return hudskyflash(0, _state);
        case 0x1710:
            if (handled) { *handled = true; }
            return hudskyflash2(0, _state);
        case 0x16db:
            if (handled) { *handled = true; }
            return idslayout(0, _state);
        case 0x16e0:
            if (handled) { *handled = true; }
            return idslayout2(0, _state);
        case 0x16e3:
            if (handled) { *handled = true; }
            return idslayout3(0, _state);
        case 0x1625:
            if (handled) { *handled = true; }
            return ifthen(0, _state);
        case 0x1626:
            if (handled) { *handled = true; }
            return ifthenelse(0, _state);
        case 0x162b:
            if (handled) { *handled = true; }
            return illegal(0, _state);
        case 0x1767:
            if (handled) { *handled = true; }
            return ilsdisp(0, _state);
        case 0x149f:
            if (handled) { *handled = true; }
            return inclouds(0, _state);
        case 0xfee1:
            if (handled) { *handled = true; }
            return inclouds__visual(0, _state);
        case 0x1652:
            if (handled) { *handled = true; }
            return initairexplo(0, _state);
        case 0x1653:
            if (handled) { *handled = true; }
            return initairtrail(0, _state);
        case 0x164e:
            if (handled) { *handled = true; }
            return initburning(0, _state);
        case 0x15e7:
            if (handled) { *handled = true; }
            return initclouds(0, _state);
        case 0x1479:
            if (handled) { *handled = true; }
            return initcomms(0, _state);
        case 0x17b3:
            if (handled) { *handled = true; }
            return initconvoys(0, _state);
        case 0x164b:
            if (handled) { *handled = true; }
            return initcrater1(0, _state);
        case 0x164c:
            if (handled) { *handled = true; }
            return initcrater2(0, _state);
        case 0x164d:
            if (handled) { *handled = true; }
            return initcrater3(0, _state);
        case 0x1663:
            if (handled) { *handled = true; }
            return initctrldevice(0, _state);
        case 0x165f:
            if (handled) { *handled = true; }
            return initgame(0, _state);
        case 0x17d2:
            if (handled) { *handled = true; }
            return inithelicops(0, _state);
        case 0x166a:
            if (handled) { *handled = true; }
            return initjoy1(0, _state);
        case 0xfee2:
            if (handled) { *handled = true; }
            return initjoy1__explore(0, _state);
        case 0x166b:
            if (handled) { *handled = true; }
            return initjoy2(0, _state);
        case 0xfee3:
            if (handled) { *handled = true; }
            return initjoy2__explore(0, _state);
        case 0x1669:
            if (handled) { *handled = true; }
            return initkbd(0, _state);
        case 0x1693:
            if (handled) { *handled = true; }
            return initkbd1(0, _state);
        case 0x1694:
            if (handled) { *handled = true; }
            return initkbd2(0, _state);
        case 0x1650:
            if (handled) { *handled = true; }
            return initkickup(0, _state);
        case 0x166f:
            if (handled) { *handled = true; }
            return initmodel(0, _state);
        case 0x166c:
            if (handled) { *handled = true; }
            return initmouse(0, _state);
        case 0x130f:
            if (handled) { *handled = true; }
            return initmsprites(0, _state);
        case 0x1497:
            if (handled) { *handled = true; }
            return initpalettes(0, _state);
        case 0x169e:
            if (handled) { *handled = true; }
            return initpanels(0, _state);
        case 0x17b9:
            if (handled) { *handled = true; }
            return initplanes(0, _state);
        case 0x1310:
            if (handled) { *handled = true; }
            return initqsprites(0, _state);
        case 0x130e:
            if (handled) { *handled = true; }
            return initssprites(0, _state);
        case 0x18d8:
            if (handled) { *handled = true; }
            return inittwoplayer(0, _state);
        case 0x14a3:
            if (handled) { *handled = true; }
            return initvisual(0, _state);
        case 0x17de:
            if (handled) { *handled = true; }
            return initweapons(0, _state);
        case 0x1827:
            if (handled) { *handled = true; }
            return installadlb(0, _state);
        case 0xfee4:
            if (handled) { *handled = true; }
            return installadlb__soundfx(0, _state);
        case 0x1826:
            if (handled) { *handled = true; }
            return installblst(0, _state);
        case 0xfee5:
            if (handled) { *handled = true; }
            return installblst__soundfx(0, _state);
        case 0x13d7:
            if (handled) { *handled = true; }
            return installcriterr(0, _state);
        case 0x13cb:
            if (handled) { *handled = true; }
            return installkbd(0, _state);
        case 0x13de:
            if (handled) { *handled = true; }
            return installmouse(0, _state);
        case 0x18bb:
            if (handled) { *handled = true; }
            return installmusic(0, _state);
        case 0x1824:
            if (handled) { *handled = true; }
            return installnull(0, _state);
        case 0xfee6:
            if (handled) { *handled = true; }
            return installnull__soundfx(0, _state);
        case 0x13db:
            if (handled) { *handled = true; }
            return installoverflow(0, _state);
        case 0x182a:
            if (handled) { *handled = true; }
            return installrlnd(0, _state);
        case 0xfee7:
            if (handled) { *handled = true; }
            return installrlnd__soundfx(0, _state);
        case 0x1823:
            if (handled) { *handled = true; }
            return installsound(0, _state);
        case 0x1825:
            if (handled) { *handled = true; }
            return installspkr(0, _state);
        case 0xfee8:
            if (handled) { *handled = true; }
            return installspkr__soundfx(0, _state);
        case 0x13cf:
            if (handled) { *handled = true; }
            return installtimer(0, _state);
        case 0x13d5:
            if (handled) { *handled = true; }
            return installuser100(0, _state);
        case 0x13d4:
            if (handled) { *handled = true; }
            return installuser20(0, _state);
        case 0x13c0:
            if (handled) { *handled = true; }
            return instantfadein(0, _state);
        case 0x13bf:
            if (handled) { *handled = true; }
            return instantfadeout(0, _state);
        case 0x154e:
            if (handled) { *handled = true; }
            return int_calccrt(0, _state);
        case 0x154f:
            if (handled) { *handled = true; }
            return int_circlecrt(0, _state);
        case 0x154d:
            if (handled) { *handled = true; }
            return int_scalevp(0, _state);
        case 0x16ab:
            if (handled) { *handled = true; }
            return interleavedata(0, _state);
        case 0x1532:
            if (handled) { *handled = true; }
            return intoaboveclip(0, _state);
        case 0xfee9:
            if (handled) { *handled = true; }
            return intoaboveclip__com_clip(0, _state);
        case 0x152d:
            if (handled) { *handled = true; }
            return intobehindclip(0, _state);
        case 0x1530:
            if (handled) { *handled = true; }
            return intobelowclip(0, _state);
        case 0xfeea:
            if (handled) { *handled = true; }
            return intobelowclip__com_clip(0, _state);
        case 0x152e:
            if (handled) { *handled = true; }
            return intoleftclip(0, _state);
        case 0xfeeb:
            if (handled) { *handled = true; }
            return intoleftclip__com_clip(0, _state);
        case 0x152f:
            if (handled) { *handled = true; }
            return intorightclip(0, _state);
        case 0xfeec:
            if (handled) { *handled = true; }
            return intorightclip__com_clip(0, _state);
        case 0x17d6:
            if (handled) { *handled = true; }
            return jetall(0, _state);
        case 0x17d5:
            if (handled) { *handled = true; }
            return jetextstores(0, _state);
        case 0x17d4:
            if (handled) { *handled = true; }
            return jetexttanks(0, _state);
        case 0x167b:
            if (handled) { *handled = true; }
            return joyailacquire(0, _state);
        case 0x167a:
            if (handled) { *handled = true; }
            return joyailapproach(0, _state);
        case 0x1679:
            if (handled) { *handled = true; }
            return joyailmanual(0, _state);
        case 0x167c:
            if (handled) { *handled = true; }
            return joyailtrack(0, _state);
        case 0x1676:
            if (handled) { *handled = true; }
            return joyeleacquire(0, _state);
        case 0x1675:
            if (handled) { *handled = true; }
            return joyeleapproach(0, _state);
        case 0x1674:
            if (handled) { *handled = true; }
            return joyelemanual(0, _state);
        case 0x1678:
            if (handled) { *handled = true; }
            return joyeletf(0, _state);
        case 0x168e:
            if (handled) { *handled = true; }
            return kbdailacquire(0, _state);
        case 0x168d:
            if (handled) { *handled = true; }
            return kbdailapproach(0, _state);
        case 0x1688:
            if (handled) { *handled = true; }
            return kbdailmanual(0, _state);
        case 0x1690:
            if (handled) { *handled = true; }
            return kbdailtrack(0, _state);
        case 0x1691:
            if (handled) { *handled = true; }
            return kbdautothrot(0, _state);
        case 0x1686:
            if (handled) { *handled = true; }
            return kbdeleacquire(0, _state);
        case 0x1685:
            if (handled) { *handled = true; }
            return kbdeleapproach(0, _state);
        case 0x1684:
            if (handled) { *handled = true; }
            return kbdelemanual(0, _state);
        case 0x1687:
            if (handled) { *handled = true; }
            return kbdeletf(0, _state);
        case 0x1683:
            if (handled) { *handled = true; }
            return kbdelevators(0, _state);
        case 0x13ce:
            if (handled) { *handled = true; }
            return kbdintr(0, _state);
        case 0x168a:
            if (handled) { *handled = true; }
            return kbdrudder(0, _state);
        case 0x144f:
            if (handled) { *handled = true; }
            return keypress(0, _state);
        case 0x1681:
            if (handled) { *handled = true; }
            return kf_scannavig(0, _state);
        case 0x1680:
            if (handled) { *handled = true; }
            return kf_scanpilot(0, _state);
        case 0x1673:
            if (handled) { *handled = true; }
            return kf_updatenavig(0, _state);
        case 0x1671:
            if (handled) { *handled = true; }
            return kf_updatepilot(0, _state);
        case 0x1896:
            if (handled) { *handled = true; }
            return killattnadlb(0, _state);
        case 0x1895:
            if (handled) { *handled = true; }
            return killattnblst(0, _state);
        case 0x1890:
            if (handled) { *handled = true; }
            return killattnnull(0, _state);
        case 0x1898:
            if (handled) { *handled = true; }
            return killattnrlnd(0, _state);
        case 0x188f:
            if (handled) { *handled = true; }
            return killattnsound(0, _state);
        case 0x1892:
            if (handled) { *handled = true; }
            return killattnspkr(0, _state);
        case 0x18a6:
            if (handled) { *handled = true; }
            return launchadlb(0, _state);
        case 0x1804:
            if (handled) { *handled = true; }
            return launchalarm(0, _state);
        case 0x18a5:
            if (handled) { *handled = true; }
            return launchblst(0, _state);
        case 0x180c:
            if (handled) { *handled = true; }
            return launchmissile(0, _state);
        case 0x18a2:
            if (handled) { *handled = true; }
            return launchnull(0, _state);
        case 0x18a7:
            if (handled) { *handled = true; }
            return launchrlnd(0, _state);
        case 0x18a1:
            if (handled) { *handled = true; }
            return launchsound(0, _state);
        case 0x18a4:
            if (handled) { *handled = true; }
            return launchspkr(0, _state);
        case 0x1695:
            if (handled) { *handled = true; }
            return limitpfine(0, _state);
        case 0x1696:
            if (handled) { *handled = true; }
            return limitpitch(0, _state);
        case 0x1305:
            if (handled) { *handled = true; }
            return linedraw(0, _state);
        case 0x15a9:
            if (handled) { *handled = true; }
            return linerail1(0, _state);
        case 0x15ad:
            if (handled) { *handled = true; }
            return linerail16(0, _state);
        case 0x15aa:
            if (handled) { *handled = true; }
            return linerail2(0, _state);
        case 0x15ac:
            if (handled) { *handled = true; }
            return linerail8(0, _state);
        case 0x159e:
            if (handled) { *handled = true; }
            return lineroad1(0, _state);
        case 0x15a3:
            if (handled) { *handled = true; }
            return lineroad16(0, _state);
        case 0x15a1:
            if (handled) { *handled = true; }
            return lineroad2(0, _state);
        case 0x15a2:
            if (handled) { *handled = true; }
            return lineroad8(0, _state);
        case 0x16e6:
            if (handled) { *handled = true; }
            return loadextrnpan(0, _state);
        case 0x13f0:
            if (handled) { *handled = true; }
            return loadfile(0, _state);
        case 0x16e8:
            if (handled) { *handled = true; }
            return loadframepan(0, _state);
        case 0x1817:
            if (handled) { *handled = true; }
            return loadgamedata(0, _state);
        case 0x16b3:
            if (handled) { *handled = true; }
            return loadlookdownpan(0, _state);
        case 0x181a:
            if (handled) { *handled = true; }
            return loadmapdata(0, _state);
        case 0x16b4:
            if (handled) { *handled = true; }
            return loadmappan(0, _state);
        case 0x16b1:
            if (handled) { *handled = true; }
            return loadnavigpan(0, _state);
        case 0x16b2:
            if (handled) { *handled = true; }
            return loadnsidepan(0, _state);
        case 0x17dd:
            if (handled) { *handled = true; }
            return loadpicture(0, _state);
        case 0x16ae:
            if (handled) { *handled = true; }
            return loadpilotpan(0, _state);
        case 0x16b0:
            if (handled) { *handled = true; }
            return loadpsidepan(0, _state);
        case 0x157f:
            if (handled) { *handled = true; }
            return locatemobiles(0, _state);
        case 0x1646:
            if (handled) { *handled = true; }
            return makecrater(0, _state);
        case 0x164a:
            if (handled) { *handled = true; }
            return makesmokeeffect(0, _state);
        case 0x15f1:
            if (handled) { *handled = true; }
            return makevertex1(0, _state);
        case 0xfeed:
            if (handled) { *handled = true; }
            return makevertex1__towns(0, _state);
        case 0x15fe:
            if (handled) { *handled = true; }
            return makevertex2(0, _state);
        case 0x173f:
            if (handled) { *handled = true; }
            return mapcompass(0, _state);
        case 0x1752:
            if (handled) { *handled = true; }
            return mapdisp(0, _state);
        case 0xfeee:
            if (handled) { *handled = true; }
            return mapdisp__mfd(0, _state);
        case 0x1660:
            if (handled) { *handled = true; }
            return mapexplore(0, _state);
        case 0x1661:
            if (handled) { *handled = true; }
            return mapview(0, _state);
        case 0x18dc:
            if (handled) { *handled = true; }
            return maxdamage(0, _state);
        case 0x18de:
            if (handled) { *handled = true; }
            return meddamage(0, _state);
        case 0x145f:
            if (handled) { *handled = true; }
            return meshfill(0, _state);
        case 0x18df:
            if (handled) { *handled = true; }
            return mindamage(0, _state);
        case 0x1734:
            if (handled) { *handled = true; }
            return missileview(0, _state);
        case 0x1643:
            if (handled) { *handled = true; }
            return mobilecollision(0, _state);
        case 0x14a2:
            if (handled) { *handled = true; }
            return mobilevisual(0, _state);
        case 0x187f:
            if (handled) { *handled = true; }
            return morsedashadlb(0, _state);
        case 0x187e:
            if (handled) { *handled = true; }
            return morsedashblst(0, _state);
        case 0x187c:
            if (handled) { *handled = true; }
            return morsedashnull(0, _state);
        case 0x1880:
            if (handled) { *handled = true; }
            return morsedashrlnd(0, _state);
        case 0x187b:
            if (handled) { *handled = true; }
            return morsedashsound(0, _state);
        case 0x187d:
            if (handled) { *handled = true; }
            return morsedashspkr(0, _state);
        case 0x1879:
            if (handled) { *handled = true; }
            return morsedotadlb(0, _state);
        case 0x1876:
            if (handled) { *handled = true; }
            return morsedotblst(0, _state);
        case 0x1873:
            if (handled) { *handled = true; }
            return morsedotnull(0, _state);
        case 0x187a:
            if (handled) { *handled = true; }
            return morsedotrlnd(0, _state);
        case 0x1872:
            if (handled) { *handled = true; }
            return morsedotsound(0, _state);
        case 0x1874:
            if (handled) { *handled = true; }
            return morsedotspkr(0, _state);
        case 0x1697:
            if (handled) { *handled = true; }
            return moveviewpoint(0, _state);
        case 0x16d4:
            if (handled) { *handled = true; }
            return mslsymbol1(0, _state);
        case 0x16d6:
            if (handled) { *handled = true; }
            return mslsymbol2(0, _state);
        case 0x130c:
            if (handled) { *handled = true; }
            return msprite(0, _state);
        case 0x1591:
            if (handled) { *handled = true; }
            return nearhillsort(0, _state);
        case 0x150d:
            if (handled) { *handled = true; }
            return negsubdiv0(0, _state);
        case 0x150c:
            if (handled) { *handled = true; }
            return negsubdiv1(0, _state);
        case 0x1500:
            if (handled) { *handled = true; }
            return negsubdiv10(0, _state);
        case 0x14ff:
            if (handled) { *handled = true; }
            return negsubdiv11(0, _state);
        case 0x14fe:
            if (handled) { *handled = true; }
            return negsubdiv12(0, _state);
        case 0x14fd:
            if (handled) { *handled = true; }
            return negsubdiv13(0, _state);
        case 0x14fa:
            if (handled) { *handled = true; }
            return negsubdiv14(0, _state);
        case 0x14f9:
            if (handled) { *handled = true; }
            return negsubdiv15(0, _state);
        case 0x14f8:
            if (handled) { *handled = true; }
            return negsubdiv16(0, _state);
        case 0x14f7:
            if (handled) { *handled = true; }
            return negsubdiv17(0, _state);
        case 0x14f6:
            if (handled) { *handled = true; }
            return negsubdiv18(0, _state);
        case 0x14f5:
            if (handled) { *handled = true; }
            return negsubdiv19(0, _state);
        case 0x150b:
            if (handled) { *handled = true; }
            return negsubdiv2(0, _state);
        case 0x14f4:
            if (handled) { *handled = true; }
            return negsubdiv20(0, _state);
        case 0x14ed:
            if (handled) { *handled = true; }
            return negsubdiv21(0, _state);
        case 0x14ea:
            if (handled) { *handled = true; }
            return negsubdiv22(0, _state);
        case 0x14e8:
            if (handled) { *handled = true; }
            return negsubdiv23(0, _state);
        case 0x14e6:
            if (handled) { *handled = true; }
            return negsubdiv24(0, _state);
        case 0x14e5:
            if (handled) { *handled = true; }
            return negsubdiv25(0, _state);
        case 0x14e4:
            if (handled) { *handled = true; }
            return negsubdiv26(0, _state);
        case 0x14e3:
            if (handled) { *handled = true; }
            return negsubdiv27(0, _state);
        case 0x14e2:
            if (handled) { *handled = true; }
            return negsubdiv28(0, _state);
        case 0x14e1:
            if (handled) { *handled = true; }
            return negsubdiv29(0, _state);
        case 0x1509:
            if (handled) { *handled = true; }
            return negsubdiv3(0, _state);
        case 0x14e0:
            if (handled) { *handled = true; }
            return negsubdiv30(0, _state);
        case 0x14df:
            if (handled) { *handled = true; }
            return negsubdiv31(0, _state);
        case 0x14dd:
            if (handled) { *handled = true; }
            return negsubdiv32(0, _state);
        case 0x1508:
            if (handled) { *handled = true; }
            return negsubdiv4(0, _state);
        case 0x1507:
            if (handled) { *handled = true; }
            return negsubdiv5(0, _state);
        case 0x1506:
            if (handled) { *handled = true; }
            return negsubdiv6(0, _state);
        case 0x1505:
            if (handled) { *handled = true; }
            return negsubdiv7(0, _state);
        case 0x1503:
            if (handled) { *handled = true; }
            return negsubdiv8(0, _state);
        case 0x1502:
            if (handled) { *handled = true; }
            return negsubdiv9(0, _state);
        case 0x13a0:
            if (handled) { *handled = true; }
            return nextesmkline(0, _state);
        case 0x139c:
            if (handled) { *handled = true; }
            return nextesmokeline(0, _state);
        case 0x13a2:
            if (handled) { *handled = true; }
            return nextosmkline(0, _state);
        case 0x139e:
            if (handled) { *handled = true; }
            return nextosmokeline(0, _state);
        case 0x1831:
            if (handled) { *handled = true; }
            return normaladlb(0, _state);
        case 0x1830:
            if (handled) { *handled = true; }
            return normalblst(0, _state);
        case 0x18bc:
            if (handled) { *handled = true; }
            return normalisemusic(0, _state);
        case 0x182b:
            if (handled) { *handled = true; }
            return normalisesound(0, _state);
        case 0x182d:
            if (handled) { *handled = true; }
            return normalnull(0, _state);
        case 0x1835:
            if (handled) { *handled = true; }
            return normalrlnd(0, _state);
        case 0x182e:
            if (handled) { *handled = true; }
            return normalspkr(0, _state);
        case 0x1316:
            if (handled) { *handled = true; }
            return null(0, _state);
        case 0xfeef:
            if (handled) { *handled = true; }
            return null__com_drvr(0, _state);
        case 0x1549:
            if (handled) { *handled = true; }
            return nullcyclic(0, _state);
        case 0x1533:
            if (handled) { *handled = true; }
            return nullpoly(0, _state);
        case 0xfef0:
            if (handled) { *handled = true; }
            return nullpoly__com_clip(0, _state);
        case 0x1540:
            if (handled) { *handled = true; }
            return nullpolydots(0, _state);
        case 0x153a:
            if (handled) { *handled = true; }
            return nullpolyline(0, _state);
        case 0xfef1:
            if (handled) { *handled = true; }
            return nullpolyline__com_clip(0, _state);
        case 0x1455:
            if (handled) { *handled = true; }
            return numonly(0, _state);
        case 0x158c:
            if (handled) { *handled = true; }
            return objectdistsort1(0, _state);
        case 0x158d:
            if (handled) { *handled = true; }
            return objectdistsort2(0, _state);
        case 0x158f:
            if (handled) { *handled = true; }
            return objectdistsort3(0, _state);
        case 0x1590:
            if (handled) { *handled = true; }
            return objectdistsort4(0, _state);
        case 0x18c0:
            if (handled) { *handled = true; }
            return objectpreview(0, _state);
        case 0x138e:
            if (handled) { *handled = true; }
            return oct1(0, _state);
        case 0x138f:
            if (handled) { *handled = true; }
            return oct2(0, _state);
        case 0x1390:
            if (handled) { *handled = true; }
            return oct7(0, _state);
        case 0x1393:
            if (handled) { *handled = true; }
            return oct8(0, _state);
        case 0x1463:
            if (handled) { *handled = true; }
            return octant1(0, _state);
        case 0xfef2:
            if (handled) { *handled = true; }
            return octant1__polyfill(0, _state);
        case 0x1464:
            if (handled) { *handled = true; }
            return octant2(0, _state);
        case 0xfef3:
            if (handled) { *handled = true; }
            return octant2__polyfill(0, _state);
        case 0x1467:
            if (handled) { *handled = true; }
            return octant3(0, _state);
        case 0x1469:
            if (handled) { *handled = true; }
            return octant4(0, _state);
        case 0x146a:
            if (handled) { *handled = true; }
            return octant5(0, _state);
        case 0x146b:
            if (handled) { *handled = true; }
            return octant6(0, _state);
        case 0x146c:
            if (handled) { *handled = true; }
            return octant7(0, _state);
        case 0xfef4:
            if (handled) { *handled = true; }
            return octant7__polyfill(0, _state);
        case 0x146d:
            if (handled) { *handled = true; }
            return octant8(0, _state);
        case 0xfef5:
            if (handled) { *handled = true; }
            return octant8__polyfill(0, _state);
        case 0x13dd:
            if (handled) { *handled = true; }
            return overflowintr(0, _state);
        case 0x1415:
            if (handled) { *handled = true; }
            return p_bcdat(0, _state);
        case 0x140e:
            if (handled) { *handled = true; }
            return p_char1(0, _state);
        case 0x140f:
            if (handled) { *handled = true; }
            return p_char2(0, _state);
        case 0x1410:
            if (handled) { *handled = true; }
            return p_char3(0, _state);
        case 0x1412:
            if (handled) { *handled = true; }
            return p_crsr(0, _state);
        case 0x1414:
            if (handled) { *handled = true; }
            return p_decat(0, _state);
        case 0x1416:
            if (handled) { *handled = true; }
            return p_defcl(0, _state);
        case 0x140a:
            if (handled) { *handled = true; }
            return p_end(0, _state);
        case 0x1406:
            if (handled) { *handled = true; }
            return p_ext(0, _state);
        case 0x1413:
            if (handled) { *handled = true; }
            return p_hexat(0, _state);
        case 0x140b:
            if (handled) { *handled = true; }
            return p_input(0, _state);
        case 0x1420:
            if (handled) { *handled = true; }
            return p_nop(0, _state);
        case 0x140c:
            if (handled) { *handled = true; }
            return p_over0(0, _state);
        case 0x140d:
            if (handled) { *handled = true; }
            return p_over1(0, _state);
        case 0x141d:
            if (handled) { *handled = true; }
            return p_rect(0, _state);
        case 0x141e:
            if (handled) { *handled = true; }
            return p_rend(0, _state);
        case 0x1418:
            if (handled) { *handled = true; }
            return p_text(0, _state);
        case 0x1417:
            if (handled) { *handled = true; }
            return p_title(0, _state);
        case 0x141b:
            if (handled) { *handled = true; }
            return p_ulend(0, _state);
        case 0x141a:
            if (handled) { *handled = true; }
            return p_uline(0, _state);
        case 0x1478:
            if (handled) { *handled = true; }
            return parsecmndline(0, _state);
        case 0x18c6:
            if (handled) { *handled = true; }
            return pauseplayevent(0, _state);
        case 0x1440:
            if (handled) { *handled = true; }
            return pd_attr(0, _state);
        case 0x142e:
            if (handled) { *handled = true; }
            return pd_decb(0, _state);
        case 0x1430:
            if (handled) { *handled = true; }
            return pd_decw(0, _state);
        case 0x1426:
            if (handled) { *handled = true; }
            return pd_hexb(0, _state);
        case 0x142b:
            if (handled) { *handled = true; }
            return pd_hexl(0, _state);
        case 0x1429:
            if (handled) { *handled = true; }
            return pd_hexw(0, _state);
        case 0x1446:
            if (handled) { *handled = true; }
            return pd_line(0, _state);
        case 0x1445:
            if (handled) { *handled = true; }
            return pd_qspr(0, _state);
        case 0x1449:
            if (handled) { *handled = true; }
            return pd_vga(0, _state);
        case 0x1436:
            if (handled) { *handled = true; }
            return pd_x(0, _state);
        case 0x143d:
            if (handled) { *handled = true; }
            return pd_xmov(0, _state);
        case 0x143b:
            if (handled) { *handled = true; }
            return pd_xy(0, _state);
        case 0x143f:
            if (handled) { *handled = true; }
            return pd_xymv(0, _state);
        case 0x1438:
            if (handled) { *handled = true; }
            return pd_y(0, _state);
        case 0x143e:
            if (handled) { *handled = true; }
            return pd_ymov(0, _state);
        case 0x18c2:
            if (handled) { *handled = true; }
            return pictureevent(0, _state);
        case 0x18c9:
            if (handled) { *handled = true; }
            return pitchdnevent(0, _state);
        case 0x18c7:
            if (handled) { *handled = true; }
            return pitchupevent(0, _state);
        case 0x152a:
            if (handled) { *handled = true; }
            return polyclip(0, _state);
        case 0x153c:
            if (handled) { *handled = true; }
            return polydotclip(0, _state);
        case 0x145e:
            if (handled) { *handled = true; }
            return polyfill(0, _state);
        case 0x1477:
            if (handled) { *handled = true; }
            return polyline(0, _state);
        case 0x1534:
            if (handled) { *handled = true; }
            return polylineclip(0, _state);
        case 0x15a7:
            if (handled) { *handled = true; }
            return polyrail1(0, _state);
        case 0x15a8:
            if (handled) { *handled = true; }
            return polyrail2(0, _state);
        case 0x1599:
            if (handled) { *handled = true; }
            return polyroad1(0, _state);
        case 0x159a:
            if (handled) { *handled = true; }
            return polyroad2(0, _state);
        case 0x14dc:
            if (handled) { *handled = true; }
            return possubdiv0(0, _state);
        case 0x14db:
            if (handled) { *handled = true; }
            return possubdiv1(0, _state);
        case 0x14ce:
            if (handled) { *handled = true; }
            return possubdiv10(0, _state);
        case 0x14cc:
            if (handled) { *handled = true; }
            return possubdiv11(0, _state);
        case 0x14cb:
            if (handled) { *handled = true; }
            return possubdiv12(0, _state);
        case 0x14ca:
            if (handled) { *handled = true; }
            return possubdiv13(0, _state);
        case 0x14c9:
            if (handled) { *handled = true; }
            return possubdiv14(0, _state);
        case 0x14c8:
            if (handled) { *handled = true; }
            return possubdiv15(0, _state);
        case 0x14c7:
            if (handled) { *handled = true; }
            return possubdiv16(0, _state);
        case 0x14c6:
            if (handled) { *handled = true; }
            return possubdiv17(0, _state);
        case 0x14c5:
            if (handled) { *handled = true; }
            return possubdiv18(0, _state);
        case 0x14c4:
            if (handled) { *handled = true; }
            return possubdiv19(0, _state);
        case 0x14da:
            if (handled) { *handled = true; }
            return possubdiv2(0, _state);
        case 0x14c2:
            if (handled) { *handled = true; }
            return possubdiv20(0, _state);
        case 0x14c1:
            if (handled) { *handled = true; }
            return possubdiv21(0, _state);
        case 0x14c0:
            if (handled) { *handled = true; }
            return possubdiv22(0, _state);
        case 0x14bf:
            if (handled) { *handled = true; }
            return possubdiv23(0, _state);
        case 0x14bd:
            if (handled) { *handled = true; }
            return possubdiv24(0, _state);
        case 0x14bc:
            if (handled) { *handled = true; }
            return possubdiv25(0, _state);
        case 0x14ba:
            if (handled) { *handled = true; }
            return possubdiv26(0, _state);
        case 0x14b9:
            if (handled) { *handled = true; }
            return possubdiv27(0, _state);
        case 0x14b7:
            if (handled) { *handled = true; }
            return possubdiv28(0, _state);
        case 0x14b4:
            if (handled) { *handled = true; }
            return possubdiv29(0, _state);
        case 0x14d8:
            if (handled) { *handled = true; }
            return possubdiv3(0, _state);
        case 0x14b3:
            if (handled) { *handled = true; }
            return possubdiv30(0, _state);
        case 0x14b0:
            if (handled) { *handled = true; }
            return possubdiv31(0, _state);
        case 0x14af:
            if (handled) { *handled = true; }
            return possubdiv32(0, _state);
        case 0x14d7:
            if (handled) { *handled = true; }
            return possubdiv4(0, _state);
        case 0x14d6:
            if (handled) { *handled = true; }
            return possubdiv5(0, _state);
        case 0x14d5:
            if (handled) { *handled = true; }
            return possubdiv6(0, _state);
        case 0x14d4:
            if (handled) { *handled = true; }
            return possubdiv7(0, _state);
        case 0x14d2:
            if (handled) { *handled = true; }
            return possubdiv8(0, _state);
        case 0x14cf:
            if (handled) { *handled = true; }
            return possubdiv9(0, _state);
        case 0x1443:
            if (handled) { *handled = true; }
            return pp_attr(0, _state);
        case 0x1435:
            if (handled) { *handled = true; }
            return pp_decw(0, _state);
        case 0x1425:
            if (handled) { *handled = true; }
            return pp_str(0, _state);
        case 0x18cd:
            if (handled) { *handled = true; }
            return previewintr100(0, _state);
        case 0x1409:
            if (handled) { *handled = true; }
            return printchar(0, _state);
        case 0x1308:
            if (handled) { *handled = true; }
            return printchar1(0, _state);
        case 0x1309:
            if (handled) { *handled = true; }
            return printchar2(0, _state);
        case 0x130a:
            if (handled) { *handled = true; }
            return printchar3(0, _state);
        case 0x18f7:
            if (handled) { *handled = true; }
            return printdebuginfo(0, _state);
        case 0x1432:
            if (handled) { *handled = true; }
            return printdecword(0, _state);
        case 0x1408:
            if (handled) { *handled = true; }
            return printdol(0, _state);
        case 0x1427:
            if (handled) { *handled = true; }
            return printhexbyte(0, _state);
        case 0x1442:
            if (handled) { *handled = true; }
            return pv_attr(0, _state);
        case 0x1423:
            if (handled) { *handled = true; }
            return pv_chr(0, _state);
        case 0x142f:
            if (handled) { *handled = true; }
            return pv_decb(0, _state);
        case 0x1433:
            if (handled) { *handled = true; }
            return pv_decw(0, _state);
        case 0x144c:
            if (handled) { *handled = true; }
            return pv_eta(0, _state);
        case 0x1428:
            if (handled) { *handled = true; }
            return pv_hexb(0, _state);
        case 0x142d:
            if (handled) { *handled = true; }
            return pv_hexl(0, _state);
        case 0x142a:
            if (handled) { *handled = true; }
            return pv_hexw(0, _state);
        case 0x144a:
            if (handled) { *handled = true; }
            return pv_pdeg(0, _state);
        case 0x144b:
            if (handled) { *handled = true; }
            return pv_rng(0, _state);
        case 0x1424:
            if (handled) { *handled = true; }
            return pv_str(0, _state);
        case 0x1437:
            if (handled) { *handled = true; }
            return pv_x(0, _state);
        case 0x143c:
            if (handled) { *handled = true; }
            return pv_xy(0, _state);
        case 0x143a:
            if (handled) { *handled = true; }
            return pv_y(0, _state);
        case 0x15db:
            if (handled) { *handled = true; }
            return qcalcgndheight(0, _state);
        case 0x13bd:
            if (handled) { *handled = true; }
            return qfadein(0, _state);
        case 0x13bb:
            if (handled) { *handled = true; }
            return qfadeout(0, _state);
        case 0x15dc:
            if (handled) { *handled = true; }
            return qspothta(0, _state);
        case 0x15dd:
            if (handled) { *handled = true; }
            return qspothtb(0, _state);
        case 0x15de:
            if (handled) { *handled = true; }
            return qspothtc(0, _state);
        case 0x15df:
            if (handled) { *handled = true; }
            return qspothtd(0, _state);
        case 0x15e0:
            if (handled) { *handled = true; }
            return qspothte(0, _state);
        case 0x15e2:
            if (handled) { *handled = true; }
            return qspothtf(0, _state);
        case 0x15e3:
            if (handled) { *handled = true; }
            return qspothtg(0, _state);
        case 0x15e4:
            if (handled) { *handled = true; }
            return qspothth(0, _state);
        case 0x15e6:
            if (handled) { *handled = true; }
            return qspothti(0, _state);
        case 0x130d:
            if (handled) { *handled = true; }
            return qsprite(0, _state);
        case 0x13fc:
            if (handled) { *handled = true; }
            return quad1(0, _state);
        case 0x13fe:
            if (handled) { *handled = true; }
            return quad2(0, _state);
        case 0x13ff:
            if (handled) { *handled = true; }
            return quad3(0, _state);
        case 0x1402:
            if (handled) { *handled = true; }
            return quad4(0, _state);
        case 0x1541:
            if (handled) { *handled = true; }
            return quicklineclip(0, _state);
        case 0x1528:
            if (handled) { *handled = true; }
            return quickoutcodes(0, _state);
        case 0x145c:
            if (handled) { *handled = true; }
            return quicksetup(0, _state);
        case 0x1755:
            if (handled) { *handled = true; }
            return radardisp(0, _state);
        case 0xfef6:
            if (handled) { *handled = true; }
            return radardisp__tab(0, _state);
        case 0x15ec:
            if (handled) { *handled = true; }
            return randomizeclouds(0, _state);
        case 0x13c6:
            if (handled) { *handled = true; }
            return randx(0, _state);
        case 0x13b8:
            if (handled) { *handled = true; }
            return readdacblock(0, _state);
        case 0x147d:
            if (handled) { *handled = true; }
            return readdata(0, _state);
        case 0x13ea:
            if (handled) { *handled = true; }
            return readjoysticks(0, _state);
        case 0x13e6:
            if (handled) { *handled = true; }
            return readmouse(0, _state);
        case 0x13e7:
            if (handled) { *handled = true; }
            return readmousemotion(0, _state);
        case 0x13e9:
            if (handled) { *handled = true; }
            return recaljoysticks(0, _state);
        case 0x177a:
            if (handled) { *handled = true; }
            return refdisp(0, _state);
        case 0x1847:
            if (handled) { *handled = true; }
            return refreshadlb(0, _state);
        case 0x1846:
            if (handled) { *handled = true; }
            return refreshblst(0, _state);
        case 0x18bf:
            if (handled) { *handled = true; }
            return refreshmusic(0, _state);
        case 0x1842:
            if (handled) { *handled = true; }
            return refreshnull(0, _state);
        case 0x1848:
            if (handled) { *handled = true; }
            return refreshrlnd(0, _state);
        case 0x1840:
            if (handled) { *handled = true; }
            return refreshsound(0, _state);
        case 0x1845:
            if (handled) { *handled = true; }
            return refreshspkr(0, _state);
        case 0x1812:
            if (handled) { *handled = true; }
            return releasebomb(0, _state);
        case 0x1811:
            if (handled) { *handled = true; }
            return releasedecoy(0, _state);
        case 0x17fd:
            if (handled) { *handled = true; }
            return releasepackage(0, _state);
        case 0x13c7:
            if (handled) { *handled = true; }
            return reseed(0, _state);
        case 0x13e3:
            if (handled) { *handled = true; }
            return resetmouse(0, _state);
        case 0x13d8:
            if (handled) { *handled = true; }
            return restorecriterr(0, _state);
        case 0x13cd:
            if (handled) { *handled = true; }
            return restorekbd(0, _state);
        case 0x13e2:
            if (handled) { *handled = true; }
            return restoremouse(0, _state);
        case 0x13dc:
            if (handled) { *handled = true; }
            return restoreoverflow(0, _state);
        case 0x13d0:
            if (handled) { *handled = true; }
            return restoretimer(0, _state);
        case 0x18be:
            if (handled) { *handled = true; }
            return resumemusic(0, _state);
        case 0x183f:
            if (handled) { *handled = true; }
            return resumesound(0, _state);
        case 0x16ac:
            if (handled) { *handled = true; }
            return retrievedata(0, _state);
        case 0x18c3:
            if (handled) { *handled = true; }
            return reverseevent(0, _state);
        case 0x1517:
            if (handled) { *handled = true; }
            return rotatenull(0, _state);
        case 0x1516:
            if (handled) { *handled = true; }
            return rotateview(0, _state);
        case 0x151c:
            if (handled) { *handled = true; }
            return rotateviewbk(0, _state);
        case 0x151b:
            if (handled) { *handled = true; }
            return rotateviewdn(0, _state);
        case 0x151e:
            if (handled) { *handled = true; }
            return rotateviewft(0, _state);
        case 0x1519:
            if (handled) { *handled = true; }
            return rotateviewlt(0, _state);
        case 0x1518:
            if (handled) { *handled = true; }
            return rotateviewrt(0, _state);
        case 0x151a:
            if (handled) { *handled = true; }
            return rotateviewup(0, _state);
        case 0x1779:
            if (handled) { *handled = true; }
            return routeplandisp(0, _state);
        case 0x1462:
            if (handled) { *handled = true; }
            return rvrsmeshfill(0, _state);
        case 0x146e:
            if (handled) { *handled = true; }
            return rvrsoctant1(0, _state);
        case 0x146f:
            if (handled) { *handled = true; }
            return rvrsoctant2(0, _state);
        case 0x1470:
            if (handled) { *handled = true; }
            return rvrsoctant3(0, _state);
        case 0x1472:
            if (handled) { *handled = true; }
            return rvrsoctant4(0, _state);
        case 0x1473:
            if (handled) { *handled = true; }
            return rvrsoctant5(0, _state);
        case 0x1474:
            if (handled) { *handled = true; }
            return rvrsoctant6(0, _state);
        case 0x1475:
            if (handled) { *handled = true; }
            return rvrsoctant7(0, _state);
        case 0x1476:
            if (handled) { *handled = true; }
            return rvrsoctant8(0, _state);
        case 0x1460:
            if (handled) { *handled = true; }
            return rvrspolyfill(0, _state);
        case 0x18af:
            if (handled) { *handled = true; }
            return rwralertadlb(0, _state);
        case 0x18ae:
            if (handled) { *handled = true; }
            return rwralertblst(0, _state);
        case 0x18ab:
            if (handled) { *handled = true; }
            return rwralertnull(0, _state);
        case 0x18b0:
            if (handled) { *handled = true; }
            return rwralertrlnd(0, _state);
        case 0x18a8:
            if (handled) { *handled = true; }
            return rwralertsound(0, _state);
        case 0x18ad:
            if (handled) { *handled = true; }
            return rwralertspkr(0, _state);
        case 0x18db:
            if (handled) { *handled = true; }
            return rxopponentdata(0, _state);
        case 0x16cd:
            if (handled) { *handled = true; }
            return samsymbol(0, _state);
        case 0x13f2:
            if (handled) { *handled = true; }
            return savefile(0, _state);
        case 0x1819:
            if (handled) { *handled = true; }
            return savegamedata(0, _state);
        case 0x181c:
            if (handled) { *handled = true; }
            return savemapdata(0, _state);
        case 0x1647:
            if (handled) { *handled = true; }
            return scancraters(0, _state);
        case 0x1613:
            if (handled) { *handled = true; }
            return scanface(0, _state);
        case 0x15be:
            if (handled) { *handled = true; }
            return scanhills(0, _state);
        case 0x156f:
            if (handled) { *handled = true; }
            return scansectors(0, _state);
        case 0x1654:
            if (handled) { *handled = true; }
            return scansmoke(0, _state);
        case 0x1638:
            if (handled) { *handled = true; }
            return scantrees(0, _state);
        case 0x15b7:
            if (handled) { *handled = true; }
            return scanvertex1(0, _state);
        case 0x15bb:
            if (handled) { *handled = true; }
            return scanvertex16(0, _state);
        case 0xfefa:
            if (handled) { *handled = true; }
            return scanvertex16__features(0, _state);
        case 0xfef8:
            if (handled) { *handled = true; }
            return scanvertex1__clouds(0, _state);
        case 0xfef7:
            if (handled) { *handled = true; }
            return scanvertex1__features(0, _state);
        case 0xfef9:
            if (handled) { *handled = true; }
            return scanvertex1__towns(0, _state);
        case 0x15b8:
            if (handled) { *handled = true; }
            return scanvertex2(0, _state);
        case 0xfefc:
            if (handled) { *handled = true; }
            return scanvertex2__clouds(0, _state);
        case 0xfefb:
            if (handled) { *handled = true; }
            return scanvertex2__features(0, _state);
        case 0xfefd:
            if (handled) { *handled = true; }
            return scanvertex2__towns(0, _state);
        case 0x15ba:
            if (handled) { *handled = true; }
            return scanvertex8(0, _state);
        case 0xfeff:
            if (handled) { *handled = true; }
            return scanvertex8__clouds(0, _state);
        case 0xfefe:
            if (handled) { *handled = true; }
            return scanvertex8__features(0, _state);
        case 0xff00:
            if (handled) { *handled = true; }
            return scanvertex8__towns(0, _state);
        case 0x186f:
            if (handled) { *handled = true; }
            return screechadlb(0, _state);
        case 0x186e:
            if (handled) { *handled = true; }
            return screechblst(0, _state);
        case 0x186c:
            if (handled) { *handled = true; }
            return screechnull(0, _state);
        case 0x1870:
            if (handled) { *handled = true; }
            return screechrlnd(0, _state);
        case 0x186a:
            if (handled) { *handled = true; }
            return screechsound(0, _state);
        case 0x186d:
            if (handled) { *handled = true; }
            return screechspkr(0, _state);
        case 0x13c5:
            if (handled) { *handled = true; }
            return screenshaker(0, _state);
        case 0x1747:
            if (handled) { *handled = true; }
            return selectafds(0, _state);
        case 0x1751:
            if (handled) { *handled = true; }
            return selectautomfd(0, _state);
        case 0x1628:
            if (handled) { *handled = true; }
            return selectcase(0, _state);
        case 0x174b:
            if (handled) { *handled = true; }
            return selectflir(0, _state);
        case 0x174c:
            if (handled) { *handled = true; }
            return selectloopback(0, _state);
        case 0xff01:
            if (handled) { *handled = true; }
            return selectloopback__mfd(0, _state);
        case 0x1744:
            if (handled) { *handled = true; }
            return selectmap(0, _state);
        case 0xff02:
            if (handled) { *handled = true; }
            return selectmap__mfd(0, _state);
        case 0x1745:
            if (handled) { *handled = true; }
            return selectmodeok(0, _state);
        case 0xff03:
            if (handled) { *handled = true; }
            return selectmodeok__mfd(0, _state);
        case 0x1746:
            if (handled) { *handled = true; }
            return selectradar(0, _state);
        case 0xff04:
            if (handled) { *handled = true; }
            return selectradar__mfd(0, _state);
        case 0x174f:
            if (handled) { *handled = true; }
            return selectradarmfd(0, _state);
        case 0x1778:
            if (handled) { *handled = true; }
            return selecttiald(0, _state);
        case 0x147c:
            if (handled) { *handled = true; }
            return sendpacket(0, _state);
        case 0x1317:
            if (handled) { *handled = true; }
            return setattributes(0, _state);
        case 0x1454:
            if (handled) { *handled = true; }
            return setchar(0, _state);
        case 0x18d6:
            if (handled) { *handled = true; }
            return setdronewpnlock(0, _state);
        case 0x1714:
            if (handled) { *handled = true; }
            return setgameviewmode(0, _state);
        case 0x1496:
            if (handled) { *handled = true; }
            return setgmrpalette(0, _state);
        case 0x1498:
            if (handled) { *handled = true; }
            return sethudlevel(0, _state);
        case 0x1494:
            if (handled) { *handled = true; }
            return setirpalette(0, _state);
        case 0x13df:
            if (handled) { *handled = true; }
            return setmouselimits(0, _state);
        case 0x13e4:
            if (handled) { *handled = true; }
            return setmousepos(0, _state);
        case 0x169c:
            if (handled) { *handled = true; }
            return setpanelmode(0, _state);
        case 0x1304:
            if (handled) { *handled = true; }
            return setpixel(0, _state);
        case 0x1319:
            if (handled) { *handled = true; }
            return setsspriteclip(0, _state);
        case 0x13d6:
            if (handled) { *handled = true; }
            return settimedate(0, _state);
        case 0x1302:
            if (handled) { *handled = true; }
            return setvideomode(0, _state);
        case 0x1524:
            if (handled) { *handled = true; }
            return setviewmode(0, _state);
        case 0x15ae:
            if (handled) { *handled = true; }
            return singletrack1(0, _state);
        case 0x15af:
            if (handled) { *handled = true; }
            return singletrack2(0, _state);
        case 0x1548:
            if (handled) { *handled = true; }
            return slowcyclic(0, _state);
        case 0x1665:
            if (handled) { *handled = true; }
            return sortctrljoy1(0, _state);
        case 0x1666:
            if (handled) { *handled = true; }
            return sortctrljoy2(0, _state);
        case 0x1664:
            if (handled) { *handled = true; }
            return sortctrlkbd(0, _state);
        case 0x1668:
            if (handled) { *handled = true; }
            return sortctrlmouse(0, _state);
        case 0x15c0:
            if (handled) { *handled = true; }
            return sortfacedist1(0, _state);
        case 0x15c5:
            if (handled) { *handled = true; }
            return sortfacedist16(0, _state);
        case 0x15c1:
            if (handled) { *handled = true; }
            return sortfacedist2(0, _state);
        case 0x15c3:
            if (handled) { *handled = true; }
            return sortfacedist8(0, _state);
        case 0x1531:
            if (handled) { *handled = true; }
            return sortpolycrt(0, _state);
        case 0xff05:
            if (handled) { *handled = true; }
            return sortpolycrt__com_clip(0, _state);
        case 0x161e:
            if (handled) { *handled = true; }
            return sortprmdecexc(0, _state);
        case 0x161d:
            if (handled) { *handled = true; }
            return sortprmdecinc(0, _state);
        case 0x1619:
            if (handled) { *handled = true; }
            return sortprmline1(0, _state);
        case 0x161a:
            if (handled) { *handled = true; }
            return sortprmline2(0, _state);
        case 0x1614:
            if (handled) { *handled = true; }
            return sortprmpoly1(0, _state);
        case 0x1615:
            if (handled) { *handled = true; }
            return sortprmpoly2(0, _state);
        case 0x15d6:
            if (handled) { *handled = true; }
            return sortquad1(0, _state);
        case 0x15d7:
            if (handled) { *handled = true; }
            return sortquad2(0, _state);
        case 0x15d9:
            if (handled) { *handled = true; }
            return sortquad3(0, _state);
        case 0x15da:
            if (handled) { *handled = true; }
            return sortquad4(0, _state);
        case 0x15f8:
            if (handled) { *handled = true; }
            return sortrunway1(0, _state);
        case 0x15fc:
            if (handled) { *handled = true; }
            return sortrunway16(0, _state);
        case 0x15f9:
            if (handled) { *handled = true; }
            return sortrunway2(0, _state);
        case 0x15fa:
            if (handled) { *handled = true; }
            return sortrunway8(0, _state);
        case 0x1622:
            if (handled) { *handled = true; }
            return sortsecdecexc(0, _state);
        case 0x161f:
            if (handled) { *handled = true; }
            return sortsecdecinc(0, _state);
        case 0x161b:
            if (handled) { *handled = true; }
            return sortsecline1(0, _state);
        case 0x161c:
            if (handled) { *handled = true; }
            return sortsecline2(0, _state);
        case 0x1616:
            if (handled) { *handled = true; }
            return sortsecpoly1(0, _state);
        case 0x1618:
            if (handled) { *handled = true; }
            return sortsecpoly2(0, _state);
        case 0x1405:
            if (handled) { *handled = true; }
            return sqrt32(0, _state);
        case 0x130b:
            if (handled) { *handled = true; }
            return ssprite(0, _state);
        case 0x1642:
            if (handled) { *handled = true; }
            return staticcollision(0, _state);
        case 0x147a:
            if (handled) { *handled = true; }
            return stopcomms(0, _state);
        case 0x16c5:
            if (handled) { *handled = true; }
            return storeworkscreen(0, _state);
        case 0x163d:
            if (handled) { *handled = true; }
            return surfacecheck(0, _state);
        case 0x183c:
            if (handled) { *handled = true; }
            return suspendadlb(0, _state);
        case 0x183b:
            if (handled) { *handled = true; }
            return suspendblst(0, _state);
        case 0x18bd:
            if (handled) { *handled = true; }
            return suspendmusic(0, _state);
        case 0x1838:
            if (handled) { *handled = true; }
            return suspendnull(0, _state);
        case 0x183d:
            if (handled) { *handled = true; }
            return suspendrlnd(0, _state);
        case 0x1836:
            if (handled) { *handled = true; }
            return suspendsound(0, _state);
        case 0x183a:
            if (handled) { *handled = true; }
            return suspendspkr(0, _state);
        case 0x149a:
            if (handled) { *handled = true; }
            return swappalettes(0, _state);
        case 0x1736:
            if (handled) { *handled = true; }
            return switchonlights(0, _state);
        case 0x147e:
            if (handled) { *handled = true; }
            return synccomms(0, _state);
        case 0x1378:
            if (handled) { *handled = true; }
            return tan_bfill(0, _state);
        case 0x1372:
            if (handled) { *handled = true; }
            return tan_bsprite(0, _state);
        case 0x135e:
            if (handled) { *handled = true; }
            return tan_dload(0, _state);
        case 0x1382:
            if (handled) { *handled = true; }
            return tan_hfill(0, _state);
        case 0x1366:
            if (handled) { *handled = true; }
            return tan_hline(0, _state);
        case 0x1375:
            if (handled) { *handled = true; }
            return tan_initms(0, _state);
        case 0x1374:
            if (handled) { *handled = true; }
            return tan_initss(0, _state);
        case 0x1363:
            if (handled) { *handled = true; }
            return tan_line(0, _state);
        case 0x137b:
            if (handled) { *handled = true; }
            return tan_loadmouse(0, _state);
        case 0x137e:
            if (handled) { *handled = true; }
            return tan_loadscreen(0, _state);
        case 0x136a:
            if (handled) { *handled = true; }
            return tan_mfill(0, _state);
        case 0x1370:
            if (handled) { *handled = true; }
            return tan_msprite(0, _state);
        case 0x1367:
            if (handled) { *handled = true; }
            return tan_pfill(0, _state);
        case 0x136c:
            if (handled) { *handled = true; }
            return tan_prtc1(0, _state);
        case 0x136d:
            if (handled) { *handled = true; }
            return tan_prtc2(0, _state);
        case 0x136e:
            if (handled) { *handled = true; }
            return tan_prtc3(0, _state);
        case 0x1373:
            if (handled) { *handled = true; }
            return tan_qsprite(0, _state);
        case 0x1379:
            if (handled) { *handled = true; }
            return tan_savemouse(0, _state);
        case 0x137c:
            if (handled) { *handled = true; }
            return tan_savescreen(0, _state);
        case 0x135f:
            if (handled) { *handled = true; }
            return tan_setpx(0, _state);
        case 0x136b:
            if (handled) { *handled = true; }
            return tan_sfill(0, _state);
        case 0x136f:
            if (handled) { *handled = true; }
            return tan_ssprite(0, _state);
        case 0x137f:
            if (handled) { *handled = true; }
            return tan_uncomppic(0, _state);
        case 0x1365:
            if (handled) { *handled = true; }
            return tan_vline(0, _state);
        case 0x135d:
            if (handled) { *handled = true; }
            return tan_vmode(0, _state);
        case 0x13f3:
            if (handled) { *handled = true; }
            return tangent(0, _state);
        case 0x1787:
            if (handled) { *handled = true; }
            return tdsymadjustlock(0, _state);
        case 0x1797:
            if (handled) { *handled = true; }
            return tdsymadjustlock_ori(0, _state);
        case 0x17a1:
            if (handled) { *handled = true; }
            return tdsymadjustlock_ori2(0, _state);
        case 0x1786:
            if (handled) { *handled = true; }
            return tdsymok(0, _state);
        case 0x1795:
            if (handled) { *handled = true; }
            return tdsymok_ori(0, _state);
        case 0x17a0:
            if (handled) { *handled = true; }
            return tdsymok_ori2(0, _state);
        case 0x1788:
            if (handled) { *handled = true; }
            return tdsymtargetlock(0, _state);
        case 0x1798:
            if (handled) { *handled = true; }
            return tdsymtargetlock_ori(0, _state);
        case 0x17a4:
            if (handled) { *handled = true; }
            return tdsymtargetlock_ori2(0, _state);
        case 0x1785:
            if (handled) { *handled = true; }
            return tdsymzoom(0, _state);
        case 0x1794:
            if (handled) { *handled = true; }
            return tdsymzoom_ori(0, _state);
        case 0x179f:
            if (handled) { *handled = true; }
            return tdsymzoom_ori2(0, _state);
        case 0x1387:
            if (handled) { *handled = true; }
            return tem_dload(0, _state);
        case 0x1385:
            if (handled) { *handled = true; }
            return tem_vmode(0, _state);
        case 0x1574:
            if (handled) { *handled = true; }
            return testsector1(0, _state);
        case 0x1577:
            if (handled) { *handled = true; }
            return testsector16(0, _state);
        case 0x1575:
            if (handled) { *handled = true; }
            return testsector2(0, _state);
        case 0x1576:
            if (handled) { *handled = true; }
            return testsector8(0, _state);
        case 0x1783:
            if (handled) { *handled = true; }
            return tialdadjustlock(0, _state);
        case 0x1791:
            if (handled) { *handled = true; }
            return tialdadjustlock_ori(0, _state);
        case 0x179d:
            if (handled) { *handled = true; }
            return tialdadjustlock_ori2(0, _state);
        case 0x177e:
            if (handled) { *handled = true; }
            return tialddisp(0, _state);
        case 0x178b:
            if (handled) { *handled = true; }
            return tialddisp_ori(0, _state);
        case 0x1799:
            if (handled) { *handled = true; }
            return tialddisp_ori2(0, _state);
        case 0x177f:
            if (handled) { *handled = true; }
            return tialdinit(0, _state);
        case 0x178c:
            if (handled) { *handled = true; }
            return tialdinit_ori(0, _state);
        case 0x179a:
            if (handled) { *handled = true; }
            return tialdinit_ori2(0, _state);
        case 0x1780:
            if (handled) { *handled = true; }
            return tialdsearch(0, _state);
        case 0x178e:
            if (handled) { *handled = true; }
            return tialdsearch_ori(0, _state);
        case 0x179b:
            if (handled) { *handled = true; }
            return tialdsearch_ori2(0, _state);
        case 0x1784:
            if (handled) { *handled = true; }
            return tialdtargetlock(0, _state);
        case 0x1792:
            if (handled) { *handled = true; }
            return tialdtargetlock_ori(0, _state);
        case 0x179e:
            if (handled) { *handled = true; }
            return tialdtargetlock_ori2(0, _state);
        case 0x1782:
            if (handled) { *handled = true; }
            return tialdzoom(0, _state);
        case 0x178f:
            if (handled) { *handled = true; }
            return tialdzoom_ori(0, _state);
        case 0x179c:
            if (handled) { *handled = true; }
            return tialdzoom_ori2(0, _state);
        case 0x13d2:
            if (handled) { *handled = true; }
            return timerintr(0, _state);
        case 0x1644:
            if (handled) { *handled = true; }
            return treecollision(0, _state);
        case 0x155d:
            if (handled) { *handled = true; }
            return tv1_calccrt(0, _state);
        case 0x155e:
            if (handled) { *handled = true; }
            return tv1_circlecrt(0, _state);
        case 0x155c:
            if (handled) { *handled = true; }
            return tv1_scalevp(0, _state);
        case 0x1560:
            if (handled) { *handled = true; }
            return tv2_calccrt(0, _state);
        case 0x1561:
            if (handled) { *handled = true; }
            return tv2_circlecrt(0, _state);
        case 0x155f:
            if (handled) { *handled = true; }
            return tv2_scalevp(0, _state);
        case 0x1563:
            if (handled) { *handled = true; }
            return tv3_calccrt(0, _state);
        case 0x1564:
            if (handled) { *handled = true; }
            return tv3_circlecrt(0, _state);
        case 0x1562:
            if (handled) { *handled = true; }
            return tv3_scalevp(0, _state);
        case 0x1567:
            if (handled) { *handled = true; }
            return tv4_calccrt(0, _state);
        case 0x1568:
            if (handled) { *handled = true; }
            return tv4_circlecrt(0, _state);
        case 0x1566:
            if (handled) { *handled = true; }
            return tv4_scalevp(0, _state);
        case 0x156b:
            if (handled) { *handled = true; }
            return tv5_calccrt(0, _state);
        case 0x156e:
            if (handled) { *handled = true; }
            return tv5_circlecrt(0, _state);
        case 0x156a:
            if (handled) { *handled = true; }
            return tv5_scalevp(0, _state);
        case 0x18d9:
            if (handled) { *handled = true; }
            return txtornadodata(0, _state);
        case 0x13c4:
            if (handled) { *handled = true; }
            return unpackdeltapic(0, _state);
        case 0x1815:
            if (handled) { *handled = true; }
            return updateaaa(0, _state);
        case 0x16df:
            if (handled) { *handled = true; }
            return updateadi2(0, _state);
        case 0x184e:
            if (handled) { *handled = true; }
            return updateadlb(0, _state);
        case 0x17e7:
            if (handled) { *handled = true; }
            return updatealarm(0, _state);
        case 0x1737:
            if (handled) { *handled = true; }
            return updateavionics(0, _state);
        case 0x17e5:
            if (handled) { *handled = true; }
            return updatebl755(0, _state);
        case 0x184d:
            if (handled) { *handled = true; }
            return updateblst(0, _state);
        case 0x17ef:
            if (handled) { *handled = true; }
            return updatecannon(0, _state);
        case 0x17b4:
            if (handled) { *handled = true; }
            return updateconvoys(0, _state);
        case 0x16c8:
            if (handled) { *handled = true; }
            return updatectrlsface(0, _state);
        case 0x17f2:
            if (handled) { *handled = true; }
            return updatedecoy(0, _state);
        case 0x1729:
            if (handled) { *handled = true; }
            return updatedemo(0, _state);
        case 0x172a:
            if (handled) { *handled = true; }
            return updatedestroyed(0, _state);
        case 0x1720:
            if (handled) { *handled = true; }
            return updatedrone(0, _state);
        case 0x16cb:
            if (handled) { *handled = true; }
            return updateescope2(0, _state);
        case 0x16e7:
            if (handled) { *handled = true; }
            return updateextrn(0, _state);
        case 0x16ea:
            if (handled) { *handled = true; }
            return updateframe(0, _state);
        case 0x1716:
            if (handled) { *handled = true; }
            return updategameview(0, _state);
        case 0x17da:
            if (handled) { *handled = true; }
            return updategloc(0, _state);
        case 0x17e1:
            if (handled) { *handled = true; }
            return updategpb(0, _state);
        case 0x17d3:
            if (handled) { *handled = true; }
            return updatehelicops(0, _state);
        case 0x16ed:
            if (handled) { *handled = true; }
            return updatehud(0, _state);
        case 0x1702:
            if (handled) { *handled = true; }
            return updatehud2(0, _state);
        case 0x17e6:
            if (handled) { *handled = true; }
            return updatejp233(0, _state);
        case 0x17e4:
            if (handled) { *handled = true; }
            return updatelgb(0, _state);
        case 0x1718:
            if (handled) { *handled = true; }
            return updatelnavig(0, _state);
        case 0x16eb:
            if (handled) { *handled = true; }
            return updatelookdown(0, _state);
        case 0xff06:
            if (handled) { *handled = true; }
            return updatelookdown__views(0, _state);
        case 0x1724:
            if (handled) { *handled = true; }
            return updatelookup(0, _state);
        case 0x1717:
            if (handled) { *handled = true; }
            return updatelpilot(0, _state);
        case 0x171f:
            if (handled) { *handled = true; }
            return updatemap(0, _state);
        case 0x1742:
            if (handled) { *handled = true; }
            return updatemfd(0, _state);
        case 0x17f1:
            if (handled) { *handled = true; }
            return updatemissile(0, _state);
        case 0x157e:
            if (handled) { *handled = true; }
            return updatemobile(0, _state);
        case 0x173c:
            if (handled) { *handled = true; }
            return updatemovingmap(0, _state);
        case 0x16da:
            if (handled) { *handled = true; }
            return updatenavig(0, _state);
        case 0xff07:
            if (handled) { *handled = true; }
            return updatenavig__views(0, _state);
        case 0x1741:
            if (handled) { *handled = true; }
            return updatenavigmfd(0, _state);
        case 0x184b:
            if (handled) { *handled = true; }
            return updatenull(0, _state);
        case 0x16a8:
            if (handled) { *handled = true; }
            return updatepanel(0, _state);
        case 0x16c7:
            if (handled) { *handled = true; }
            return updatepilot(0, _state);
        case 0xff08:
            if (handled) { *handled = true; }
            return updatepilot__views(0, _state);
        case 0x1743:
            if (handled) { *handled = true; }
            return updatepilotmfd(0, _state);
        case 0x17ba:
            if (handled) { *handled = true; }
            return updateplanes(0, _state);
        case 0x1723:
            if (handled) { *handled = true; }
            return updateremote(0, _state);
        case 0x17e2:
            if (handled) { *handled = true; }
            return updateret(0, _state);
        case 0x184f:
            if (handled) { *handled = true; }
            return updaterlnd(0, _state);
        case 0x171a:
            if (handled) { *handled = true; }
            return updaternavig(0, _state);
        case 0x1719:
            if (handled) { *handled = true; }
            return updaterpilot(0, _state);
        case 0x16ca:
            if (handled) { *handled = true; }
            return updaterwr(0, _state);
        case 0x16cc:
            if (handled) { *handled = true; }
            return updaterwr2(0, _state);
        case 0x1816:
            if (handled) { *handled = true; }
            return updatesam(0, _state);
        case 0x171e:
            if (handled) { *handled = true; }
            return updatesatellite(0, _state);
        case 0x184a:
            if (handled) { *handled = true; }
            return updatesound(0, _state);
        case 0x1722:
            if (handled) { *handled = true; }
            return updatespectator(0, _state);
        case 0x184c:
            if (handled) { *handled = true; }
            return updatespkr(0, _state);
        case 0x1776:
            if (handled) { *handled = true; }
            return updatetab(0, _state);
        case 0x1773:
            if (handled) { *handled = true; }
            return updatetab1(0, _state);
        case 0x1777:
            if (handled) { *handled = true; }
            return updatetab2(0, _state);
        case 0x173b:
            if (handled) { *handled = true; }
            return updatetgtwp(0, _state);
        case 0x171c:
            if (handled) { *handled = true; }
            return updatetracking(0, _state);
        case 0x172c:
            if (handled) { *handled = true; }
            return updateweapon(0, _state);
        case 0x17e0:
            if (handled) { *handled = true; }
            return updateweapons(0, _state);
        case 0x171d:
            if (handled) { *handled = true; }
            return updatezrk_aaa(0, _state);
        case 0x1521:
            if (handled) { *handled = true; }
            return userhorizon(0, _state);
        case 0x1662:
            if (handled) { *handled = true; }
            return useroptions(0, _state);
        case 0x16ec:
            if (handled) { *handled = true; }
            return uservisoptions(0, _state);
        case 0x1735:
            if (handled) { *handled = true; }
            return uservisual(0, _state);
        case 0x177d:
            if (handled) { *handled = true; }
            return validatetiald(0, _state);
        case 0x1630:
            if (handled) { *handled = true; }
            return vcalcoutcodes(0, _state);
        case 0x1637:
            if (handled) { *handled = true; }
            return vdotclip(0, _state);
        case 0x13af:
            if (handled) { *handled = true; }
            return vga_bfill(0, _state);
        case 0x16be:
            if (handled) { *handled = true; }
            return vga_brackets(0, _state);
        case 0x13a8:
            if (handled) { *handled = true; }
            return vga_bsprite(0, _state);
        case 0x16b7:
            if (handled) { *handled = true; }
            return vga_clrnavigpan(0, _state);
        case 0x16b6:
            if (handled) { *handled = true; }
            return vga_clrpilotpan(0, _state);
        case 0x1389:
            if (handled) { *handled = true; }
            return vga_dload(0, _state);
        case 0x16b9:
            if (handled) { *handled = true; }
            return vga_drwnavigpan(0, _state);
        case 0x16bb:
            if (handled) { *handled = true; }
            return vga_drwnavigpanbrief(0, _state);
        case 0x16b8:
            if (handled) { *handled = true; }
            return vga_drwpilotpan(0, _state);
        case 0x13b6:
            if (handled) { *handled = true; }
            return vga_hfill(0, _state);
        case 0x1396:
            if (handled) { *handled = true; }
            return vga_hline(0, _state);
        case 0x13ac:
            if (handled) { *handled = true; }
            return vga_initms(0, _state);
        case 0x16aa:
            if (handled) { *handled = true; }
            return vga_initpanels(0, _state);
        case 0x13ae:
            if (handled) { *handled = true; }
            return vga_initqs(0, _state);
        case 0x13aa:
            if (handled) { *handled = true; }
            return vga_initss(0, _state);
        case 0x16bc:
            if (handled) { *handled = true; }
            return vga_ironwork(0, _state);
        case 0x138d:
            if (handled) { *handled = true; }
            return vga_line(0, _state);
        case 0x13b2:
            if (handled) { *handled = true; }
            return vga_loadmouse(0, _state);
        case 0x16ad:
            if (handled) { *handled = true; }
            return vga_loadpanel(0, _state);
        case 0x13b5:
            if (handled) { *handled = true; }
            return vga_loadscreen(0, _state);
        case 0x1399:
            if (handled) { *handled = true; }
            return vga_mfill(0, _state);
        case 0x13a7:
            if (handled) { *handled = true; }
            return vga_msprite(0, _state);
        case 0x1397:
            if (handled) { *handled = true; }
            return vga_pfill(0, _state);
        case 0x13a3:
            if (handled) { *handled = true; }
            return vga_prtc1(0, _state);
        case 0x13a4:
            if (handled) { *handled = true; }
            return vga_prtc2(0, _state);
        case 0x13a5:
            if (handled) { *handled = true; }
            return vga_prtc3(0, _state);
        case 0x13a9:
            if (handled) { *handled = true; }
            return vga_qsprite(0, _state);
        case 0x13b0:
            if (handled) { *handled = true; }
            return vga_savemouse(0, _state);
        case 0x13b3:
            if (handled) { *handled = true; }
            return vga_savescreen(0, _state);
        case 0x138c:
            if (handled) { *handled = true; }
            return vga_setpx(0, _state);
        case 0x139b:
            if (handled) { *handled = true; }
            return vga_sfill(0, _state);
        case 0x13a6:
            if (handled) { *handled = true; }
            return vga_ssprite(0, _state);
        case 0x1394:
            if (handled) { *handled = true; }
            return vga_vline(0, _state);
        case 0x1388:
            if (handled) { *handled = true; }
            return vga_vmode(0, _state);
        case 0x1457:
            if (handled) { *handled = true; }
            return vgaphotodflt(0, _state);
        case 0x149d:
            if (handled) { *handled = true; }
            return visual(0, _state);
        case 0x151f:
            if (handled) { *handled = true; }
            return visualinfo(0, _state);
        case 0x1306:
            if (handled) { *handled = true; }
            return vlinedraw(0, _state);
        case 0x1632:
            if (handled) { *handled = true; }
            return vpolyclip(0, _state);
        case 0x1633:
            if (handled) { *handled = true; }
            return vpolylineclip(0, _state);
        case 0x1636:
            if (handled) { *handled = true; }
            return vquicklineclip(0, _state);
        case 0x1631:
            if (handled) { *handled = true; }
            return vquickoutcodes(0, _state);
        case 0x162f:
            if (handled) { *handled = true; }
            return vsetrotation(0, _state);
        case 0x162e:
            if (handled) { *handled = true; }
            return vsetviewport(0, _state);
        case 0x17f7:
            if (handled) { *handled = true; }
            return weaponscontrol(0, _state);
        case 0x18d5:
            if (handled) { *handled = true; }
            return wpnkilldrone(0, _state);
        case 0x154c:
            if (handled) { *handled = true; }
            return xcalcunclipcrt(0, _state);
        case 0x1545:
            if (handled) { *handled = true; }
            return xdotclip(0, _state);
        default: {
            bool res = true;
            if (host_try_overlay_retf(__disp, _state, &res)) {
                if (handled) { *handled = true; }
                return res;
            }
            return true;
        }
    }
}

/* Map a generated-code segment selector (host paragraph of a proc wrapper,
 * `(&func-&m)>>4`, as produced by seg_offset(label)) back to its dispatch
 * function.  Far pointers stored as `seg:off` where `off` is a module-local
 * `k*` (not a `kglobal_*` flat offset) can't be resolved by the aggregate
 * dispatch_external_code table; the segment word names the owning module.
 * Used by host_try_overlay_retf after the global-offset retry misses. */
m2cf* m2c_seg_func_for(dw seg) {
    static m2cf* const procs[] = {
        &::aaasymbol,
        &::aborttodos,
        &::aboveclouds,
        &::aboveclouds__visual,
        &::acsymbol,
        &::advancewp,
        &::advlayout,
        &::advlayout2,
        &::advlayout3,
        &::aerialexplosion,
        &::alarmdirect,
        &::alarmdive,
        &::alarmfreefall,
        &::alarmguide,
        &::alarmkill,
        &::alarmloiter,
        &::alarmview,
        &::alarmzoom,
        &::alphaonly,
        &::altacquire,
        &::altapproach,
        &::alt_calccrt,
        &::alt_circlecrt,
        &::altmanual,
        &::alt_scalevp,
        &::alttf,
        &::arctan,
        &::arctan2,
        &::arctan360,
        &::armagm,
        &::armalarm,
        &::armalarmdir,
        &::armalarmind,
        &::armbl755,
        &::armcannon,
        &::armgpb1000,
        &::armjp233,
        &::armjp233__aircraft,
        &::armlaserguided,
        &::armlaydown,
        &::armlgb1000,
        &::armloft,
        &::armmanual,
        &::armnull,
        &::armok,
        &::armret1000,
        &::armsidewinder,
        &::armskyflash,
        &::attentionadlb,
        &::attentionblst,
        &::attentionnull,
        &::attentionrlnd,
        &::attentionsound,
        &::attentionspkr,
        &::autopilotdisp,
        &::banklevent,
        &::bankrevent,
        &::belowclouds,
        &::belowclouds__visual,
        &::blockfill,
        &::bombview,
        &::buildsctrtables,
        &::calc3doffset,
        &::calcafactors,
        &::calcangdiff,
        &::calcangles,
        &::calcbfactors,
        &::calccentre1,
        &::calccentre16,
        &::calccentre16__secscan,
        &::calccentre1__secscan,
        &::calccentre2,
        &::calccentre2__secscan,
        &::calccentre8,
        &::calccentre8__secscan,
        &::calccfactors,
        &::calccirclecrt,
        &::calcdeltatime,
        &::calcdeltaxy,
        &::calcdfactors,
        &::calceta,
        &::calceyecoords,
        &::calceyeposition,
        &::calcgndheight,
        &::calcintercept,
        &::calcmobmaxdim,
        &::calcnmiles,
        &::calcnodepos1,
        &::calcnodepos16,
        &::calcnodepos2,
        &::calcnodepos8,
        &::calcobjectpos1,
        &::calcobjectpos16,
        &::calcobjectpos2,
        &::calcobjectpos4,
        &::calcobjectpos8,
        &::calcobjgrid,
        &::calcoutcodes,
        &::calcrngbrgvp_af,
        &::calcrngbrgvp_vp,
        &::calcrngbrgvp_wp,
        &::calcrngbrgwp_wp,
        &::calcrngrelco,
        &::calcrotategrid1,
        &::calcrotategrid2,
        &::calcrotategrid3,
        &::calcscale1,
        &::calcscale16,
        &::calcscale2,
        &::calcscale4,
        &::calcscale8,
        &::calcsctrgrid,
        &::calcsctroffsets,
        &::calcsinefine,
        &::calcslantrange,
        &::calcstoreswt,
        &::calctgtrelco,
        &::calcthrow,
        &::calctransmatrix,
        &::calcvias,
        &::calcvkts,
        &::calczapos,
        &::calczbpos,
        &::calczcpos,
        &::calczdpos,
        &::calczepos,
        &::calczfpos,
        &::calczgpos,
        &::calczhpos,
        &::calczipos,
        &::camrandom,
        &::camrotateaclk,
        &::camrotateclk,
        &::canceltgtwp,
        &::cannonadlb,
        &::cannonblst,
        &::cannonnull,
        &::cannonrlnd,
        &::cannonsound,
        &::cannonspkr,
        &::cellsprite,
        &::cga_bfill,
        &::cga_bsprite,
        &::cga_dload,
        &::cga_hfill,
        &::cga_hline,
        &::cga_initms,
        &::cga_initss,
        &::cga_line,
        &::cga_loadmouse,
        &::cga_loadscreen,
        &::cga_mfill,
        &::cga_msprite,
        &::cga_pfill,
        &::cga_prtc1,
        &::cga_prtc2,
        &::cga_prtc3,
        &::cga_qsprite,
        &::cga_savemouse,
        &::cga_savescreen,
        &::cga_setpx,
        &::cga_sfill,
        &::cga_ssprite,
        &::cga_uncomppic,
        &::cga_vline,
        &::cga_vmode,
        &::charsprite,
        &::checkfailures,
        &::checkhdge,
        &::checkhdgn,
        &::checkhdgs,
        &::checkhdgw,
        &::checkirlock,
        &::checktimeout,
        &::chggameviewmode,
        &::circleexit,
        &::circlesmoke,
        &::clearcomms,
        &::clearnavigpanel,
        &::clearpilotpanel,
        &::clipabove,
        &::clipaboveleft,
        &::clipaboveright,
        &::clipbelow,
        &::clipbelowleft,
        &::clipbelowright,
        &::clipleft,
        &::clippoly,
        &::clippoly__com_clip,
        &::clippolydots,
        &::clippolyline,
        &::clippolyline__com_clip,
        &::clipright,
        &::closefile,
        &::cloudcheck1,
        &::cloudcheck2,
        &::cls,
        &::commsintr,
        &::configurevisual,
        &::control_proc,
        &::convnumdol,
        &::copypreviewpan,
        &::cratercollision,
        &::createfile,
        &::createmobile,
        &::criterrintr,
        &::ctrlair1,
        &::ctrlapproach,
        &::ctrlapproach__aircraft,
        &::ctrlcombat,
        &::ctrlgnd1,
        &::ctrllanding,
        &::ctrlnull,
        &::ctrlnull__aircraft,
        &::ctrlnull__smoke,
        &::ctrltakeoff,
        &::ctrltakeoff__aircraft,
        &::ctrltaxi,
        &::ctrltouchdown,
        &::ctrltouchdown__aircraft,
        &::ctrltrack,
        &::ctrltrack__aircraft,
        &::cycliccheck,
        &::damadc,
        &::damageddisp,
        &::damageddispmfd,
        &::damairbrakes,
        &::damecm,
        &::damengine1,
        &::damengine2,
        &::damenginefire,
        &::damflaps,
        &::damgear,
        &::damhud,
        &::damnavigmfd,
        &::damoxygen,
        &::dampilotmfd,
        &::damradar,
        &::damrwr,
        &::damspils,
        &::damtab1,
        &::damtab2,
        &::damthrustrvrs,
        &::damwheelbrakes,
        &::damwingsweep,
        &::decoyadlb,
        &::decoyblst,
        &::decoynull,
        &::decoyrlnd,
        &::decoysound,
        &::decoyspkr,
        &::decworddol,
        &::deletemobile,
        &::destroytornado,
        &::dloadcopy,
        &::dloadflip,
        &::dotclip,
        &::doubletrack1,
        &::doubletrack2,
        &::download,
        &::drawadirollbug,
        &::drawairfield,
        &::drawbrackets,
        &::drawclouds1,
        &::drawclouds2,
        &::drawfarobjects,
        &::drawfeatures1,
        &::drawfeatures2,
        &::drawflatobject,
        &::drawgndobject,
        &::drawhillface,
        &::drawhorizon,
        &::drawirimage,
        &::drawironwork,
        &::drawmapborder,
        &::drawmobile,
        &::drawmobobject1,
        &::drawmobobject2,
        &::drawmobobject3,
        &::drawnavigpanel,
        &::drawobjects1,
        &::drawobjects2,
        &::drawobjects3,
        &::drawpilotpanel,
        &::drawpoly,
        &::drawpoly__com_clip,
        &::drawpolydots,
        &::drawpolyline,
        &::drawpolyline__com_clip,
        &::drawpreviewpan,
        &::drawradarnoise,
        &::drawrailways,
        &::drawrectangle,
        &::drawrivers,
        &::drawroads,
        &::drawrunways,
        &::drawsector,
        &::drawsmoke,
        &::drawsmokeobject,
        &::drawspecials,
        &::drawstars,
        &::drawstatmobiles,
        &::drawtaxiways,
        &::drawtown,
        &::drawweapons,
        &::ecrlayout,
        &::ecrlayout2,
        &::ecrlayout3,
        &::ega_bfill,
        &::ega_bsprite,
        &::ega_dload,
        &::ega_hfill,
        &::ega_hline,
        &::ega_initms,
        &::ega_initqs,
        &::ega_initss,
        &::ega_line,
        &::ega_loadmouse,
        &::ega_loadscreen,
        &::ega_mfill,
        &::ega_msprite,
        &::ega_pfill,
        &::ega_prtc1,
        &::ega_prtc2,
        &::ega_prtc3,
        &::ega_qsprite,
        &::ega_savemouse,
        &::ega_savescreen,
        &::ega_setpx,
        &::ega_sfill,
        &::ega_ssprite,
        &::ega_uncomppic,
        &::ega_vline,
        &::ega_vmode,
        &::ejectevent,
        &::ewrsymbol,
        &::explo1adlb,
        &::explo1blst,
        &::explo1null,
        &::explo1rlnd,
        &::explo1spkr,
        &::explo2adlb,
        &::explo2blst,
        &::explo2null,
        &::explo2rlnd,
        &::explo2spkr,
        &::explo3adlb,
        &::explo3blst,
        &::explo3null,
        &::explo3rlnd,
        &::explo3spkr,
        &::exploreintr100,
        &::explosound1,
        &::explosound2,
        &::explosound3,
        &::ext_calccrt,
        &::ext_circlecrt,
        &::ext_scalevp,
        &::fadedown,
        &::fadein,
        &::fadeout,
        &::fadeup,
        &::farhillsort,
        &::fastarccos,
        &::fastarcsin,
        &::fastarctan,
        &::fastcyclic,
        &::fastrandx,
        &::firecannon,
        &::fixgmrpalette,
        &::fixirpalette,
        &::flirdisp,
        &::flirdisp__mfd,
        &::flirdisp_ori,
        &::flirdisp_ori2,
        &::flirdisp_ori3,
        &::flirdisp_ori__mfd,
        &::forwardevent,
        &::fwrite,
        &::gameintr100,
        &::gameintr20,
        &::gearadlb,
        &::gearblst,
        &::gearnull,
        &::gearrlnd,
        &::gearsound,
        &::gearspkr,
        &::getchar,
        &::getdronealive,
        &::getdronechaff,
        &::getdroneflare,
        &::getdroneillum,
        &::getdronespeed,
        &::gndmappingradar,
        &::gosub,
        &::groundcollision,
        &::hdgacquire,
        &::hdgapproach,
        &::hdgmanual,
        &::hdgtrack,
        &::hem_vmode,
        &::hgc_dload,
        &::hgc_vmode,
        &::hlinedraw,
        &::horizonclip,
        &::horizonfill,
        &::hudalarmdir,
        &::hudalarmdir2,
        &::hudalarmind,
        &::hudalarmind2,
        &::hudcannon,
        &::hudcannon2,
        &::hudjp233,
        &::hudjp2332,
        &::hudlaserguided,
        &::hudlaserguided2,
        &::hudlaydownbomb,
        &::hudlaydownbomb2,
        &::hudloftbomb,
        &::hudloftbomb2,
        &::hudmanualbomb,
        &::hudmanualbomb2,
        &::hudnavigation,
        &::hudnavigation2,
        &::hudsidewinder,
        &::hudsidewinder2,
        &::hudskyflash,
        &::hudskyflash2,
        &::idslayout,
        &::idslayout2,
        &::idslayout3,
        &::ifthen,
        &::ifthenelse,
        &::illegal,
        &::ilsdisp,
        &::inclouds,
        &::inclouds__visual,
        &::initairexplo,
        &::initairtrail,
        &::initburning,
        &::initclouds,
        &::initcomms,
        &::initconvoys,
        &::initcrater1,
        &::initcrater2,
        &::initcrater3,
        &::initctrldevice,
        &::initgame,
        &::inithelicops,
        &::initjoy1,
        &::initjoy1__explore,
        &::initjoy2,
        &::initjoy2__explore,
        &::initkbd,
        &::initkbd1,
        &::initkbd2,
        &::initkickup,
        &::initmodel,
        &::initmouse,
        &::initmsprites,
        &::initpalettes,
        &::initpanels,
        &::initplanes,
        &::initqsprites,
        &::initssprites,
        &::inittwoplayer,
        &::initvisual,
        &::initweapons,
        &::installadlb,
        &::installadlb__soundfx,
        &::installblst,
        &::installblst__soundfx,
        &::installcriterr,
        &::installkbd,
        &::installmouse,
        &::installmusic,
        &::installnull,
        &::installnull__soundfx,
        &::installoverflow,
        &::installrlnd,
        &::installrlnd__soundfx,
        &::installsound,
        &::installspkr,
        &::installspkr__soundfx,
        &::installtimer,
        &::installuser100,
        &::installuser20,
        &::instantfadein,
        &::instantfadeout,
        &::int_calccrt,
        &::int_circlecrt,
        &::interleavedata,
        &::intoaboveclip,
        &::intoaboveclip__com_clip,
        &::intobehindclip,
        &::intobelowclip,
        &::intobelowclip__com_clip,
        &::intoleftclip,
        &::intoleftclip__com_clip,
        &::intorightclip,
        &::intorightclip__com_clip,
        &::int_scalevp,
        &::jetall,
        &::jetextstores,
        &::jetexttanks,
        &::joyailacquire,
        &::joyailapproach,
        &::joyailmanual,
        &::joyailtrack,
        &::joyeleacquire,
        &::joyeleapproach,
        &::joyelemanual,
        &::joyeletf,
        &::kbdailacquire,
        &::kbdailapproach,
        &::kbdailmanual,
        &::kbdailtrack,
        &::kbdautothrot,
        &::kbdeleacquire,
        &::kbdeleapproach,
        &::kbdelemanual,
        &::kbdeletf,
        &::kbdelevators,
        &::kbdintr,
        &::kbdrudder,
        &::keypress,
        &::kf_scannavig,
        &::kf_scanpilot,
        &::kf_updatenavig,
        &::kf_updatepilot,
        &::killattnadlb,
        &::killattnblst,
        &::killattnnull,
        &::killattnrlnd,
        &::killattnsound,
        &::killattnspkr,
        &::launchadlb,
        &::launchalarm,
        &::launchblst,
        &::launchmissile,
        &::launchnull,
        &::launchrlnd,
        &::launchsound,
        &::launchspkr,
        &::limitpfine,
        &::limitpitch,
        &::linedraw,
        &::linerail1,
        &::linerail16,
        &::linerail2,
        &::linerail8,
        &::lineroad1,
        &::lineroad16,
        &::lineroad2,
        &::lineroad8,
        &::loadextrnpan,
        &::loadfile,
        &::loadframepan,
        &::loadgamedata,
        &::loadlookdownpan,
        &::loadmapdata,
        &::loadmappan,
        &::loadnavigpan,
        &::loadnsidepan,
        &::loadpicture,
        &::loadpilotpan,
        &::loadpsidepan,
        &::locatemobiles,
        &::makecrater,
        &::makesmokeeffect,
        &::makevertex1,
        &::makevertex1__towns,
        &::makevertex2,
        &::mapcompass,
        &::mapdisp,
        &::mapdisp__mfd,
        &::mapexplore,
        &::mapview,
        &::maxdamage,
        &::meddamage,
        &::meshfill,
        &::mindamage,
        &::missileview,
        &::mobilecollision,
        &::mobilevisual,
        &::morsedashadlb,
        &::morsedashblst,
        &::morsedashnull,
        &::morsedashrlnd,
        &::morsedashsound,
        &::morsedashspkr,
        &::morsedotadlb,
        &::morsedotblst,
        &::morsedotnull,
        &::morsedotrlnd,
        &::morsedotsound,
        &::morsedotspkr,
        &::moveviewpoint,
        &::mslsymbol1,
        &::mslsymbol2,
        &::msprite,
        &::nearhillsort,
        &::negsubdiv0,
        &::negsubdiv1,
        &::negsubdiv10,
        &::negsubdiv11,
        &::negsubdiv12,
        &::negsubdiv13,
        &::negsubdiv14,
        &::negsubdiv15,
        &::negsubdiv16,
        &::negsubdiv17,
        &::negsubdiv18,
        &::negsubdiv19,
        &::negsubdiv2,
        &::negsubdiv20,
        &::negsubdiv21,
        &::negsubdiv22,
        &::negsubdiv23,
        &::negsubdiv24,
        &::negsubdiv25,
        &::negsubdiv26,
        &::negsubdiv27,
        &::negsubdiv28,
        &::negsubdiv29,
        &::negsubdiv3,
        &::negsubdiv30,
        &::negsubdiv31,
        &::negsubdiv32,
        &::negsubdiv4,
        &::negsubdiv5,
        &::negsubdiv6,
        &::negsubdiv7,
        &::negsubdiv8,
        &::negsubdiv9,
        &::nextesmkline,
        &::nextesmokeline,
        &::nextosmkline,
        &::nextosmokeline,
        &::normaladlb,
        &::normalblst,
        &::normalisemusic,
        &::normalisesound,
        &::normalnull,
        &::normalrlnd,
        &::normalspkr,
        &::null,
        &::null__com_drvr,
        &::nullcyclic,
        &::nullpoly,
        &::nullpoly__com_clip,
        &::nullpolydots,
        &::nullpolyline,
        &::nullpolyline__com_clip,
        &::numonly,
        &::objectdistsort1,
        &::objectdistsort2,
        &::objectdistsort3,
        &::objectdistsort4,
        &::objectpreview,
        &::oct1,
        &::oct2,
        &::oct7,
        &::oct8,
        &::octant1,
        &::octant1__polyfill,
        &::octant2,
        &::octant2__polyfill,
        &::octant3,
        &::octant4,
        &::octant5,
        &::octant6,
        &::octant7,
        &::octant7__polyfill,
        &::octant8,
        &::octant8__polyfill,
        &::overflowintr,
        &::parsecmndline,
        &::pauseplayevent,
        &::p_bcdat,
        &::p_char1,
        &::p_char2,
        &::p_char3,
        &::p_crsr,
        &::pd_attr,
        &::pd_decb,
        &::pd_decw,
        &::p_decat,
        &::p_defcl,
        &::pd_hexb,
        &::pd_hexl,
        &::pd_hexw,
        &::pd_line,
        &::pd_qspr,
        &::pd_vga,
        &::pd_x,
        &::pd_xmov,
        &::pd_xy,
        &::pd_xymv,
        &::pd_y,
        &::pd_ymov,
        &::p_end,
        &::p_ext,
        &::p_hexat,
        &::pictureevent,
        &::p_input,
        &::pitchdnevent,
        &::pitchupevent,
        &::p_nop,
        &::polyclip,
        &::polydotclip,
        &::polyfill,
        &::polyline,
        &::polylineclip,
        &::polyrail1,
        &::polyrail2,
        &::polyroad1,
        &::polyroad2,
        &::possubdiv0,
        &::possubdiv1,
        &::possubdiv10,
        &::possubdiv11,
        &::possubdiv12,
        &::possubdiv13,
        &::possubdiv14,
        &::possubdiv15,
        &::possubdiv16,
        &::possubdiv17,
        &::possubdiv18,
        &::possubdiv19,
        &::possubdiv2,
        &::possubdiv20,
        &::possubdiv21,
        &::possubdiv22,
        &::possubdiv23,
        &::possubdiv24,
        &::possubdiv25,
        &::possubdiv26,
        &::possubdiv27,
        &::possubdiv28,
        &::possubdiv29,
        &::possubdiv3,
        &::possubdiv30,
        &::possubdiv31,
        &::possubdiv32,
        &::possubdiv4,
        &::possubdiv5,
        &::possubdiv6,
        &::possubdiv7,
        &::possubdiv8,
        &::possubdiv9,
        &::p_over0,
        &::p_over1,
        &::pp_attr,
        &::pp_decw,
        &::pp_str,
        &::p_rect,
        &::p_rend,
        &::previewintr100,
        &::printchar,
        &::printchar1,
        &::printchar2,
        &::printchar3,
        &::printdebuginfo,
        &::printdecword,
        &::printdol,
        &::printhexbyte,
        &::p_text,
        &::p_title,
        &::p_ulend,
        &::p_uline,
        &::pv_attr,
        &::pv_chr,
        &::pv_decb,
        &::pv_decw,
        &::pv_eta,
        &::pv_hexb,
        &::pv_hexl,
        &::pv_hexw,
        &::pv_pdeg,
        &::pv_rng,
        &::pv_str,
        &::pv_x,
        &::pv_xy,
        &::pv_y,
        &::qcalcgndheight,
        &::qfadein,
        &::qfadeout,
        &::qspothta,
        &::qspothtb,
        &::qspothtc,
        &::qspothtd,
        &::qspothte,
        &::qspothtf,
        &::qspothtg,
        &::qspothth,
        &::qspothti,
        &::qsprite,
        &::quad1,
        &::quad2,
        &::quad3,
        &::quad4,
        &::quicklineclip,
        &::quickoutcodes,
        &::quicksetup,
        &::radardisp,
        &::radardisp__tab,
        &::randomizeclouds,
        &::randx,
        &::readdacblock,
        &::readdata,
        &::readjoysticks,
        &::readmouse,
        &::readmousemotion,
        &::recaljoysticks,
        &::refdisp,
        &::refreshadlb,
        &::refreshblst,
        &::refreshmusic,
        &::refreshnull,
        &::refreshrlnd,
        &::refreshsound,
        &::refreshspkr,
        &::releasebomb,
        &::releasedecoy,
        &::releasepackage,
        &::reseed,
        &::resetmouse,
        &::restorecriterr,
        &::restorekbd,
        &::restoremouse,
        &::restoreoverflow,
        &::restoretimer,
        &::resumemusic,
        &::resumesound,
        &::retrievedata,
        &::reverseevent,
        &::rotatenull,
        &::rotateview,
        &::rotateviewbk,
        &::rotateviewdn,
        &::rotateviewft,
        &::rotateviewlt,
        &::rotateviewrt,
        &::rotateviewup,
        &::routeplandisp,
        &::_rvrsmeshfill,
        &::rvrsmeshfill,
        &::rvrsoctant1,
        &::rvrsoctant2,
        &::rvrsoctant3,
        &::rvrsoctant4,
        &::rvrsoctant5,
        &::rvrsoctant6,
        &::rvrsoctant7,
        &::rvrsoctant8,
        &::_rvrspolyfill,
        &::rvrspolyfill,
        &::rwralertadlb,
        &::rwralertblst,
        &::rwralertnull,
        &::rwralertrlnd,
        &::rwralertsound,
        &::rwralertspkr,
        &::rxopponentdata,
        &::samsymbol,
        &::savefile,
        &::savegamedata,
        &::savemapdata,
        &::scancraters,
        &::scanface,
        &::scanhills,
        &::scansectors,
        &::scansmoke,
        &::scantrees,
        &::scanvertex1,
        &::scanvertex16,
        &::scanvertex16__features,
        &::scanvertex1__clouds,
        &::scanvertex1__features,
        &::scanvertex1__towns,
        &::scanvertex2,
        &::scanvertex2__clouds,
        &::scanvertex2__features,
        &::scanvertex2__towns,
        &::scanvertex8,
        &::scanvertex8__clouds,
        &::scanvertex8__features,
        &::scanvertex8__towns,
        &::screechadlb,
        &::screechblst,
        &::screechnull,
        &::screechrlnd,
        &::screechsound,
        &::screechspkr,
        &::screenshaker,
        &::selectafds,
        &::selectautomfd,
        &::selectcase,
        &::selectflir,
        &::selectloopback,
        &::selectloopback__mfd,
        &::selectmap,
        &::selectmap__mfd,
        &::selectmodeok,
        &::selectmodeok__mfd,
        &::selectradar,
        &::selectradar__mfd,
        &::selectradarmfd,
        &::selecttiald,
        &::sendpacket,
        &::setattributes,
        &::setchar,
        &::setdronewpnlock,
        &::setgameviewmode,
        &::setgmrpalette,
        &::sethudlevel,
        &::setirpalette,
        &::setmouselimits,
        &::setmousepos,
        &::setpanelmode,
        &::setpixel,
        &::setsspriteclip,
        &::settimedate,
        &::setvideomode,
        &::setviewmode,
        &::singletrack1,
        &::singletrack2,
        &::slowcyclic,
        &::sortctrljoy1,
        &::sortctrljoy2,
        &::sortctrlkbd,
        &::sortctrlmouse,
        &::sortfacedist1,
        &::sortfacedist16,
        &::sortfacedist2,
        &::sortfacedist8,
        &::sortpolycrt,
        &::sortpolycrt__com_clip,
        &::sortprmdecexc,
        &::sortprmdecinc,
        &::sortprmline1,
        &::sortprmline2,
        &::sortprmpoly1,
        &::sortprmpoly2,
        &::sortquad1,
        &::sortquad2,
        &::sortquad3,
        &::sortquad4,
        &::sortrunway1,
        &::sortrunway16,
        &::sortrunway2,
        &::sortrunway8,
        &::sortsecdecexc,
        &::sortsecdecinc,
        &::sortsecline1,
        &::sortsecline2,
        &::sortsecpoly1,
        &::sortsecpoly2,
        &::sqrt32,
        &::ssprite,
        &::staticcollision,
        &::stopcomms,
        &::storeworkscreen,
        &::surfacecheck,
        &::suspendadlb,
        &::suspendblst,
        &::suspendmusic,
        &::suspendnull,
        &::suspendrlnd,
        &::suspendsound,
        &::suspendspkr,
        &::swappalettes,
        &::switchonlights,
        &::synccomms,
        &::tan_bfill,
        &::tan_bsprite,
        &::tan_dload,
        &::tangent,
        &::tan_hfill,
        &::tan_hline,
        &::tan_initms,
        &::tan_initss,
        &::tan_line,
        &::tan_loadmouse,
        &::tan_loadscreen,
        &::tan_mfill,
        &::tan_msprite,
        &::tan_pfill,
        &::tan_prtc1,
        &::tan_prtc2,
        &::tan_prtc3,
        &::tan_qsprite,
        &::tan_savemouse,
        &::tan_savescreen,
        &::tan_setpx,
        &::tan_sfill,
        &::tan_ssprite,
        &::tan_uncomppic,
        &::tan_vline,
        &::tan_vmode,
        &::tdsymadjustlock,
        &::tdsymadjustlock_ori,
        &::tdsymadjustlock_ori2,
        &::tdsymok,
        &::tdsymok_ori,
        &::tdsymok_ori2,
        &::tdsymtargetlock,
        &::tdsymtargetlock_ori,
        &::tdsymtargetlock_ori2,
        &::tdsymzoom,
        &::tdsymzoom_ori,
        &::tdsymzoom_ori2,
        &::tem_dload,
        &::tem_vmode,
        &::testsector1,
        &::testsector16,
        &::testsector2,
        &::testsector8,
        &::tialdadjustlock,
        &::tialdadjustlock_ori,
        &::tialdadjustlock_ori2,
        &::tialddisp,
        &::tialddisp_ori,
        &::tialddisp_ori2,
        &::tialdinit,
        &::tialdinit_ori,
        &::tialdinit_ori2,
        &::tialdsearch,
        &::tialdsearch_ori,
        &::tialdsearch_ori2,
        &::tialdtargetlock,
        &::tialdtargetlock_ori,
        &::tialdtargetlock_ori2,
        &::tialdzoom,
        &::tialdzoom_ori,
        &::tialdzoom_ori2,
        &::timerintr,
        &::treecollision,
        &::tv1_calccrt,
        &::tv1_circlecrt,
        &::tv1_scalevp,
        &::tv2_calccrt,
        &::tv2_circlecrt,
        &::tv2_scalevp,
        &::tv3_calccrt,
        &::tv3_circlecrt,
        &::tv3_scalevp,
        &::tv4_calccrt,
        &::tv4_circlecrt,
        &::tv4_scalevp,
        &::tv5_calccrt,
        &::tv5_circlecrt,
        &::tv5_scalevp,
        &::txtornadodata,
        &::unpackdeltapic,
        &::updateaaa,
        &::updateadi2,
        &::updateadlb,
        &::updatealarm,
        &::updateavionics,
        &::updatebl755,
        &::updateblst,
        &::updatecannon,
        &::updateconvoys,
        &::updatectrlsface,
        &::updatedecoy,
        &::updatedemo,
        &::updatedestroyed,
        &::updatedrone,
        &::updateescope2,
        &::updateextrn,
        &::updateframe,
        &::updategameview,
        &::updategloc,
        &::updategpb,
        &::updatehelicops,
        &::updatehud,
        &::updatehud2,
        &::updatejp233,
        &::updatelgb,
        &::updatelnavig,
        &::updatelookdown,
        &::updatelookdown__views,
        &::updatelookup,
        &::updatelpilot,
        &::updatemap,
        &::updatemfd,
        &::updatemissile,
        &::updatemobile,
        &::updatemovingmap,
        &::updatenavig,
        &::updatenavigmfd,
        &::updatenavig__views,
        &::updatenull,
        &::updatepanel,
        &::updatepilot,
        &::updatepilotmfd,
        &::updatepilot__views,
        &::updateplanes,
        &::updateremote,
        &::updateret,
        &::updaterlnd,
        &::updaternavig,
        &::updaterpilot,
        &::updaterwr,
        &::updaterwr2,
        &::updatesam,
        &::updatesatellite,
        &::updatesound,
        &::updatespectator,
        &::updatespkr,
        &::updatetab,
        &::updatetab1,
        &::updatetab2,
        &::updatetgtwp,
        &::updatetracking,
        &::updateweapon,
        &::updateweapons,
        &::updatezrk_aaa,
        &::userhorizon,
        &::useroptions,
        &::uservisoptions,
        &::uservisual,
        &::validatetiald,
        &::vcalcoutcodes,
        &::vdotclip,
        &::vga_bfill,
        &::vga_brackets,
        &::vga_bsprite,
        &::vga_clrnavigpan,
        &::vga_clrpilotpan,
        &::vga_dload,
        &::vga_drwnavigpan,
        &::vga_drwnavigpanbrief,
        &::vga_drwpilotpan,
        &::vga_hfill,
        &::vga_hline,
        &::vga_initms,
        &::vga_initpanels,
        &::vga_initqs,
        &::vga_initss,
        &::vga_ironwork,
        &::vga_line,
        &::vga_loadmouse,
        &::vga_loadpanel,
        &::vga_loadscreen,
        &::vga_mfill,
        &::vga_msprite,
        &::vga_pfill,
        &::vgaphotodflt,
        &::vga_prtc1,
        &::vga_prtc2,
        &::vga_prtc3,
        &::vga_qsprite,
        &::vga_savemouse,
        &::vga_savescreen,
        &::vga_setpx,
        &::vga_sfill,
        &::vga_ssprite,
        &::vga_vline,
        &::vga_vmode,
        &::visual,
        &::visualinfo,
        &::vlinedraw,
        &::vpolyclip,
        &::vpolylineclip,
        &::vquicklineclip,
        &::vquickoutcodes,
        &::vsetrotation,
        &::vsetviewport,
        &::weaponscontrol,
        &::wpnkilldrone,
        &::xcalcunclipcrt,
        &::xdotclip
    };
    static std::unordered_map<dw, m2cf*>* segmap = nullptr;
    if (!segmap) {
        segmap = new std::unordered_map<dw, m2cf*>();
        segmap->reserve(sizeof(procs) / sizeof(procs[0]) * 2);
        for (m2cf* p : procs) {
            const dw s = (dw)(((const db*)p - (const db*)&m) >> 4);
            if (s && segmap->find(s) == segmap->end()) {
                (*segmap)[s] = p;
            }
        }
    }
    auto it = segmap->find(seg);
    return it == segmap->end() ? nullptr : it->second;
}




db* linked_code_segment_raddr(dw segment, dw offset) {
    if (segment != 0x0 && segment != 0x192 && segment != 0x1a2) { return nullptr; }
    if (offset >= 0x0 && offset < 0x65) { return (db*)&m + 0x2 + offset; }
    return nullptr;
}



void Initializer_main();
void Initializer_com_drvr();
void Initializer_hgc_stub();
void Initializer_hem_stub();
void Initializer_cga_stub();
void Initializer_ega_stub();
void Initializer_tan_stub();
void Initializer_tem_stub();
void Initializer_vga_drvr();
void Initializer_charsets();
void Initializer_ss_vga_1();
void Initializer_ms_vga_1();
void Initializer_qs_vga_1();
void Initializer_random();
void Initializer_keyboard();
void Initializer_timer();
void Initializer_critical();
void Initializer_overflow();
void Initializer_newmouse();
void Initializer_joystick();
void Initializer_disk();
void Initializer_trig();
void Initializer_mathfunc();
void Initializer_print();
void Initializer_input();
void Initializer_vgaphoto();
void Initializer_misclib();
void Initializer_polyfill();
void Initializer_cmndline();
void Initializer_comms();
void Initializer_chsprite();
void Initializer_circle();
void Initializer_palettes();
void Initializer_vconfig();
void Initializer_visual();
void Initializer_vislib();
void Initializer_visdata();
void Initializer_visdebug();
void Initializer_horizon();
void Initializer_com_clip();
void Initializer_int_clip();
void Initializer_alt_clip();
void Initializer_ext_clip();
void Initializer_tv1_clip();
void Initializer_tv2_clip();
void Initializer_tv3_clip();
void Initializer_tv4_clip();
void Initializer_tv5_clip();
void Initializer_secscan();
void Initializer_secdraw();
void Initializer_mobdraw();
void Initializer_mobsort();
void Initializer_objdraw();
void Initializer_roads();
void Initializer_railways();
void Initializer_features();
void Initializer_hills();
void Initializer_clouds();
void Initializer_specials();
void Initializer_towns();
void Initializer_airfield();
void Initializer_rwy_taxi();
void Initializer_ground();
void Initializer_mobile();
void Initializer_scanface();
void Initializer_mapdata1();
void Initializer_secdata1();
void Initializer_featobj1();
void Initializer_grndobj1();
void Initializer_flatobj1();
void Initializer_mobobj1();
void Initializer_vscreen();
void Initializer_trees();
void Initializer_stars();
void Initializer_statdraw();
void Initializer_collide();
void Initializer_craters();
void Initializer_smokedrw();
void Initializer_smoke();
void Initializer_maindata();
void Initializer_control();
void Initializer_initgame();
void Initializer_explore();
void Initializer_model();
void Initializer_modellib();
void Initializer_companel();
void Initializer_vgapanel();
void Initializer_pilotpan();
void Initializer_navigpan();
void Initializer_extrnpan();
void Initializer_framepan();
void Initializer_lookdown();
void Initializer_hud();
void Initializer_hud2();
void Initializer_views();
void Initializer_uservis();
void Initializer_avionics();
void Initializer_movemap();
void Initializer_mapview();
void Initializer_mfd();
void Initializer_tab();
void Initializer_messages();
void Initializer_rngbrg();
void Initializer_celldata();
void Initializer_vehicles();
void Initializer_aircraft();
void Initializer_helicops();
void Initializer_jettison();
void Initializer_warnings();
void Initializer_gloc();
void Initializer_loadpic();
void Initializer_weapons();
void Initializer_aaa();
void Initializer_sam();
void Initializer_dataxchg();
void Initializer_trnsfrm();
void Initializer_soundfx();
void Initializer_music();
void Initializer_preview();
void Initializer_objflags();
void Initializer_intercpt();
void Initializer_dronelib();
void Initializer_miscdata();
void Initializer_twoplyr();
void Initializer_damage();
void Initializer_debug();
void Initializer_stack();

void Initializer() {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    Initializer_main();
    Initializer_com_drvr();
    Initializer_hgc_stub();
    Initializer_hem_stub();
    Initializer_cga_stub();
    Initializer_ega_stub();
    Initializer_tan_stub();
    Initializer_tem_stub();
    Initializer_vga_drvr();
    Initializer_charsets();
    Initializer_ss_vga_1();
    Initializer_ms_vga_1();
    Initializer_qs_vga_1();
    Initializer_random();
    Initializer_keyboard();
    Initializer_timer();
    Initializer_critical();
    Initializer_overflow();
    Initializer_newmouse();
    Initializer_joystick();
    Initializer_disk();
    Initializer_trig();
    Initializer_mathfunc();
    Initializer_print();
    Initializer_input();
    Initializer_vgaphoto();
    Initializer_misclib();
    Initializer_polyfill();
    Initializer_cmndline();
    Initializer_comms();
    Initializer_chsprite();
    Initializer_circle();
    Initializer_palettes();
    Initializer_vconfig();
    Initializer_visual();
    Initializer_vislib();
    Initializer_visdata();
    Initializer_visdebug();
    Initializer_horizon();
    Initializer_com_clip();
    Initializer_int_clip();
    Initializer_alt_clip();
    Initializer_ext_clip();
    Initializer_tv1_clip();
    Initializer_tv2_clip();
    Initializer_tv3_clip();
    Initializer_tv4_clip();
    Initializer_tv5_clip();
    Initializer_secscan();
    Initializer_secdraw();
    Initializer_mobdraw();
    Initializer_mobsort();
    Initializer_objdraw();
    Initializer_roads();
    Initializer_railways();
    Initializer_features();
    Initializer_hills();
    Initializer_clouds();
    Initializer_specials();
    Initializer_towns();
    Initializer_airfield();
    Initializer_rwy_taxi();
    Initializer_ground();
    Initializer_mobile();
    Initializer_scanface();
    Initializer_mapdata1();
    Initializer_secdata1();
    Initializer_featobj1();
    Initializer_grndobj1();
    Initializer_flatobj1();
    Initializer_mobobj1();
    Initializer_vscreen();
    Initializer_trees();
    Initializer_stars();
    Initializer_statdraw();
    Initializer_collide();
    Initializer_craters();
    Initializer_smokedrw();
    Initializer_smoke();
    Initializer_maindata();
    Initializer_control();
    Initializer_initgame();
    Initializer_explore();
    Initializer_model();
    Initializer_modellib();
    Initializer_companel();
    Initializer_vgapanel();
    Initializer_pilotpan();
    Initializer_navigpan();
    Initializer_extrnpan();
    Initializer_framepan();
    Initializer_lookdown();
    Initializer_hud();
    Initializer_hud2();
    Initializer_views();
    Initializer_uservis();
    Initializer_avionics();
    Initializer_movemap();
    Initializer_mapview();
    Initializer_mfd();
    Initializer_tab();
    Initializer_messages();
    Initializer_rngbrg();
    Initializer_celldata();
    Initializer_vehicles();
    Initializer_aircraft();
    Initializer_helicops();
    Initializer_jettison();
    Initializer_warnings();
    Initializer_gloc();
    Initializer_loadpic();
    Initializer_weapons();
    Initializer_aaa();
    Initializer_sam();
    Initializer_dataxchg();
    Initializer_trnsfrm();
    Initializer_soundfx();
    Initializer_music();
    Initializer_preview();
    Initializer_objflags();
    Initializer_intercpt();
    Initializer_dronelib();
    Initializer_miscdata();
    Initializer_twoplyr();
    Initializer_damage();
    Initializer_debug();
    Initializer_stack();
}

}

