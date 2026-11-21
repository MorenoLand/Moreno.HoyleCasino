#include "protos.h"

void f_0064eb80(void) /* sub_64EB80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064eb80);
    /* 0064eb80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064eb81: mov ebp, esp */ r_ebp = r_esp;
    /* 0064eb83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064eb84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064eb87: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0064eb8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064eb8d: je 0x64eba0 */ if (fZ) goto L_0064eba0;
L_0064eb8f:; BB(0x0064eb8f);
    /* 0064eb8f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064eb91: push 0x186a7 */ { u32 v = 0x186a7u; r_esp -= 4; W32(r_esp, v); }
    /* 0064eb96: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064eb99: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x64eb9eu); f_005f2b20();
    /* 0064eb9e: jmp 0x64ebad */ goto L_0064ebad;
L_0064eba0:; BB(0x0064eba0);
    /* 0064eba0: push 0x186a7 */ { u32 v = 0x186a7u; r_esp -= 4; W32(r_esp, v); }
    /* 0064eba5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064eba8: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x64ebadu); f_005f2ba0();
L_0064ebad:; BB(0x0064ebad);
    /* 0064ebad: mov esp, ebp */ r_esp = r_ebp;
    /* 0064ebaf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064ebb0: ret 4 */ FN_RET(0x0064eb80); r_esp += 8; return;
}

void f_0064ed50(void) /* sub_64ED50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064ed50);
    /* 0064ed50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064ed51: mov ebp, esp */ r_ebp = r_esp;
    /* 0064ed53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ed54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064ed57: cmp dword ptr [0x16306b0], 0 */ {  u32 a = R32((u32)(0x16306b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ed5e: je 0x64ed75 */ if (fZ) goto L_0064ed75;
L_0064ed60:; BB(0x0064ed60);
    /* 0064ed60: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 0064ed66: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x64ed6bu); f_005f8990();
    /* 0064ed6b: mov dword ptr [0x16306b0], 0 */ W32((u32)(0x16306b0u), 0x0u);
L_0064ed75:; BB(0x0064ed75);
    /* 0064ed75: mov esp, ebp */ r_esp = r_ebp;
    /* 0064ed77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064ed78: ret  */ FN_RET(0x0064ed50); r_esp += 4; return;
}

void f_0064ee40(void) /* sub_64EE40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064ee40);
    /* 0064ee40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064ee41: mov ebp, esp */ r_ebp = r_esp;
    /* 0064ee43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ee44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064ee47: cmp dword ptr [0x16306a0], 0 */ {  u32 a = R32((u32)(0x16306a0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ee4e: je 0x64ee65 */ if (fZ) goto L_0064ee65;
L_0064ee50:; BB(0x0064ee50);
    /* 0064ee50: mov ecx, dword ptr [0x16306a0] */ r_ecx = R32((u32)(0x16306a0u));
    /* 0064ee56: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x64ee5bu); f_005f8990();
    /* 0064ee5b: mov dword ptr [0x16306a0], 0 */ W32((u32)(0x16306a0u), 0x0u);
L_0064ee65:; BB(0x0064ee65);
    /* 0064ee65: mov esp, ebp */ r_esp = r_ebp;
    /* 0064ee67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064ee68: ret  */ FN_RET(0x0064ee40); r_esp += 4; return;
}

void f_0064ef70(void) /* sub_64EF70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064ef70);
    /* 0064ef70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064ef71: mov ebp, esp */ r_ebp = r_esp;
    /* 0064ef73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064ef75: push 0x6ac0cd */ { u32 v = 0x6ac0cdu; r_esp -= 4; W32(r_esp, v); }
    /* 0064ef7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064ef80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ef81: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064ef84: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064ef89: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064ef8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ef8c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0064ef8f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0064ef95: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0064ef98: cmp dword ptr [0x16306d0], 0 */ {  u32 a = R32((u32)(0x16306d0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ef9f: jne 0x64f006 */ if (!fZ) goto L_0064f006;
L_0064efa1:; BB(0x0064efa1);
    /* 0064efa1: push 0x1c8 */ { u32 v = 0x1c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0064efa6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x64efabu); f_00686d82();
    /* 0064efab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064efae: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064efb1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064efb8: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064efbc: je 0x64efcb */ if (fZ) goto L_0064efcb;
L_0064efbe:; BB(0x0064efbe);
    /* 0064efbe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064efc1: call 0x672fe0 */ r_esp -= 4; W32(r_esp, 0x64efc6u); f_00672fe0();
    /* 0064efc6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0064efc9: jmp 0x64efd2 */ goto L_0064efd2;
L_0064efcb:; BB(0x0064efcb);
    /* 0064efcb: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0064efd2:; BB(0x0064efd2);
    /* 0064efd2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064efd5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0064efd8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064efdf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064efe2: mov dword ptr [0x16306d0], ecx */ W32((u32)(0x16306d0u), r_ecx);
    /* 0064efe8: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0064efeb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064efec: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 0064eff2: call 0x673130 */ r_esp -= 4; W32(r_esp, 0x64eff7u); f_00673130();
    /* 0064eff7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064eff9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064effb: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 0064f001: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x64f006u); f_005f7340();
L_0064f006:; BB(0x0064f006);
    /* 0064f006: mov ecx, dword ptr [0x16306d0] */ r_ecx = R32((u32)(0x16306d0u));
    /* 0064f00c: call 0x6738e0 */ r_esp -= 4; W32(r_esp, 0x64f011u); f_006738e0();
    /* 0064f011: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064f014: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064f01b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f01c: mov esp, ebp */ r_esp = r_ebp;
    /* 0064f01e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064f01f: ret 4 */ FN_RET(0x0064ef70); r_esp += 8; return;
}

