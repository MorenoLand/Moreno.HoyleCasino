#include "protos.h"

void f_00402a90(void) /* BaccaratBetArea::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402a90);
    /* 00402a90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402a91: mov ebp, esp */ r_ebp = r_esp;
    /* 00402a93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402a95: push 0x69d685 */ { u32 v = 0x69d685u; r_esp -= 4; W32(r_esp, v); }
    /* 00402a9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00402aa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402aa1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00402aa4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00402aa9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00402aab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402aac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00402aaf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00402ab5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00402ab8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00402abb: call 0x5cc1d0 */ r_esp -= 4; W32(r_esp, 0x402ac0u); f_005cc1d0();
    /* 00402ac0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00402ac7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00402aca: mov dword ptr [eax], 0x6b28fc */ W32((u32)(r_eax), 0x6b28fcu);
    /* 00402ad0: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00402ad5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x402adau); f_00686d82();
    /* 00402ada: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00402add: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00402ae0: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00402ae4: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402ae8: je 0x402af7 */ if (fZ) goto L_00402af7;
L_00402aea:; BB(0x00402aea);
    /* 00402aea: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00402aed: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x402af2u); f_005eaaf0();
    /* 00402af2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00402af5: jmp 0x402afe */ goto L_00402afe;
L_00402af7:; BB(0x00402af7);
    /* 00402af7: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00402afe:; BB(0x00402afe);
    /* 00402afe: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00402b01: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00402b04: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00402b08: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00402b0b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00402b0e: mov dword ptr [edx + 0xae4], eax */ W32((u32)(r_edx+0xae4u), r_eax);
    /* 00402b14: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402b16: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00402b1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00402b1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00402b1f: push 0x13b2 */ { u32 v = 0x13b2u; r_esp -= 4; W32(r_esp, v); }
    /* 00402b24: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00402b27: mov ecx, dword ptr [ecx + 0xae4] */ r_ecx = R32((u32)(r_ecx+0xae4u));
    /* 00402b2d: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x402b32u); f_005eae80();
    /* 00402b32: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00402b35: mov eax, dword ptr [edx + 0xae4] */ r_eax = R32((u32)(r_edx+0xae4u));
    /* 00402b3b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00402b3e: mov ecx, dword ptr [ecx + 0xae4] */ r_ecx = R32((u32)(r_ecx+0xae4u));
    /* 00402b44: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00402b46: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00402b49: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x402b4bu); call_ind(t); }
    /* 00402b4b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00402b52: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00402b55: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00402b58: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00402b5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00402b60: mov esp, ebp */ r_esp = r_ebp;
    /* 00402b62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402b63: ret  */ FN_RET(0x00402a90); r_esp += 4; return;
}

void f_00402b70(void) /* BaccaratBetArea::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402b70);
    /* 00402b70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402b71: mov ebp, esp */ r_ebp = r_esp;
    /* 00402b73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00402b75: push 0x69d6a8 */ { u32 v = 0x69d6a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00402b7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00402b80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402b81: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00402b84: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00402b89: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00402b8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402b8c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00402b8f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00402b95: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00402b98: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00402b9b: mov dword ptr [eax], 0x6b28fc */ W32((u32)(r_eax), 0x6b28fcu);
    /* 00402ba1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00402ba8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00402bab: mov edx, dword ptr [ecx + 0xae4] */ r_edx = R32((u32)(r_ecx+0xae4u));
    /* 00402bb1: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00402bb4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00402bb7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00402bba: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402bbe: je 0x402bd3 */ if (fZ) goto L_00402bd3;
L_00402bc0:; BB(0x00402bc0);
    /* 00402bc0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00402bc2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00402bc5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00402bc7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00402bca: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00402bcc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x402bceu); call_ind(t); }
    /* 00402bce: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00402bd1: jmp 0x402bda */ goto L_00402bda;
L_00402bd3:; BB(0x00402bd3);
    /* 00402bd3: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00402bda:; BB(0x00402bda);
    /* 00402bda: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00402be1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00402be4: call 0x5cc230 */ r_esp -= 4; W32(r_esp, 0x402be9u); f_005cc230();
    /* 00402be9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00402bec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00402bf3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00402bf4: mov esp, ebp */ r_esp = r_ebp;
    /* 00402bf6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402bf7: ret  */ FN_RET(0x00402b70); r_esp += 4; return;
}

void f_00402c00(void) /* BaccaratBetArea::vfunc51 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402c00);
    /* 00402c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402c01: mov ebp, esp */ r_ebp = r_esp;
    /* 00402c03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00402c06: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00402c09: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402c0c: mov ecx, dword ptr [eax + 0xae0] */ r_ecx = R32((u32)(r_eax+0xae0u));
    /* 00402c12: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402c13: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00402c19: call 0x4081c0 */ r_esp -= 4; W32(r_esp, 0x402c1eu); f_004081c0();
    /* 00402c1e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00402c21: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402c25: jne 0x402c2e */ if (!fZ) goto L_00402c2e;
L_00402c27:; BB(0x00402c27);
    /* 00402c27: mov eax, 0x311288 */ r_eax = 0x311288u;
    /* 00402c2c: jmp 0x402c4d */ goto L_00402c4d;
L_00402c2e:; BB(0x00402c2e);
    /* 00402c2e: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402c32: jne 0x402c3b */ if (!fZ) goto L_00402c3b;
L_00402c34:; BB(0x00402c34);
    /* 00402c34: mov eax, 0x311287 */ r_eax = 0x311287u;
    /* 00402c39: jmp 0x402c4d */ goto L_00402c4d;
L_00402c3b:; BB(0x00402c3b);
    /* 00402c3b: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402c3f: jne 0x402c48 */ if (!fZ) goto L_00402c48;
L_00402c41:; BB(0x00402c41);
    /* 00402c41: mov eax, 0x311289 */ r_eax = 0x311289u;
    /* 00402c46: jmp 0x402c4d */ goto L_00402c4d;
L_00402c48:; BB(0x00402c48);
    /* 00402c48: mov eax, 0x311286 */ r_eax = 0x311286u;
L_00402c4d:; BB(0x00402c4d);
    /* 00402c4d: mov esp, ebp */ r_esp = r_ebp;
    /* 00402c4f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402c50: ret  */ FN_RET(0x00402c00); r_esp += 4; return;
}

void f_00402ca0(void) /* BaccaratBetArea::vfunc53 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402ca0);
    /* 00402ca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402ca1: mov ebp, esp */ r_ebp = r_esp;
    /* 00402ca3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00402ca6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00402ca9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00402cac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402cad: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00402cb0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402cb1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402cb4: call 0x402c60 */ r_esp -= 4; W32(r_esp, 0x402cb9u); f_00402c60();
    /* 00402cb9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00402cbc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00402cbe: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x402cc3u); f_0062fbf0();
    /* 00402cc3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00402cc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402cc8: je 0x402cde */ if (fZ) goto L_00402cde;
L_00402cca:; BB(0x00402cca);
    /* 00402cca: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00402ccc: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x402cd1u); f_0062fbf0();
    /* 00402cd1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00402cd4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402cd7: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00402cd9: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00402cdc: jmp 0x402cee */ goto L_00402cee;
L_00402cde:; BB(0x00402cde);
    /* 00402cde: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00402ce0: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x402ce5u); f_0062fbf0();
    /* 00402ce5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00402ce8: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00402ceb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00402cee:; BB(0x00402cee);
    /* 00402cee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402cf1: mov esp, ebp */ r_esp = r_ebp;
    /* 00402cf3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402cf4: ret 8 */ FN_RET(0x00402ca0); r_esp += 12; return;
}

