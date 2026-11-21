#include "protos.h"

void f_00403ba0(void) /* BaccaratDealScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00403ba0);
    /* 00403ba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00403ba1: mov ebp, esp */ r_ebp = r_esp;
    /* 00403ba3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00403ba5: push 0x69d714 */ { u32 v = 0x69d714u; r_esp -= 4; W32(r_esp, v); }
    /* 00403baa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00403bb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403bb1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00403bb2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00403bb7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00403bb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403bba: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00403bbd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00403bc3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00403bc6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403bc8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00403bcb: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x403bd0u); f_005fc0d0();
    /* 00403bd0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00403bd7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00403bda: mov dword ptr [eax], 0x6b2bf0 */ W32((u32)(r_eax), 0x6b2bf0u);
    /* 00403be0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00403be3: mov byte ptr [ecx + 0x24], 1 */ W8((u32)(r_ecx+0x24u), 0x1u);
    /* 00403be7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00403be9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00403bef: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x403bf4u); f_00637810();
    /* 00403bf4: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00403bf6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00403bf9: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00403bfc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00403c03: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00403c06: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00403c09: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00403c10: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00403c11: mov esp, ebp */ r_esp = r_ebp;
    /* 00403c13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00403c14: ret  */ FN_RET(0x00403ba0); r_esp += 4; return;
}

void f_00403ca0(void) /* BaccaratDealScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00403ca0);
    /* 00403ca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00403ca1: mov ebp, esp */ r_ebp = r_esp;
    /* 00403ca3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00403ca6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00403ca9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403cac: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x403cb1u); f_005fc360();
    /* 00403cb1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00403cb4: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00403cb8: ja 0x403ef0 */ if ((!fC&&!fZ)) goto L_00403ef0;
L_00403cbe:; BB(0x00403cbe);
    /* 00403cbe: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00403cc1: jmp dword ptr [eax*4 + 0x403ef4] */ { u32 t = R32((u32)(r_eax*4+0x403ef4u)); switch (t) { case 0x403cc8u: goto L_00403cc8; case 0x403cf5u: goto L_00403cf5; case 0x403d4cu: goto L_00403d4c; case 0x403dbdu: goto L_00403dbd; case 0x403df2u: goto L_00403df2; case 0x403e56u: goto L_00403e56; case 0x403eb7u: goto L_00403eb7; default: UNSUP(0x00403cc1, "jump table entry is not a known target"); } }
L_00403cc8:; BB(0x00403cc8);
    /* 00403cc8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403ccb: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 00403cd2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00403cd4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403cd7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00403cd9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403cdc: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00403cdf: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x403ce1u); call_ind(t); }
    /* 00403ce1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403ce3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403ce6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403ce8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403ceb: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00403cee: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403cf0u); call_ind(t); }
    /* 00403cf0: jmp 0x403ef0 */ goto L_00403ef0;
L_00403cf5:; BB(0x00403cf5);
    /* 00403cf5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00403cf7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403cfa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00403cfc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403cff: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00403d02: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403d04u); call_ind(t); }
    /* 00403d04: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00403d0a: mov ecx, dword ptr [ecx + 0x10d8] */ r_ecx = R32((u32)(r_ecx+0x10d8u));
    /* 00403d10: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x403d15u); f_006436c0();
    /* 00403d15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403d16: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403d19: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00403d1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403d1d: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00403d23: call 0x409400 */ r_esp -= 4; W32(r_esp, 0x403d28u); f_00409400();
    /* 00403d28: mov ecx, dword ptr [0x7902f8] */ r_ecx = R32((u32)(0x7902f8u));
    /* 00403d2e: call 0x401cb0 */ r_esp -= 4; W32(r_esp, 0x403d33u); f_00401cb0();
    /* 00403d33: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403d36: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 00403d39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00403d3a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403d3d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403d3f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403d42: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00403d45: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403d47u); call_ind(t); }
    /* 00403d47: jmp 0x403ef0 */ goto L_00403ef0;
L_00403d4c:; BB(0x00403d4c);
    /* 00403d4c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00403d4e: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00403d54: call 0x4094b0 */ r_esp -= 4; W32(r_esp, 0x403d59u); f_004094b0();
    /* 00403d59: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403d5c: jne 0x403d76 */ if (!fZ) goto L_00403d76;
