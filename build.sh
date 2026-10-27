#!/bin/bash
# Build all lifted Tornado sources into ./tornado_lifted (parallel).
set -e
cd "$(dirname "$0")"
mkdir -p obj
FLAGS="-O2 -w"
INC="-Isrc"
JOBS=${JOBS:-$(nproc)}
find src -name "*.cpp" ! -name "asm.cpp" ! -name "memmgr.cpp" -print0 |
  xargs -0 -P"$JOBS" -I{} bash -c '
    f="{}"; b=$(basename "$f" .cpp)
    [ -f "obj/$b.o" ] || g++ -O2 -w -Isrc -c "$f" -o "obj/$b.o" || echo "FAIL $b"'
[ -f obj/asm.o ]    || g++ -O2 -w -Isrc -c src/asm.cpp -o obj/asm.o
[ -f obj/memmgr.o ] || g++ -O2 -w -Isrc -c src/memmgr.cpp -o obj/memmgr.o
g++ -O2 obj/*.o -o tornado_lifted -lncurses -lSDL2 -lpthread
echo "BUILD OK"
