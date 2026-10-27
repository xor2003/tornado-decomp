/* THIS IS GENERATED FILE */

        
#ifndef __M2C_VGAPHOTO_STUBS_H__
#define __M2C_VGAPHOTO_STUBS_H__

#include "asm.h"



enum {
    vga_page_0 = 0x0a000,
    vga_page_1 = 0x0a400,
    vga_page_2 = 0x0a800,
    vga_page_3 = 0x0ac00,
    vga_seq = 0x003c4,
    vga_seq_mapmsk = 0x002,
    vga_seq_memmod = 0x004,
    vga_ctrl = 0x003ce,
    vga_ctrl_setres = 0x000,
    vga_ctrl_enable = 0x001,
    vga_ctrl_colcmp = 0x002,
    vga_ctrl_rotate = 0x003,
    vga_ctrl_rdmap = 0x004,
    vga_ctrl_mode = 0x005,
    vga_ctrl_misc = 0x006,
    vga_ctrl_colmsk = 0x007,
    vga_ctrl_bitmsk = 0x008,
    vga_crtc = 0x003d4,
    vga_crtc_hi = 0x00c,
    vga_crtc_lo = 0x00d,
    vga_crtc_uline = 0x014,
    vga_crtc_mode = 0x017,
    vga_crt_stat = 0x003da,
    vga_vsync = 0x8,
    vga_pel_write = 0x003c8,
    vga_pel_read = 0x003c7,
    vga_pel_data = 0x003c9,
    vga_input_1 = 0x003da,
    vga_attr = 0x003c0,
    vga_attr_hpan = 0x033,
};
static const int ilbm_hdr_len = 1198;

	#define M2C_MODULE_VGAPHOTO 1
#if __has_include("_data_renames.h")
#include "_data_renames.h"
#endif

	extern db& default_seg;
