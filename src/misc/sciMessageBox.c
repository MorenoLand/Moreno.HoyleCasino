#include "protos.h"

void f_00650bb0(void) /* sciMessageBox::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00650bb0);
    /* 00650bb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00650bb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00650bb3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00650bb6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00650bb9: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650bbd: je 0x650bc7 */ if (fZ) goto L_00650bc7;
L_00650bbf:; BB(0x00650bbf);
    /* 00650bbf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00650bc2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00650bc5: jmp 0x650bd3 */ goto L_00650bd3;
L_00650bc7:; BB(0x00650bc7);
    /* 00650bc7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00650bcd: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00650bd0: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00650bd3:; BB(0x00650bd3);
    /* 00650bd3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00650bd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650bd7: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00650bda: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00650bdb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00650bde: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x650be3u); f_005f71f0();
    /* 00650be3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00650be6: mov dword ptr [edx], 0x6dd1f4 */ W32((u32)(r_edx), 0x6dd1f4u);
    /* 00650bec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00650bef: mov byte ptr [eax + 0x1bc], 0 */ W8((u32)(r_eax+0x1bcu), 0x0u);
    /* 00650bf6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00650bf9: mov esp, ebp */ r_esp = r_ebp;
    /* 00650bfb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00650bfc: ret 8 */ FN_RET(0x00650bb0); r_esp += 12; return;
}

void f_00650c20(void) /* sciMessageBox::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00650c20);
    /* 00650c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00650c21: mov ebp, esp */ r_ebp = r_esp;
    /* 00650c23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00650c25: push 0x6ac30b */ { u32 v = 0x6ac30bu; r_esp -= 4; W32(r_esp, v); }
    /* 00650c2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00650c30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650c31: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00650c34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00650c35: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00650c3a: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00650c3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650c3d: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00650c40: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00650c46: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 00650c49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650c4b: push 0x75ee04 */ { u32 v = 0x75ee04u; r_esp -= 4; W32(r_esp, v); }
    /* 00650c50: push 0x75edec */ { u32 v = 0x75edecu; r_esp -= 4; W32(r_esp, v); }
    /* 00650c55: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650c57: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00650c5c: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00650c5f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00650c60: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x650c65u); f_00686ede();
    /* 00650c65: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00650c68: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00650c6b: cmp dword ptr [ebp + 0x14], -1 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650c6f: je 0x650c81 */ if (fZ) goto L_00650c81;
L_00650c71:; BB(0x00650c71);
    /* 00650c71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650c73: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00650c76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00650c77: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00650c7a: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x650c7fu); f_005f83d0();
    /* 00650c7f: jmp 0x650c90 */ goto L_00650c90;
L_00650c81:; BB(0x00650c81);
    /* 00650c81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650c83: push 0x30d4e0 */ { u32 v = 0x30d4e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650c88: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00650c8b: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x650c90u); f_005f83d0();
L_00650c90:; BB(0x00650c90);
    /* 00650c90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650c92: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650c94: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00650c97: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x650c9cu); f_005f7340();
    /* 00650c9c: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00650c9f: mov byte ptr [eax + 0x11c], 1 */ W8((u32)(r_eax+0x11cu), 0x1u);
    /* 00650ca6: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00650ca9: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x650caeu); f_005f85d0();
    /* 00650cae: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00650cb3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x650cb8u); f_00686d82();
    /* 00650cb8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00650cbb: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00650cbe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00650cc5: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650cc9: je 0x650cd8 */ if (fZ) goto L_00650cd8;
L_00650ccb:; BB(0x00650ccb);
    /* 00650ccb: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00650cce: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x650cd3u); f_005eaaf0();
    /* 00650cd3: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00650cd6: jmp 0x650cdf */ goto L_00650cdf;
L_00650cd8:; BB(0x00650cd8);
    /* 00650cd8: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_00650cdf:; BB(0x00650cdf);
    /* 00650cdf: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00650ce2: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00650ce5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00650cec: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00650cef: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00650cf2: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00650cf5: mov ecx, dword ptr [eax + 0x114] */ r_ecx = R32((u32)(r_eax+0x114u));
    /* 00650cfb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00650cfc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00650cff: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x650d04u); f_005eaf00();
    /* 00650d04: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00650d07: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00650d09: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00650d0c: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00650d0f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x650d11u); call_ind(t); }
    /* 00650d11: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00650d14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650d15: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00650d18: call 0x5ebf80 */ r_esp -= 4; W32(r_esp, 0x650d1du); f_005ebf80();
    /* 00650d1d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00650d20: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00650d23: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00650d26: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00650d29: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650d2d: je 0x650d42 */ if (fZ) goto L_00650d42;
