#include "protos.h"

void f_005473d0(void) /* sub_5473D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005473d0);
    /* 005473d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005473d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005473d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005473d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005473d7: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 005473dd: call 0x548b20 */ r_esp -= 4; W32(r_esp, 0x5473e2u); f_00548b20();
    /* 005473e2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005473e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005473e6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005473e8: mov ecx, dword ptr [0x793400] */ r_ecx = R32((u32)(0x793400u));
    /* 005473ee: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005473f1: mov eax, dword ptr [0x793400] */ r_eax = R32((u32)(0x793400u));
    /* 005473f6: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005473f9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005473fb: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005473fe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x547400u); call_ind(t); }
    /* 00547400: mov esp, ebp */ r_esp = r_ebp;
    /* 00547402: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00547403: ret 4 */ FN_RET(0x005473d0); r_esp += 8; return;
}