void f_00402d00(void) /* BaccaratBetArea::vfunc54 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402d00);
    /* 00402d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402d01: mov ebp, esp */ r_ebp = r_esp;
    /* 00402d03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00402d06: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00402d09: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00402d0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402d0d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00402d10: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402d11: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402d14: call 0x402c80 */ r_esp -= 4; W32(r_esp, 0x402d19u); f_00402c80();
    /* 00402d19: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00402d1c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00402d1e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x402d23u); f_0062fbf0();
    /* 00402d23: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00402d26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402d28: je 0x402d3e */ if (fZ) goto L_00402d3e;
L_00402d2a:; BB(0x00402d2a);
    /* 00402d2a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00402d2c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x402d31u); f_0062fbf0();
    /* 00402d31: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00402d34: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402d37: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00402d39: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00402d3c: jmp 0x402d4e */ goto L_00402d4e;
L_00402d3e:; BB(0x00402d3e);
    /* 00402d3e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00402d40: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x402d45u); f_0062fbf0();
    /* 00402d45: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00402d48: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00402d4b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00402d4e:; BB(0x00402d4e);
    /* 00402d4e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402d51: mov esp, ebp */ r_esp = r_ebp;
    /* 00402d53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402d54: ret 8 */ FN_RET(0x00402d00); r_esp += 12; return;
}

void f_00402d80(void) /* BaccaratBetArea::vfunc58 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402d80);
    /* 00402d80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402d81: mov ebp, esp */ r_ebp = r_esp;
    /* 00402d83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402d84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00402d87: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00402d8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402d8b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00402d8e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402d8f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402d92: call 0x402c80 */ r_esp -= 4; W32(r_esp, 0x402d97u); f_00402c80();
    /* 00402d97: sub eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00402d9a: mov esp, ebp */ r_esp = r_ebp;
    /* 00402d9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402d9d: ret 8 */ FN_RET(0x00402d80); r_esp += 12; return;
}

void f_00403ff0(void) /* BaccaratBetArea::vfunc50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00403ff0);
    /* 00403ff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00403ff1: mov ebp, esp */ r_ebp = r_esp;
    /* 00403ff3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00403ff4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00403ff7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403ffa: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 00404000: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00404003: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00404006: lea eax, [ecx + edx + 0x48] */ r_eax = (u32)(r_ecx+r_edx+0x48u);
    /* 0040400a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0040400d: mov edx, dword ptr [eax + ecx*8] */ r_edx = R32((u32)(r_eax+r_ecx*8));
    /* 00404010: mov eax, dword ptr [eax + ecx*8 + 4] */ r_eax = R32((u32)(r_eax+r_ecx*8+0x4u));
    /* 00404014: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00404017: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00404019: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0040401c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040401f: mov esp, ebp */ r_esp = r_ebp;
    /* 00404021: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404022: ret 0xc */ FN_RET(0x00403ff0); r_esp += 16; return;
}

void f_00404030(void) /* BaccaratBetArea::vfunc52 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00404030);
    /* 00404030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00404031: mov ebp, esp */ r_ebp = r_esp;
    /* 00404033: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00404034: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00404037: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0040403c: mov esp, ebp */ r_esp = r_ebp;
    /* 0040403e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040403f: ret  */ FN_RET(0x00404030); r_esp += 4; return;
}

void f_00404040(void) /* BaccaratBetArea::vfunc56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00404040);
    /* 00404040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00404041: mov ebp, esp */ r_ebp = r_esp;
    /* 00404043: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00404044: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00404047: mov eax, 0xfffffffc */ r_eax = 0xfffffffcu;
    /* 0040404c: mov esp, ebp */ r_esp = r_ebp;
    /* 0040404e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040404f: ret 8 */ FN_RET(0x00404040); r_esp += 12; return;
}

void f_005cc300(void) /* BaccaratBetArea::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cc300);
    /* 005cc300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc301: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc303: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc304: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cc307: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cc30a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc30b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc30e: call 0x5f4f50 */ r_esp -= 4; W32(r_esp, 0x5cc313u); f_005f4f50();
    /* 005cc313: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cc316: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc317: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc31a: call 0x5f56a0 */ r_esp -= 4; W32(r_esp, 0x5cc31fu); f_005f56a0();
    /* 005cc31f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005cc322: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc324: je 0x5cc353 */ if (fZ) goto L_005cc353;
L_005cc326:; BB(0x005cc326);
    /* 005cc326: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc329: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 005cc32f: call 0x5cb5b0 */ r_esp -= 4; W32(r_esp, 0x5cc334u); f_005cb5b0();
    /* 005cc334: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005cc337: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc339: je 0x5cc353 */ if (fZ) goto L_005cc353;
L_005cc33b:; BB(0x005cc33b);
    /* 005cc33b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cc33e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc33f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc342: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cc344: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc347: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005cc34a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cc34cu); call_ind(t); }
    /* 005cc34c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cc34f: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_005cc353:; BB(0x005cc353);
    /* 005cc353: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc355: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc356: ret 4 */ FN_RET(0x005cc300); r_esp += 8; return;
}

void f_005cc360(void) /* BaccaratBetArea::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cc360);
    /* 005cc360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc361: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc363: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc364: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cc367: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cc36a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc36b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc36e: call 0x5f4f50 */ r_esp -= 4; W32(r_esp, 0x5cc373u); f_005f4f50();
    /* 005cc373: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cc376: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc377: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc37a: call 0x5f56a0 */ r_esp -= 4; W32(r_esp, 0x5cc37fu); f_005f56a0();
    /* 005cc37f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005cc382: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc384: je 0x5cc3b3 */ if (fZ) goto L_005cc3b3;
L_005cc386:; BB(0x005cc386);
    /* 005cc386: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc389: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 005cc38f: call 0x5cb610 */ r_esp -= 4; W32(r_esp, 0x5cc394u); f_005cb610();
    /* 005cc394: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005cc397: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc399: je 0x5cc3b3 */ if (fZ) goto L_005cc3b3;
L_005cc39b:; BB(0x005cc39b);
    /* 005cc39b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cc39e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc39f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc3a2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cc3a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cc3a7: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005cc3aa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cc3acu); call_ind(t); }
    /* 005cc3ac: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cc3af: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_005cc3b3:; BB(0x005cc3b3);
    /* 005cc3b3: mov esp, ebp */ r_esp = r_ebp;
    /* 005cc3b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cc3b6: ret 4 */ FN_RET(0x005cc360); r_esp += 8; return;
}

