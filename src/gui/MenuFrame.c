#include "protos.h"

void f_005dc7a0(void) /* MenuFrame::vfunc47 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc7a0);
    /* 005dc7a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc7a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc7a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc7a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005dc7a5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dc7a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc7ab: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x5dc7b0u); f_005eb220();
    /* 005dc7b0: mov esi, eax */ r_esi = r_eax;
    /* 005dc7b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc7b5: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5dc7bau); f_005eb240();
    /* 005dc7ba: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc7bc: jne 0x5dc7c9 */ if (!fZ) goto L_005dc7c9;
L_005dc7be:; BB(0x005dc7be);
    /* 005dc7be: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005dc7c4: call 0x5d8f90 */ r_esp -= 4; W32(r_esp, 0x5dc7c9u); f_005d8f90();
L_005dc7c9:; BB(0x005dc7c9);
    /* 005dc7c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dc7ca: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc7cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc7cd: ret  */ FN_RET(0x005dc7a0); r_esp += 4; return;
}

