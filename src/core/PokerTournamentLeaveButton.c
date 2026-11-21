#include "protos.h"

void f_00466f00(void) /* PokerTournamentLeaveButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00466f00);
    /* 00466f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00466f01: mov ebp, esp */ r_ebp = r_esp;
    /* 00466f03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00466f04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00466f07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00466f0a: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x466f0fu); f_00601a80();
    /* 00466f0f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00466f12: mov dword ptr [eax], 0x6bae0c */ W32((u32)(r_eax), 0x6bae0cu);
    /* 00466f18: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00466f1b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00466f1e: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 00466f24: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00466f27: mov esp, ebp */ r_esp = r_ebp;
    /* 00466f29: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00466f2a: ret 4 */ FN_RET(0x00466f00); r_esp += 8; return;
}

void f_00466f30(void) /* PokerTournamentLeaveButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00466f30);
    /* 00466f30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00466f31: mov ebp, esp */ r_ebp = r_esp;
    /* 00466f33: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00466f36: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00466f39: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00466f3b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00466f3e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00466f40: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00466f43: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 00466f49: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466f4bu); call_ind(t); }
    /* 00466f4b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00466f4e: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 00466f54: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x466f59u); f_005f87d0();
    /* 00466f59: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00466f5f: mov byte ptr [edx + 0x4f04], 0 */ W8((u32)(r_edx+0x4f04u), 0x0u);
    /* 00466f66: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 00466f6b: mov ecx, dword ptr [eax + 0xfc] */ r_ecx = R32((u32)(r_eax+0xfcu));
    /* 00466f71: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00466f74: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00466f76: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00466f7a: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00466f7d: mov byte ptr [ebp - 5], dl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_edx);
    /* 00466f80: movzx eax, byte ptr [ebp - 5] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 00466f84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00466f86: je 0x466f97 */ if (fZ) goto L_00466f97;
L_00466f88:; BB(0x00466f88);
    /* 00466f88: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00466f8a: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00466f90: call 0x4fcb30 */ r_esp -= 4; W32(r_esp, 0x466f95u); f_004fcb30();
    /* 00466f95: jmp 0x466fa4 */ goto L_00466fa4;
L_00466f97:; BB(0x00466f97);
    /* 00466f97: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00466f99: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00466f9f: call 0x47fb90 */ r_esp -= 4; W32(r_esp, 0x466fa4u); f_0047fb90();
L_00466fa4:; BB(0x00466fa4);
    /* 00466fa4: mov esp, ebp */ r_esp = r_ebp;
    /* 00466fa6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00466fa7: ret  */ FN_RET(0x00466f30); r_esp += 4; return;
}

void f_00601c50(void) /* PokerTournamentLeaveButton::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00601c50);
    /* 00601c50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601c51: mov ebp, esp */ r_ebp = r_esp;
    /* 00601c53: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00601c56: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00601c59: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601c5c: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x601c61u); f_006026d0();
    /* 00601c61: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00601c64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601c66: je 0x601c84 */ if (fZ) goto L_00601c84;
L_00601c68:; BB(0x00601c68);
    /* 00601c68: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00601c6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00601c6c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601c6f: call 0x5f4b60 */ r_esp -= 4; W32(r_esp, 0x601c74u); f_005f4b60();
    /* 00601c74: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00601c77: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601c79: je 0x601c84 */ if (fZ) goto L_00601c84;
L_00601c7b:; BB(0x00601c7b);
    /* 00601c7b: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00601c82: jmp 0x601c8b */ goto L_00601c8b;
L_00601c84:; BB(0x00601c84);
    /* 00601c84: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00601c8b:; BB(0x00601c8b);
    /* 00601c8b: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00601c8e: mov esp, ebp */ r_esp = r_ebp;
    /* 00601c90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601c91: ret 4 */ FN_RET(0x00601c50); r_esp += 8; return;
}

void f_00601ca0(void) /* PokerTournamentLeaveButton::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00601ca0);
    /* 00601ca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601ca1: mov ebp, esp */ r_ebp = r_esp;
    /* 00601ca3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00601ca5: push 0x6aa8d1 */ { u32 v = 0x6aa8d1u; r_esp -= 4; W32(r_esp, v); }
    /* 00601caa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00601cb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601cb1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00601cb4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00601cb9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00601cbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601cbc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00601cbf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00601cc5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00601cc8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00601ccb: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00601cce: and ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00601cd1: je 0x601ce7 */ if (fZ) goto L_00601ce7;
L_00601cd3:; BB(0x00601cd3);
    /* 00601cd3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00601cd6: call 0x602f20 */ r_esp -= 4; W32(r_esp, 0x601cdbu); f_00602f20();
    /* 00601cdb: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00601cde: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601ce0: jne 0x601ce7 */ if (!fZ) goto L_00601ce7;
L_00601ce2:; BB(0x00601ce2);
    /* 00601ce2: jmp 0x601d84 */ goto L_00601d84;