void f_005cc540(void) /* BaccaratBetArea::vfunc46 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cc540);
    /* 005cc540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cc541: mov ebp, esp */ r_ebp = r_esp;
    /* 005cc543: sub esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cc549: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cc54a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005cc54b: mov dword ptr [ebp - 0xb0], ecx */ W32((u32)(r_ebp+0xffffff50u), r_ecx);
    /* 005cc551: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 005cc558: mov dword ptr [ebp - 0x68], 0x5f5e100 */ W32((u32)(r_ebp+0xffffff98u), 0x5f5e100u);
    /* 005cc55f: mov dword ptr [ebp - 0x64], 0x989680 */ W32((u32)(r_ebp+0xffffff9cu), 0x989680u);
    /* 005cc566: mov dword ptr [ebp - 0x60], 0xf4240 */ W32((u32)(r_ebp+0xffffffa0u), 0xf4240u);
    /* 005cc56d: mov dword ptr [ebp - 0x5c], 0x7a120 */ W32((u32)(r_ebp+0xffffffa4u), 0x7a120u);
    /* 005cc574: mov dword ptr [ebp - 0x58], 0x186a0 */ W32((u32)(r_ebp+0xffffffa8u), 0x186a0u);
    /* 005cc57b: mov dword ptr [ebp - 0x54], 0xc350 */ W32((u32)(r_ebp+0xffffffacu), 0xc350u);
    /* 005cc582: mov dword ptr [ebp - 0x50], 0x61a8 */ W32((u32)(r_ebp+0xffffffb0u), 0x61a8u);
    /* 005cc589: mov dword ptr [ebp - 0x4c], 0x2710 */ W32((u32)(r_ebp+0xffffffb4u), 0x2710u);
    /* 005cc590: mov dword ptr [ebp - 0x48], 0x1388 */ W32((u32)(r_ebp+0xffffffb8u), 0x1388u);
    /* 005cc597: mov dword ptr [ebp - 0x44], 0x3e8 */ W32((u32)(r_ebp+0xffffffbcu), 0x3e8u);
    /* 005cc59e: mov dword ptr [ebp - 0x40], 0x1f4 */ W32((u32)(r_ebp+0xffffffc0u), 0x1f4u);
    /* 005cc5a5: mov dword ptr [ebp - 0x3c], 0x64 */ W32((u32)(r_ebp+0xffffffc4u), 0x64u);
    /* 005cc5ac: mov dword ptr [ebp - 0x38], 0x32 */ W32((u32)(r_ebp+0xffffffc8u), 0x32u);
    /* 005cc5b3: mov dword ptr [ebp - 0x34], 0x19 */ W32((u32)(r_ebp+0xffffffccu), 0x19u);
    /* 005cc5ba: mov dword ptr [ebp - 0x30], 0xa */ W32((u32)(r_ebp+0xffffffd0u), 0xau);
    /* 005cc5c1: mov dword ptr [ebp - 0x2c], 5 */ W32((u32)(r_ebp+0xffffffd4u), 0x5u);
    /* 005cc5c8: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005cc5cf: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005cc5d6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cc5d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc5da: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cc5dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc5de: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 005cc5e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc5e2: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 005cc5e8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cc5ea: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 005cc5f0: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 005cc5f6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cc5f8u); call_ind(t); }
    /* 005cc5f8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cc5fb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005cc5fe: mov dl, byte ptr [ebp - 4] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 005cc601: mov byte ptr [ebp - 0x15], dl */ W8((u32)(r_ebp+0xffffffebu), (u8)r_edx);
    /* 005cc604: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 005cc607: mov ecx, dword ptr [ebp + eax*4 - 0x68] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffff98u));
    /* 005cc60b: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005cc60e: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 005cc615: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005cc61c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005cc61f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc620: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cc623: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc624: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 005cc62a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cc62c: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 005cc632: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 005cc638: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cc63au); call_ind(t); }
    /* 005cc63a: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc63e: jne 0x5cc645 */ if (!fZ) goto L_005cc645;
L_005cc640:; BB(0x005cc640);
    /* 005cc640: jmp 0x5cca46 */ goto L_005cca46;
L_005cc645:; BB(0x005cc645);
    /* 005cc645: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cc648: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc649: mov edx, dword ptr [0x7947e4] */ r_edx = R32((u32)(0x7947e4u));
    /* 005cc64f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cc651: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cc657: mov edx, dword ptr [eax + 0x2c4] */ r_edx = R32((u32)(r_eax+0x2c4u));
    /* 005cc65d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5cc65fu); call_ind(t); }
    /* 005cc65f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005cc662: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc664: je 0x5cc66b */ if (fZ) goto L_005cc66b;
L_005cc666:; BB(0x005cc666);
    /* 005cc666: jmp 0x5cca46 */ goto L_005cca46;
L_005cc66b:; BB(0x005cc66b);
    /* 005cc66b: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cc66f: jle 0x5cc6f7 */ if ((fZ||fS!=fO)) goto L_005cc6f7;
