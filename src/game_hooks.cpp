/* Tornado game glue: binds Tornado's translated globals to the universal
 * m2c runtime hooks. The runtime (asm.cpp/asm.h) never names program symbols;
 * everything Tornado-specific -- deterministic-timer counters, the held-key
 * table, palette-block seeding, joystick fallback, state dumps and scenario
 * pokes -- is wired up here. */
#include "asm.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>



/* Generated data symbols (refs to the program's own data storage). The old
 * runtime declared these as weak externs inside asm.cpp; they live here now. */
extern db* key __attribute__((weak));
extern dw* ticker __attribute__((weak));
extern dw* frames __attribute__((weak));
extern dw* countdown __attribute__((weak));
extern dd* elapsedtime __attribute__((weak));
extern dw* controldevice __attribute__((weak));
extern db* wheelbrakes __attribute__((weak));
extern db* ssf_wheelbrakes __attribute__((weak));
extern dw* throttle __attribute__((weak));
extern dw* autovias __attribute__((weak));
extern dw* aimthrottle __attribute__((weak));
extern dw* deltatime __attribute__((weak));
extern dw* lastframe __attribute__((weak));
extern dw* sqrtrho __attribute__((weak));
extern dw* vias __attribute__((weak));
extern dw* accel __attribute__((weak));
extern dw* thrust4 __attribute__((weak));
extern dw* drag4 __attribute__((weak));
extern dw* cd0 __attribute__((weak));
extern dw* alpha __attribute__((weak));
extern dw* gforce __attribute__((weak));
extern dw* xwindveff __attribute__((weak));
extern dw* reheat __attribute__((weak));
extern dw* rpm1 __attribute__((weak));
extern db* nocollisions __attribute__((weak));
extern db* crntflappos __attribute__((weak));
extern db* destflappos __attribute__((weak));
extern dw* crntflapval __attribute__((weak));
extern dw* destflapval __attribute__((weak));
extern dw* vtas __attribute__((weak));
extern dw* pfine __attribute__((weak));
extern dw* zdot __attribute__((weak));
extern dw* trueradalt __attribute__((weak));
extern db* airborne1 __attribute__((weak));
extern db* destroyed __attribute__((weak));
extern db* dieflag __attribute__((weak));
extern db* tmpdieflag __attribute__((weak));
extern db* hitobjectnum __attribute__((weak));
extern db* objscaleconvert __attribute__((weak));
extern dw* xgrid1 __attribute__((weak));
extern dw* ygrid1 __attribute__((weak));
extern db* joya_flag __attribute__((weak));
extern dw* eleposn __attribute__((weak));
extern dw* altmode __attribute__((weak));
extern dw* ailposn __attribute__((weak));
extern dw* autoalt __attribute__((weak));
extern dw* zfthi __attribute__((weak));
extern dw* zftlo __attribute__((weak));
extern dw* xft __attribute__((weak));
extern dw* yft __attribute__((weak));
extern dw* xsec __attribute__((weak));
extern dw* ysec __attribute__((weak));
/* Palette blocks are array data: register the ref storage itself so the
 * runtime resolves it through m2c_data_symbol_address(). */
extern db vga_rgb_data __attribute__((weak));
extern db vga_panel __attribute__((weak));
extern db vga_panel1 __attribute__((weak));
extern db setpaletteflag __attribute__((weak));

extern "C" unsigned g_dbg_flip;

/* No joystick hardware exists (game port 0x201 always reads 0xff), but
   Tornado defaults ControlDevice to CTRL_DEV_JOY1/2 and then reads a dead
   stick, leaving flight controls unresponsive. Fall back to keyboard
   (CTRL_DEV_KBD1=0) whenever a joystick device is selected so arrows steer;
   the user can still switch device via the in-game menu. */
static void tornado_poll_hook() {
	if (controldevice &&
	    (*controldevice == 4 || *controldevice == 6)) {
		*controldevice = 0;
	}
}

