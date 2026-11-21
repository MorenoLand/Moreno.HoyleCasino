#include "protos.h"

void f_00639730(void) /* CasinoShell::vfunc243 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00639730);
    /* 00639730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639731: mov ebp, esp */ r_ebp = r_esp;
    /* 00639733: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00639734: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00639737: mov eax, 0x30d4d1 */ r_eax = 0x30d4d1u;
    /* 0063973c: mov esp, ebp */ r_esp = r_ebp;
    /* 0063973e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063973f: ret  */ FN_RET(0x00639730); r_esp += 4; return;
}

void f_00639740(void) /* CasinoShell::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00639740);
    /* 00639740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639741: mov ebp, esp */ r_ebp = r_esp;
    /* 00639743: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00639744: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00639747: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063974a: mov ecx, dword ptr [0x763340] */ r_ecx = R32((u32)(0x763340u));
    /* 00639750: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00639752: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00639755: mov eax, dword ptr [0x763344] */ r_eax = R32((u32)(0x763344u));
    /* 0063975a: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0063975c: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0063975f: mov edx, dword ptr [0x763348] */ r_edx = R32((u32)(0x763348u));
    /* 00639765: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00639767: mov esp, ebp */ r_esp = r_ebp;
    /* 00639769: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063976a: ret 0xc */ FN_RET(0x00639740); r_esp += 16; return;
}

void f_00639770(void) /* CasinoShell::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00639770);
    /* 00639770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639771: mov ebp, esp */ r_ebp = r_esp;
    /* 00639773: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00639774: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00639777: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063977a: mov ecx, dword ptr [0x76334c] */ r_ecx = R32((u32)(0x76334cu));
    /* 00639780: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00639782: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00639785: mov eax, dword ptr [0x763350] */ r_eax = R32((u32)(0x763350u));
    /* 0063978a: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0063978c: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0063978f: mov edx, dword ptr [0x763354] */ r_edx = R32((u32)(0x763354u));
    /* 00639795: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00639797: mov esp, ebp */ r_esp = r_ebp;
    /* 00639799: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063979a: ret 0xc */ FN_RET(0x00639770); r_esp += 16; return;
}