L_005cc675:; BB(0x005cc675);
    /* 005cc675: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc678: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005cc679: idiv dword ptr [ebp - 0x1c] */ { i32 d = (i32)R32((u32)(r_ebp+0xffffffe4u)); if (!d) UNSUP(0x005cc679, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005cc679, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005cc67c: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005cc67f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cc682: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005cc683: idiv dword ptr [ebp - 0x1c] */ { i32 d = (i32)R32((u32)(r_ebp+0xffffffe4u)); if (!d) UNSUP(0x005cc683, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005cc683, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005cc686: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005cc689: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005cc690: jmp 0x5cc69b */ goto L_005cc69b;
L_005cc692:; BB(0x005cc692);
    /* 005cc692: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cc695: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cc698: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005cc69b:; BB(0x005cc69b);
    /* 005cc69b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cc69e: cmp edx, dword ptr [ebp - 0x70] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff90u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cc6a1: jge 0x5cc6df */ if ((fS==fO)) goto L_005cc6df;
L_005cc6a3:; BB(0x005cc6a3);
    /* 005cc6a3: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 005cc6a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc6a7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cc6aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc6ab: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005cc6ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc6af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cc6b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cc6b3: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 005cc6b9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cc6bb: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 005cc6c1: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 005cc6c7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cc6c9u); call_ind(t); }
    /* 005cc6c9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cc6cc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cc6cf: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005cc6d2: cmp dword ptr [ebp - 0x10], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc6d6: jne 0x5cc6dd */ if (!fZ) goto L_005cc6dd;
L_005cc6d8:; BB(0x005cc6d8);
    /* 005cc6d8: jmp 0x5cca46 */ goto L_005cca46;
L_005cc6dd:; BB(0x005cc6dd);
    /* 005cc6dd: jmp 0x5cc692 */ goto L_005cc692;
L_005cc6df:; BB(0x005cc6df);
    /* 005cc6df: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005cc6e2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cc6e5: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 005cc6e8: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 005cc6eb: mov ecx, dword ptr [ebp + eax*4 - 0x68] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffff98u));
    /* 005cc6ef: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005cc6f2: jmp 0x5cc66b */ goto L_005cc66b;
L_005cc6f7:; BB(0x005cc6f7);
    /* 005cc6f7: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc6fb: jne 0x5cca46 */ if (!fZ) goto L_005cca46;
L_005cc701:; BB(0x005cc701);
    /* 005cc701: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cc704: imul edx, edx, 0x1e0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1e0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc70a: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 005cc710: lea ecx, [eax + edx + 0x17c] */ r_ecx = (u32)(r_eax+r_edx+0x17cu);
    /* 005cc717: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005cc71a: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc71d: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 005cc720: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005cc723: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc726: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cc729: imul edx, edx, 0x1e0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1e0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc72f: mov esi, dword ptr [ebp - 0xb0] */ r_esi = R32((u32)(r_ebp+0xffffff50u));
    /* 005cc735: lea edx, [esi + edx + 0x17c] */ r_edx = (u32)(r_esi+r_edx+0x17cu);
    /* 005cc73c: mov ecx, dword ptr [edx + ecx] */ r_ecx = R32((u32)(r_edx+r_ecx));
    /* 005cc73f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005cc741: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 005cc744: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5cc746u); call_ind(t); }
    /* 005cc746: mov esi, eax */ r_esi = r_eax;
    /* 005cc748: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cc74b: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc751: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 005cc757: lea edx, [ecx + eax + 0x17c] */ r_edx = (u32)(r_ecx+r_eax+0x17cu);
    /* 005cc75e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cc761: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc764: mov ecx, dword ptr [edx + eax + 4] */ r_ecx = R32((u32)(r_edx+r_eax+0x4u));
    /* 005cc768: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005cc76b: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc76e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cc771: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc777: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 005cc77d: lea eax, [edi + eax + 0x17c] */ r_eax = (u32)(r_edi+r_eax+0x17cu);
    /* 005cc784: mov edx, dword ptr [eax + edx + 4] */ r_edx = R32((u32)(r_eax+r_edx+0x4u));
    /* 005cc788: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005cc78a: mov ecx, edx */ r_ecx = r_edx;
    /* 005cc78c: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 005cc78f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5cc791u); call_ind(t); }
    /* 005cc791: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc793: jne 0x5cc83b */ if (!fZ) goto L_005cc83b;
L_005cc799:; BB(0x005cc799);
    /* 005cc799: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cc79c: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc7a2: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 005cc7a8: lea edx, [ecx + eax + 0x17c] */ r_edx = (u32)(r_ecx+r_eax+0x17cu);
    /* 005cc7af: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cc7b2: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc7b5: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 005cc7b8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005cc7bb: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc7be: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cc7c1: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc7c7: mov esi, dword ptr [ebp - 0xb0] */ r_esi = R32((u32)(r_ebp+0xffffff50u));
    /* 005cc7cd: lea eax, [esi + eax + 0x17c] */ r_eax = (u32)(r_esi+r_eax+0x17cu);
    /* 005cc7d4: mov edx, dword ptr [eax + edx] */ r_edx = R32((u32)(r_eax+r_edx));
    /* 005cc7d7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005cc7d9: mov ecx, edx */ r_ecx = r_edx;
    /* 005cc7db: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 005cc7de: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5cc7e0u); call_ind(t); }
    /* 005cc7e0: mov esi, eax */ r_esi = r_eax;
    /* 005cc7e2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cc7e5: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc7eb: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 005cc7f1: lea edx, [ecx + eax + 0x17c] */ r_edx = (u32)(r_ecx+r_eax+0x17cu);
    /* 005cc7f8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cc7fb: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc7fe: mov ecx, dword ptr [edx + eax + 4] */ r_ecx = R32((u32)(r_edx+r_eax+0x4u));
    /* 005cc802: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005cc805: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc808: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cc80b: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc811: mov edi, dword ptr [ebp - 0xb0] */ r_edi = R32((u32)(r_ebp+0xffffff50u));
    /* 005cc817: lea eax, [edi + eax + 0x17c] */ r_eax = (u32)(r_edi+r_eax+0x17cu);
    /* 005cc81e: mov edx, dword ptr [eax + edx + 4] */ r_edx = R32((u32)(r_eax+r_edx+0x4u));
    /* 005cc822: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005cc824: mov ecx, edx */ r_ecx = r_edx;
    /* 005cc826: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 005cc829: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5cc82bu); call_ind(t); }
    /* 005cc82b: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc82d: jne 0x5cc83b */ if (!fZ) goto L_005cc83b;
L_005cc82f:; BB(0x005cc82f);
    /* 005cc82f: mov dword ptr [ebp - 0xb4], 1 */ W32((u32)(r_ebp+0xffffff4cu), 0x1u);
    /* 005cc839: jmp 0x5cc845 */ goto L_005cc845;
L_005cc83b:; BB(0x005cc83b);
    /* 005cc83b: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
L_005cc845:; BB(0x005cc845);
    /* 005cc845: mov al, byte ptr [ebp - 0xb4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff4cu))) & 0xffu);
    /* 005cc84b: mov byte ptr [ebp - 0x71], al */ W8((u32)(r_ebp+0xffffff8fu), (u8)r_eax);
    /* 005cc84e: movzx ecx, byte ptr [ebp - 0x71] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff8fu));
    /* 005cc852: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cc854: je 0x5cca46 */ if (fZ) goto L_005cca46;
L_005cc85a:; BB(0x005cc85a);
    /* 005cc85a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cc85d: imul edx, edx, 0x1e0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1e0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc863: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 005cc869: lea ecx, [eax + edx + 0x17c] */ r_ecx = (u32)(r_eax+r_edx+0x17cu);
    /* 005cc870: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005cc873: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc876: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 005cc879: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005cc87c: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc87f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cc882: imul edx, edx, 0x1e0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1e0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc888: mov esi, dword ptr [ebp - 0xb0] */ r_esi = R32((u32)(r_ebp+0xffffff50u));
    /* 005cc88e: lea edx, [esi + edx + 0x17c] */ r_edx = (u32)(r_esi+r_edx+0x17cu);
    /* 005cc895: mov ecx, dword ptr [edx + ecx] */ r_ecx = R32((u32)(r_edx+r_ecx));
    /* 005cc898: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005cc89a: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 005cc89d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5cc89fu); call_ind(t); }
    /* 005cc89f: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 005cc8a2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cc8a5: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc8ab: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 005cc8b1: lea edx, [ecx + eax + 0x17c] */ r_edx = (u32)(r_ecx+r_eax+0x17cu);
    /* 005cc8b8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cc8bb: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc8be: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 005cc8c1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005cc8c4: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc8c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cc8ca: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc8d0: mov esi, dword ptr [ebp - 0xb0] */ r_esi = R32((u32)(r_ebp+0xffffff50u));
    /* 005cc8d6: lea eax, [esi + eax + 0x17c] */ r_eax = (u32)(r_esi+r_eax+0x17cu);
    /* 005cc8dd: mov edx, dword ptr [eax + edx] */ r_edx = R32((u32)(r_eax+r_edx));
    /* 005cc8e0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005cc8e2: mov ecx, edx */ r_ecx = r_edx;
    /* 005cc8e4: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 005cc8e7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5cc8e9u); call_ind(t); }
    /* 005cc8e9: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 005cc8ec: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
    /* 005cc8f6: mov dword ptr [ebp - 0xa8], 0xfffffffc */ W32((u32)(r_ebp+0xffffff58u), 0xfffffffcu);
    /* 005cc900: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
    /* 005cc90a: mov dword ptr [ebp - 0xa0], 4 */ W32((u32)(r_ebp+0xffffff60u), 0x4u);
    /* 005cc914: mov dword ptr [ebp - 0x9c], 0xfffffffc */ W32((u32)(r_ebp+0xffffff64u), 0xfffffffcu);
    /* 005cc91e: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
    /* 005cc928: mov dword ptr [ebp - 0x94], 4 */ W32((u32)(r_ebp+0xffffff6cu), 0x4u);
    /* 005cc932: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 005cc93c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc93e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc940: call 0x62fc30 */ r_esp -= 4; W32(r_esp, 0x5cc945u); f_0062fc30();
    /* 005cc945: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cc948: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 005cc94e: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005cc954: mov ecx, dword ptr [ebp + eax*8 - 0xac] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffff54u));
    /* 005cc95b: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
    /* 005cc961: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 005cc967: mov eax, dword ptr [ebp + edx*8 - 0xa8] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffff58u));
    /* 005cc96e: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 005cc971: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005cc973: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5cc978u); f_0062fbf0();
    /* 005cc978: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cc97b: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005cc97d: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005cc97f: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005cc981: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 005cc987: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005cc98a: add ecx, dword ptr [ebp - 0x8c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff74u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cc990: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc991: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cc994: imul edx, edx, 0x1e0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1e0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc99a: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 005cc9a0: lea ecx, [eax + edx + 0x17c] */ r_ecx = (u32)(r_eax+r_edx+0x17cu);
    /* 005cc9a7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005cc9aa: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc9ad: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cc9af: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 005cc9b5: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 005cc9b8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005cc9bb: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc9be: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cc9c1: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc9c7: mov esi, dword ptr [ebp - 0xb0] */ r_esi = R32((u32)(r_ebp+0xffffff50u));
    /* 005cc9cd: lea eax, [esi + eax + 0x17c] */ r_eax = (u32)(r_esi+r_eax+0x17cu);
    /* 005cc9d4: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cc9d6: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005cc9dc: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 005cc9df: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cc9e1: mov ecx, eax */ r_ecx = r_eax;
    /* 005cc9e3: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005cc9e6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cc9e8u); call_ind(t); }
    /* 005cc9e8: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005cc9eb: add ecx, dword ptr [ebp - 0x78] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff88u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cc9ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cc9ef: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cc9f2: imul edx, edx, 0x1e0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1e0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cc9f8: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 005cc9fe: lea ecx, [eax + edx + 0x17c] */ r_ecx = (u32)(r_eax+r_edx+0x17cu);
    /* 005cca05: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005cca08: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cca0b: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cca0d: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 005cca13: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 005cca16: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005cca19: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cca1c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cca1f: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cca25: mov esi, dword ptr [ebp - 0xb0] */ r_esi = R32((u32)(r_ebp+0xffffff50u));
    /* 005cca2b: lea eax, [esi + eax + 0x17c] */ r_eax = (u32)(r_esi+r_eax+0x17cu);
    /* 005cca32: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cca34: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005cca3a: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 005cca3d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cca3f: mov ecx, eax */ r_ecx = r_eax;
    /* 005cca41: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005cca44: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cca46u); call_ind(t); }
L_005cca46:; BB(0x005cca46);
    /* 005cca46: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005cca47: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005cca48: mov esp, ebp */ r_esp = r_ebp;
    /* 005cca4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cca4b: ret 8 */ FN_RET(0x005cc540); r_esp += 12; return;
}

void f_005cca50(void) /* BaccaratBetArea::vfunc47 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cca50);
    /* 005cca50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cca51: mov ebp, esp */ r_ebp = r_esp;
    /* 005cca53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cca55: push 0x6a8b41 */ { u32 v = 0x6a8b41u; r_esp -= 4; W32(r_esp, v); }
    /* 005cca5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cca60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cca61: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cca64: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cca65: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005cca6a: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cca6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cca6d: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005cca70: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005cca76: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005cca79: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 005cca7e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5cca83u); f_00686d82();
    /* 005cca83: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cca86: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cca89: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cca90: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cca94: je 0x5ccaa3 */ if (fZ) goto L_005ccaa3;
L_005cca96:; BB(0x005cca96);
    /* 005cca96: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cca99: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x5cca9eu); f_005f5f50();
    /* 005cca9e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005ccaa1: jmp 0x5ccaaa */ goto L_005ccaaa;
L_005ccaa3:; BB(0x005ccaa3);
    /* 005ccaa3: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005ccaaa:; BB(0x005ccaaa);
    /* 005ccaaa: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ccaad: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005ccab0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ccab7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ccaba: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ccac0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ccac3: lea eax, [edx + ecx + 0x17c] */ r_eax = (u32)(r_edx+r_ecx+0x17cu);
    /* 005ccaca: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005ccacd: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ccad0: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ccad2: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005ccad5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ccad8: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 005ccadb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ccadd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ccae0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ccae2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ccae5: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 005ccaeb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ccaedu); call_ind(t); }
    /* 005ccaed: add eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ccaf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ccaf1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ccaf4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ccaf5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ccaf8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ccaf9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ccafc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ccafe: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ccb01: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 005ccb07: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ccb09u); call_ind(t); }
    /* 005ccb09: mov esi, eax */ r_esi = r_eax;
    /* 005ccb0b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ccb0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ccb0f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ccb12: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ccb13: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ccb16: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ccb18: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ccb1b: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 005ccb21: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ccb23u); call_ind(t); }
    /* 005ccb23: imul eax, dword ptr [ebp + 0x10] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x10u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ccb27: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ccb29: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ccb2a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ccb2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ccb2e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ccb31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ccb32: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ccb35: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ccb37: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ccb3a: mov edx, dword ptr [eax + 0xd4] */ r_edx = R32((u32)(r_eax+0xd4u));
    /* 005ccb40: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ccb42u); call_ind(t); }
    /* 005ccb42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ccb43: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ccb46: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ccb48: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ccb4b: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 005ccb51: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ccb53u); call_ind(t); }
    /* 005ccb53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ccb54: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ccb57: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ccb5d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ccb60: lea eax, [edx + ecx + 0x17c] */ r_eax = (u32)(r_edx+r_ecx+0x17cu);
    /* 005ccb67: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005ccb6a: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ccb6d: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ccb6f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005ccb72: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 005ccb75: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5ccb7au); f_005eae80();
    /* 005ccb7a: mov esi, 0x10 */ r_esi = 0x10u;
    /* 005ccb7f: sub esi, dword ptr [ebp + 0x14] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005ccb82: imul esi, esi, 3 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x3u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ccb85: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccb87: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5ccb8cu); f_0062fbf0();
    /* 005ccb8c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ccb8f: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ccb91: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ccb92: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ccb95: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ccb9b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ccb9e: lea edx, [ecx + eax + 0x17c] */ r_edx = (u32)(r_ecx+r_eax+0x17cu);
    /* 005ccba5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ccba8: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ccbab: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ccbad: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005ccbb0: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 005ccbb3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ccbb6: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ccbb9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ccbbc: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ccbc2: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ccbc5: lea ecx, [esi + ecx + 0x17c] */ r_ecx = (u32)(r_esi+r_ecx+0x17cu);
    /* 005ccbcc: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ccbce: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005ccbd1: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 005ccbd4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005ccbd6: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005ccbdc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ccbdeu); call_ind(t); }
    /* 005ccbde: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccbe0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ccbe3: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ccbe9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ccbec: lea eax, [edx + ecx + 0x17c] */ r_eax = (u32)(r_edx+r_ecx+0x17cu);
    /* 005ccbf3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005ccbf6: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ccbf9: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ccbfb: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005ccbfe: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 005ccc01: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x5ccc06u); f_005eb700();
    /* 005ccc06: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ccc09: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ccc0f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ccc12: lea edx, [ecx + eax + 0x17c] */ r_edx = (u32)(r_ecx+r_eax+0x17cu);
    /* 005ccc19: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ccc1c: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ccc1f: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ccc21: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005ccc24: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 005ccc27: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ccc2a: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ccc2d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ccc30: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ccc36: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ccc39: lea ecx, [esi + ecx + 0x17c] */ r_ecx = (u32)(r_esi+r_ecx+0x17cu);
    /* 005ccc40: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ccc42: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005ccc45: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 005ccc48: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005ccc4a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005ccc4d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ccc4fu); call_ind(t); }
    /* 005ccc4f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ccc52: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ccc59: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ccc5a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ccc5b: mov esp, ebp */ r_esp = r_ebp;
    /* 005ccc5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ccc5e: ret 0x10 */ FN_RET(0x005cca50); r_esp += 20; return;
}

void f_005ccc70(void) /* BaccaratBetArea::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ccc70);
    /* 005ccc70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ccc71: mov ebp, esp */ r_ebp = r_esp;
    /* 005ccc73: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ccc76: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ccc77: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005ccc7a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ccc81: jmp 0x5ccc8c */ goto L_005ccc8c;
L_005ccc83:; BB(0x005ccc83);
    /* 005ccc83: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ccc86: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ccc89: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005ccc8c:; BB(0x005ccc8c);
    /* 005ccc8c: cmp dword ptr [ebp - 4], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ccc90: jge 0x5ccd7b */ if ((fS==fO)) goto L_005ccd7b;
L_005ccc96:; BB(0x005ccc96);
    /* 005ccc96: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ccc99: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ccc9f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ccca2: lea eax, [edx + ecx + 0x17c] */ r_eax = (u32)(r_edx+r_ecx+0x17cu);
    /* 005ccca9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005cccac: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cccaf: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cccb1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cccb4: cmp dword ptr [eax + edx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cccb8: je 0x5ccd76 */ if (fZ) goto L_005ccd76;
L_005cccbe:; BB(0x005cccbe);
    /* 005cccbe: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cccc1: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cccc7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cccca: lea edx, [ecx + eax + 0x17c] */ r_edx = (u32)(r_ecx+r_eax+0x17cu);
    /* 005cccd1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cccd4: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cccd7: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cccd9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cccdc: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 005cccdf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ccce2: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ccce5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ccce8: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005cccee: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cccf1: lea ecx, [esi + ecx + 0x17c] */ r_ecx = (u32)(r_esi+r_ecx+0x17cu);
    /* 005cccf8: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cccfa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cccfd: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 005ccd00: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005ccd02: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005ccd05: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ccd07u); call_ind(t); }
    /* 005ccd07: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ccd0a: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ccd10: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ccd13: lea eax, [edx + ecx + 0x17c] */ r_eax = (u32)(r_edx+r_ecx+0x17cu);
    /* 005ccd1a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005ccd1d: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ccd20: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ccd22: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ccd25: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 005ccd28: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ccd2b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ccd2e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005ccd31: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ccd35: je 0x5ccd4a */ if (fZ) goto L_005ccd4a;
L_005ccd37:; BB(0x005ccd37);
    /* 005ccd37: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ccd39: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ccd3c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ccd3e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ccd41: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ccd43: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ccd45u); call_ind(t); }
    /* 005ccd45: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ccd48: jmp 0x5ccd51 */ goto L_005ccd51;
L_005ccd4a:; BB(0x005ccd4a);
    /* 005ccd4a: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005ccd51:; BB(0x005ccd51);
    /* 005ccd51: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ccd54: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ccd5a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ccd5d: lea edx, [ecx + eax + 0x17c] */ r_edx = (u32)(r_ecx+r_eax+0x17cu);
    /* 005ccd64: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ccd67: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ccd6a: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ccd6c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ccd6f: mov dword ptr [edx + ecx*4], 0 */ W32((u32)(r_edx+r_ecx*4), 0x0u);
L_005ccd76:; BB(0x005ccd76);
    /* 005ccd76: jmp 0x5ccc83 */ goto L_005ccc83;
L_005ccd7b:; BB(0x005ccd7b);
    /* 005ccd7b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ccd7c: mov esp, ebp */ r_esp = r_ebp;
    /* 005ccd7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ccd7f: ret 8 */ FN_RET(0x005ccc70); r_esp += 12; return;
}

void f_005ccd90(void) /* BaccaratBetArea::vfunc49 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ccd90);
    /* 005ccd90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ccd91: mov ebp, esp */ r_ebp = r_esp;
    /* 005ccd93: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ccd96: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005ccd99: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ccda0: jmp 0x5ccdab */ goto L_005ccdab;
L_005ccda2:; BB(0x005ccda2);
    /* 005ccda2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ccda5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ccda8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005ccdab:; BB(0x005ccdab);
    /* 005ccdab: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ccdaf: jge 0x5ccde5 */ if ((fS==fO)) goto L_005ccde5;
L_005ccdb1:; BB(0x005ccdb1);
    /* 005ccdb1: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005ccdb8: jmp 0x5ccdc3 */ goto L_005ccdc3;
L_005ccdba:; BB(0x005ccdba);
    /* 005ccdba: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ccdbd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ccdc0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005ccdc3:; BB(0x005ccdc3);
    /* 005ccdc3: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ccdc7: jge 0x5ccde3 */ if ((fS==fO)) goto L_005ccde3;
L_005ccdc9:; BB(0x005ccdc9);
    /* 005ccdc9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ccdcc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ccdcd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ccdd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ccdd1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ccdd4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ccdd6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ccdd9: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 005ccddf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ccde1u); call_ind(t); }
    /* 005ccde1: jmp 0x5ccdba */ goto L_005ccdba;
L_005ccde3:; BB(0x005ccde3);
    /* 005ccde3: jmp 0x5ccda2 */ goto L_005ccda2;
L_005ccde5:; BB(0x005ccde5);
    /* 005ccde5: mov esp, ebp */ r_esp = r_ebp;
    /* 005ccde7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ccde8: ret  */ FN_RET(0x005ccd90); r_esp += 4; return;
}

