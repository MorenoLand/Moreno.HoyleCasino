#include "protos.h"

void f_004ef420(void) /* sub_4EF420 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ef420);
    /* 004ef420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ef421: mov ebp, esp */ r_ebp = r_esp;
    /* 004ef423: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ef424: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ef427: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef42a: mov ax, word ptr [eax + 0x380] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x380u))) & 0xffffu);
    /* 004ef431: mov esp, ebp */ r_esp = r_ebp;
    /* 004ef433: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ef434: ret  */ FN_RET(0x004ef420); r_esp += 4; return;
}

void f_004ef730(void) /* sub_4EF730 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004ef730);
    /* 004ef730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ef731: mov ebp, esp */ r_ebp = r_esp;
    /* 004ef733: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ef734: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004ef737: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004ef73a: mov ax, word ptr [eax + 0x388] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x388u))) & 0xffffu);
    /* 004ef741: mov esp, ebp */ r_esp = r_ebp;
    /* 004ef743: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ef744: ret  */ FN_RET(0x004ef730); r_esp += 4; return;
}