L_00601ce7:; BB(0x00601ce7);
    /* 00601ce7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00601cea: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
    /* 00601cee: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00601cf1: mov byte ptr [ecx + 8], 1 */ W8((u32)(r_ecx+0x8u), 0x1u);
    /* 00601cf5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00601cf8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00601cf9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00601cfc: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00601cff: call 0x5f89f0 */ r_esp -= 4; W32(r_esp, 0x601d04u); f_005f89f0();
    /* 00601d04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00601d06: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00601d09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00601d0a: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 00601d10: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00601d12: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00601d18: mov edx, dword ptr [eax + 0x7c] */ r_edx = R32((u32)(r_eax+0x7cu));
    /* 00601d1b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x601d1du); call_ind(t); }
    /* 00601d1d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00601d1f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00601d22: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601d24: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00601d27: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 00601d2d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x601d2fu); call_ind(t); }
    /* 00601d2f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00601d32: cmp dword ptr [ecx + 0x1ac], -1 */ {  u32 a = R32((u32)(r_ecx+0x1acu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601d39: je 0x601d84 */ if (fZ) goto L_00601d84;
L_00601d3b:; BB(0x00601d3b);
    /* 00601d3b: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00601d3d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x601d42u); f_00686d82();
    /* 00601d42: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00601d45: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00601d48: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00601d4f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601d53: je 0x601d64 */ if (fZ) goto L_00601d64;
L_00601d55:; BB(0x00601d55);
    /* 00601d55: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601d57: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00601d5a: call 0x603300 */ r_esp -= 4; W32(r_esp, 0x601d5fu); f_00603300();
    /* 00601d5f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00601d62: jmp 0x601d6b */ goto L_00601d6b;
L_00601d64:; BB(0x00601d64);
    /* 00601d64: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00601d6b:; BB(0x00601d6b);
    /* 00601d6b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00601d6e: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00601d71: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00601d78: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00601d7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601d7c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00601d7f: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x601d84u); f_005f5df0();
L_00601d84:; BB(0x00601d84);
    /* 00601d84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00601d87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00601d8e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00601d8f: mov esp, ebp */ r_esp = r_ebp;
    /* 00601d91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601d92: ret 4 */ FN_RET(0x00601ca0); r_esp += 8; return;
}

void f_00601da0(void) /* PokerTournamentLeaveButton::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00601da0);
    /* 00601da0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601da1: mov ebp, esp */ r_ebp = r_esp;
    /* 00601da3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00601da5: push 0x6aa8f7 */ { u32 v = 0x6aa8f7u; r_esp -= 4; W32(r_esp, v); }
    /* 00601daa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00601db0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601db1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00601db4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00601db9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00601dbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601dbc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00601dbf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00601dc5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00601dc8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00601dcb: movzx ecx, byte ptr [eax + 0x1b5] */ r_ecx = (u32)R8((u32)(r_eax+0x1b5u));
    /* 00601dd2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601dd4: jne 0x601ddb */ if (!fZ) goto L_00601ddb;
L_00601dd6:; BB(0x00601dd6);
    /* 00601dd6: jmp 0x601e78 */ goto L_00601e78;
L_00601ddb:; BB(0x00601ddb);
    /* 00601ddb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00601dde: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
    /* 00601de2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00601de5: mov byte ptr [eax + 9], 1 */ W8((u32)(r_eax+0x9u), 0x1u);
    /* 00601de9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00601dec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00601ded: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00601df0: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00601df3: call 0x5f89f0 */ r_esp -= 4; W32(r_esp, 0x601df8u); f_005f89f0();
    /* 00601df8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00601dfa: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00601dfd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601dfe: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00601e04: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00601e06: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00601e0c: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 00601e0f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x601e11u); call_ind(t); }
    /* 00601e11: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00601e13: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00601e16: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00601e18: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00601e1b: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 00601e21: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x601e23u); call_ind(t); }
    /* 00601e23: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00601e26: cmp dword ptr [ecx + 0x1ac], -1 */ {  u32 a = R32((u32)(r_ecx+0x1acu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601e2d: je 0x601e78 */ if (fZ) goto L_00601e78;
L_00601e2f:; BB(0x00601e2f);
    /* 00601e2f: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00601e31: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x601e36u); f_00686d82();
    /* 00601e36: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00601e39: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00601e3c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00601e43: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601e47: je 0x601e58 */ if (fZ) goto L_00601e58;
L_00601e49:; BB(0x00601e49);
    /* 00601e49: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00601e4b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00601e4e: call 0x603300 */ r_esp -= 4; W32(r_esp, 0x601e53u); f_00603300();
    /* 00601e53: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00601e56: jmp 0x601e5f */ goto L_00601e5f;
L_00601e58:; BB(0x00601e58);
    /* 00601e58: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00601e5f:; BB(0x00601e5f);
    /* 00601e5f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00601e62: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00601e65: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00601e6c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00601e6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601e70: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00601e73: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x601e78u); f_005f5df0();
L_00601e78:; BB(0x00601e78);
    /* 00601e78: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00601e7b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00601e82: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00601e83: mov esp, ebp */ r_esp = r_ebp;
    /* 00601e85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601e86: ret 4 */ FN_RET(0x00601da0); r_esp += 8; return;
}

void f_00601e90(void) /* PokerTournamentLeaveButton::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00601e90);
    /* 00601e90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601e91: mov ebp, esp */ r_ebp = r_esp;
    /* 00601e93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00601e94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00601e97: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601e99: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601e9c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00601e9f: call 0x5f89f0 */ r_esp -= 4; W32(r_esp, 0x601ea4u); f_005f89f0();
    /* 00601ea4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601ea6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601ea9: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x601eaeu); f_005f5df0();
    /* 00601eae: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00601eb1: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 00601eb5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601eb8: mov byte ptr [edx + 8], 0 */ W8((u32)(r_edx+0x8u), 0x0u);
    /* 00601ebc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601ebf: mov byte ptr [eax + 9], 0 */ W8((u32)(r_eax+0x9u), 0x0u);
    /* 00601ec3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00601ec6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00601ec7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601eca: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00601ecc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601ecf: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 00601ed5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x601ed7u); call_ind(t); }
    /* 00601ed7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00601eda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601edc: je 0x601f1b */ if (fZ) goto L_00601f1b;
L_00601ede:; BB(0x00601ede);
    /* 00601ede: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00601ee0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601ee3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00601ee5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601ee8: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 00601eee: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x601ef0u); call_ind(t); }
    /* 00601ef0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00601ef2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601ef5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00601ef6: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 00601efc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00601efe: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00601f04: mov edx, dword ptr [eax + 0x7c] */ r_edx = R32((u32)(r_eax+0x7cu));
    /* 00601f07: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x601f09u); call_ind(t); }
    /* 00601f09: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601f0c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601f0e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601f11: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00601f17: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x601f19u); call_ind(t); }
    /* 00601f19: jmp 0x601f46 */ goto L_00601f46;
L_00601f1b:; BB(0x00601f1b);
    /* 00601f1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601f1d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601f20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00601f21: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 00601f27: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00601f29: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00601f2f: mov edx, dword ptr [eax + 0x7c] */ r_edx = R32((u32)(r_eax+0x7cu));
    /* 00601f32: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x601f34u); call_ind(t); }
    /* 00601f34: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601f36: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601f39: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601f3b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601f3e: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 00601f44: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x601f46u); call_ind(t); }
L_00601f46:; BB(0x00601f46);
    /* 00601f46: mov esp, ebp */ r_esp = r_ebp;
    /* 00601f48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601f49: ret 4 */ FN_RET(0x00601e90); r_esp += 8; return;
}

void f_00601f50(void) /* PokerTournamentLeaveButton::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00601f50);
    /* 00601f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601f51: mov ebp, esp */ r_ebp = r_esp;
    /* 00601f53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00601f54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00601f57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601f5a: movzx ecx, byte ptr [eax + 0x1b5] */ r_ecx = (u32)R8((u32)(r_eax+0x1b5u));
    /* 00601f61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601f63: jne 0x601f6a */ if (!fZ) goto L_00601f6a;
L_00601f65:; BB(0x00601f65);
    /* 00601f65: jmp 0x602018 */ goto L_00602018;
L_00601f6a:; BB(0x00601f6a);
    /* 00601f6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601f6c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601f6f: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00601f72: call 0x5f89f0 */ r_esp -= 4; W32(r_esp, 0x601f77u); f_005f89f0();
    /* 00601f77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601f79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601f7c: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x601f81u); f_005f5df0();
    /* 00601f81: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00601f84: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
    /* 00601f88: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601f8b: mov byte ptr [ecx + 8], 0 */ W8((u32)(r_ecx+0x8u), 0x0u);
    /* 00601f8f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601f92: mov byte ptr [edx + 9], 0 */ W8((u32)(r_edx+0x9u), 0x0u);
    /* 00601f96: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00601f99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601f9a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601f9d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00601f9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601fa2: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00601fa8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x601faau); call_ind(t); }
    /* 00601faa: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00601fad: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601faf: je 0x601fed */ if (fZ) goto L_00601fed;
L_00601fb1:; BB(0x00601fb1);
    /* 00601fb1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00601fb3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601fb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00601fb7: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 00601fbc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601fbe: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00601fc4: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 00601fc7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x601fc9u); call_ind(t); }
    /* 00601fc9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00601fcb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601fce: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00601fd0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601fd3: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 00601fd9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x601fdbu); call_ind(t); }
    /* 00601fdb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601fde: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00601fe0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601fe3: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00601fe9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x601febu); call_ind(t); }
    /* 00601feb: jmp 0x602018 */ goto L_00602018;
L_00601fed:; BB(0x00601fed);
    /* 00601fed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00601fef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601ff2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00601ff3: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 00601ff9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00601ffb: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00602001: mov edx, dword ptr [eax + 0x7c] */ r_edx = R32((u32)(r_eax+0x7cu));
    /* 00602004: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x602006u); call_ind(t); }
    /* 00602006: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00602008: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060200b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060200d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602010: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 00602016: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x602018u); call_ind(t); }
L_00602018:; BB(0x00602018);
    /* 00602018: mov esp, ebp */ r_esp = r_ebp;
    /* 0060201a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060201b: ret 4 */ FN_RET(0x00601f50); r_esp += 8; return;
}

void f_00602020(void) /* PokerTournamentLeaveButton::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602020);
    /* 00602020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602021: mov ebp, esp */ r_ebp = r_esp;
    /* 00602023: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602024: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602027: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060202a: movzx ecx, byte ptr [eax + 8] */ r_ecx = (u32)R8((u32)(r_eax+0x8u));
    /* 0060202e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602030: jne 0x602053 */ if (!fZ) goto L_00602053;
L_00602032:; BB(0x00602032);
    /* 00602032: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602035: movzx eax, byte ptr [edx + 0x1b5] */ r_eax = (u32)R8((u32)(r_edx+0x1b5u));
    /* 0060203c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060203e: je 0x6020dc */ if (fZ) goto L_006020dc;
L_00602044:; BB(0x00602044);
    /* 00602044: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602047: movzx edx, byte ptr [ecx + 9] */ r_edx = (u32)R8((u32)(r_ecx+0x9u));
    /* 0060204b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060204d: je 0x6020dc */ if (fZ) goto L_006020dc;
L_00602053:; BB(0x00602053);
    /* 00602053: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00602056: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
    /* 0060205a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060205d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060205e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602061: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00602063: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602066: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 0060206c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60206eu); call_ind(t); }
    /* 0060206e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00602071: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602073: jne 0x6020ac */ if (!fZ) goto L_006020ac;
L_00602075:; BB(0x00602075);
    /* 00602075: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00602077: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060207a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060207b: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 00602081: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00602083: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00602089: mov edx, dword ptr [eax + 0x7c] */ r_edx = R32((u32)(r_eax+0x7cu));
    /* 0060208c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60208eu); call_ind(t); }
    /* 0060208e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00602090: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602093: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602095: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602098: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 0060209e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6020a0u); call_ind(t); }
    /* 006020a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006020a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006020a5: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x6020aau); f_005f5df0();
    /* 006020aa: jmp 0x6020d7 */ goto L_006020d7;
L_006020ac:; BB(0x006020ac);
    /* 006020ac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006020ae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006020b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006020b2: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 006020b8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006020ba: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 006020c0: mov edx, dword ptr [eax + 0x7c] */ r_edx = R32((u32)(r_eax+0x7cu));
    /* 006020c3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6020c5u); call_ind(t); }
    /* 006020c5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006020c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006020ca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006020cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006020cf: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 006020d5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6020d7u); call_ind(t); }
L_006020d7:; BB(0x006020d7);
    /* 006020d7: jmp 0x60218d */ goto L_0060218d;
L_006020dc:; BB(0x006020dc);
    /* 006020dc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006020df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006020e0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006020e3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006020e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006020e8: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 006020ee: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6020f0u); call_ind(t); }
    /* 006020f0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006020f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006020f5: je 0x602163 */ if (fZ) goto L_00602163;
L_006020f7:; BB(0x006020f7);
    /* 006020f7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006020fa: movzx edx, byte ptr [ecx + 4] */ r_edx = (u32)R8((u32)(r_ecx+0x4u));
    /* 006020fe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602100: je 0x60212f */ if (fZ) goto L_0060212f;
L_00602102:; BB(0x00602102);
    /* 00602102: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00602104: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602107: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602108: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 0060210e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00602110: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00602116: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 00602119: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60211bu); call_ind(t); }
    /* 0060211b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060211d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602120: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00602122: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602125: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 0060212b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60212du); call_ind(t); }
    /* 0060212d: jmp 0x602161 */ goto L_00602161;
L_0060212f:; BB(0x0060212f);
    /* 0060212f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00602131: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602134: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602135: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 0060213b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060213d: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00602143: mov edx, dword ptr [eax + 0x7c] */ r_edx = R32((u32)(r_eax+0x7cu));
    /* 00602146: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x602148u); call_ind(t); }
    /* 00602148: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0060214a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060214d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060214f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602152: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 00602158: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60215au); call_ind(t); }
    /* 0060215a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060215d: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_00602161:; BB(0x00602161);
    /* 00602161: jmp 0x60218d */ goto L_0060218d;
L_00602163:; BB(0x00602163);
    /* 00602163: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00602165: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602168: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00602169: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 0060216e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602170: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00602176: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 00602179: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60217bu); call_ind(t); }
    /* 0060217b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060217d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602180: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00602182: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602185: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 0060218b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60218du); call_ind(t); }
L_0060218d:; BB(0x0060218d);
    /* 0060218d: mov esp, ebp */ r_esp = r_ebp;
    /* 0060218f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602190: ret 4 */ FN_RET(0x00602020); r_esp += 8; return;
}

void f_006021a0(void) /* PokerTournamentLeaveButton::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006021a0);
    /* 006021a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006021a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006021a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006021a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006021a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006021aa: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 006021ae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006021b0: jne 0x602213 */ if (!fZ) goto L_00602213;
L_006021b2:; BB(0x006021b2);
    /* 006021b2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006021b5: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 006021b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006021ba: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x6021c0u); call_ind(t); }
    /* 006021c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006021c3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006021c6: movsx edx, byte ptr [ecx + 0x1a9] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1a9u));
    /* 006021cd: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006021cf: je 0x60220f */ if (fZ) goto L_0060220f;
L_006021d1:; BB(0x006021d1);
    /* 006021d1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006021d4: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 006021d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006021d9: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x6021dfu); call_ind(t); }
    /* 006021df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006021e2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006021e5: movsx ecx, byte ptr [edx + 0x1aa] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x1aau));
    /* 006021ec: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006021ee: je 0x60220f */ if (fZ) goto L_0060220f;
L_006021f0:; BB(0x006021f0);
    /* 006021f0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006021f3: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 006021f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006021f8: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x6021feu); call_ind(t); }
    /* 006021fe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00602201: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602204: movsx edx, byte ptr [ecx + 0x1ab] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1abu));
    /* 0060220b: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060220d: jne 0x602213 */ if (!fZ) goto L_00602213;
L_0060220f:; BB(0x0060220f);
    /* 0060220f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00602211: jmp 0x602215 */ goto L_00602215;
L_00602213:; BB(0x00602213);
    /* 00602213: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00602215:; BB(0x00602215);
    /* 00602215: mov esp, ebp */ r_esp = r_ebp;
    /* 00602217: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602218: ret 4 */ FN_RET(0x006021a0); r_esp += 8; return;
}

