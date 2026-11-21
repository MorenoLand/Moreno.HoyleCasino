#include "protos.h"

void f_00626c30(void) /* sciGroupBoxOutline::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626c30);
    /* 00626c30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00626c31: mov ebp, esp */ r_ebp = r_esp;
    /* 00626c33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626c34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00626c37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626c3a: call 0x5f6130 */ r_esp -= 4; W32(r_esp, 0x626c3fu); f_005f6130();
    /* 00626c3f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626c42: mov dword ptr [eax], 0x6d911c */ W32((u32)(r_eax), 0x6d911cu);
    /* 00626c48: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626c4b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00626c4e: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 00626c51: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626c54: mov esp, ebp */ r_esp = r_ebp;
    /* 00626c56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626c57: ret 4 */ FN_RET(0x00626c30); r_esp += 8; return;
}

void f_00626c80(void) /* sciGroupBoxOutline::vfunc39 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626c80);
    /* 00626c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00626c81: mov ebp, esp */ r_ebp = r_esp;
    /* 00626c83: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00626c86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00626c87: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00626c8a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626c8d: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x626c92u); f_005f54c0();
    /* 00626c92: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00626c95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626c97: je 0x626c9e */ if (fZ) goto L_00626c9e;
L_00626c99:; BB(0x00626c99);
    /* 00626c99: jmp 0x627020 */ goto L_00627020;
L_00626c9e:; BB(0x00626c9e);
    /* 00626c9e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626ca1: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00626ca4: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00626ca7: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626caa: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00626cad: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00626cb0: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626cb3: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00626cb6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00626cb9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626cbc: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 00626cbf: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00626cc2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00626cc5: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00626cc8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00626ccb: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00626cce: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00626cd1: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00626cd4: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00626cd7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00626cda: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00626cdd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626cde: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 00626ce1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00626ce2: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 00626ce5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626ce6: call 0x5ec3a0 */ r_esp -= 4; W32(r_esp, 0x626cebu); f_005ec3a0();
    /* 00626ceb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626cee: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626cf1: mov dl, byte ptr [ecx + 0x4a] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4au))) & 0xffu);
    /* 00626cf4: mov byte ptr [ebp - 0xc], dl */ W8((u32)(r_ebp+0xfffffff4u), (u8)r_edx);
    /* 00626cf7: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626cfa: mov cl, byte ptr [eax + 0x4b] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4bu))) & 0xffu);
    /* 00626cfd: mov byte ptr [ebp - 0xb], cl */ W8((u32)(r_ebp+0xfffffff5u), (u8)r_ecx);
    /* 00626d00: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626d03: mov al, byte ptr [edx + 0x4c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4cu))) & 0xffu);
    /* 00626d06: mov byte ptr [ebp - 0xa], al */ W8((u32)(r_ebp+0xfffffff6u), (u8)r_eax);
    /* 00626d09: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626d0c: call 0x5f63f0 */ r_esp -= 4; W32(r_esp, 0x626d11u); f_005f63f0();
    /* 00626d11: mov byte ptr [ebp - 9], al */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_eax);
    /* 00626d14: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626d17: movzx edx, byte ptr [ecx + 0x48] */ r_edx = (u32)R8((u32)(r_ecx+0x48u));
    /* 00626d1b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626d1d: je 0x626d61 */ if (fZ) goto L_00626d61;
L_00626d1f:; BB(0x00626d1f);
    /* 00626d1f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00626d22: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00626d25: jmp 0x626d30 */ goto L_00626d30;
L_00626d27:; BB(0x00626d27);
    /* 00626d27: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00626d2a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00626d2d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00626d30:; BB(0x00626d30);
    /* 00626d30: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00626d33: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00626d36: jge 0x626d61 */ if ((fS==fO)) goto L_00626d61;
L_00626d38:; BB(0x00626d38);
    /* 00626d38: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626d3b: call 0x5f6620 */ r_esp -= 4; W32(r_esp, 0x626d40u); f_005f6620();
    /* 00626d40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626d41: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00626d44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626d45: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00626d48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626d49: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00626d4c: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00626d4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00626d50: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00626d53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626d54: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626d57: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00626d5a: call 0x5f9380 */ r_esp -= 4; W32(r_esp, 0x626d5fu); f_005f9380();
    /* 00626d5f: jmp 0x626d27 */ goto L_00626d27;
