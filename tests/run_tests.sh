#!/usr/bin/env bash
# Build and run the lifted-proc unit suite plus the codegen-loss audit.
#
#   tests/run_tests.sh [asm-source-dir]
#
# asm-source-dir defaults to the Tornado sources used to generate src/.
set -euo pipefail
cd "$(dirname "$0")/.."

ASM_DIR="${1:-/home/xor/inertia_player/examples/Tornado}"

# 1. App objects (build.sh tracks .d depfiles so #included sources, e.g.
#    *_gcode_lifted.cpp, rebuild their dependent .o correctly).
mkdir -p obj_test
./build.sh >/dev/null

# 2. Test binary: proc suite + asm.o with main renamed so it cannot collide.
g++ -O2 -w -Isrc -c tests/test_procs.cpp -o obj_test/test_procs.o
g++ -O2 -w -Isrc -c src/asm.cpp -o obj_test/asm.o
objcopy --redefine-sym main=m2c_test_asm_main obj_test/asm.o
# shellcheck disable=SC2086
g++ -O2 obj_test/test_procs.o obj_test/asm.o \
    $(find -L obj -name '*.o' ! -name 'asm.o' | sort | tr '\n' ' ') \
    -o test_procs -lncurses -lSDL2 -lpthread
./test_procs

# 3. Structural audit: dropped REPT bodies, lost rets, dedup over-removal.
python3 tools/test_codegen.py "$ASM_DIR" src

# 4. ABI smoke test: call every weak proc wrapper with sentinel state.
python3 tools/gen_smoke.py obj obj_test/test_smoke_gen.cpp
g++ -O2 -w -Isrc -c obj_test/test_smoke_gen.cpp -o obj_test/test_smoke_gen.o
# shellcheck disable=SC2086
g++ -O2 obj_test/test_smoke_gen.o obj_test/asm.o \
    $(find -L obj -name '*.o' ! -name 'asm.o' | sort | tr '\n' ' ') \
    -o test_smoke -lncurses -lSDL2 -lpthread
./test_smoke tests/smoke_current.txt

if [ -f tests/smoke_expected.txt ]; then
    # New non-PASS results vs the committed baseline are regressions.
    NEW=$(comm -23 <(sort tests/smoke_current.txt | grep -v '^#') \
                   <(sort tests/smoke_expected.txt | grep -v '^#'))
    GONE=$(comm -13 <(sort tests/smoke_current.txt | grep -v '^#') \
                    <(sort tests/smoke_expected.txt | grep -v '^#'))
    if [ -n "$NEW" ]; then
        echo "SMOKE REGRESSIONS (new non-pass results):"
        echo "$NEW"
        exit 1
    fi
    if [ -n "$GONE" ]; then
        echo "smoke: results improved (update smoke_expected.txt):"
        echo "$GONE"
    fi
else
    echo "no tests/smoke_expected.txt - first run saved; commit it as baseline"
fi

# 5. End-to-end golden: deterministic tick+frame hashes (skip: SKIP_GOLDEN=1)
if [ "${SKIP_GOLDEN:-0}" != "1" ]; then
    bash tools/test_golden.sh
fi
