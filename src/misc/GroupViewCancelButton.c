#include "protos.h"

void f_00519b50(void) /* GroupViewCancelButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00519b50);
    /* 00519b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00519b51: mov ebp, esp */ r_ebp = r_esp;
    /* 00519b53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00519b54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00519b57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519b5a: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x519b5fu); f_00601a80();
    /* 00519b5f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519b62: mov dword ptr [eax], 0x6c1534 */ W32((u32)(r_eax), 0x6c1534u);
    /* 00519b68: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519b6b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00519b6e: mov dword ptr [ecx + 0x1e0], edx */ W32((u32)(r_ecx+0x1e0u), r_edx);
    /* 00519b74: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519b77: mov esp, ebp */ r_esp = r_ebp;
    /* 00519b79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00519b7a: ret 4 */ FN_RET(0x00519b50); r_esp += 8; return;
}

void f_00519b80(void) /* GroupViewCancelButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00519b80);
    /* 00519b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00519b81: mov ebp, esp */ r_ebp = r_esp;
    /* 00519b83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00519b84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00519b87: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00519b8d: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x519b92u); f_0057ae30();
    /* 00519b92: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519b95: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 00519b9b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519b9e: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 00519ba4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00519ba6: mov ecx, eax */ r_ecx = r_eax;
    /* 00519ba8: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00519bab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x519badu); call_ind(t); }
    /* 00519bad: mov esp, ebp */ r_esp = r_ebp;
    /* 00519baf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00519bb0: ret  */ FN_RET(0x00519b80); r_esp += 4; return;
}

