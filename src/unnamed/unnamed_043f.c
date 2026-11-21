#include "protos.h"

void f_0043f1b0(void) /* sub_43F1B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043f1b0);
    /* 0043f1b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043f1b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043f1b3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043f1b6: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0043f1bd: jmp 0x43f1c8 */ goto L_0043f1c8;
L_0043f1bf:; BB(0x0043f1bf);
    /* 0043f1bf: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043f1c2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043f1c5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0043f1c8:; BB(0x0043f1c8);
    /* 0043f1c8: cmp dword ptr [ebp - 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043f1cc: jge 0x43f1de */ if ((fS==fO)) goto L_0043f1de;
L_0043f1ce:; BB(0x0043f1ce);
    /* 0043f1ce: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043f1d1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043f1d4: mov dword ptr [edx + ecx*4 + 0x20], 0 */ W32((u32)(r_edx+r_ecx*4+0x20u), 0x0u);
    /* 0043f1dc: jmp 0x43f1bf */ goto L_0043f1bf;
L_0043f1de:; BB(0x0043f1de);
    /* 0043f1de: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043f1e5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043f1e8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0043f1eb: lea ecx, [ebp + 0x10] */ r_ecx = (u32)(r_ebp+0x10u);
    /* 0043f1ee: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0043f1f1:; BB(0x0043f1f1);
    /* 0043f1f1: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043f1f5: je 0x43f227 */ if (fZ) goto L_0043f227;
L_0043f1f7:; BB(0x0043f1f7);
    /* 0043f1f7: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043f1fb: jge 0x43f227 */ if ((fS==fO)) goto L_0043f227;
L_0043f1fd:; BB(0x0043f1fd);
    /* 0043f1fd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f200: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043f203: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043f206: mov dword ptr [eax + edx*4 + 0x20], ecx */ W32((u32)(r_eax+r_edx*4+0x20u), r_ecx);
    /* 0043f20a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043f20d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043f210: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0043f213: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043f216: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043f219: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0043f21c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043f21f: mov edx, dword ptr [ecx - 4] */ r_edx = R32((u32)(r_ecx+0xfffffffcu));
    /* 0043f222: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0043f225: jmp 0x43f1f1 */ goto L_0043f1f1;
L_0043f227:; BB(0x0043f227);
    /* 0043f227: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0043f22e: mov esp, ebp */ r_esp = r_ebp;
    /* 0043f230: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043f231: ret  */ FN_RET(0x0043f1b0); r_esp += 4; return;
}

void f_0043fa00(void) /* sub_43FA00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043fa00);
    /* 0043fa00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043fa01: mov ebp, esp */ r_ebp = r_esp;
    /* 0043fa03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043fa05: push 0x69e8d4 */ { u32 v = 0x69e8d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fa0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0043fa10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043fa11: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043fa14: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0043fa19: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043fa1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043fa1c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0043fa1f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0043fa25: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0043fa28: push 0x6b8304 */ { u32 v = 0x6b8304u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fa2d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x43fa32u); f_00630f40();
    /* 0043fa32: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043fa35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043fa36: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0043fa3c: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x43fa41u); f_005f38b0();
    /* 0043fa41: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043fa44: cmp dword ptr [eax + 0x18], 0 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043fa48: jne 0x43fa91 */ if (!fZ) goto L_0043fa91;
L_0043fa4a:; BB(0x0043fa4a);
    /* 0043fa4a: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fa4f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x43fa54u); f_00686d82();
    /* 0043fa54: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043fa57: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0043fa5a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043fa61: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043fa65: je 0x43fa74 */ if (fZ) goto L_0043fa74;
L_0043fa67:; BB(0x0043fa67);
    /* 0043fa67: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043fa6a: call 0x43d170 */ r_esp -= 4; W32(r_esp, 0x43fa6fu); f_0043d170();
    /* 0043fa6f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0043fa72: jmp 0x43fa7b */ goto L_0043fa7b;
L_0043fa74:; BB(0x0043fa74);
    /* 0043fa74: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0043fa7b:; BB(0x0043fa7b);
    /* 0043fa7b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043fa7e: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0043fa81: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043fa88: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043fa8b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043fa8e: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
L_0043fa91:; BB(0x0043fa91);
    /* 0043fa91: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043fa94: call 0x440020 */ r_esp -= 4; W32(r_esp, 0x43fa99u); f_00440020();
    /* 0043fa99: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043fa9c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043faa3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043faa4: mov esp, ebp */ r_esp = r_ebp;
    /* 0043faa6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043faa7: ret  */ FN_RET(0x0043fa00); r_esp += 4; return;
}