void f_005cce50(void) /* BaccaratBetArea::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cce50);
    /* 005cce50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cce51: mov ebp, esp */ r_ebp = r_esp;
    /* 005cce53: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cce56: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005cce59: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cce5c: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 005cce60: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cce62: je 0x5cce66 */ if (fZ) goto L_005cce66;
L_005cce64:; BB(0x005cce64);
    /* 005cce64: jmp 0x5cceb2 */ goto L_005cceb2;
L_005cce66:; BB(0x005cce66);
    /* 005cce66: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 005cce69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cce6a: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 005cce6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cce6e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cce71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cce72: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cce75: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cce77: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cce7a: mov edx, dword ptr [eax + 0xec] */ r_edx = R32((u32)(r_eax+0xecu));
    /* 005cce80: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5cce82u); call_ind(t); }
    /* 005cce82: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005cce85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cce87: je 0x5cceaa */ if (fZ) goto L_005cceaa;
L_005cce89:; BB(0x005cce89);
    /* 005cce89: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cce8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cce8d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cce90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cce91: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cce94: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cce96: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cce99: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 005cce9f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ccea1u); call_ind(t); }
    /* 005ccea1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ccea4: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 005ccea8: jmp 0x5cceb2 */ goto L_005cceb2;
L_005cceaa:; BB(0x005cceaa);
    /* 005cceaa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ccead: call 0x5cd330 */ r_esp -= 4; W32(r_esp, 0x5cceb2u); f_005cd330();
