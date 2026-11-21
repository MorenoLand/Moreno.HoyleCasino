#include "protos.h"

void f_00551040(void) /* sub_551040 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00551040);
    /* 00551040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00551041: mov ebp, esp */ r_ebp = r_esp;
    /* 00551043: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00551046: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00551049: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00551050: jmp 0x55105b */ goto L_0055105b;
L_00551052:; BB(0x00551052);
    /* 00551052: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00551055: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00551058: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055105b:; BB(0x0055105b);
    /* 0055105b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055105e: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x551063u); f_0054c540();
    /* 00551063: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00551066: jge 0x5510bf */ if ((fS==fO)) goto L_005510bf;
L_00551068:; BB(0x00551068);
    /* 00551068: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055106b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055106e: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00551073: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551074: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00551077: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x55107cu); f_0054c590();
    /* 0055107c: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055107f: je 0x5510a0 */ if (fZ) goto L_005510a0;
L_00551081:; BB(0x00551081);
    /* 00551081: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00551084: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00551087: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055108c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055108d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00551090: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x551095u); f_0054c590();
    /* 00551095: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551098: jne 0x5510bd */ if (!fZ) goto L_005510bd;
L_0055109a:; BB(0x0055109a);
    /* 0055109a: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055109e: jne 0x5510bd */ if (!fZ) goto L_005510bd;
L_005510a0:; BB(0x005510a0);
    /* 005510a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005510a3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005510a6: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 005510ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005510ac: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x5510b1u); f_00641290();
    /* 005510b1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005510b4: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005510b7: jne 0x5510bd */ if (!fZ) goto L_005510bd;
L_005510b9:; BB(0x005510b9);
    /* 005510b9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005510bb: jmp 0x5510c1 */ goto L_005510c1;
L_005510bd:; BB(0x005510bd);
    /* 005510bd: jmp 0x551052 */ goto L_00551052;
L_005510bf:; BB(0x005510bf);
    /* 005510bf: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005510c1:; BB(0x005510c1);
    /* 005510c1: mov esp, ebp */ r_esp = r_ebp;
    /* 005510c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005510c4: ret 8 */ FN_RET(0x00551040); r_esp += 12; return;
}

void f_005510d0(void) /* sub_5510D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005510d0);
    /* 005510d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005510d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005510d3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005510d6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005510d9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005510e0: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005510e7: jmp 0x5510f2 */ goto L_005510f2;
L_005510e9:; BB(0x005510e9);
    /* 005510e9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005510ec: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005510ef: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005510f2:; BB(0x005510f2);
    /* 005510f2: cmp dword ptr [ebp - 4], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005510f6: jge 0x55111a */ if ((fS==fO)) goto L_0055111a;
L_005510f8:; BB(0x005510f8);
    /* 005510f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005510fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005510fc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005510ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00551100: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00551103: call 0x551040 */ r_esp -= 4; W32(r_esp, 0x551108u); f_00551040();
    /* 00551108: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0055110b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055110d: je 0x551118 */ if (fZ) goto L_00551118;
L_0055110f:; BB(0x0055110f);
    /* 0055110f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00551112: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00551115: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00551118:; BB(0x00551118);
    /* 00551118: jmp 0x5510e9 */ goto L_005510e9;
L_0055111a:; BB(0x0055111a);
    /* 0055111a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055111d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055111f: cmp edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551122: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00551125: mov esp, ebp */ r_esp = r_ebp;
    /* 00551127: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00551128: ret 8 */ FN_RET(0x005510d0); r_esp += 12; return;
}

void f_00551130(void) /* sub_551130 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00551130);
    /* 00551130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00551131: mov ebp, esp */ r_ebp = r_esp;
    /* 00551133: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00551136: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00551139: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00551140: cmp dword ptr [ebp + 0xc], 0xb */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00551144: jl 0x55114a */ if ((fS!=fO)) goto L_0055114a;
L_00551146:; BB(0x00551146);
    /* 00551146: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00551148: jmp 0x55119f */ goto L_0055119f;
L_0055114a:; BB(0x0055114a);
    /* 0055114a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00551151: jmp 0x55115c */ goto L_0055115c;
L_00551153:; BB(0x00551153);
    /* 00551153: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00551156: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00551159: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055115c:; BB(0x0055115c);
    /* 0055115c: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00551160: jge 0x551194 */ if ((fS==fO)) goto L_00551194;
L_00551162:; BB(0x00551162);
    /* 00551162: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00551165: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00551168: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00551169: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055116c: call 0x550fd0 */ r_esp -= 4; W32(r_esp, 0x551171u); f_00550fd0();
    /* 00551171: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00551174: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551176: je 0x551183 */ if (fZ) goto L_00551183;
L_00551178:; BB(0x00551178);
    /* 00551178: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055117b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055117e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00551181: jmp 0x551192 */ goto L_00551192;
L_00551183:; BB(0x00551183);
    /* 00551183: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00551186: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551189: je 0x551192 */ if (fZ) goto L_00551192;
L_0055118b:; BB(0x0055118b);
    /* 0055118b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00551192:; BB(0x00551192);
    /* 00551192: jmp 0x551153 */ goto L_00551153;
L_00551194:; BB(0x00551194);
    /* 00551194: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00551197: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00551199: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055119c: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
L_0055119f:; BB(0x0055119f);
    /* 0055119f: mov esp, ebp */ r_esp = r_ebp;
    /* 005511a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005511a2: ret 8 */ FN_RET(0x00551130); r_esp += 12; return;
}

void f_005511b0(void) /* sub_5511B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005511b0);
    /* 005511b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005511b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005511b3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005511b6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005511b9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005511c0: mov eax, 5 */ r_eax = 0x5u;
    /* 005511c5: sub eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005511c8: add eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005511cb: cmp dword ptr [ebp + 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005511ce: jl 0x5511d4 */ if ((fS!=fO)) goto L_005511d4;
L_005511d0:; BB(0x005511d0);
    /* 005511d0: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005511d2: jmp 0x55121c */ goto L_0055121c;
L_005511d4:; BB(0x005511d4);
    /* 005511d4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005511db: jmp 0x5511e6 */ goto L_005511e6;
L_005511dd:; BB(0x005511dd);
    /* 005511dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005511e0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005511e3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005511e6:; BB(0x005511e6);
    /* 005511e6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005511e9: cmp edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005511ec: jge 0x55120f */ if ((fS==fO)) goto L_0055120f;
L_005511ee:; BB(0x005511ee);
    /* 005511ee: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005511f1: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005511f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005511f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005511f8: call 0x550fd0 */ r_esp -= 4; W32(r_esp, 0x5511fdu); f_00550fd0();
    /* 005511fd: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00551200: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551202: je 0x55120d */ if (fZ) goto L_0055120d;
L_00551204:; BB(0x00551204);
    /* 00551204: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00551207: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055120a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055120d:; BB(0x0055120d);
    /* 0055120d: jmp 0x5511dd */ goto L_005511dd;
L_0055120f:; BB(0x0055120f);
    /* 0055120f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00551212: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00551214: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551217: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0055121a: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
L_0055121c:; BB(0x0055121c);
    /* 0055121c: mov esp, ebp */ r_esp = r_ebp;
    /* 0055121e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055121f: ret 0xc */ FN_RET(0x005511b0); r_esp += 16; return;
}

void f_00551230(void) /* sub_551230 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00551230);
    /* 00551230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00551231: mov ebp, esp */ r_ebp = r_esp;
    /* 00551233: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00551236: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00551239: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00551240: cmp dword ptr [ebp + 0x10], 0xb */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00551244: jl 0x55124a */ if ((fS!=fO)) goto L_0055124a;
L_00551246:; BB(0x00551246);
    /* 00551246: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00551248: jmp 0x5512a5 */ goto L_005512a5;
L_0055124a:; BB(0x0055124a);
    /* 0055124a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00551251: jmp 0x55125c */ goto L_0055125c;
L_00551253:; BB(0x00551253);
    /* 00551253: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00551256: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00551259: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055125c:; BB(0x0055125c);
    /* 0055125c: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00551260: jge 0x551298 */ if ((fS==fO)) goto L_00551298;
L_00551262:; BB(0x00551262);
    /* 00551262: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00551265: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00551268: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00551269: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0055126c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055126d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00551270: call 0x551040 */ r_esp -= 4; W32(r_esp, 0x551275u); f_00551040();
    /* 00551275: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00551278: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055127a: je 0x551287 */ if (fZ) goto L_00551287;
L_0055127c:; BB(0x0055127c);
    /* 0055127c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055127f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00551282: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00551285: jmp 0x551296 */ goto L_00551296;
L_00551287:; BB(0x00551287);
    /* 00551287: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055128a: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055128d: je 0x551296 */ if (fZ) goto L_00551296;
L_0055128f:; BB(0x0055128f);
    /* 0055128f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00551296:; BB(0x00551296);
    /* 00551296: jmp 0x551253 */ goto L_00551253;
L_00551298:; BB(0x00551298);
    /* 00551298: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055129b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055129d: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005512a0: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005512a3: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
L_005512a5:; BB(0x005512a5);
    /* 005512a5: mov esp, ebp */ r_esp = r_ebp;
    /* 005512a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005512a8: ret 0xc */ FN_RET(0x00551230); r_esp += 16; return;
}