L_00626d61:; BB(0x00626d61);
    /* 00626d61: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626d64: mov al, byte ptr [edx + 0x4d] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4du))) & 0xffu);
    /* 00626d67: mov byte ptr [ebp - 0xc], al */ W8((u32)(r_ebp+0xfffffff4u), (u8)r_eax);
    /* 00626d6a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626d6d: mov dl, byte ptr [ecx + 0x4e] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4eu))) & 0xffu);
    /* 00626d70: mov byte ptr [ebp - 0xb], dl */ W8((u32)(r_ebp+0xfffffff5u), (u8)r_edx);
    /* 00626d73: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626d76: mov cl, byte ptr [eax + 0x4f] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4fu))) & 0xffu);
    /* 00626d79: mov byte ptr [ebp - 0xa], cl */ W8((u32)(r_ebp+0xfffffff6u), (u8)r_ecx);
    /* 00626d7c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626d7f: call 0x5f63f0 */ r_esp -= 4; W32(r_esp, 0x626d84u); f_005f63f0();
    /* 00626d84: mov byte ptr [ebp - 9], al */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_eax);
    /* 00626d87: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626d8a: movzx eax, byte ptr [edx + 0x49] */ r_eax = (u32)R8((u32)(r_edx+0x49u));
    /* 00626d8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626d90: je 0x627020 */ if (fZ) goto L_00627020;
L_00626d96:; BB(0x00626d96);
    /* 00626d96: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626d99: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 00626d9c: call 0x626b20 */ r_esp -= 4; W32(r_esp, 0x626da1u); f_00626b20();
    /* 00626da1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626da3: je 0x626f6b */ if (fZ) goto L_00626f6b;
L_00626da9:; BB(0x00626da9);
    /* 00626da9: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626dac: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00626daf: cmp eax, dword ptr [edx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626db2: jne 0x626f6b */ if (!fZ) goto L_00626f6b;
L_00626db8:; BB(0x00626db8);
    /* 00626db8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626dbb: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 00626dbe: call 0x626b20 */ r_esp -= 4; W32(r_esp, 0x626dc3u); f_00626b20();
    /* 00626dc3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00626dc6: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00626dcb: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00626dce: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00626dd0: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00626dd3: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 00626dd9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x626ddbu); call_ind(t); }
    /* 00626ddb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626ddc: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x626de1u); f_00686ec0();
    /* 00626de1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626de4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626de6: je 0x626f41 */ if (fZ) goto L_00626f41;
L_00626dec:; BB(0x00626dec);
    /* 00626dec: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626def: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00626df2: call 0x626b20 */ r_esp -= 4; W32(r_esp, 0x626df7u); f_00626b20();
    /* 00626df7: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00626dfa: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00626dfd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00626dff: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00626e02: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00626e05: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x626e07u); call_ind(t); }
    /* 00626e07: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00626e0a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00626e0d: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00626e10: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00626e12: jge 0x626e37 */ if ((fS==fO)) goto L_00626e37;
L_00626e14:; BB(0x00626e14);
    /* 00626e14: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626e17: mov ecx, dword ptr [edx + 0x5c] */ r_ecx = R32((u32)(r_edx+0x5cu));
    /* 00626e1a: call 0x626b20 */ r_esp -= 4; W32(r_esp, 0x626e1fu); f_00626b20();
    /* 00626e1f: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00626e22: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00626e25: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00626e27: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00626e2a: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00626e2d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x626e2fu); call_ind(t); }
    /* 00626e2f: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00626e32: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00626e35: jmp 0x626e40 */ goto L_00626e40;
L_00626e37:; BB(0x00626e37);
    /* 00626e37: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00626e3a: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00626e3d: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
L_00626e40:; BB(0x00626e40);
    /* 00626e40: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00626e43: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00626e46: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00626e49: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00626e4c: jge 0x626e75 */ if ((fS==fO)) goto L_00626e75;
L_00626e4e:; BB(0x00626e4e);
    /* 00626e4e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626e51: call 0x5f6620 */ r_esp -= 4; W32(r_esp, 0x626e56u); f_005f6620();
    /* 00626e56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626e57: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00626e5a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626e5b: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626e5e: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00626e61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626e62: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626e65: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626e66: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00626e69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00626e6a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626e6d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00626e70: call 0x5f9380 */ r_esp -= 4; W32(r_esp, 0x626e75u); f_005f9380();
L_00626e75:; BB(0x00626e75);
    /* 00626e75: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626e78: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 00626e7b: call 0x626b20 */ r_esp -= 4; W32(r_esp, 0x626e80u); f_00626b20();
    /* 00626e80: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00626e83: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00626e86: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00626e88: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00626e8b: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00626e8e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x626e90u); call_ind(t); }
    /* 00626e90: mov esi, eax */ r_esi = r_eax;
    /* 00626e92: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626e95: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00626e98: call 0x626b20 */ r_esp -= 4; W32(r_esp, 0x626e9du); f_00626b20();
    /* 00626e9d: mov ecx, eax */ r_ecx = r_eax;
    /* 00626e9f: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x626ea4u); f_005f5550();
    /* 00626ea4: lea ecx, [esi + eax + 2] */ r_ecx = (u32)(r_esi+r_eax+0x2u);
    /* 00626ea8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00626eab: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00626eae: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00626eb0: jge 0x626eea */ if ((fS==fO)) goto L_00626eea;
