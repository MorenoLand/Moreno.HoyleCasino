#include "protos.h"

void f_005acb70(void) /* RoyalMatchSayHumanLineScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005acb70);
    /* 005acb70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005acb71: mov ebp, esp */ r_ebp = r_esp;
    /* 005acb73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005acb74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005acb77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005acb79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005acb7c: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x5acb81u); f_005fc0d0();
    /* 005acb81: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005acb84: mov dword ptr [eax], 0x6cfe5c */ W32((u32)(r_eax), 0x6cfe5cu);
    /* 005acb8a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005acb8d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005acb90: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 005acb93: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005acb96: mov esp, ebp */ r_esp = r_ebp;
    /* 005acb98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005acb99: ret 4 */ FN_RET(0x005acb70); r_esp += 8; return;
}

void f_005acba0(void) /* RoyalMatchSayHumanLineScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005acba0);
    /* 005acba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005acba1: mov ebp, esp */ r_ebp = r_esp;
    /* 005acba3: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005acba6: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005acba9: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005acbaf: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5acbb4u); f_005b4f00();
    /* 005acbb4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005acbb7: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005acbba: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x5acbbfu); f_005fc360();
    /* 005acbbf: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005acbc2: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005acbc6: je 0x5acbd7 */ if (fZ) goto L_005acbd7;
L_005acbc8:; BB(0x005acbc8);
    /* 005acbc8: cmp dword ptr [ebp - 0x3c], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005acbcc: je 0x5acd05 */ if (fZ) goto L_005acd05;
L_005acbd2:; BB(0x005acbd2);
    /* 005acbd2: jmp 0x5acd88 */ goto L_005acd88;
L_005acbd7:; BB(0x005acbd7);
    /* 005acbd7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005acbd9: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005acbdc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005acbde: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005acbe1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005acbe4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5acbe6u); call_ind(t); }
    /* 005acbe6: mov dword ptr [ebp - 0x24], 0xffffffff */ W32((u32)(r_ebp+0xffffffdcu), 0xffffffffu);
    /* 005acbed: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005acbf1: je 0x5accd2 */ if (fZ) goto L_005accd2;
L_005acbf7:; BB(0x005acbf7);
    /* 005acbf7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005acbfa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005acbfb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5acc00u); f_005dcb00();
    /* 005acc00: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005acc03: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005acc06: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005acc09: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5acc0eu); f_0063aac0();
    /* 005acc0e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005acc10: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005acc13: cmp dword ptr [ebp - 0x2c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005acc17: je 0x5acc35 */ if (fZ) goto L_005acc35;
L_005acc19:; BB(0x005acc19);
    /* 005acc19: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005acc1c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5acc21u); f_0063aac0();
    /* 005acc21: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005acc23: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005acc26: cmp dword ptr [ebp - 0x30], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005acc2a: je 0x5acc35 */ if (fZ) goto L_005acc35;
L_005acc2c:; BB(0x005acc2c);
    /* 005acc2c: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005acc33: jmp 0x5acc3c */ goto L_005acc3c;
L_005acc35:; BB(0x005acc35);
    /* 005acc35: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
L_005acc3c:; BB(0x005acc3c);
    /* 005acc3c: movzx ecx, byte ptr [ebp - 0x40] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffc0u));
    /* 005acc40: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005acc42: je 0x5accd2 */ if (fZ) goto L_005accd2;
L_005acc48:; BB(0x005acc48);
    /* 005acc48: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005acc4b: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005acc4e: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 005acc55: fldz  */ FPUSH(0.0);
    /* 005acc57: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 005acc5a: fld1  */ FPUSH(1.0);
    /* 005acc5c: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005acc5f: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005acc62: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005acc65: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005acc68: cmp dword ptr [ebp - 0x44], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005acc6c: ja 0x5accb7 */ if ((!fC&&!fZ)) goto L_005accb7;
L_005acc6e:; BB(0x005acc6e);
    /* 005acc6e: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005acc71: jmp dword ptr [edx*4 + 0x5acda8] */ { u32 t = R32((u32)(r_edx*4+0x5acda8u)); switch (t) { case 0x5acc78u: goto L_005acc78; case 0x5acc81u: goto L_005acc81; case 0x5acc8au: goto L_005acc8a; case 0x5acc93u: goto L_005acc93; case 0x5acc9cu: goto L_005acc9c; case 0x5acca5u: goto L_005acca5; case 0x5accaeu: goto L_005accae; default: UNSUP(0x005acc71, "jump table entry is not a known target"); } }
L_005acc78:; BB(0x005acc78);
    /* 005acc78: mov dword ptr [ebp - 0x24], 0x7d5 */ W32((u32)(r_ebp+0xffffffdcu), 0x7d5u);
    /* 005acc7f: jmp 0x5accd2 */ goto L_005accd2;
L_005acc81:; BB(0x005acc81);
    /* 005acc81: mov dword ptr [ebp - 0x24], 0x7d0 */ W32((u32)(r_ebp+0xffffffdcu), 0x7d0u);
    /* 005acc88: jmp 0x5accd2 */ goto L_005accd2;
L_005acc8a:; BB(0x005acc8a);
    /* 005acc8a: mov dword ptr [ebp - 0x24], 0x7d2 */ W32((u32)(r_ebp+0xffffffdcu), 0x7d2u);
    /* 005acc91: jmp 0x5accd2 */ goto L_005accd2;