L_005cceb2:; BB(0x005cceb2);
    /* 005cceb2: mov esp, ebp */ r_esp = r_ebp;
    /* 005cceb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cceb5: ret 4 */ FN_RET(0x005cce50); r_esp += 8; return;
}

void f_005ccec0(void) /* BaccaratBetArea::vfunc59 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ccec0);
    /* 005ccec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ccec1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ccec3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ccec6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ccec7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005cceca: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cced1: jmp 0x5ccedc */ goto L_005ccedc;
L_005cced3:; BB(0x005cced3);
    /* 005cced3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cced6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cced9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005ccedc:; BB(0x005ccedc);
    /* 005ccedc: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ccee0: jge 0x5ccfbc */ if ((fS==fO)) goto L_005ccfbc;
L_005ccee6:; BB(0x005ccee6);
    /* 005ccee6: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005cceed: jmp 0x5ccef8 */ goto L_005ccef8;
L_005cceef:; BB(0x005cceef);
    /* 005cceef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ccef2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ccef5: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005ccef8:; BB(0x005ccef8);
    /* 005ccef8: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ccefc: jge 0x5ccfb7 */ if ((fS==fO)) goto L_005ccfb7;
L_005ccf02:; BB(0x005ccf02);
    /* 005ccf02: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005ccf09: jmp 0x5ccf14 */ goto L_005ccf14;
L_005ccf0b:; BB(0x005ccf0b);
    /* 005ccf0b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ccf0e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ccf11: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005ccf14:; BB(0x005ccf14);
    /* 005ccf14: cmp dword ptr [ebp - 8], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ccf18: jge 0x5ccfb2 */ if ((fS==fO)) goto L_005ccfb2;
L_005ccf1e:; BB(0x005ccf1e);
    /* 005ccf1e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ccf21: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ccf27: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ccf2a: lea edx, [ecx + eax + 0x17c] */ r_edx = (u32)(r_ecx+r_eax+0x17cu);
    /* 005ccf31: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ccf34: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ccf37: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ccf39: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ccf3c: cmp dword ptr [edx + ecx*4], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ccf40: je 0x5ccfad */ if (fZ) goto L_005ccfad;
L_005ccf42:; BB(0x005ccf42);
    /* 005ccf42: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ccf45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ccf46: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ccf49: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ccf4f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ccf52: lea edx, [ecx + eax + 0x17c] */ r_edx = (u32)(r_ecx+r_eax+0x17cu);
    /* 005ccf59: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ccf5c: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ccf5f: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ccf61: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ccf64: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 005ccf67: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ccf6a: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ccf6d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ccf70: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ccf76: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ccf79: lea ecx, [esi + ecx + 0x17c] */ r_ecx = (u32)(r_esi+r_ecx+0x17cu);
    /* 005ccf80: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ccf82: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ccf85: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 005ccf88: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005ccf8a: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 005ccf90: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ccf92u); call_ind(t); }
    /* 005ccf92: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005ccf95: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ccf97: je 0x5ccfad */ if (fZ) goto L_005ccfad;
L_005ccf99:; BB(0x005ccf99);
    /* 005ccf99: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005ccf9c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ccf9f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005ccfa1: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005ccfa4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ccfa7: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005ccfa9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005ccfab: jmp 0x5ccfbe */ goto L_005ccfbe;