L_00626eb2:; BB(0x00626eb2);
    /* 00626eb2: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626eb5: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00626eb8: call 0x626b20 */ r_esp -= 4; W32(r_esp, 0x626ebdu); f_00626b20();
    /* 00626ebd: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00626ec0: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00626ec3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00626ec5: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00626ec8: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00626ecb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x626ecdu); call_ind(t); }
    /* 00626ecd: mov esi, eax */ r_esi = r_eax;
    /* 00626ecf: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626ed2: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 00626ed5: call 0x626b20 */ r_esp -= 4; W32(r_esp, 0x626edau); f_00626b20();
    /* 00626eda: mov ecx, eax */ r_ecx = r_eax;
    /* 00626edc: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x626ee1u); f_005f5550();
    /* 00626ee1: lea edx, [esi + eax + 2] */ r_edx = (u32)(r_esi+r_eax+0x2u);
    /* 00626ee5: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00626ee8: jmp 0x626ef3 */ goto L_00626ef3;
L_00626eea:; BB(0x00626eea);
    /* 00626eea: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00626eed: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00626ef0: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
L_00626ef3:; BB(0x00626ef3);
    /* 00626ef3: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00626ef6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00626ef9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626efc: cmp edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00626eff: jle 0x626f09 */ if ((fZ||fS!=fO)) goto L_00626f09;
L_00626f01:; BB(0x00626f01);
    /* 00626f01: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626f04: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00626f07: jmp 0x626f0f */ goto L_00626f0f;
L_00626f09:; BB(0x00626f09);
    /* 00626f09: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00626f0c: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
L_00626f0f:; BB(0x00626f0f);
    /* 00626f0f: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00626f12: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00626f15: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626f18: call 0x5f6620 */ r_esp -= 4; W32(r_esp, 0x626f1du); f_005f6620();
    /* 00626f1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626f1e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00626f21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626f22: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626f25: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00626f28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00626f29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00626f2c: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00626f2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626f30: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626f33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626f34: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626f37: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00626f3a: call 0x5f9380 */ r_esp -= 4; W32(r_esp, 0x626f3fu); f_005f9380();
    /* 00626f3f: jmp 0x626f6b */ goto L_00626f6b;
L_00626f41:; BB(0x00626f41);
    /* 00626f41: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626f44: call 0x5f6620 */ r_esp -= 4; W32(r_esp, 0x626f49u); f_005f6620();
    /* 00626f49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626f4a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00626f4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626f4e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626f51: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00626f54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00626f55: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00626f58: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00626f5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626f5c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00626f5f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626f60: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626f63: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00626f66: call 0x5f9380 */ r_esp -= 4; W32(r_esp, 0x626f6bu); f_005f9380();
L_00626f6b:; BB(0x00626f6b);
    /* 00626f6b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00626f6e: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00626f71: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626f74: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00626f77: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00626f7a: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626f7c: jne 0x626fab */ if (!fZ) goto L_00626fab;
L_00626f7e:; BB(0x00626f7e);
    /* 00626f7e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626f81: call 0x5f6620 */ r_esp -= 4; W32(r_esp, 0x626f86u); f_005f6620();
    /* 00626f86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626f87: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00626f8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626f8b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626f8e: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00626f91: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00626f94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00626f95: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00626f98: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00626f9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626f9c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00626f9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626fa0: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626fa3: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00626fa6: call 0x5f9380 */ r_esp -= 4; W32(r_esp, 0x626fabu); f_005f9380();
L_00626fab:; BB(0x00626fab);
    /* 00626fab: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626fae: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00626fb1: cmp ecx, dword ptr [eax + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626fb4: jne 0x626fe0 */ if (!fZ) goto L_00626fe0;
L_00626fb6:; BB(0x00626fb6);
    /* 00626fb6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626fb9: call 0x5f6620 */ r_esp -= 4; W32(r_esp, 0x626fbeu); f_005f6620();
    /* 00626fbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626fbf: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00626fc2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00626fc3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00626fc6: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00626fc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626fca: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00626fcd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626fce: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626fd1: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00626fd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626fd5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626fd8: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00626fdb: call 0x5f93e0 */ r_esp -= 4; W32(r_esp, 0x626fe0u); f_005f93e0();
L_00626fe0:; BB(0x00626fe0);
    /* 00626fe0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00626fe3: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00626fe6: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626fe9: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00626fec: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00626fef: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626ff1: jne 0x627020 */ if (!fZ) goto L_00627020;
L_00626ff3:; BB(0x00626ff3);
    /* 00626ff3: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626ff6: call 0x5f6620 */ r_esp -= 4; W32(r_esp, 0x626ffbu); f_005f6620();
    /* 00626ffb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626ffc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00626fff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627000: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00627003: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00627006: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627007: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062700a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062700b: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062700e: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00627011: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00627014: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627015: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00627018: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0062701b: call 0x5f93e0 */ r_esp -= 4; W32(r_esp, 0x627020u); f_005f93e0();
L_00627020:; BB(0x00627020);
    /* 00627020: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00627021: mov esp, ebp */ r_esp = r_ebp;
    /* 00627023: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00627024: ret 4 */ FN_RET(0x00626c80); r_esp += 8; return;
}