extern db& data;
extern char (& filename)[6];
extern char& id_msd;
extern char& id_lsd;
extern char (& dummyd8483b90_data_8_103)[5];
extern db& bytecount128;
extern db& bytecount64;
extern dw& screenaddr;
extern db& hdr_data;
extern db (& ilbmheader)[8];
extern db (& dummyd8483b90_hdr_data_19_125)[8];
extern db (& dummyd8483b90_hdr_data_21_126)[8];
extern db (& dummyd8483b90_hdr_data_29_127)[8];
extern db (& dummyd8483b90_hdr_data_31_128)[8];
extern db (& dummyd8483b90_hdr_data_39_129)[8];
extern db (& cmap)[8];
extern db (& dummyd8483b90_hdr_data_49_131)[8];
extern db (& dummyd8483b90_hdr_data_51_132)[8];
extern db (& dummyd8483b90_hdr_data_59_134)[8];
extern db (& dummyd8483b90_hdr_data_61_135)[8];
extern db (& dummyd8483b90_hdr_data_69_136)[8];
extern db (& dummyd8483b90_hdr_data_71_138)[8];
extern db (& dummyd8483b90_hdr_data_79_139)[8];
extern db (& dummyd8483b90_hdr_data_81_140)[8];
extern db (& dummyd8483b90_hdr_data_89_141)[8];
extern db (& dummyd8483b90_hdr_data_91_142)[8];
extern db (& dummyd8483b90_hdr_data_99_143)[8];
extern db (& dummyd8483b90_hdr_data_a1_144)[8];
extern db (& dummyd8483b90_hdr_data_a9_145)[8];
extern db (& dummyd8483b90_hdr_data_b1_146)[8];
extern db (& dummyd8483b90_hdr_data_b9_147)[8];
extern db (& dummyd8483b90_hdr_data_c1_148)[8];
extern db (& dummyd8483b90_hdr_data_c9_149)[8];
extern db (& dummyd8483b90_hdr_data_d1_150)[8];
extern db (& dummyd8483b90_hdr_data_d9_151)[8];
extern db (& dummyd8483b90_hdr_data_e1_152)[8];
extern db (& dummyd8483b90_hdr_data_e9_153)[8];
extern db (& dummyd8483b90_hdr_data_f1_154)[8];
extern db (& dummyd8483b90_hdr_data_f9_155)[8];
extern db (& dummyd8483b90_hdr_data_101_156)[8];
extern db (& dummyd8483b90_hdr_data_109_158)[8];
extern db (& dummyd8483b90_hdr_data_111_159)[8];
extern db (& dummyd8483b90_hdr_data_119_160)[8];
extern db (& dummyd8483b90_hdr_data_121_161)[8];
extern db (& dummyd8483b90_hdr_data_129_162)[8];
extern db (& dummyd8483b90_hdr_data_131_163)[8];
extern db (& dummyd8483b90_hdr_data_139_164)[8];
extern db (& dummyd8483b90_hdr_data_141_165)[8];
extern db (& dummyd8483b90_hdr_data_149_166)[8];
extern db (& dummyd8483b90_hdr_data_151_167)[8];
extern db (& dummyd8483b90_hdr_data_159_168)[8];
extern db (& dummyd8483b90_hdr_data_161_169)[8];
extern db (& dummyd8483b90_hdr_data_169_170)[8];
extern db (& dummyd8483b90_hdr_data_171_171)[8];
extern db (& dummyd8483b90_hdr_data_179_172)[8];
extern db (& dummyd8483b90_hdr_data_181_173)[8];
extern db (& dummyd8483b90_hdr_data_189_174)[8];
extern db (& dummyd8483b90_hdr_data_191_175)[8];
extern db (& dummyd8483b90_hdr_data_199_176)[8];
extern db (& dummyd8483b90_hdr_data_1a1_177)[8];
extern db (& dummyd8483b90_hdr_data_1a9_179)[8];
extern db (& dummyd8483b90_hdr_data_1b1_180)[8];
extern db (& dummyd8483b90_hdr_data_1b9_181)[8];
extern db (& dummyd8483b90_hdr_data_1c1_182)[8];
extern db (& dummyd8483b90_hdr_data_1c9_183)[8];
extern db (& dummyd8483b90_hdr_data_1d1_184)[8];
extern db (& dummyd8483b90_hdr_data_1d9_185)[8];
extern db (& dummyd8483b90_hdr_data_1e1_186)[8];
extern db (& dummyd8483b90_hdr_data_1e9_187)[8];
extern db (& dummyd8483b90_hdr_data_1f1_188)[8];
extern db (& dummyd8483b90_hdr_data_1f9_189)[8];
extern db (& dummyd8483b90_hdr_data_201_190)[8];
extern db (& dummyd8483b90_hdr_data_209_191)[8];
extern db (& dummyd8483b90_hdr_data_211_192)[8];
extern db (& dummyd8483b90_hdr_data_219_193)[8];
extern db (& dummyd8483b90_hdr_data_221_194)[8];
extern db (& dummyd8483b90_hdr_data_229_195)[8];
extern db (& dummyd8483b90_hdr_data_231_197)[8];
extern db (& dummyd8483b90_hdr_data_239_198)[8];
extern db (& dummyd8483b90_hdr_data_241_199)[8];
extern db (& dummyd8483b90_hdr_data_249_200)[8];
extern db (& dummyd8483b90_hdr_data_251_201)[8];
extern db (& dummyd8483b90_hdr_data_259_202)[8];
extern db (& dummyd8483b90_hdr_data_261_204)[8];
extern db (& dummyd8483b90_hdr_data_269_205)[8];
extern db (& dummyd8483b90_hdr_data_271_206)[8];
extern db (& dummyd8483b90_hdr_data_279_207)[8];
extern db (& dummyd8483b90_hdr_data_281_208)[8];
extern db (& dummyd8483b90_hdr_data_289_210)[8];
extern db (& dummyd8483b90_hdr_data_291_211)[8];
extern db (& dummyd8483b90_hdr_data_299_212)[8];
extern db (& dummyd8483b90_hdr_data_2a1_213)[8];
extern db (& dummyd8483b90_hdr_data_2a9_214)[8];
extern db (& dummyd8483b90_hdr_data_2b1_215)[8];
extern db (& dummyd8483b90_hdr_data_2b9_216)[8];
extern db (& dummyd8483b90_hdr_data_2c1_217)[8];
extern db (& dummyd8483b90_hdr_data_2c9_218)[8];
extern db (& dummyd8483b90_hdr_data_2d1_219)[8];
extern db (& dummyd8483b90_hdr_data_2d9_220)[8];
extern db (& dummyd8483b90_hdr_data_2e1_221)[8];
extern db (& dummyd8483b90_hdr_data_2e9_222)[8];
extern db (& dummyd8483b90_hdr_data_2f1_223)[8];
extern db (& dummyd8483b90_hdr_data_2f9_224)[8];
extern db (& dummyd8483b90_hdr_data_301_225)[8];
extern db (& dummyd8483b90_hdr_data_309_226)[8];
extern db (& dummyd8483b90_hdr_data_311_227)[8];
extern db (& dummyd8483b90_hdr_data_319_228)[8];
extern db (& dummyd8483b90_hdr_data_321_229)[8];
extern db (& dummyd8483b90_hdr_data_329_230)[8];
extern db (& dummyd8483b90_hdr_data_331_231)[8];
extern db (& dummyd8483b90_hdr_data_339_232)[8];
extern db (& dummyd8483b90_hdr_data_341_234)[8];
extern db (& dummyd8483b90_hdr_data_349_235)[8];
extern db (& dummyd8483b90_hdr_data_351_236)[8];
extern db (& dummyd8483b90_hdr_data_359_237)[8];
extern db (& dummyd8483b90_hdr_data_361_238)[8];
extern db (& dummyd8483b90_hdr_data_369_239)[8];
extern db (& dummyd8483b90_hdr_data_371_240)[8];
extern db (& dummyd8483b90_hdr_data_379_241)[8];
extern db (& dummyd8483b90_hdr_data_381_242)[8];
extern db (& dummyd8483b90_hdr_data_389_243)[8];
extern db (& dummyd8483b90_hdr_data_391_244)[8];
extern db (& dummyd8483b90_hdr_data_399_245)[8];
extern db (& dummyd8483b90_hdr_data_3a1_246)[8];
extern db (& dummyd8483b90_hdr_data_3a9_247)[8];
extern db (& dummyd8483b90_hdr_data_3b1_248)[8];
extern db (& dummyd8483b90_hdr_data_3b9_249)[8];
extern db (& dummyd8483b90_hdr_data_3c1_250)[8];
extern db (& dummyd8483b90_hdr_data_3c9_251)[8];
extern db (& dummyd8483b90_hdr_data_3d1_252)[8];
extern db (& dummyd8483b90_hdr_data_3d9_253)[8];
extern db (& dummyd8483b90_hdr_data_3e1_254)[8];
extern db (& dummyd8483b90_hdr_data_3e9_255)[8];
extern db (& dummyd8483b90_hdr_data_3f1_256)[8];
extern db (& dummyd8483b90_hdr_data_3f9_257)[8];
extern db (& dummyd8483b90_hdr_data_401_258)[8];
extern db (& dummyd8483b90_hdr_data_409_259)[8];
extern db (& dummyd8483b90_hdr_data_411_260)[8];
extern db (& dummyd8483b90_hdr_data_419_261)[8];
extern db (& dummyd8483b90_hdr_data_421_262)[8];
extern db (& dummyd8483b90_hdr_data_429_263)[8];
extern db (& dummyd8483b90_hdr_data_431_264)[8];
extern db (& dummyd8483b90_hdr_data_439_265)[8];
extern db (& dummyd8483b90_hdr_data_441_266)[8];
extern db (& dummyd8483b90_hdr_data_449_267)[8];
extern db (& dummyd8483b90_hdr_data_451_268)[8];
extern db (& dummyd8483b90_hdr_data_459_269)[8];
extern db (& dummyd8483b90_hdr_data_461_270)[8];
extern db (& dummyd8483b90_hdr_data_469_271)[8];
extern db (& dummyd8483b90_hdr_data_471_272)[8];
extern db (& dummyd8483b90_hdr_data_479_273)[8];
extern db (& dummyd8483b90_hdr_data_481_274)[8];
extern db (& dummyd8483b90_hdr_data_489_275)[8];
extern db (& dummyd8483b90_hdr_data_491_276)[8];
extern db (& dummyd8483b90_hdr_data_499_277)[8];
extern db (& dummyd8483b90_hdr_data_4a1_278)[8];
extern db (& dummyd8483b90_hdr_data_4a9_279)[8];
extern db (& dummyd8483b90_hdr_data_4b1_280)[8];
extern db (& dummyd8483b90_hdr_data_4b9_281)[6];
extern db& gcode;

	
namespace m2c{
void   Initializer();
#ifndef M2C_CODE_EQUATE_begin
#define M2C_CODE_EQUATE_begin 1
static const dd kbegin = 0x1001;
#endif
#ifndef M2C_CODE_EQUATE_mainproc
#define M2C_CODE_EQUATE_mainproc 1
static const dd kmainproc = 0x1002;
#endif
#ifndef M2C_CODE_EQUATE_vgaphotodflt
#define M2C_CODE_EQUATE_vgaphotodflt 1
static const dd kvgaphotodflt = 0x1003;
#endif
#ifndef M2C_CODE_EQUATE_vgaphotouser
#define M2C_CODE_EQUATE_vgaphotouser 1
static const dd kvgaphotouser = 0x1004;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel1
#define M2C_CODE_EQUATE_edummylabel1 1
static const dd kedummylabel1 = 0x1005;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel1
#define M2C_CODE_EQUATE_dummylabel1 1
static const dd kdummylabel1 = 0x1006;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel2
#define M2C_CODE_EQUATE_edummylabel2 1
static const dd kedummylabel2 = 0x1007;
#endif
#ifndef M2C_CODE_EQUATE_vgaphotoexit
#define M2C_CODE_EQUATE_vgaphotoexit 1
static const dd kvgaphotoexit = 0x1008;
#endif
#ifndef M2C_CODE_EQUATE_vgaphotoerror
#define M2C_CODE_EQUATE_vgaphotoerror 1
static const dd kvgaphotoerror = 0x1009;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel2
#define M2C_CODE_EQUATE_dummylabel2 1
static const dd kdummylabel2 = 0x100a;
#endif
#ifndef M2C_CODE_EQUATE_sortscrdata
#define M2C_CODE_EQUATE_sortscrdata 1
static const dd ksortscrdata = 0x100b;
#endif
#ifndef M2C_CODE_EQUATE_writeloop
#define M2C_CODE_EQUATE_writeloop 1
static const dd kwriteloop = 0x100c;
#endif
#ifndef M2C_CODE_EQUATE_writescreenline
#define M2C_CODE_EQUATE_writescreenline 1
static const dd kwritescreenline = 0x100d;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel3
#define M2C_CODE_EQUATE_edummylabel3 1
static const dd kedummylabel3 = 0x100e;
#endif
#ifndef M2C_CODE_EQUATE_edummylabel4
#define M2C_CODE_EQUATE_edummylabel4 1
static const dd kedummylabel4 = 0x100f;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel3
#define M2C_CODE_EQUATE_dummylabel3 1
static const dd kdummylabel3 = 0x1010;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel4
#define M2C_CODE_EQUATE_dummylabel4 1
static const dd kdummylabel4 = 0x1011;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel5
#define M2C_CODE_EQUATE_dummylabel5 1
static const dd kdummylabel5 = 0x1012;
#endif
#ifndef M2C_CODE_EQUATE_dummylabel6
#define M2C_CODE_EQUATE_dummylabel6 1
static const dd kdummylabel6 = 0x1013;
#endif
#ifndef M2C_CODE_EQUATE__group1
#define M2C_CODE_EQUATE__group1 1
static const dd k_group1 = 0x1014;
#endif
}

	#if __has_include("_equates.h")
	#include "_equates.h"
	#endif
static bool _group1(m2c::_offsets, struct m2c::_STATE*);
static bool mainproc(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool sortscrdata(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool vgaphotodflt(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool vgaphotouser(m2c::_offsets, struct m2c::_STATE*);
__attribute__((weak)) bool writescreenline(m2c::_offsets, struct m2c::_STATE*);
extern bool aborttodos(m2c::_offsets, struct m2c::_STATE*);
extern bool closefile(m2c::_offsets, struct m2c::_STATE*);
extern bool createfile(m2c::_offsets, struct m2c::_STATE*);
extern bool fwrite(m2c::_offsets, struct m2c::_STATE*);
extern bool readdacblock(m2c::_offsets, struct m2c::_STATE*);

static bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
static bool __dispatch_call_ext(m2c::_offsets __disp, struct m2c::_STATE* _state);


#ifndef screenmode
extern dw& screenmode;
#endif
#ifndef workscreen
extern db& workscreen;
#endif
#ifndef realscrptr
extern dw& realscrptr;
#endif

#endif
