#include "protos.h"

void f_005d1db0(void) /* CasinoNavButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d1db0);
    /* 005d1db0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1db1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1db3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1db5: push 0x6a8e83 */ { u32 v = 0x6a8e83u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1dba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d1dc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1dc1: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d1dc4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d1dc9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d1dcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1dcc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005d1dcf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005d1dd5: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 005d1dd8: mov dword ptr [ebp - 0x38], 0xffffffff */ W32((u32)(r_ebp+0xffffffc8u), 0xffffffffu);
    /* 005d1ddf: mov dword ptr [ebp - 0x34], 0x30d46c */ W32((u32)(r_ebp+0xffffffccu), 0x30d46cu);
    /* 005d1de6: mov dword ptr [ebp - 0x30], 0x30d46d */ W32((u32)(r_ebp+0xffffffd0u), 0x30d46du);
    /* 005d1ded: mov dword ptr [ebp - 0x2c], 0x30d46e */ W32((u32)(r_ebp+0xffffffd4u), 0x30d46eu);
    /* 005d1df4: mov dword ptr [ebp - 0x28], 0x30d46f */ W32((u32)(r_ebp+0xffffffd8u), 0x30d46fu);
    /* 005d1dfb: mov dword ptr [ebp - 0x24], 0x30d470 */ W32((u32)(r_ebp+0xffffffdcu), 0x30d470u);
    /* 005d1e02: mov dword ptr [ebp - 0x20], 0x30d471 */ W32((u32)(r_ebp+0xffffffe0u), 0x30d471u);
    /* 005d1e09: mov dword ptr [ebp - 0x1c], 0x30d472 */ W32((u32)(r_ebp+0xffffffe4u), 0x30d472u);
    /* 005d1e10: mov dword ptr [ebp - 0x18], 0x30d473 */ W32((u32)(r_ebp+0xffffffe8u), 0x30d473u);
    /* 005d1e17: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005d1e1e: jmp 0x5d1e29 */ goto L_005d1e29;
L_005d1e20:; BB(0x005d1e20);
    /* 005d1e20: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d1e23: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d1e26: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005d1e29:; BB(0x005d1e29);
    /* 005d1e29: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d1e2c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d1e2f: cmp edx, dword ptr [ecx + 0x84] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x84u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d1e35: jge 0x5d1e50 */ if ((fS==fO)) goto L_005d1e50;
L_005d1e37:; BB(0x005d1e37);
    /* 005d1e37: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d1e3a: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d1e3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1e3e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1e40: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d1e46: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005d1e49: call 0x5fbcb0 */ r_esp -= 4; W32(r_esp, 0x5d1e4eu); f_005fbcb0();
    /* 005d1e4e: jmp 0x5d1e20 */ goto L_005d1e20;
L_005d1e50:; BB(0x005d1e50);
    /* 005d1e50: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1e55: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d1e5au); f_00686d82();
    /* 005d1e5a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1e5d: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005d1e60: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d1e67: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1e6b: je 0x5d1e7a */ if (fZ) goto L_005d1e7a;
L_005d1e6d:; BB(0x005d1e6d);
    /* 005d1e6d: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005d1e70: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5d1e75u); f_005eaaf0();
    /* 005d1e75: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005d1e78: jmp 0x5d1e81 */ goto L_005d1e81;
L_005d1e7a:; BB(0x005d1e7a);
    /* 005d1e7a: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_005d1e81:; BB(0x005d1e81);
    /* 005d1e81: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d1e84: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 005d1e87: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d1e8e: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d1e91: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d1e94: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d1e97: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d1e99: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d1e9c: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005d1e9f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d1ea1u); call_ind(t); }
    /* 005d1ea1: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d1ea4: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 005d1eaa: mov eax, dword ptr [ebp + edx*4 - 0x38] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffc8u));
    /* 005d1eae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1eaf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d1eb2: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5d1eb7u); f_005eaf00();
    /* 005d1eb7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d1eba: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5d1ebfu); f_005eb240();
    /* 005d1ebf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d1ec2: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d1ec5: mov dword ptr [ecx + 0x84], eax */ W32((u32)(r_ecx+0x84u), r_eax);
    /* 005d1ecb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d1ece: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 005d1ed1: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005d1ed4: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005d1ed7: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1edb: je 0x5d1ef0 */ if (fZ) goto L_005d1ef0;
L_005d1edd:; BB(0x005d1edd);
    /* 005d1edd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1edf: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005d1ee2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d1ee4: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005d1ee7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d1ee9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d1eebu); call_ind(t); }
    /* 005d1eeb: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005d1eee: jmp 0x5d1ef7 */ goto L_005d1ef7;
L_005d1ef0:; BB(0x005d1ef0);
    /* 005d1ef0: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_005d1ef7:; BB(0x005d1ef7);
    /* 005d1ef7: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005d1efe: jmp 0x5d1f09 */ goto L_005d1f09;
L_005d1f00:; BB(0x005d1f00);
    /* 005d1f00: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d1f03: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d1f06: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_005d1f09:; BB(0x005d1f09);
    /* 005d1f09: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d1f0c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d1f0f: cmp eax, dword ptr [edx + 0x84] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x84u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d1f15: jge 0x5d2027 */ if ((fS==fO)) goto L_005d2027;
L_005d1f1b:; BB(0x005d1f1b);
    /* 005d1f1b: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1f20: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d1f25u); f_00686d82();
    /* 005d1f25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1f28: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005d1f2b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005d1f32: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1f36: je 0x5d1f51 */ if (fZ) goto L_005d1f51;
L_005d1f38:; BB(0x005d1f38);
    /* 005d1f38: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005d1f3b: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x5d1f40u); f_00601a80();
    /* 005d1f40: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005d1f43: mov dword ptr [ecx], 0x6d3904 */ W32((u32)(r_ecx), 0x6d3904u);
    /* 005d1f49: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005d1f4c: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 005d1f4f: jmp 0x5d1f58 */ goto L_005d1f58;
L_005d1f51:; BB(0x005d1f51);
    /* 005d1f51: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_005d1f58:; BB(0x005d1f58);
    /* 005d1f58: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005d1f5b: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005d1f5e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d1f65: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1f67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1f69: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1f6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1f6d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1f6f: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1f74: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1f76: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1f78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1f7a: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d1f7d: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 005d1f83: mov eax, dword ptr [ebp + edx*4 - 0x38] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffc8u));
    /* 005d1f87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1f88: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d1f8b: add ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d1f8e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1f8f: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005d1f92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1f93: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d1f98: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005d1f9b: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5d1fa0u); f_005f9de0();
    /* 005d1fa0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d1fa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1fa4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d1fa7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1fa8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d1fab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1fac: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d1faf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1fb0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d1fb3: add edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d1fb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1fb7: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d1fbc: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005d1fbf: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5d1fc4u); f_005fb300();
    /* 005d1fc4: mov ecx, eax */ r_ecx = r_eax;
    /* 005d1fc6: call 0x6023d0 */ r_esp -= 4; W32(r_esp, 0x5d1fcbu); f_006023d0();
    /* 005d1fcb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d1fce: add ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d1fd1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1fd2: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005d1fd8: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005d1fdb: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5d1fe0u); f_005fb300();
    /* 005d1fe0: mov ecx, eax */ r_ecx = r_eax;
    /* 005d1fe2: call 0x602eb0 */ r_esp -= 4; W32(r_esp, 0x5d1fe7u); f_00602eb0();
    /* 005d1fe7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1fe9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d1fec: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d1fef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1ff0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d1ff6: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005d1ff9: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5d1ffeu); f_005fb300();
    /* 005d1ffe: mov ecx, eax */ r_ecx = r_eax;
    /* 005d2000: call 0x602790 */ r_esp -= 4; W32(r_esp, 0x5d2005u); f_00602790();
    /* 005d2005: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d2007: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d200a: add edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d200d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d200e: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d2013: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005d2016: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5d201bu); f_005fb300();
    /* 005d201b: mov ecx, eax */ r_ecx = r_eax;
    /* 005d201d: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x5d2022u); f_005eb700();
    /* 005d2022: jmp 0x5d1f00 */ goto L_005d1f00;
L_005d2027:; BB(0x005d2027);
    /* 005d2027: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d202a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d2031: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d2032: mov esp, ebp */ r_esp = r_ebp;
    /* 005d2034: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d2035: ret  */ FN_RET(0x005d1db0); r_esp += 4; return;
}

