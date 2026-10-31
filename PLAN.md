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