L_00403d5e:; BB(0x00403d5e);
    /* 00403d5e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403d61: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 00403d64: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00403d65: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00403d67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403d6a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403d6c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403d6f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00403d72: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403d74u); call_ind(t); }
    /* 00403d74: jmp 0x403db8 */ goto L_00403db8;
L_00403d76:; BB(0x00403d76);
    /* 00403d76: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403d79: cmp dword ptr [ecx + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403d7d: jne 0x403d8b */ if (!fZ) goto L_00403d8b;
L_00403d7f:; BB(0x00403d7f);
    /* 00403d7f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403d82: mov dword ptr [edx + 0x20], 4 */ W32((u32)(r_edx+0x20u), 0x4u);
    /* 00403d89: jmp 0x403d95 */ goto L_00403d95;
L_00403d8b:; BB(0x00403d8b);
    /* 00403d8b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403d8e: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
L_00403d95:; BB(0x00403d95);
    /* 00403d95: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00403d97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403d9a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00403d9c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403d9f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00403da2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403da4u); call_ind(t); }
    /* 00403da4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403da7: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 00403daa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00403dab: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403dae: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403db0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403db3: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00403db6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403db8u); call_ind(t); }
L_00403db8:; BB(0x00403db8);
    /* 00403db8: jmp 0x403ef0 */ goto L_00403ef0;
L_00403dbd:; BB(0x00403dbd);
    /* 00403dbd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00403dbf: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00403dc5: call 0x408f10 */ r_esp -= 4; W32(r_esp, 0x403dcau); f_00408f10();
    /* 00403dca: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00403dcc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403dcf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00403dd1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403dd4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00403dd7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403dd9u); call_ind(t); }
    /* 00403dd9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403ddc: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 00403ddf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00403de0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403de3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403de5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403de8: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00403deb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403dedu); call_ind(t); }
    /* 00403ded: jmp 0x403ef0 */ goto L_00403ef0;
L_00403df2:; BB(0x00403df2);
    /* 00403df2: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00403df8: call 0x4091f0 */ r_esp -= 4; W32(r_esp, 0x403dfdu); f_004091f0();
    /* 00403dfd: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00403e00: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403e02: je 0x403e2e */ if (fZ) goto L_00403e2e;
L_00403e04:; BB(0x00403e04);
    /* 00403e04: mov edx, dword ptr [0x7902f0] */ r_edx = R32((u32)(0x7902f0u));
    /* 00403e0a: mov ecx, dword ptr [edx + 0x10d8] */ r_ecx = R32((u32)(r_edx+0x10d8u));
    /* 00403e10: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x403e15u); f_006436c0();
    /* 00403e15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403e16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403e18: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00403e1e: call 0x409400 */ r_esp -= 4; W32(r_esp, 0x403e23u); f_00409400();
    /* 00403e23: mov ecx, dword ptr [0x7902f8] */ r_ecx = R32((u32)(0x7902f8u));
    /* 00403e29: call 0x401cb0 */ r_esp -= 4; W32(r_esp, 0x403e2eu); f_00401cb0();
L_00403e2e:; BB(0x00403e2e);
    /* 00403e2e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00403e30: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403e33: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403e35: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403e38: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00403e3b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403e3du); call_ind(t); }
    /* 00403e3d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403e40: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 00403e43: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00403e44: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403e47: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403e49: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403e4c: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00403e4f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403e51u); call_ind(t); }
    /* 00403e51: jmp 0x403ef0 */ goto L_00403ef0;
L_00403e56:; BB(0x00403e56);
    /* 00403e56: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00403e5c: call 0x409230 */ r_esp -= 4; W32(r_esp, 0x403e61u); f_00409230();
    /* 00403e61: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00403e64: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403e66: je 0x403e92 */ if (fZ) goto L_00403e92;
