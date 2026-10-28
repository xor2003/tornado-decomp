#!/usr/bin/env bash
# Deterministic end-to-end golden regression for the standalone build.
#
# Boots tornado_lifted in the FLIGHT data dir with a fixed-step timer
# (M2C_DET=1) and a committed keyscript (tests/golden/keys.txt), records
# per-tick state hashes + per-frame render hashes, and diffs both against
# the committed golden files. Any code/data regression that alters state
# or rendering shows up here even when unit tests don't cover the proc.
#
#   tools/test_golden.sh            # compare against golden
#   tools/test_golden.sh --record   # regenerate golden from current build
set -euo pipefail
cd "$(dirname "$0")/.."

GAMEDIR="${TORNADO_GAMEDIR:-/home/xor/games/Tornado/TORNADO/FLIGHT}"
GOLDEN=tests/golden
OUT="${TMPDIR:-/tmp}/tornado_golden_run"
TICKS="${GOLDEN_TICKS:-1200}"

[ -x ./tornado_lifted ] || { echo "run ./build.sh first" >&2; exit 2; }
[ -d "$GAMEDIR" ] || { echo "set TORNADO_GAMEDIR (FLIGHT data dir)" >&2; exit 2; }
mkdir -p "$GOLDEN"
rm -f "$OUT.ticks" "$OUT.frames"

(cd "$GAMEDIR" && timeout "${GOLDEN_TIMEOUT:-120}" env \
    M2C_DET=1 \
    M2C_TICKHASH="$OUT.ticks" \
    M2C_FRAMEHASH="$OUT.frames" \
    M2C_KEYSCRIPT="$OLDPWD/$GOLDEN/keys.txt" \
    SDL_VIDEODRIVER=dummy SDL_AUDIODRIVER=dummy \
    "$OLDPWD/tornado_lifted" >"$OUT.log" 2>&1) || true

wc -l "$OUT.ticks" "$OUT.frames" 2>/dev/null || true

if [ "${1:-}" = "--record" ]; then
    cp "$OUT.ticks" "$GOLDEN/ticks.txt"
    cp "$OUT.frames" "$GOLDEN/frames.txt"
    echo "golden updated: $GOLDEN/ticks.txt $GOLDEN/frames.txt"
    exit 0
fi

rc=0
for f in ticks frames; do
    if ! diff -q "$GOLDEN/$f.txt" "$OUT.$f" >/dev/null 2>&1; then
        echo "GOLDEN MISMATCH: $f"
        diff "$GOLDEN/$f.txt" "$OUT.$f" | head -20 || true
        rc=1
    else
        echo "golden $f: match"
    fi
done
exit $rc
