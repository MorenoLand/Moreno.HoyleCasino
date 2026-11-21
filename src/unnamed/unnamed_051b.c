#include "protos.h"

void f_0051b020(void) /* sub_51B020 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051b020);
    /* 0051b020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051b021: mov ebp, esp */ r_ebp = r_esp;
    /* 0051b023: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051b024: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051b027: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051b02a: call 0x51c580 */ r_esp -= 4; W32(r_esp, 0x51b02fu); f_0051c580();
    /* 0051b02f: mov eax, dword ptr [eax*4 + 0x721908] */ r_eax = R32((u32)(r_eax*4+0x721908u));
    /* 0051b036: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051b037: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51b03cu); f_00630f40();
    /* 0051b03c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051b03f: mov esp, ebp */ r_esp = r_ebp;
    /* 0051b041: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051b042: ret  */ FN_RET(0x0051b020); r_esp += 4; return;
}

