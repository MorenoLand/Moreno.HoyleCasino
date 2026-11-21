#include "protos.h"

void f_005bba90(void) /* sub_5BBA90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bba90);
    /* 005bba90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bba91: mov ebp, esp */ r_ebp = r_esp;
    /* 005bba93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bba94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bba97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bba9a: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bba9d: jne 0x5bbaa5 */ if (!fZ) goto L_005bbaa5;
L_005bba9f:; BB(0x005bba9f);
    /* 005bba9f: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5bbaa5u); call_ind(t); }
L_005bbaa5:; BB(0x005bbaa5);
    /* 005bbaa5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bbaa8: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005bbaab: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bbaae: add ecx, dword ptr [edx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bbab1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bbab4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bbab6: cmp ecx, dword ptr [edx + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bbab9: ja 0x5bbad1 */ if ((!fC&&!fZ)) goto L_005bbad1;
L_005bbabb:; BB(0x005bbabb);
    /* 005bbabb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bbabe: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005bbac1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bbac4: add eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bbac7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bbaca: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 005bbacc: cmp eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bbacf: jae 0x5bbad7 */ if (!fC) goto L_005bbad7;
L_005bbad1:; BB(0x005bbad1);
    /* 005bbad1: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5bbad7u); call_ind(t); }
L_005bbad7:; BB(0x005bbad7);
    /* 005bbad7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bbada: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005bbadd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bbae0: add edx, dword ptr [eax + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bbae3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bbae6: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 005bbae9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bbaec: mov esp, ebp */ r_esp = r_ebp;
    /* 005bbaee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bbaef: ret 4 */ FN_RET(0x005bba90); r_esp += 8; return;
}

void f_005bbb00(void) /* sub_5BBB00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bbb00);
    /* 005bbb00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bbb01: mov ebp, esp */ r_ebp = r_esp;
    /* 005bbb03: sub esp, 0x14c */ {  u32 a = r_esp; u32 b = 0x14cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bbb09: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bbb0b: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 005bbb0e: mov cl, byte ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 005bbb11: mov byte ptr [ebp - 2], cl */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_ecx);
    /* 005bbb14: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005bbb17: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005bbb1a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bbb1d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005bbb20: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 005bbb23: mov byte ptr [ebp - 0x14a], cl */ W8((u32)(r_ebp+0xfffffeb6u), (u8)r_ecx);
    /* 005bbb29: mov dl, byte ptr [ebp - 3] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffdu))) & 0xffu);
    /* 005bbb2c: mov byte ptr [ebp - 0x149], dl */ W8((u32)(r_ebp+0xfffffeb7u), (u8)r_edx);
    /* 005bbb32: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005bbb35: mov dword ptr [ebp - 0x148], eax */ W32((u32)(r_ebp+0xfffffeb8u), r_eax);
    /* 005bbb3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bbb3e: sub ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bbb41: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005bbb44: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005bbb47: add ecx, dword ptr [ebp - 0x148] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffeb8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bbb4d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005bbb50: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bbb52: mov byte ptr [ebp - 0x19], dl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_edx);
    /* 005bbb55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bbb57: mov byte ptr [ebp - 0x1a], al */ W8((u32)(r_ebp+0xffffffe6u), (u8)r_eax);
    /* 005bbb5a: mov cl, byte ptr [ebp - 0x19] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe7u))) & 0xffu);
    /* 005bbb5d: mov byte ptr [ebp - 0x142], cl */ W8((u32)(r_ebp+0xfffffebeu), (u8)r_ecx);
    /* 005bbb63: mov dl, byte ptr [ebp - 0x1a] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe6u))) & 0xffu);
    /* 005bbb66: mov byte ptr [ebp - 0x141], dl */ W8((u32)(r_ebp+0xfffffebfu), (u8)r_edx);
    /* 005bbb6c: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 005bbb72: mov dword ptr [ebp - 0x140], eax */ W32((u32)(r_ebp+0xfffffec0u), r_eax);
    /* 005bbb78: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bbb7b: mov dword ptr [ebp - 0x13c], ecx */ W32((u32)(r_ebp+0xfffffec4u), r_ecx);
    /* 005bbb81: jmp 0x5bbba1 */ goto L_005bbba1;