void f_0043fab0(void) /* sub_43FAB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043fab0);
    /* 0043fab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043fab1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043fab3: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043fab6: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 0043fab9: mov dword ptr [ebp - 0x50], 0x1d4c4 */ W32((u32)(r_ebp+0xffffffb0u), 0x1d4c4u);
    /* 0043fac0: mov dword ptr [ebp - 0x4c], 0x1d4c5 */ W32((u32)(r_ebp+0xffffffb4u), 0x1d4c5u);
    /* 0043fac7: mov dword ptr [ebp - 0x48], 0x1d4c6 */ W32((u32)(r_ebp+0xffffffb8u), 0x1d4c6u);
    /* 0043face: mov dword ptr [ebp - 0x44], 0x1d4d3 */ W32((u32)(r_ebp+0xffffffbcu), 0x1d4d3u);
    /* 0043fad5: mov dword ptr [ebp - 0x40], 0x1d4d0 */ W32((u32)(r_ebp+0xffffffc0u), 0x1d4d0u);
    /* 0043fadc: mov dword ptr [ebp - 0x3c], 0x1d4d1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1d4d1u);
    /* 0043fae3: mov dword ptr [ebp - 0x38], 0x1d4d2 */ W32((u32)(r_ebp+0xffffffc8u), 0x1d4d2u);
    /* 0043faea: mov dword ptr [ebp - 0x34], 0x1d4d4 */ W32((u32)(r_ebp+0xffffffccu), 0x1d4d4u);
    /* 0043faf1: mov dword ptr [ebp - 0x30], 0x1d4d9 */ W32((u32)(r_ebp+0xffffffd0u), 0x1d4d9u);
    /* 0043faf8: mov dword ptr [ebp - 0x2c], 0x1d4da */ W32((u32)(r_ebp+0xffffffd4u), 0x1d4dau);
    /* 0043faff: mov dword ptr [ebp - 0x28], 0x1d4db */ W32((u32)(r_ebp+0xffffffd8u), 0x1d4dbu);
    /* 0043fb06: mov dword ptr [ebp - 0x24], 0x1d4e0 */ W32((u32)(r_ebp+0xffffffdcu), 0x1d4e0u);
    /* 0043fb0d: mov dword ptr [ebp - 0x20], 0x1d4e1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1d4e1u);
    /* 0043fb14: mov dword ptr [ebp - 0x1c], 0x1d4e2 */ W32((u32)(r_ebp+0xffffffe4u), 0x1d4e2u);
    /* 0043fb1b: mov dword ptr [ebp - 0x18], 0x1d4e3 */ W32((u32)(r_ebp+0xffffffe8u), 0x1d4e3u);
    /* 0043fb22: mov dword ptr [ebp - 0x14], 0x1d4e4 */ W32((u32)(r_ebp+0xffffffecu), 0x1d4e4u);
    /* 0043fb29: mov dword ptr [ebp - 0x10], 0x1d4e5 */ W32((u32)(r_ebp+0xfffffff0u), 0x1d4e5u);
    /* 0043fb30: mov dword ptr [ebp - 0xc], 0x1d4e6 */ W32((u32)(r_ebp+0xfffffff4u), 0x1d4e6u);
    /* 0043fb37: mov dword ptr [ebp - 8], 0x1d4e7 */ W32((u32)(r_ebp+0xfffffff8u), 0x1d4e7u);
    /* 0043fb3e: mov dword ptr [ebp - 4], 0x1d4e8 */ W32((u32)(r_ebp+0xfffffffcu), 0x1d4e8u);
    /* 0043fb45: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043fb48: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0043fb4b: lea edx, [ecx + eax*4] */ r_edx = (u32)(r_ecx+r_eax*4);
    /* 0043fb4e: mov eax, dword ptr [ebp + edx*4 - 0x50] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffb0u));
    /* 0043fb52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043fb53: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043fb56: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0043fb59: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0043fb5d: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x43fb62u); f_005eaf00();
    /* 0043fb62: mov esp, ebp */ r_esp = r_ebp;
    /* 0043fb64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043fb65: ret 8 */ FN_RET(0x0043fab0); r_esp += 12; return;
}

