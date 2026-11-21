#include "protos.h"

void f_005c9a50(void) /* BettingControls::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c9a50);
    /* 005c9a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c9a51: mov ebp, esp */ r_ebp = r_esp;
    /* 005c9a53: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c9a56: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c9a59: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9a5c: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x5c9a61u); f_005e9e20();
    /* 005c9a61: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9a64: mov dword ptr [eax], 0x6d2410 */ W32((u32)(r_eax), 0x6d2410u);
    /* 005c9a6a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c9a71: jmp 0x5c9a7c */ goto L_005c9a7c;
L_005c9a73:; BB(0x005c9a73);
    /* 005c9a73: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c9a76: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c9a79: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005c9a7c:; BB(0x005c9a7c);
    /* 005c9a7c: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9a80: jge 0x5c9a92 */ if ((fS==fO)) goto L_005c9a92;
L_005c9a82:; BB(0x005c9a82);
    /* 005c9a82: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c9a85: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9a88: mov dword ptr [eax + edx*4 + 4], 0 */ W32((u32)(r_eax+r_edx*4+0x4u), 0x0u);
    /* 005c9a90: jmp 0x5c9a73 */ goto L_005c9a73;
L_005c9a92:; BB(0x005c9a92);
    /* 005c9a92: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c9a99: jmp 0x5c9aa4 */ goto L_005c9aa4;
L_005c9a9b:; BB(0x005c9a9b);
    /* 005c9a9b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c9a9e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c9aa1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005c9aa4:; BB(0x005c9aa4);
    /* 005c9aa4: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9aa8: jge 0x5c9aba */ if ((fS==fO)) goto L_005c9aba;
L_005c9aaa:; BB(0x005c9aaa);
    /* 005c9aaa: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c9aad: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9ab0: mov dword ptr [eax + edx*4 + 0x14], 0 */ W32((u32)(r_eax+r_edx*4+0x14u), 0x0u);
    /* 005c9ab8: jmp 0x5c9a9b */ goto L_005c9a9b;
L_005c9aba:; BB(0x005c9aba);
    /* 005c9aba: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9abd: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 005c9ac4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9ac7: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 005c9ace: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9ad1: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 005c9ad8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9adb: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
    /* 005c9ae2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9ae5: mov byte ptr [edx + 0x28], 0 */ W8((u32)(r_edx+0x28u), 0x0u);
    /* 005c9ae9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c9aec: mov esp, ebp */ r_esp = r_ebp;
    /* 005c9aee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9aef: ret  */ FN_RET(0x005c9a50); r_esp += 4; return;
}