void f_00602220(void) /* PokerTournamentLeaveButton::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602220);
    /* 00602220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602221: mov ebp, esp */ r_ebp = r_esp;
    /* 00602223: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00602226: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00602229: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060222c: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 00602230: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602231: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x602237u); call_ind(t); }
    /* 00602237: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060223a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060223d: movsx ecx, byte ptr [edx + 0x1a9] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x1a9u));
    /* 00602244: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602246: je 0x602270 */ if (fZ) goto L_00602270;
L_00602248:; BB(0x00602248);
    /* 00602248: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060224b: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0060224f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602250: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x602256u); call_ind(t); }
    /* 00602256: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00602259: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060225c: movsx edx, byte ptr [ecx + 0x1aa] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1aau));
    /* 00602263: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602265: je 0x602270 */ if (fZ) goto L_00602270;
L_00602267:; BB(0x00602267);
    /* 00602267: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0060226e: jmp 0x602277 */ goto L_00602277;
L_00602270:; BB(0x00602270);
    /* 00602270: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
L_00602277:; BB(0x00602277);
    /* 00602277: mov al, byte ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
    /* 0060227a: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 0060227d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060227f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602282: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602283: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 00602289: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060228b: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00602291: mov edx, dword ptr [eax + 0x7c] */ r_edx = R32((u32)(r_eax+0x7cu));
    /* 00602294: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x602296u); call_ind(t); }
    /* 00602296: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00602298: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060229b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060229d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006022a0: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 006022a6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6022a8u); call_ind(t); }
    /* 006022a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006022ab: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006022ae: mov eax, dword ptr [edx + 0x1a8] */ r_eax = R32((u32)(r_edx+0x1a8u));
    /* 006022b4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006022b7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006022ba: call 0x613f80 */ r_esp -= 4; W32(r_esp, 0x6022bfu); f_00613f80();
    /* 006022bf: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 006022c1: call 0x5e9f00 */ r_esp -= 4; W32(r_esp, 0x6022c6u); f_005e9f00();
    /* 006022c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006022c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006022cb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006022ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006022cf: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 006022d5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006022d7: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 006022dd: mov edx, dword ptr [eax + 0x7c] */ r_edx = R32((u32)(r_eax+0x7cu));
    /* 006022e0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6022e2u); call_ind(t); }
    /* 006022e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006022e4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006022e7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006022e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006022ec: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 006022f2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6022f4u); call_ind(t); }
    /* 006022f4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006022f7: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 006022fb: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 006022ff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602301: je 0x602315 */ if (fZ) goto L_00602315;
