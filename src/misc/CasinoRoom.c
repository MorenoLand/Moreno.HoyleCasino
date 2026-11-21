#include "protos.h"

void f_004252e0(void) /* CasinoRoom::vfunc161 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004252e0);
    /* 004252e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004252e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004252e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004252e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004252e7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004252e9: mov esp, ebp */ r_esp = r_ebp;
    /* 004252eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004252ec: ret 0x1c */ FN_RET(0x004252e0); r_esp += 32; return;
}

void f_005d7b60(void) /* CasinoRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7b60);
    /* 005d7b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7b61: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7b63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7b64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7b67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7b6a: call 0x64cbe0 */ r_esp -= 4; W32(r_esp, 0x5d7b6fu); f_0064cbe0();
    /* 005d7b6f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7b72: mov dword ptr [eax], 0x6d3f7c */ W32((u32)(r_eax), 0x6d3f7cu);
    /* 005d7b78: call dword ptr [0x6b20bc] */ { u32 t = R32((u32)(0x6b20bcu)); r_esp -= 4; W32(r_esp, 0x5d7b7eu); call_ind(t); }
    /* 005d7b7e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7b81: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 005d7b84: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7b87: mov dword ptr [edx + 0x68], 0 */ W32((u32)(r_edx+0x68u), 0x0u);
    /* 005d7b8e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7b91: mov byte ptr [eax + 0x7c], 0 */ W8((u32)(r_eax+0x7cu), 0x0u);
    /* 005d7b95: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7b98: mov dword ptr [ecx + 0x6c], 0 */ W32((u32)(r_ecx+0x6cu), 0x0u);
    /* 005d7b9f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7ba2: mov dword ptr [edx + 0x70], 0 */ W32((u32)(r_edx+0x70u), 0x0u);
    /* 005d7ba9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7bac: mov dword ptr [eax + 0x74], 0 */ W32((u32)(r_eax+0x74u), 0x0u);
    /* 005d7bb3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7bb6: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
    /* 005d7bbd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7bc0: mov dword ptr [edx + 0x5c], 0 */ W32((u32)(r_edx+0x5cu), 0x0u);
    /* 005d7bc7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7bca: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7bcc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7bcd: ret  */ FN_RET(0x005d7b60); r_esp += 4; return;
}

