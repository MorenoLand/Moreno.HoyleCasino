GOAL:            lifted Hoyle Casino host opens its window and renders without crashing
ACCEPTANCE:      bin/t.exe runs 15 s; a visible window of the process exists and the crash log is empty
CURRENT:         boots, binds 309 imports, runs CRT init, qsort/bsearch/threads/thiscall/_acmdln/IMalloc all bridged; dies at guest 0x699da2 `idiv edi` with edi=0 (float chain 0x69d578 -> fadd 1.0 -> 0x686fb4 -> 0x687450 returns 0)
HYPOTHESIS:      x87 float-to-int conversion (ftol) or the preceding fmod/floor chain yields 0 where the original yields a nonzero count, so the shuffle divides by zero
NEXT ACTION:     instrument f_00687450 and the chain at 0x699d2f..0x699d7b (print ST(0), the two fild inputs, and eax) and compare against the original semantics
EVIDENCE:        "unsupported at 00699da2: divide by zero (eax 0 ecx 0 edi 0)"; generated code at 0x699d2f: fild [esi+4]; fild [esp+0x10]; call 0x69d578; fadd qword [0x6b2c38]; call 0x686fb4; call 0x687450; idiv [esi+4]; idiv edi
TRIED/REJECTED:  stack/heap collisions; R6034 manifest; .data truncation; unknown cdecl nargs; _initterm; sentinel deref; _acmdln; NOACCESS pages; IMalloc; qsort; bsearch; _beginthread/ex; thiscall MSVCP80; repe cmpsw