void f_005512b0(void) /* sub_5512B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005512b0);
    /* 005512b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005512b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005512b3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005512b6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005512b9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005512c0: mov eax, 5 */ r_eax = 0x5u;
    /* 005512c5: sub eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005512c8: add eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005512cb: cmp dword ptr [ebp + 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005512ce: jl 0x5512d4 */ if ((fS!=fO)) goto L_005512d4;
L_005512d0:; BB(0x005512d0);
    /* 005512d0: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005512d2: jmp 0x55131e */ goto L_0055131e;
L_005512d4:; BB(0x005512d4);
    /* 005512d4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005512db: jmp 0x5512e6 */ goto L_005512e6;
L_005512dd:; BB(0x005512dd);
    /* 005512dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005512e0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005512e3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005512e6:; BB(0x005512e6);
    /* 005512e6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005512e9: cmp edx, dword ptr [ebp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005512ec: jge 0x551313 */ if ((fS==fO)) goto L_00551313;
L_005512ee:; BB(0x005512ee);
    /* 005512ee: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005512f1: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005512f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005512f5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005512f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005512f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005512fc: call 0x551040 */ r_esp -= 4; W32(r_esp, 0x551301u); f_00551040();
    /* 00551301: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00551304: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551306: je 0x551311 */ if (fZ) goto L_00551311;
L_00551308:; BB(0x00551308);
    /* 00551308: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055130b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055130e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00551311:; BB(0x00551311);
    /* 00551311: jmp 0x5512dd */ goto L_005512dd;
L_00551313:; BB(0x00551313);
    /* 00551313: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00551316: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00551318: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055131b: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
L_0055131e:; BB(0x0055131e);
    /* 0055131e: mov esp, ebp */ r_esp = r_ebp;
    /* 00551320: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00551321: ret 0x10 */ FN_RET(0x005512b0); r_esp += 20; return;
}

void f_00551330(void) /* sub_551330 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00551330);
    /* 00551330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00551331: mov ebp, esp */ r_ebp = r_esp;
    /* 00551333: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00551336: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00551339: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00551340: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00551347: jmp 0x551352 */ goto L_00551352;
L_00551349:; BB(0x00551349);
    /* 00551349: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055134c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055134f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00551352:; BB(0x00551352);
    /* 00551352: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00551356: jg 0x551472 */ if ((!fZ&&fS==fO)) goto L_00551472;
L_0055135c:; BB(0x0055135c);
    /* 0055135c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0055135f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00551362: jmp 0x55136d */ goto L_0055136d;
L_00551364:; BB(0x00551364);
    /* 00551364: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00551367: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055136a: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0055136d:; BB(0x0055136d);
    /* 0055136d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00551370: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00551373: jge 0x55146d */ if ((fS==fO)) goto L_0055146d;
L_00551379:; BB(0x00551379);
    /* 00551379: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055137c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055137d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00551380: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00551381: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00551384: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551385: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00551388: call 0x551230 */ r_esp -= 4; W32(r_esp, 0x55138du); f_00551230();
    /* 0055138d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00551390: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551392: je 0x551468 */ if (fZ) goto L_00551468;
L_00551398:; BB(0x00551398);
    /* 00551398: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0055139f: jmp 0x5513aa */ goto L_005513aa;
L_005513a1:; BB(0x005513a1);
    /* 005513a1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005513a4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005513a7: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_005513aa:; BB(0x005513aa);
    /* 005513aa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005513ad: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x5513b2u); f_0054c540();
    /* 005513b2: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005513b5: jge 0x551461 */ if ((fS==fO)) goto L_00551461;
L_005513bb:; BB(0x005513bb);
    /* 005513bb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005513be: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005513c1: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 005513c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005513c7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005513ca: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x5513cfu); f_0054c590();
    /* 005513cf: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005513d2: je 0x55145c */ if (fZ) goto L_0055145c;
L_005513d8:; BB(0x005513d8);
    /* 005513d8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005513db: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005513de: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 005513e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005513e4: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5513e9u); f_00641280();
    /* 005513e9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005513ec: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005513ef: jl 0x55140f */ if ((fS!=fO)) goto L_0055140f;
L_005513f1:; BB(0x005513f1);
    /* 005513f1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005513f4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005513f7: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 005513fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005513fd: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x551402u); f_00641280();
    /* 00551402: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551405: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00551408: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055140b: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055140d: jle 0x55142e */ if ((fZ||fS!=fO)) goto L_0055142e;
L_0055140f:; BB(0x0055140f);
    /* 0055140f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00551412: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00551415: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055141a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055141b: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x551420u); f_00641280();
    /* 00551420: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551423: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551426: jne 0x55145c */ if (!fZ) goto L_0055145c;
L_00551428:; BB(0x00551428);
    /* 00551428: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055142c: jne 0x55145c */ if (!fZ) goto L_0055145c;
L_0055142e:; BB(0x0055142e);
    /* 0055142e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00551431: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00551434: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00551439: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055143a: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x55143fu); f_00641290();
    /* 0055143f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551442: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551445: jne 0x55145c */ if (!fZ) goto L_0055145c;
L_00551447:; BB(0x00551447);
    /* 00551447: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055144a: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055144d: mov al, byte ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 00551450: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 00551453: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00551456: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00551459: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0055145c:; BB(0x0055145c);
    /* 0055145c: jmp 0x5513a1 */ goto L_005513a1;
L_00551461:; BB(0x00551461);
    /* 00551461: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00551463: jmp 0x5515c8 */ goto L_005515c8;
L_00551468:; BB(0x00551468);
    /* 00551468: jmp 0x551364 */ goto L_00551364;
L_0055146d:; BB(0x0055146d);
    /* 0055146d: jmp 0x551349 */ goto L_00551349;
L_00551472:; BB(0x00551472);
    /* 00551472: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00551479: jmp 0x551484 */ goto L_00551484;
L_0055147b:; BB(0x0055147b);
    /* 0055147b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055147e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00551481: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00551484:; BB(0x00551484);
    /* 00551484: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00551488: jg 0x5515c6 */ if ((!fZ&&fS==fO)) goto L_005515c6;
L_0055148e:; BB(0x0055148e);
    /* 0055148e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00551491: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00551494: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00551497:; BB(0x00551497);
    /* 00551497: cmp dword ptr [ebp - 0x14], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055149b: jg 0x5515c1 */ if ((!fZ&&fS==fO)) goto L_005515c1;
L_005514a1:; BB(0x005514a1);
    /* 005514a1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005514a4: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005514a7: jmp 0x5514b2 */ goto L_005514b2;
L_005514a9:; BB(0x005514a9);
    /* 005514a9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005514ac: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005514af: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005514b2:; BB(0x005514b2);
    /* 005514b2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005514b5: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005514b8: jge 0x5515b3 */ if ((fS==fO)) goto L_005515b3;
L_005514be:; BB(0x005514be);
    /* 005514be: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005514c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005514c2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005514c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005514c6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005514c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005514ca: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005514cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005514ce: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005514d1: call 0x5512b0 */ r_esp -= 4; W32(r_esp, 0x5514d6u); f_005512b0();
    /* 005514d6: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005514d9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005514db: je 0x5515ae */ if (fZ) goto L_005515ae;
L_005514e1:; BB(0x005514e1);
    /* 005514e1: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005514e8: jmp 0x5514f3 */ goto L_005514f3;
L_005514ea:; BB(0x005514ea);
    /* 005514ea: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005514ed: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005514f0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005514f3:; BB(0x005514f3);
    /* 005514f3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005514f6: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x5514fbu); f_0054c540();
    /* 005514fb: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005514fe: jge 0x5515aa */ if ((fS==fO)) goto L_005515aa;
L_00551504:; BB(0x00551504);
    /* 00551504: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00551507: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055150a: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055150f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551510: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00551513: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x551518u); f_0054c590();
    /* 00551518: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055151b: je 0x5515a5 */ if (fZ) goto L_005515a5;
L_00551521:; BB(0x00551521);
    /* 00551521: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00551524: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00551527: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0055152c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055152d: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x551532u); f_00641280();
    /* 00551532: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551535: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00551538: jl 0x551558 */ if ((fS!=fO)) goto L_00551558;
L_0055153a:; BB(0x0055153a);
    /* 0055153a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055153d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00551540: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00551545: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551546: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55154bu); f_00641280();
    /* 0055154b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055154e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00551551: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00551554: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00551556: jle 0x551577 */ if ((fZ||fS!=fO)) goto L_00551577;
L_00551558:; BB(0x00551558);
    /* 00551558: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055155b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055155e: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00551563: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00551564: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x551569u); f_00641280();
    /* 00551569: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055156c: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055156f: jne 0x5515a5 */ if (!fZ) goto L_005515a5;
L_00551571:; BB(0x00551571);
    /* 00551571: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551575: jne 0x5515a5 */ if (!fZ) goto L_005515a5;
L_00551577:; BB(0x00551577);
    /* 00551577: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055157a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055157d: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00551582: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00551583: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x551588u); f_00641290();
    /* 00551588: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055158b: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055158e: jne 0x5515a5 */ if (!fZ) goto L_005515a5;
L_00551590:; BB(0x00551590);
    /* 00551590: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00551593: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00551596: mov al, byte ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 00551599: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 0055159c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055159f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005515a2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005515a5:; BB(0x005515a5);
    /* 005515a5: jmp 0x5514ea */ goto L_005514ea;