static void tornado_state_dump(unsigned present) {
	fprintf(stderr,
		"[ST f=%u] wbrk=%s thr=%s avias=%s athr=%s dt=%s lf=%s rho=%s vias=%s reh=%s rpm=%s vtas=%s radalt=%s zft=%s.%s ac=%s t4=%s d4=%s cd=%s a=%s g=%s xw=%s sec=%s,%s ft=%s,%s hitobj=%s air=%s dst=%s die=%s/%s pitch=%s zdot=%s ctrl=%s joyA=%s ele=%s alt=%s ail=%s aalt=%s\n",
		present,
		wheelbrakes ? std::to_string(*wheelbrakes).c_str() : "-",
		throttle ? std::to_string(*throttle).c_str() : "-",
		autovias ? std::to_string(*autovias).c_str() : "-",
		aimthrottle ? std::to_string(*aimthrottle).c_str() : "-",
		deltatime ? std::to_string(*deltatime).c_str() : "-",
		lastframe ? std::to_string(*lastframe).c_str() : "-",
		sqrtrho ? std::to_string(*sqrtrho).c_str() : "-",
		vias ? std::to_string(*vias).c_str() : "-",
		reheat ? std::to_string(*reheat).c_str() : "-",
		rpm1 ? std::to_string(*rpm1).c_str() : "-",
		vtas ? std::to_string(*vtas).c_str() : "-",
		trueradalt ? std::to_string(*trueradalt).c_str() : "-",
		zfthi ? std::to_string((int)(short)*zfthi).c_str() : "-",
		zftlo ? std::to_string(*zftlo).c_str() : "-",
		accel ? std::to_string((int)(short)*accel).c_str() : "-",
		thrust4 ? std::to_string(*thrust4).c_str() : "-",
		drag4 ? std::to_string(*drag4).c_str() : "-",
		cd0 ? std::to_string(*cd0).c_str() : "-",
		alpha ? std::to_string((int)(short)*alpha).c_str() : "-",
		gforce ? std::to_string((int)(short)*gforce).c_str() : "-",
		xwindveff ? std::to_string((int)(short)*xwindveff).c_str() : "-",
		xsec ? std::to_string(*xsec).c_str() : "-",
		ysec ? std::to_string(*ysec).c_str() : "-",
		xft ? std::to_string((int)(short)*xft).c_str() : "-",
		yft ? std::to_string((int)(short)*yft).c_str() : "-",
		hitobjectnum ? std::to_string(*hitobjectnum).c_str() : "-",
		airborne1 ? std::to_string(*airborne1).c_str() : "-",
		destroyed ? std::to_string(*destroyed).c_str() : "-",
		dieflag ? std::to_string(*dieflag).c_str() : "-",
		tmpdieflag ? std::to_string(*tmpdieflag).c_str() : "-",
		pfine ? std::to_string((int)(short)*pfine).c_str() : "-",
		zdot ? std::to_string((int)(short)*zdot).c_str() : "-",
		controldevice ? std::to_string(*controldevice).c_str() : "-",
		joya_flag ? std::to_string(*joya_flag).c_str() : "-",
		eleposn ? std::to_string((int)(short)*eleposn).c_str() : "-",
		altmode ? std::to_string(*altmode).c_str() : "-",
		ailposn ? std::to_string((int)(short)*ailposn).c_str() : "-",
		autoalt ? std::to_string((int)(short)*autoalt).c_str() : "-");
	db* ks = key;
	if (ks) fprintf(stderr, " k72=%d k80=%d k56=%d k29=%d\n",
		(int)ks[72], (int)ks[80], (int)ks[56], (int)ks[29]);
	else fprintf(stderr, " ks=null\n");
	if (ks && (present == 0 || present == 120)) {
		fprintf(stderr, "[KEYDUMP f=%u] ", present);
		for (int i = 0; i < 128; i++) if (ks[i]) fprintf(stderr, "[%d]=%d ", i, (int)ks[i]);
		fprintf(stderr, "\n");
	}
}