L_00650d2f:; BB(0x00650d2f);
    /* 00650d2f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00650d31: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00650d34: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00650d36: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00650d39: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00650d3b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x650d3du); call_ind(t); }
    /* 00650d3d: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00650d40: jmp 0x650d49 */ goto L_00650d49;
L_00650d42:; BB(0x00650d42);
    /* 00650d42: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_00650d49:; BB(0x00650d49);
    /* 00650d49: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00650d4c: sub ecx, dword ptr [ebp - 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00650d4f: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00650d52: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00650d55: sub edx, dword ptr [ebp - 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00650d58: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00650d5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00650d5d: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00650d5f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00650d61: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00650d63: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00650d65: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00650d67: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00650d6a: sub eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00650d6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650d6e: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00650d70: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00650d73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00650d74: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650d76: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650d78: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00650d7b: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x650d80u); f_005fa5b0();
    /* 00650d80: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00650d82: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00650d84: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00650d86: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00650d88: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00650d8a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00650d8d: sub edx, 0x3c */ {  u32 a = r_edx; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00650d90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00650d91: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00650d94: sub eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00650d97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650d98: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00650d9a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00650d9d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00650d9e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00650da0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650da2: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00650da5: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x650daau); f_005fa5b0();
    /* 00650daa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650dac: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00650dae: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00650db0: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00650db2: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00650db4: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00650db9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00650dbb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650dbd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650dbf: push 0x30d4e5 */ { u32 v = 0x30d4e5u; r_esp -= 4; W32(r_esp, v); }
    /* 00650dc4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650dc6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650dc8: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00650dcb: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x650dd0u); f_005f9de0();
    /* 00650dd0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00650dd3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650dd5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00650dd7: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00650dd9: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00650ddb: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00650ddd: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00650de2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00650de4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650de6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650de8: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 00650ded: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00650def: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650df1: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00650df4: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x650df9u); f_005f9de0();
    /* 00650df9: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00650dfc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650dfe: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00650e00: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00650e02: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00650e04: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00650e06: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00650e0b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00650e0d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650e0f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650e11: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 00650e16: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00650e18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00650e1a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00650e1d: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x650e22u); f_005f9de0();
    /* 00650e22: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00650e25: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00650e28: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00650e2a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00650e2d: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00650e30: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x650e32u); call_ind(t); }
    /* 00650e32: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00650e35: and eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00650e38: je 0x650fae */ if (fZ) goto L_00650fae;