L_00602303:; BB(0x00602303);
    /* 00602303: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602306: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602308: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060230b: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00602311: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x602313u); call_ind(t); }
    /* 00602313: jmp 0x602325 */ goto L_00602325;
L_00602315:; BB(0x00602315);
    /* 00602315: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602318: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060231a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060231d: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00602323: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x602325u); call_ind(t); }
L_00602325:; BB(0x00602325);
    /* 00602325: mov esp, ebp */ r_esp = r_ebp;
    /* 00602327: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602328: ret 4 */ FN_RET(0x00602220); r_esp += 8; return;
}

void f_00602360(void) /* PokerTournamentLeaveButton::vfunc49 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602360);
    /* 00602360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602361: mov ebp, esp */ r_ebp = r_esp;
    /* 00602363: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602364: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602367: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060236a: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060236e: je 0x60238c */ if (fZ) goto L_0060238c;
L_00602370:; BB(0x00602370);
    /* 00602370: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602373: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x602378u); f_005f5400();
    /* 00602378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602379: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060237c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0060237f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602382: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00602385: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00602387: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0060238a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60238cu); call_ind(t); }
L_0060238c:; BB(0x0060238c);
    /* 0060238c: mov esp, ebp */ r_esp = r_ebp;
    /* 0060238e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060238f: ret  */ FN_RET(0x00602360); r_esp += 4; return;
}

