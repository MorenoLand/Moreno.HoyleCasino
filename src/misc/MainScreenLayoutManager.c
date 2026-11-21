#include "protos.h"

void f_00662ef0(void) /* MainScreenLayoutManager::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00662ef0);
    /* 00662ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00662ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 00662ef3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00662ef4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00662ef7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00662efa: mov dword ptr [eax], 0x6df888 */ W32((u32)(r_eax), 0x6df888u);
    /* 00662f00: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00662f03: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 00662f0a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00662f0d: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 00662f14: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00662f17: mov dword ptr [eax + 0x18], 1 */ W32((u32)(r_eax+0x18u), 0x1u);
    /* 00662f1e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00662f21: mov dword ptr [ecx + 0x14], 1 */ W32((u32)(r_ecx+0x14u), 0x1u);
    /* 00662f28: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00662f2b: mov esp, ebp */ r_esp = r_ebp;
    /* 00662f2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00662f2e: ret  */ FN_RET(0x00662ef0); r_esp += 4; return;
}

void f_00663080(void) /* MainScreenLayoutManager::vfunc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00663080);
    /* 00663080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663081: mov ebp, esp */ r_ebp = r_esp;
    /* 00663083: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663084: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00663087: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066308a: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066308e: jne 0x6630b9 */ if (!fZ) goto L_006630b9;
L_00663090:; BB(0x00663090);
    /* 00663090: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663093: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663096: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00663099: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0066309c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066309f: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 006630a2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006630a5: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 006630a7: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 006630aa: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006630ad: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006630b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006630b3: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006630b6: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
L_006630b9:; BB(0x006630b9);
    /* 006630b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006630bc: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006630bf: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006630c2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006630c5: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 006630c7: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 006630ca: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006630cd: mov esp, ebp */ r_esp = r_ebp;
    /* 006630cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006630d0: ret 4 */ FN_RET(0x00663080); r_esp += 8; return;
}

