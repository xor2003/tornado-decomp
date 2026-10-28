#!/bin/bash
# Build all lifted Tornado sources into ./tornado_lifted (parallel).
# Emits obj/<name>.d depfiles so stale dependents of #included sources
# (e.g. *_gcode_lifted.cpp inside *_lifted.cpp) are rebuilt correctly.
set -e
cd "$(dirname "$0")"
mkdir -p obj
FLAGS="-O2 -w"
INC="-Isrc"
JOBS=${JOBS:-$(nproc)}

# Drop objects whose recorded deps are newer than the object itself.
for o in $(find -L obj -name "*.o" 2>/dev/null); do
    b="$(basename "$o" .o)"
    d="obj/$b.d"
    [ -f "$d" ] || continue
    deps=$(tr '\n' ' ' < "$d" | tr -d '\\' | cut -d: -f2-)
    for dep in $deps; do
        [ "$dep" -nt "$o" ] && rm -f "$o" && break
    done
done

find src -name "*.cpp" ! -name "asm.cpp" ! -name "memmgr.cpp" -print0 |
  xargs -0 -P"$JOBS" -I{} bash -c '
    f="{}"; b=$(basename "$f" .cpp)
    [ -f "obj/$b.o" ] || g++ -O2 -w -Isrc -MMD -MF "obj/$b.d" -c "$f" -o "obj/$b.o" || echo "FAIL $b"'
[ -f obj/asm.o ]    || g++ -O2 -w -Isrc -MMD -MF obj/asm.d -c src/asm.cpp -o obj/asm.o
[ -f obj/memmgr.o ] || g++ -O2 -w -Isrc -MMD -MF obj/memmgr.d -c src/memmgr.cpp -o obj/memmgr.o
g++ -O2 $(find -L obj -name "*.o" | sort | tr '\n' ' ') -o tornado_lifted -lncurses -lSDL2 -lpthread
echo "BUILD OK"
