#include "protos.h"

void f_00529c00(void) /* SlotMachineDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00529c00);
    /* 00529c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00529c01: mov ebp, esp */ r_ebp = r_esp;
    /* 00529c03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00529c06: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00529c09: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529c0c: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x529c11u); f_005e9e20();
    /* 00529c11: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529c14: mov dword ptr [eax], 0x6c3b18 */ W32((u32)(r_eax), 0x6c3b18u);
    /* 00529c1a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529c1d: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 00529c24: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529c27: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 00529c2e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529c31: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
    /* 00529c38: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529c3b: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 00529c42: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529c45: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 00529c4c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529c4f: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 00529c56: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529c59: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 00529c60: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529c63: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 00529c6a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529c6d: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 00529c74: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529c77: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
    /* 00529c7e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529c81: mov dword ptr [edx + 0x2c], 0 */ W32((u32)(r_edx+0x2cu), 0x0u);
    /* 00529c88: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529c8b: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 00529c92: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529c95: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
    /* 00529c9c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529c9f: mov dword ptr [edx + 0x38], 0 */ W32((u32)(r_edx+0x38u), 0x0u);
    /* 00529ca6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529ca9: mov dword ptr [eax + 0x60], 0 */ W32((u32)(r_eax+0x60u), 0x0u);
    /* 00529cb0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529cb3: mov dword ptr [ecx + 0x64], 0 */ W32((u32)(r_ecx+0x64u), 0x0u);
    /* 00529cba: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529cbd: mov dword ptr [edx + 0x68], 0 */ W32((u32)(r_edx+0x68u), 0x0u);
    /* 00529cc4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529cc7: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
    /* 00529cce: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529cd1: mov dword ptr [ecx + 0x70], 0 */ W32((u32)(r_ecx+0x70u), 0x0u);
    /* 00529cd8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00529cdf: jmp 0x529cea */ goto L_00529cea;
L_00529ce1:; BB(0x00529ce1);
    /* 00529ce1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00529ce4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00529ce7: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00529cea:; BB(0x00529cea);
    /* 00529cea: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00529cee: jge 0x529d00 */ if ((fS==fO)) goto L_00529d00;
L_00529cf0:; BB(0x00529cf0);
    /* 00529cf0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00529cf3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529cf6: mov dword ptr [ecx + eax*4 + 0x74], 0 */ W32((u32)(r_ecx+r_eax*4+0x74u), 0x0u);
    /* 00529cfe: jmp 0x529ce1 */ goto L_00529ce1;
L_00529d00:; BB(0x00529d00);
    /* 00529d00: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529d03: mov dword ptr [edx + 0x8c], 0 */ W32((u32)(r_edx+0x8cu), 0x0u);
    /* 00529d0d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00529d14: jmp 0x529d1f */ goto L_00529d1f;
L_00529d16:; BB(0x00529d16);
    /* 00529d16: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00529d19: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00529d1c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00529d1f:; BB(0x00529d1f);
    /* 00529d1f: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00529d23: jge 0x529d38 */ if ((fS==fO)) goto L_00529d38;
L_00529d25:; BB(0x00529d25);
    /* 00529d25: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00529d28: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529d2b: mov dword ptr [edx + ecx*4 + 0x90], 0 */ W32((u32)(r_edx+r_ecx*4+0x90u), 0x0u);
    /* 00529d36: jmp 0x529d16 */ goto L_00529d16;
L_00529d38:; BB(0x00529d38);
    /* 00529d38: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00529d3f: jmp 0x529d4a */ goto L_00529d4a;
L_00529d41:; BB(0x00529d41);
    /* 00529d41: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00529d44: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00529d47: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00529d4a:; BB(0x00529d4a);
    /* 00529d4a: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00529d4e: jge 0x529d63 */ if ((fS==fO)) goto L_00529d63;
L_00529d50:; BB(0x00529d50);
    /* 00529d50: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00529d53: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529d56: mov dword ptr [edx + ecx*4 + 0xa0], 0 */ W32((u32)(r_edx+r_ecx*4+0xa0u), 0x0u);
    /* 00529d61: jmp 0x529d41 */ goto L_00529d41;
L_00529d63:; BB(0x00529d63);
    /* 00529d63: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00529d6a: jmp 0x529d75 */ goto L_00529d75;
L_00529d6c:; BB(0x00529d6c);
    /* 00529d6c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00529d6f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00529d72: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00529d75:; BB(0x00529d75);
    /* 00529d75: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00529d79: jge 0x529d8b */ if ((fS==fO)) goto L_00529d8b;
L_00529d7b:; BB(0x00529d7b);
    /* 00529d7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00529d7e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529d81: mov dword ptr [edx + ecx*4 + 0x3c], 0 */ W32((u32)(r_edx+r_ecx*4+0x3cu), 0x0u);
    /* 00529d89: jmp 0x529d6c */ goto L_00529d6c;
L_00529d8b:; BB(0x00529d8b);
    /* 00529d8b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529d8e: mov dword ptr [eax + 0xac], 0 */ W32((u32)(r_eax+0xacu), 0x0u);
    /* 00529d98: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529d9b: mov dword ptr [ecx + 0xb0], 0 */ W32((u32)(r_ecx+0xb0u), 0x0u);
    /* 00529da5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529da8: mov dword ptr [edx + 0x5c], 0 */ W32((u32)(r_edx+0x5cu), 0x0u);
    /* 00529daf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00529db6: jmp 0x529dc1 */ goto L_00529dc1;
L_00529db8:; BB(0x00529db8);
    /* 00529db8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00529dbb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00529dbe: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00529dc1:; BB(0x00529dc1);
    /* 00529dc1: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00529dc5: jge 0x529dda */ if ((fS==fO)) goto L_00529dda;
L_00529dc7:; BB(0x00529dc7);
    /* 00529dc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00529dca: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529dcd: mov dword ptr [edx + ecx*4 + 0xb4], 0 */ W32((u32)(r_edx+r_ecx*4+0xb4u), 0x0u);
    /* 00529dd8: jmp 0x529db8 */ goto L_00529db8;
L_00529dda:; BB(0x00529dda);
    /* 00529dda: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529ddd: mov dword ptr [eax + 0xc0], 0 */ W32((u32)(r_eax+0xc0u), 0x0u);
    /* 00529de7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529dea: mov dword ptr [ecx + 0xc4], 0 */ W32((u32)(r_ecx+0xc4u), 0x0u);
    /* 00529df4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529df7: mov dword ptr [edx + 0xc8], 0 */ W32((u32)(r_edx+0xc8u), 0x0u);
    /* 00529e01: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00529e08: jmp 0x529e13 */ goto L_00529e13;
L_00529e0a:; BB(0x00529e0a);
    /* 00529e0a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00529e0d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00529e10: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00529e13:; BB(0x00529e13);
    /* 00529e13: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00529e17: jge 0x529e3d */ if ((fS==fO)) goto L_00529e3d;
L_00529e19:; BB(0x00529e19);
    /* 00529e19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00529e1c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529e1f: mov dword ptr [edx + ecx*4 + 0xcc], 0 */ W32((u32)(r_edx+r_ecx*4+0xccu), 0x0u);
    /* 00529e2a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00529e2d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529e30: mov dword ptr [ecx + eax*4 + 0xe0], 0 */ W32((u32)(r_ecx+r_eax*4+0xe0u), 0x0u);
    /* 00529e3b: jmp 0x529e0a */ goto L_00529e0a;
L_00529e3d:; BB(0x00529e3d);
    /* 00529e3d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00529e44: jmp 0x529e4f */ goto L_00529e4f;
L_00529e46:; BB(0x00529e46);
    /* 00529e46: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00529e49: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00529e4c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00529e4f:; BB(0x00529e4f);
    /* 00529e4f: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00529e53: jge 0x529e68 */ if ((fS==fO)) goto L_00529e68;
L_00529e55:; BB(0x00529e55);
    /* 00529e55: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00529e58: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529e5b: mov dword ptr [ecx + eax*4 + 0xf4], 0 */ W32((u32)(r_ecx+r_eax*4+0xf4u), 0x0u);
    /* 00529e66: jmp 0x529e46 */ goto L_00529e46;
L_00529e68:; BB(0x00529e68);
    /* 00529e68: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529e6b: mov esp, ebp */ r_esp = r_ebp;
    /* 00529e6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00529e6e: ret  */ FN_RET(0x00529c00); r_esp += 4; return;
}