L_00650e3e:; BB(0x00650e3e);
    /* 00650e3e: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00650e41: mov dword ptr [ecx + 0x1c4], 6 */ W32((u32)(r_ecx+0x1c4u), 0x6u);
    /* 00650e4b: push 0x6b3bac */ { u32 v = 0x6b3bacu; r_esp -= 4; W32(r_esp, v); }
    /* 00650e50: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x650e55u); f_00630f40();
    /* 00650e55: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00650e58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650e59: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00650e5c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00650e5e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00650e61: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 00650e67: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x650e69u); call_ind(t); }
    /* 00650e69: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00650e6b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00650e6e: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x650e73u); f_006026f0();
    /* 00650e73: push 0x79 */ { u32 v = 0x79u; r_esp -= 4; W32(r_esp, v); }
    /* 00650e75: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00650e78: call 0x602740 */ r_esp -= 4; W32(r_esp, 0x650e7du); f_00602740();
    /* 00650e7d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00650e7f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00650e82: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00650e84: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00650e87: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00650e8a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x650e8cu); call_ind(t); }
    /* 00650e8c: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00650e8f: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00650e92: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00650e95: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x650e9au); f_005f5590();
    /* 00650e9a: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00650e9c: sub esi, 0x12 */ {  u32 a = r_esi; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00650e9f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00650ea0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00650ea3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00650ea5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00650ea8: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 00650eab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x650eadu); call_ind(t); }
    /* 00650ead: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00650eb0: mov dword ptr [ecx + 0x1c8], 7 */ W32((u32)(r_ecx+0x1c8u), 0x7u);
    /* 00650eba: push 0x6b3b9c */ { u32 v = 0x6b3b9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00650ebf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x650ec4u); f_00630f40();
    /* 00650ec4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00650ec7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650ec8: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00650ecb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00650ecd: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00650ed0: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 00650ed6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x650ed8u); call_ind(t); }
    /* 00650ed8: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00650eda: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00650edd: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x650ee2u); f_006026f0();
    /* 00650ee2: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 00650ee4: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00650ee7: call 0x602740 */ r_esp -= 4; W32(r_esp, 0x650eecu); f_00602740();
    /* 00650eec: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00650eef: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00650ef0: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00650ef5: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00650ef5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00650ef5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00650ef7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00650efa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650efb: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00650efe: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00650f00: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00650f03: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 00650f06: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x650f08u); call_ind(t); }
    /* 00650f08: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00650f0b: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00650f0e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00650f11: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x650f16u); f_005f5590();
    /* 00650f16: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00650f18: sub esi, 0x12 */ {  u32 a = r_esi; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00650f1b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00650f1c: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00650f1f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00650f21: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00650f24: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 00650f27: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x650f29u); call_ind(t); }
    /* 00650f29: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00650f2c: mov dword ptr [ecx + 0x1cc], 2 */ W32((u32)(r_ecx+0x1ccu), 0x2u);
    /* 00650f36: push 0x6c2318 */ { u32 v = 0x6c2318u; r_esp -= 4; W32(r_esp, v); }
    /* 00650f3b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x650f40u); f_00630f40();
    /* 00650f40: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00650f43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650f44: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00650f47: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00650f49: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00650f4c: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 00650f52: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x650f54u); call_ind(t); }
    /* 00650f54: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00650f56: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00650f59: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x650f5eu); f_006026f0();
    /* 00650f5e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00650f61: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00650f62: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00650f67: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00650f67, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00650f67, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00650f69: lea edx, [eax + eax + 1] */ r_edx = (u32)(r_eax+r_eax+0x1u);
    /* 00650f6d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00650f6e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00650f71: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00650f73: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00650f76: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00650f79: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x650f7bu); call_ind(t); }
    /* 00650f7b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00650f7e: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00650f81: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00650f84: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x650f89u); f_005f5590();
    /* 00650f89: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00650f8b: sub esi, 0x12 */ {  u32 a = r_esi; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00650f8e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00650f8f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00650f92: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00650f94: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00650f97: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 00650f9a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x650f9cu); call_ind(t); }
    /* 00650f9c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00650f9f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00650fa1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00650fa4: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00650fa7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x650fa9u); call_ind(t); }
    /* 00650fa9: jmp 0x651258 */ goto L_00651258;
L_00650fae:; BB(0x00650fae);
    /* 00650fae: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00650fb1: and ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00650fb4: je 0x6510c7 */ if (fZ) goto L_006510c7;
L_00650fba:; BB(0x00650fba);
    /* 00650fba: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00650fbd: mov dword ptr [edx + 0x1c4], 6 */ W32((u32)(r_edx+0x1c4u), 0x6u);
    /* 00650fc7: push 0x6b3bac */ { u32 v = 0x6b3bacu; r_esp -= 4; W32(r_esp, v); }
    /* 00650fcc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x650fd1u); f_00630f40();
    /* 00650fd1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00650fd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650fd5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00650fd8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00650fda: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00650fdd: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00650fe3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x650fe5u); call_ind(t); }
    /* 00650fe5: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00650fe7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00650fea: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x650fefu); f_006026f0();
    /* 00650fef: push 0x79 */ { u32 v = 0x79u; r_esp -= 4; W32(r_esp, v); }
    /* 00650ff1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00650ff4: call 0x602740 */ r_esp -= 4; W32(r_esp, 0x650ff9u); f_00602740();
    /* 00650ff9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00650ffc: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x651001u); f_005f5550();
    /* 00651001: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00651004: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00651006: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00651009: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x65100eu); f_005f5550();
    /* 0065100e: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00651010: sub esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00651013: mov eax, esi */ r_eax = r_esi;
    /* 00651015: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00651016: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00651018: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0065101a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065101b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065101e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00651020: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651023: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00651026: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x651028u); call_ind(t); }
    /* 00651028: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065102b: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0065102e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651031: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x651036u); f_005f5590();
    /* 00651036: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00651038: sub esi, 0x12 */ {  u32 a = r_esi; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0065103b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065103c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065103f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00651041: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651044: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 00651047: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x651049u); call_ind(t); }
    /* 00651049: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0065104c: mov dword ptr [ecx + 0x1c8], 7 */ W32((u32)(r_ecx+0x1c8u), 0x7u);
    /* 00651056: push 0x6b3b9c */ { u32 v = 0x6b3b9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065105b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x651060u); f_00630f40();
    /* 00651060: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00651063: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651064: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00651067: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00651069: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0065106c: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 00651072: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x651074u); call_ind(t); }
    /* 00651074: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00651076: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00651079: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x65107eu); f_006026f0();
    /* 0065107e: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 00651080: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00651083: call 0x602740 */ r_esp -= 4; W32(r_esp, 0x651088u); f_00602740();
    /* 00651088: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0065108b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0065108c: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0065108e: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00651090: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00651093: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651094: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00651097: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00651099: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0065109c: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 0065109f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6510a1u); call_ind(t); }
    /* 006510a1: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006510a4: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006510a7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006510aa: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x6510afu); f_005f5590();
    /* 006510af: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006510b1: sub esi, 0x12 */ {  u32 a = r_esi; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006510b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006510b5: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006510b8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006510ba: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006510bd: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 006510c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6510c2u); call_ind(t); }
    /* 006510c2: jmp 0x651258 */ goto L_00651258;