void f_00602390(void) /* PokerTournamentLeaveButton::vfunc50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602390);
    /* 00602390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602391: mov ebp, esp */ r_ebp = r_esp;
    /* 00602393: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602394: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602397: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060239a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060239b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060239e: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x6023a3u); f_005eaf00();
    /* 006023a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006023a6: cmp dword ptr [ecx + 0x190], 0 */ {  u32 a = R32((u32)(r_ecx+0x190u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006023ad: je 0x6023bf */ if (fZ) goto L_006023bf;
L_006023af:; BB(0x006023af);
    /* 006023af: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006023b2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006023b4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006023b7: mov edx, dword ptr [eax + 0xe8] */ r_edx = R32((u32)(r_eax+0xe8u));
    /* 006023bd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6023bfu); call_ind(t); }
L_006023bf:; BB(0x006023bf);
    /* 006023bf: mov esp, ebp */ r_esp = r_ebp;
    /* 006023c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006023c2: ret 4 */ FN_RET(0x00602390); r_esp += 8; return;
}

void f_00602470(void) /* PokerTournamentLeaveButton::vfunc17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602470);
    /* 00602470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602471: mov ebp, esp */ r_ebp = r_esp;
    /* 00602473: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602474: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602477: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060247a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060247b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060247e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060247f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602482: call 0x5eb260 */ r_esp -= 4; W32(r_esp, 0x602487u); f_005eb260();
    /* 00602487: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060248a: cmp dword ptr [edx + 0x190], 0 */ {  u32 a = R32((u32)(r_edx+0x190u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602491: je 0x6024a3 */ if (fZ) goto L_006024a3;
L_00602493:; BB(0x00602493);
    /* 00602493: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602496: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602498: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060249b: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 006024a1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6024a3u); call_ind(t); }
L_006024a3:; BB(0x006024a3);
    /* 006024a3: mov esp, ebp */ r_esp = r_ebp;
    /* 006024a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006024a6: ret 8 */ FN_RET(0x00602470); r_esp += 12; return;
}

void f_006024b0(void) /* PokerTournamentLeaveButton::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006024b0);
    /* 006024b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006024b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006024b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006024b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006024b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006024ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006024bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006024be: call 0x5f5300 */ r_esp -= 4; W32(r_esp, 0x6024c3u); f_005f5300();
    /* 006024c3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006024c6: cmp dword ptr [ecx + 0x190], 0 */ {  u32 a = R32((u32)(r_ecx+0x190u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006024cd: je 0x6024f1 */ if (fZ) goto L_006024f1;
L_006024cf:; BB(0x006024cf);
    /* 006024cf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006024d2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006024d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006024d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006024d9: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 006024df: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006024e2: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 006024e8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006024ea: mov ecx, eax */ r_ecx = r_eax;
    /* 006024ec: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 006024ef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6024f1u); call_ind(t); }
L_006024f1:; BB(0x006024f1);
    /* 006024f1: mov esp, ebp */ r_esp = r_ebp;
    /* 006024f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006024f4: ret 4 */ FN_RET(0x006024b0); r_esp += 8; return;
}

void f_00602500(void) /* PokerTournamentLeaveButton::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602500);
    /* 00602500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602501: mov ebp, esp */ r_ebp = r_esp;
    /* 00602503: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602504: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602507: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060250a: call 0x5eb570 */ r_esp -= 4; W32(r_esp, 0x60250fu); f_005eb570();
    /* 0060250f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602512: cmp dword ptr [eax + 0x190], 0 */ {  u32 a = R32((u32)(r_eax+0x190u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602519: je 0x602544 */ if (fZ) goto L_00602544;
L_0060251b:; BB(0x0060251b);
    /* 0060251b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060251e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00602520: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602523: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 00602529: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60252bu); call_ind(t); }
    /* 0060252b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060252e: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 00602534: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602537: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 0060253d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0060253f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00602542: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x602544u); call_ind(t); }
L_00602544:; BB(0x00602544);
    /* 00602544: mov esp, ebp */ r_esp = r_ebp;
    /* 00602546: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602547: ret  */ FN_RET(0x00602500); r_esp += 4; return;
}

void f_00602550(void) /* PokerTournamentLeaveButton::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602550);
    /* 00602550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602551: mov ebp, esp */ r_ebp = r_esp;
    /* 00602553: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602554: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602557: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060255a: mov byte ptr [eax + 8], 0 */ W8((u32)(r_eax+0x8u), 0x0u);
    /* 0060255e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602561: mov byte ptr [ecx + 9], 0 */ W8((u32)(r_ecx+0x9u), 0x0u);
    /* 00602565: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00602567: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060256a: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x60256fu); f_005f5df0();
    /* 0060256f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602572: movzx eax, byte ptr [edx + 0x1a8] */ r_eax = (u32)R8((u32)(r_edx+0x1a8u));
    /* 00602579: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060257b: je 0x60258f */ if (fZ) goto L_0060258f;
L_0060257d:; BB(0x0060257d);
    /* 0060257d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060257f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602582: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00602584: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602587: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 0060258d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60258fu); call_ind(t); }
L_0060258f:; BB(0x0060258f);
    /* 0060258f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602592: call 0x5eb5a0 */ r_esp -= 4; W32(r_esp, 0x602597u); f_005eb5a0();
    /* 00602597: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060259a: cmp dword ptr [ecx + 0x190], 0 */ {  u32 a = R32((u32)(r_ecx+0x190u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006025a1: je 0x6025bc */ if (fZ) goto L_006025bc;
L_006025a3:; BB(0x006025a3);
    /* 006025a3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006025a6: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 006025ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006025af: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 006025b5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006025b7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 006025ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6025bcu); call_ind(t); }
L_006025bc:; BB(0x006025bc);
    /* 006025bc: mov esp, ebp */ r_esp = r_ebp;
    /* 006025be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006025bf: ret  */ FN_RET(0x00602550); r_esp += 4; return;
}

void f_006025c0(void) /* PokerTournamentLeaveButton::vfunc51 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006025c0);
    /* 006025c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006025c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006025c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006025c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006025c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006025ca: movzx ecx, byte ptr [eax + 0x1a8] */ r_ecx = (u32)R8((u32)(r_eax+0x1a8u));
    /* 006025d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006025d3: jne 0x6025e3 */ if (!fZ) goto L_006025e3;
L_006025d5:; BB(0x006025d5);
    /* 006025d5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006025d8: mov byte ptr [edx + 8], 0 */ W8((u32)(r_edx+0x8u), 0x0u);
    /* 006025dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006025df: mov byte ptr [eax + 9], 0 */ W8((u32)(r_eax+0x9u), 0x0u);
L_006025e3:; BB(0x006025e3);
    /* 006025e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006025e6: mov byte ptr [ecx + 0x1a8], 1 */ W8((u32)(r_ecx+0x1a8u), 0x1u);
    /* 006025ed: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006025f0: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006025f4: je 0x602639 */ if (fZ) goto L_00602639;
L_006025f6:; BB(0x006025f6);
    /* 006025f6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006025f9: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006025fc: call 0x5f8950 */ r_esp -= 4; W32(r_esp, 0x602601u); f_005f8950();
    /* 00602601: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602602: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602605: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00602608: call 0x5f8930 */ r_esp -= 4; W32(r_esp, 0x60260du); f_005f8930();
    /* 0060260d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060260e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602611: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00602613: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602616: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0060261c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60261eu); call_ind(t); }
    /* 0060261e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00602621: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602623: je 0x602639 */ if (fZ) goto L_00602639;
L_00602625:; BB(0x00602625);
    /* 00602625: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00602627: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060262a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060262c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060262f: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 00602635: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x602637u); call_ind(t); }
    /* 00602637: jmp 0x60264b */ goto L_0060264b;
L_00602639:; BB(0x00602639);
    /* 00602639: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060263b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060263e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00602640: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602643: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 00602649: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60264bu); call_ind(t); }
L_0060264b:; BB(0x0060264b);
    /* 0060264b: mov esp, ebp */ r_esp = r_ebp;
    /* 0060264d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060264e: ret  */ FN_RET(0x006025c0); r_esp += 4; return;
}

void f_00602650(void) /* PokerTournamentLeaveButton::vfunc52 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602650);
    /* 00602650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602651: mov ebp, esp */ r_ebp = r_esp;
    /* 00602653: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602654: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602657: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060265a: mov byte ptr [eax + 0x1a8], 0 */ W8((u32)(r_eax+0x1a8u), 0x0u);
    /* 00602661: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602664: mov byte ptr [ecx + 8], 0 */ W8((u32)(r_ecx+0x8u), 0x0u);
    /* 00602668: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060266b: mov byte ptr [edx + 9], 0 */ W8((u32)(r_edx+0x9u), 0x0u);
    /* 0060266f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00602671: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602674: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x602679u); f_005f5df0();
    /* 00602679: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0060267b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060267e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602680: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602683: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 00602689: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60268bu); call_ind(t); }
    /* 0060268b: mov esp, ebp */ r_esp = r_ebp;
    /* 0060268d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060268e: ret  */ FN_RET(0x00602650); r_esp += 4; return;
}

void f_00602690(void) /* PokerTournamentLeaveButton::vfunc53 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602690);
    /* 00602690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602691: mov ebp, esp */ r_ebp = r_esp;
    /* 00602693: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602694: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602697: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0060269b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060269d: je 0x6026b1 */ if (fZ) goto L_006026b1;
L_0060269f:; BB(0x0060269f);
    /* 0060269f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006026a2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006026a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006026a7: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 006026ad: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6026afu); call_ind(t); }
    /* 006026af: jmp 0x6026c1 */ goto L_006026c1;
L_006026b1:; BB(0x006026b1);
    /* 006026b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006026b4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006026b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006026b9: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 006026bf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6026c1u); call_ind(t); }
L_006026c1:; BB(0x006026c1);
    /* 006026c1: mov esp, ebp */ r_esp = r_ebp;
    /* 006026c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006026c4: ret 4 */ FN_RET(0x00602690); r_esp += 8; return;
}

void f_006027d0(void) /* PokerTournamentLeaveButton::vfunc54 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006027d0);
    /* 006027d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006027d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006027d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006027d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006027d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006027da: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 006027e0: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006027e3: je 0x602801 */ if (fZ) goto L_00602801;
L_006027e5:; BB(0x006027e5);
    /* 006027e5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006027e8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006027eb: mov dword ptr [edx + 0x194], eax */ W32((u32)(r_edx+0x194u), r_eax);
    /* 006027f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006027f4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006027f6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006027f9: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 006027ff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x602801u); call_ind(t); }
L_00602801:; BB(0x00602801);
    /* 00602801: mov esp, ebp */ r_esp = r_ebp;
    /* 00602803: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602804: ret 4 */ FN_RET(0x006027d0); r_esp += 8; return;
}

void f_00602830(void) /* PokerTournamentLeaveButton::vfunc55 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602830);
    /* 00602830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602831: mov ebp, esp */ r_ebp = r_esp;
    /* 00602833: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00602835: push 0x6aa91d */ { u32 v = 0x6aa91du; r_esp -= 4; W32(r_esp, v); }
    /* 0060283a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00602840: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602841: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00602844: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00602845: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0060284a: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060284c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060284d: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00602850: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00602856: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00602859: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0060285c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0060285f: mov dword ptr [eax + 0x1c8], ecx */ W32((u32)(r_eax+0x1c8u), r_ecx);
    /* 00602865: cmp dword ptr [ebp + 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602869: jne 0x602879 */ if (!fZ) goto L_00602879;
L_0060286b:; BB(0x0060286b);
    /* 0060286b: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0060286e: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 00602874: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00602877: jmp 0x60287f */ goto L_0060287f;
L_00602879:; BB(0x00602879);
    /* 00602879: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0060287c: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_0060287f:; BB(0x0060287f);
    /* 0060287f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00602882: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00602885: mov dword ptr [edx + 0x1d4], eax */ W32((u32)(r_edx+0x1d4u), r_eax);
    /* 0060288b: cmp dword ptr [ebp + 0x14], -1 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060288f: jne 0x60289f */ if (!fZ) goto L_0060289f;
L_00602891:; BB(0x00602891);
    /* 00602891: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00602894: mov edx, dword ptr [ecx + 0x1c8] */ r_edx = R32((u32)(r_ecx+0x1c8u));
    /* 0060289a: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0060289d: jmp 0x6028a5 */ goto L_006028a5;
L_0060289f:; BB(0x0060289f);
    /* 0060289f: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 006028a2: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
L_006028a5:; BB(0x006028a5);
    /* 006028a5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006028a8: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006028ab: mov dword ptr [ecx + 0x1d0], edx */ W32((u32)(r_ecx+0x1d0u), r_edx);
    /* 006028b1: cmp dword ptr [ebp + 0x18], -1 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006028b5: jne 0x6028c5 */ if (!fZ) goto L_006028c5;
L_006028b7:; BB(0x006028b7);
    /* 006028b7: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 006028ba: mov ecx, dword ptr [eax + 0x1d4] */ r_ecx = R32((u32)(r_eax+0x1d4u));
    /* 006028c0: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 006028c3: jmp 0x6028cb */ goto L_006028cb;
L_006028c5:; BB(0x006028c5);
    /* 006028c5: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 006028c8: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
L_006028cb:; BB(0x006028cb);
    /* 006028cb: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 006028ce: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006028d1: mov dword ptr [eax + 0x1cc], ecx */ W32((u32)(r_eax+0x1ccu), r_ecx);
    /* 006028d7: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006028da: cmp dword ptr [edx + 0x190], 0 */ {  u32 a = R32((u32)(r_edx+0x190u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006028e1: je 0x602922 */ if (fZ) goto L_00602922;
L_006028e3:; BB(0x006028e3);
    /* 006028e3: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 006028e6: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 006028ec: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006028ef: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006028f2: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 006028f5: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006028f9: je 0x60290e */ if (fZ) goto L_0060290e;
L_006028fb:; BB(0x006028fb);
    /* 006028fb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006028fd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00602900: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602902: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00602905: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00602907: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x602909u); call_ind(t); }
    /* 00602909: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0060290c: jmp 0x602915 */ goto L_00602915;
L_0060290e:; BB(0x0060290e);
    /* 0060290e: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00602915:; BB(0x00602915);
    /* 00602915: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00602918: mov dword ptr [ecx + 0x190], 0 */ W32((u32)(r_ecx+0x190u), 0x0u);
L_00602922:; BB(0x00602922);
    /* 00602922: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00602927: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x60292cu); f_00686d82();
    /* 0060292c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060292f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00602932: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00602939: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060293d: je 0x60294c */ if (fZ) goto L_0060294c;
L_0060293f:; BB(0x0060293f);
    /* 0060293f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00602942: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x602947u); f_005ec5a0();
    /* 00602947: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0060294a: jmp 0x602953 */ goto L_00602953;
L_0060294c:; BB(0x0060294c);
    /* 0060294c: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00602953:; BB(0x00602953);
    /* 00602953: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00602956: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00602959: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00602960: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00602963: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00602966: mov dword ptr [eax + 0x190], ecx */ W32((u32)(r_eax+0x190u), r_ecx);
    /* 0060296c: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0060296f: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 00602975: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00602978: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0060297b: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0060297e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00602981: cmp dword ptr [eax + 0x4c], 0 */ {  u32 a = R32((u32)(r_eax+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602985: je 0x6029b4 */ if (fZ) goto L_006029b4;
L_00602987:; BB(0x00602987);
    /* 00602987: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 0060298a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060298b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0060298e: call 0x5ebf80 */ r_esp -= 4; W32(r_esp, 0x602993u); f_005ebf80();
    /* 00602993: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00602996: add edx, 0x1b8 */ {  u32 a = r_edx; u32 b = 0x1b8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060299c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0060299e: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 006029a0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006029a3: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 006029a6: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006029a9: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 006029ac: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 006029af: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006029b2: jmp 0x6029f0 */ goto L_006029f0;
L_006029b4:; BB(0x006029b4);
    /* 006029b4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006029b7: mov dword ptr [ecx + 0x1b8], 0 */ W32((u32)(r_ecx+0x1b8u), 0x0u);
    /* 006029c1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006029c4: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x6029c9u); f_005f5550();
    /* 006029c9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006029cc: mov dword ptr [edx + 0x1c0], eax */ W32((u32)(r_edx+0x1c0u), r_eax);
    /* 006029d2: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 006029d5: mov dword ptr [eax + 0x1bc], 0 */ W32((u32)(r_eax+0x1bcu), 0x0u);
    /* 006029df: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006029e2: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x6029e7u); f_005f5590();
    /* 006029e7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006029ea: mov dword ptr [ecx + 0x1c4], eax */ W32((u32)(r_ecx+0x1c4u), r_eax);
L_006029f0:; BB(0x006029f0);
    /* 006029f0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006029f2: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006029f5: mov eax, dword ptr [edx + 0x1d8] */ r_eax = R32((u32)(r_edx+0x1d8u));
    /* 006029fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006029fc: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006029ff: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x602a04u); f_005f53c0();
    /* 00602a04: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00602a07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602a08: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00602a0b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00602a0d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00602a10: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00602a13: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x602a15u); call_ind(t); }
    /* 00602a15: mov esi, eax */ r_esi = r_eax;
    /* 00602a17: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00602a1a: add esi, dword ptr [ecx + 0x1bc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x1bcu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00602a20: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00602a23: call 0x5eb4b0 */ r_esp -= 4; W32(r_esp, 0x602a28u); f_005eb4b0();
    /* 00602a28: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00602a2a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00602a2b: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00602a2e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00602a30: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00602a33: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00602a36: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x602a38u); call_ind(t); }
    /* 00602a38: mov esi, eax */ r_esi = r_eax;
    /* 00602a3a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00602a3d: add esi, dword ptr [eax + 0x1b8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x1b8u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00602a43: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00602a46: call 0x5eb470 */ r_esp -= 4; W32(r_esp, 0x602a4bu); f_005eb470();
    /* 00602a4b: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00602a4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00602a4e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00602a51: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00602a54: mov eax, dword ptr [ecx + 0x1c4] */ r_eax = R32((u32)(r_ecx+0x1c4u));
    /* 00602a5a: sub eax, dword ptr [edx + 0x1bc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x1bcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00602a60: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00602a63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602a64: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00602a67: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00602a6a: mov eax, dword ptr [ecx + 0x1c0] */ r_eax = R32((u32)(r_ecx+0x1c0u));
    /* 00602a70: sub eax, dword ptr [edx + 0x1b8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x1b8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00602a76: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00602a79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602a7a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00602a7d: mov edx, dword ptr [ecx + 0x1c8] */ r_edx = R32((u32)(r_ecx+0x1c8u));
    /* 00602a83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00602a84: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00602a87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602a88: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00602a8b: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 00602a91: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x602a96u); f_005ec8f0();
    /* 00602a96: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00602a99: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00602a9a: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00602a9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602a9e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00602aa1: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 00602aa7: call 0x5ef340 */ r_esp -= 4; W32(r_esp, 0x602aacu); f_005ef340();
    /* 00602aac: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00602aaf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00602ab1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00602ab4: mov edx, dword ptr [eax + 0xe8] */ r_edx = R32((u32)(r_eax+0xe8u));
    /* 00602aba: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x602abcu); call_ind(t); }
    /* 00602abc: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00602abf: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x602ac4u); f_005f54a0();
    /* 00602ac4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00602ac7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602ac9: je 0x602ae4 */ if (fZ) goto L_00602ae4;
L_00602acb:; BB(0x00602acb);
    /* 00602acb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00602ace: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 00602ad4: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00602ad7: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 00602add: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00602adf: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00602ae2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x602ae4u); call_ind(t); }
L_00602ae4:; BB(0x00602ae4);
    /* 00602ae4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602ae7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00602aee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00602aef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00602af0: mov esp, ebp */ r_esp = r_ebp;
    /* 00602af2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602af3: ret 0x1c */ FN_RET(0x00602830); r_esp += 32; return;
}

void f_00602b00(void) /* PokerTournamentLeaveButton::vfunc56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602b00);
    /* 00602b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602b01: mov ebp, esp */ r_ebp = r_esp;
    /* 00602b03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602b04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602b07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602b0a: cmp dword ptr [eax + 0x190], 0 */ {  u32 a = R32((u32)(r_eax+0x190u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602b11: je 0x602b33 */ if (fZ) goto L_00602b33;
L_00602b13:; BB(0x00602b13);
    /* 00602b13: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00602b16: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602b17: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602b1a: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 00602b20: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602b23: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 00602b29: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602b2b: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00602b31: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x602b33u); call_ind(t); }
L_00602b33:; BB(0x00602b33);
    /* 00602b33: mov esp, ebp */ r_esp = r_ebp;
    /* 00602b35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602b36: ret 4 */ FN_RET(0x00602b00); r_esp += 8; return;
}

void f_00602b40(void) /* PokerTournamentLeaveButton::vfunc57 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602b40);
    /* 00602b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602b41: mov ebp, esp */ r_ebp = r_esp;
    /* 00602b43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602b44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602b47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602b4a: cmp dword ptr [eax + 0x190], 0 */ {  u32 a = R32((u32)(r_eax+0x190u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602b51: je 0x602b65 */ if (fZ) goto L_00602b65;
L_00602b53:; BB(0x00602b53);
    /* 00602b53: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00602b56: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602b57: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602b5a: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 00602b60: call 0x5ee710 */ r_esp -= 4; W32(r_esp, 0x602b65u); f_005ee710();
L_00602b65:; BB(0x00602b65);
    /* 00602b65: mov esp, ebp */ r_esp = r_ebp;
    /* 00602b67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602b68: ret 4 */ FN_RET(0x00602b40); r_esp += 8; return;
}

void f_00602be0(void) /* PokerTournamentLeaveButton::vfunc58 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602be0);
    /* 00602be0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602be1: mov ebp, esp */ r_ebp = r_esp;
    /* 00602be3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00602be6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00602be7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00602bea: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00602bed: cmp dword ptr [eax + 0x4c], 0 */ {  u32 a = R32((u32)(r_eax+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602bf1: je 0x602c20 */ if (fZ) goto L_00602c20;
L_00602bf3:; BB(0x00602bf3);
    /* 00602bf3: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00602bf6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602bf7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00602bfa: call 0x5ebf80 */ r_esp -= 4; W32(r_esp, 0x602bffu); f_005ebf80();
    /* 00602bff: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00602c02: add edx, 0x1b8 */ {  u32 a = r_edx; u32 b = 0x1b8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00602c08: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00602c0a: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00602c0c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00602c0f: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00602c12: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00602c15: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 00602c18: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00602c1b: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00602c1e: jmp 0x602c5c */ goto L_00602c5c;
L_00602c20:; BB(0x00602c20);
    /* 00602c20: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00602c23: mov dword ptr [ecx + 0x1b8], 0 */ W32((u32)(r_ecx+0x1b8u), 0x0u);
    /* 00602c2d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00602c30: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x602c35u); f_005f5550();
    /* 00602c35: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00602c38: mov dword ptr [edx + 0x1c0], eax */ W32((u32)(r_edx+0x1c0u), r_eax);
    /* 00602c3e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00602c41: mov dword ptr [eax + 0x1bc], 0 */ W32((u32)(r_eax+0x1bcu), 0x0u);
    /* 00602c4b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00602c4e: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x602c53u); f_005f5590();
    /* 00602c53: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00602c56: mov dword ptr [ecx + 0x1c4], eax */ W32((u32)(r_ecx+0x1c4u), r_eax);
L_00602c5c:; BB(0x00602c5c);
    /* 00602c5c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00602c5f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00602c62: mov ecx, dword ptr [edx + 0x1c0] */ r_ecx = R32((u32)(r_edx+0x1c0u));
    /* 00602c68: sub ecx, dword ptr [eax + 0x1b8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x1b8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00602c6e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00602c71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602c72: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00602c75: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 00602c7b: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x602c80u); f_005ecc60();
    /* 00602c80: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00602c83: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00602c86: mov edx, dword ptr [eax + 0x1c4] */ r_edx = R32((u32)(r_eax+0x1c4u));
    /* 00602c8c: sub edx, dword ptr [ecx + 0x1bc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1bcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00602c92: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00602c95: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00602c96: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00602c99: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 00602c9f: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x602ca4u); f_005eccb0();
    /* 00602ca4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00602ca7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00602ca9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00602cac: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00602caf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x602cb1u); call_ind(t); }
    /* 00602cb1: mov esi, eax */ r_esi = r_eax;
    /* 00602cb3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00602cb6: add esi, dword ptr [ecx + 0x1bc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x1bcu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00602cbc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00602cbf: call 0x5eb4b0 */ r_esp -= 4; W32(r_esp, 0x602cc4u); f_005eb4b0();
    /* 00602cc4: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00602cc6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00602cc7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00602cca: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00602ccc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00602ccf: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00602cd2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x602cd4u); call_ind(t); }
    /* 00602cd4: mov esi, eax */ r_esi = r_eax;
    /* 00602cd6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00602cd9: add esi, dword ptr [eax + 0x1b8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x1b8u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00602cdf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00602ce2: call 0x5eb470 */ r_esp -= 4; W32(r_esp, 0x602ce7u); f_005eb470();
    /* 00602ce7: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00602ce9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00602cea: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00602ced: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 00602cf3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00602cf6: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 00602cfc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00602cfe: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00602d01: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x602d03u); call_ind(t); }
    /* 00602d03: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00602d04: mov esp, ebp */ r_esp = r_ebp;
    /* 00602d06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602d07: ret  */ FN_RET(0x00602be0); r_esp += 4; return;
}

void f_00602f60(void) /* PokerTournamentLeaveButton::vfunc59 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602f60);
    /* 00602f60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602f61: mov ebp, esp */ r_ebp = r_esp;
    /* 00602f63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00602f66: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602f69: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602f6c: call 0x602ed0 */ r_esp -= 4; W32(r_esp, 0x602f71u); f_00602ed0();
    /* 00602f71: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00602f74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602f76: je 0x602f7d */ if (fZ) goto L_00602f7d;
L_00602f78:; BB(0x00602f78);
    /* 00602f78: jmp 0x6030fd */ goto L_006030fd;
L_00602f7d:; BB(0x00602f7d);
    /* 00602f7d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602f80: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 00602f86: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00602f89: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00602f8d: ja 0x6030fd */ if ((!fC&&!fZ)) goto L_006030fd;
L_00602f93:; BB(0x00602f93);
    /* 00602f93: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00602f96: jmp dword ptr [eax*4 + 0x603104] */ { u32 t = R32((u32)(r_eax*4+0x603104u)); switch (t) { case 0x602f9du: goto L_00602f9d; case 0x602ff7u: goto L_00602ff7; case 0x603051u: goto L_00603051; case 0x6030a8u: goto L_006030a8; default: UNSUP(0x00602f96, "jump table entry is not a known target"); } }
L_00602f9d:; BB(0x00602f9d);
    /* 00602f9d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602fa0: mov edx, dword ptr [ecx + 0x198] */ r_edx = R32((u32)(r_ecx+0x198u));
    /* 00602fa6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00602fa7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602faa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00602fac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602faf: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00602fb5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x602fb7u); call_ind(t); }
    /* 00602fb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602fba: cmp dword ptr [ecx + 0x190], 0 */ {  u32 a = R32((u32)(r_ecx+0x190u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602fc1: je 0x602ff2 */ if (fZ) goto L_00602ff2;
L_00602fc3:; BB(0x00602fc3);
    /* 00602fc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602fc4: mov edx, esp */ r_edx = r_esp;
    /* 00602fc6: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 00602fcc: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00602fcf: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 00602fd5: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 00602fd8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00602fda: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602fdd: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 00602fe3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602fe4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602fe7: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 00602fed: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x602ff2u); f_005ecd00();
L_00602ff2:; BB(0x00602ff2);
    /* 00602ff2: jmp 0x6030fd */ goto L_006030fd;
L_00602ff7:; BB(0x00602ff7);
    /* 00602ff7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602ffa: mov eax, dword ptr [edx + 0x19c] */ r_eax = R32((u32)(r_edx+0x19cu));
    /* 00603000: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603001: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603004: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00603006: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603009: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0060300f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x603011u); call_ind(t); }
    /* 00603011: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603014: cmp dword ptr [ecx + 0x190], 0 */ {  u32 a = R32((u32)(r_ecx+0x190u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060301b: je 0x60304c */ if (fZ) goto L_0060304c;
L_0060301d:; BB(0x0060301d);
    /* 0060301d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060301e: mov edx, esp */ r_edx = r_esp;
    /* 00603020: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 00603026: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00603029: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 0060302f: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 00603032: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00603034: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603037: mov eax, dword ptr [edx + 0x1d4] */ r_eax = R32((u32)(r_edx+0x1d4u));
    /* 0060303d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060303e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603041: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 00603047: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x60304cu); f_005ecd00();
L_0060304c:; BB(0x0060304c);
    /* 0060304c: jmp 0x6030fd */ goto L_006030fd;
L_00603051:; BB(0x00603051);
    /* 00603051: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603054: mov eax, dword ptr [edx + 0x1a0] */ r_eax = R32((u32)(r_edx+0x1a0u));
    /* 0060305a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060305b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060305e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00603060: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603063: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00603069: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60306bu); call_ind(t); }
    /* 0060306b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060306e: cmp dword ptr [ecx + 0x190], 0 */ {  u32 a = R32((u32)(r_ecx+0x190u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603075: je 0x6030a6 */ if (fZ) goto L_006030a6;
L_00603077:; BB(0x00603077);
    /* 00603077: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603078: mov edx, esp */ r_edx = r_esp;
    /* 0060307a: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 00603080: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00603083: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 00603089: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 0060308c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060308e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603091: mov eax, dword ptr [edx + 0x1d0] */ r_eax = R32((u32)(r_edx+0x1d0u));
    /* 00603097: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603098: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060309b: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 006030a1: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x6030a6u); f_005ecd00();
L_006030a6:; BB(0x006030a6);
    /* 006030a6: jmp 0x6030fd */ goto L_006030fd;
L_006030a8:; BB(0x006030a8);
    /* 006030a8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006030ab: mov eax, dword ptr [edx + 0x1a4] */ r_eax = R32((u32)(r_edx+0x1a4u));
    /* 006030b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006030b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006030b5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006030b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006030ba: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 006030c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6030c2u); call_ind(t); }
    /* 006030c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006030c5: cmp dword ptr [ecx + 0x190], 0 */ {  u32 a = R32((u32)(r_ecx+0x190u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006030cc: je 0x6030fd */ if (fZ) goto L_006030fd;
L_006030ce:; BB(0x006030ce);
    /* 006030ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006030cf: mov edx, esp */ r_edx = r_esp;
    /* 006030d1: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 006030d7: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 006030da: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 006030e0: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 006030e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006030e5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006030e8: mov eax, dword ptr [edx + 0x1d4] */ r_eax = R32((u32)(r_edx+0x1d4u));
    /* 006030ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006030ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006030f2: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 006030f8: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x6030fdu); f_005ecd00();
L_006030fd:; BB(0x006030fd);
    /* 006030fd: mov esp, ebp */ r_esp = r_ebp;
    /* 006030ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00603100: ret  */ FN_RET(0x00602f60); r_esp += 4; return;
}