void f_005d7bd0(void) /* CasinoRoom::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7bd0);
    /* 005d7bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7bd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d7bd5: push 0x6a9138 */ { u32 v = 0x6a9138u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7bda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d7be0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7be1: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d7be4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d7be9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d7beb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7bec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005d7bef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005d7bf5: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 005d7bf8: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d7bfb: mov dword ptr [eax], 0x6d3f7c */ W32((u32)(r_eax), 0x6d3f7cu);
    /* 005d7c01: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d7c08: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005d7c0f: jmp 0x5d7c1a */ goto L_005d7c1a;
L_005d7c11:; BB(0x005d7c11);
    /* 005d7c11: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d7c14: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d7c17: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005d7c1a:; BB(0x005d7c1a);
    /* 005d7c1a: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005d7c20: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d7c22: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d7c28: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 005d7c2e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d7c30u); call_ind(t); }
    /* 005d7c30: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d7c33: jge 0x5d7caf */ if ((fS==fO)) goto L_005d7caf;
L_005d7c35:; BB(0x005d7c35);
    /* 005d7c35: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d7c38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7c39: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d7c3eu); f_005dcb00();
    /* 005d7c3e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d7c41: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005d7c44: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d7c47: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d7c4cu); f_0063aac0();
    /* 005d7c4c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005d7c4e: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 005d7c51: cmp dword ptr [ebp - 0x4c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7c55: je 0x5d7c73 */ if (fZ) goto L_005d7c73;
L_005d7c57:; BB(0x005d7c57);
    /* 005d7c57: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005d7c5a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d7c5fu); f_0063aac0();
    /* 005d7c5f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d7c61: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 005d7c64: cmp dword ptr [ebp - 0x50], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7c68: je 0x5d7c73 */ if (fZ) goto L_005d7c73;
L_005d7c6a:; BB(0x005d7c6a);
    /* 005d7c6a: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 005d7c71: jmp 0x5d7c7a */ goto L_005d7c7a;
L_005d7c73:; BB(0x005d7c73);
    /* 005d7c73: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
L_005d7c7a:; BB(0x005d7c7a);
    /* 005d7c7a: movzx eax, byte ptr [ebp - 0x5c] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffa4u));
    /* 005d7c7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7c80: je 0x5d7caa */ if (fZ) goto L_005d7caa;
L_005d7c82:; BB(0x005d7c82);
    /* 005d7c82: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d7c85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7c86: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d7c8bu); f_005dcb00();
    /* 005d7c8b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d7c8e: cmp dword ptr [eax + 0x4b4], 0 */ {  u32 a = R32((u32)(r_eax+0x4b4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7c95: je 0x5d7caa */ if (fZ) goto L_005d7caa;
L_005d7c97:; BB(0x005d7c97);
    /* 005d7c97: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d7c9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7c9b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d7ca0u); f_005dcb00();
    /* 005d7ca0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d7ca3: mov ecx, eax */ r_ecx = r_eax;
    /* 005d7ca5: call 0x5d74b0 */ r_esp -= 4; W32(r_esp, 0x5d7caau); f_005d74b0();
L_005d7caa:; BB(0x005d7caa);
    /* 005d7caa: jmp 0x5d7c11 */ goto L_005d7c11;
L_005d7caf:; BB(0x005d7caf);
    /* 005d7caf: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d7cb2: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5d7cb7u); f_005da7b0();
    /* 005d7cb7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d7cba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7cbc: je 0x5d7ccb */ if (fZ) goto L_005d7ccb;
L_005d7cbe:; BB(0x005d7cbe);
    /* 005d7cbe: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005d7cc4: mov byte ptr [ecx + 0x4ee8], 0 */ W8((u32)(r_ecx+0x4ee8u), 0x0u);
L_005d7ccb:; BB(0x005d7ccb);
    /* 005d7ccb: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d7cce: call 0x5dbf30 */ r_esp -= 4; W32(r_esp, 0x5d7cd3u); f_005dbf30();
    /* 005d7cd3: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d7cd6: call 0x5db890 */ r_esp -= 4; W32(r_esp, 0x5d7cdbu); f_005db890();
    /* 005d7cdb: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d7cde: call 0x5db9b0 */ r_esp -= 4; W32(r_esp, 0x5d7ce3u); f_005db9b0();
    /* 005d7ce3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7ce5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d7ce7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7ce9: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d7cec: call 0x5d8a20 */ r_esp -= 4; W32(r_esp, 0x5d7cf1u); f_005d8a20();
    /* 005d7cf1: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005d7cf8: jmp 0x5d7d03 */ goto L_005d7d03;
L_005d7cfa:; BB(0x005d7cfa);
    /* 005d7cfa: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d7cfd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d7d00: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005d7d03:; BB(0x005d7d03);
    /* 005d7d03: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d7d08: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d7d0a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d7d10: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 005d7d16: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d7d18u); call_ind(t); }
    /* 005d7d18: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d7d1b: jge 0x5d7dc1 */ if ((fS==fO)) goto L_005d7dc1;
L_005d7d21:; BB(0x005d7d21);
    /* 005d7d21: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d7d24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7d25: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d7d2au); f_005dcb00();
    /* 005d7d2a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d7d2d: cmp dword ptr [eax + 0x49c], 0 */ {  u32 a = R32((u32)(r_eax+0x49cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7d34: je 0x5d7da9 */ if (fZ) goto L_005d7da9;
L_005d7d36:; BB(0x005d7d36);
    /* 005d7d36: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d7d39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7d3a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d7d3fu); f_005dcb00();
    /* 005d7d3f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d7d42: mov eax, dword ptr [eax + 0x49c] */ r_eax = R32((u32)(r_eax+0x49cu));
    /* 005d7d48: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005d7d4b: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005d7d4e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d7d50: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005d7d53: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005d7d56: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d7d58u); call_ind(t); }
    /* 005d7d58: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d7d5b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7d5c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d7d61u); f_005dcb00();
    /* 005d7d61: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d7d64: mov edx, dword ptr [eax + 0x49c] */ r_edx = R32((u32)(r_eax+0x49cu));
    /* 005d7d6a: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005d7d6d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d7d70: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d7d73: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7d77: je 0x5d7d8c */ if (fZ) goto L_005d7d8c;
L_005d7d79:; BB(0x005d7d79);
    /* 005d7d79: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7d7b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d7d7e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d7d80: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d7d83: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d7d85: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d7d87u); call_ind(t); }
    /* 005d7d87: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 005d7d8a: jmp 0x5d7d93 */ goto L_005d7d93;
L_005d7d8c:; BB(0x005d7d8c);
    /* 005d7d8c: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_005d7d93:; BB(0x005d7d93);
    /* 005d7d93: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d7d96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7d97: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d7d9cu); f_005dcb00();
    /* 005d7d9c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d7d9f: mov dword ptr [eax + 0x49c], 0 */ W32((u32)(r_eax+0x49cu), 0x0u);
L_005d7da9:; BB(0x005d7da9);
    /* 005d7da9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d7dac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7dad: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d7db2u); f_005dcb00();
    /* 005d7db2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d7db5: mov ecx, eax */ r_ecx = r_eax;
    /* 005d7db7: call 0x5d55d0 */ r_esp -= 4; W32(r_esp, 0x5d7dbcu); f_005d55d0();
    /* 005d7dbc: jmp 0x5d7cfa */ goto L_005d7cfa;
L_005d7dc1:; BB(0x005d7dc1);
    /* 005d7dc1: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d7dc4: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 005d7dc7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d7dca: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d7dcd: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005d7dd0: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7dd4: je 0x5d7de9 */ if (fZ) goto L_005d7de9;
L_005d7dd6:; BB(0x005d7dd6);
    /* 005d7dd6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7dd8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d7ddb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d7ddd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d7de0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d7de2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d7de4u); call_ind(t); }
    /* 005d7de4: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005d7de7: jmp 0x5d7df0 */ goto L_005d7df0;
L_005d7de9:; BB(0x005d7de9);
    /* 005d7de9: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_005d7df0:; BB(0x005d7df0);
    /* 005d7df0: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d7df3: cmp dword ptr [ecx + 0x70], 0 */ {  u32 a = R32((u32)(r_ecx+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7df7: je 0x5d7e28 */ if (fZ) goto L_005d7e28;
L_005d7df9:; BB(0x005d7df9);
    /* 005d7df9: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d7dfc: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005d7dff: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d7e02: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d7e05: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005d7e08: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7e0c: je 0x5d7e21 */ if (fZ) goto L_005d7e21;
L_005d7e0e:; BB(0x005d7e0e);
    /* 005d7e0e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7e10: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d7e13: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d7e15: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d7e18: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d7e1a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d7e1cu); call_ind(t); }
    /* 005d7e1c: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 005d7e1f: jmp 0x5d7e28 */ goto L_005d7e28;
L_005d7e21:; BB(0x005d7e21);
    /* 005d7e21: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_005d7e28:; BB(0x005d7e28);
    /* 005d7e28: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d7e2b: cmp dword ptr [eax + 0x74], 0 */ {  u32 a = R32((u32)(r_eax+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7e2f: je 0x5d7e60 */ if (fZ) goto L_005d7e60;
L_005d7e31:; BB(0x005d7e31);
    /* 005d7e31: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d7e34: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 005d7e37: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 005d7e3a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d7e3d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d7e40: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7e44: je 0x5d7e59 */ if (fZ) goto L_005d7e59;
L_005d7e46:; BB(0x005d7e46);
    /* 005d7e46: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7e48: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d7e4b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d7e4d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d7e50: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d7e52: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d7e54u); call_ind(t); }
    /* 005d7e54: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005d7e57: jmp 0x5d7e60 */ goto L_005d7e60;
L_005d7e59:; BB(0x005d7e59);
    /* 005d7e59: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_005d7e60:; BB(0x005d7e60);
    /* 005d7e60: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d7e63: cmp dword ptr [ecx + 0x78], 0 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7e67: je 0x5d7e98 */ if (fZ) goto L_005d7e98;
L_005d7e69:; BB(0x005d7e69);
    /* 005d7e69: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d7e6c: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005d7e6f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005d7e72: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d7e75: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005d7e78: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7e7c: je 0x5d7e91 */ if (fZ) goto L_005d7e91;
L_005d7e7e:; BB(0x005d7e7e);
    /* 005d7e7e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7e80: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d7e83: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d7e85: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d7e88: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d7e8a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d7e8cu); call_ind(t); }
    /* 005d7e8c: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005d7e8f: jmp 0x5d7e98 */ goto L_005d7e98;
L_005d7e91:; BB(0x005d7e91);
    /* 005d7e91: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_005d7e98:; BB(0x005d7e98);
    /* 005d7e98: cmp dword ptr [0x793578], 0 */ {  u32 a = R32((u32)(0x793578u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7e9f: je 0x5d7ed9 */ if (fZ) goto L_005d7ed9;
L_005d7ea1:; BB(0x005d7ea1);
    /* 005d7ea1: mov eax, dword ptr [0x793578] */ r_eax = R32((u32)(0x793578u));
    /* 005d7ea6: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005d7ea9: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005d7eac: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005d7eaf: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7eb3: je 0x5d7ec8 */ if (fZ) goto L_005d7ec8;
L_005d7eb5:; BB(0x005d7eb5);
    /* 005d7eb5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7eb7: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d7eba: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d7ebc: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d7ebf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d7ec1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d7ec3u); call_ind(t); }
    /* 005d7ec3: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 005d7ec6: jmp 0x5d7ecf */ goto L_005d7ecf;
L_005d7ec8:; BB(0x005d7ec8);
    /* 005d7ec8: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_005d7ecf:; BB(0x005d7ecf);
    /* 005d7ecf: mov dword ptr [0x793578], 0 */ W32((u32)(0x793578u), 0x0u);
L_005d7ed9:; BB(0x005d7ed9);
    /* 005d7ed9: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d7edc: cmp dword ptr [eax + 0x5c], 0 */ {  u32 a = R32((u32)(r_eax+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7ee0: je 0x5d7f1b */ if (fZ) goto L_005d7f1b;
L_005d7ee2:; BB(0x005d7ee2);
    /* 005d7ee2: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d7ee5: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 005d7ee8: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 005d7eeb: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005d7eee: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005d7ef1: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7ef5: je 0x5d7f0a */ if (fZ) goto L_005d7f0a;
L_005d7ef7:; BB(0x005d7ef7);
    /* 005d7ef7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7ef9: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005d7efc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d7efe: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005d7f01: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d7f03: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d7f05u); call_ind(t); }
    /* 005d7f05: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 005d7f08: jmp 0x5d7f11 */ goto L_005d7f11;
L_005d7f0a:; BB(0x005d7f0a);
    /* 005d7f0a: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_005d7f11:; BB(0x005d7f11);
    /* 005d7f11: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d7f14: mov dword ptr [ecx + 0x5c], 0 */ W32((u32)(r_ecx+0x5cu), 0x0u);
L_005d7f1b:; BB(0x005d7f1b);
    /* 005d7f1b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d7f22: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d7f25: call 0x64cc80 */ r_esp -= 4; W32(r_esp, 0x5d7f2au); f_0064cc80();
    /* 005d7f2a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d7f2d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d7f34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d7f35: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7f37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7f38: ret  */ FN_RET(0x005d7bd0); r_esp += 4; return;
}

void f_005d7f40(void) /* CasinoRoom::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7f40);
    /* 005d7f40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7f41: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7f43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7f44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7f47: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d7f4a: cmp dword ptr [eax + 0x18], 3 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7f4e: je 0x5d7f5c */ if (fZ) goto L_005d7f5c;
L_005d7f50:; BB(0x005d7f50);
    /* 005d7f50: call dword ptr [0x6b20bc] */ { u32 t = R32((u32)(0x6b20bcu)); r_esp -= 4; W32(r_esp, 0x5d7f56u); call_ind(t); }
    /* 005d7f56: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7f59: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
L_005d7f5c:; BB(0x005d7f5c);
    /* 005d7f5c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d7f5f: cmp dword ptr [edx + 0x18], 1 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7f63: je 0x5d7f6e */ if (fZ) goto L_005d7f6e;
L_005d7f65:; BB(0x005d7f65);
    /* 005d7f65: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d7f68: cmp dword ptr [eax + 0x18], 4 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7f6c: jne 0x5d7f93 */ if (!fZ) goto L_005d7f93;
L_005d7f6e:; BB(0x005d7f6e);
    /* 005d7f6e: cmp dword ptr [0x793578], 0 */ {  u32 a = R32((u32)(0x793578u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7f75: je 0x5d7f93 */ if (fZ) goto L_005d7f93;
L_005d7f77:; BB(0x005d7f77);
    /* 005d7f77: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005d7f7d: movzx edx, byte ptr [ecx + 0x1bd] */ r_edx = (u32)R8((u32)(r_ecx+0x1bdu));
    /* 005d7f84: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7f86: je 0x5d7f93 */ if (fZ) goto L_005d7f93;
L_005d7f88:; BB(0x005d7f88);
    /* 005d7f88: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005d7f8e: call 0x57c240 */ r_esp -= 4; W32(r_esp, 0x5d7f93u); f_0057c240();
L_005d7f93:; BB(0x005d7f93);
    /* 005d7f93: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d7f96: cmp dword ptr [eax + 0x18], 4 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7f9a: jne 0x5d8004 */ if (!fZ) goto L_005d8004;
L_005d7f9c:; BB(0x005d7f9c);
    /* 005d7f9c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d7f9f: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 005d7fa3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7fa4: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x5d7faau); call_ind(t); }
    /* 005d7faa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d7fad: cmp eax, 0x6c */ {  u32 a = r_eax; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7fb0: jne 0x5d8004 */ if (!fZ) goto L_005d8004;
L_005d7fb2:; BB(0x005d7fb2);
    /* 005d7fb2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d7fb5: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 005d7fb9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7fbb: jne 0x5d8004 */ if (!fZ) goto L_005d8004;
L_005d7fbd:; BB(0x005d7fbd);
    /* 005d7fbd: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d7fc3: call 0x5f3fe0 */ r_esp -= 4; W32(r_esp, 0x5d7fc8u); f_005f3fe0();
    /* 005d7fc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7fca: jne 0x5d8004 */ if (!fZ) goto L_005d8004;
L_005d7fcc:; BB(0x005d7fcc);
    /* 005d7fcc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7fce: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7fd3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7fd6: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5d7fdbu); f_005f2a60();
    /* 005d7fdb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7fdd: je 0x5d8004 */ if (fZ) goto L_005d8004;
L_005d7fdf:; BB(0x005d7fdf);
    /* 005d7fdf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7fe1: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7fe6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7fe9: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5d7feeu); f_005f2a60();
    /* 005d7fee: mov ecx, eax */ r_ecx = r_eax;
    /* 005d7ff0: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x5d7ff5u); f_006026d0();
    /* 005d7ff5: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005d7ff8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7ffa: je 0x5d8004 */ if (fZ) goto L_005d8004;
L_005d7ffc:; BB(0x005d7ffc);
    /* 005d7ffc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7fff: call 0x5dc1c0 */ r_esp -= 4; W32(r_esp, 0x5d8004u); f_005dc1c0();
L_005d8004:; BB(0x005d8004);
    /* 005d8004: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d8007: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8008: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d800b: call 0x650360 */ r_esp -= 4; W32(r_esp, 0x5d8010u); f_00650360();
    /* 005d8010: mov esp, ebp */ r_esp = r_ebp;
    /* 005d8012: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8013: ret 4 */ FN_RET(0x005d7f40); r_esp += 8; return;
}

void f_005d8230(void) /* CasinoRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8230);
    /* 005d8230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8231: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8233: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d8235: push 0x6a9169 */ { u32 v = 0x6a9169u; r_esp -= 4; W32(r_esp, v); }
    /* 005d823a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d8240: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8241: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d8244: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d8249: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d824b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d824c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005d824f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005d8255: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005d8258: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d825b: call 0x64ce60 */ r_esp -= 4; W32(r_esp, 0x5d8260u); f_0064ce60();
    /* 005d8260: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d8262: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d8267: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d8269: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d826f: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 005d8275: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d8277u); call_ind(t); }
    /* 005d8277: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d827a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d827c: je 0x5d8286 */ if (fZ) goto L_005d8286;
L_005d827e:; BB(0x005d827e);
    /* 005d827e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d8281: call 0x5d9960 */ r_esp -= 4; W32(r_esp, 0x5d8286u); f_005d9960();
L_005d8286:; BB(0x005d8286);
    /* 005d8286: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 005d828b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d8290u); f_00686d82();
    /* 005d8290: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d8293: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d8296: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d829d: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d82a1: je 0x5d82bc */ if (fZ) goto L_005d82bc;
L_005d82a3:; BB(0x005d82a3);
    /* 005d82a3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d82a6: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x5d82abu); f_005f5bf0();
    /* 005d82ab: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d82ae: mov dword ptr [edx], 0x6d427c */ W32((u32)(r_edx), 0x6d427cu);
    /* 005d82b4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d82b7: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005d82ba: jmp 0x5d82c3 */ goto L_005d82c3;
L_005d82bc:; BB(0x005d82bc);
    /* 005d82bc: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005d82c3:; BB(0x005d82c3);
    /* 005d82c3: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d82c6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005d82c9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d82d0: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d82d3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d82d6: mov dword ptr [edx + 0x70], eax */ W32((u32)(r_edx+0x70u), r_eax);
    /* 005d82d9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d82db: push 0x270f */ { u32 v = 0x270fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d82e0: push 0x1c2 */ { u32 v = 0x1c2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d82e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d82e7: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d82ea: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d82ed: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5d82f2u); f_0060c9a0();
    /* 005d82f2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d82f4: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d82f7: setl cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 005d82fa: add ecx, 0x30d414 */ {  u32 a = r_ecx; u32 b = 0x30d414u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d8300: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8301: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d8304: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 005d8307: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5d830cu); f_005eae80();
    /* 005d830c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d830e: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d8313: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d8315: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d831b: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 005d8321: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d8323u); call_ind(t); }
    /* 005d8323: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d8326: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8328: jne 0x5d8341 */ if (!fZ) goto L_005d8341;
L_005d832a:; BB(0x005d832a);
    /* 005d832a: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d832d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d832f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d8332: mov edx, dword ptr [eax + 0x268] */ r_edx = R32((u32)(r_eax+0x268u));
    /* 005d8338: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d833au); call_ind(t); }
    /* 005d833a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d833d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d833f: je 0x5d8356 */ if (fZ) goto L_005d8356;
L_005d8341:; BB(0x005d8341);
    /* 005d8341: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d8344: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 005d8347: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005d834a: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 005d834d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005d834f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005d8352: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d8354u); call_ind(t); }
    /* 005d8354: jmp 0x5d8369 */ goto L_005d8369;
L_005d8356:; BB(0x005d8356);
    /* 005d8356: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d8359: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 005d835c: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005d835f: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 005d8362: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005d8364: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005d8367: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d8369u); call_ind(t); }
L_005d8369:; BB(0x005d8369);
    /* 005d8369: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d836c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d836e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d8371: mov eax, dword ptr [edx + 0x268] */ r_eax = R32((u32)(r_edx+0x268u));
    /* 005d8377: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d8379u); call_ind(t); }
    /* 005d8379: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d837c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d837e: je 0x5d83cc */ if (fZ) goto L_005d83cc;
L_005d8380:; BB(0x005d8380);
    /* 005d8380: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8382: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d8387u); f_00686d82();
    /* 005d8387: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d838a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d838d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005d8394: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8398: je 0x5d83a9 */ if (fZ) goto L_005d83a9;
L_005d839a:; BB(0x005d839a);
    /* 005d839a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d839c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d839f: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x5d83a4u); f_006010a0();
    /* 005d83a4: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005d83a7: jmp 0x5d83b0 */ goto L_005d83b0;
L_005d83a9:; BB(0x005d83a9);
    /* 005d83a9: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005d83b0:; BB(0x005d83b0);
    /* 005d83b0: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d83b3: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005d83b6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d83bd: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d83c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d83c1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d83c4: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 005d83c7: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5d83ccu); f_005f5d50();
L_005d83cc:; BB(0x005d83cc);
    /* 005d83cc: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d83cf: call 0x5da810 */ r_esp -= 4; W32(r_esp, 0x5d83d4u); f_005da810();
    /* 005d83d4: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005d83d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d83d9: jne 0x5d83f9 */ if (!fZ) goto L_005d83f9;
L_005d83db:; BB(0x005d83db);
    /* 005d83db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d83dd: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d83e2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d83e4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d83ea: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 005d83f0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d83f2u); call_ind(t); }
    /* 005d83f2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d83f5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d83f7: je 0x5d8406 */ if (fZ) goto L_005d8406;
L_005d83f9:; BB(0x005d83f9);
    /* 005d83f9: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 005d83fe: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d8401: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x5d8406u); f_005f2ba0();
L_005d8406:; BB(0x005d8406);
    /* 005d8406: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d8409: call 0x5da810 */ r_esp -= 4; W32(r_esp, 0x5d840eu); f_005da810();
    /* 005d840e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005d8411: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8413: jne 0x5d846d */ if (!fZ) goto L_005d846d;
L_005d8415:; BB(0x005d8415);
    /* 005d8415: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d8417: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d841c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d841e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d8424: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 005d842a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d842cu); call_ind(t); }
    /* 005d842c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d842f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8431: je 0x5d846d */ if (fZ) goto L_005d846d;
L_005d8433:; BB(0x005d8433);
    /* 005d8433: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005d8439: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d843b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d8441: mov edx, dword ptr [eax + 0xe8] */ r_edx = R32((u32)(r_eax+0xe8u));
    /* 005d8447: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d8449u); call_ind(t); }
    /* 005d8449: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005d844c: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005d844f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d8451: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005d8454: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 005d8457: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d8459u); call_ind(t); }
    /* 005d8459: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d845c: jne 0x5d846d */ if (!fZ) goto L_005d846d;
L_005d845e:; BB(0x005d845e);
    /* 005d845e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8460: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8465: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d8468: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x5d846du); f_005f2b20();
L_005d846d:; BB(0x005d846d);
    /* 005d846d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d8470: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d8472: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d8475: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 005d847b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d847du); call_ind(t); }
    /* 005d847d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d8480: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8482: je 0x5d848c */ if (fZ) goto L_005d848c;
L_005d8484:; BB(0x005d8484);
    /* 005d8484: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d8487: call 0x5da3d0 */ r_esp -= 4; W32(r_esp, 0x5d848cu); f_005da3d0();
L_005d848c:; BB(0x005d848c);
    /* 005d848c: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d848f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d8491: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d8494: mov edx, dword ptr [eax + 0x2e0] */ r_edx = R32((u32)(r_eax+0x2e0u));
    /* 005d849a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d849cu); call_ind(t); }
    /* 005d849c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d849f: call 0x5da810 */ r_esp -= 4; W32(r_esp, 0x5d84a4u); f_005da810();
    /* 005d84a4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d84a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d84a9: jne 0x5d85b7 */ if (!fZ) goto L_005d85b7;
L_005d84af:; BB(0x005d84af);
    /* 005d84af: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005d84b6: jmp 0x5d84c1 */ goto L_005d84c1;
L_005d84b8:; BB(0x005d84b8);
    /* 005d84b8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d84bb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d84be: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005d84c1:; BB(0x005d84c1);
    /* 005d84c1: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005d84c7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d84c9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d84cf: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 005d84d5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d84d7u); call_ind(t); }
    /* 005d84d7: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d84da: jge 0x5d85b7 */ if ((fS==fO)) goto L_005d85b7;
L_005d84e0:; BB(0x005d84e0);
    /* 005d84e0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d84e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d84e4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d84e9u); f_005dcb00();
    /* 005d84e9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d84ec: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d84ef: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d84f2: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d84f7u); f_0063aac0();
    /* 005d84f7: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005d84f9: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005d84fc: cmp dword ptr [ebp - 0x24], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8500: je 0x5d851e */ if (fZ) goto L_005d851e;
L_005d8502:; BB(0x005d8502);
    /* 005d8502: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8505: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d850au); f_0063aac0();
    /* 005d850a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d850c: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005d850f: cmp dword ptr [ebp - 0x28], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8513: je 0x5d851e */ if (fZ) goto L_005d851e;
L_005d8515:; BB(0x005d8515);
    /* 005d8515: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 005d851c: jmp 0x5d8525 */ goto L_005d8525;
L_005d851e:; BB(0x005d851e);
    /* 005d851e: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
L_005d8525:; BB(0x005d8525);
    /* 005d8525: movzx eax, byte ptr [ebp - 0x44] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffbcu));
    /* 005d8529: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d852b: je 0x5d85b2 */ if (fZ) goto L_005d85b2;
L_005d8531:; BB(0x005d8531);
    /* 005d8531: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d8534: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8535: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d853au); f_005dcb00();
    /* 005d853a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d853d: mov ecx, eax */ r_ecx = r_eax;
    /* 005d853f: call 0x5d6e70 */ r_esp -= 4; W32(r_esp, 0x5d8544u); f_005d6e70();
    /* 005d8544: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005d8547: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8549: je 0x5d8583 */ if (fZ) goto L_005d8583;
L_005d854b:; BB(0x005d854b);
    /* 005d854b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d854d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d8550: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8551: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d8556u); f_005dcb00();
    /* 005d8556: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d8559: mov ecx, eax */ r_ecx = r_eax;
    /* 005d855b: call 0x5d6ee0 */ r_esp -= 4; W32(r_esp, 0x5d8560u); f_005d6ee0();
    /* 005d8560: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d8563: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8564: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d8569u); f_005dcb00();
    /* 005d8569: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d856c: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005d856f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d8572: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d8577u); f_0063aac0();
    /* 005d8577: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d857a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d857b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d857e: call 0x5dc520 */ r_esp -= 4; W32(r_esp, 0x5d8583u); f_005dc520();
L_005d8583:; BB(0x005d8583);
    /* 005d8583: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d8586: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8587: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d858cu); f_005dcb00();
    /* 005d858c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d858f: mov ecx, eax */ r_ecx = r_eax;
    /* 005d8591: call 0x5d6f90 */ r_esp -= 4; W32(r_esp, 0x5d8596u); f_005d6f90();
    /* 005d8596: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d8599: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d859b: je 0x5d85b2 */ if (fZ) goto L_005d85b2;
L_005d859d:; BB(0x005d859d);
    /* 005d859d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d85a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d85a1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d85a6u); f_005dcb00();
    /* 005d85a6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d85a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d85aa: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d85ad: call 0x5dc3e0 */ r_esp -= 4; W32(r_esp, 0x5d85b2u); f_005dc3e0();
L_005d85b2:; BB(0x005d85b2);
    /* 005d85b2: jmp 0x5d84b8 */ goto L_005d84b8;
L_005d85b7:; BB(0x005d85b7);
    /* 005d85b7: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 005d85bd: call 0x5e74c0 */ r_esp -= 4; W32(r_esp, 0x5d85c2u); f_005e74c0();
    /* 005d85c2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d85c5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d85cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d85cd: mov esp, ebp */ r_esp = r_ebp;
    /* 005d85cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d85d0: ret  */ FN_RET(0x005d8230); r_esp += 4; return;
}

void f_005d8670(void) /* CasinoRoom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8670);
    /* 005d8670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8671: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8673: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d8676: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d8679: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d867c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d867f: cmp dword ptr [ebp - 8], 0x186be */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186beu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d8686: jl 0x5d86c8 */ if ((fS!=fO)) goto L_005d86c8;
L_005d8688:; BB(0x005d8688);
    /* 005d8688: cmp dword ptr [ebp - 8], 0x186bf */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186bfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d868f: jle 0x5d8693 */ if ((fZ||fS!=fO)) goto L_005d8693;
L_005d8691:; BB(0x005d8691);
    /* 005d8691: jmp 0x5d86c8 */ goto L_005d86c8;
L_005d8693:; BB(0x005d8693);
    /* 005d8693: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d8696: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8697: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d869a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d869b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d869e: call 0x64e470 */ r_esp -= 4; W32(r_esp, 0x5d86a3u); f_0064e470();
    /* 005d86a3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d86a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86a8: jne 0x5d86ae */ if (!fZ) goto L_005d86ae;
L_005d86aa:; BB(0x005d86aa);
    /* 005d86aa: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005d86ac: jmp 0x5d8700 */ goto L_005d8700;
L_005d86ae:; BB(0x005d86ae);
    /* 005d86ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d86b0: push 0x30e788 */ { u32 v = 0x30e788u; r_esp -= 4; W32(r_esp, v); }
    /* 005d86b5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d86b7: push 0x30e789 */ { u32 v = 0x30e789u; r_esp -= 4; W32(r_esp, v); }
    /* 005d86bc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d86bf: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x5d86c4u); f_005fe240();
    /* 005d86c4: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005d86c6: jmp 0x5d8700 */ goto L_005d8700;
L_005d86c8:; BB(0x005d86c8);
    /* 005d86c8: cmp dword ptr [ebp + 0xc], 0x186a1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x186a1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86cf: je 0x5d86da */ if (fZ) goto L_005d86da;
L_005d86d1:; BB(0x005d86d1);
    /* 005d86d1: cmp dword ptr [ebp + 0xc], 0x186a0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x186a0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d86d8: jne 0x5d86f0 */ if (!fZ) goto L_005d86f0;
L_005d86da:; BB(0x005d86da);
    /* 005d86da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d86dc: push 0x186a4 */ { u32 v = 0x186a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d86e1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d86e3: push 0x139a */ { u32 v = 0x139au; r_esp -= 4; W32(r_esp, v); }
    /* 005d86e8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d86eb: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x5d86f0u); f_005fe240();
L_005d86f0:; BB(0x005d86f0);
    /* 005d86f0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d86f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d86f4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d86f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d86f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d86fb: call 0x64e470 */ r_esp -= 4; W32(r_esp, 0x5d8700u); f_0064e470();
L_005d8700:; BB(0x005d8700);
    /* 005d8700: mov esp, ebp */ r_esp = r_ebp;
    /* 005d8702: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8703: ret 8 */ FN_RET(0x005d8670); r_esp += 12; return;
}

void f_005d8990(void) /* CasinoRoom::vfunc151 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8990);
    /* 005d8990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8991: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8993: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8994: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d8997: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005d899d: call 0x5de600 */ r_esp -= 4; W32(r_esp, 0x5d89a2u); f_005de600();
    /* 005d89a2: mov esp, ebp */ r_esp = r_ebp;
    /* 005d89a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d89a5: ret  */ FN_RET(0x005d8990); r_esp += 4; return;
}

void f_005d8a20(void) /* casinoroom::func_005d8a20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8a20);
    /* 005d8a20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8a21: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8a23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d8a25: push 0x6a919a */ { u32 v = 0x6a919au; r_esp -= 4; W32(r_esp, v); }
    /* 005d8a2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d8a30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8a31: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d8a34: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d8a39: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d8a3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8a3c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005d8a3f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005d8a45: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005d8a48: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 005d8a4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8a4e: je 0x5d8bef */ if (fZ) goto L_005d8bef;
L_005d8a54:; BB(0x005d8a54);
    /* 005d8a54: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8a58: jne 0x5d8a71 */ if (!fZ) goto L_005d8a71;
L_005d8a5a:; BB(0x005d8a5a);
    /* 005d8a5a: push 0x1cb */ { u32 v = 0x1cbu; r_esp -= 4; W32(r_esp, v); }
    /* 005d8a5f: push 0x6d43a4 */ { u32 v = 0x6d43a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8a64: push 0x6b6c68 */ { u32 v = 0x6b6c68u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8a69: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5d8a6eu); f_005e9f20();
    /* 005d8a6e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d8a71:; BB(0x005d8a71);
    /* 005d8a71: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d8a74: cmp dword ptr [edx + 0x6c], 0 */ {  u32 a = R32((u32)(r_edx+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8a78: jne 0x5d8ac1 */ if (!fZ) goto L_005d8ac1;
L_005d8a7a:; BB(0x005d8a7a);
    /* 005d8a7a: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8a7f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d8a84u); f_00686d82();
    /* 005d8a84: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d8a87: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d8a8a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d8a91: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8a95: je 0x5d8aa4 */ if (fZ) goto L_005d8aa4;
L_005d8a97:; BB(0x005d8a97);
    /* 005d8a97: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8a9a: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x5d8a9fu); f_005f5bf0();
    /* 005d8a9f: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005d8aa2: jmp 0x5d8aab */ goto L_005d8aab;
L_005d8aa4:; BB(0x005d8aa4);
    /* 005d8aa4: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005d8aab:; BB(0x005d8aab);
    /* 005d8aab: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005d8aae: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d8ab1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d8ab8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d8abb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d8abe: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
L_005d8ac1:; BB(0x005d8ac1);
    /* 005d8ac1: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d8ac6: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 005d8ac9: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005d8acc: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 005d8acf: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005d8ad2: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005d8ad5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8ad8: call 0x646f80 */ r_esp -= 4; W32(r_esp, 0x5d8addu); f_00646f80();
    /* 005d8add: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005d8ae0: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005d8ae6: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 005d8ae9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d8aec: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 005d8aef: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005d8af2: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d8af5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8af8: call 0x646f80 */ r_esp -= 4; W32(r_esp, 0x5d8afdu); f_00646f80();
    /* 005d8afd: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005d8b00: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d8b02: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8b07: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d8b0a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d8b0c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d8b0f: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005d8b12: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d8b14u); call_ind(t); }
    /* 005d8b14: sub eax, 0x31 */ {  u32 a = r_eax; u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d8b17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8b18: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d8b1b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d8b1d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d8b20: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d8b23: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d8b25u); call_ind(t); }
    /* 005d8b25: sub eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d8b28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8b29: push 0x417 */ { u32 v = 0x417u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8b2e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d8b31: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005d8b34: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5d8b39u); f_005eae80();
    /* 005d8b39: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d8b3c: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005d8b3f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d8b42: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005d8b45: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d8b47: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005d8b4a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d8b4cu); call_ind(t); }
    /* 005d8b4c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d8b4f: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 005d8b52: mov dword ptr [edx + 0x178], 6 */ W32((u32)(r_edx+0x178u), 0x6u);
    /* 005d8b5c: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d8b5e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d8b63u); f_00686d82();
    /* 005d8b63: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d8b66: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005d8b69: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005d8b70: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8b74: je 0x5d8b85 */ if (fZ) goto L_005d8b85;
L_005d8b76:; BB(0x005d8b76);
    /* 005d8b76: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8b78: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d8b7b: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x5d8b80u); f_00600a70();
    /* 005d8b80: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005d8b83: jmp 0x5d8b8c */ goto L_005d8b8c;
L_005d8b85:; BB(0x005d8b85);
    /* 005d8b85: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005d8b8c:; BB(0x005d8b8c);
    /* 005d8b8c: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005d8b8f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d8b92: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d8b99: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8b9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8b9d: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d8ba0: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005d8ba3: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5d8ba8u); f_005f5d50();
    /* 005d8ba8: movzx eax, byte ptr [ebp + 0x10] */ r_eax = (u32)R8((u32)(r_ebp+0x10u));
    /* 005d8bac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8bae: je 0x5d8bd8 */ if (fZ) goto L_005d8bd8;
L_005d8bb0:; BB(0x005d8bb0);
    /* 005d8bb0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d8bb3: call 0x5da460 */ r_esp -= 4; W32(r_esp, 0x5d8bb8u); f_005da460();
    /* 005d8bb8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d8bbb: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5d8bc0u); f_005da830();
    /* 005d8bc0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d8bc3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8bc5: jne 0x5d8bd6 */ if (!fZ) goto L_005d8bd6;
L_005d8bc7:; BB(0x005d8bc7);
    /* 005d8bc7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8bc9: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8bce: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d8bd1: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x5d8bd6u); f_005f2b20();
L_005d8bd6:; BB(0x005d8bd6);
    /* 005d8bd6: jmp 0x5d8bed */ goto L_005d8bed;
L_005d8bd8:; BB(0x005d8bd8);
    /* 005d8bd8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d8bdb: call 0x5da480 */ r_esp -= 4; W32(r_esp, 0x5d8be0u); f_005da480();
    /* 005d8be0: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8be5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d8be8: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x5d8bedu); f_005f2ba0();
L_005d8bed:; BB(0x005d8bed);
    /* 005d8bed: jmp 0x5d8c68 */ goto L_005d8c68;
L_005d8bef:; BB(0x005d8bef);
    /* 005d8bef: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d8bf2: cmp dword ptr [edx + 0x6c], 0 */ {  u32 a = R32((u32)(r_edx+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8bf6: je 0x5d8c53 */ if (fZ) goto L_005d8c53;
L_005d8bf8:; BB(0x005d8bf8);
    /* 005d8bf8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d8bfb: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005d8bfe: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d8c01: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005d8c04: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d8c06: mov ecx, eax */ r_ecx = r_eax;
    /* 005d8c08: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005d8c0b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d8c0du); call_ind(t); }
    /* 005d8c0d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8c0f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d8c12: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 005d8c15: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5d8c1au); f_005f5d50();
    /* 005d8c1a: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d8c1d: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005d8c20: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d8c23: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d8c26: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d8c29: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8c2d: je 0x5d8c42 */ if (fZ) goto L_005d8c42;
L_005d8c2f:; BB(0x005d8c2f);
    /* 005d8c2f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8c31: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d8c34: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d8c36: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d8c39: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d8c3b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d8c3du); call_ind(t); }
    /* 005d8c3d: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005d8c40: jmp 0x5d8c49 */ goto L_005d8c49;
L_005d8c42:; BB(0x005d8c42);
    /* 005d8c42: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_005d8c49:; BB(0x005d8c49);
    /* 005d8c49: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d8c4c: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
L_005d8c53:; BB(0x005d8c53);
    /* 005d8c53: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d8c56: call 0x5da480 */ r_esp -= 4; W32(r_esp, 0x5d8c5bu); f_005da480();
    /* 005d8c5b: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8c60: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d8c63: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x5d8c68u); f_005f2ba0();
L_005d8c68:; BB(0x005d8c68);
    /* 005d8c68: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d8c6b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d8c72: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d8c73: mov esp, ebp */ r_esp = r_ebp;
    /* 005d8c75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8c76: ret 0xc */ FN_RET(0x005d8a20); r_esp += 16; return;
}

void f_005dc7d0(void) /* CasinoRoom::vfunc19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dc7d0);
    /* 005dc7d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dc7d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005dc7d3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dc7d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005dc7d9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dc7dc: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005dc7df: cmp dword ptr [ebp - 0xc], 0x30dfb9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x30dfb9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dc7e6: jg 0x5dc80c */ if ((!fZ&&fS==fO)) goto L_005dc80c;
L_005dc7e8:; BB(0x005dc7e8);
    /* 005dc7e8: cmp dword ptr [ebp - 0xc], 0x30dfb9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x30dfb9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc7ef: je 0x5dc8a8 */ if (fZ) goto L_005dc8a8;
L_005dc7f5:; BB(0x005dc7f5);
    /* 005dc7f5: cmp dword ptr [ebp - 0xc], 0x1391 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1391u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc7fc: je 0x5dc866 */ if (fZ) goto L_005dc866;
L_005dc7fe:; BB(0x005dc7fe);
    /* 005dc7fe: cmp dword ptr [ebp - 0xc], 0x139b */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x139bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc805: je 0x5dc81a */ if (fZ) goto L_005dc81a;
L_005dc807:; BB(0x005dc807);
    /* 005dc807: jmp 0x5dc8c4 */ goto L_005dc8c4;
L_005dc80c:; BB(0x005dc80c);
    /* 005dc80c: cmp dword ptr [ebp - 0xc], 0x30dfba */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x30dfbau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc813: je 0x5dc870 */ if (fZ) goto L_005dc870;
L_005dc815:; BB(0x005dc815);
    /* 005dc815: jmp 0x5dc8c4 */ goto L_005dc8c4;
L_005dc81a:; BB(0x005dc81a);
    /* 005dc81a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dc81c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dc81e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc820: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dc825u); f_005dcb00();
    /* 005dc825: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dc828: mov ecx, eax */ r_ecx = r_eax;
    /* 005dc82a: call 0x5d54a0 */ r_esp -= 4; W32(r_esp, 0x5dc82fu); f_005d54a0();
    /* 005dc82f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005dc832: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc834: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005dc837: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc838: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc83a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dc83fu); f_005dcb00();
    /* 005dc83f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dc842: mov ecx, eax */ r_ecx = r_eax;
    /* 005dc844: call 0x5d5500 */ r_esp -= 4; W32(r_esp, 0x5dc849u); f_005d5500();
    /* 005dc849: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005dc84f: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x5dc854u); f_00637610();
    /* 005dc854: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc857: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dc859: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc85c: mov eax, dword ptr [edx + 0x2e0] */ r_eax = R32((u32)(r_edx+0x2e0u));
    /* 005dc862: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dc864u); call_ind(t); }
    /* 005dc864: jmp 0x5dc8c4 */ goto L_005dc8c4;
L_005dc866:; BB(0x005dc866);
    /* 005dc866: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc869: call 0x5db240 */ r_esp -= 4; W32(r_esp, 0x5dc86eu); f_005db240();
    /* 005dc86e: jmp 0x5dc8c4 */ goto L_005dc8c4;
L_005dc870:; BB(0x005dc870);
    /* 005dc870: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dc877: jmp 0x5dc882 */ goto L_005dc882;
L_005dc879:; BB(0x005dc879);
    /* 005dc879: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc87c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dc87f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005dc882:; BB(0x005dc882);
    /* 005dc882: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dc886: jge 0x5dc89e */ if ((fS==fO)) goto L_005dc89e;
L_005dc888:; BB(0x005dc888);
    /* 005dc888: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dc88b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc88c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc88f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dc891: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc894: mov eax, dword ptr [edx + 0x290] */ r_eax = R32((u32)(r_edx+0x290u));
    /* 005dc89a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dc89cu); call_ind(t); }
    /* 005dc89c: jmp 0x5dc879 */ goto L_005dc879;
L_005dc89e:; BB(0x005dc89e);
    /* 005dc89e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc8a1: call 0x5dc610 */ r_esp -= 4; W32(r_esp, 0x5dc8a6u); f_005dc610();
    /* 005dc8a6: jmp 0x5dc8d4 */ goto L_005dc8d4;
L_005dc8a8:; BB(0x005dc8a8);
    /* 005dc8a8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dc8aa: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc8ac: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005dc8b2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dc8b4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005dc8ba: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 005dc8c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dc8c2u); call_ind(t); }
    /* 005dc8c2: jmp 0x5dc8d4 */ goto L_005dc8d4;
L_005dc8c4:; BB(0x005dc8c4);
    /* 005dc8c4: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005dc8c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc8c8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dc8cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc8cc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dc8cf: call 0x64db70 */ r_esp -= 4; W32(r_esp, 0x5dc8d4u); f_0064db70();
L_005dc8d4:; BB(0x005dc8d4);
    /* 005dc8d4: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc8d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc8d7: ret 8 */ FN_RET(0x005dc7d0); r_esp += 12; return;
}

void f_005e4210(void) /* CasinoRoom::vfunc187 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4210);
    /* 005e4210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4211: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4213: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e4216: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e4219: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005e4220: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e4227: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e422a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e422d: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005e422f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4232: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005e4235: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e4238: mov esp, ebp */ r_esp = r_ebp;
    /* 005e423a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e423b: ret 8 */ FN_RET(0x005e4210); r_esp += 12; return;
}

void f_0064e430(void) /* CasinoRoom::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064e430);
    /* 0064e430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064e431: mov ebp, esp */ r_ebp = r_esp;
    /* 0064e433: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064e434: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064e437: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064e43a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064e43c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064e43f: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0064e445: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64e447u); call_ind(t); }
    /* 0064e447: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064e44a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e44c: je 0x64e45b */ if (fZ) goto L_0064e45b;
L_0064e44e:; BB(0x0064e44e);
    /* 0064e44e: push 0x186c6 */ { u32 v = 0x186c6u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e453: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064e456: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x64e45bu); f_005f2ba0();
L_0064e45b:; BB(0x0064e45b);
    /* 0064e45b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0064e45d: mov esp, ebp */ r_esp = r_ebp;
    /* 0064e45f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064e460: ret  */ FN_RET(0x0064e430); r_esp += 4; return;
}

void f_0064fcd0(void) /* CasinoRoom::vfunc101 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064fcd0);
    /* 0064fcd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064fcd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064fcd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064fcd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064fcd7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064fcdd: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x64fce2u); f_005f3bf0();
    /* 0064fce2: sub eax, 0x3eb */ {  u32 a = r_eax; u32 b = 0x3ebu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0064fce7: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0064fce9: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0064fceb: and eax, 0xffcf2b22 */ {  u32 a = r_eax; u32 b = 0xffcf2b22u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0064fcf0: add eax, 0x30d4de */ {  u32 a = r_eax; u32 b = 0x30d4deu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064fcf5: mov esp, ebp */ r_esp = r_ebp;
    /* 0064fcf7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064fcf8: ret 4 */ FN_RET(0x0064fcd0); r_esp += 8; return;
}