L_005515aa:; BB(0x005515aa);
    /* 005515aa: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005515ac: jmp 0x5515c8 */ goto L_005515c8;
L_005515ae:; BB(0x005515ae);
    /* 005515ae: jmp 0x5514a9 */ goto L_005514a9;
L_005515b3:; BB(0x005515b3);
    /* 005515b3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005515b6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005515b9: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005515bc: jmp 0x551497 */ goto L_00551497;
L_005515c1:; BB(0x005515c1);
    /* 005515c1: jmp 0x55147b */ goto L_0055147b;
L_005515c6:; BB(0x005515c6);
    /* 005515c6: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005515c8:; BB(0x005515c8);
    /* 005515c8: mov esp, ebp */ r_esp = r_ebp;
    /* 005515ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005515cb: ret 0xc */ FN_RET(0x00551330); r_esp += 16; return;
}

void f_005515d0(void) /* sub_5515D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005515d0);
    /* 005515d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005515d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005515d3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005515d6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005515d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005515e0: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005515e7: jmp 0x5515f2 */ goto L_005515f2;
L_005515e9:; BB(0x005515e9);
    /* 005515e9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005515ec: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005515ef: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005515f2:; BB(0x005515f2);
    /* 005515f2: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005515f6: jg 0x551662 */ if ((!fZ&&fS==fO)) goto L_00551662;
L_005515f8:; BB(0x005515f8);
    /* 005515f8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005515fa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005515fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005515fe: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00551601: call 0x5510d0 */ r_esp -= 4; W32(r_esp, 0x551606u); f_005510d0();
    /* 00551606: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00551609: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055160b: je 0x551660 */ if (fZ) goto L_00551660;
L_0055160d:; BB(0x0055160d);
    /* 0055160d: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00551614: jmp 0x55161f */ goto L_0055161f;
L_00551616:; BB(0x00551616);
    /* 00551616: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00551619: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055161c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0055161f:; BB(0x0055161f);
    /* 0055161f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00551622: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x551627u); f_0054c540();
    /* 00551627: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055162a: jge 0x55165c */ if ((fS==fO)) goto L_0055165c;
L_0055162c:; BB(0x0055162c);
    /* 0055162c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055162f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00551632: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00551637: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551638: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x55163du); f_00641290();
    /* 0055163d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551640: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551643: jne 0x55165a */ if (!fZ) goto L_0055165a;
L_00551645:; BB(0x00551645);
    /* 00551645: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00551648: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055164b: mov dl, byte ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0055164e: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 00551651: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00551654: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00551657: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055165a:; BB(0x0055165a);
    /* 0055165a: jmp 0x551616 */ goto L_00551616;
L_0055165c:; BB(0x0055165c);
    /* 0055165c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0055165e: jmp 0x551664 */ goto L_00551664;
L_00551660:; BB(0x00551660);
    /* 00551660: jmp 0x5515e9 */ goto L_005515e9;
L_00551662:; BB(0x00551662);
    /* 00551662: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00551664:; BB(0x00551664);
    /* 00551664: mov esp, ebp */ r_esp = r_ebp;
    /* 00551666: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00551667: ret  */ FN_RET(0x005515d0); r_esp += 4; return;
}

void f_00551670(void) /* sub_551670 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00551670);
    /* 00551670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00551671: mov ebp, esp */ r_ebp = r_esp;
    /* 00551673: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00551676: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00551679: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00551680: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00551683: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00551686: jmp 0x551691 */ goto L_00551691;
L_00551688:; BB(0x00551688);
    /* 00551688: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055168b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055168e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00551691:; BB(0x00551691);
    /* 00551691: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00551694: cmp edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00551697: jge 0x551770 */ if ((fS==fO)) goto L_00551770;
L_0055169d:; BB(0x0055169d);
    /* 0055169d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005516a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005516a1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005516a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005516a5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005516a8: call 0x551130 */ r_esp -= 4; W32(r_esp, 0x5516adu); f_00551130();
    /* 005516ad: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005516b0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005516b2: je 0x55176b */ if (fZ) goto L_0055176b;
L_005516b8:; BB(0x005516b8);
    /* 005516b8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005516bf: jmp 0x5516ca */ goto L_005516ca;
L_005516c1:; BB(0x005516c1);
    /* 005516c1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005516c4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005516c7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005516ca:; BB(0x005516ca);
    /* 005516ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005516cd: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x5516d2u); f_0054c540();
    /* 005516d2: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005516d5: jge 0x551764 */ if ((fS==fO)) goto L_00551764;
L_005516db:; BB(0x005516db);
    /* 005516db: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005516de: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005516e1: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 005516e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005516e7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005516ea: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x5516efu); f_0054c590();
    /* 005516ef: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005516f2: je 0x55175f */ if (fZ) goto L_0055175f;
L_005516f4:; BB(0x005516f4);
    /* 005516f4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005516f7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005516fa: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 005516ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551700: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x551705u); f_00641280();
    /* 00551705: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551708: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055170b: jl 0x55172b */ if ((fS!=fO)) goto L_0055172b;
L_0055170d:; BB(0x0055170d);
    /* 0055170d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00551710: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00551713: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00551718: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551719: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55171eu); f_00641280();
    /* 0055171e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551721: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00551724: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00551727: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00551729: jle 0x55174a */ if ((fZ||fS!=fO)) goto L_0055174a;
L_0055172b:; BB(0x0055172b);
    /* 0055172b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055172e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00551731: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00551736: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00551737: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55173cu); f_00641280();
    /* 0055173c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055173f: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551742: jne 0x55175f */ if (!fZ) goto L_0055175f;
L_00551744:; BB(0x00551744);
    /* 00551744: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551748: jne 0x55175f */ if (!fZ) goto L_0055175f;
L_0055174a:; BB(0x0055174a);
    /* 0055174a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055174d: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00551750: mov al, byte ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
    /* 00551753: mov byte ptr [edx + 0x14], al */ W8((u32)(r_edx+0x14u), (u8)r_eax);
    /* 00551756: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00551759: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055175c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0055175f:; BB(0x0055175f);
    /* 0055175f: jmp 0x5516c1 */ goto L_005516c1;
L_00551764:; BB(0x00551764);
    /* 00551764: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00551766: jmp 0x551884 */ goto L_00551884;
L_0055176b:; BB(0x0055176b);
    /* 0055176b: jmp 0x551688 */ goto L_00551688;
L_00551770:; BB(0x00551770);
    /* 00551770: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00551773: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00551776: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00551779:; BB(0x00551779);
    /* 00551779: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055177d: jg 0x551882 */ if ((!fZ&&fS==fO)) goto L_00551882;
L_00551783:; BB(0x00551783);
    /* 00551783: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00551786: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00551789: jmp 0x551794 */ goto L_00551794;
L_0055178b:; BB(0x0055178b);
    /* 0055178b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055178e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00551791: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00551794:; BB(0x00551794);
    /* 00551794: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00551797: cmp edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055179a: jge 0x551874 */ if ((fS==fO)) goto L_00551874;
L_005517a0:; BB(0x005517a0);
    /* 005517a0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005517a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005517a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005517a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005517a8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005517ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005517ac: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005517af: call 0x5511b0 */ r_esp -= 4; W32(r_esp, 0x5517b4u); f_005511b0();
    /* 005517b4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005517b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005517b9: je 0x55186f */ if (fZ) goto L_0055186f;
L_005517bf:; BB(0x005517bf);
    /* 005517bf: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005517c6: jmp 0x5517d1 */ goto L_005517d1;
L_005517c8:; BB(0x005517c8);
    /* 005517c8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005517cb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005517ce: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005517d1:; BB(0x005517d1);
    /* 005517d1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005517d4: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x5517d9u); f_0054c540();
    /* 005517d9: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005517dc: jge 0x55186b */ if ((fS==fO)) goto L_0055186b;
L_005517e2:; BB(0x005517e2);
    /* 005517e2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005517e5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005517e8: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 005517ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005517ee: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005517f1: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x5517f6u); f_0054c590();
    /* 005517f6: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005517f9: je 0x551866 */ if (fZ) goto L_00551866;
L_005517fb:; BB(0x005517fb);
    /* 005517fb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005517fe: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00551801: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00551806: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00551807: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55180cu); f_00641280();
    /* 0055180c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055180f: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00551812: jl 0x551832 */ if ((fS!=fO)) goto L_00551832;
L_00551814:; BB(0x00551814);
    /* 00551814: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00551817: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055181a: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0055181f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00551820: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x551825u); f_00641280();
    /* 00551825: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551828: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055182b: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055182e: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00551830: jle 0x551851 */ if ((fZ||fS!=fO)) goto L_00551851;
L_00551832:; BB(0x00551832);
    /* 00551832: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00551835: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00551838: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0055183d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055183e: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x551843u); f_00641280();
    /* 00551843: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551846: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551849: jne 0x551866 */ if (!fZ) goto L_00551866;
L_0055184b:; BB(0x0055184b);
    /* 0055184b: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055184f: jne 0x551866 */ if (!fZ) goto L_00551866;
L_00551851:; BB(0x00551851);
    /* 00551851: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00551854: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00551857: mov cl, byte ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
    /* 0055185a: mov byte ptr [eax + 0x14], cl */ W8((u32)(r_eax+0x14u), (u8)r_ecx);
    /* 0055185d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00551860: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00551863: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00551866:; BB(0x00551866);
    /* 00551866: jmp 0x5517c8 */ goto L_005517c8;
