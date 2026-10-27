// Aggregate dispatch fallback.
//
// Generated module headers declare `static bool __dispatch_call(...)`
// (internal linkage, `_ZL15` mangled).  Single-proc modules emit calls to
// that name but only define the per-module dispatcher when they contain
// more than one proc, so those TUs end up with an undefined `_ZL15`
// reference.  Route them all to the generated aggregate dispatcher
// (`m2c::dispatch_external_code`, table in _data.cpp) via one global
// implementation aliased to the `_ZL15` symbol name.

#include "asm.h"
#include <cstdlib>

bool __dispatch_call_impl(m2c::_offsets __i, struct m2c::_STATE *_state)
{
	bool handled = false;
	const bool r = m2c::dispatch_external_code(__i, _state, &handled);
	if (!r) {
		return false;
	}
	if (handled) {
		return true;
	}
	// A real seg:off that no aggregate case claimed: retry by bare offset
	// (the aggregate keys are flat code offsets).
	if ((__i >> 16) != 0 && (__i & 0xffff) != 0) {
		bool inner = false;
		const bool ok = m2c::dispatch_external_code(
			static_cast<m2c::_offsets>(__i & 0xffff), _state, &inner);
		if (inner) {
			return ok;
		}
	}
	m2c::log_error("Don't know how to call to 0x%x\n", __i);
	m2c::stackDump(_state);
	abort();
}

__asm__(".globl _ZL15__dispatch_calljPN3m2c6_STATEE\n\t"
        ".type  _ZL15__dispatch_calljPN3m2c6_STATEE, @function\n\t"
        ".set   _ZL15__dispatch_calljPN3m2c6_STATEE, _Z20__dispatch_call_impljPN3m2c6_STATEE");
