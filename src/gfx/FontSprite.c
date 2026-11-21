#include "protos.h"

void f_0061eda0(void) /* FontSprite::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061eda0);
    /* 0061eda0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061eda1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061eda3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061eda4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061eda7: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061edab: jne 0x61edb1 */ if (!fZ) goto L_0061edb1;
L_0061edad:; BB(0x0061edad);
    /* 0061edad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061edaf: jmp 0x61edba */ goto L_0061edba;
L_0061edb1:; BB(0x0061edb1);
    /* 0061edb1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061edb4: mov eax, dword ptr [eax + 0x158] */ r_eax = R32((u32)(r_eax+0x158u));
L_0061edba:; BB(0x0061edba);
    /* 0061edba: mov esp, ebp */ r_esp = r_ebp;
    /* 0061edbc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061edbd: ret  */ FN_RET(0x0061eda0); r_esp += 4; return;
}