void f_0043fb70(void) /* sub_43FB70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043fb70);
    /* 0043fb70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043fb71: mov ebp, esp */ r_ebp = r_esp;
    /* 0043fb73: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043fb76: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0043fb79: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0043fb7c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0043fb7f: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0043fb83: ja 0x43fc68 */ if ((!fC&&!fZ)) goto L_0043fc68;
L_0043fb89:; BB(0x0043fb89);
    /* 0043fb89: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043fb8c: jmp dword ptr [ecx*4 + 0x43fc70] */ { u32 t = R32((u32)(r_ecx*4+0x43fc70u)); switch (t) { case 0x43fb93u: goto L_0043fb93; case 0x43fbbau: goto L_0043fbba; case 0x43fbf4u: goto L_0043fbf4; case 0x43fc2eu: goto L_0043fc2e; default: UNSUP(0x0043fb8c, "jump table entry is not a known target"); } }
L_0043fb93:; BB(0x0043fb93);
    /* 0043fb93: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fb95: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043fb98: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043fb9b: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0043fb9f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043fba2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043fba5: mov edx, dword ptr [eax + edx*4 + 4] */ r_edx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0043fba9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0043fbab: mov ecx, edx */ r_ecx = r_edx;
    /* 0043fbad: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0043fbb3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43fbb5u); call_ind(t); }
    /* 0043fbb5: jmp 0x43fc68 */ goto L_0043fc68;
L_0043fbba:; BB(0x0043fbba);
    /* 0043fbba: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043fbbd: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043fbc0: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 0043fbc6: mov edx, dword ptr [ecx + eax + 0x48] */ r_edx = R32((u32)(r_ecx+r_eax+0x48u));
    /* 0043fbca: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0043fbcd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043fbd0: sub eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043fbd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043fbd4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043fbd7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043fbda: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0043fbde: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043fbe1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043fbe4: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0043fbe8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0043fbea: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0043fbf0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43fbf2u); call_ind(t); }
    /* 0043fbf2: jmp 0x43fc68 */ goto L_0043fc68;
L_0043fbf4:; BB(0x0043fbf4);
    /* 0043fbf4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043fbf7: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043fbfa: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 0043fc00: mov edx, dword ptr [ecx + eax + 0x48] */ r_edx = R32((u32)(r_ecx+r_eax+0x48u));
    /* 0043fc04: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0043fc07: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043fc0a: sub eax, 0x69 */ {  u32 a = r_eax; u32 b = 0x69u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043fc0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043fc0e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043fc11: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043fc14: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0043fc18: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043fc1b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043fc1e: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0043fc22: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0043fc24: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0043fc2a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43fc2cu); call_ind(t); }
    /* 0043fc2c: jmp 0x43fc68 */ goto L_0043fc68;
L_0043fc2e:; BB(0x0043fc2e);
    /* 0043fc2e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043fc31: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043fc34: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 0043fc3a: mov edx, dword ptr [ecx + eax + 0x48] */ r_edx = R32((u32)(r_ecx+r_eax+0x48u));
    /* 0043fc3e: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0043fc41: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043fc44: sub eax, 0x87 */ {  u32 a = r_eax; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043fc49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043fc4a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043fc4d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043fc50: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0043fc54: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043fc57: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043fc5a: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0043fc5e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0043fc60: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0043fc66: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43fc68u); call_ind(t); }
L_0043fc68:; BB(0x0043fc68);
    /* 0043fc68: mov esp, ebp */ r_esp = r_ebp;
    /* 0043fc6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043fc6b: ret 8 */ FN_RET(0x0043fb70); r_esp += 12; return;
}