void f_005d4570(void) /* CasinoNavButton::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4570);
    /* 005d4570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4571: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4573: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d4576: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d4579: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d457c: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 005d4580: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4582: je 0x5d4589 */ if (fZ) goto L_005d4589;
L_005d4584:; BB(0x005d4584);
    /* 005d4584: jmp 0x5d4632 */ goto L_005d4632;
L_005d4589:; BB(0x005d4589);
    /* 005d4589: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d458c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d458d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d4590: call 0x602020 */ r_esp -= 4; W32(r_esp, 0x5d4595u); f_00602020();
    /* 005d4595: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d4598: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4599: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d459c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d459e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d45a1: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 005d45a7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d45a9u); call_ind(t); }
    /* 005d45a9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d45ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d45ae: je 0x5d45cd */ if (fZ) goto L_005d45cd;
L_005d45b0:; BB(0x005d45b0);
    /* 005d45b0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d45b3: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x5d45b8u); f_005f5400();
    /* 005d45b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d45b9: mov ecx, dword ptr [0x7947dc] */ r_ecx = R32((u32)(0x7947dcu));
    /* 005d45bf: call 0x5d3f30 */ r_esp -= 4; W32(r_esp, 0x5d45c4u); f_005d3f30();
    /* 005d45c4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d45c7: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
    /* 005d45cb: jmp 0x5d4632 */ goto L_005d4632;