static void tornado_frame_hook() {
	static const char* dbg = getenv("M2C_STATEDBG");
	static bool once = false;
	static unsigned n = 0;
	static unsigned last_flip = 0;
	if (!once) {
		once = true;
		if (getenv("M2C_NOCOL") && nocollisions) *nocollisions = 1;
		if (getenv("M2C_FLAPS") && crntflappos) {
			if (crntflappos) *crntflappos = 3;      // FLAPS_D_FULL
			if (destflappos) *destflappos = 3;
			if (crntflapval) *crntflapval = 600;    // FLAPS_A_FULL
			if (destflapval) *destflapval = 600;
		}
		if (dbg && objscaleconvert) {
			fprintf(stderr, "[SCALE] objsc base=%p -> ", (void*)objscaleconvert);
			for (int i = -9; i <= 15; i++) fprintf(stderr, "%+d=%02x ", i, (unsigned char)objscaleconvert[i]);
			fprintf(stderr, "\n");
		}
	}
	if (dbg && n++ % 15 == 0 && wheelbrakes) {
		tornado_state_dump(n - 1);
	}
	const unsigned flip = g_dbg_flip;
	if (flip != last_flip) {
		last_flip = flip;
		static const char* dir = getenv("M2C_IDXDUMP");
		if (dir && *dir) {
			if (getenv("M2C_IDXWS")) {  // dump the 320x100 outside-view workscreen
				char wp[1024]; std::snprintf(wp, sizeof(wp), "%s/ws_%05u.bin", dir, flip - 1);
				if (FILE* wf = std::fopen(wp, "wb")) {
					std::fwrite(((const db*)&m2c::m) + 0xe060, 1, 32000, wf); std::fclose(wf);
				}
			}
			if (getenv("M2C_IDXSTATE")) {  // scenario-selection flags for orig-vs-standalone compare
				char sp[1024]; std::snprintf(sp, sizeof(sp), "%s/state.txt", dir);
				if (FILE* sf = std::fopen(sp, "a")) {
					const db* D = (const db*)&m2c::m;
					unsigned nkeys = 0, keybits = 0;
					for (int i = 0; i < 128; ++i) if (D[0x5a3 + i]) { ++nkeys; keybits |= (1u << (i & 31)); }
					std::fprintf(sf, "flip=%u demomode=%u night=%u initnighthud=%u tornadotype=%u "
						"nightdata=%u elapsedtime=%u nkeys=%u keybits=%08x "
						"paused=%u viewmode=%u gvmode=%u ctrldev=%u "
						"ele=%d ail=%d rud=%d kfPst=%u\n",
						flip-1,
						D[0x8671],          // demomode  (data+0x8601)
						D[0x68f7],          // night[0]  (data+0x6887)
						D[0x70+0x14fe],     // initnighthud (data+0x14fe)
						(unsigned)D[0x8655] | ((unsigned)D[0x8656]<<8), // tornadotype (data+0x85e5, dw)
						D[0x70+0xaf13],     // _night (data+0xaf13)
						(unsigned)(*(const dd*)(D + 0x62f)), // elapsedtime (data+0x5bf, dd)
						nkeys, keybits,
						D[0x70+0xb1de],   // paused (data+0xb1de)
						(unsigned)D[0x70+0x15d3] | ((unsigned)D[0x70+0x15d4]<<8), // viewmode (data+0x15d3, dw)
						(unsigned)D[0x70+0x8488] | ((unsigned)D[0x70+0x8489]<<8), // gameviewmode (data+0x8488, dw)
						(unsigned)D[0x70+0x85e7] | ((unsigned)D[0x70+0x85e8]<<8), // controldevice (data+0x85e7, dw)
						(int)(short)(*(const dw*)(D + 0x70 + 0xb11d)), // eleposn (data+0xb11d)
						(int)(short)(*(const dw*)(D + 0x70 + 0xb11f)), // ailposn (data+0xb11f)
						(int)(short)(*(const dw*)(D + 0x70 + 0xb121)), // rudposn (data+0xb121)
						(unsigned)D[0x70+0xb5df]); // kf_pause[k_status] (data+0xb5df, k_status@0)
					std::fclose(sf);
				}
			}
		}
	}
}

__attribute__((constructor)) static void tornado_register_hooks() {
	m2c::m2c_game_hooks hooks = {};
	hooks.key_state = key;
	hooks.det_ticker = ticker;
	hooks.det_frames = frames;
	hooks.det_countdown = countdown;
	hooks.det_elapsed = elapsedtime;
	hooks.poll_hook = tornado_poll_hook;
	hooks.frame_hook = tornado_frame_hook;
	m2c::m2c_set_game_hooks(&hooks);
	if (&vga_rgb_data && &vga_panel && &vga_panel1 && &setpaletteflag) {
		m2c::m2c_palette_map map = {};
		map.flag = &setpaletteflag;
		map.src = &vga_panel1;
		map.dst_a = &vga_panel;
		map.dst_b = &vga_rgb_data;
		map.start = 176 * 3;
		map.size = 80 * 3;
		m2c::m2c_register_palette_map(&map);
	}
}