L_005ccfad:; BB(0x005ccfad);
    /* 005ccfad: jmp 0x5ccf0b */ goto L_005ccf0b;
L_005ccfb2:; BB(0x005ccfb2);
    /* 005ccfb2: jmp 0x5cceef */ goto L_005cceef;
L_005ccfb7:; BB(0x005ccfb7);
    /* 005ccfb7: jmp 0x5cced3 */ goto L_005cced3;
L_005ccfbc:; BB(0x005ccfbc);
    /* 005ccfbc: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005ccfbe:; BB(0x005ccfbe);
    /* 005ccfbe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ccfbf: mov esp, ebp */ r_esp = r_ebp;
    /* 005ccfc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ccfc2: ret 0xc */ FN_RET(0x005ccec0); r_esp += 16; return;
}

void f_005ccfd0(void) /* BaccaratBetArea::vfunc60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ccfd0);
    /* 005ccfd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ccfd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ccfd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ccfd5: push 0x6a8b6a */ { u32 v = 0x6a8b6au; r_esp -= 4; W32(r_esp, v); }
    /* 005ccfda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ccfe0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ccfe1: sub esp, 0x14c */ {  u32 a = r_esp; u32 b = 0x14cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ccfe7: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005ccfec: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ccfee: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005ccff1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ccff2: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005ccff5: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005ccffb: mov dword ptr [ebp - 0x154], ecx */ W32((u32)(r_ebp+0xfffffeacu), r_ecx);
    /* 005cd001: mov byte ptr [ebp - 0x139], 0 */ W8((u32)(r_ebp+0xfffffec7u), 0x0u);
    /* 005cd008: mov eax, dword ptr [ebp - 0x154] */ r_eax = R32((u32)(r_ebp+0xfffffeacu));
    /* 005cd00e: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 005cd014: mov dword ptr [ebp - 0x150], ecx */ W32((u32)(r_ebp+0xfffffeb0u), r_ecx);
    /* 005cd01a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cd01d: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005cd020: mov eax, dword ptr [ebp - 0x150] */ r_eax = R32((u32)(r_ebp+0xfffffeb0u));
    /* 005cd026: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 005cd02a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005cd02d: mov eax, dword ptr [ecx + edx*8] */ r_eax = R32((u32)(r_ecx+r_edx*8));
    /* 005cd030: mov ecx, dword ptr [ecx + edx*8 + 4] */ r_ecx = R32((u32)(r_ecx+r_edx*8+0x4u));
    /* 005cd034: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 005cd03a: mov dword ptr [ebp - 0x118], ecx */ W32((u32)(r_ebp+0xfffffee8u), r_ecx);
    /* 005cd040: mov edx, dword ptr [ebp - 0x154] */ r_edx = R32((u32)(r_ebp+0xfffffeacu));
    /* 005cd046: cmp dword ptr [edx + 0xadc], 0 */ {  u32 a = R32((u32)(r_edx+0xadcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd04d: je 0x5cd070 */ if (fZ) goto L_005cd070;
L_005cd04f:; BB(0x005cd04f);
    /* 005cd04f: mov eax, dword ptr [ebp - 0x154] */ r_eax = R32((u32)(r_ebp+0xfffffeacu));
    /* 005cd055: mov ecx, dword ptr [eax + 0xadc] */ r_ecx = R32((u32)(r_eax+0xadcu));
    /* 005cd05b: mov edx, dword ptr [ebp - 0x154] */ r_edx = R32((u32)(r_ebp+0xfffffeacu));
    /* 005cd061: mov eax, dword ptr [edx + 0xadc] */ r_eax = R32((u32)(r_edx+0xadcu));
    /* 005cd067: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cd069: mov ecx, eax */ r_ecx = r_eax;
    /* 005cd06b: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005cd06e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cd070u); call_ind(t); }
L_005cd070:; BB(0x005cd070);
    /* 005cd070: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005cd076: call 0x5de860 */ r_esp -= 4; W32(r_esp, 0x5cd07bu); f_005de860();
    /* 005cd07b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005cd07e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd080: je 0x5cd094 */ if (fZ) goto L_005cd094;
L_005cd082:; BB(0x005cd082);
    /* 005cd082: cmp dword ptr [ebp - 0x11c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffee4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd089: jne 0x5cd099 */ if (!fZ) goto L_005cd099;
L_005cd08b:; BB(0x005cd08b);
    /* 005cd08b: cmp dword ptr [ebp - 0x118], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffee8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd092: jne 0x5cd099 */ if (!fZ) goto L_005cd099;
L_005cd094:; BB(0x005cd094);
    /* 005cd094: jmp 0x5cd314 */ goto L_005cd314;
L_005cd099:; BB(0x005cd099);
    /* 005cd099: mov edx, dword ptr [ebp - 0x154] */ r_edx = R32((u32)(r_ebp+0xfffffeacu));
    /* 005cd09f: cmp dword ptr [edx + 0xadc], 0 */ {  u32 a = R32((u32)(r_edx+0xadcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd0a6: jne 0x5cd15a */ if (!fZ) goto L_005cd15a;
L_005cd0ac:; BB(0x005cd0ac);
    /* 005cd0ac: push 0x1d4 */ { u32 v = 0x1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd0b1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5cd0b6u); f_00686d82();
    /* 005cd0b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cd0b9: mov dword ptr [ebp - 0x144], eax */ W32((u32)(r_ebp+0xfffffebcu), r_eax);
    /* 005cd0bf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cd0c6: cmp dword ptr [ebp - 0x144], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffebcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd0cd: je 0x5cd0e2 */ if (fZ) goto L_005cd0e2;
L_005cd0cf:; BB(0x005cd0cf);
    /* 005cd0cf: mov ecx, dword ptr [ebp - 0x144] */ r_ecx = R32((u32)(r_ebp+0xfffffebcu));
    /* 005cd0d5: call 0x5cd360 */ r_esp -= 4; W32(r_esp, 0x5cd0dau); f_005cd360();
    /* 005cd0da: mov dword ptr [ebp - 0x158], eax */ W32((u32)(r_ebp+0xfffffea8u), r_eax);
    /* 005cd0e0: jmp 0x5cd0ec */ goto L_005cd0ec;
L_005cd0e2:; BB(0x005cd0e2);
    /* 005cd0e2: mov dword ptr [ebp - 0x158], 0 */ W32((u32)(r_ebp+0xfffffea8u), 0x0u);
L_005cd0ec:; BB(0x005cd0ec);
    /* 005cd0ec: mov eax, dword ptr [ebp - 0x158] */ r_eax = R32((u32)(r_ebp+0xfffffea8u));
    /* 005cd0f2: mov dword ptr [ebp - 0x140], eax */ W32((u32)(r_ebp+0xfffffec0u), r_eax);
    /* 005cd0f8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cd0ff: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 005cd105: mov edx, dword ptr [ebp - 0x140] */ r_edx = R32((u32)(r_ebp+0xfffffec0u));
    /* 005cd10b: mov dword ptr [ecx + 0xadc], edx */ W32((u32)(r_ecx+0xadcu), r_edx);
    /* 005cd111: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cd113: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd115: push 0xbb8 */ { u32 v = 0xbb8u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd11a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd11c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd11e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005cd120: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd122: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd124: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd129: mov eax, dword ptr [ebp - 0x154] */ r_eax = R32((u32)(r_ebp+0xfffffeacu));
    /* 005cd12f: mov ecx, dword ptr [eax + 0xadc] */ r_ecx = R32((u32)(r_eax+0xadcu));
    /* 005cd135: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x5cd13au); f_005ec8f0();
    /* 005cd13a: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005cd13f: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cd144: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cd149: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 005cd14f: mov ecx, dword ptr [ecx + 0xadc] */ r_ecx = R32((u32)(r_ecx+0xadcu));
    /* 005cd155: call 0x5ee8c0 */ r_esp -= 4; W32(r_esp, 0x5cd15au); f_005ee8c0();
L_005cd15a:; BB(0x005cd15a);
    /* 005cd15a: cmp dword ptr [0x7947e4], 0 */ {  u32 a = R32((u32)(0x7947e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd161: je 0x5cd1bb */ if (fZ) goto L_005cd1bb;
L_005cd163:; BB(0x005cd163);
    /* 005cd163: mov edx, dword ptr [ebp - 0x154] */ r_edx = R32((u32)(r_ebp+0xfffffeacu));
    /* 005cd169: add edx, 0x17c */ {  u32 a = r_edx; u32 b = 0x17cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cd16f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd170: mov eax, dword ptr [ebp - 0x118] */ r_eax = R32((u32)(r_ebp+0xfffffee8u));
    /* 005cd176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd177: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005cd17d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd17e: mov edx, dword ptr [ebp - 0x154] */ r_edx = R32((u32)(r_ebp+0xfffffeacu));
    /* 005cd184: mov eax, dword ptr [edx + 0xadc] */ r_eax = R32((u32)(r_edx+0xadcu));
    /* 005cd18a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd18b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005cd18e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd18f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cd192: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd193: mov eax, dword ptr [ebp - 0x154] */ r_eax = R32((u32)(r_ebp+0xfffffeacu));
    /* 005cd199: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd19a: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cd1a0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cd1a2: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cd1a8: mov eax, dword ptr [edx + 0x284] */ r_eax = R32((u32)(r_edx+0x284u));
    /* 005cd1ae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cd1b0u); call_ind(t); }
    /* 005cd1b0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005cd1b3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd1b5: jne 0x5cd27b */ if (!fZ) goto L_005cd27b;
L_005cd1bb:; BB(0x005cd1bb);
    /* 005cd1bb: cmp dword ptr [ebp - 0x11c], 0xf4240 */ {  u32 a = R32((u32)(r_ebp+0xfffffee4u)); u32 b = 0xf4240u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cd1c5: jl 0x5cd1dc */ if ((fS!=fO)) goto L_005cd1dc;
L_005cd1c7:; BB(0x005cd1c7);
    /* 005cd1c7: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd1c9: mov edx, dword ptr [ebp - 0x154] */ r_edx = R32((u32)(r_ebp+0xfffffeacu));
    /* 005cd1cf: mov ecx, dword ptr [edx + 0xadc] */ r_ecx = R32((u32)(r_edx+0xadcu));
    /* 005cd1d5: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x5cd1dau); f_005ecc60();
    /* 005cd1da: jmp 0x5cd1ef */ goto L_005cd1ef;
L_005cd1dc:; BB(0x005cd1dc);
    /* 005cd1dc: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd1de: mov eax, dword ptr [ebp - 0x154] */ r_eax = R32((u32)(r_ebp+0xfffffeacu));
    /* 005cd1e4: mov ecx, dword ptr [eax + 0xadc] */ r_ecx = R32((u32)(r_eax+0xadcu));
    /* 005cd1ea: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x5cd1efu); f_005ecc60();
L_005cd1ef:; BB(0x005cd1ef);
    /* 005cd1ef: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 005cd1f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd1f6: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005cd1fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd1fd: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5cd202u); f_0064c8a0();
    /* 005cd202: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cd205: mov dword ptr [ebp - 0x14c], eax */ W32((u32)(r_ebp+0xfffffeb4u), r_eax);
    /* 005cd20b: mov dword ptr [ebp - 0x148], edx */ W32((u32)(r_ebp+0xfffffeb8u), r_edx);
    /* 005cd211: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd213: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd215: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd217: lea eax, [ebp - 0x138] */ r_eax = (u32)(r_ebp+0xfffffec8u);
    /* 005cd21d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd21e: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005cd224: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd225: mov edx, dword ptr [ebp - 0x14c] */ r_edx = R32((u32)(r_ebp+0xfffffeb4u));
    /* 005cd22b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd22c: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5cd231u); f_0064c8d0();
    /* 005cd231: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cd234: lea eax, [ebp - 0x138] */ r_eax = (u32)(r_ebp+0xfffffec8u);
    /* 005cd23a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd23b: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd240: lea ecx, [ebp - 0x114] */ r_ecx = (u32)(r_ebp+0xfffffeecu);
    /* 005cd246: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd247: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5cd24du); call_ind(t); }
    /* 005cd24d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cd250: lea edx, [ebp - 0x114] */ r_edx = (u32)(r_ebp+0xfffffeecu);
    /* 005cd256: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd257: mov eax, dword ptr [ebp - 0x154] */ r_eax = R32((u32)(r_ebp+0xfffffeacu));
    /* 005cd25d: mov ecx, dword ptr [eax + 0xadc] */ r_ecx = R32((u32)(r_eax+0xadcu));
    /* 005cd263: mov edx, dword ptr [ebp - 0x154] */ r_edx = R32((u32)(r_ebp+0xfffffeacu));
    /* 005cd269: mov eax, dword ptr [edx + 0xadc] */ r_eax = R32((u32)(r_edx+0xadcu));
    /* 005cd26f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cd271: mov ecx, eax */ r_ecx = r_eax;
    /* 005cd273: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005cd279: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cd27bu); call_ind(t); }
L_005cd27b:; BB(0x005cd27b);
    /* 005cd27b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005cd27e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd27f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cd282: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd283: mov eax, dword ptr [ebp - 0x154] */ r_eax = R32((u32)(r_ebp+0xfffffeacu));
    /* 005cd289: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cd28b: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 005cd291: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 005cd297: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cd299u); call_ind(t); }
    /* 005cd299: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd29a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005cd29d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd29e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cd2a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd2a2: mov eax, dword ptr [ebp - 0x154] */ r_eax = R32((u32)(r_ebp+0xfffffeacu));
    /* 005cd2a8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cd2aa: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 005cd2b0: mov eax, dword ptr [edx + 0xe4] */ r_eax = R32((u32)(r_edx+0xe4u));
    /* 005cd2b6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cd2b8u); call_ind(t); }
    /* 005cd2b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd2b9: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 005cd2bf: mov edx, dword ptr [ecx + 0xadc] */ r_edx = R32((u32)(r_ecx+0xadcu));
    /* 005cd2c5: mov eax, dword ptr [ebp - 0x154] */ r_eax = R32((u32)(r_ebp+0xfffffeacu));
    /* 005cd2cb: mov ecx, dword ptr [eax + 0xadc] */ r_ecx = R32((u32)(r_eax+0xadcu));
    /* 005cd2d1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005cd2d3: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005cd2d6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cd2d8u); call_ind(t); }
    /* 005cd2d8: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 005cd2de: mov edx, dword ptr [ecx + 0xadc] */ r_edx = R32((u32)(r_ecx+0xadcu));
    /* 005cd2e4: mov eax, dword ptr [ebp - 0x154] */ r_eax = R32((u32)(r_ebp+0xfffffeacu));
    /* 005cd2ea: mov ecx, dword ptr [eax + 0xadc] */ r_ecx = R32((u32)(r_eax+0xadcu));
    /* 005cd2f0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005cd2f2: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005cd2f5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cd2f7u); call_ind(t); }
    /* 005cd2f7: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 005cd2fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd2fe: mov edx, dword ptr [0x7947e4] */ r_edx = R32((u32)(0x7947e4u));
    /* 005cd304: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cd306: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cd30c: mov edx, dword ptr [eax + 0x280] */ r_edx = R32((u32)(r_eax+0x280u));
    /* 005cd312: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5cd314u); call_ind(t); }
L_005cd314:; BB(0x005cd314);
    /* 005cd314: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd317: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cd31e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cd31f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cd322: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005cd324: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5cd329u); f_00686d72();
    /* 005cd329: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd32b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd32c: ret 8 */ FN_RET(0x005ccfd0); r_esp += 12; return;
}