L_005bbb83:; BB(0x005bbb83);
    /* 005bbb83: mov edx, dword ptr [ebp - 0x140] */ r_edx = R32((u32)(r_ebp+0xfffffec0u));
    /* 005bbb89: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bbb8c: mov dword ptr [ebp - 0x140], edx */ W32((u32)(r_ebp+0xfffffec0u), r_edx);
    /* 005bbb92: mov eax, dword ptr [ebp - 0x13c] */ r_eax = R32((u32)(r_ebp+0xfffffec4u));
    /* 005bbb98: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bbb9b: mov dword ptr [ebp - 0x13c], eax */ W32((u32)(r_ebp+0xfffffec4u), r_eax);
L_005bbba1:; BB(0x005bbba1);
    /* 005bbba1: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 005bbba7: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbbaa: je 0x5bbbc0 */ if (fZ) goto L_005bbbc0;
L_005bbbac:; BB(0x005bbbac);
    /* 005bbbac: mov edx, dword ptr [ebp - 0x13c] */ r_edx = R32((u32)(r_ebp+0xfffffec4u));
    /* 005bbbb2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbbb3: mov ecx, dword ptr [ebp - 0x140] */ r_ecx = R32((u32)(r_ebp+0xfffffec0u));
    /* 005bbbb9: call 0x5bc040 */ r_esp -= 4; W32(r_esp, 0x5bbbbeu); f_005bc040();
    /* 005bbbbe: jmp 0x5bbb83 */ goto L_005bbb83;
L_005bbbc0:; BB(0x005bbbc0);
    /* 005bbbc0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bbbc3: mov esp, ebp */ r_esp = r_ebp;
    /* 005bbbc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bbbc6: ret  */ FN_RET(0x005bbb00); r_esp += 4; return;
}

void f_005bbcc0(void) /* sub_5BBCC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bbcc0);
    /* 005bbcc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bbcc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005bbcc3: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bbcc6: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 005bbcc9: lea eax, [ebp - 9] */ r_eax = (u32)(r_ebp+0xfffffff7u);
    /* 005bbccc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005bbccf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbcd1: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005bbcd4: call 0x5bbd80 */ r_esp -= 4; W32(r_esp, 0x5bbcd9u); f_005bbd80();
    /* 005bbcd9: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005bbcdc: mov esp, ebp */ r_esp = r_ebp;
    /* 005bbcde: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bbcdf: ret  */ FN_RET(0x005bbcc0); r_esp += 4; return;
}

void f_005bbce0(void) /* sub_5BBCE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bbce0);
    /* 005bbce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bbce1: mov ebp, esp */ r_ebp = r_esp;
    /* 005bbce3: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bbce6: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 005bbce9: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005bbcec: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 005bbcf3: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005bbcf6: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 005bbcfd: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005bbd00: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 005bbd07: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbd0b: jne 0x5bbd13 */ if (!fZ) goto L_005bbd13;
L_005bbd0d:; BB(0x005bbd0d);
    /* 005bbd0d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005bbd0f: jmp 0x5bbd72 */ goto L_005bbd72;
L_005bbd13:; BB(0x005bbd13);
    /* 005bbd13: mov dword ptr [ebp - 4], 0xfffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xfffffffu);
    /* 005bbd1a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bbd1e: jbe 0x5bbd28 */ if ((fC||fZ)) goto L_005bbd28;
L_005bbd20:; BB(0x005bbd20);
    /* 005bbd20: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bbd23: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005bbd26: jmp 0x5bbd2f */ goto L_005bbd2f;
L_005bbd28:; BB(0x005bbd28);
    /* 005bbd28: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
L_005bbd2f:; BB(0x005bbd2f);
    /* 005bbd2f: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005bbd32: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bbd35: jae 0x5bbd3e */ if (!fC) goto L_005bbd3e;