void f_0043fc80(void) /* sub_43FC80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043fc80);
    /* 0043fc80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043fc81: mov ebp, esp */ r_ebp = r_esp;
    /* 0043fc83: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043fc86: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0043fc8b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043fc8d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0043fc90: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0043fc93: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fc95: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043fc98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043fc99: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 0043fc9f: call 0x445a00 */ r_esp -= 4; W32(r_esp, 0x43fca4u); f_00445a00();
    /* 0043fca4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043fca5: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x43fcaau); f_0064c8a0();
    /* 0043fcaa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043fcad: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0043fcb0: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0043fcb3: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0043fcb6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0043fcb9: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043fcbc: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0043fcbf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043fcc2: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043fcc5: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 0043fccb: mov edx, dword ptr [ecx + eax + 0x44] */ r_edx = R32((u32)(r_ecx+r_eax+0x44u));
    /* 0043fccf: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0043fcd2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043fcd5: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043fcd8: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 0043fcde: lea edx, [ecx + eax + 4] */ r_edx = (u32)(r_ecx+r_eax+0x4u);
    /* 0043fce2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043fce5: mov ecx, dword ptr [edx + eax*8 + 0x4c] */ r_ecx = R32((u32)(r_edx+r_eax*8+0x4cu));
    /* 0043fce9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0043fcec: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043fcef: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043fcf2: mov eax, dword ptr [0x7906f0] */ r_eax = R32((u32)(0x7906f0u));
    /* 0043fcf7: lea ecx, [eax + edx + 4] */ r_ecx = (u32)(r_eax+r_edx+0x4u);
    /* 0043fcfb: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043fcfe: mov eax, dword ptr [ecx + edx*8 + 0x50] */ r_eax = R32((u32)(r_ecx+r_edx*8+0x50u));
    /* 0043fd02: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0043fd05: cmp dword ptr [ebp - 0x20], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043fd09: je 0x43fe0a */ if (fZ) goto L_0043fe0a;
