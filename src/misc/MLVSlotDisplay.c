#include "protos.h"

void f_005c0a00(void) /* MLVSlotDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0a00);
    /* 005c0a00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0a01: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0a03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c0a05: push 0x6a8409 */ { u32 v = 0x6a8409u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0a0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c0a10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c0a11: sub esp, 0xd4 */ {  u32 a = r_esp; u32 b = 0xd4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c0a17: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c0a1c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c0a1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c0a1f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c0a22: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c0a28: mov dword ptr [ebp - 0xe0], ecx */ W32((u32)(r_ebp+0xffffff20u), r_ecx);
    /* 005c0a2e: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 005c0a34: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x5c0a39u); f_005e9e20();
    /* 005c0a39: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c0a40: mov eax, dword ptr [ebp - 0xe0] */ r_eax = R32((u32)(r_ebp+0xffffff20u));
    /* 005c0a46: mov dword ptr [eax], 0x6d1d3c */ W32((u32)(r_eax), 0x6d1d3cu);
    /* 005c0a4c: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 005c0a52: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c0a55: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 005c0a58: lea edx, [ebp - 0x15] */ r_edx = (u32)(r_ebp+0xffffffebu);
    /* 005c0a5b: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005c0a5e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0a60: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c0a63: call 0x5c6770 */ r_esp -= 4; W32(r_esp, 0x5c0a68u); f_005c6770();
    /* 005c0a68: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005c0a6c: mov eax, dword ptr [ebp - 0xe0] */ r_eax = R32((u32)(r_ebp+0xffffff20u));
    /* 005c0a72: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c0a75: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 005c0a7b: lea ecx, [ebp - 0x7d] */ r_ecx = (u32)(r_ebp+0xffffff83u);
    /* 005c0a7e: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 005c0a81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0a83: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 005c0a89: call 0x5c6810 */ r_esp -= 4; W32(r_esp, 0x5c0a8eu); f_005c6810();
    /* 005c0a8e: mov edx, dword ptr [ebp - 0xe0] */ r_edx = R32((u32)(r_ebp+0xffffff20u));
    /* 005c0a94: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 005c0a9b: mov eax, dword ptr [ebp - 0xe0] */ r_eax = R32((u32)(r_ebp+0xffffff20u));
    /* 005c0aa1: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 005c0aa8: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 005c0aae: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
    /* 005c0ab5: mov edx, dword ptr [ebp - 0xe0] */ r_edx = R32((u32)(r_ebp+0xffffff20u));
    /* 005c0abb: mov dword ptr [edx + 0x3c], 0 */ W32((u32)(r_edx+0x3cu), 0x0u);
    /* 005c0ac2: mov eax, dword ptr [ebp - 0xe0] */ r_eax = R32((u32)(r_ebp+0xffffff20u));
    /* 005c0ac8: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 005c0acf: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 005c0ad5: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
    /* 005c0adc: mov edx, dword ptr [ebp - 0xe0] */ r_edx = R32((u32)(r_ebp+0xffffff20u));
    /* 005c0ae2: mov dword ptr [edx + 0x48], 0 */ W32((u32)(r_edx+0x48u), 0x0u);
    /* 005c0ae9: mov eax, dword ptr [ebp - 0xe0] */ r_eax = R32((u32)(r_ebp+0xffffff20u));
    /* 005c0aef: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
    /* 005c0af6: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 005c0afc: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 005c0b03: mov edx, dword ptr [ebp - 0xe0] */ r_edx = R32((u32)(r_ebp+0xffffff20u));
    /* 005c0b09: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 005c0b10: mov eax, dword ptr [ebp - 0xe0] */ r_eax = R32((u32)(r_ebp+0xffffff20u));
    /* 005c0b16: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
    /* 005c0b1d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c0b24: mov eax, dword ptr [ebp - 0xe0] */ r_eax = R32((u32)(r_ebp+0xffffff20u));
    /* 005c0b2a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c0b2d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c0b34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c0b35: mov esp, ebp */ r_esp = r_ebp;
    /* 005c0b37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0b38: ret  */ FN_RET(0x005c0a00); r_esp += 4; return;
}

void f_005c0b40(void) /* MLVSlotDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c0b40);
    /* 005c0b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c0b41: mov ebp, esp */ r_ebp = r_esp;
    /* 005c0b43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c0b45: push 0x6a844e */ { u32 v = 0x6a844eu; r_esp -= 4; W32(r_esp, v); }
    /* 005c0b4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c0b50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c0b51: sub esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c0b57: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c0b5c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c0b5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c0b5f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c0b62: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c0b68: mov dword ptr [ebp - 0xa8], ecx */ W32((u32)(r_ebp+0xffffff58u), r_ecx);
    /* 005c0b6e: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 005c0b74: mov dword ptr [eax], 0x6d1d3c */ W32((u32)(r_eax), 0x6d1d3cu);
    /* 005c0b7a: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005c0b81: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005c0b88: jmp 0x5c0b93 */ goto L_005c0b93;
L_005c0b8a:; BB(0x005c0b8a);
    /* 005c0b8a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c0b8d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c0b90: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005c0b93:; BB(0x005c0b93);
    /* 005c0b93: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 005c0b99: add edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c0b9c: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 005c0b9f: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c0ba2: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0ba6: jne 0x5c0bb4 */ if (!fZ) goto L_005c0bb4;
L_005c0ba8:; BB(0x005c0ba8);
    /* 005c0ba8: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
    /* 005c0bb2: jmp 0x5c0bc9 */ goto L_005c0bc9;
L_005c0bb4:; BB(0x005c0bb4);
    /* 005c0bb4: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c0bb7: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c0bba: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005c0bbd: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c0bc0: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005c0bc3: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
L_005c0bc9:; BB(0x005c0bc9);
    /* 005c0bc9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c0bcc: cmp ecx, dword ptr [ebp - 0xac] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff54u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0bd2: jge 0x5c0d10 */ if ((fS==fO)) goto L_005c0d10;
L_005c0bd8:; BB(0x005c0bd8);
    /* 005c0bd8: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 005c0bde: add edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c0be1: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 005c0be4: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c0be7: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0beb: jne 0x5c0bf9 */ if (!fZ) goto L_005c0bf9;
L_005c0bed:; BB(0x005c0bed);
    /* 005c0bed: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
    /* 005c0bf7: jmp 0x5c0c0e */ goto L_005c0c0e;
L_005c0bf9:; BB(0x005c0bf9);
    /* 005c0bf9: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c0bfc: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c0bff: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005c0c02: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c0c05: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005c0c08: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
L_005c0c0e:; BB(0x005c0c0e);
    /* 005c0c0e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c0c11: cmp ecx, dword ptr [ebp - 0xb0] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff50u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c0c17: jb 0x5c0c1f */ if (fC) goto L_005c0c1f;
L_005c0c19:; BB(0x005c0c19);
    /* 005c0c19: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c0c1fu); call_ind(t); }
L_005c0c1f:; BB(0x005c0c1f);
    /* 005c0c1f: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c0c22: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c0c25: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c0c28: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0c2c: je 0x5c0cb4 */ if (fZ) goto L_005c0cb4;
L_005c0c32:; BB(0x005c0c32);
    /* 005c0c32: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 005c0c38: add edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c0c3b: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 005c0c3e: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005c0c41: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0c45: jne 0x5c0c53 */ if (!fZ) goto L_005c0c53;
L_005c0c47:; BB(0x005c0c47);
    /* 005c0c47: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
    /* 005c0c51: jmp 0x5c0c68 */ goto L_005c0c68;
L_005c0c53:; BB(0x005c0c53);
    /* 005c0c53: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005c0c56: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005c0c59: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005c0c5c: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c0c5f: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005c0c62: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
L_005c0c68:; BB(0x005c0c68);
    /* 005c0c68: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c0c6b: cmp ecx, dword ptr [ebp - 0xb4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff4cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c0c71: jb 0x5c0c79 */ if (fC) goto L_005c0c79;
L_005c0c73:; BB(0x005c0c73);
    /* 005c0c73: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c0c79u); call_ind(t); }
L_005c0c79:; BB(0x005c0c79);
    /* 005c0c79: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005c0c7c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c0c7f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c0c82: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 005c0c85: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005c0c88: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c0c8b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005c0c8e: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0c92: je 0x5c0caa */ if (fZ) goto L_005c0caa;
L_005c0c94:; BB(0x005c0c94);
    /* 005c0c94: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0c96: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c0c99: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c0c9b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c0c9e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c0ca0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c0ca2u); call_ind(t); }
    /* 005c0ca2: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 005c0ca8: jmp 0x5c0cb4 */ goto L_005c0cb4;
L_005c0caa:; BB(0x005c0caa);
    /* 005c0caa: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
L_005c0cb4:; BB(0x005c0cb4);
    /* 005c0cb4: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 005c0cba: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c0cbd: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 005c0cc0: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005c0cc3: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0cc7: jne 0x5c0cd5 */ if (!fZ) goto L_005c0cd5;
L_005c0cc9:; BB(0x005c0cc9);
    /* 005c0cc9: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
    /* 005c0cd3: jmp 0x5c0cea */ goto L_005c0cea;
L_005c0cd5:; BB(0x005c0cd5);
    /* 005c0cd5: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 005c0cd8: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005c0cdb: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005c0cde: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c0ce1: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005c0ce4: mov dword ptr [ebp - 0xbc], edx */ W32((u32)(r_ebp+0xffffff44u), r_edx);
L_005c0cea:; BB(0x005c0cea);
    /* 005c0cea: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c0ced: cmp eax, dword ptr [ebp - 0xbc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff44u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c0cf3: jb 0x5c0cfb */ if (fC) goto L_005c0cfb;
L_005c0cf5:; BB(0x005c0cf5);
    /* 005c0cf5: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c0cfbu); call_ind(t); }
L_005c0cfb:; BB(0x005c0cfb);
    /* 005c0cfb: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005c0cfe: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c0d01: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c0d04: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
    /* 005c0d0b: jmp 0x5c0b8a */ goto L_005c0b8a;
L_005c0d10:; BB(0x005c0d10);
    /* 005c0d10: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 005c0d16: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 005c0d19: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005c0d1c: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 005c0d22: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005c0d25: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005c0d28: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 005c0d2e: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005c0d31: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005c0d34: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 005c0d3a: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 005c0d3d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005c0d40: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 005c0d46: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 005c0d49: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005c0d4c: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005c0d53: jmp 0x5c0d5e */ goto L_005c0d5e;
L_005c0d55:; BB(0x005c0d55);
    /* 005c0d55: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c0d58: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c0d5b: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005c0d5e:; BB(0x005c0d5e);
    /* 005c0d5e: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0d62: jge 0x5c0da6 */ if ((fS==fO)) goto L_005c0da6;
L_005c0d64:; BB(0x005c0d64);
    /* 005c0d64: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c0d67: cmp dword ptr [ebp + eax*4 - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+r_eax*4+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0d6c: je 0x5c0da4 */ if (fZ) goto L_005c0da4;
L_005c0d6e:; BB(0x005c0d6e);
    /* 005c0d6e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c0d71: mov edx, dword ptr [ebp + ecx*4 - 0x24] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffdcu));
    /* 005c0d75: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005c0d78: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005c0d7b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005c0d7e: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0d82: je 0x5c0d9a */ if (fZ) goto L_005c0d9a;
L_005c0d84:; BB(0x005c0d84);
    /* 005c0d84: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0d86: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c0d89: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c0d8b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c0d8e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c0d90: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c0d92u); call_ind(t); }
    /* 005c0d92: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 005c0d98: jmp 0x5c0da4 */ goto L_005c0da4;
L_005c0d9a:; BB(0x005c0d9a);
    /* 005c0d9a: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_005c0da4:; BB(0x005c0da4);
    /* 005c0da4: jmp 0x5c0d55 */ goto L_005c0d55;
L_005c0da6:; BB(0x005c0da6);
    /* 005c0da6: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 005c0dac: cmp dword ptr [ecx + 0x4c], 0 */ {  u32 a = R32((u32)(r_ecx+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0db0: je 0x5c0dea */ if (fZ) goto L_005c0dea;
L_005c0db2:; BB(0x005c0db2);
    /* 005c0db2: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 005c0db8: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005c0dbb: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005c0dbe: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c0dc1: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005c0dc4: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0dc8: je 0x5c0de0 */ if (fZ) goto L_005c0de0;
L_005c0dca:; BB(0x005c0dca);
    /* 005c0dca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0dcc: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c0dcf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c0dd1: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c0dd4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c0dd6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c0dd8u); call_ind(t); }
    /* 005c0dd8: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 005c0dde: jmp 0x5c0dea */ goto L_005c0dea;
L_005c0de0:; BB(0x005c0de0);
    /* 005c0de0: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
L_005c0dea:; BB(0x005c0dea);
    /* 005c0dea: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 005c0df0: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0df4: je 0x5c0e2e */ if (fZ) goto L_005c0e2e;
L_005c0df6:; BB(0x005c0df6);
    /* 005c0df6: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 005c0dfc: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005c0dff: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 005c0e02: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c0e05: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005c0e08: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0e0c: je 0x5c0e24 */ if (fZ) goto L_005c0e24;
L_005c0e0e:; BB(0x005c0e0e);
    /* 005c0e0e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0e10: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c0e13: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c0e15: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c0e18: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c0e1a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c0e1cu); call_ind(t); }
    /* 005c0e1c: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 005c0e22: jmp 0x5c0e2e */ goto L_005c0e2e;
L_005c0e24:; BB(0x005c0e24);
    /* 005c0e24: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
L_005c0e2e:; BB(0x005c0e2e);
    /* 005c0e2e: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 005c0e34: cmp dword ptr [ecx + 0x14], 0 */ {  u32 a = R32((u32)(r_ecx+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0e38: je 0x5c0e72 */ if (fZ) goto L_005c0e72;
L_005c0e3a:; BB(0x005c0e3a);
    /* 005c0e3a: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 005c0e40: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005c0e43: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005c0e46: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c0e49: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005c0e4c: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0e50: je 0x5c0e68 */ if (fZ) goto L_005c0e68;
L_005c0e52:; BB(0x005c0e52);
    /* 005c0e52: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0e54: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005c0e57: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c0e59: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005c0e5c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c0e5e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c0e60u); call_ind(t); }
    /* 005c0e60: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 005c0e66: jmp 0x5c0e72 */ goto L_005c0e72;
L_005c0e68:; BB(0x005c0e68);
    /* 005c0e68: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
L_005c0e72:; BB(0x005c0e72);
    /* 005c0e72: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 005c0e78: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0e7c: je 0x5c0eb6 */ if (fZ) goto L_005c0eb6;
L_005c0e7e:; BB(0x005c0e7e);
    /* 005c0e7e: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 005c0e84: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c0e87: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 005c0e8a: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005c0e8d: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005c0e90: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0e94: je 0x5c0eac */ if (fZ) goto L_005c0eac;
L_005c0e96:; BB(0x005c0e96);
    /* 005c0e96: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c0e98: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c0e9b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c0e9d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c0ea0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c0ea2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c0ea4u); call_ind(t); }
    /* 005c0ea4: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 005c0eaa: jmp 0x5c0eb6 */ goto L_005c0eb6;
L_005c0eac:; BB(0x005c0eac);
    /* 005c0eac: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
L_005c0eb6:; BB(0x005c0eb6);
    /* 005c0eb6: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005c0eba: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 005c0ec0: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c0ec3: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 005c0ec9: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005c0ecf: call 0x5be450 */ r_esp -= 4; W32(r_esp, 0x5c0ed4u); f_005be450();
    /* 005c0ed4: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c0ed8: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 005c0ede: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c0ee1: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 005c0ee7: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005c0eed: call 0x5be450 */ r_esp -= 4; W32(r_esp, 0x5c0ef2u); f_005be450();
    /* 005c0ef2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c0ef9: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 005c0eff: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x5c0f04u); f_005e9e40();
    /* 005c0f04: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c0f07: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c0f0e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c0f0f: mov esp, ebp */ r_esp = r_ebp;
    /* 005c0f11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c0f12: ret  */ FN_RET(0x005c0b40); r_esp += 4; return;
}

void f_005c1550(void) /* MLVSlotDisplay::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c1550);
    /* 005c1550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c1551: mov ebp, esp */ r_ebp = r_esp;
    /* 005c1553: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1554: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c1557: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c155a: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c155e: je 0x5c1587 */ if (fZ) goto L_005c1587;
L_005c1560:; BB(0x005c1560);
    /* 005c1560: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1563: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c1565: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1568: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 005c156b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c156du); call_ind(t); }
    /* 005c156d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c1570: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1572: jne 0x5c1587 */ if (!fZ) goto L_005c1587;
L_005c1574:; BB(0x005c1574);
    /* 005c1574: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1577: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c157a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c157d: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 005c1580: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c1582: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c1585: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c1587u); call_ind(t); }
L_005c1587:; BB(0x005c1587);
    /* 005c1587: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c158a: cmp dword ptr [ecx + 0x14], 0 */ {  u32 a = R32((u32)(r_ecx+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c158e: je 0x5c15b7 */ if (fZ) goto L_005c15b7;
L_005c1590:; BB(0x005c1590);
    /* 005c1590: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1593: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c1595: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1598: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 005c159b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c159du); call_ind(t); }
    /* 005c159d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005c15a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c15a2: jne 0x5c15b7 */ if (!fZ) goto L_005c15b7;
L_005c15a4:; BB(0x005c15a4);
    /* 005c15a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c15a7: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005c15aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c15ad: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005c15b0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005c15b2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c15b5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c15b7u); call_ind(t); }
L_005c15b7:; BB(0x005c15b7);
    /* 005c15b7: mov esp, ebp */ r_esp = r_ebp;
    /* 005c15b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c15ba: ret  */ FN_RET(0x005c1550); r_esp += 4; return;
}

void f_005c15c0(void) /* MLVSlotDisplay::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c15c0);
    /* 005c15c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c15c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c15c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c15c5: push 0x6a852e */ { u32 v = 0x6a852eu; r_esp -= 4; W32(r_esp, v); }
    /* 005c15ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c15d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c15d1: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c15d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c15d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c15db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c15dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c15df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c15e5: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 005c15e8: mov byte ptr [ebp - 0x11], 1 */ W8((u32)(r_ebp+0xffffffefu), 0x1u);
    /* 005c15ec: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c15ef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c15f1: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c15f4: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 005c15f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c15f9u); call_ind(t); }
    /* 005c15f9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c15fc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c15fe: jne 0x5c162e */ if (!fZ) goto L_005c162e;
L_005c1600:; BB(0x005c1600);
    /* 005c1600: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c1603: cmp dword ptr [edx + 0x10], 0 */ {  u32 a = R32((u32)(r_edx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1607: je 0x5c162e */ if (fZ) goto L_005c162e;
L_005c1609:; BB(0x005c1609);
    /* 005c1609: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c160c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c160d: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c1610: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005c1613: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c1616: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005c1619: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005c161b: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005c161e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c1620u); call_ind(t); }
    /* 005c1620: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c1623: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1625: je 0x5c162e */ if (fZ) goto L_005c162e;
L_005c1627:; BB(0x005c1627);
    /* 005c1627: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005c1629: jmp 0x5c1a31 */ goto L_005c1a31;
L_005c162e:; BB(0x005c162e);
    /* 005c162e: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c1631: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c1633: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c1636: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 005c1639: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c163bu); call_ind(t); }
    /* 005c163b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005c163e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1640: jne 0x5c1672 */ if (!fZ) goto L_005c1672;
L_005c1642:; BB(0x005c1642);
    /* 005c1642: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c1645: cmp dword ptr [ecx + 0x14], 0 */ {  u32 a = R32((u32)(r_ecx+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1649: je 0x5c1672 */ if (fZ) goto L_005c1672;
L_005c164b:; BB(0x005c164b);
    /* 005c164b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c164e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c164f: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c1652: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005c1655: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c1658: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005c165b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c165d: mov ecx, eax */ r_ecx = r_eax;
    /* 005c165f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c1662: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c1664u); call_ind(t); }
    /* 005c1664: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c1667: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1669: je 0x5c1672 */ if (fZ) goto L_005c1672;
L_005c166b:; BB(0x005c166b);
    /* 005c166b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005c166d: jmp 0x5c1a31 */ goto L_005c1a31;
L_005c1672:; BB(0x005c1672);
    /* 005c1672: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c1675: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 005c1678: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c167b: sub eax, 0x54 */ {  u32 a = r_eax; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c167e: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005c1681: cmp dword ptr [ebp - 0x50], 0xe */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c1685: ja 0x5c19a6 */ if ((!fC&&!fZ)) goto L_005c19a6;
L_005c168b:; BB(0x005c168b);
    /* 005c168b: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c168e: movzx edx, byte ptr [ecx + 0x5c1a64] */ r_edx = (u32)R8((u32)(r_ecx+0x5c1a64u));
    /* 005c1695: jmp dword ptr [edx*4 + 0x5c1a44] */ { u32 t = R32((u32)(r_edx*4+0x5c1a44u)); switch (t) { case 0x5c1886u: goto L_005c1886; case 0x5c1876u: goto L_005c1876; case 0x5c169cu: goto L_005c169c; case 0x5c17c1u: goto L_005c17c1; case 0x5c1768u: goto L_005c1768; case 0x5c171cu: goto L_005c171c; case 0x5c18d8u: goto L_005c18d8; case 0x5c19a6u: goto L_005c19a6; default: UNSUP(0x005c1695, "jump table entry is not a known target"); } }
L_005c169c:; BB(0x005c169c);
    /* 005c169c: push 0x6d1d70 */ { u32 v = 0x6d1d70u; r_esp -= 4; W32(r_esp, v); }
    /* 005c16a1: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x5c16a6u); f_0062fde0();
    /* 005c16a6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c16a9: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c16ac: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c16af: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005c16b2: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005c16b5: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c16b8: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c16bb: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005c16be: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c16c1: call 0x5c9140 */ r_esp -= 4; W32(r_esp, 0x5c16c6u); f_005c9140();
    /* 005c16c6: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c16c9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c16cc: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005c16cf: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c16d2: cmp ecx, dword ptr [ebp - 0x30] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c16d5: jle 0x5c1713 */ if ((fZ||fS!=fO)) goto L_005c1713;
L_005c16d7:; BB(0x005c16d7);
    /* 005c16d7: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c16da: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c16dd: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c16e0: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005c16e3: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c16e6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c16e9: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005c16ec: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c16ef: call 0x5c9140 */ r_esp -= 4; W32(r_esp, 0x5c16f4u); f_005c9140();
    /* 005c16f4: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c16f7: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c16fa: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 005c16fd: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c1700: sub eax, dword ptr [ebp - 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c1703: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c1704: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 005c1707: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1708: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c170b: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005c170e: call 0x5d0db0 */ r_esp -= 4; W32(r_esp, 0x5c1713u); f_005d0db0();
L_005c1713:; BB(0x005c1713);
    /* 005c1713: mov byte ptr [ebp - 0x11], 0 */ W8((u32)(r_ebp+0xffffffefu), 0x0u);
    /* 005c1717: jmp 0x5c19aa */ goto L_005c19aa;
L_005c171c:; BB(0x005c171c);
    /* 005c171c: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c171f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c1721: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c1724: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 005c1727: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c1729u); call_ind(t); }
    /* 005c1729: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c172c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c172e: je 0x5c1744 */ if (fZ) goto L_005c1744;
L_005c1730:; BB(0x005c1730);
    /* 005c1730: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c1733: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c1735: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c1738: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 005c173b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c173du); call_ind(t); }
    /* 005c173d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005c1740: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1742: je 0x5c1749 */ if (fZ) goto L_005c1749;
L_005c1744:; BB(0x005c1744);
    /* 005c1744: jmp 0x5c19aa */ goto L_005c19aa;
L_005c1749:; BB(0x005c1749);
    /* 005c1749: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c174b: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c174e: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005c1751: call 0x5c8dc0 */ r_esp -= 4; W32(r_esp, 0x5c1756u); f_005c8dc0();
    /* 005c1756: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c1759: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c175b: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c175e: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 005c1761: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c1763u); call_ind(t); }
    /* 005c1763: jmp 0x5c19aa */ goto L_005c19aa;
L_005c1768:; BB(0x005c1768);
    /* 005c1768: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c176b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c176d: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c1770: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 005c1773: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c1775u); call_ind(t); }
    /* 005c1775: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c1778: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c177a: je 0x5c1790 */ if (fZ) goto L_005c1790;
L_005c177c:; BB(0x005c177c);
    /* 005c177c: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c177f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c1781: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c1784: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 005c1787: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c1789u); call_ind(t); }
    /* 005c1789: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005c178c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c178e: je 0x5c1795 */ if (fZ) goto L_005c1795;
L_005c1790:; BB(0x005c1790);
    /* 005c1790: jmp 0x5c19aa */ goto L_005c19aa;
L_005c1795:; BB(0x005c1795);
    /* 005c1795: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1797: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c179a: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005c179d: call 0x5c8f00 */ r_esp -= 4; W32(r_esp, 0x5c17a2u); f_005c8f00();
    /* 005c17a2: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c17a5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c17a7: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c17aa: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 005c17ad: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c17afu); call_ind(t); }
    /* 005c17af: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c17b2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c17b4: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c17b7: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005c17ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c17bcu); call_ind(t); }
    /* 005c17bc: jmp 0x5c19aa */ goto L_005c19aa;
L_005c17c1:; BB(0x005c17c1);
    /* 005c17c1: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c17c4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c17c6: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c17c9: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 005c17cc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c17ceu); call_ind(t); }
    /* 005c17ce: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c17d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c17d3: je 0x5c17e9 */ if (fZ) goto L_005c17e9;
L_005c17d5:; BB(0x005c17d5);
    /* 005c17d5: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c17d8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c17da: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c17dd: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 005c17e0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c17e2u); call_ind(t); }
    /* 005c17e2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005c17e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c17e7: je 0x5c17ee */ if (fZ) goto L_005c17ee;
L_005c17e9:; BB(0x005c17e9);
    /* 005c17e9: jmp 0x5c19aa */ goto L_005c19aa;
L_005c17ee:; BB(0x005c17ee);
    /* 005c17ee: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
    /* 005c17f5: jmp 0x5c1800 */ goto L_005c1800;
L_005c17f7:; BB(0x005c17f7);
    /* 005c17f7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c17fa: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c17fd: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_005c1800:; BB(0x005c1800);
    /* 005c1800: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c1803: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c1806: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005c1809: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005c180c: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 005c180f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c1812: cmp eax, dword ptr [ebp - 0x44] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffbcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c1815: jg 0x5c182a */ if ((!fZ&&fS==fO)) goto L_005c182a;
L_005c1817:; BB(0x005c1817);
    /* 005c1817: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1819: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c181c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c181d: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c1820: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005c1823: call 0x5c8e20 */ r_esp -= 4; W32(r_esp, 0x5c1828u); f_005c8e20();
    /* 005c1828: jmp 0x5c17f7 */ goto L_005c17f7;
L_005c182a:; BB(0x005c182a);
    /* 005c182a: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c182d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c1830: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005c1833: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005c1836: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005c1839: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005c183c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c183d: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c1840: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005c1843: call 0x5c8ed0 */ r_esp -= 4; W32(r_esp, 0x5c1848u); f_005c8ed0();
    /* 005c1848: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c184b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c184d: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c1850: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c1853: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c1855u); call_ind(t); }
    /* 005c1855: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c1858: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c185a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c185d: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005c1860: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c1862u); call_ind(t); }
    /* 005c1862: push 0x5e */ { u32 v = 0x5eu; r_esp -= 4; W32(r_esp, v); }
    /* 005c1864: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c1867: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c1869: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c186c: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005c186f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c1871u); call_ind(t); }
    /* 005c1871: jmp 0x5c19aa */ goto L_005c19aa;
L_005c1876:; BB(0x005c1876);
    /* 005c1876: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005c187c: call 0x5dc2e0 */ r_esp -= 4; W32(r_esp, 0x5c1881u); f_005dc2e0();
    /* 005c1881: jmp 0x5c19aa */ goto L_005c19aa;
L_005c1886:; BB(0x005c1886);
    /* 005c1886: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1888: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1889: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005c188f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005c1892: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1893: fld1  */ FPUSH(1.0);
    /* 005c1895: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005c1898: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c189a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005c189c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c189e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c18a0: push 0x18a88 */ { u32 v = 0x18a88u; r_esp -= 4; W32(r_esp, v); }
    /* 005c18a5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005c18ab: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c18ad: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005c18b3: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005c18b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c18bbu); call_ind(t); }
    /* 005c18bb: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005c18c1: call 0x5de170 */ r_esp -= 4; W32(r_esp, 0x5c18c6u); f_005de170();
    /* 005c18c6: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c18c9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c18cb: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c18ce: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c18d1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c18d3u); call_ind(t); }
    /* 005c18d3: jmp 0x5c19aa */ goto L_005c19aa;
L_005c18d8:; BB(0x005c18d8);
    /* 005c18d8: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c18db: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c18dd: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c18e0: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005c18e3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c18e5u); call_ind(t); }
    /* 005c18e5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c18e8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c18ea: jne 0x5c19a4 */ if (!fZ) goto L_005c19a4;
L_005c18f0:; BB(0x005c18f0);
    /* 005c18f0: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c18f3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c18f5: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c18f8: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 005c18fb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c18fdu); call_ind(t); }
    /* 005c18fd: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005c1900: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c1902: je 0x5c19a4 */ if (fZ) goto L_005c19a4;
L_005c1908:; BB(0x005c1908);
    /* 005c1908: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c190b: cmp dword ptr [ecx + 0x14], 0 */ {  u32 a = R32((u32)(r_ecx+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c190f: jne 0x5c19a4 */ if (!fZ) goto L_005c19a4;
L_005c1915:; BB(0x005c1915);
    /* 005c1915: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c1918: cmp dword ptr [edx + 0xc], 0 */ {  u32 a = R32((u32)(r_edx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c191c: je 0x5c19a4 */ if (fZ) goto L_005c19a4;
L_005c1922:; BB(0x005c1922);
    /* 005c1922: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1924: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c1929u); f_00686d82();
    /* 005c1929: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c192c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005c192f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c1936: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c193a: je 0x5c1949 */ if (fZ) goto L_005c1949;
L_005c193c:; BB(0x005c193c);
    /* 005c193c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c193f: call 0x5b9020 */ r_esp -= 4; W32(r_esp, 0x5c1944u); f_005b9020();
    /* 005c1944: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005c1947: jmp 0x5c1950 */ goto L_005c1950;
L_005c1949:; BB(0x005c1949);
    /* 005c1949: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_005c1950:; BB(0x005c1950);
    /* 005c1950: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005c1953: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c1956: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c195d: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c1960: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c1963: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 005c1966: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c1969: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005c196c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c196d: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c1970: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005c1973: call 0x5b9350 */ r_esp -= 4; W32(r_esp, 0x5c1978u); f_005b9350();
    /* 005c1978: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c197b: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005c197e: call 0x5b94f0 */ r_esp -= 4; W32(r_esp, 0x5c1983u); f_005b94f0();
    /* 005c1983: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c1986: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1987: push 0x5c0f20 */ { u32 v = 0x5c0f20u; r_esp -= 4; W32(r_esp, v); }
    /* 005c198c: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c198f: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005c1992: call 0x5b94d0 */ r_esp -= 4; W32(r_esp, 0x5c1997u); f_005b94d0();
    /* 005c1997: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c199a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c199c: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c199f: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005c19a2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c19a4u); call_ind(t); }
L_005c19a4:; BB(0x005c19a4);
    /* 005c19a4: jmp 0x5c19aa */ goto L_005c19aa;
L_005c19a6:; BB(0x005c19a6);
    /* 005c19a6: mov byte ptr [ebp - 0x11], 0 */ W8((u32)(r_ebp+0xffffffefu), 0x0u);
L_005c19aa:; BB(0x005c19aa);
    /* 005c19aa: cmp dword ptr [ebp + 8], 0x3158e3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3158e3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c19b1: jl 0x5c1a2e */ if ((fS!=fO)) goto L_005c1a2e;
L_005c19b3:; BB(0x005c19b3);
    /* 005c19b3: cmp dword ptr [ebp + 8], 0x315900 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x315900u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c19ba: jg 0x5c1a2e */ if ((!fZ&&fS==fO)) goto L_005c1a2e;
L_005c19bc:; BB(0x005c19bc);
    /* 005c19bc: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c19bf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c19c1: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c19c4: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 005c19c7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c19c9u); call_ind(t); }
    /* 005c19c9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c19cc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c19ce: je 0x5c1a2e */ if (fZ) goto L_005c1a2e;
L_005c19d0:; BB(0x005c19d0);
    /* 005c19d0: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c19d3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c19d5: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c19d8: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 005c19db: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c19ddu); call_ind(t); }
    /* 005c19dd: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005c19e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c19e2: jne 0x5c1a2e */ if (!fZ) goto L_005c1a2e;
L_005c19e4:; BB(0x005c19e4);
    /* 005c19e4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c19e7: sub ecx, 0x3158e2 */ {  u32 a = r_ecx; u32 b = 0x3158e2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c19ed: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005c19f0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c19f2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c19f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c19f6: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c19f9: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c19fc: call 0x5c8e20 */ r_esp -= 4; W32(r_esp, 0x5c1a01u); f_005c8e20();
    /* 005c1a01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1a03: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c1a06: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c1a09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1a0a: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c1a0d: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005c1a10: call 0x5c8e20 */ r_esp -= 4; W32(r_esp, 0x5c1a15u); f_005c8e20();
    /* 005c1a15: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c1a18: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c1a1a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c1a1d: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005c1a20: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c1a22u); call_ind(t); }
    /* 005c1a22: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c1a25: call 0x5c1b60 */ r_esp -= 4; W32(r_esp, 0x5c1a2au); f_005c1b60();
    /* 005c1a2a: mov byte ptr [ebp - 0x11], 1 */ W8((u32)(r_ebp+0xffffffefu), 0x1u);
L_005c1a2e:; BB(0x005c1a2e);
    /* 005c1a2e: mov al, byte ptr [ebp - 0x11] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffefu))) & 0xffu);
L_005c1a31:; BB(0x005c1a31);
    /* 005c1a31: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c1a34: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c1a3b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c1a3c: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1a3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1a3f: ret 4 */ FN_RET(0x005c15c0); r_esp += 8; return;
}

void f_005c1b10(void) /* MLVSlotDisplay::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c1b10);
    /* 005c1b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c1b11: mov ebp, esp */ r_ebp = r_esp;
    /* 005c1b13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1b14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c1b17: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1b1a: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 005c1b21: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1b24: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 005c1b2b: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1b2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1b2e: ret  */ FN_RET(0x005c1b10); r_esp += 4; return;
}

