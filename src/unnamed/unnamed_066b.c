#include "protos.h"

void f_0066b7a0(void) /* sub_66B7A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066b7a0);
    /* 0066b7a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066b7a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066b7a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066b7a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066b7a7: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066b7ac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066b7ae: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066b7b4: mov eax, dword ptr [edx + 0x258] */ r_eax = R32((u32)(r_edx+0x258u));
    /* 0066b7ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66b7bcu); call_ind(t); }
    /* 0066b7bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b7bd: push 0x6e0790 */ { u32 v = 0x6e0790u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b7c2: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0066b7c8: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0066b7cb: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x66b7d0u); f_00607960();
    /* 0066b7d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b7d1: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066b7d7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066b7d9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066b7df: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0066b7e2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66b7e4u); call_ind(t); }
    /* 0066b7e4: mov esp, ebp */ r_esp = r_ebp;
    /* 0066b7e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066b7e7: ret  */ FN_RET(0x0066b7a0); r_esp += 4; return;
}

