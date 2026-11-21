#include "protos.h"

void f_00676b60(void) /* BackgroundsDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00676b60);
    /* 00676b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00676b61: mov ebp, esp */ r_ebp = r_esp;
    /* 00676b63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00676b65: push 0x6ad628 */ { u32 v = 0x6ad628u; r_esp -= 4; W32(r_esp, v); }
    /* 00676b6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00676b70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676b71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00676b72: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00676b77: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00676b79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676b7a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00676b7d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00676b83: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00676b86: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676b88: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00676b8a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00676b8d: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x676b92u); f_005f71f0();
    /* 00676b92: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00676b99: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00676b9c: mov dword ptr [eax], 0x6e1aa4 */ W32((u32)(r_eax), 0x6e1aa4u);
    /* 00676ba2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676ba4: push 0x30d4f5 */ { u32 v = 0x30d4f5u; r_esp -= 4; W32(r_esp, v); }
    /* 00676ba9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00676bac: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x676bb1u); f_005f83d0();
    /* 00676bb1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00676bb4: mov dword ptr [ecx + 0x1bc], 0 */ W32((u32)(r_ecx+0x1bcu), 0x0u);
    /* 00676bbe: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00676bc5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00676bc8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676bcb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00676bd2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00676bd3: mov esp, ebp */ r_esp = r_ebp;
    /* 00676bd5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00676bd6: ret  */ FN_RET(0x00676b60); r_esp += 4; return;
}

void f_00676be0(void) /* BackgroundsDialog::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00676be0);
    /* 00676be0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00676be1: mov ebp, esp */ r_ebp = r_esp;
    /* 00676be3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00676be5: push 0x6ad64b */ { u32 v = 0x6ad64bu; r_esp -= 4; W32(r_esp, v); }
    /* 00676bea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00676bf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676bf1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00676bf4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00676bf9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00676bfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676bfc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00676bff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00676c05: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00676c08: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00676c0b: mov dword ptr [eax], 0x6e1aa4 */ W32((u32)(r_eax), 0x6e1aa4u);
    /* 00676c11: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00676c18: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00676c1b: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 00676c21: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00676c24: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00676c27: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00676c2a: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676c2e: je 0x676c43 */ if (fZ) goto L_00676c43;
L_00676c30:; BB(0x00676c30);
    /* 00676c30: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00676c32: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00676c35: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00676c37: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00676c3a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00676c3c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x676c3eu); call_ind(t); }
    /* 00676c3e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00676c41: jmp 0x676c4a */ goto L_00676c4a;
L_00676c43:; BB(0x00676c43);
    /* 00676c43: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00676c4a:; BB(0x00676c4a);
    /* 00676c4a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00676c51: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00676c54: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x676c59u); f_005f7260();
    /* 00676c59: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676c5c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00676c63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00676c64: mov esp, ebp */ r_esp = r_ebp;
    /* 00676c66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00676c67: ret  */ FN_RET(0x00676be0); r_esp += 4; return;
}

void f_00676c70(void) /* BackgroundsDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00676c70);
    /* 00676c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00676c71: mov ebp, esp */ r_ebp = r_esp;
    /* 00676c73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00676c75: push 0x6ad671 */ { u32 v = 0x6ad671u; r_esp -= 4; W32(r_esp, v); }
    /* 00676c7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00676c80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676c81: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00676c84: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00676c89: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00676c8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676c8c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00676c8f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00676c95: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00676c98: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00676c9a: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00676c9c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00676c9e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00676ca0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00676ca2: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00676ca4: push 0x222 */ { u32 v = 0x222u; r_esp -= 4; W32(r_esp, v); }
    /* 00676ca9: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00676cab: push 0x6e1bb8 */ { u32 v = 0x6e1bb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00676cb0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x676cb5u); f_00630f40();
    /* 00676cb5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00676cb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676cb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676cbb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676cbd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00676cc0: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x676cc5u); f_005fa5b0();
    /* 00676cc5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676cc7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676cc9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676ccb: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00676cd0: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00676cd2: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00676cd4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00676cd6: push 0x158 */ { u32 v = 0x158u; r_esp -= 4; W32(r_esp, v); }
    /* 00676cdb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00676cdd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00676cdf: push 0x22a */ { u32 v = 0x22au; r_esp -= 4; W32(r_esp, v); }
    /* 00676ce4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676ce6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676ce8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00676ceb: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x676cf0u); f_005fa880();
    /* 00676cf0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676cf2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676cf4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676cf6: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00676cfb: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00676d00: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00676d05: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00676d07: push 0x159 */ { u32 v = 0x159u; r_esp -= 4; W32(r_esp, v); }
    /* 00676d0c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00676d0e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00676d10: push 0x22a */ { u32 v = 0x22au; r_esp -= 4; W32(r_esp, v); }
    /* 00676d15: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676d17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676d19: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00676d1c: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x676d21u); f_005fa880();
    /* 00676d21: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00676d28: jmp 0x676d33 */ goto L_00676d33;