L_0055186b:; BB(0x0055186b);
    /* 0055186b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0055186d: jmp 0x551884 */ goto L_00551884;
L_0055186f:; BB(0x0055186f);
    /* 0055186f: jmp 0x55178b */ goto L_0055178b;
L_00551874:; BB(0x00551874);
    /* 00551874: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00551877: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055187a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0055187d: jmp 0x551779 */ goto L_00551779;
L_00551882:; BB(0x00551882);
    /* 00551882: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00551884:; BB(0x00551884);
    /* 00551884: mov esp, ebp */ r_esp = r_ebp;
    /* 00551886: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00551887: ret 0xc */ FN_RET(0x00551670); r_esp += 16; return;
}

void f_00551890(void) /* sub_551890 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00551890);
    /* 00551890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00551891: mov ebp, esp */ r_ebp = r_esp;
    /* 00551893: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00551896: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00551899: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005518a0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005518a7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005518aa: call 0x54c8a0 */ r_esp -= 4; W32(r_esp, 0x5518afu); f_0054c8a0();
    /* 005518af: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005518b2: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005518b6: je 0x55190b */ if (fZ) goto L_0055190b;
L_005518b8:; BB(0x005518b8);
    /* 005518b8: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005518bf: jmp 0x5518ca */ goto L_005518ca;
L_005518c1:; BB(0x005518c1);
    /* 005518c1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005518c4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005518c7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005518ca:; BB(0x005518ca);
    /* 005518ca: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005518cd: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x5518d2u); f_0054c540();
    /* 005518d2: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005518d5: jge 0x551907 */ if ((fS==fO)) goto L_00551907;
L_005518d7:; BB(0x005518d7);
    /* 005518d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005518da: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005518dd: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 005518e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005518e3: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5518e8u); f_00641280();
    /* 005518e8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005518eb: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005518ee: jne 0x551905 */ if (!fZ) goto L_00551905;
L_005518f0:; BB(0x005518f0);
    /* 005518f0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005518f3: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005518f6: mov dl, byte ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 005518f9: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 005518fc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005518ff: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00551902: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00551905:; BB(0x00551905);
    /* 00551905: jmp 0x5518c1 */ goto L_005518c1;
L_00551907:; BB(0x00551907);
    /* 00551907: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00551909: jmp 0x55190d */ goto L_0055190d;
L_0055190b:; BB(0x0055190b);
    /* 0055190b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0055190d:; BB(0x0055190d);
    /* 0055190d: mov esp, ebp */ r_esp = r_ebp;
    /* 0055190f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00551910: ret  */ FN_RET(0x00551890); r_esp += 4; return;
}

void f_00551920(void) /* sub_551920 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00551920);
    /* 00551920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00551921: mov ebp, esp */ r_ebp = r_esp;
    /* 00551923: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00551926: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00551929: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00551930: jmp 0x55193b */ goto L_0055193b;
L_00551932:; BB(0x00551932);
    /* 00551932: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00551935: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00551938: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055193b:; BB(0x0055193b);
    /* 0055193b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055193f: jge 0x55194f */ if ((fS==fO)) goto L_0055194f;
L_00551941:; BB(0x00551941);
    /* 00551941: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00551944: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00551947: mov dl, byte ptr [ebp - 4] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 0055194a: mov byte ptr [ecx + 0x14], dl */ W8((u32)(r_ecx+0x14u), (u8)r_edx);
    /* 0055194d: jmp 0x551932 */ goto L_00551932;
L_0055194f:; BB(0x0055194f);
    /* 0055194f: mov esp, ebp */ r_esp = r_ebp;
    /* 00551951: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00551952: ret  */ FN_RET(0x00551920); r_esp += 4; return;
}

void f_00551960(void) /* sub_551960 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00551960);
    /* 00551960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00551961: mov ebp, esp */ r_ebp = r_esp;
    /* 00551963: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00551966: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00551969: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00551970: jmp 0x55197b */ goto L_0055197b;
L_00551972:; BB(0x00551972);
    /* 00551972: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00551975: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00551978: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055197b:; BB(0x0055197b);
    /* 0055197b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055197f: jge 0x55198d */ if ((fS==fO)) goto L_0055198d;
L_00551981:; BB(0x00551981);
    /* 00551981: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00551984: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00551987: mov byte ptr [ecx + 0x14], 0xff */ W8((u32)(r_ecx+0x14u), 0xffu);
    /* 0055198b: jmp 0x551972 */ goto L_00551972;
L_0055198d:; BB(0x0055198d);
    /* 0055198d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055198f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00551992: call 0x5519a0 */ r_esp -= 4; W32(r_esp, 0x551997u); f_005519a0();
    /* 00551997: mov esp, ebp */ r_esp = r_ebp;
    /* 00551999: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055199a: ret  */ FN_RET(0x00551960); r_esp += 4; return;
}

void f_005519a0(void) /* sub_5519A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005519a0);
    /* 005519a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005519a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005519a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005519a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005519a7: movsx eax, byte ptr [ebp + 8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 005519ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005519ad: jne 0x5519ba */ if (!fZ) goto L_005519ba;
L_005519af:; BB(0x005519af);
    /* 005519af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005519b2: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005519b5: mov byte ptr [ecx + 0x19], dl */ W8((u32)(r_ecx+0x19u), (u8)r_edx);
    /* 005519b8: jmp 0x5519ce */ goto L_005519ce;
L_005519ba:; BB(0x005519ba);
    /* 005519ba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005519bd: movsx ecx, byte ptr [eax + 0x19] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x19u));
    /* 005519c1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005519c3: jne 0x5519ce */ if (!fZ) goto L_005519ce;
L_005519c5:; BB(0x005519c5);
    /* 005519c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005519c8: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005519cb: mov byte ptr [edx + 0x19], al */ W8((u32)(r_edx+0x19u), (u8)r_eax);
L_005519ce:; BB(0x005519ce);
    /* 005519ce: mov esp, ebp */ r_esp = r_ebp;
    /* 005519d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005519d1: ret 4 */ FN_RET(0x005519a0); r_esp += 8; return;
}

void f_005519e0(void) /* sub_5519E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005519e0);
    /* 005519e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005519e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005519e3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005519e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005519e7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005519ea: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005519ec: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005519ee: call 0x641230 */ r_esp -= 4; W32(r_esp, 0x5519f3u); f_00641230();
    /* 005519f3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005519f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005519f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005519fa: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x5519ffu); f_0054c590();
    /* 005519ff: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00551a01: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551a04: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00551a07: mov byte ptr [ebp - 5], cl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_ecx);
    /* 00551a0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00551a11: jmp 0x551a1c */ goto L_00551a1c;
L_00551a13:; BB(0x00551a13);
    /* 00551a13: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00551a16: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00551a19: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00551a1c:; BB(0x00551a1c);
    /* 00551a1c: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00551a20: jge 0x551b42 */ if ((fS==fO)) goto L_00551b42;
L_00551a26:; BB(0x00551a26);
    /* 00551a26: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00551a29: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00551a2c: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 00551a30: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551a33: je 0x551b3d */ if (fZ) goto L_00551b3d;
L_00551a39:; BB(0x00551a39);
    /* 00551a39: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00551a3c: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00551a3f: movsx eax, byte ptr [edx + 0x15] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x15u));
    /* 00551a43: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551a46: je 0x551b3d */ if (fZ) goto L_00551b3d;
L_00551a4c:; BB(0x00551a4c);
    /* 00551a4c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00551a4f: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00551a52: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 00551a56: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00551a59: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00551a5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00551a5f: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x551a64u); f_00641280();
    /* 00551a64: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551a67: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551a6a: jne 0x551a73 */ if (!fZ) goto L_00551a73;
L_00551a6c:; BB(0x00551a6c);
    /* 00551a6c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00551a6e: jmp 0x551b44 */ goto L_00551b44;
L_00551a73:; BB(0x00551a73);
    /* 00551a73: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00551a76: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00551a79: movsx eax, byte ptr [edx + 0x15] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x15u));
    /* 00551a7d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00551a80: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00551a85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00551a86: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x551a8bu); f_00641280();
    /* 00551a8b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551a8e: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551a91: jne 0x551a9a */ if (!fZ) goto L_00551a9a;
L_00551a93:; BB(0x00551a93);
    /* 00551a93: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00551a95: jmp 0x551b44 */ goto L_00551b44;
L_00551a9a:; BB(0x00551a9a);
    /* 00551a9a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00551a9d: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00551aa0: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 00551aa4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00551aa7: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00551aac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551aad: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x551ab2u); f_00641280();
    /* 00551ab2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551ab5: movzx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 00551ab9: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00551abb: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00551abd: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00551abf: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00551ac2: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551ac4: jne 0x551aca */ if (!fZ) goto L_00551aca;
L_00551ac6:; BB(0x00551ac6);
    /* 00551ac6: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00551ac8: jmp 0x551b44 */ goto L_00551b44;
L_00551aca:; BB(0x00551aca);
    /* 00551aca: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00551acd: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00551ad0: movsx eax, byte ptr [edx + 0x15] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x15u));
    /* 00551ad4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00551ad7: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00551adc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00551add: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x551ae2u); f_00641280();
    /* 00551ae2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551ae5: movzx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 00551ae9: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00551aeb: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00551aed: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00551aef: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00551af2: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551af4: jne 0x551afa */ if (!fZ) goto L_00551afa;
