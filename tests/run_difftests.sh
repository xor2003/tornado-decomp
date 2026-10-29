#!/bin/sh
# Differential unit tests: original FLIGHT.EXE procs (kvikdos) vs translated
# standalone procs (test_probe_all).  Every spec proc is called on both
# sides with 5 input vectors + seeded globals; register/flag results are
# compared.  Nonzero exit = unclassified divergence (regression candidate).
#
# Spec opts: pin=r (struct-ptr arg -> seeded scratch array),
#            idx=r (index arg -> small in-range values + range-seeded
#            array), class=tag (expected environment divergence bucket),
#            postpone/manual (skip), poke[ b]=sym:val, skip=regs.
#
#   tests/run_difftests.sh [specfile]     (default: tests/smoke_spec.txt)
#
# Full sweep:  python3 tools/diff_procs.py tests/diffspec.txt --auto -j8
# Reclassify a saved raw result without re-calling:
#   python3 tools/diff_procs.py tests/diffspec.txt --auto --replay tests/diffspec.txt.raw
set -e
cd "$(dirname "$0")/.."
SPEC="${1:-tests/smoke_spec.txt}"

# translated objects (incremental)
[ -f obj/_data.o ] || sh build.sh

# probe: generated registry + asm.o with its main renamed (run_tests.sh
# uses the same trick — src/asm.cpp carries the standalone game main)
mkdir -p obj_test
python3 tools/gen_probe.py obj tests/probe_all.cpp src/_data.h
g++ -O2 -w -Isrc -c src/asm.cpp -o obj_test/asm.o
objcopy --redefine-sym main=m2c_test_asm_main obj_test/asm.o
g++ -O2 -w -Isrc -o test_probe_all tests/probe_all.cpp obj_test/asm.o \
    $(find -L obj -name '*.o' ! -name 'asm.o' | sort) -lSDL2 -lncurses

python3 tools/diff_procs.py "$SPEC" --auto -j8 --probe ./test_probe_all