L_006510c7:; BB(0x006510c7);
    /* 006510c7: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006510ca: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006510cd: je 0x6511d6 */ if (fZ) goto L_006511d6;
L_006510d3:; BB(0x006510d3);
    /* 006510d3: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006510d6: mov dword ptr [edx + 0x1c4], 1 */ W32((u32)(r_edx+0x1c4u), 0x1u);
    /* 006510e0: push 0x6c1428 */ { u32 v = 0x6c1428u; r_esp -= 4; W32(r_esp, v); }
    /* 006510e5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6510eau); f_00630f40();
    /* 006510ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006510ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006510ee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006510f1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006510f3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006510f6: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 006510fc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6510feu); call_ind(t); }
    /* 006510fe: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00651100: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651103: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x651108u); f_006026f0();
    /* 00651108: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0065110a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065110d: call 0x602740 */ r_esp -= 4; W32(r_esp, 0x651112u); f_00602740();
    /* 00651112: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651115: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x65111au); f_005f5550();
    /* 0065111a: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 0065111d: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0065111f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00651122: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x651127u); f_005f5550();
    /* 00651127: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00651129: sub esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0065112c: mov eax, esi */ r_eax = r_esi;
    /* 0065112e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0065112f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00651131: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00651133: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00651134: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651137: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00651139: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065113c: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 0065113f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x651141u); call_ind(t); }
    /* 00651141: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00651144: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00651147: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065114a: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x65114fu); f_005f5590();
    /* 0065114f: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00651151: sub esi, 0x12 */ {  u32 a = r_esi; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00651154: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00651155: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651158: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065115a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065115d: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 00651160: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x651162u); call_ind(t); }
    /* 00651162: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00651165: mov dword ptr [ecx + 0x1c8], 2 */ W32((u32)(r_ecx+0x1c8u), 0x2u);
    /* 0065116f: push 0x6c2318 */ { u32 v = 0x6c2318u; r_esp -= 4; W32(r_esp, v); }
    /* 00651174: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x651179u); f_00630f40();
    /* 00651179: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065117c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065117d: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00651180: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00651182: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00651185: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 0065118b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65118du); call_ind(t); }
    /* 0065118d: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0065118f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00651192: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x651197u); f_006026f0();
    /* 00651197: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0065119a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0065119b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0065119d: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0065119f: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006511a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006511a3: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 006511a6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006511a8: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006511ab: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 006511ae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6511b0u); call_ind(t); }
    /* 006511b0: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006511b3: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006511b6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006511b9: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x6511beu); f_005f5590();
    /* 006511be: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006511c0: sub esi, 0x12 */ {  u32 a = r_esi; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006511c3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006511c4: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006511c7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006511c9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006511cc: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 006511cf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6511d1u); call_ind(t); }
    /* 006511d1: jmp 0x651258 */ goto L_00651258;
