#include "protos.h"

void f_00519bc0(void) /* GroupViewHelpButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00519bc0);
    /* 00519bc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00519bc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00519bc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00519bc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00519bc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519bca: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x519bcfu); f_00601a80();
    /* 00519bcf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519bd2: mov dword ptr [eax], 0x6c162c */ W32((u32)(r_eax), 0x6c162cu);
    /* 00519bd8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519bdb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00519bde: mov dword ptr [ecx + 0x1e4], edx */ W32((u32)(r_ecx+0x1e4u), r_edx);
    /* 00519be4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519be7: mov dword ptr [eax + 0x1dc], 0 */ W32((u32)(r_eax+0x1dcu), 0x0u);
    /* 00519bf1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519bf4: mov esp, ebp */ r_esp = r_ebp;
    /* 00519bf6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00519bf7: ret 4 */ FN_RET(0x00519bc0); r_esp += 8; return;
}

void f_00519c00(void) /* GroupViewHelpButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00519c00);
    /* 00519c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00519c01: mov ebp, esp */ r_ebp = r_esp;
    /* 00519c03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00519c04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00519c07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519c0a: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 00519c10: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519c13: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 00519c19: mov dword ptr [ecx + 0x1c4], eax */ W32((u32)(r_ecx+0x1c4u), r_eax);
    /* 00519c1f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519c22: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 00519c28: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519c2b: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 00519c31: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00519c33: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00519c36: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x519c38u); call_ind(t); }
    /* 00519c38: mov esp, ebp */ r_esp = r_ebp;
    /* 00519c3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00519c3b: ret  */ FN_RET(0x00519c00); r_esp += 4; return;
}