L_005d45cd:; BB(0x005d45cd);
    /* 005d45cd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d45d4: jmp 0x5d45df */ goto L_005d45df;
L_005d45d6:; BB(0x005d45d6);
    /* 005d45d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d45d9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d45dc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005d45df:; BB(0x005d45df);
    /* 005d45df: mov ecx, dword ptr [0x7947dc] */ r_ecx = R32((u32)(0x7947dcu));
    /* 005d45e5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d45e8: cmp edx, dword ptr [ecx + 0x84] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x84u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d45ee: jge 0x5d4627 */ if ((fS==fO)) goto L_005d4627;
L_005d45f0:; BB(0x005d45f0);
    /* 005d45f0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d45f3: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d45f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d45f7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d45fd: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005d4600: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5d4605u); f_005fb300();
    /* 005d4605: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d4608: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d460b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d460c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d460f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d4611: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d4614: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 005d461a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d461cu); call_ind(t); }
    /* 005d461c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d461f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4621: je 0x5d4625 */ if (fZ) goto L_005d4625;
L_005d4623:; BB(0x005d4623);
    /* 005d4623: jmp 0x5d4632 */ goto L_005d4632;
L_005d4625:; BB(0x005d4625);
    /* 005d4625: jmp 0x5d45d6 */ goto L_005d45d6;
L_005d4627:; BB(0x005d4627);
    /* 005d4627: mov ecx, dword ptr [0x7947dc] */ r_ecx = R32((u32)(0x7947dcu));
    /* 005d462d: call 0x5d4200 */ r_esp -= 4; W32(r_esp, 0x5d4632u); f_005d4200();
L_005d4632:; BB(0x005d4632);
    /* 005d4632: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4634: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4635: ret 4 */ FN_RET(0x005d4570); r_esp += 8; return;
}