L_006511d6:; BB(0x006511d6);
    /* 006511d6: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006511d9: mov dword ptr [ecx + 0x1c4], 1 */ W32((u32)(r_ecx+0x1c4u), 0x1u);
    /* 006511e3: push 0x6c1428 */ { u32 v = 0x6c1428u; r_esp -= 4; W32(r_esp, v); }
    /* 006511e8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6511edu); f_00630f40();
    /* 006511ed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006511f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006511f1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006511f4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006511f6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006511f9: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 006511ff: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x651201u); call_ind(t); }
    /* 00651201: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00651203: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651206: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x65120bu); f_006026f0();
    /* 0065120b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0065120d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651210: call 0x602740 */ r_esp -= 4; W32(r_esp, 0x651215u); f_00602740();
    /* 00651215: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00651218: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0065121b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065121e: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x651223u); f_005f5590();
    /* 00651223: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00651225: sub esi, 0x12 */ {  u32 a = r_esi; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00651228: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00651229: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065122c: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x651231u); f_005f5550();
    /* 00651231: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00651234: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00651236: mov eax, ecx */ r_eax = r_ecx;
    /* 00651238: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00651239: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0065123b: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0065123d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065123e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651241: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00651243: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00651246: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00651249: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65124bu); call_ind(t); }
    /* 0065124b: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0065124e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00651250: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00651253: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00651256: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x651258u); call_ind(t); }
L_00651258:; BB(0x00651258);
    /* 00651258: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0065125b: movzx edx, byte ptr [ecx + 0x1bc] */ r_edx = (u32)R8((u32)(r_ecx+0x1bcu));
    /* 00651262: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00651264: jne 0x651282 */ if (!fZ) goto L_00651282;
L_00651266:; BB(0x00651266);
    /* 00651266: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0065126b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065126d: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00651273: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00651276: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x651278u); call_ind(t); }
    /* 00651278: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065127b: call 0x613e70 */ r_esp -= 4; W32(r_esp, 0x651280u); f_00613e70();
    /* 00651280: jmp 0x651258 */ goto L_00651258;
L_00651282:; BB(0x00651282);
    /* 00651282: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00651285: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x65128au); f_005f87d0();
    /* 0065128a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065128c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065128f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00651296: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00651297: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00651298: mov esp, ebp */ r_esp = r_ebp;
    /* 0065129a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065129b: ret 0x10 */ FN_RET(0x00650c20); r_esp += 20; return;
}

void f_006512a0(void) /* sciMessageBox::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006512a0);
    /* 006512a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006512a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006512a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006512a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006512a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006512ac: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006512af: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006512b3: je 0x6512c3 */ if (fZ) goto L_006512c3;
L_006512b5:; BB(0x006512b5);
    /* 006512b5: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006512b9: je 0x6512d7 */ if (fZ) goto L_006512d7;
L_006512bb:; BB(0x006512bb);
    /* 006512bb: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006512bf: je 0x6512eb */ if (fZ) goto L_006512eb;
L_006512c1:; BB(0x006512c1);
    /* 006512c1: jmp 0x6512fd */ goto L_006512fd;
L_006512c3:; BB(0x006512c3);
    /* 006512c3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006512c6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006512c9: mov eax, dword ptr [edx + 0x1c4] */ r_eax = R32((u32)(r_edx+0x1c4u));
    /* 006512cf: mov dword ptr [ecx + 0x1c0], eax */ W32((u32)(r_ecx+0x1c0u), r_eax);
    /* 006512d5: jmp 0x6512fd */ goto L_006512fd;
L_006512d7:; BB(0x006512d7);
    /* 006512d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006512da: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006512dd: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 006512e3: mov dword ptr [ecx + 0x1c0], eax */ W32((u32)(r_ecx+0x1c0u), r_eax);
    /* 006512e9: jmp 0x6512fd */ goto L_006512fd;
L_006512eb:; BB(0x006512eb);
    /* 006512eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006512ee: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006512f1: mov eax, dword ptr [edx + 0x1cc] */ r_eax = R32((u32)(r_edx+0x1ccu));
    /* 006512f7: mov dword ptr [ecx + 0x1c0], eax */ W32((u32)(r_ecx+0x1c0u), r_eax);
L_006512fd:; BB(0x006512fd);
    /* 006512fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00651300: mov byte ptr [ecx + 0x1bc], 1 */ W8((u32)(r_ecx+0x1bcu), 0x1u);
    /* 00651307: mov esp, ebp */ r_esp = r_ebp;
    /* 00651309: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065130a: ret 4 */ FN_RET(0x006512a0); r_esp += 8; return;
}