L_005bbd37:; BB(0x005bbd37);
    /* 005bbd37: call 0x5bb750 */ r_esp -= 4; W32(r_esp, 0x5bbd3cu); f_005bb750();
    /* 005bbd3c: jmp 0x5bbd70 */ goto L_005bbd70;
L_005bbd3e:; BB(0x005bbd3e);
    /* 005bbd3e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbd40: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bbd43: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbd44: call 0x5bbbd0 */ r_esp -= 4; W32(r_esp, 0x5bbd49u); f_005bbbd0();
    /* 005bbd49: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bbd4c: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005bbd4f: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005bbd52: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005bbd55: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005bbd58: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005bbd5b: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005bbd5e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bbd61: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005bbd64: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005bbd67: add edx, dword ptr [eax + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bbd6a: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005bbd6d: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
L_005bbd70:; BB(0x005bbd70);
    /* 005bbd70: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005bbd72:; BB(0x005bbd72);
    /* 005bbd72: mov esp, ebp */ r_esp = r_ebp;
    /* 005bbd74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bbd75: ret 4 */ FN_RET(0x005bbce0); r_esp += 8; return;
}

void f_005bbd80(void) /* sub_5BBD80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bbd80);
    /* 005bbd80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bbd81: mov ebp, esp */ r_ebp = r_esp;
    /* 005bbd83: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bbd86: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 005bbd89: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005bbd8c: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 005bbd93: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005bbd96: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 005bbd9d: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005bbda0: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 005bbda7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbdab: jne 0x5bbdb3 */ if (!fZ) goto L_005bbdb3;
L_005bbdad:; BB(0x005bbdad);
    /* 005bbdad: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005bbdaf: jmp 0x5bbe12 */ goto L_005bbe12;
L_005bbdb3:; BB(0x005bbdb3);
    /* 005bbdb3: mov dword ptr [ebp - 4], 0x3fffffff */ W32((u32)(r_ebp+0xfffffffcu), 0x3fffffffu);
    /* 005bbdba: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bbdbe: jbe 0x5bbdc8 */ if ((fC||fZ)) goto L_005bbdc8;
L_005bbdc0:; BB(0x005bbdc0);
    /* 005bbdc0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bbdc3: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005bbdc6: jmp 0x5bbdcf */ goto L_005bbdcf;
L_005bbdc8:; BB(0x005bbdc8);
    /* 005bbdc8: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
L_005bbdcf:; BB(0x005bbdcf);
    /* 005bbdcf: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005bbdd2: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bbdd5: jae 0x5bbdde */ if (!fC) goto L_005bbdde;
L_005bbdd7:; BB(0x005bbdd7);
    /* 005bbdd7: call 0x5bb8f0 */ r_esp -= 4; W32(r_esp, 0x5bbddcu); f_005bb8f0();
    /* 005bbddc: jmp 0x5bbe10 */ goto L_005bbe10;
L_005bbdde:; BB(0x005bbdde);
    /* 005bbdde: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbde0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bbde3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbde4: call 0x5c6310 */ r_esp -= 4; W32(r_esp, 0x5bbde9u); f_005c6310();
    /* 005bbde9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bbdec: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005bbdef: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005bbdf2: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005bbdf5: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005bbdf8: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005bbdfb: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005bbdfe: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005bbe01: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005bbe04: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bbe07: lea edx, [eax + ecx*4] */ r_edx = (u32)(r_eax+r_ecx*4);
    /* 005bbe0a: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005bbe0d: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
L_005bbe10:; BB(0x005bbe10);
    /* 005bbe10: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005bbe12:; BB(0x005bbe12);
    /* 005bbe12: mov esp, ebp */ r_esp = r_ebp;
    /* 005bbe14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bbe15: ret 4 */ FN_RET(0x005bbd80); r_esp += 8; return;
}