void f_00529e70(void) /* SlotMachineDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00529e70);
    /* 00529e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00529e71: mov ebp, esp */ r_ebp = r_esp;
    /* 00529e73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00529e75: push 0x6a425b */ { u32 v = 0x6a425bu; r_esp -= 4; W32(r_esp, v); }
    /* 00529e7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00529e80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00529e81: sub esp, 0x164 */ {  u32 a = r_esp; u32 b = 0x164u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00529e87: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00529e8c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00529e8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00529e8f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00529e92: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00529e98: mov dword ptr [ebp - 0xfc], ecx */ W32((u32)(r_ebp+0xffffff04u), r_ecx);
    /* 00529e9e: mov eax, dword ptr [ebp - 0xfc] */ r_eax = R32((u32)(r_ebp+0xffffff04u));
    /* 00529ea4: mov dword ptr [eax], 0x6c3b18 */ W32((u32)(r_eax), 0x6c3b18u);
    /* 00529eaa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00529eb1: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 00529eb7: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00529eba: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00529ebd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00529ec0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00529ec3: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529ec7: je 0x529edf */ if (fZ) goto L_00529edf;
L_00529ec9:; BB(0x00529ec9);
    /* 00529ec9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00529ecb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00529ece: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00529ed0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00529ed3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00529ed5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x529ed7u); call_ind(t); }
    /* 00529ed7: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 00529edd: jmp 0x529ee9 */ goto L_00529ee9;
L_00529edf:; BB(0x00529edf);
    /* 00529edf: mov dword ptr [ebp - 0x100], 0 */ W32((u32)(r_ebp+0xffffff00u), 0x0u);
L_00529ee9:; BB(0x00529ee9);
    /* 00529ee9: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 00529eef: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00529ef2: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00529ef5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00529ef8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00529efb: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529eff: je 0x529f17 */ if (fZ) goto L_00529f17;
L_00529f01:; BB(0x00529f01);
    /* 00529f01: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00529f03: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00529f06: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00529f08: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00529f0b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00529f0d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x529f0fu); call_ind(t); }
    /* 00529f0f: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 00529f15: jmp 0x529f21 */ goto L_00529f21;
L_00529f17:; BB(0x00529f17);
    /* 00529f17: mov dword ptr [ebp - 0x104], 0 */ W32((u32)(r_ebp+0xfffffefcu), 0x0u);
L_00529f21:; BB(0x00529f21);
    /* 00529f21: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 00529f27: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00529f2a: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00529f2d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00529f30: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00529f33: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529f37: je 0x529f4f */ if (fZ) goto L_00529f4f;
L_00529f39:; BB(0x00529f39);
    /* 00529f39: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00529f3b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00529f3e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00529f40: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00529f43: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00529f45: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x529f47u); call_ind(t); }
    /* 00529f47: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 00529f4d: jmp 0x529f59 */ goto L_00529f59;
L_00529f4f:; BB(0x00529f4f);
    /* 00529f4f: mov dword ptr [ebp - 0x108], 0 */ W32((u32)(r_ebp+0xfffffef8u), 0x0u);
L_00529f59:; BB(0x00529f59);
    /* 00529f59: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 00529f5f: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 00529f62: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00529f65: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00529f68: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00529f6b: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529f6f: je 0x529f87 */ if (fZ) goto L_00529f87;
L_00529f71:; BB(0x00529f71);
    /* 00529f71: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00529f73: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00529f76: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00529f78: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00529f7b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00529f7d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x529f7fu); call_ind(t); }
    /* 00529f7f: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 00529f85: jmp 0x529f91 */ goto L_00529f91;
L_00529f87:; BB(0x00529f87);
    /* 00529f87: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
L_00529f91:; BB(0x00529f91);
    /* 00529f91: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 00529f97: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00529f9a: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00529f9d: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00529fa0: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00529fa3: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529fa7: je 0x529fbf */ if (fZ) goto L_00529fbf;
L_00529fa9:; BB(0x00529fa9);
    /* 00529fa9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00529fab: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00529fae: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00529fb0: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00529fb3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00529fb5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x529fb7u); call_ind(t); }
    /* 00529fb7: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 00529fbd: jmp 0x529fc9 */ goto L_00529fc9;
L_00529fbf:; BB(0x00529fbf);
    /* 00529fbf: mov dword ptr [ebp - 0x110], 0 */ W32((u32)(r_ebp+0xfffffef0u), 0x0u);
L_00529fc9:; BB(0x00529fc9);
    /* 00529fc9: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 00529fcf: cmp dword ptr [ecx + 0x18], 0 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529fd3: je 0x52a00d */ if (fZ) goto L_0052a00d;
L_00529fd5:; BB(0x00529fd5);
    /* 00529fd5: mov edx, dword ptr [ebp - 0xfc] */ r_edx = R32((u32)(r_ebp+0xffffff04u));
    /* 00529fdb: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00529fde: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00529fe1: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00529fe4: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00529fe7: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529feb: je 0x52a003 */ if (fZ) goto L_0052a003;
L_00529fed:; BB(0x00529fed);
    /* 00529fed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00529fef: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00529ff2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00529ff4: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00529ff7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00529ff9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x529ffbu); call_ind(t); }
    /* 00529ffb: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 0052a001: jmp 0x52a00d */ goto L_0052a00d;
L_0052a003:; BB(0x0052a003);
    /* 0052a003: mov dword ptr [ebp - 0x114], 0 */ W32((u32)(r_ebp+0xfffffeecu), 0x0u);
L_0052a00d:; BB(0x0052a00d);
    /* 0052a00d: mov eax, dword ptr [ebp - 0xfc] */ r_eax = R32((u32)(r_ebp+0xffffff04u));
    /* 0052a013: cmp dword ptr [eax + 0x1c], 0 */ {  u32 a = R32((u32)(r_eax+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a017: je 0x52a051 */ if (fZ) goto L_0052a051;
L_0052a019:; BB(0x0052a019);
    /* 0052a019: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 0052a01f: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0052a022: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0052a025: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0052a028: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0052a02b: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a02f: je 0x52a047 */ if (fZ) goto L_0052a047;
L_0052a031:; BB(0x0052a031);
    /* 0052a031: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a033: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0052a036: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052a038: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0052a03b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052a03d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52a03fu); call_ind(t); }
    /* 0052a03f: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 0052a045: jmp 0x52a051 */ goto L_0052a051;
L_0052a047:; BB(0x0052a047);
    /* 0052a047: mov dword ptr [ebp - 0x118], 0 */ W32((u32)(r_ebp+0xfffffee8u), 0x0u);
L_0052a051:; BB(0x0052a051);
    /* 0052a051: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 0052a057: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0052a05a: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0052a05d: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0052a060: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0052a063: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a067: je 0x52a07f */ if (fZ) goto L_0052a07f;
L_0052a069:; BB(0x0052a069);
    /* 0052a069: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a06b: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0052a06e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052a070: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0052a073: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052a075: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52a077u); call_ind(t); }
    /* 0052a077: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 0052a07d: jmp 0x52a089 */ goto L_0052a089;
L_0052a07f:; BB(0x0052a07f);
    /* 0052a07f: mov dword ptr [ebp - 0x11c], 0 */ W32((u32)(r_ebp+0xfffffee4u), 0x0u);
L_0052a089:; BB(0x0052a089);
    /* 0052a089: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 0052a08f: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 0052a092: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0052a095: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0052a098: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0052a09b: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a09f: je 0x52a0b7 */ if (fZ) goto L_0052a0b7;
L_0052a0a1:; BB(0x0052a0a1);
    /* 0052a0a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a0a3: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0052a0a6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052a0a8: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0052a0ab: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052a0ad: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52a0afu); call_ind(t); }
    /* 0052a0af: mov dword ptr [ebp - 0x120], eax */ W32((u32)(r_ebp+0xfffffee0u), r_eax);
    /* 0052a0b5: jmp 0x52a0c1 */ goto L_0052a0c1;
L_0052a0b7:; BB(0x0052a0b7);
    /* 0052a0b7: mov dword ptr [ebp - 0x120], 0 */ W32((u32)(r_ebp+0xfffffee0u), 0x0u);
L_0052a0c1:; BB(0x0052a0c1);
    /* 0052a0c1: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 0052a0c7: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0052a0ca: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0052a0cd: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0052a0d0: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0052a0d3: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a0d7: je 0x52a0ef */ if (fZ) goto L_0052a0ef;
L_0052a0d9:; BB(0x0052a0d9);
    /* 0052a0d9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a0db: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0052a0de: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052a0e0: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0052a0e3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052a0e5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52a0e7u); call_ind(t); }
    /* 0052a0e7: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
    /* 0052a0ed: jmp 0x52a0f9 */ goto L_0052a0f9;
L_0052a0ef:; BB(0x0052a0ef);
    /* 0052a0ef: mov dword ptr [ebp - 0x124], 0 */ W32((u32)(r_ebp+0xfffffedcu), 0x0u);
L_0052a0f9:; BB(0x0052a0f9);
    /* 0052a0f9: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 0052a0ff: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0052a102: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 0052a105: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0052a108: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0052a10b: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a10f: je 0x52a127 */ if (fZ) goto L_0052a127;
L_0052a111:; BB(0x0052a111);
    /* 0052a111: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a113: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0052a116: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052a118: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0052a11b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052a11d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52a11fu); call_ind(t); }
    /* 0052a11f: mov dword ptr [ebp - 0x128], eax */ W32((u32)(r_ebp+0xfffffed8u), r_eax);
    /* 0052a125: jmp 0x52a131 */ goto L_0052a131;
L_0052a127:; BB(0x0052a127);
    /* 0052a127: mov dword ptr [ebp - 0x128], 0 */ W32((u32)(r_ebp+0xfffffed8u), 0x0u);
L_0052a131:; BB(0x0052a131);
    /* 0052a131: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 0052a137: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0052a13a: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 0052a13d: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0052a140: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0052a143: cmp dword ptr [ebp - 0x6c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a147: je 0x52a15f */ if (fZ) goto L_0052a15f;
L_0052a149:; BB(0x0052a149);
    /* 0052a149: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a14b: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0052a14e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052a150: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0052a153: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052a155: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52a157u); call_ind(t); }
    /* 0052a157: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 0052a15d: jmp 0x52a169 */ goto L_0052a169;
L_0052a15f:; BB(0x0052a15f);
    /* 0052a15f: mov dword ptr [ebp - 0x12c], 0 */ W32((u32)(r_ebp+0xfffffed4u), 0x0u);
L_0052a169:; BB(0x0052a169);
    /* 0052a169: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 0052a16f: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0052a172: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 0052a175: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0052a178: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0052a17b: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a17f: je 0x52a197 */ if (fZ) goto L_0052a197;
L_0052a181:; BB(0x0052a181);
    /* 0052a181: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a183: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0052a186: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052a188: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0052a18b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052a18d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52a18fu); call_ind(t); }
    /* 0052a18f: mov dword ptr [ebp - 0x130], eax */ W32((u32)(r_ebp+0xfffffed0u), r_eax);
    /* 0052a195: jmp 0x52a1a1 */ goto L_0052a1a1;
L_0052a197:; BB(0x0052a197);
    /* 0052a197: mov dword ptr [ebp - 0x130], 0 */ W32((u32)(r_ebp+0xfffffed0u), 0x0u);
L_0052a1a1:; BB(0x0052a1a1);
    /* 0052a1a1: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 0052a1a7: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 0052a1aa: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 0052a1ad: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 0052a1b0: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0052a1b3: cmp dword ptr [ebp - 0x7c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a1b7: je 0x52a1cf */ if (fZ) goto L_0052a1cf;
L_0052a1b9:; BB(0x0052a1b9);
    /* 0052a1b9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a1bb: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0052a1be: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052a1c0: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0052a1c3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052a1c5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52a1c7u); call_ind(t); }
    /* 0052a1c7: mov dword ptr [ebp - 0x134], eax */ W32((u32)(r_ebp+0xfffffeccu), r_eax);
    /* 0052a1cd: jmp 0x52a1d9 */ goto L_0052a1d9;
L_0052a1cf:; BB(0x0052a1cf);
    /* 0052a1cf: mov dword ptr [ebp - 0x134], 0 */ W32((u32)(r_ebp+0xfffffeccu), 0x0u);
L_0052a1d9:; BB(0x0052a1d9);
    /* 0052a1d9: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 0052a1df: cmp dword ptr [ecx + 0x5c], 0 */ {  u32 a = R32((u32)(r_ecx+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a1e3: je 0x52a22f */ if (fZ) goto L_0052a22f;
L_0052a1e5:; BB(0x0052a1e5);
    /* 0052a1e5: mov edx, dword ptr [ebp - 0xfc] */ r_edx = R32((u32)(r_ebp+0xffffff04u));
    /* 0052a1eb: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 0052a1ee: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0052a1f4: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052a1fa: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 0052a200: cmp dword ptr [ebp - 0x84], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a207: je 0x52a225 */ if (fZ) goto L_0052a225;
L_0052a209:; BB(0x0052a209);
    /* 0052a209: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a20b: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0052a211: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052a213: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0052a219: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052a21b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52a21du); call_ind(t); }
    /* 0052a21d: mov dword ptr [ebp - 0x138], eax */ W32((u32)(r_ebp+0xfffffec8u), r_eax);
    /* 0052a223: jmp 0x52a22f */ goto L_0052a22f;
L_0052a225:; BB(0x0052a225);
    /* 0052a225: mov dword ptr [ebp - 0x138], 0 */ W32((u32)(r_ebp+0xfffffec8u), 0x0u);
L_0052a22f:; BB(0x0052a22f);
    /* 0052a22f: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0052a236: jmp 0x52a241 */ goto L_0052a241;
L_0052a238:; BB(0x0052a238);
    /* 0052a238: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052a23b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052a23e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0052a241:; BB(0x0052a241);
    /* 0052a241: cmp dword ptr [ebp - 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052a245: jge 0x52a297 */ if ((fS==fO)) goto L_0052a297;
L_0052a247:; BB(0x0052a247);
    /* 0052a247: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052a24a: mov edx, dword ptr [ebp - 0xfc] */ r_edx = R32((u32)(r_ebp+0xffffff04u));
    /* 0052a250: mov eax, dword ptr [edx + ecx*4 + 0x74] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x74u));
    /* 0052a254: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0052a25a: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0052a260: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
    /* 0052a266: cmp dword ptr [ebp - 0x8c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a26d: je 0x52a28b */ if (fZ) goto L_0052a28b;
L_0052a26f:; BB(0x0052a26f);
    /* 0052a26f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a271: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0052a277: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052a279: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0052a27f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052a281: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52a283u); call_ind(t); }
    /* 0052a283: mov dword ptr [ebp - 0x13c], eax */ W32((u32)(r_ebp+0xfffffec4u), r_eax);
    /* 0052a289: jmp 0x52a295 */ goto L_0052a295;
L_0052a28b:; BB(0x0052a28b);
    /* 0052a28b: mov dword ptr [ebp - 0x13c], 0 */ W32((u32)(r_ebp+0xfffffec4u), 0x0u);
L_0052a295:; BB(0x0052a295);
    /* 0052a295: jmp 0x52a238 */ goto L_0052a238;
L_0052a297:; BB(0x0052a297);
    /* 0052a297: mov eax, dword ptr [ebp - 0xfc] */ r_eax = R32((u32)(r_ebp+0xffffff04u));
    /* 0052a29d: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0052a2a3: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 0052a2a9: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 0052a2af: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 0052a2b5: cmp dword ptr [ebp - 0x94], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a2bc: je 0x52a2da */ if (fZ) goto L_0052a2da;
L_0052a2be:; BB(0x0052a2be);
    /* 0052a2be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a2c0: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 0052a2c6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052a2c8: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0052a2ce: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052a2d0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52a2d2u); call_ind(t); }
    /* 0052a2d2: mov dword ptr [ebp - 0x140], eax */ W32((u32)(r_ebp+0xfffffec0u), r_eax);
    /* 0052a2d8: jmp 0x52a2e4 */ goto L_0052a2e4;
L_0052a2da:; BB(0x0052a2da);
    /* 0052a2da: mov dword ptr [ebp - 0x140], 0 */ W32((u32)(r_ebp+0xfffffec0u), 0x0u);
L_0052a2e4:; BB(0x0052a2e4);
    /* 0052a2e4: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0052a2eb: jmp 0x52a2f6 */ goto L_0052a2f6;
L_0052a2ed:; BB(0x0052a2ed);
    /* 0052a2ed: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052a2f0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052a2f3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0052a2f6:; BB(0x0052a2f6);
    /* 0052a2f6: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052a2fa: jge 0x52a34f */ if ((fS==fO)) goto L_0052a34f;
L_0052a2fc:; BB(0x0052a2fc);
    /* 0052a2fc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052a2ff: mov eax, dword ptr [ebp - 0xfc] */ r_eax = R32((u32)(r_ebp+0xffffff04u));
    /* 0052a305: mov ecx, dword ptr [eax + edx*4 + 0x90] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x90u));
    /* 0052a30c: mov dword ptr [ebp - 0xa0], ecx */ W32((u32)(r_ebp+0xffffff60u), r_ecx);
    /* 0052a312: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 0052a318: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 0052a31e: cmp dword ptr [ebp - 0x9c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a325: je 0x52a343 */ if (fZ) goto L_0052a343;
L_0052a327:; BB(0x0052a327);
    /* 0052a327: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a329: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0052a32f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052a331: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0052a337: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052a339: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52a33bu); call_ind(t); }
    /* 0052a33b: mov dword ptr [ebp - 0x144], eax */ W32((u32)(r_ebp+0xfffffebcu), r_eax);
    /* 0052a341: jmp 0x52a34d */ goto L_0052a34d;
L_0052a343:; BB(0x0052a343);
    /* 0052a343: mov dword ptr [ebp - 0x144], 0 */ W32((u32)(r_ebp+0xfffffebcu), 0x0u);
L_0052a34d:; BB(0x0052a34d);
    /* 0052a34d: jmp 0x52a2ed */ goto L_0052a2ed;
L_0052a34f:; BB(0x0052a34f);
    /* 0052a34f: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0052a356: jmp 0x52a361 */ goto L_0052a361;
L_0052a358:; BB(0x0052a358);
    /* 0052a358: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052a35b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052a35e: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0052a361:; BB(0x0052a361);
    /* 0052a361: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052a365: jge 0x52a3ba */ if ((fS==fO)) goto L_0052a3ba;
L_0052a367:; BB(0x0052a367);
    /* 0052a367: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052a36a: mov eax, dword ptr [ebp - 0xfc] */ r_eax = R32((u32)(r_ebp+0xffffff04u));
    /* 0052a370: mov ecx, dword ptr [eax + edx*4 + 0xa0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xa0u));
    /* 0052a377: mov dword ptr [ebp - 0xa8], ecx */ W32((u32)(r_ebp+0xffffff58u), r_ecx);
    /* 0052a37d: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 0052a383: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 0052a389: cmp dword ptr [ebp - 0xa4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a390: je 0x52a3ae */ if (fZ) goto L_0052a3ae;
L_0052a392:; BB(0x0052a392);
    /* 0052a392: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a394: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0052a39a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052a39c: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0052a3a2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052a3a4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52a3a6u); call_ind(t); }
    /* 0052a3a6: mov dword ptr [ebp - 0x148], eax */ W32((u32)(r_ebp+0xfffffeb8u), r_eax);
    /* 0052a3ac: jmp 0x52a3b8 */ goto L_0052a3b8;
L_0052a3ae:; BB(0x0052a3ae);
    /* 0052a3ae: mov dword ptr [ebp - 0x148], 0 */ W32((u32)(r_ebp+0xfffffeb8u), 0x0u);
L_0052a3b8:; BB(0x0052a3b8);
    /* 0052a3b8: jmp 0x52a358 */ goto L_0052a358;
L_0052a3ba:; BB(0x0052a3ba);
    /* 0052a3ba: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0052a3c1: jmp 0x52a3cc */ goto L_0052a3cc;
L_0052a3c3:; BB(0x0052a3c3);
    /* 0052a3c3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052a3c6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052a3c9: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0052a3cc:; BB(0x0052a3cc);
    /* 0052a3cc: cmp dword ptr [ebp - 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052a3d0: jge 0x52a422 */ if ((fS==fO)) goto L_0052a422;
L_0052a3d2:; BB(0x0052a3d2);
    /* 0052a3d2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052a3d5: mov eax, dword ptr [ebp - 0xfc] */ r_eax = R32((u32)(r_ebp+0xffffff04u));
    /* 0052a3db: mov ecx, dword ptr [eax + edx*4 + 0x3c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x3cu));
    /* 0052a3df: mov dword ptr [ebp - 0xb0], ecx */ W32((u32)(r_ebp+0xffffff50u), r_ecx);
    /* 0052a3e5: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 0052a3eb: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 0052a3f1: cmp dword ptr [ebp - 0xac], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a3f8: je 0x52a416 */ if (fZ) goto L_0052a416;
L_0052a3fa:; BB(0x0052a3fa);
    /* 0052a3fa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a3fc: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0052a402: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052a404: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0052a40a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052a40c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52a40eu); call_ind(t); }
    /* 0052a40e: mov dword ptr [ebp - 0x14c], eax */ W32((u32)(r_ebp+0xfffffeb4u), r_eax);
    /* 0052a414: jmp 0x52a420 */ goto L_0052a420;
L_0052a416:; BB(0x0052a416);
    /* 0052a416: mov dword ptr [ebp - 0x14c], 0 */ W32((u32)(r_ebp+0xfffffeb4u), 0x0u);
L_0052a420:; BB(0x0052a420);
    /* 0052a420: jmp 0x52a3c3 */ goto L_0052a3c3;
L_0052a422:; BB(0x0052a422);
    /* 0052a422: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 0052a428: cmp dword ptr [ecx + 0xac], 0 */ {  u32 a = R32((u32)(r_ecx+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a42f: je 0x52a47e */ if (fZ) goto L_0052a47e;
L_0052a431:; BB(0x0052a431);
    /* 0052a431: mov edx, dword ptr [ebp - 0xfc] */ r_edx = R32((u32)(r_ebp+0xffffff04u));
    /* 0052a437: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 0052a43d: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 0052a443: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0052a449: mov dword ptr [ebp - 0xb4], ecx */ W32((u32)(r_ebp+0xffffff4cu), r_ecx);
    /* 0052a44f: cmp dword ptr [ebp - 0xb4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a456: je 0x52a474 */ if (fZ) goto L_0052a474;
L_0052a458:; BB(0x0052a458);
    /* 0052a458: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a45a: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0052a460: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052a462: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0052a468: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052a46a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52a46cu); call_ind(t); }
    /* 0052a46c: mov dword ptr [ebp - 0x150], eax */ W32((u32)(r_ebp+0xfffffeb0u), r_eax);
    /* 0052a472: jmp 0x52a47e */ goto L_0052a47e;
L_0052a474:; BB(0x0052a474);
    /* 0052a474: mov dword ptr [ebp - 0x150], 0 */ W32((u32)(r_ebp+0xfffffeb0u), 0x0u);
L_0052a47e:; BB(0x0052a47e);
    /* 0052a47e: mov eax, dword ptr [ebp - 0xfc] */ r_eax = R32((u32)(r_ebp+0xffffff04u));
    /* 0052a484: cmp dword ptr [eax + 0xb0], 0 */ {  u32 a = R32((u32)(r_eax+0xb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a48b: je 0x52a4da */ if (fZ) goto L_0052a4da;
L_0052a48d:; BB(0x0052a48d);
    /* 0052a48d: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 0052a493: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 0052a499: mov dword ptr [ebp - 0xc0], edx */ W32((u32)(r_ebp+0xffffff40u), r_edx);
    /* 0052a49f: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 0052a4a5: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 0052a4ab: cmp dword ptr [ebp - 0xbc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a4b2: je 0x52a4d0 */ if (fZ) goto L_0052a4d0;
L_0052a4b4:; BB(0x0052a4b4);
    /* 0052a4b4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a4b6: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 0052a4bc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052a4be: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 0052a4c4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052a4c6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52a4c8u); call_ind(t); }
    /* 0052a4c8: mov dword ptr [ebp - 0x154], eax */ W32((u32)(r_ebp+0xfffffeacu), r_eax);
    /* 0052a4ce: jmp 0x52a4da */ goto L_0052a4da;
L_0052a4d0:; BB(0x0052a4d0);
    /* 0052a4d0: mov dword ptr [ebp - 0x154], 0 */ W32((u32)(r_ebp+0xfffffeacu), 0x0u);
L_0052a4da:; BB(0x0052a4da);
    /* 0052a4da: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0052a4e1: jmp 0x52a4ec */ goto L_0052a4ec;
L_0052a4e3:; BB(0x0052a4e3);
    /* 0052a4e3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052a4e6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052a4e9: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0052a4ec:; BB(0x0052a4ec);
    /* 0052a4ec: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052a4f0: jge 0x52a545 */ if ((fS==fO)) goto L_0052a545;
L_0052a4f2:; BB(0x0052a4f2);
    /* 0052a4f2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052a4f5: mov eax, dword ptr [ebp - 0xfc] */ r_eax = R32((u32)(r_ebp+0xffffff04u));
    /* 0052a4fb: mov ecx, dword ptr [eax + edx*4 + 0xb4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xb4u));
    /* 0052a502: mov dword ptr [ebp - 0xc8], ecx */ W32((u32)(r_ebp+0xffffff38u), r_ecx);
    /* 0052a508: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 0052a50e: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
    /* 0052a514: cmp dword ptr [ebp - 0xc4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a51b: je 0x52a539 */ if (fZ) goto L_0052a539;
L_0052a51d:; BB(0x0052a51d);
    /* 0052a51d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a51f: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 0052a525: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052a527: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0052a52d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052a52f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52a531u); call_ind(t); }
    /* 0052a531: mov dword ptr [ebp - 0x158], eax */ W32((u32)(r_ebp+0xfffffea8u), r_eax);
    /* 0052a537: jmp 0x52a543 */ goto L_0052a543;
L_0052a539:; BB(0x0052a539);
    /* 0052a539: mov dword ptr [ebp - 0x158], 0 */ W32((u32)(r_ebp+0xfffffea8u), 0x0u);
L_0052a543:; BB(0x0052a543);
    /* 0052a543: jmp 0x52a4e3 */ goto L_0052a4e3;
L_0052a545:; BB(0x0052a545);
    /* 0052a545: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 0052a54b: mov edx, dword ptr [ecx + 0xc0] */ r_edx = R32((u32)(r_ecx+0xc0u));
    /* 0052a551: mov dword ptr [ebp - 0xd0], edx */ W32((u32)(r_ebp+0xffffff30u), r_edx);
    /* 0052a557: mov eax, dword ptr [ebp - 0xd0] */ r_eax = R32((u32)(r_ebp+0xffffff30u));
    /* 0052a55d: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 0052a563: cmp dword ptr [ebp - 0xcc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a56a: je 0x52a588 */ if (fZ) goto L_0052a588;
L_0052a56c:; BB(0x0052a56c);
    /* 0052a56c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a56e: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0052a574: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052a576: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0052a57c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052a57e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52a580u); call_ind(t); }
    /* 0052a580: mov dword ptr [ebp - 0x15c], eax */ W32((u32)(r_ebp+0xfffffea4u), r_eax);
    /* 0052a586: jmp 0x52a592 */ goto L_0052a592;
L_0052a588:; BB(0x0052a588);
    /* 0052a588: mov dword ptr [ebp - 0x15c], 0 */ W32((u32)(r_ebp+0xfffffea4u), 0x0u);
L_0052a592:; BB(0x0052a592);
    /* 0052a592: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 0052a598: mov edx, dword ptr [ecx + 0xc4] */ r_edx = R32((u32)(r_ecx+0xc4u));
    /* 0052a59e: mov dword ptr [ebp - 0xd8], edx */ W32((u32)(r_ebp+0xffffff28u), r_edx);
    /* 0052a5a4: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 0052a5aa: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 0052a5b0: cmp dword ptr [ebp - 0xd4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a5b7: je 0x52a5d5 */ if (fZ) goto L_0052a5d5;
L_0052a5b9:; BB(0x0052a5b9);
    /* 0052a5b9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a5bb: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 0052a5c1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052a5c3: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 0052a5c9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052a5cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52a5cdu); call_ind(t); }
    /* 0052a5cd: mov dword ptr [ebp - 0x160], eax */ W32((u32)(r_ebp+0xfffffea0u), r_eax);
    /* 0052a5d3: jmp 0x52a5df */ goto L_0052a5df;
L_0052a5d5:; BB(0x0052a5d5);
    /* 0052a5d5: mov dword ptr [ebp - 0x160], 0 */ W32((u32)(r_ebp+0xfffffea0u), 0x0u);
L_0052a5df:; BB(0x0052a5df);
    /* 0052a5df: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 0052a5e5: mov edx, dword ptr [ecx + 0xc8] */ r_edx = R32((u32)(r_ecx+0xc8u));
    /* 0052a5eb: mov dword ptr [ebp - 0xe0], edx */ W32((u32)(r_ebp+0xffffff20u), r_edx);
    /* 0052a5f1: mov eax, dword ptr [ebp - 0xe0] */ r_eax = R32((u32)(r_ebp+0xffffff20u));
    /* 0052a5f7: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 0052a5fd: cmp dword ptr [ebp - 0xdc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a604: je 0x52a622 */ if (fZ) goto L_0052a622;
L_0052a606:; BB(0x0052a606);
    /* 0052a606: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a608: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 0052a60e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052a610: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 0052a616: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052a618: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52a61au); call_ind(t); }
    /* 0052a61a: mov dword ptr [ebp - 0x164], eax */ W32((u32)(r_ebp+0xfffffe9cu), r_eax);
    /* 0052a620: jmp 0x52a62c */ goto L_0052a62c;
L_0052a622:; BB(0x0052a622);
    /* 0052a622: mov dword ptr [ebp - 0x164], 0 */ W32((u32)(r_ebp+0xfffffe9cu), 0x0u);
L_0052a62c:; BB(0x0052a62c);
    /* 0052a62c: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0052a633: jmp 0x52a63e */ goto L_0052a63e;
L_0052a635:; BB(0x0052a635);
    /* 0052a635: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052a638: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052a63b: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0052a63e:; BB(0x0052a63e);
    /* 0052a63e: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052a642: jge 0x52a6ef */ if ((fS==fO)) goto L_0052a6ef;
L_0052a648:; BB(0x0052a648);
    /* 0052a648: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052a64b: mov eax, dword ptr [ebp - 0xfc] */ r_eax = R32((u32)(r_ebp+0xffffff04u));
    /* 0052a651: mov ecx, dword ptr [eax + edx*4 + 0xcc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xccu));
    /* 0052a658: mov dword ptr [ebp - 0xe8], ecx */ W32((u32)(r_ebp+0xffffff18u), r_ecx);
    /* 0052a65e: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 0052a664: mov dword ptr [ebp - 0xe4], edx */ W32((u32)(r_ebp+0xffffff1cu), r_edx);
    /* 0052a66a: cmp dword ptr [ebp - 0xe4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a671: je 0x52a68f */ if (fZ) goto L_0052a68f;
L_0052a673:; BB(0x0052a673);
    /* 0052a673: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a675: mov eax, dword ptr [ebp - 0xe4] */ r_eax = R32((u32)(r_ebp+0xffffff1cu));
    /* 0052a67b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052a67d: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 0052a683: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052a685: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52a687u); call_ind(t); }
    /* 0052a687: mov dword ptr [ebp - 0x168], eax */ W32((u32)(r_ebp+0xfffffe98u), r_eax);
    /* 0052a68d: jmp 0x52a699 */ goto L_0052a699;
L_0052a68f:; BB(0x0052a68f);
    /* 0052a68f: mov dword ptr [ebp - 0x168], 0 */ W32((u32)(r_ebp+0xfffffe98u), 0x0u);
L_0052a699:; BB(0x0052a699);
    /* 0052a699: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052a69c: mov edx, dword ptr [ebp - 0xfc] */ r_edx = R32((u32)(r_ebp+0xffffff04u));
    /* 0052a6a2: mov eax, dword ptr [edx + ecx*4 + 0xe0] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xe0u));
    /* 0052a6a9: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 0052a6af: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 0052a6b5: mov dword ptr [ebp - 0xec], ecx */ W32((u32)(r_ebp+0xffffff14u), r_ecx);
    /* 0052a6bb: cmp dword ptr [ebp - 0xec], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a6c2: je 0x52a6e0 */ if (fZ) goto L_0052a6e0;
L_0052a6c4:; BB(0x0052a6c4);
    /* 0052a6c4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a6c6: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 0052a6cc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052a6ce: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 0052a6d4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052a6d6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52a6d8u); call_ind(t); }
    /* 0052a6d8: mov dword ptr [ebp - 0x16c], eax */ W32((u32)(r_ebp+0xfffffe94u), r_eax);
    /* 0052a6de: jmp 0x52a6ea */ goto L_0052a6ea;
L_0052a6e0:; BB(0x0052a6e0);
    /* 0052a6e0: mov dword ptr [ebp - 0x16c], 0 */ W32((u32)(r_ebp+0xfffffe94u), 0x0u);
L_0052a6ea:; BB(0x0052a6ea);
    /* 0052a6ea: jmp 0x52a635 */ goto L_0052a635;
L_0052a6ef:; BB(0x0052a6ef);
    /* 0052a6ef: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0052a6f6: jmp 0x52a701 */ goto L_0052a701;
L_0052a6f8:; BB(0x0052a6f8);
    /* 0052a6f8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052a6fb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052a6fe: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0052a701:; BB(0x0052a701);
    /* 0052a701: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052a705: jge 0x52a75a */ if ((fS==fO)) goto L_0052a75a;
L_0052a707:; BB(0x0052a707);
    /* 0052a707: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052a70a: mov edx, dword ptr [ebp - 0xfc] */ r_edx = R32((u32)(r_ebp+0xffffff04u));
    /* 0052a710: mov eax, dword ptr [edx + ecx*4 + 0xf4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xf4u));
    /* 0052a717: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 0052a71d: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 0052a723: mov dword ptr [ebp - 0xf4], ecx */ W32((u32)(r_ebp+0xffffff0cu), r_ecx);
    /* 0052a729: cmp dword ptr [ebp - 0xf4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff0cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a730: je 0x52a74e */ if (fZ) goto L_0052a74e;
L_0052a732:; BB(0x0052a732);
    /* 0052a732: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052a734: mov edx, dword ptr [ebp - 0xf4] */ r_edx = R32((u32)(r_ebp+0xffffff0cu));
    /* 0052a73a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052a73c: mov ecx, dword ptr [ebp - 0xf4] */ r_ecx = R32((u32)(r_ebp+0xffffff0cu));
    /* 0052a742: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052a744: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52a746u); call_ind(t); }
    /* 0052a746: mov dword ptr [ebp - 0x170], eax */ W32((u32)(r_ebp+0xfffffe90u), r_eax);
    /* 0052a74c: jmp 0x52a758 */ goto L_0052a758;
L_0052a74e:; BB(0x0052a74e);
    /* 0052a74e: mov dword ptr [ebp - 0x170], 0 */ W32((u32)(r_ebp+0xfffffe90u), 0x0u);
L_0052a758:; BB(0x0052a758);
    /* 0052a758: jmp 0x52a6f8 */ goto L_0052a6f8;
L_0052a75a:; BB(0x0052a75a);
    /* 0052a75a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052a761: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 0052a767: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x52a76cu); f_005e9e40();
    /* 0052a76c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a76f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052a776: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052a777: mov esp, ebp */ r_esp = r_ebp;
    /* 0052a779: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052a77a: ret  */ FN_RET(0x00529e70); r_esp += 4; return;
}

void f_0052aea0(void) /* slotmachinedisplay::func_0052aea0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052aea0);
    /* 0052aea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052aea1: mov ebp, esp */ r_ebp = r_esp;
    /* 0052aea3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052aea5: push 0x6a42aa */ { u32 v = 0x6a42aau; r_esp -= 4; W32(r_esp, v); }
    /* 0052aeaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0052aeb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052aeb1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052aeb4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0052aeb9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052aebb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052aebc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0052aebf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0052aec5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0052aec8: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 0052aecd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052aecf: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052aed5: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0052aed8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52aedau); call_ind(t); }
    /* 0052aeda: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052aedd: jne 0x52af0d */ if (!fZ) goto L_0052af0d;
L_0052aedf:; BB(0x0052aedf);
    /* 0052aedf: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052aee3: jl 0x52aeeb */ if ((fS!=fO)) goto L_0052aeeb;
L_0052aee5:; BB(0x0052aee5);
    /* 0052aee5: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052aee9: jle 0x52af02 */ if ((fZ||fS!=fO)) goto L_0052af02;
L_0052aeeb:; BB(0x0052aeeb);
    /* 0052aeeb: push 0x128 */ { u32 v = 0x128u; r_esp -= 4; W32(r_esp, v); }
    /* 0052aef0: push 0x6c3b5c */ { u32 v = 0x6c3b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052aef5: push 0x6c3b44 */ { u32 v = 0x6c3b44u; r_esp -= 4; W32(r_esp, v); }
    /* 0052aefa: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x52aeffu); f_005e9f20();
    /* 0052aeff: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0052af02:; BB(0x0052af02);
    /* 0052af02: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0052af05: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0052af08: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0052af0b: jmp 0x52af39 */ goto L_0052af39;
L_0052af0d:; BB(0x0052af0d);
    /* 0052af0d: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052af11: jl 0x52af19 */ if ((fS!=fO)) goto L_0052af19;
L_0052af13:; BB(0x0052af13);
    /* 0052af13: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052af17: jle 0x52af30 */ if ((fZ||fS!=fO)) goto L_0052af30;
L_0052af19:; BB(0x0052af19);
    /* 0052af19: push 0x12b */ { u32 v = 0x12bu; r_esp -= 4; W32(r_esp, v); }
    /* 0052af1e: push 0x6c3b5c */ { u32 v = 0x6c3b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052af23: push 0x6c3b2c */ { u32 v = 0x6c3b2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052af28: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x52af2du); f_005e9f20();
    /* 0052af2d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0052af30:; BB(0x0052af30);
    /* 0052af30: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0052af33: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052af36: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0052af39:; BB(0x0052af39);
    /* 0052af39: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052af3d: jl 0x52af45 */ if ((fS!=fO)) goto L_0052af45;
L_0052af3f:; BB(0x0052af3f);
    /* 0052af3f: cmp dword ptr [ebp - 0x10], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052af43: jle 0x52af5c */ if ((fZ||fS!=fO)) goto L_0052af5c;
L_0052af45:; BB(0x0052af45);
    /* 0052af45: push 0x12e */ { u32 v = 0x12eu; r_esp -= 4; W32(r_esp, v); }
    /* 0052af4a: push 0x6c3b5c */ { u32 v = 0x6c3b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052af4f: push 0x6c3b1c */ { u32 v = 0x6c3b1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052af54: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x52af59u); f_005e9f20();
    /* 0052af59: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0052af5c:; BB(0x0052af5c);
    /* 0052af5c: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0052af5e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52af63u); f_00686d82();
    /* 0052af63: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052af66: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0052af69: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052af70: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052af74: je 0x52af8d */ if (fZ) goto L_0052af8d;
L_0052af76:; BB(0x0052af76);
    /* 0052af76: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052af78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052af7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052af7c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052af7e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052af80: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052af83: call 0x601110 */ r_esp -= 4; W32(r_esp, 0x52af88u); f_00601110();
    /* 0052af88: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0052af8b: jmp 0x52af94 */ goto L_0052af94;
L_0052af8d:; BB(0x0052af8d);
    /* 0052af8d: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0052af94:; BB(0x0052af94);
    /* 0052af94: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052af97: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0052af9a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052afa1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0052afa4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052afa5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052afa8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052afab: mov ecx, dword ptr [eax + edx*4 + 0x3c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x3cu));
    /* 0052afaf: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52afb4u); f_005f5d50();
    /* 0052afb4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052afb7: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052afba: mov eax, dword ptr [edx + ecx*4 + 0x3c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x3cu));
    /* 0052afbe: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052afc1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052afc4: mov ecx, dword ptr [edx + ecx*4 + 0x3c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x3cu));
    /* 0052afc8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0052afca: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0052afcd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52afcfu); call_ind(t); }
    /* 0052afcf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052afd2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052afd9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052afda: mov esp, ebp */ r_esp = r_ebp;
    /* 0052afdc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052afdd: ret 4 */ FN_RET(0x0052aea0); r_esp += 8; return;
}

void f_0052ddf0(void) /* slotmachinedisplay::func_0052ddf0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052ddf0);
    /* 0052ddf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052ddf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0052ddf3: sub esp, 0x124 */ {  u32 a = r_esp; u32 b = 0x124u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052ddf9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0052ddfe: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052de00: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0052de03: mov dword ptr [ebp - 0x124], ecx */ W32((u32)(r_ebp+0xfffffedcu), r_ecx);
    /* 0052de09: mov eax, dword ptr [0x79338c] */ r_eax = R32((u32)(0x79338cu));
    /* 0052de0e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0052de11: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0052de14: cmp dword ptr [ebp - 4], 0xf423f */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052de1b: jle 0x52de3d */ if ((fZ||fS!=fO)) goto L_0052de3d;
L_0052de1d:; BB(0x0052de1d);
    /* 0052de1d: push 0x6c3b94 */ { u32 v = 0x6c3b94u; r_esp -= 4; W32(r_esp, v); }
    /* 0052de22: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x52de27u); f_00630f40();
    /* 0052de27: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052de2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052de2b: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 0052de31: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052de32: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x52de38u); call_ind(t); }
    /* 0052de38: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052de3b: jmp 0x52de56 */ goto L_0052de56;
L_0052de3d:; BB(0x0052de3d);
    /* 0052de3d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052de40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052de41: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 0052de46: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 0052de4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052de4d: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x52de53u); call_ind(t); }
    /* 0052de53: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0052de56:; BB(0x0052de56);
    /* 0052de56: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
    /* 0052de60: jmp 0x52de71 */ goto L_0052de71;
L_0052de62:; BB(0x0052de62);
    /* 0052de62: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0052de68: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052de6b: mov dword ptr [ebp - 0x10c], edx */ W32((u32)(r_ebp+0xfffffef4u), r_edx);
L_0052de71:; BB(0x0052de71);
    /* 0052de71: cmp dword ptr [ebp - 0x10c], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052de78: jge 0x52deab */ if ((fS==fO)) goto L_0052deab;
L_0052de7a:; BB(0x0052de7a);
    /* 0052de7a: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0052de7f: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 0052de85: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0052de8b: mov edx, dword ptr [ecx + eax*4 + 0x74] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x74u));
    /* 0052de8f: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 0052de95: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0052de9b: mov ecx, dword ptr [ecx + eax*4 + 0x74] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x74u));
    /* 0052de9f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052dea1: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0052dea7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52dea9u); call_ind(t); }
    /* 0052dea9: jmp 0x52de62 */ goto L_0052de62;
L_0052deab:; BB(0x0052deab);
    /* 0052deab: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 0052deb1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052deb2: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x52deb7u); f_00686ecc();
    /* 0052deb7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052deba: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 0052dec0: cmp dword ptr [ebp - 0x114], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffeecu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052dec7: jle 0x52deee */ if ((fZ||fS!=fO)) goto L_0052deee;
L_0052dec9:; BB(0x0052dec9);
    /* 0052dec9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0052decb: jne 0x52dee4 */ if (!fZ) goto L_0052dee4;
L_0052decd:; BB(0x0052decd);
    /* 0052decd: push 0x393 */ { u32 v = 0x393u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ded2: push 0x6c3b5c */ { u32 v = 0x6c3b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052ded7: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0052dedc: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x52dee1u); f_005e9f20();
    /* 0052dee1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0052dee4:; BB(0x0052dee4);
    /* 0052dee4: mov dword ptr [ebp - 0x114], 6 */ W32((u32)(r_ebp+0xfffffeecu), 0x6u);
L_0052deee:; BB(0x0052deee);
    /* 0052deee: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
    /* 0052def8: jmp 0x52df09 */ goto L_0052df09;
L_0052defa:; BB(0x0052defa);
    /* 0052defa: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0052df00: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052df03: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
L_0052df09:; BB(0x0052df09);
    /* 0052df09: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0052df0f: cmp edx, dword ptr [ebp - 0x114] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffeecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052df15: jge 0x52df7f */ if ((fS==fO)) goto L_0052df7f;
L_0052df17:; BB(0x0052df17);
    /* 0052df17: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052df1d: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052df20: sub eax, dword ptr [ebp - 0x10c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffef4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052df26: mov cl, byte ptr [ebp + eax - 0x108] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+r_eax+0xfffffef8u))) & 0xffu);
    /* 0052df2d: mov byte ptr [ebp - 0x110], cl */ W8((u32)(r_ebp+0xfffffef0u), (u8)r_ecx);
    /* 0052df33: mov byte ptr [ebp - 0x10f], 0 */ W8((u32)(r_ebp+0xfffffef1u), 0x0u);
    /* 0052df3a: movsx edx, byte ptr [ebp - 0x110] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffef0u));
    /* 0052df41: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052df43: je 0x52df78 */ if (fZ) goto L_0052df78;
L_0052df45:; BB(0x0052df45);
    /* 0052df45: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 0052df4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052df4c: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0052df52: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0052df58: mov eax, dword ptr [edx + ecx*4 + 0x74] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x74u));
    /* 0052df5c: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0052df62: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0052df68: mov ecx, dword ptr [edx + ecx*4 + 0x74] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x74u));
    /* 0052df6c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0052df6e: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0052df74: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52df76u); call_ind(t); }
    /* 0052df76: jmp 0x52df7a */ goto L_0052df7a;
L_0052df78:; BB(0x0052df78);
    /* 0052df78: jmp 0x52df7f */ goto L_0052df7f;
L_0052df7a:; BB(0x0052df7a);
    /* 0052df7a: jmp 0x52defa */ goto L_0052defa;
L_0052df7f:; BB(0x0052df7f);
    /* 0052df7f: mov eax, dword ptr [0x79338c] */ r_eax = R32((u32)(0x79338cu));
    /* 0052df84: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0052df87: mov dword ptr [ebp - 0x11c], ecx */ W32((u32)(r_ebp+0xfffffee4u), r_ecx);
    /* 0052df8d: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0052df93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052df94: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 0052df99: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 0052df9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052dfa0: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x52dfa6u); call_ind(t); }
    /* 0052dfa6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052dfa9: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 0052dfaf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052dfb0: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0052dfb6: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0052dfbc: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0052dfc2: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 0052dfc8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052dfca: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0052dfd0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52dfd2u); call_ind(t); }
    /* 0052dfd2: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0052dfd8: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 0052dfde: mov eax, dword ptr [ebp - 0x124] */ r_eax = R32((u32)(r_ebp+0xfffffedcu));
    /* 0052dfe4: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0052dfea: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052dfec: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052dfef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52dff1u); call_ind(t); }
    /* 0052dff1: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052dff7: movzx edx, byte ptr [ecx + 0x7f] */ r_edx = (u32)R8((u32)(r_ecx+0x7fu));
    /* 0052dffb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052dffd: je 0x52e004 */ if (fZ) goto L_0052e004;
L_0052dfff:; BB(0x0052dfff);
    /* 0052dfff: jmp 0x52e145 */ goto L_0052e145;
L_0052e004:; BB(0x0052e004);
    /* 0052e004: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052e00a: call 0x538440 */ r_esp -= 4; W32(r_esp, 0x52e00fu); f_00538440();
    /* 0052e00f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0052e012: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e014: je 0x52e0cf */ if (fZ) goto L_0052e0cf;
L_0052e01a:; BB(0x0052e01a);
    /* 0052e01a: mov dword ptr [ebp - 0x118], 0 */ W32((u32)(r_ebp+0xfffffee8u), 0x0u);
    /* 0052e024: jmp 0x52e035 */ goto L_0052e035;
L_0052e026:; BB(0x0052e026);
    /* 0052e026: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0052e02c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052e02f: mov dword ptr [ebp - 0x118], ecx */ W32((u32)(r_ebp+0xfffffee8u), r_ecx);
L_0052e035:; BB(0x0052e035);
    /* 0052e035: cmp dword ptr [ebp - 0x118], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffee8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052e03c: jge 0x52e0cf */ if ((fS==fO)) goto L_0052e0cf;
L_0052e042:; BB(0x0052e042);
    /* 0052e042: mov edx, dword ptr [0x79338c] */ r_edx = R32((u32)(0x79338cu));
    /* 0052e048: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0052e04b: mov dword ptr [ebp - 0x120], eax */ W32((u32)(r_ebp+0xfffffee0u), r_eax);
    /* 0052e051: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0052e057: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052e05a: cmp ecx, dword ptr [ebp - 0x120] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffee0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052e060: jg 0x52e098 */ if ((!fZ&&fS==fO)) goto L_0052e098;
L_0052e062:; BB(0x0052e062);
    /* 0052e062: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e064: mov edx, dword ptr [ebp - 0x118] */ r_edx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0052e06a: mov eax, dword ptr [ebp - 0x124] */ r_eax = R32((u32)(r_ebp+0xfffffedcu));
    /* 0052e070: mov ecx, dword ptr [eax + edx*4 + 0xa0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xa0u));
    /* 0052e077: mov edx, dword ptr [ebp - 0x118] */ r_edx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0052e07d: mov eax, dword ptr [ebp - 0x124] */ r_eax = R32((u32)(r_ebp+0xfffffedcu));
    /* 0052e083: mov edx, dword ptr [eax + edx*4 + 0xa0] */ r_edx = R32((u32)(r_eax+r_edx*4+0xa0u));
    /* 0052e08a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0052e08c: mov ecx, edx */ r_ecx = r_edx;
    /* 0052e08e: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0052e094: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52e096u); call_ind(t); }
    /* 0052e096: jmp 0x52e0ca */ goto L_0052e0ca;
L_0052e098:; BB(0x0052e098);
    /* 0052e098: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e09a: mov eax, dword ptr [ebp - 0x118] */ r_eax = R32((u32)(r_ebp+0xfffffee8u));
    /* 0052e0a0: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0052e0a6: mov edx, dword ptr [ecx + eax*4 + 0xa0] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xa0u));
    /* 0052e0ad: mov eax, dword ptr [ebp - 0x118] */ r_eax = R32((u32)(r_ebp+0xfffffee8u));
    /* 0052e0b3: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0052e0b9: mov ecx, dword ptr [ecx + eax*4 + 0xa0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xa0u));
    /* 0052e0c0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052e0c2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0052e0c8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52e0cau); call_ind(t); }
L_0052e0ca:; BB(0x0052e0ca);
    /* 0052e0ca: jmp 0x52e026 */ goto L_0052e026;
L_0052e0cf:; BB(0x0052e0cf);
    /* 0052e0cf: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0052e0d5: call 0x52ac20 */ r_esp -= 4; W32(r_esp, 0x52e0dau); f_0052ac20();
    /* 0052e0da: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052e0e0: call 0x536150 */ r_esp -= 4; W32(r_esp, 0x52e0e5u); f_00536150();
    /* 0052e0e5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0052e0e8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e0ea: jne 0x52e0f9 */ if (!fZ) goto L_0052e0f9;
L_0052e0ec:; BB(0x0052e0ec);
    /* 0052e0ec: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0052e0f2: call 0x52e2b0 */ r_esp -= 4; W32(r_esp, 0x52e0f7u); f_0052e2b0();
    /* 0052e0f7: jmp 0x52e145 */ goto L_0052e145;
L_0052e0f9:; BB(0x0052e0f9);
    /* 0052e0f9: mov edx, dword ptr [0x79338c] */ r_edx = R32((u32)(0x79338cu));
    /* 0052e0ff: movzx eax, byte ptr [edx + 0x7d] */ r_eax = (u32)R8((u32)(r_edx+0x7du));
    /* 0052e103: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e105: je 0x52e145 */ if (fZ) goto L_0052e145;
L_0052e107:; BB(0x0052e107);
    /* 0052e107: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052e10d: mov byte ptr [ecx + 0x7d], 0 */ W8((u32)(r_ecx+0x7du), 0x0u);
    /* 0052e111: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e113: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0052e119: mov ecx, dword ptr [edx + 0xc4] */ r_ecx = R32((u32)(r_edx+0xc4u));
    /* 0052e11f: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52e124u); f_005f5d50();
    /* 0052e124: mov eax, dword ptr [ebp - 0x124] */ r_eax = R32((u32)(r_ebp+0xfffffedcu));
    /* 0052e12a: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 0052e130: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0052e136: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 0052e13c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052e13e: mov ecx, eax */ r_ecx = r_eax;
    /* 0052e140: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052e143: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52e145u); call_ind(t); }
L_0052e145:; BB(0x0052e145);
    /* 0052e145: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052e148: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052e14a: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x52e14fu); f_00686d72();
    /* 0052e14f: mov esp, ebp */ r_esp = r_ebp;
    /* 0052e151: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052e152: ret  */ FN_RET(0x0052ddf0); r_esp += 4; return;
}

void f_0052e160(void) /* slotmachinedisplay::func_0052e160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052e160);
    /* 0052e160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052e161: mov ebp, esp */ r_ebp = r_esp;
    /* 0052e163: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052e169: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0052e16e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052e170: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0052e173: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 0052e176: mov eax, dword ptr [0x79338c] */ r_eax = R32((u32)(0x79338cu));
    /* 0052e17b: cmp dword ptr [eax + 0x78], 0x270f */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x270fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052e182: jle 0x52e1a1 */ if ((fZ||fS!=fO)) goto L_0052e1a1;
L_0052e184:; BB(0x0052e184);
    /* 0052e184: push 0x6c3bb0 */ { u32 v = 0x6c3bb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e189: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x52e18eu); f_00630f40();
    /* 0052e18e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052e191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e192: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 0052e195: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e196: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x52e19cu); call_ind(t); }
    /* 0052e19c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052e19f: jmp 0x52e1bd */ goto L_0052e1bd;
L_0052e1a1:; BB(0x0052e1a1);
    /* 0052e1a1: mov edx, dword ptr [0x79338c] */ r_edx = R32((u32)(0x79338cu));
    /* 0052e1a7: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 0052e1aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e1ab: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e1b0: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 0052e1b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e1b4: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x52e1bau); call_ind(t); }
    /* 0052e1ba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0052e1bd:; BB(0x0052e1bd);
    /* 0052e1bd: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 0052e1c4: jmp 0x52e1cf */ goto L_0052e1cf;
L_0052e1c6:; BB(0x0052e1c6);
    /* 0052e1c6: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0052e1c9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052e1cc: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
L_0052e1cf:; BB(0x0052e1cf);
    /* 0052e1cf: cmp dword ptr [ebp - 0x74], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052e1d3: jge 0x52e200 */ if ((fS==fO)) goto L_0052e200;
L_0052e1d5:; BB(0x0052e1d5);
    /* 0052e1d5: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e1da: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0052e1dd: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0052e1e0: mov edx, dword ptr [ecx + eax*4 + 0x90] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x90u));
    /* 0052e1e7: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0052e1ea: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0052e1ed: mov ecx, dword ptr [ecx + eax*4 + 0x90] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x90u));
    /* 0052e1f4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052e1f6: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0052e1fc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52e1feu); call_ind(t); }
    /* 0052e1fe: jmp 0x52e1c6 */ goto L_0052e1c6;
L_0052e200:; BB(0x0052e200);
    /* 0052e200: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 0052e203: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e204: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x52e209u); f_00686ecc();
    /* 0052e209: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052e20c: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0052e20f: cmp dword ptr [ebp - 0x7c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052e213: jle 0x52e237 */ if ((fZ||fS!=fO)) goto L_0052e237;
L_0052e215:; BB(0x0052e215);
    /* 0052e215: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0052e217: jne 0x52e230 */ if (!fZ) goto L_0052e230;
L_0052e219:; BB(0x0052e219);
    /* 0052e219: push 0x3d5 */ { u32 v = 0x3d5u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e21e: push 0x6c3b5c */ { u32 v = 0x6c3b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052e223: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e228: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x52e22du); f_005e9f20();
    /* 0052e22d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0052e230:; BB(0x0052e230);
    /* 0052e230: mov dword ptr [ebp - 0x7c], 4 */ W32((u32)(r_ebp+0xffffff84u), 0x4u);
L_0052e237:; BB(0x0052e237);
    /* 0052e237: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 0052e23e: jmp 0x52e249 */ goto L_0052e249;
L_0052e240:; BB(0x0052e240);
    /* 0052e240: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0052e243: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052e246: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
L_0052e249:; BB(0x0052e249);
    /* 0052e249: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0052e24c: cmp edx, dword ptr [ebp - 0x7c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff84u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052e24f: jge 0x52e29b */ if ((fS==fO)) goto L_0052e29b;
L_0052e251:; BB(0x0052e251);
    /* 0052e251: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0052e254: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052e257: sub eax, dword ptr [ebp - 0x74] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff8cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052e25a: mov cl, byte ptr [ebp + eax - 0x70] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+r_eax+0xffffff90u))) & 0xffu);
    /* 0052e25e: mov byte ptr [ebp - 0x78], cl */ W8((u32)(r_ebp+0xffffff88u), (u8)r_ecx);
    /* 0052e261: mov byte ptr [ebp - 0x77], 0 */ W8((u32)(r_ebp+0xffffff89u), 0x0u);
    /* 0052e265: movsx edx, byte ptr [ebp - 0x78] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffff88u));
    /* 0052e269: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e26b: je 0x52e297 */ if (fZ) goto L_0052e297;
L_0052e26d:; BB(0x0052e26d);
    /* 0052e26d: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 0052e270: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e271: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0052e274: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0052e277: mov eax, dword ptr [edx + ecx*4 + 0x90] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x90u));
    /* 0052e27e: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0052e281: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0052e284: mov ecx, dword ptr [edx + ecx*4 + 0x90] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x90u));
    /* 0052e28b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0052e28d: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0052e293: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52e295u); call_ind(t); }
    /* 0052e295: jmp 0x52e299 */ goto L_0052e299;
L_0052e297:; BB(0x0052e297);
    /* 0052e297: jmp 0x52e29b */ goto L_0052e29b;
L_0052e299:; BB(0x0052e299);
    /* 0052e299: jmp 0x52e240 */ goto L_0052e240;
L_0052e29b:; BB(0x0052e29b);
    /* 0052e29b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052e29e: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052e2a0: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x52e2a5u); f_00686d72();
    /* 0052e2a5: mov esp, ebp */ r_esp = r_ebp;
    /* 0052e2a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052e2a8: ret  */ FN_RET(0x0052e160); r_esp += 4; return;
}

void f_00531620(void) /* slotmachinedisplay::func_00531620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00531620);
    /* 00531620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00531621: mov ebp, esp */ r_ebp = r_esp;
    /* 00531623: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00531626: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00531629: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053162c: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 00531632: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00531635: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531638: mov dword ptr [edx + 0x18c], ecx */ W32((u32)(r_edx+0x18cu), r_ecx);
    /* 0053163e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531641: movzx ecx, byte ptr [eax + 0x184] */ r_ecx = (u32)R8((u32)(r_eax+0x184u));
    /* 00531648: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053164a: je 0x5316c7 */ if (fZ) goto L_005316c7;
L_0053164c:; BB(0x0053164c);
    /* 0053164c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053164f: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 00531655: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531658: mov ecx, dword ptr [ecx + 0x188] */ r_ecx = R32((u32)(r_ecx+0x188u));
    /* 0053165e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00531660: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00531663: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x531665u); call_ind(t); }
    /* 00531665: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531668: call 0x531a10 */ r_esp -= 4; W32(r_esp, 0x53166du); f_00531a10();
    /* 0053166d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531670: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00531673: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00531676: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531679: mov dword ptr [eax + 0x194], edx */ W32((u32)(r_eax+0x194u), r_edx);
    /* 0053167f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531682: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00531685: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00531686: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531689: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 0053168f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00531690: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531693: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 00531699: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053169c: mov ecx, dword ptr [ecx + 0x188] */ r_ecx = R32((u32)(r_ecx+0x188u));
    /* 005316a2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005316a4: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005316a7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5316a9u); call_ind(t); }
    /* 005316a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005316ac: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 005316b2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005316b5: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 005316bb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005316bd: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005316c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5316c2u); call_ind(t); }
    /* 005316c2: jmp 0x5319ca */ goto L_005319ca;
L_005316c7:; BB(0x005316c7);
    /* 005316c7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005316ca: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 005316d0: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005316d3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005316d6: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005316d9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005316dc: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005316e0: ja 0x5319bd */ if ((!fC&&!fZ)) goto L_005319bd;
L_005316e6:; BB(0x005316e6);
    /* 005316e6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005316e9: jmp dword ptr [ecx*4 + 0x5319d8] */ { u32 t = R32((u32)(r_ecx*4+0x5319d8u)); switch (t) { case 0x5316f0u: goto L_005316f0; case 0x5317bfu: goto L_005317bf; case 0x5317d0u: goto L_005317d0; case 0x5318f2u: goto L_005318f2; case 0x531951u: goto L_00531951; case 0x531819u: goto L_00531819; case 0x531840u: goto L_00531840; case 0x531867u: goto L_00531867; case 0x53188au: goto L_0053188a; case 0x5318aeu: goto L_005318ae; default: UNSUP(0x005316e9, "jump table entry is not a known target"); } }
L_005316f0:; BB(0x005316f0);
    /* 005316f0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005316f3: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 005316f9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005316fc: mov ecx, dword ptr [ecx + 0x188] */ r_ecx = R32((u32)(r_ecx+0x188u));
    /* 00531702: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00531704: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00531707: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x531709u); call_ind(t); }
    /* 00531709: push 0x6c3f14 */ { u32 v = 0x6c3f14u; r_esp -= 4; W32(r_esp, v); }
    /* 0053170e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x531713u); f_00630f40();
    /* 00531713: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00531716: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531717: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053171a: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 00531720: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531723: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 00531729: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053172b: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00531731: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x531733u); call_ind(t); }
    /* 00531733: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531736: mov ecx, dword ptr [ecx + 0x188] */ r_ecx = R32((u32)(r_ecx+0x188u));
    /* 0053173c: call 0x5ef050 */ r_esp -= 4; W32(r_esp, 0x531741u); f_005ef050();
    /* 00531741: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00531744: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531747: mov dword ptr [edx + 0x190], eax */ W32((u32)(r_edx+0x190u), r_eax);
    /* 0053174d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531750: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 00531756: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00531757: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053175a: mov ecx, dword ptr [edx + 0x188] */ r_ecx = R32((u32)(r_edx+0x188u));
    /* 00531760: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x531765u); f_005ecc60();
    /* 00531765: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531768: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0053176b: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053176e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531771: mov dword ptr [edx + 0x194], ecx */ W32((u32)(r_edx+0x194u), r_ecx);
    /* 00531777: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053177a: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0053177d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053177e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531781: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 00531787: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531788: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053178b: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 00531791: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531794: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 0053179a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053179c: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0053179f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5317a1u); call_ind(t); }
    /* 005317a1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005317a4: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 005317aa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005317ad: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 005317b3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005317b5: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005317b8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5317bau); call_ind(t); }
    /* 005317ba: jmp 0x5319ca */ goto L_005319ca;
L_005317bf:; BB(0x005317bf);
    /* 005317bf: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005317c1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005317c3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005317c6: call 0x531b50 */ r_esp -= 4; W32(r_esp, 0x5317cbu); f_00531b50();
    /* 005317cb: jmp 0x5319ca */ goto L_005319ca;
L_005317d0:; BB(0x005317d0);
    /* 005317d0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005317d3: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 005317d9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005317dc: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 005317e2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005317e4: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005317e7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5317e9u); call_ind(t); }
    /* 005317e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005317ec: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005317ef: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005317f5: mov eax, dword ptr [edx + 0x4f10] */ r_eax = R32((u32)(r_edx+0x4f10u));
    /* 005317fb: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005317fe: cmp dword ptr [ebp - 0x10], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00531802: ja 0x5318d2 */ if ((!fC&&!fZ)) goto L_005318d2;
L_00531808:; BB(0x00531808);
    /* 00531808: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053180b: movzx edx, byte ptr [ecx + 0x531a00] */ r_edx = (u32)R8((u32)(r_ecx+0x531a00u));
    /* 00531812: jmp dword ptr [edx*4 + 0x5319ec] */ { u32 t = R32((u32)(r_edx*4+0x5319ecu)); switch (t) { case 0x531951u: goto L_00531951; case 0x5318f2u: goto L_005318f2; case 0x5317d0u: goto L_005317d0; case 0x5317bfu: goto L_005317bf; case 0x5316f0u: goto L_005316f0; case 0x531819u: goto L_00531819; case 0x531840u: goto L_00531840; case 0x531867u: goto L_00531867; case 0x53188au: goto L_0053188a; case 0x5318aeu: goto L_005318ae; default: UNSUP(0x00531812, "jump table entry is not a known target"); } }
L_00531819:; BB(0x00531819);
    /* 00531819: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053181c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00531822: mov edx, dword ptr [ecx + 0x4ed0] */ r_edx = R32((u32)(r_ecx+0x4ed0u));
    /* 00531828: mov dword ptr [eax + 0x1b8], edx */ W32((u32)(r_eax+0x1b8u), r_edx);
    /* 0053182e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531831: mov dword ptr [eax + 0x1bc], 0xfa */ W32((u32)(r_eax+0x1bcu), 0xfau);
    /* 0053183b: jmp 0x5318ed */ goto L_005318ed;
L_00531840:; BB(0x00531840);
    /* 00531840: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531843: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00531849: mov eax, dword ptr [edx + 0x4ed4] */ r_eax = R32((u32)(r_edx+0x4ed4u));
    /* 0053184f: mov dword ptr [ecx + 0x1b8], eax */ W32((u32)(r_ecx+0x1b8u), r_eax);
    /* 00531855: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531858: mov dword ptr [ecx + 0x1bc], 0x2ee */ W32((u32)(r_ecx+0x1bcu), 0x2eeu);
    /* 00531862: jmp 0x5318ed */ goto L_005318ed;
L_00531867:; BB(0x00531867);
    /* 00531867: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053186a: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0053186f: mov ecx, dword ptr [eax + 0x4ed8] */ r_ecx = R32((u32)(r_eax+0x4ed8u));
    /* 00531875: mov dword ptr [edx + 0x1b8], ecx */ W32((u32)(r_edx+0x1b8u), r_ecx);
    /* 0053187b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053187e: mov dword ptr [edx + 0x1bc], 0x3e8 */ W32((u32)(r_edx+0x1bcu), 0x3e8u);
    /* 00531888: jmp 0x5318ed */ goto L_005318ed;
L_0053188a:; BB(0x0053188a);
    /* 0053188a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053188d: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00531893: mov edx, dword ptr [ecx + 0x4edc] */ r_edx = R32((u32)(r_ecx+0x4edcu));
    /* 00531899: mov dword ptr [eax + 0x1b8], edx */ W32((u32)(r_eax+0x1b8u), r_edx);
    /* 0053189f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005318a2: mov dword ptr [eax + 0x1bc], 0x9c4 */ W32((u32)(r_eax+0x1bcu), 0x9c4u);
    /* 005318ac: jmp 0x5318ed */ goto L_005318ed;
L_005318ae:; BB(0x005318ae);
    /* 005318ae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005318b1: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005318b7: mov eax, dword ptr [edx + 0x4ee0] */ r_eax = R32((u32)(r_edx+0x4ee0u));
    /* 005318bd: mov dword ptr [ecx + 0x1b8], eax */ W32((u32)(r_ecx+0x1b8u), r_eax);
    /* 005318c3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005318c6: mov dword ptr [ecx + 0x1bc], 0x1d4c */ W32((u32)(r_ecx+0x1bcu), 0x1d4cu);
    /* 005318d0: jmp 0x5318ed */ goto L_005318ed;
L_005318d2:; BB(0x005318d2);
    /* 005318d2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005318d4: jne 0x5318ed */ if (!fZ) goto L_005318ed;
L_005318d6:; BB(0x005318d6);
    /* 005318d6: push 0x76b */ { u32 v = 0x76bu; r_esp -= 4; W32(r_esp, v); }
    /* 005318db: push 0x6c3b5c */ { u32 v = 0x6c3b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005318e0: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 005318e5: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5318eau); f_005e9f20();
    /* 005318ea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005318ed:; BB(0x005318ed);
    /* 005318ed: jmp 0x5319ca */ goto L_005319ca;
L_005318f2:; BB(0x005318f2);
    /* 005318f2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005318f5: call 0x531a10 */ r_esp -= 4; W32(r_esp, 0x5318fau); f_00531a10();
    /* 005318fa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005318fd: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00531900: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00531903: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531906: mov dword ptr [eax + 0x194], edx */ W32((u32)(r_eax+0x194u), r_edx);
    /* 0053190c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053190f: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00531912: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00531913: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531916: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 0053191c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053191d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531920: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 00531926: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531929: mov ecx, dword ptr [ecx + 0x188] */ r_ecx = R32((u32)(r_ecx+0x188u));
    /* 0053192f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00531931: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00531934: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x531936u); call_ind(t); }
    /* 00531936: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531939: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 0053193f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531942: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 00531948: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053194a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0053194d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53194fu); call_ind(t); }
    /* 0053194f: jmp 0x5319ca */ goto L_005319ca;
L_00531951:; BB(0x00531951);
    /* 00531951: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531954: call 0x531a10 */ r_esp -= 4; W32(r_esp, 0x531959u); f_00531a10();
    /* 00531959: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053195c: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0053195f: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00531962: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531965: mov dword ptr [eax + 0x194], edx */ W32((u32)(r_eax+0x194u), r_edx);
    /* 0053196b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053196e: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00531971: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00531972: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531975: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 0053197b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053197c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053197f: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 00531985: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531988: mov ecx, dword ptr [ecx + 0x188] */ r_ecx = R32((u32)(r_ecx+0x188u));
    /* 0053198e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00531990: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00531993: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x531995u); call_ind(t); }
    /* 00531995: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00531998: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 0053199e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005319a1: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 005319a7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005319a9: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005319ac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5319aeu); call_ind(t); }
    /* 005319ae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005319b1: mov dword ptr [ecx + 0x18c], 0 */ W32((u32)(r_ecx+0x18cu), 0x0u);
    /* 005319bb: jmp 0x5319ca */ goto L_005319ca;
L_005319bd:; BB(0x005319bd);
    /* 005319bd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005319c0: mov dword ptr [edx + 0x18c], 0 */ W32((u32)(r_edx+0x18cu), 0x0u);
L_005319ca:; BB(0x005319ca);
    /* 005319ca: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005319cd: call 0x5eb570 */ r_esp -= 4; W32(r_esp, 0x5319d2u); f_005eb570();
    /* 005319d2: mov esp, ebp */ r_esp = r_ebp;
    /* 005319d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005319d5: ret  */ FN_RET(0x00531620); r_esp += 4; return;
}

void f_00531e30(void) /* slotmachinedisplay::func_00531e30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00531e30);
    /* 00531e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00531e31: mov ebp, esp */ r_ebp = r_esp;
    /* 00531e33: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00531e36: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00531e39: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00531e3c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00531e3f: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00531e45: mov edx, dword ptr [ecx + 0x4f10] */ r_edx = R32((u32)(r_ecx+0x4f10u));
    /* 00531e4b: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00531e4e: cmp dword ptr [ebp - 0xc], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00531e52: ja 0x531eb3 */ if ((!fC&&!fZ)) goto L_00531eb3;
L_00531e54:; BB(0x00531e54);
    /* 00531e54: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00531e57: movzx ecx, byte ptr [eax + 0x531eec] */ r_ecx = (u32)R8((u32)(r_eax+0x531eecu));
    /* 00531e5e: jmp dword ptr [ecx*4 + 0x531ed8] */ { u32 t = R32((u32)(r_ecx*4+0x531ed8u)); switch (t) { case 0x531e65u: goto L_00531e65; case 0x531e75u: goto L_00531e75; case 0x531e84u: goto L_00531e84; case 0x531e94u: goto L_00531e94; case 0x531ea4u: goto L_00531ea4; default: UNSUP(0x00531e5e, "jump table entry is not a known target"); } }
L_00531e65:; BB(0x00531e65);
    /* 00531e65: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00531e6b: mov eax, dword ptr [edx + 0x4ed0] */ r_eax = R32((u32)(r_edx+0x4ed0u));
    /* 00531e71: jmp 0x531ed4 */ goto L_00531ed4;
L_00531e75:; BB(0x00531e75);
    /* 00531e75: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00531e7a: mov eax, dword ptr [eax + 0x4ed4] */ r_eax = R32((u32)(r_eax+0x4ed4u));
    /* 00531e80: jmp 0x531ed4 */ goto L_00531ed4;
L_00531e84:; BB(0x00531e84);
    /* 00531e84: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00531e8a: mov eax, dword ptr [ecx + 0x4ed8] */ r_eax = R32((u32)(r_ecx+0x4ed8u));
    /* 00531e90: jmp 0x531ed4 */ goto L_00531ed4;
L_00531e94:; BB(0x00531e94);
    /* 00531e94: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00531e9a: mov eax, dword ptr [edx + 0x4edc] */ r_eax = R32((u32)(r_edx+0x4edcu));
    /* 00531ea0: jmp 0x531ed4 */ goto L_00531ed4;
L_00531ea4:; BB(0x00531ea4);
    /* 00531ea4: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00531ea9: mov eax, dword ptr [eax + 0x4ee0] */ r_eax = R32((u32)(r_eax+0x4ee0u));
    /* 00531eaf: jmp 0x531ed4 */ goto L_00531ed4;
L_00531eb3:; BB(0x00531eb3);
    /* 00531eb3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00531eb5: jne 0x531ece */ if (!fZ) goto L_00531ece;
L_00531eb7:; BB(0x00531eb7);
    /* 00531eb7: push 0x7fd */ { u32 v = 0x7fdu; r_esp -= 4; W32(r_esp, v); }
    /* 00531ebc: push 0x6c3b5c */ { u32 v = 0x6c3b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00531ec1: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00531ec6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x531ecbu); f_005e9f20();
    /* 00531ecb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00531ece:; BB(0x00531ece);
    /* 00531ece: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00531ed0: jmp 0x531ed4 */ goto L_00531ed4;
L_00531ed4:; BB(0x00531ed4);
    /* 00531ed4: mov esp, ebp */ r_esp = r_ebp;
    /* 00531ed6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00531ed7: ret  */ FN_RET(0x00531e30); r_esp += 4; return;
}

void f_00532760(void) /* slotmachinedisplay::func_00532760 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00532760);
    /* 00532760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00532761: mov ebp, esp */ r_ebp = r_esp;
    /* 00532763: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00532766: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00532769: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053276c: mov ecx, dword ptr [eax + 0x1d8] */ r_ecx = R32((u32)(r_eax+0x1d8u));
    /* 00532772: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00532775: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00532778: mov dword ptr [edx + 0x1d8], ecx */ W32((u32)(r_edx+0x1d8u), r_ecx);
    /* 0053277e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00532781: mov ecx, dword ptr [eax + 0x1d8] */ r_ecx = R32((u32)(r_eax+0x1d8u));
    /* 00532787: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0053278a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053278d: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00532790: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00532793: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00532797: ja 0x5328e9 */ if ((!fC&&!fZ)) goto L_005328e9;
L_0053279d:; BB(0x0053279d);
    /* 0053279d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005327a0: jmp dword ptr [eax*4 + 0x532904] */ { u32 t = R32((u32)(r_eax*4+0x532904u)); switch (t) { case 0x5327a7u: goto L_005327a7; case 0x5327cdu: goto L_005327cd; case 0x5327d2u: goto L_005327d2; case 0x5328d8u: goto L_005328d8; case 0x5328dau: goto L_005328da; case 0x532802u: goto L_00532802; case 0x532829u: goto L_00532829; case 0x532850u: goto L_00532850; case 0x532873u: goto L_00532873; case 0x532897u: goto L_00532897; default: UNSUP(0x005327a0, "jump table entry is not a known target"); } }
L_005327a7:; BB(0x005327a7);
    /* 005327a7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005327aa: mov edx, dword ptr [ecx + 0x1d4] */ r_edx = R32((u32)(r_ecx+0x1d4u));
    /* 005327b0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005327b3: mov ecx, dword ptr [eax + 0x1d4] */ r_ecx = R32((u32)(r_eax+0x1d4u));
    /* 005327b9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005327bb: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005327be: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5327c0u); call_ind(t); }
    /* 005327c0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005327c3: call 0x532200 */ r_esp -= 4; W32(r_esp, 0x5327c8u); f_00532200();
    /* 005327c8: jmp 0x5328f6 */ goto L_005328f6;
L_005327cd:; BB(0x005327cd);
    /* 005327cd: jmp 0x5328f6 */ goto L_005328f6;
L_005327d2:; BB(0x005327d2);
    /* 005327d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005327d5: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005327d8: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005327de: mov eax, dword ptr [edx + 0x4f10] */ r_eax = R32((u32)(r_edx+0x4f10u));
    /* 005327e4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005327e7: cmp dword ptr [ebp - 0x10], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005327eb: ja 0x5328bb */ if ((!fC&&!fZ)) goto L_005328bb;
L_005327f1:; BB(0x005327f1);
    /* 005327f1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005327f4: movzx edx, byte ptr [ecx + 0x53292c] */ r_edx = (u32)R8((u32)(r_ecx+0x53292cu));
    /* 005327fb: jmp dword ptr [edx*4 + 0x532918] */ { u32 t = R32((u32)(r_edx*4+0x532918u)); switch (t) { case 0x5328dau: goto L_005328da; case 0x5328d8u: goto L_005328d8; case 0x5327d2u: goto L_005327d2; case 0x5327cdu: goto L_005327cd; case 0x5327a7u: goto L_005327a7; case 0x532802u: goto L_00532802; case 0x532829u: goto L_00532829; case 0x532850u: goto L_00532850; case 0x532873u: goto L_00532873; case 0x532897u: goto L_00532897; default: UNSUP(0x005327fb, "jump table entry is not a known target"); } }
L_00532802:; BB(0x00532802);
    /* 00532802: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00532805: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0053280b: mov edx, dword ptr [ecx + 0x4ed0] */ r_edx = R32((u32)(r_ecx+0x4ed0u));
    /* 00532811: mov dword ptr [eax + 0x1ec], edx */ W32((u32)(r_eax+0x1ecu), r_edx);
    /* 00532817: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053281a: mov dword ptr [eax + 0x1f0], 0xfa */ W32((u32)(r_eax+0x1f0u), 0xfau);
    /* 00532824: jmp 0x5328d6 */ goto L_005328d6;
L_00532829:; BB(0x00532829);
    /* 00532829: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053282c: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00532832: mov eax, dword ptr [edx + 0x4ed4] */ r_eax = R32((u32)(r_edx+0x4ed4u));
    /* 00532838: mov dword ptr [ecx + 0x1ec], eax */ W32((u32)(r_ecx+0x1ecu), r_eax);
    /* 0053283e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00532841: mov dword ptr [ecx + 0x1f0], 0x2ee */ W32((u32)(r_ecx+0x1f0u), 0x2eeu);
    /* 0053284b: jmp 0x5328d6 */ goto L_005328d6;
L_00532850:; BB(0x00532850);
    /* 00532850: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00532853: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00532858: mov ecx, dword ptr [eax + 0x4ed8] */ r_ecx = R32((u32)(r_eax+0x4ed8u));
    /* 0053285e: mov dword ptr [edx + 0x1ec], ecx */ W32((u32)(r_edx+0x1ecu), r_ecx);
    /* 00532864: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00532867: mov dword ptr [edx + 0x1f0], 0x3e8 */ W32((u32)(r_edx+0x1f0u), 0x3e8u);
    /* 00532871: jmp 0x5328d6 */ goto L_005328d6;
L_00532873:; BB(0x00532873);
    /* 00532873: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00532876: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0053287c: mov edx, dword ptr [ecx + 0x4edc] */ r_edx = R32((u32)(r_ecx+0x4edcu));
    /* 00532882: mov dword ptr [eax + 0x1ec], edx */ W32((u32)(r_eax+0x1ecu), r_edx);
    /* 00532888: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053288b: mov dword ptr [eax + 0x1f0], 0x9c4 */ W32((u32)(r_eax+0x1f0u), 0x9c4u);
    /* 00532895: jmp 0x5328d6 */ goto L_005328d6;
L_00532897:; BB(0x00532897);
    /* 00532897: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053289a: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005328a0: mov eax, dword ptr [edx + 0x4ee0] */ r_eax = R32((u32)(r_edx+0x4ee0u));
    /* 005328a6: mov dword ptr [ecx + 0x1ec], eax */ W32((u32)(r_ecx+0x1ecu), r_eax);
    /* 005328ac: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005328af: mov dword ptr [ecx + 0x1f0], 0x1d4c */ W32((u32)(r_ecx+0x1f0u), 0x1d4cu);
    /* 005328b9: jmp 0x5328d6 */ goto L_005328d6;
L_005328bb:; BB(0x005328bb);
    /* 005328bb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005328bd: jne 0x5328d6 */ if (!fZ) goto L_005328d6;
L_005328bf:; BB(0x005328bf);
    /* 005328bf: push 0x8f8 */ { u32 v = 0x8f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005328c4: push 0x6c3b5c */ { u32 v = 0x6c3b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005328c9: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 005328ce: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5328d3u); f_005e9f20();
    /* 005328d3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005328d6:; BB(0x005328d6);
    /* 005328d6: jmp 0x5328f6 */ goto L_005328f6;
L_005328d8:; BB(0x005328d8);
    /* 005328d8: jmp 0x5328f6 */ goto L_005328f6;
L_005328da:; BB(0x005328da);
    /* 005328da: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005328dd: mov dword ptr [ecx + 0x1d8], 0 */ W32((u32)(r_ecx+0x1d8u), 0x0u);
    /* 005328e7: jmp 0x5328f6 */ goto L_005328f6;
L_005328e9:; BB(0x005328e9);
    /* 005328e9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005328ec: mov dword ptr [edx + 0x1d8], 0 */ W32((u32)(r_edx+0x1d8u), 0x0u);
L_005328f6:; BB(0x005328f6);
    /* 005328f6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005328f9: call 0x5eb570 */ r_esp -= 4; W32(r_esp, 0x5328feu); f_005eb570();
    /* 005328fe: mov esp, ebp */ r_esp = r_ebp;
    /* 00532900: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00532901: ret  */ FN_RET(0x00532760); r_esp += 4; return;
}