L_00551af6:; BB(0x00551af6);
    /* 00551af6: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00551af8: jmp 0x551b44 */ goto L_00551b44;
L_00551afa:; BB(0x00551afa);
    /* 00551afa: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00551afd: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00551b00: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 00551b04: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00551b07: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00551b0c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00551b0d: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x551b12u); f_00641280();
    /* 00551b12: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551b15: mov esi, eax */ r_esi = r_eax;
    /* 00551b17: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00551b1a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00551b1d: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00551b20: movsx ecx, byte ptr [eax + 0x15] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x15u));
    /* 00551b24: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00551b27: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00551b2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551b2d: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x551b32u); f_00641280();
    /* 00551b32: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551b35: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551b37: je 0x551b3d */ if (fZ) goto L_00551b3d;
L_00551b39:; BB(0x00551b39);
    /* 00551b39: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00551b3b: jmp 0x551b44 */ goto L_00551b44;
L_00551b3d:; BB(0x00551b3d);
    /* 00551b3d: jmp 0x551a13 */ goto L_00551a13;
L_00551b42:; BB(0x00551b42);
    /* 00551b42: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00551b44:; BB(0x00551b44);
    /* 00551b44: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00551b45: mov esp, ebp */ r_esp = r_ebp;
    /* 00551b47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00551b48: ret  */ FN_RET(0x005519e0); r_esp += 4; return;
}

void f_00551b50(void) /* sub_551B50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00551b50);
    /* 00551b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00551b51: mov ebp, esp */ r_ebp = r_esp;
    /* 00551b53: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00551b56: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00551b59: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 00551b5d: mov dword ptr [ebp - 0x18], 0xffffffff */ W32((u32)(r_ebp+0xffffffe8u), 0xffffffffu);
    /* 00551b64: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00551b67: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 00551b6b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00551b6e: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00551b73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551b74: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x551b79u); f_00641280();
    /* 00551b79: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551b7c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00551b7f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00551b82: movsx edx, byte ptr [ecx + 0x16] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x16u));
    /* 00551b86: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00551b89: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00551b8e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00551b8f: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x551b94u); f_00641280();
    /* 00551b94: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551b97: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00551b9a: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00551ba1: jmp 0x551bac */ goto L_00551bac;
L_00551ba3:; BB(0x00551ba3);
    /* 00551ba3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00551ba6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00551ba9: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00551bac:; BB(0x00551bac);
    /* 00551bac: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00551bb0: jge 0x551bda */ if ((fS==fO)) goto L_00551bda;
L_00551bb2:; BB(0x00551bb2);
    /* 00551bb2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00551bb5: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00551bb8: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 00551bbc: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00551bbf: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00551bc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551bc5: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x551bcau); f_00641280();
    /* 00551bca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551bcd: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551bd0: jne 0x551bd8 */ if (!fZ) goto L_00551bd8;
L_00551bd2:; BB(0x00551bd2);
    /* 00551bd2: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
    /* 00551bd6: jmp 0x551bda */ goto L_00551bda;
L_00551bd8:; BB(0x00551bd8);
    /* 00551bd8: jmp 0x551ba3 */ goto L_00551ba3;
L_00551bda:; BB(0x00551bda);
    /* 00551bda: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00551bde: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551be0: je 0x551c40 */ if (fZ) goto L_00551c40;
L_00551be2:; BB(0x00551be2);
    /* 00551be2: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00551be9: jmp 0x551bf4 */ goto L_00551bf4;
L_00551beb:; BB(0x00551beb);
    /* 00551beb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00551bee: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00551bf1: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00551bf4:; BB(0x00551bf4);
    /* 00551bf4: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00551bf8: jge 0x551c40 */ if ((fS==fO)) goto L_00551c40;
L_00551bfa:; BB(0x00551bfa);
    /* 00551bfa: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00551bfd: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00551c00: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 00551c04: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00551c07: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00551c0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551c0d: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x551c12u); f_00641280();
    /* 00551c12: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551c15: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551c18: je 0x551c3e */ if (fZ) goto L_00551c3e;
L_00551c1a:; BB(0x00551c1a);
    /* 00551c1a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00551c1d: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00551c20: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 00551c24: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00551c27: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00551c2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00551c2d: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x551c32u); f_00641280();
    /* 00551c32: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551c35: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551c38: jne 0x551c3e */ if (!fZ) goto L_00551c3e;
L_00551c3a:; BB(0x00551c3a);
    /* 00551c3a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00551c3c: jmp 0x551c6a */ goto L_00551c6a;
L_00551c3e:; BB(0x00551c3e);
    /* 00551c3e: jmp 0x551beb */ goto L_00551beb;
L_00551c40:; BB(0x00551c40);
    /* 00551c40: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00551c43: cmp edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00551c46: jle 0x551c5a */ if ((fZ||fS!=fO)) goto L_00551c5a;
L_00551c48:; BB(0x00551c48);
    /* 00551c48: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00551c4b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00551c4e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00551c51: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00551c54: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00551c57: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_00551c5a:; BB(0x00551c5a);
    /* 00551c5a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00551c5d: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00551c60: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00551c62: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00551c65: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00551c68: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
L_00551c6a:; BB(0x00551c6a);
    /* 00551c6a: mov esp, ebp */ r_esp = r_ebp;
    /* 00551c6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00551c6d: ret 8 */ FN_RET(0x00551b50); r_esp += 12; return;
}