L_00403e68:; BB(0x00403e68);
    /* 00403e68: mov edx, dword ptr [0x7902f0] */ r_edx = R32((u32)(0x7902f0u));
    /* 00403e6e: mov ecx, dword ptr [edx + 0x10d8] */ r_ecx = R32((u32)(r_edx+0x10d8u));
    /* 00403e74: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x403e79u); f_006436c0();
    /* 00403e79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403e7a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00403e7c: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00403e82: call 0x409400 */ r_esp -= 4; W32(r_esp, 0x403e87u); f_00409400();
    /* 00403e87: mov ecx, dword ptr [0x7902f8] */ r_ecx = R32((u32)(0x7902f8u));
    /* 00403e8d: call 0x401cb0 */ r_esp -= 4; W32(r_esp, 0x403e92u); f_00401cb0();
L_00403e92:; BB(0x00403e92);
    /* 00403e92: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00403e94: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403e97: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403e99: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403e9c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00403e9f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403ea1u); call_ind(t); }
    /* 00403ea1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403ea4: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 00403ea7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00403ea8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403eab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00403ead: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403eb0: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00403eb3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403eb5u); call_ind(t); }
    /* 00403eb5: jmp 0x403ef0 */ goto L_00403ef0;
L_00403eb7:; BB(0x00403eb7);
    /* 00403eb7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00403eb9: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00403ebf: call 0x408f10 */ r_esp -= 4; W32(r_esp, 0x403ec4u); f_00408f10();
    /* 00403ec4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403ec6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00403ec8: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 00403ece: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00403ed1: mov eax, dword ptr [0x7902ec] */ r_eax = R32((u32)(0x7902ecu));
    /* 00403ed6: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00403ed9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00403edb: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00403ede: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403ee0u); call_ind(t); }
    /* 00403ee0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00403ee2: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 00403ee8: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00403eeb: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x403ef0u); f_005fc420();
L_00403ef0:; BB(0x00403ef0);
    /* 00403ef0: mov esp, ebp */ r_esp = r_ebp;
    /* 00403ef2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00403ef3: ret  */ FN_RET(0x00403ca0); r_esp += 4; return;
}

void f_005fc2e0(void) /* BaccaratDealScript::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fc2e0);
    /* 005fc2e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fc2e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fc2e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc2e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fc2e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc2ea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fc2ed: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 005fc2f0: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fc2f4: jle 0x5fc307 */ if ((fZ||fS!=fO)) goto L_005fc307;
L_005fc2f6:; BB(0x005fc2f6);
    /* 005fc2f6: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005fc2f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc2fa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc2fd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fc2ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc302: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005fc305: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fc307u); call_ind(t); }
L_005fc307:; BB(0x005fc307);
    /* 005fc307: mov esp, ebp */ r_esp = r_ebp;
    /* 005fc309: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc30a: ret 8 */ FN_RET(0x005fc2e0); r_esp += 12; return;
}

void f_005fc310(void) /* BaccaratDealScript::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fc310);
    /* 005fc310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fc311: mov ebp, esp */ r_ebp = r_esp;
    /* 005fc313: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc314: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fc317: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005fc31a: imul eax, eax, 0x3c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005fc31d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc31e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fc321: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc322: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc325: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fc327: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc32a: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005fc32d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fc32fu); call_ind(t); }
    /* 005fc32f: mov esp, ebp */ r_esp = r_ebp;
    /* 005fc331: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc332: ret 8 */ FN_RET(0x005fc310); r_esp += 12; return;
}

void f_005fc3a0(void) /* BaccaratDealScript::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fc3a0);
    /* 005fc3a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fc3a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fc3a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc3a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fc3a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fc3aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc3ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc3ae: call 0x5fc2a0 */ r_esp -= 4; W32(r_esp, 0x5fc3b3u); f_005fc2a0();
    /* 005fc3b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc3b6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fc3b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc3bb: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005fc3be: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fc3c0u); call_ind(t); }
    /* 005fc3c0: mov esp, ebp */ r_esp = r_ebp;
    /* 005fc3c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc3c3: ret 4 */ FN_RET(0x005fc3a0); r_esp += 8; return;
}

void f_005fc4c0(void) /* BaccaratDealScript::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fc4c0);
    /* 005fc4c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fc4c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fc4c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc4c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fc4c7: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005fc4cd: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x5fc4d2u); f_005f3e50();
    /* 005fc4d2: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fc4d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc4d8: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 005fc4db: mov esp, ebp */ r_esp = r_ebp;
    /* 005fc4dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc4de: ret 4 */ FN_RET(0x005fc4c0); r_esp += 8; return;
}