void f_005c9af0(void) /* BettingControls::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c9af0);
    /* 005c9af0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c9af1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c9af3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c9af5: push 0x6a89c8 */ { u32 v = 0x6a89c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c9afa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c9b00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c9b01: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c9b04: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c9b09: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c9b0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c9b0c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c9b0f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c9b15: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005c9b18: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c9b1b: mov dword ptr [eax], 0x6d2410 */ W32((u32)(r_eax), 0x6d2410u);
    /* 005c9b21: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c9b28: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005c9b2f: jmp 0x5c9b3a */ goto L_005c9b3a;
L_005c9b31:; BB(0x005c9b31);
    /* 005c9b31: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c9b34: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c9b37: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005c9b3a:; BB(0x005c9b3a);
    /* 005c9b3a: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9b3e: jge 0x5c9b75 */ if ((fS==fO)) goto L_005c9b75;
L_005c9b40:; BB(0x005c9b40);
    /* 005c9b40: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c9b43: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c9b46: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 005c9b4a: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005c9b4d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c9b50: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005c9b53: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9b57: je 0x5c9b6c */ if (fZ) goto L_005c9b6c;
L_005c9b59:; BB(0x005c9b59);
    /* 005c9b59: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c9b5b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c9b5e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c9b60: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c9b63: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c9b65: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c9b67u); call_ind(t); }
    /* 005c9b67: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005c9b6a: jmp 0x5c9b73 */ goto L_005c9b73;
L_005c9b6c:; BB(0x005c9b6c);
    /* 005c9b6c: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005c9b73:; BB(0x005c9b73);
    /* 005c9b73: jmp 0x5c9b31 */ goto L_005c9b31;
L_005c9b75:; BB(0x005c9b75);
    /* 005c9b75: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005c9b7c: jmp 0x5c9b87 */ goto L_005c9b87;
L_005c9b7e:; BB(0x005c9b7e);
    /* 005c9b7e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c9b81: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c9b84: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005c9b87:; BB(0x005c9b87);
    /* 005c9b87: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9b8b: jge 0x5c9bc2 */ if ((fS==fO)) goto L_005c9bc2;
L_005c9b8d:; BB(0x005c9b8d);
    /* 005c9b8d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c9b90: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c9b93: mov ecx, dword ptr [eax + edx*4 + 0x14] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x14u));
    /* 005c9b97: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005c9b9a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c9b9d: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005c9ba0: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9ba4: je 0x5c9bb9 */ if (fZ) goto L_005c9bb9;
L_005c9ba6:; BB(0x005c9ba6);
    /* 005c9ba6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c9ba8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c9bab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c9bad: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c9bb0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c9bb2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c9bb4u); call_ind(t); }
    /* 005c9bb4: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005c9bb7: jmp 0x5c9bc0 */ goto L_005c9bc0;
L_005c9bb9:; BB(0x005c9bb9);
    /* 005c9bb9: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_005c9bc0:; BB(0x005c9bc0);
    /* 005c9bc0: jmp 0x5c9b7e */ goto L_005c9b7e;
L_005c9bc2:; BB(0x005c9bc2);
    /* 005c9bc2: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c9bc5: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005c9bc8: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005c9bcb: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c9bce: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c9bd1: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9bd5: je 0x5c9bea */ if (fZ) goto L_005c9bea;
L_005c9bd7:; BB(0x005c9bd7);
    /* 005c9bd7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c9bd9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c9bdc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c9bde: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c9be1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c9be3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c9be5u); call_ind(t); }
    /* 005c9be5: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005c9be8: jmp 0x5c9bf1 */ goto L_005c9bf1;
L_005c9bea:; BB(0x005c9bea);
    /* 005c9bea: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005c9bf1:; BB(0x005c9bf1);
    /* 005c9bf1: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c9bf4: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005c9bf7: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 005c9bfa: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c9bfd: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005c9c00: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9c04: je 0x5c9c19 */ if (fZ) goto L_005c9c19;
L_005c9c06:; BB(0x005c9c06);
    /* 005c9c06: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c9c08: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c9c0b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c9c0d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c9c10: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c9c12: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c9c14u); call_ind(t); }
    /* 005c9c14: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005c9c17: jmp 0x5c9c20 */ goto L_005c9c20;
L_005c9c19:; BB(0x005c9c19);
    /* 005c9c19: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_005c9c20:; BB(0x005c9c20);
    /* 005c9c20: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c9c23: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 005c9c26: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005c9c29: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c9c2c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005c9c2f: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9c33: je 0x5c9c48 */ if (fZ) goto L_005c9c48;
L_005c9c35:; BB(0x005c9c35);
    /* 005c9c35: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c9c37: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c9c3a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c9c3c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c9c3f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c9c41: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c9c43u); call_ind(t); }
    /* 005c9c43: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005c9c46: jmp 0x5c9c4f */ goto L_005c9c4f;
L_005c9c48:; BB(0x005c9c48);
    /* 005c9c48: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_005c9c4f:; BB(0x005c9c4f);
    /* 005c9c4f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c9c56: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c9c59: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x5c9c5eu); f_005e9e40();
    /* 005c9c5e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c9c61: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c9c68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c9c69: mov esp, ebp */ r_esp = r_ebp;
    /* 005c9c6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9c6c: ret  */ FN_RET(0x005c9af0); r_esp += 4; return;
}