void f_005bbe20(void) /* sub_5BBE20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bbe20);
    /* 005bbe20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bbe21: mov ebp, esp */ r_ebp = r_esp;
    /* 005bbe23: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bbe26: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bbe28: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 005bbe2b: mov cl, byte ptr [ebp - 3] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffdu))) & 0xffu);
    /* 005bbe2e: mov byte ptr [ebp - 2], cl */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_ecx);
    /* 005bbe31: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005bbe34: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005bbe37: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bbe3a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005bbe3d: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 005bbe40: mov byte ptr [ebp - 0x31], cl */ W8((u32)(r_ebp+0xffffffcfu), (u8)r_ecx);
    /* 005bbe43: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005bbe46: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 005bbe49: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005bbe4c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005bbe4f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bbe52: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005bbe55: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bbe58: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005bbe5b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bbe5d: mov byte ptr [ebp - 0x11], al */ W8((u32)(r_ebp+0xffffffefu), (u8)r_eax);
    /* 005bbe60: mov cl, byte ptr [ebp - 0x13] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffedu))) & 0xffu);
    /* 005bbe63: mov byte ptr [ebp - 0x12], cl */ W8((u32)(r_ebp+0xffffffeeu), (u8)r_ecx);
    /* 005bbe66: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bbe69: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005bbe6c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bbe6f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005bbe72: mov cl, byte ptr [ebp - 0x11] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffefu))) & 0xffu);
    /* 005bbe75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbe76: mov dl, byte ptr [ebp - 0x12] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffeeu))) & 0xffu);
    /* 005bbe79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbe7a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005bbe7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bbe7e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bbe81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbe82: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bbe85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbe86: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bbe89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bbe8a: call 0x5bc620 */ r_esp -= 4; W32(r_esp, 0x5bbe8fu); f_005bc620();
    /* 005bbe8f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bbe92: mov esp, ebp */ r_esp = r_ebp;
    /* 005bbe94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bbe95: ret  */ FN_RET(0x005bbe20); r_esp += 4; return;
}

void f_005bbea0(void) /* sub_5BBEA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bbea0);
    /* 005bbea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bbea1: mov ebp, esp */ r_ebp = r_esp;
    /* 005bbea3: sub esp, 0x140 */ {  u32 a = r_esp; u32 b = 0x140u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bbea9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bbeab: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 005bbeae: mov cl, byte ptr [ebp - 3] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffdu))) & 0xffu);
    /* 005bbeb1: mov byte ptr [ebp - 2], cl */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_ecx);
    /* 005bbeb4: mov dl, byte ptr [ebp - 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 005bbeb7: mov byte ptr [ebp - 0x13d], dl */ W8((u32)(r_ebp+0xfffffec3u), (u8)r_edx);
    /* 005bbebd: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005bbec0: mov dword ptr [ebp - 0x13c], eax */ W32((u32)(r_ebp+0xfffffec4u), r_eax);
    /* 005bbec6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bbec9: mov dword ptr [ebp - 0x138], ecx */ W32((u32)(r_ebp+0xfffffec8u), r_ecx);
    /* 005bbecf: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005bbed2: sub edx, dword ptr [ebp - 0x138] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffec8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bbed8: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005bbedb: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005bbede: mov eax, dword ptr [ebp - 0x13c] */ r_eax = R32((u32)(r_ebp+0xfffffec4u));
    /* 005bbee4: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bbee6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005bbee9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005bbeeb: mov byte ptr [ebp - 9], cl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_ecx);
    /* 005bbeee: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bbef0: mov byte ptr [ebp - 0xa], dl */ W8((u32)(r_ebp+0xfffffff6u), (u8)r_edx);
    /* 005bbef3: mov al, byte ptr [ebp - 9] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff7u))) & 0xffu);
    /* 005bbef6: mov byte ptr [ebp - 0x132], al */ W8((u32)(r_ebp+0xfffffeceu), (u8)r_eax);
    /* 005bbefc: mov cl, byte ptr [ebp - 0xa] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff6u))) & 0xffu);
    /* 005bbeff: mov byte ptr [ebp - 0x131], cl */ W8((u32)(r_ebp+0xfffffecfu), (u8)r_ecx);
    /* 005bbf05: mov edx, dword ptr [ebp - 0x13c] */ r_edx = R32((u32)(r_ebp+0xfffffec4u));
    /* 005bbf0b: mov dword ptr [ebp - 0x130], edx */ W32((u32)(r_ebp+0xfffffed0u), r_edx);
    /* 005bbf11: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005bbf14: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
L_005bbf1a:; BB(0x005bbf1a);
    /* 005bbf1a: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 005bbf20: cmp ecx, dword ptr [ebp - 0x12c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffed4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bbf26: je 0x5bbf5a */ if (fZ) goto L_005bbf5a;