L_005acc93:; BB(0x005acc93);
    /* 005acc93: mov dword ptr [ebp - 0x24], 0x7d4 */ W32((u32)(r_ebp+0xffffffdcu), 0x7d4u);
    /* 005acc9a: jmp 0x5accd2 */ goto L_005accd2;
L_005acc9c:; BB(0x005acc9c);
    /* 005acc9c: mov dword ptr [ebp - 0x24], 0x830 */ W32((u32)(r_ebp+0xffffffdcu), 0x830u);
    /* 005acca3: jmp 0x5accd2 */ goto L_005accd2;
L_005acca5:; BB(0x005acca5);
    /* 005acca5: mov dword ptr [ebp - 0x24], 0x7d8 */ W32((u32)(r_ebp+0xffffffdcu), 0x7d8u);
    /* 005accac: jmp 0x5accd2 */ goto L_005accd2;
L_005accae:; BB(0x005accae);
    /* 005accae: mov dword ptr [ebp - 0x24], 0x82f */ W32((u32)(r_ebp+0xffffffdcu), 0x82fu);
    /* 005accb5: jmp 0x5accd2 */ goto L_005accd2;
L_005accb7:; BB(0x005accb7);
    /* 005accb7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005accb9: jne 0x5accd2 */ if (!fZ) goto L_005accd2;
L_005accbb:; BB(0x005accbb);
    /* 005accbb: push 0x766 */ { u32 v = 0x766u; r_esp -= 4; W32(r_esp, v); }
    /* 005accc0: push 0x6cf934 */ { u32 v = 0x6cf934u; r_esp -= 4; W32(r_esp, v); }
    /* 005accc5: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005accca: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5acccfu); f_005e9f20();
    /* 005acccf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005accd2:; BB(0x005accd2);
    /* 005accd2: cmp dword ptr [ebp - 0x24], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005accd6: je 0x5accf1 */ if (fZ) goto L_005accf1;
L_005accd8:; BB(0x005accd8);
    /* 005accd8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005accda: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005accdc: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005accdf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005acce0: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 005acce3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005acce4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005accea: call 0x639390 */ r_esp -= 4; W32(r_esp, 0x5accefu); f_00639390();
    /* 005accef: jmp 0x5acd00 */ goto L_005acd00;
L_005accf1:; BB(0x005accf1);
    /* 005accf1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005accf3: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005accf6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005accf8: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005accfb: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005accfe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5acd00u); call_ind(t); }
L_005acd00:; BB(0x005acd00);
    /* 005acd00: jmp 0x5acda3 */ goto L_005acda3;
L_005acd05:; BB(0x005acd05);
    /* 005acd05: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005acd07: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005acd0d: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005acd10: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x5acd15u); f_005fc420();
    /* 005acd15: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005acd18: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005acd1b: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005acd1e: cmp dword ptr [ebp - 0x48], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005acd22: jl 0x5acd48 */ if ((fS!=fO)) goto L_005acd48;
L_005acd24:; BB(0x005acd24);
    /* 005acd24: cmp dword ptr [ebp - 0x48], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005acd28: jle 0x5acd2c */ if ((fZ||fS!=fO)) goto L_005acd2c;
L_005acd2a:; BB(0x005acd2a);
    /* 005acd2a: jmp 0x5acd48 */ goto L_005acd48;
L_005acd2c:; BB(0x005acd2c);
    /* 005acd2c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005acd2f: cmp dword ptr [ecx + 0x20], 5 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005acd33: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005acd36: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005acd37: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005acd3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005acd3b: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005acd41: call 0x5b73e0 */ r_esp -= 4; W32(r_esp, 0x5acd46u); f_005b73e0();
    /* 005acd46: jmp 0x5acd69 */ goto L_005acd69;
L_005acd48:; BB(0x005acd48);
    /* 005acd48: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005acd4a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005acd4d: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005acd50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005acd51: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005acd54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005acd55: mov ecx, dword ptr [0x7935fc] */ r_ecx = R32((u32)(0x7935fcu));
    /* 005acd5b: call 0x5ad1f0 */ r_esp -= 4; W32(r_esp, 0x5acd60u); f_005ad1f0();
    /* 005acd60: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005acd63: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005acd65: jne 0x5acd69 */ if (!fZ) goto L_005acd69;
L_005acd67:; BB(0x005acd67);
    /* 005acd67: jmp 0x5acda3 */ goto L_005acda3;
L_005acd69:; BB(0x005acd69);
    /* 005acd69: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005acd6b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005acd6d: mov edx, dword ptr [0x793600] */ r_edx = R32((u32)(0x793600u));
    /* 005acd73: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005acd76: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005acd7c: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005acd7f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005acd81: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005acd84: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5acd86u); call_ind(t); }
    /* 005acd86: jmp 0x5acda3 */ goto L_005acda3;
L_005acd88:; BB(0x005acd88);
    /* 005acd88: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005acd8a: jne 0x5acda3 */ if (!fZ) goto L_005acda3;
L_005acd8c:; BB(0x005acd8c);
    /* 005acd8c: push 0x786 */ { u32 v = 0x786u; r_esp -= 4; W32(r_esp, v); }
    /* 005acd91: push 0x6cf934 */ { u32 v = 0x6cf934u; r_esp -= 4; W32(r_esp, v); }
    /* 005acd96: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005acd9b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5acda0u); f_005e9f20();
    /* 005acda0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005acda3:; BB(0x005acda3);
    /* 005acda3: mov esp, ebp */ r_esp = r_ebp;
    /* 005acda5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005acda6: ret  */ FN_RET(0x005acba0); r_esp += 4; return;
}

