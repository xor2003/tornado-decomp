# Tornado → C: рабочий план

Цель: игра Tornado целиком на C, собранная современным компилятором,
который работает. Побочная цель: найти и исправить баги masm2c
(транслятор должен давать рабочий бинарник с любых .asm).

## Источник истины

- `.ASM` из https://github.com/xor2003/Tornado — единственный источник
  истины. Никакой регенерации через lst2asm (потеря `IF 0`,
  форматирования). `.LST` — артефакты сборки, можно генерировать,
  нельзя считать исходниками.
- Драйверы: нужен только лучший — VGA (`vga_drvr`). Stub-драйверы
  (CGA/EGA/TAN/HGC/HEM/TEM/COM) из scope исключены.
- `IF 0` ветки не нужны в активном scope.

## Этапы

1. [x] Собрать эталонный FLIGHT.EXE из .asm под MASM+LINK в kvikdos
       (`/home/xor/inertia_player/examples/Tornado`, build_linux.sh).
       Map-файл = точные адреса всех PUBLIC процедур.
2. [ ] diff_procs.py: адаптация под rebuilt exe — `_mz_header()`,
       `--root`, `--locate-only`. Проверить SS/HDRPARAS везде.
3. [ ] Локатор доведён до предела: DW-таблицы (call-site operand +
       word-diff scan), F3/ префиксы, EXTRN:ABS-плейсхолдеры, stale
       @@ override → listing fallback. Текущий статус: located≈1067,
       failed≈187, из них ~159 — stub-драйверы и не-линкованные
       библиотеки (DIALOG/MOUSE/VGATOOLS/PHOTO), WriteSprite чинится.
4. [~] Дифф-тесты через kvikdos + test_probe: прогнать все in-scope
       процедуры (VGA + TORNADO/VISUAL/LIB8086-linked), классифицировать
       pass/diff/xdiff/timeout/crash/memdiff. Это safety net.
       Smoke: pass=68 diff=0 dispmiss=0 (xdiff = rtc/hwio — ожидаемо).
       Полный прогон tests/diffspec.txt (2461 строка) против rebuilt exe.
5. [x] masm2c: добиться рабочего транслированного бинарника —
       исправить DISPMISS-падение в boot, исправить найденные баги
       транслятора. CI masm2c должен быть зелёным перед каждым
       коммитом.
       DONE c9dc966: implicit CALL push делал return word = normalized eip
       (всегда 6) → value-marks алиасились, loop-counter push'и воровали
       marks через carry-допуск ±4 → ret попадал на чужой slot →
       replay → DISPMISS(6). Фикс: уникальный тег 0x8000|id для КАЖДОГО
       implicit push (sentinel-механизм распространён). tornado_lifted
       доходит до Graceful exit; randx вызывается ровно 2 раза —
       как в .ASM. Остаток: disp=3 = int33 mouse stub (IVT не засеян),
       нефатально.
6. [ ] Тесты транслированного C: unit/diff-тесты на каждую функцию —
       нормальный путь + значимые edge cases (векторы регистров,
       flags-проверки, память).
7. [ ] Ручное переписывание функций на чистом C: по транслированному
       коду + .asm исходникам + комментариям, функция за функцией.
       Критерий приёмки: тесты из п.4/п.6 остаются зелёными.
8. [ ] Целиком игра на C: собрать, сравнить поведение с эталонным
       FLIGHT.EXE покадрово/по состоянию (kvikdos, детерминированный
       прогон).

## Текущее состояние (локатор)

- Rebuilt FLIGHT.EXE (hdrparas=576) + FLIGHT.MAP свежие.
- located=1067 dup=1200 failed=187.
- Остаток после исключения stub/нелинкованных модулей: ~28 уникальных,
  все вне линка (DIALOG, MOUSE(старая), VGATOOLS, EGAPHOTO, VGAPHOTO)
  + WriteSprite — лечится @@ fallback.

## Полный sweep diffspec.txt (2461 спека) — итог

`pass=1406 diff=50 xdiff=1681 timeout=1965 skip=1367 portok=129
porthang=166 noresult=0 dispmiss=37 crash=1 memdiff=22`

xdiff-классы: aborteequiv=1033 ctx=295 array=226 hwio=47 ivt=28
ptrlayout=25 variant=20 rtc=7 — ожидаемые расхождения окружения.

diff=50 триаж: большинство — процедуры на неинициализированных данных
(SortAlt$ jmp AltSwitch[bx] по мусорному AltMode; VSetViewport si→не-
засеянный буфер; CurrentDroneOk pin-указатели по другому layout'у;
JOYSTICK — железо). Валидные кандидаты под посев контекста:
CheckRadarTgt (wr=RadarFlag 01 vs 00), InitMovingMap (rng3 ff vs 17),
WEAPONS-кластер, EXT_CircleCRT, DrawNode, ClearNavigPanel.

## Чистый C (decomp_*.cpp) — прогресс

- decomp_random.cpp: randx/fastrandx/reseed — pass=10 diff=0 (58d522f)
- decomp_mathfunc.cpp: calcdeltatime/calcdeltaxy/sqrt/sqrt32 —
  pass=20 diff=0 (858280a)
- decomp_trig.cpp: tangent/fastarctan/arctan/fastarctan2/arctan2/
  fastarcsin/fastarccos/arctan360 — pass=40 diff=0 (1e1050b)
- decomp_misclib.cpp: calcbitfieldval/testbitstatus — pass=10 diff=0
  (1eff6c3)

Паттерн: strong symbol поверх weak lifted, X86_REGREF, реальные
flag-макросы для результата и последнего flag-op'а, RETF_(0) в конце,
CALLF для proc→proc вызовов.
