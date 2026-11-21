#include "protos.h"

void f_00601430(void) /* sciCycleOscillateOnce::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00601430);
    /* 00601430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601431: mov ebp, esp */ r_ebp = r_esp;
    /* 00601433: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00601434: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00601437: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060143a: cmp dword ptr [eax + 0xc], 1 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060143e: jne 0x60144c */ if (!fZ) goto L_0060144c;
L_00601440:; BB(0x00601440);
    /* 00601440: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601443: mov dword ptr [ecx + 0xc], 0xffffffff */ W32((u32)(r_ecx+0xcu), 0xffffffffu);
    /* 0060144a: jmp 0x601454 */ goto L_00601454;
L_0060144c:; BB(0x0060144c);
    /* 0060144c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060144f: call 0x6005d0 */ r_esp -= 4; W32(r_esp, 0x601454u); f_006005d0();
L_00601454:; BB(0x00601454);
    /* 00601454: mov esp, ebp */ r_esp = r_ebp;
    /* 00601456: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601457: ret  */ FN_RET(0x00601430); r_esp += 4; return;
}