L_0043fd0f:; BB(0x0043fd0f);
    /* 0043fd0f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043fd12: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043fd13: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043fd16: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043fd17: push 0x6b8314 */ { u32 v = 0x6b8314u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fd1c: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0043fd1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043fd20: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x43fd26u); call_ind(t); }
    /* 0043fd26: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043fd29: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0043fd2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043fd2d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043fd30: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043fd33: mov ecx, dword ptr [eax + edx*4 + 0x70] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x70u));
    /* 0043fd37: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043fd3a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043fd3d: mov edx, dword ptr [eax + edx*4 + 0x70] */ r_edx = R32((u32)(r_eax+r_edx*4+0x70u));
    /* 0043fd41: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0043fd43: mov ecx, edx */ r_ecx = r_edx;
    /* 0043fd45: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0043fd4b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43fd4du); call_ind(t); }
    /* 0043fd4d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043fd50: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043fd53: mov edx, dword ptr [ecx + eax*4 + 0x70] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x70u));
    /* 0043fd57: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043fd5a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043fd5d: mov ecx, dword ptr [ecx + eax*4 + 0x70] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x70u));
    /* 0043fd61: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0043fd63: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0043fd66: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43fd68u); call_ind(t); }
    /* 0043fd68: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043fd6b: imul ecx, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043fd6f: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0043fd72: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043fd75: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0043fd76: idiv dword ptr [ebp - 0x24] */ { i32 d = (i32)R32((u32)(r_ebp+0xffffffdcu)); if (!d) UNSUP(0x0043fd76, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0043fd76, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0043fd79: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0043fd7c: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043fd80: je 0x43fde7 */ if (fZ) goto L_0043fde7;
L_0043fd82:; BB(0x0043fd82);
    /* 0043fd82: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fd84: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fd86: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fd88: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 0043fd8b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043fd8c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043fd8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043fd90: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043fd93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043fd94: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x43fd99u); f_0064c8d0();
    /* 0043fd99: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043fd9c: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 0043fd9f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043fda0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043fda3: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043fda6: mov edx, dword ptr [ecx + eax*4 + 0x84] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x84u));
    /* 0043fdad: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043fdb0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043fdb3: mov ecx, dword ptr [ecx + eax*4 + 0x84] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x84u));
    /* 0043fdba: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0043fdbc: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0043fdc2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43fdc4u); call_ind(t); }
    /* 0043fdc4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043fdc7: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043fdca: mov eax, dword ptr [edx + ecx*4 + 0x84] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x84u));
    /* 0043fdd1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043fdd4: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043fdd7: mov ecx, dword ptr [edx + ecx*4 + 0x84] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x84u));
    /* 0043fdde: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0043fde0: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0043fde3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43fde5u); call_ind(t); }
    /* 0043fde5: jmp 0x43fe08 */ goto L_0043fe08;
L_0043fde7:; BB(0x0043fde7);
    /* 0043fde7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043fdea: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043fded: mov edx, dword ptr [ecx + eax*4 + 0x84] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x84u));
    /* 0043fdf4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043fdf7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043fdfa: mov ecx, dword ptr [ecx + eax*4 + 0x84] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x84u));
    /* 0043fe01: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0043fe03: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0043fe06: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43fe08u); call_ind(t); }
L_0043fe08:; BB(0x0043fe08);
    /* 0043fe08: jmp 0x43fe46 */ goto L_0043fe46;
L_0043fe0a:; BB(0x0043fe0a);
    /* 0043fe0a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043fe0d: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043fe10: mov eax, dword ptr [edx + ecx*4 + 0x70] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x70u));
    /* 0043fe14: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0043fe17: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043fe1a: mov ecx, dword ptr [edx + ecx*4 + 0x70] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x70u));
    /* 0043fe1e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0043fe20: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0043fe23: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43fe25u); call_ind(t); }
    /* 0043fe25: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043fe28: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043fe2b: mov edx, dword ptr [ecx + eax*4 + 0x84] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x84u));
    /* 0043fe32: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043fe35: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043fe38: mov ecx, dword ptr [ecx + eax*4 + 0x84] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x84u));
    /* 0043fe3f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0043fe41: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0043fe44: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43fe46u); call_ind(t); }
L_0043fe46:; BB(0x0043fe46);
    /* 0043fe46: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043fe49: call 0x43fe60 */ r_esp -= 4; W32(r_esp, 0x43fe4eu); f_0043fe60();
    /* 0043fe4e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043fe51: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043fe53: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x43fe58u); f_00686d72();
    /* 0043fe58: mov esp, ebp */ r_esp = r_ebp;
    /* 0043fe5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043fe5b: ret 4 */ FN_RET(0x0043fc80); r_esp += 8; return;
}

void f_0043fe60(void) /* sub_43FE60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043fe60);
    /* 0043fe60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043fe61: mov ebp, esp */ r_ebp = r_esp;
    /* 0043fe63: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043fe66: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0043fe6b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043fe6d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0043fe70: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0043fe73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fe75: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043fe77: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x43fe7cu); f_0064c8a0();
    /* 0043fe7c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043fe7f: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0043fe82: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0043fe85: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0043fe88: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0043fe8b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043fe8e: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0043fe91: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043fe98: jmp 0x43fea3 */ goto L_0043fea3;
L_0043fe9a:; BB(0x0043fe9a);
    /* 0043fe9a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043fe9d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043fea0: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0043fea3:; BB(0x0043fea3);
    /* 0043fea3: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043fea7: jge 0x43ff95 */ if ((fS==fO)) goto L_0043ff95;
L_0043fead:; BB(0x0043fead);
    /* 0043fead: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043feb0: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043feb3: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 0043feb9: mov edx, dword ptr [ecx + eax + 0x44] */ r_edx = R32((u32)(r_ecx+r_eax+0x44u));
    /* 0043febd: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0043fec0: cmp dword ptr [ebp - 0x38], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043fec4: je 0x43ff73 */ if (fZ) goto L_0043ff73;
L_0043feca:; BB(0x0043feca);
    /* 0043feca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043fecd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043fece: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 0043fed4: call 0x445a00 */ r_esp -= 4; W32(r_esp, 0x43fed9u); f_00445a00();
    /* 0043fed9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043fedb: je 0x43ff73 */ if (fZ) goto L_0043ff73;
L_0043fee1:; BB(0x0043fee1);
    /* 0043fee1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043fee4: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0043fee7: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0043feeb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043feee: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0043fef1: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0043fef5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0043fef7: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0043fefa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43fefcu); call_ind(t); }
    /* 0043fefc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043feff: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043ff02: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 0043ff08: mov edx, dword ptr [ecx + eax + 0x44] */ r_edx = R32((u32)(r_ecx+r_eax+0x44u));
    /* 0043ff0c: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0043ff0f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ff12: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043ff15: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 0043ff1b: lea edx, [ecx + eax + 4] */ r_edx = (u32)(r_ecx+r_eax+0x4u);
    /* 0043ff1f: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0043ff22: mov ecx, dword ptr [edx + eax*8 + 0x4c] */ r_ecx = R32((u32)(r_edx+r_eax*8+0x4cu));
    /* 0043ff26: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0043ff29: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ff2c: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043ff2f: mov eax, dword ptr [0x7906f0] */ r_eax = R32((u32)(0x7906f0u));
    /* 0043ff34: mov ecx, dword ptr [eax + edx + 0x44] */ r_ecx = R32((u32)(r_eax+r_edx+0x44u));
    /* 0043ff38: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0043ff3b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ff3e: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043ff41: mov eax, dword ptr [0x7906f0] */ r_eax = R32((u32)(0x7906f0u));
    /* 0043ff46: lea ecx, [eax + edx + 4] */ r_ecx = (u32)(r_eax+r_edx+0x4u);
    /* 0043ff4a: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0043ff4d: mov eax, dword ptr [ecx + edx*8 + 0x50] */ r_eax = R32((u32)(r_ecx+r_edx*8+0x50u));
    /* 0043ff51: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0043ff54: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ff57: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ff58: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 0043ff5e: call 0x445a00 */ r_esp -= 4; W32(r_esp, 0x43ff63u); f_00445a00();
    /* 0043ff63: imul eax, dword ptr [ebp - 0x40] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffc0u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043ff67: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0043ff68: idiv dword ptr [ebp - 0x48] */ { i32 d = (i32)R32((u32)(r_ebp+0xffffffb8u)); if (!d) UNSUP(0x0043ff68, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0043ff68, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0043ff6b: add eax, dword ptr [ebp - 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043ff6e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0043ff71: jmp 0x43ff90 */ goto L_0043ff90;
L_0043ff73:; BB(0x0043ff73);
    /* 0043ff73: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ff76: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0043ff79: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0043ff7d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043ff80: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0043ff83: mov edx, dword ptr [eax + edx*4 + 0x20] */ r_edx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0043ff87: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0043ff89: mov ecx, edx */ r_ecx = r_edx;
    /* 0043ff8b: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0043ff8e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x43ff90u); call_ind(t); }
L_0043ff90:; BB(0x0043ff90);
    /* 0043ff90: jmp 0x43fe9a */ goto L_0043fe9a;
L_0043ff95:; BB(0x0043ff95);
    /* 0043ff95: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ff99: je 0x43fff0 */ if (fZ) goto L_0043fff0;
L_0043ff9b:; BB(0x0043ff9b);
    /* 0043ff9b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ff9d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ff9f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043ffa1: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 0043ffa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ffa5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043ffa8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ffa9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0043ffac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043ffad: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x43ffb2u); f_0064c8d0();
    /* 0043ffb2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043ffb5: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 0043ffb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043ffb9: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0043ffbc: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 0043ffc2: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0043ffc5: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 0043ffcb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0043ffcd: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0043ffd3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43ffd5u); call_ind(t); }
    /* 0043ffd5: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0043ffd8: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 0043ffde: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0043ffe1: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 0043ffe7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0043ffe9: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0043ffec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43ffeeu); call_ind(t); }
    /* 0043ffee: jmp 0x440009 */ goto L_00440009;
L_0043fff0:; BB(0x0043fff0);
    /* 0043fff0: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0043fff3: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 0043fff9: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0043fffc: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00440002: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00440004: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00440007: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x440009u); call_ind(t); }
L_00440009:; BB(0x00440009);
    /* 00440009: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044000c: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044000e: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x440013u); f_00686d72();
    /* 00440013: mov esp, ebp */ r_esp = r_ebp;
    /* 00440015: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00440016: ret  */ FN_RET(0x0043fe60); r_esp += 4; return;
}