void f_00551c70(void) /* sub_551C70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00551c70);
    /* 00551c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00551c71: mov ebp, esp */ r_ebp = r_esp;
    /* 00551c73: sub esp, 0x434 */ {  u32 a = r_esp; u32 b = 0x434u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00551c79: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00551c7e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00551c80: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00551c83: mov dword ptr [ebp - 0x430], ecx */ W32((u32)(r_ebp+0xfffffbd0u), r_ecx);
    /* 00551c89: mov eax, dword ptr [ebp - 0x430] */ r_eax = R32((u32)(r_ebp+0xfffffbd0u));
    /* 00551c8f: movsx ecx, byte ptr [eax + 0x19] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x19u));
    /* 00551c93: mov dword ptr [ebp - 0x434], ecx */ W32((u32)(r_ebp+0xfffffbccu), r_ecx);
    /* 00551c99: cmp dword ptr [ebp - 0x434], 0x34 */ {  u32 a = R32((u32)(r_ebp+0xfffffbccu)); u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00551ca0: ja 0x552513 */ if ((!fC&&!fZ)) goto L_00552513;
L_00551ca6:; BB(0x00551ca6);
    /* 00551ca6: mov edx, dword ptr [ebp - 0x434] */ r_edx = R32((u32)(r_ebp+0xfffffbccu));
    /* 00551cac: jmp dword ptr [edx*4 + 0x552544] */ { u32 t = R32((u32)(r_edx*4+0x552544u)); switch (t) { case 0x551cb3u: goto L_00551cb3; case 0x551cd5u: goto L_00551cd5; case 0x551cf7u: goto L_00551cf7; case 0x551da1u: goto L_00551da1; case 0x551d5du: goto L_00551d5d; case 0x551d19u: goto L_00551d19; case 0x551d7fu: goto L_00551d7f; case 0x551d3bu: goto L_00551d3b; case 0x551dc3u: goto L_00551dc3; case 0x551de5u: goto L_00551de5; case 0x551e4bu: goto L_00551e4b; case 0x551ef5u: goto L_00551ef5; case 0x551e07u: goto L_00551e07; case 0x551e8fu: goto L_00551e8f; case 0x551eb1u: goto L_00551eb1; case 0x551ed3u: goto L_00551ed3; case 0x551f17u: goto L_00551f17; case 0x551e6du: goto L_00551e6d; case 0x551e29u: goto L_00551e29; case 0x551f39u: goto L_00551f39; case 0x551f5bu: goto L_00551f5b; case 0x551f7du: goto L_00551f7d; case 0x551f9fu: goto L_00551f9f; case 0x551fc1u: goto L_00551fc1; case 0x552005u: goto L_00552005; case 0x552027u: goto L_00552027; case 0x552049u: goto L_00552049; case 0x55206bu: goto L_0055206b; case 0x55208du: goto L_0055208d; case 0x5520afu: goto L_005520af; case 0x5520d1u: goto L_005520d1; case 0x5520f3u: goto L_005520f3; case 0x552115u: goto L_00552115; case 0x552137u: goto L_00552137; case 0x551fe3u: goto L_00551fe3; case 0x552159u: goto L_00552159; case 0x55219du: goto L_0055219d; case 0x5521f9u: goto L_005521f9; case 0x55217bu: goto L_0055217b; case 0x55221bu: goto L_0055221b; case 0x55223du: goto L_0055223d; case 0x55225fu: goto L_0055225f; case 0x552281u: goto L_00552281; case 0x5522a3u: goto L_005522a3; case 0x55239fu: goto L_0055239f; case 0x552414u: goto L_00552414; case 0x552436u: goto L_00552436; case 0x552458u: goto L_00552458; case 0x55247au: goto L_0055247a; case 0x552499u: goto L_00552499; case 0x5524b8u: goto L_005524b8; case 0x5524d7u: goto L_005524d7; case 0x5524f6u: goto L_005524f6; default: UNSUP(0x00551cac, "jump table entry is not a known target"); } }
L_00551cb3:; BB(0x00551cb3);
    /* 00551cb3: push 0x6c84bc */ { u32 v = 0x6c84bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00551cb8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x551cbdu); f_00630f40();
    /* 00551cbd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551cc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551cc1: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 00551cc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551cc8: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x551ccdu); f_00686d8e();
    /* 00551ccd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551cd0: jmp 0x552513 */ goto L_00552513;
L_00551cd5:; BB(0x00551cd5);
    /* 00551cd5: push 0x6c84a4 */ { u32 v = 0x6c84a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00551cda: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x551cdfu); f_00630f40();
    /* 00551cdf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551ce2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551ce3: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 00551ce9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00551cea: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x551cefu); f_00686d8e();
    /* 00551cef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551cf2: jmp 0x552513 */ goto L_00552513;
L_00551cf7:; BB(0x00551cf7);
    /* 00551cf7: push 0x6c8488 */ { u32 v = 0x6c8488u; r_esp -= 4; W32(r_esp, v); }
    /* 00551cfc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x551d01u); f_00630f40();
    /* 00551d01: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551d04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551d05: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 00551d0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00551d0c: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x551d11u); f_00686d8e();
    /* 00551d11: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551d14: jmp 0x552513 */ goto L_00552513;
L_00551d19:; BB(0x00551d19);
    /* 00551d19: push 0x6c846c */ { u32 v = 0x6c846cu; r_esp -= 4; W32(r_esp, v); }
    /* 00551d1e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x551d23u); f_00630f40();
    /* 00551d23: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551d26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551d27: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 00551d2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551d2e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x551d33u); f_00686d8e();
    /* 00551d33: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551d36: jmp 0x552513 */ goto L_00552513;
L_00551d3b:; BB(0x00551d3b);
    /* 00551d3b: push 0x6c8450 */ { u32 v = 0x6c8450u; r_esp -= 4; W32(r_esp, v); }
    /* 00551d40: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x551d45u); f_00630f40();
    /* 00551d45: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551d48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551d49: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 00551d4f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00551d50: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x551d55u); f_00686d8e();
    /* 00551d55: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551d58: jmp 0x552513 */ goto L_00552513;
L_00551d5d:; BB(0x00551d5d);
    /* 00551d5d: push 0x6c8430 */ { u32 v = 0x6c8430u; r_esp -= 4; W32(r_esp, v); }
    /* 00551d62: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x551d67u); f_00630f40();
    /* 00551d67: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551d6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551d6b: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 00551d71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00551d72: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x551d77u); f_00686d8e();
    /* 00551d77: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551d7a: jmp 0x552513 */ goto L_00552513;
L_00551d7f:; BB(0x00551d7f);
    /* 00551d7f: push 0x6c8410 */ { u32 v = 0x6c8410u; r_esp -= 4; W32(r_esp, v); }
    /* 00551d84: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x551d89u); f_00630f40();
    /* 00551d89: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551d8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551d8d: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 00551d93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551d94: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x551d99u); f_00686d8e();
    /* 00551d99: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551d9c: jmp 0x552513 */ goto L_00552513;
L_00551da1:; BB(0x00551da1);
    /* 00551da1: push 0x6c83ec */ { u32 v = 0x6c83ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00551da6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x551dabu); f_00630f40();
    /* 00551dab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551dae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551daf: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 00551db5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00551db6: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x551dbbu); f_00686d8e();
    /* 00551dbb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551dbe: jmp 0x552513 */ goto L_00552513;
L_00551dc3:; BB(0x00551dc3);
    /* 00551dc3: push 0x6c83c8 */ { u32 v = 0x6c83c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00551dc8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x551dcdu); f_00630f40();
    /* 00551dcd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551dd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551dd1: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 00551dd7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00551dd8: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x551dddu); f_00686d8e();
    /* 00551ddd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551de0: jmp 0x552513 */ goto L_00552513;
L_00551de5:; BB(0x00551de5);
    /* 00551de5: push 0x6c83b0 */ { u32 v = 0x6c83b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00551dea: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x551defu); f_00630f40();
    /* 00551def: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551df2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551df3: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 00551df9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551dfa: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x551dffu); f_00686d8e();
    /* 00551dff: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551e02: jmp 0x552513 */ goto L_00552513;
L_00551e07:; BB(0x00551e07);
    /* 00551e07: push 0x6c8394 */ { u32 v = 0x6c8394u; r_esp -= 4; W32(r_esp, v); }
    /* 00551e0c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x551e11u); f_00630f40();
    /* 00551e11: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551e14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551e15: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 00551e1b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00551e1c: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x551e21u); f_00686d8e();
    /* 00551e21: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551e24: jmp 0x552513 */ goto L_00552513;
L_00551e29:; BB(0x00551e29);
    /* 00551e29: push 0x6c837c */ { u32 v = 0x6c837cu; r_esp -= 4; W32(r_esp, v); }
    /* 00551e2e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x551e33u); f_00630f40();
    /* 00551e33: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551e36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551e37: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 00551e3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00551e3e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x551e43u); f_00686d8e();
    /* 00551e43: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551e46: jmp 0x552513 */ goto L_00552513;
L_00551e4b:; BB(0x00551e4b);
    /* 00551e4b: push 0x6c8360 */ { u32 v = 0x6c8360u; r_esp -= 4; W32(r_esp, v); }
    /* 00551e50: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x551e55u); f_00630f40();
    /* 00551e55: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551e58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551e59: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 00551e5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551e60: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x551e65u); f_00686d8e();
    /* 00551e65: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551e68: jmp 0x552513 */ goto L_00552513;
L_00551e6d:; BB(0x00551e6d);
    /* 00551e6d: push 0x6c8340 */ { u32 v = 0x6c8340u; r_esp -= 4; W32(r_esp, v); }
    /* 00551e72: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x551e77u); f_00630f40();
    /* 00551e77: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551e7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551e7b: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 00551e81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00551e82: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x551e87u); f_00686d8e();
    /* 00551e87: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551e8a: jmp 0x552513 */ goto L_00552513;
L_00551e8f:; BB(0x00551e8f);
    /* 00551e8f: push 0x6c8320 */ { u32 v = 0x6c8320u; r_esp -= 4; W32(r_esp, v); }
    /* 00551e94: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x551e99u); f_00630f40();
    /* 00551e99: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551e9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551e9d: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 00551ea3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00551ea4: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x551ea9u); f_00686d8e();
    /* 00551ea9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551eac: jmp 0x552513 */ goto L_00552513;
L_00551eb1:; BB(0x00551eb1);
    /* 00551eb1: push 0x6c8300 */ { u32 v = 0x6c8300u; r_esp -= 4; W32(r_esp, v); }
    /* 00551eb6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x551ebbu); f_00630f40();
    /* 00551ebb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551ebe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551ebf: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 00551ec5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551ec6: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x551ecbu); f_00686d8e();
    /* 00551ecb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551ece: jmp 0x552513 */ goto L_00552513;
L_00551ed3:; BB(0x00551ed3);
    /* 00551ed3: push 0x6c82d8 */ { u32 v = 0x6c82d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00551ed8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x551eddu); f_00630f40();
    /* 00551edd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551ee0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551ee1: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 00551ee7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00551ee8: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x551eedu); f_00686d8e();
    /* 00551eed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551ef0: jmp 0x552513 */ goto L_00552513;
L_00551ef5:; BB(0x00551ef5);
    /* 00551ef5: push 0x6c82b4 */ { u32 v = 0x6c82b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00551efa: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x551effu); f_00630f40();
    /* 00551eff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551f02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551f03: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 00551f09: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00551f0a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x551f0fu); f_00686d8e();
    /* 00551f0f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551f12: jmp 0x552513 */ goto L_00552513;
L_00551f17:; BB(0x00551f17);
    /* 00551f17: push 0x6c8294 */ { u32 v = 0x6c8294u; r_esp -= 4; W32(r_esp, v); }
    /* 00551f1c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x551f21u); f_00630f40();
    /* 00551f21: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551f24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551f25: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 00551f2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551f2c: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x551f31u); f_00686d8e();
    /* 00551f31: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551f34: jmp 0x552513 */ goto L_00552513;
L_00551f39:; BB(0x00551f39);
    /* 00551f39: push 0x6c8278 */ { u32 v = 0x6c8278u; r_esp -= 4; W32(r_esp, v); }
    /* 00551f3e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x551f43u); f_00630f40();
    /* 00551f43: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551f46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551f47: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 00551f4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00551f4e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x551f53u); f_00686d8e();
    /* 00551f53: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551f56: jmp 0x552513 */ goto L_00552513;
L_00551f5b:; BB(0x00551f5b);
    /* 00551f5b: push 0x6c8258 */ { u32 v = 0x6c8258u; r_esp -= 4; W32(r_esp, v); }
    /* 00551f60: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x551f65u); f_00630f40();
    /* 00551f65: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551f68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551f69: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 00551f6f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00551f70: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x551f75u); f_00686d8e();
    /* 00551f75: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551f78: jmp 0x552513 */ goto L_00552513;
L_00551f7d:; BB(0x00551f7d);
    /* 00551f7d: push 0x6c8234 */ { u32 v = 0x6c8234u; r_esp -= 4; W32(r_esp, v); }
    /* 00551f82: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x551f87u); f_00630f40();
    /* 00551f87: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551f8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551f8b: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 00551f91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551f92: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x551f97u); f_00686d8e();
    /* 00551f97: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551f9a: jmp 0x552513 */ goto L_00552513;
L_00551f9f:; BB(0x00551f9f);
    /* 00551f9f: push 0x6c821c */ { u32 v = 0x6c821cu; r_esp -= 4; W32(r_esp, v); }
    /* 00551fa4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x551fa9u); f_00630f40();
    /* 00551fa9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551fac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551fad: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 00551fb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00551fb4: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x551fb9u); f_00686d8e();
    /* 00551fb9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551fbc: jmp 0x552513 */ goto L_00552513;
L_00551fc1:; BB(0x00551fc1);
    /* 00551fc1: push 0x6c8204 */ { u32 v = 0x6c8204u; r_esp -= 4; W32(r_esp, v); }
    /* 00551fc6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x551fcbu); f_00630f40();
    /* 00551fcb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551fce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551fcf: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 00551fd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00551fd6: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x551fdbu); f_00686d8e();
    /* 00551fdb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551fde: jmp 0x552513 */ goto L_00552513;
L_00551fe3:; BB(0x00551fe3);
    /* 00551fe3: push 0x6c81e8 */ { u32 v = 0x6c81e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00551fe8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x551fedu); f_00630f40();
    /* 00551fed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00551ff0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551ff1: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 00551ff7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00551ff8: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x551ffdu); f_00686d8e();
    /* 00551ffd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552000: jmp 0x552513 */ goto L_00552513;
L_00552005:; BB(0x00552005);
    /* 00552005: push 0x6c81c8 */ { u32 v = 0x6c81c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055200a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55200fu); f_00630f40();
    /* 0055200f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552012: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552013: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 00552019: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055201a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55201fu); f_00686d8e();
    /* 0055201f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552022: jmp 0x552513 */ goto L_00552513;
L_00552027:; BB(0x00552027);
    /* 00552027: push 0x6c81a8 */ { u32 v = 0x6c81a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055202c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x552031u); f_00630f40();
    /* 00552031: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552034: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552035: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055203b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055203c: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x552041u); f_00686d8e();
    /* 00552041: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552044: jmp 0x552513 */ goto L_00552513;
L_00552049:; BB(0x00552049);
    /* 00552049: push 0x6c818c */ { u32 v = 0x6c818cu; r_esp -= 4; W32(r_esp, v); }
    /* 0055204e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x552053u); f_00630f40();
    /* 00552053: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552056: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552057: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0055205d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055205e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x552063u); f_00686d8e();
    /* 00552063: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552066: jmp 0x552513 */ goto L_00552513;
L_0055206b:; BB(0x0055206b);
    /* 0055206b: push 0x6c816c */ { u32 v = 0x6c816cu; r_esp -= 4; W32(r_esp, v); }
    /* 00552070: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x552075u); f_00630f40();
    /* 00552075: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552078: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552079: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055207f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00552080: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x552085u); f_00686d8e();
    /* 00552085: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552088: jmp 0x552513 */ goto L_00552513;
L_0055208d:; BB(0x0055208d);
    /* 0055208d: push 0x6c8140 */ { u32 v = 0x6c8140u; r_esp -= 4; W32(r_esp, v); }
    /* 00552092: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x552097u); f_00630f40();
    /* 00552097: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055209a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055209b: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 005520a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005520a2: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5520a7u); f_00686d8e();
    /* 005520a7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005520aa: jmp 0x552513 */ goto L_00552513;
L_005520af:; BB(0x005520af);
    /* 005520af: push 0x6c8110 */ { u32 v = 0x6c8110u; r_esp -= 4; W32(r_esp, v); }
    /* 005520b4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5520b9u); f_00630f40();
    /* 005520b9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005520bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005520bd: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 005520c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005520c4: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5520c9u); f_00686d8e();
    /* 005520c9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005520cc: jmp 0x552513 */ goto L_00552513;
L_005520d1:; BB(0x005520d1);
    /* 005520d1: push 0x6c80ec */ { u32 v = 0x6c80ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005520d6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5520dbu); f_00630f40();
    /* 005520db: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005520de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005520df: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 005520e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005520e6: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5520ebu); f_00686d8e();
    /* 005520eb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005520ee: jmp 0x552513 */ goto L_00552513;
L_005520f3:; BB(0x005520f3);
    /* 005520f3: push 0x6c80c0 */ { u32 v = 0x6c80c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005520f8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5520fdu); f_00630f40();
    /* 005520fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552100: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552101: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 00552107: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00552108: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55210du); f_00686d8e();
    /* 0055210d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552110: jmp 0x552513 */ goto L_00552513;
L_00552115:; BB(0x00552115);
    /* 00552115: push 0x6c8098 */ { u32 v = 0x6c8098u; r_esp -= 4; W32(r_esp, v); }
    /* 0055211a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55211fu); f_00630f40();
    /* 0055211f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552122: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552123: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 00552129: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055212a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55212fu); f_00686d8e();
    /* 0055212f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552132: jmp 0x552513 */ goto L_00552513;
L_00552137:; BB(0x00552137);
    /* 00552137: push 0x6c8070 */ { u32 v = 0x6c8070u; r_esp -= 4; W32(r_esp, v); }
    /* 0055213c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x552141u); f_00630f40();
    /* 00552141: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552144: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552145: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055214b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055214c: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x552151u); f_00686d8e();
    /* 00552151: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552154: jmp 0x552513 */ goto L_00552513;
L_00552159:; BB(0x00552159);
    /* 00552159: push 0x6c8054 */ { u32 v = 0x6c8054u; r_esp -= 4; W32(r_esp, v); }
    /* 0055215e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x552163u); f_00630f40();
    /* 00552163: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552166: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552167: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055216d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055216e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x552173u); f_00686d8e();
    /* 00552173: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552176: jmp 0x552513 */ goto L_00552513;
L_0055217b:; BB(0x0055217b);
    /* 0055217b: push 0x6c8038 */ { u32 v = 0x6c8038u; r_esp -= 4; W32(r_esp, v); }
    /* 00552180: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x552185u); f_00630f40();
    /* 00552185: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552188: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552189: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0055218f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552190: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x552195u); f_00686d8e();
    /* 00552195: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552198: jmp 0x552513 */ goto L_00552513;
L_0055219d:; BB(0x0055219d);
    /* 0055219d: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005521a3: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 005521a9: mov dword ptr [ebp - 0x40c], edx */ W32((u32)(r_ebp+0xfffffbf4u), r_edx);
    /* 005521af: cmp dword ptr [ebp - 0x40c], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf4u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005521b6: jne 0x5521d7 */ if (!fZ) goto L_005521d7;
L_005521b8:; BB(0x005521b8);
    /* 005521b8: push 0x6c8018 */ { u32 v = 0x6c8018u; r_esp -= 4; W32(r_esp, v); }
    /* 005521bd: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5521c2u); f_00630f40();
    /* 005521c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005521c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005521c6: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 005521cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005521cd: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5521d2u); f_00686d8e();
    /* 005521d2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005521d5: jmp 0x5521f4 */ goto L_005521f4;
L_005521d7:; BB(0x005521d7);
    /* 005521d7: push 0x6c7ff8 */ { u32 v = 0x6c7ff8u; r_esp -= 4; W32(r_esp, v); }
    /* 005521dc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5521e1u); f_00630f40();
    /* 005521e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005521e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005521e5: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 005521eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005521ec: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5521f1u); f_00686d8e();
    /* 005521f1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005521f4:; BB(0x005521f4);
    /* 005521f4: jmp 0x552513 */ goto L_00552513;
L_005521f9:; BB(0x005521f9);
    /* 005521f9: push 0x6c7fd0 */ { u32 v = 0x6c7fd0u; r_esp -= 4; W32(r_esp, v); }
    /* 005521fe: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x552203u); f_00630f40();
    /* 00552203: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552206: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552207: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055220d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055220e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x552213u); f_00686d8e();
    /* 00552213: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552216: jmp 0x552513 */ goto L_00552513;
L_0055221b:; BB(0x0055221b);
    /* 0055221b: push 0x6c7fb4 */ { u32 v = 0x6c7fb4u; r_esp -= 4; W32(r_esp, v); }
    /* 00552220: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x552225u); f_00630f40();
    /* 00552225: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552228: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552229: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0055222f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552230: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x552235u); f_00686d8e();
    /* 00552235: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552238: jmp 0x552513 */ goto L_00552513;
L_0055223d:; BB(0x0055223d);
    /* 0055223d: push 0x6c7f94 */ { u32 v = 0x6c7f94u; r_esp -= 4; W32(r_esp, v); }
    /* 00552242: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x552247u); f_00630f40();
    /* 00552247: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055224a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055224b: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 00552251: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00552252: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x552257u); f_00686d8e();
    /* 00552257: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055225a: jmp 0x552513 */ goto L_00552513;
L_0055225f:; BB(0x0055225f);
    /* 0055225f: push 0x6c7f74 */ { u32 v = 0x6c7f74u; r_esp -= 4; W32(r_esp, v); }
    /* 00552264: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x552269u); f_00630f40();
    /* 00552269: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055226c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055226d: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 00552273: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00552274: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x552279u); f_00686d8e();
    /* 00552279: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055227c: jmp 0x552513 */ goto L_00552513;
L_00552281:; BB(0x00552281);
    /* 00552281: push 0x6c7f5c */ { u32 v = 0x6c7f5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00552286: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55228bu); f_00630f40();
    /* 0055228b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055228e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055228f: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 00552295: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552296: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55229bu); f_00686d8e();
    /* 0055229b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055229e: jmp 0x552513 */ goto L_00552513;
L_005522a3:; BB(0x005522a3);
    /* 005522a3: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005522a9: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 005522af: mov dword ptr [ebp - 0x410], edx */ W32((u32)(r_ebp+0xfffffbf0u), r_edx);
    /* 005522b5: cmp dword ptr [ebp - 0x410], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005522bc: je 0x5522d8 */ if (fZ) goto L_005522d8;
L_005522be:; BB(0x005522be);
    /* 005522be: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005522c3: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 005522c9: mov dword ptr [ebp - 0x414], ecx */ W32((u32)(r_ebp+0xfffffbecu), r_ecx);
    /* 005522cf: cmp dword ptr [ebp - 0x414], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffbecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005522d6: jne 0x5522f5 */ if (!fZ) goto L_005522f5;
L_005522d8:; BB(0x005522d8);
    /* 005522d8: push 0x6c7f3c */ { u32 v = 0x6c7f3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005522dd: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5522e2u); f_00630f40();
    /* 005522e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005522e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005522e6: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 005522ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005522ed: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5522f2u); f_00686d8e();
    /* 005522f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005522f5:; BB(0x005522f5);
    /* 005522f5: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005522fa: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 00552300: mov dword ptr [ebp - 0x418], ecx */ W32((u32)(r_ebp+0xfffffbe8u), r_ecx);
    /* 00552306: cmp dword ptr [ebp - 0x418], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055230d: je 0x552345 */ if (fZ) goto L_00552345;
L_0055230f:; BB(0x0055230f);
    /* 0055230f: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00552315: mov eax, dword ptr [edx + 0x4f14] */ r_eax = R32((u32)(r_edx+0x4f14u));
    /* 0055231b: mov dword ptr [ebp - 0x41c], eax */ W32((u32)(r_ebp+0xfffffbe4u), r_eax);
    /* 00552321: cmp dword ptr [ebp - 0x41c], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffbe4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552328: je 0x552345 */ if (fZ) goto L_00552345;
L_0055232a:; BB(0x0055232a);
    /* 0055232a: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00552330: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 00552336: mov dword ptr [ebp - 0x420], edx */ W32((u32)(r_ebp+0xfffffbe0u), r_edx);
    /* 0055233c: cmp dword ptr [ebp - 0x420], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffbe0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552343: jne 0x552362 */ if (!fZ) goto L_00552362;
L_00552345:; BB(0x00552345);
    /* 00552345: push 0x6c7f18 */ { u32 v = 0x6c7f18u; r_esp -= 4; W32(r_esp, v); }
    /* 0055234a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55234fu); f_00630f40();
    /* 0055234f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552352: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552353: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 00552359: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055235a: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55235fu); f_00686d8e();
    /* 0055235f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00552362:; BB(0x00552362);
    /* 00552362: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00552368: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 0055236e: mov dword ptr [ebp - 0x424], edx */ W32((u32)(r_ebp+0xfffffbdcu), r_edx);
    /* 00552374: cmp dword ptr [ebp - 0x424], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffbdcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055237b: jne 0x55239a */ if (!fZ) goto L_0055239a;
L_0055237d:; BB(0x0055237d);
    /* 0055237d: push 0x6c7ef4 */ { u32 v = 0x6c7ef4u; r_esp -= 4; W32(r_esp, v); }
    /* 00552382: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x552387u); f_00630f40();
    /* 00552387: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055238a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055238b: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 00552391: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552392: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x552397u); f_00686d8e();
    /* 00552397: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0055239a:; BB(0x0055239a);
    /* 0055239a: jmp 0x552513 */ goto L_00552513;
L_0055239f:; BB(0x0055239f);
    /* 0055239f: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005523a5: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 005523ab: mov dword ptr [ebp - 0x428], edx */ W32((u32)(r_ebp+0xfffffbd8u), r_edx);
    /* 005523b1: cmp dword ptr [ebp - 0x428], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffbd8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005523b8: jne 0x5523d7 */ if (!fZ) goto L_005523d7;
L_005523ba:; BB(0x005523ba);
    /* 005523ba: push 0x6c7ecc */ { u32 v = 0x6c7eccu; r_esp -= 4; W32(r_esp, v); }
    /* 005523bf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5523c4u); f_00630f40();
    /* 005523c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005523c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005523c8: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 005523ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005523cf: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5523d4u); f_00686d8e();
    /* 005523d4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005523d7:; BB(0x005523d7);
    /* 005523d7: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005523dd: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 005523e3: mov dword ptr [ebp - 0x42c], edx */ W32((u32)(r_ebp+0xfffffbd4u), r_edx);
    /* 005523e9: cmp dword ptr [ebp - 0x42c], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffbd4u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005523f0: jne 0x55240f */ if (!fZ) goto L_0055240f;
L_005523f2:; BB(0x005523f2);
    /* 005523f2: push 0x6c7ea4 */ { u32 v = 0x6c7ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 005523f7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5523fcu); f_00630f40();
    /* 005523fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005523ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552400: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 00552406: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552407: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55240cu); f_00686d8e();
    /* 0055240c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0055240f:; BB(0x0055240f);
    /* 0055240f: jmp 0x552513 */ goto L_00552513;
L_00552414:; BB(0x00552414);
    /* 00552414: push 0x6c7e8c */ { u32 v = 0x6c7e8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00552419: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55241eu); f_00630f40();
    /* 0055241e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552421: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552422: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 00552428: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00552429: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x55242eu); f_00686d8e();
    /* 0055242e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552431: jmp 0x552513 */ goto L_00552513;
L_00552436:; BB(0x00552436);
    /* 00552436: push 0x6c7e74 */ { u32 v = 0x6c7e74u; r_esp -= 4; W32(r_esp, v); }
    /* 0055243b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x552440u); f_00630f40();
    /* 00552440: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552443: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552444: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055244a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055244b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x552450u); f_00686d8e();
    /* 00552450: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552453: jmp 0x552513 */ goto L_00552513;
L_00552458:; BB(0x00552458);
    /* 00552458: push 0x6c7e54 */ { u32 v = 0x6c7e54u; r_esp -= 4; W32(r_esp, v); }
    /* 0055245d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x552462u); f_00630f40();
    /* 00552462: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552465: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552466: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0055246c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055246d: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x552472u); f_00686d8e();
    /* 00552472: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552475: jmp 0x552513 */ goto L_00552513;
L_0055247a:; BB(0x0055247a);
    /* 0055247a: push 0x6c7e34 */ { u32 v = 0x6c7e34u; r_esp -= 4; W32(r_esp, v); }
    /* 0055247f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x552484u); f_00630f40();
    /* 00552484: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552487: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552488: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055248e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055248f: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x552494u); f_00686d8e();
    /* 00552494: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552497: jmp 0x552513 */ goto L_00552513;
L_00552499:; BB(0x00552499);
    /* 00552499: push 0x6c7e18 */ { u32 v = 0x6c7e18u; r_esp -= 4; W32(r_esp, v); }
    /* 0055249e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5524a3u); f_00630f40();
    /* 005524a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005524a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005524a7: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 005524ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005524ae: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5524b3u); f_00686d8e();
    /* 005524b3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005524b6: jmp 0x552513 */ goto L_00552513;
L_005524b8:; BB(0x005524b8);
    /* 005524b8: push 0x6c7dfc */ { u32 v = 0x6c7dfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005524bd: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5524c2u); f_00630f40();
    /* 005524c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005524c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005524c6: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 005524cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005524cd: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5524d2u); f_00686d8e();
    /* 005524d2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005524d5: jmp 0x552513 */ goto L_00552513;
L_005524d7:; BB(0x005524d7);
    /* 005524d7: push 0x6c7de0 */ { u32 v = 0x6c7de0u; r_esp -= 4; W32(r_esp, v); }
    /* 005524dc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5524e1u); f_00630f40();
    /* 005524e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005524e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005524e5: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 005524eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005524ec: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5524f1u); f_00686d8e();
    /* 005524f1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005524f4: jmp 0x552513 */ goto L_00552513;
L_005524f6:; BB(0x005524f6);
    /* 005524f6: push 0x6c7dc4 */ { u32 v = 0x6c7dc4u; r_esp -= 4; W32(r_esp, v); }
    /* 005524fb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x552500u); f_00630f40();
    /* 00552500: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552503: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552504: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0055250a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055250b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x552510u); f_00686d8e();
    /* 00552510: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00552513:; BB(0x00552513);
    /* 00552513: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 00552519: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055251a: push 0x6b678c */ { u32 v = 0x6b678cu; r_esp -= 4; W32(r_esp, v); }
    /* 0055251f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x552524u); f_00630f40();
    /* 00552524: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552527: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552528: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055252a: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00552530: call 0x57be80 */ r_esp -= 4; W32(r_esp, 0x552535u); f_0057be80();
    /* 00552535: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00552538: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055253a: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x55253fu); f_00686d72();
    /* 0055253f: mov esp, ebp */ r_esp = r_ebp;
    /* 00552541: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00552542: ret  */ FN_RET(0x00551c70); r_esp += 4; return;
}