L_00676d2a:; BB(0x00676d2a);
    /* 00676d2a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00676d2d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00676d30: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00676d33:; BB(0x00676d33);
    /* 00676d33: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00676d37: jge 0x676d8b */ if ((fS==fO)) goto L_00676d8b;
L_00676d39:; BB(0x00676d39);
    /* 00676d39: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676d3b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00676d3d: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00676d3f: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00676d41: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00676d43: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00676d46: mov edx, dword ptr [ecx*4 + 0x7811b0] */ r_edx = R32((u32)(r_ecx*4+0x7811b0u));
    /* 00676d4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00676d4e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x676d53u); f_00630f40();
    /* 00676d53: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00676d56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676d57: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00676d59: push 0x160 */ { u32 v = 0x160u; r_esp -= 4; W32(r_esp, v); }
    /* 00676d5e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00676d61: imul eax, eax, 0x5a */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5au; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00676d64: add eax, 0x11c */ {  u32 a = r_eax; u32 b = 0x11cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00676d69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676d6a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00676d6d: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00676d6f: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00676d71: and ecx, 0xfffffff9 */ {  u32 a = r_ecx; u32 b = 0xfffffff9u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00676d74: add ecx, 0x30d4e5 */ {  u32 a = r_ecx; u32 b = 0x30d4e5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00676d7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00676d7b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00676d7e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00676d7f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676d81: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00676d84: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x676d89u); f_005f9de0();
    /* 00676d89: jmp 0x676d2a */ goto L_00676d2a;
L_00676d8b:; BB(0x00676d8b);
    /* 00676d8b: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00676d8d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676d8f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00676d92: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x676d97u); f_005fb300();
    /* 00676d97: mov ecx, eax */ r_ecx = r_eax;
    /* 00676d99: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x676d9eu); f_006026f0();
    /* 00676d9e: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00676da0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00676da2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00676da5: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x676daau); f_005fb300();
    /* 00676daa: mov ecx, eax */ r_ecx = r_eax;
    /* 00676dac: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x676db1u); f_006026f0();
    /* 00676db1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00676db3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00676db5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00676db7: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 00676db9: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00676dbb: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00676dbd: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00676dc2: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00676dc4: push 0x6e1b9c */ { u32 v = 0x6e1b9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00676dc9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x676dceu); f_00630f40();
    /* 00676dce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00676dd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676dd2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00676dd4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676dd6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00676dd9: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x676ddeu); f_005fa5b0();
    /* 00676dde: push 0x30d4d9 */ { u32 v = 0x30d4d9u; r_esp -= 4; W32(r_esp, v); }
    /* 00676de3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676de5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676de7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676de9: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00676deb: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00676ded: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00676def: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00676df1: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00676df3: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00676df8: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00676dfa: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00676dfc: push 0xa5 */ { u32 v = 0xa5u; r_esp -= 4; W32(r_esp, v); }
    /* 00676e01: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00676e03: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00676e05: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 00676e0a: push 0xbb */ { u32 v = 0xbbu; r_esp -= 4; W32(r_esp, v); }
    /* 00676e0f: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00676e11: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 00676e16: push 0x30d4cf */ { u32 v = 0x30d4cfu; r_esp -= 4; W32(r_esp, v); }
    /* 00676e1b: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00676e1d: push 0xd3 */ { u32 v = 0xd3u; r_esp -= 4; W32(r_esp, v); }
    /* 00676e22: push 0x30d4cb */ { u32 v = 0x30d4cbu; r_esp -= 4; W32(r_esp, v); }
    /* 00676e27: push 0xce */ { u32 v = 0xceu; r_esp -= 4; W32(r_esp, v); }
    /* 00676e2c: push 0xd3 */ { u32 v = 0xd3u; r_esp -= 4; W32(r_esp, v); }
    /* 00676e31: push 0x30d4cc */ { u32 v = 0x30d4ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00676e36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676e38: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00676e3a: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00676e3c: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00676e3e: push 0x30d4eb */ { u32 v = 0x30d4ebu; r_esp -= 4; W32(r_esp, v); }
    /* 00676e43: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676e45: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676e47: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00676e4a: call 0x5fac90 */ r_esp -= 4; W32(r_esp, 0x676e4fu); f_005fac90();
    /* 00676e4f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676e51: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00676e56: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676e58: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00676e5a: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 00676e5c: push 0x133 */ { u32 v = 0x133u; r_esp -= 4; W32(r_esp, v); }
    /* 00676e61: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676e63: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00676e68: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00676e6a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00676e70: mov eax, dword ptr [edx + 0x1d4] */ r_eax = R32((u32)(r_edx+0x1d4u));
    /* 00676e76: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x676e78u); call_ind(t); }
    /* 00676e78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676e79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676e7b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676e7d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00676e80: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x676e85u); f_005f9ce0();
    /* 00676e85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676e87: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00676e8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676e8e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00676e90: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00676e92: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 00676e97: push 0x30d4f4 */ { u32 v = 0x30d4f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00676e9c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00676e9e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676ea0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00676ea3: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x676ea8u); f_005f9ce0();
    /* 00676ea8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00676eaa: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00676eac: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00676eae: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00676eb0: push 0x133 */ { u32 v = 0x133u; r_esp -= 4; W32(r_esp, v); }
    /* 00676eb5: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00676eb7: push 0xd7 */ { u32 v = 0xd7u; r_esp -= 4; W32(r_esp, v); }
    /* 00676ebc: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00676ebe: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00676ec3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00676ec5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676ec7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00676eca: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x676ecfu); f_005fa5b0();
    /* 00676ecf: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 00676ed1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x676ed6u); f_00686d82();
    /* 00676ed6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00676ed9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00676edc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00676ee3: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676ee7: je 0x676f02 */ if (fZ) goto L_00676f02;
L_00676ee9:; BB(0x00676ee9);
    /* 00676ee9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00676eec: call 0x680b70 */ r_esp -= 4; W32(r_esp, 0x676ef1u); f_00680b70();
    /* 00676ef1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00676ef4: mov dword ptr [ecx], 0x6e1aec */ W32((u32)(r_ecx), 0x6e1aecu);
    /* 00676efa: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00676efd: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00676f00: jmp 0x676f09 */ goto L_00676f09;
L_00676f02:; BB(0x00676f02);
    /* 00676f02: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00676f09:; BB(0x00676f09);
    /* 00676f09: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00676f0c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00676f0f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00676f16: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00676f19: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00676f1c: mov dword ptr [ecx + 0x1bc], edx */ W32((u32)(r_ecx+0x1bcu), r_edx);
    /* 00676f22: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00676f25: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00676f2b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00676f2e: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00676f31: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00676f33: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676f35: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00676f37: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 00676f39: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 00676f3e: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00676f40: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00676f42: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00676f44: push 0x6b30a8 */ { u32 v = 0x6b30a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00676f49: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x676f4eu); f_00630f40();
    /* 00676f4e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00676f51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676f52: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00676f57: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00676f5c: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00676f61: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00676f66: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00676f68: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00676f6a: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00676f6c: push 0xf4 */ { u32 v = 0xf4u; r_esp -= 4; W32(r_esp, v); }
    /* 00676f71: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00676f73: push 0xfb */ { u32 v = 0xfbu; r_esp -= 4; W32(r_esp, v); }
    /* 00676f78: push 0x125 */ { u32 v = 0x125u; r_esp -= 4; W32(r_esp, v); }
    /* 00676f7d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00676f80: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00676f86: call 0x680ca0 */ r_esp -= 4; W32(r_esp, 0x676f8bu); f_00680ca0();
    /* 00676f8b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00676f8e: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 00676f94: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00676f97: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00676f9d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00676f9f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00676fa2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x676fa4u); call_ind(t); }
    /* 00676fa4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00676fa7: call 0x676fc0 */ r_esp -= 4; W32(r_esp, 0x676facu); f_00676fc0();
    /* 00676fac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676faf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00676fb6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00676fb7: mov esp, ebp */ r_esp = r_ebp;
    /* 00676fb9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00676fba: ret  */ FN_RET(0x00676c70); r_esp += 4; return;
}

void f_00677010(void) /* BackgroundsDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00677010);
    /* 00677010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00677011: mov ebp, esp */ r_ebp = r_esp;
    /* 00677013: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00677016: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00677019: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0067701c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0067701f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677023: je 0x677033 */ if (fZ) goto L_00677033;
L_00677025:; BB(0x00677025);
    /* 00677025: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677029: je 0x67703b */ if (fZ) goto L_0067703b;
L_0067702b:; BB(0x0067702b);
    /* 0067702b: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067702f: je 0x677048 */ if (fZ) goto L_00677048;
L_00677031:; BB(0x00677031);
    /* 00677031: jmp 0x677050 */ goto L_00677050;
L_00677033:; BB(0x00677033);
    /* 00677033: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00677036: call 0x677100 */ r_esp -= 4; W32(r_esp, 0x67703bu); f_00677100();
L_0067703b:; BB(0x0067703b);
    /* 0067703b: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00677041: call 0x64f830 */ r_esp -= 4; W32(r_esp, 0x677046u); f_0064f830();
    /* 00677046: jmp 0x677050 */ goto L_00677050;
L_00677048:; BB(0x00677048);
    /* 00677048: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067704b: call 0x677100 */ r_esp -= 4; W32(r_esp, 0x677050u); f_00677100();
L_00677050:; BB(0x00677050);
    /* 00677050: mov esp, ebp */ r_esp = r_ebp;
    /* 00677052: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00677053: ret 4 */ FN_RET(0x00677010); r_esp += 8; return;
}

void f_00677060(void) /* BackgroundsDialog::vfunc9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00677060);
    /* 00677060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00677061: mov ebp, esp */ r_ebp = r_esp;
    /* 00677063: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00677066: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00677069: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0067706c: call 0x677400 */ r_esp -= 4; W32(r_esp, 0x677071u); f_00677400();
    /* 00677071: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677074: jne 0x67708e */ if (!fZ) goto L_0067708e;
L_00677076:; BB(0x00677076);
    /* 00677076: push 0x231ab6 */ { u32 v = 0x231ab6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067707b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067707d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00677080: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x677085u); f_005fb2b0();
    /* 00677085: mov ecx, eax */ r_ecx = r_eax;
    /* 00677087: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x67708cu); f_005eaf00();
    /* 0067708c: jmp 0x6770be */ goto L_006770be;
L_0067708e:; BB(0x0067708e);
    /* 0067708e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00677091: call 0x677400 */ r_esp -= 4; W32(r_esp, 0x677096u); f_00677400();
    /* 00677096: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00677097: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0067709c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067709e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006770a4: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 006770aa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6770acu); call_ind(t); }
    /* 006770ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006770ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006770af: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006770b2: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x6770b7u); f_005fb2b0();
    /* 006770b7: mov ecx, eax */ r_ecx = r_eax;
    /* 006770b9: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x6770beu); f_005eaf00();
L_006770be:; BB(0x006770be);
    /* 006770be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006770c0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006770c3: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x6770c8u); f_005fb550();
    /* 006770c8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006770cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006770cd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006770d0: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x6770d5u); f_005fb720();
    /* 006770d5: mov ecx, eax */ r_ecx = r_eax;
    /* 006770d7: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x6770dcu); f_005e4390();
    /* 006770dc: mov ecx, eax */ r_ecx = r_eax;
    /* 006770de: call 0x629c70 */ r_esp -= 4; W32(r_esp, 0x6770e3u); f_00629c70();
    /* 006770e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006770e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006770e7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006770e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006770ec: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 006770f2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6770f4u); call_ind(t); }
    /* 006770f4: mov esp, ebp */ r_esp = r_ebp;
    /* 006770f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006770f7: ret 4 */ FN_RET(0x00677060); r_esp += 8; return;
}