L_005bbf28:; BB(0x005bbf28);
    /* 005bbf28: mov edx, dword ptr [ebp - 0x12c] */ r_edx = R32((u32)(r_ebp+0xfffffed4u));
    /* 005bbf2e: sub edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bbf31: mov dword ptr [ebp - 0x12c], edx */ W32((u32)(r_ebp+0xfffffed4u), r_edx);
    /* 005bbf37: mov eax, dword ptr [ebp - 0x130] */ r_eax = R32((u32)(r_ebp+0xfffffed0u));
    /* 005bbf3d: sub eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bbf40: mov dword ptr [ebp - 0x130], eax */ W32((u32)(r_ebp+0xfffffed0u), r_eax);
    /* 005bbf46: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 005bbf4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbf4d: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 005bbf53: call 0x5bc040 */ r_esp -= 4; W32(r_esp, 0x5bbf58u); f_005bc040();
    /* 005bbf58: jmp 0x5bbf1a */ goto L_005bbf1a;
L_005bbf5a:; BB(0x005bbf5a);
    /* 005bbf5a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bbf5d: mov esp, ebp */ r_esp = r_ebp;
    /* 005bbf5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bbf60: ret  */ FN_RET(0x005bbea0); r_esp += 4; return;
}

void f_005bbf70(void) /* sub_5BBF70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bbf70);
    /* 005bbf70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bbf71: mov ebp, esp */ r_ebp = r_esp;
    /* 005bbf73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bbf75: push 0x6a8080 */ { u32 v = 0x6a8080u; r_esp -= 4; W32(r_esp, v); }
    /* 005bbf7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bbf80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bbf81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbf82: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bbf88: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbf89: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bbf8a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bbf8b: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005bbf90: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bbf92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bbf93: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005bbf96: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005bbf9c: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005bbf9f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bbfa2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005bbfa5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bbfac: jmp 0x5bbfc0 */ goto L_005bbfc0;
L_005bbfae:; BB(0x005bbfae);
    /* 005bbfae: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005bbfb1: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bbfb4: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 005bbfb7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bbfba: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bbfbd: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
L_005bbfc0:; BB(0x005bbfc0);
    /* 005bbfc0: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bbfc4: jbe 0x5bbfd8 */ if ((fC||fZ)) goto L_005bbfd8;
L_005bbfc6:; BB(0x005bbfc6);
    /* 005bbfc6: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005bbfc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bbfca: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bbfcd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bbfce: call 0x5bc520 */ r_esp -= 4; W32(r_esp, 0x5bbfd3u); f_005bc520();
    /* 005bbfd3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bbfd6: jmp 0x5bbfae */ goto L_005bbfae;
L_005bbfd8:; BB(0x005bbfd8);
    /* 005bbfd8: jmp 0x5bc020 */ goto L_005bc020;
L_005bc020:; BB(0x005bc020);
    /* 005bc020: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bc027: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bc02a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bc031: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bc032: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bc033: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bc034: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bc035: mov esp, ebp */ r_esp = r_ebp;
    /* 005bc037: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bc038: ret  */ FN_RET(0x005bbf70); r_esp += 4; return;
}

