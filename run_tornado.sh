#!/bin/bash
# Launch the translated Tornado binary inside the original game data dir.
# TORNADO_GAMEDIR must contain the FLIGHT data files (tornado*.3d, *.pal, …).
GAMEDIR="${TORNADO_GAMEDIR:-./FLIGHT}"
cd "$(dirname "$0")" || exit 1
[ -x ./tornado_lifted ] || { echo "run ./build.sh first"; exit 1; }
cd "$GAMEDIR" || { echo "set TORNADO_GAMEDIR to the FLIGHT data directory"; exit 1; }
exec "$OLDPWD/tornado_lifted" "$@"
