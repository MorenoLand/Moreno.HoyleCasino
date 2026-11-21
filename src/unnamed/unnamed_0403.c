#include "protos.h"

void f_004035b0(void) /* sub_4035B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004035b0);
    /* 004035b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004035b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004035b3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004035b6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004035b9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004035bc: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 004035c2: imul ecx, ecx, 0x338 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x338u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004035c8: mov edx, dword ptr [0x7902f0] */ r_edx = R32((u32)(0x7902f0u));
    /* 004035ce: lea eax, [edx + ecx + 0xbc] */ r_eax = (u32)(r_edx+r_ecx+0xbcu);
    /* 004035d5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004035d8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004035db: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 004035de: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 004035e1: cmp dword ptr [ebp - 4], 0x13 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004035e5: jg 0x4035eb */ if ((!fZ&&fS==fO)) goto L_004035eb;
L_004035e7:; BB(0x004035e7);
    /* 004035e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004035e9: jmp 0x403624 */ goto L_00403624;
L_004035eb:; BB(0x004035eb);
    /* 004035eb: cmp dword ptr [ebp - 4], 0x26 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x26u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004035ef: jg 0x4035f8 */ if ((!fZ&&fS==fO)) goto L_004035f8;
L_004035f1:; BB(0x004035f1);
    /* 004035f1: mov eax, 0x13 */ r_eax = 0x13u;
    /* 004035f6: jmp 0x403624 */ goto L_00403624;
L_004035f8:; BB(0x004035f8);
    /* 004035f8: cmp dword ptr [ebp - 4], 0x39 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004035fc: jg 0x403605 */ if ((!fZ&&fS==fO)) goto L_00403605;
L_004035fe:; BB(0x004035fe);
    /* 004035fe: mov eax, 0x26 */ r_eax = 0x26u;
    /* 00403603: jmp 0x403624 */ goto L_00403624;
L_00403605:; BB(0x00403605);
    /* 00403605: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00403609: jg 0x403612 */ if ((!fZ&&fS==fO)) goto L_00403612;
L_0040360b:; BB(0x0040360b);
    /* 0040360b: mov eax, 0x39 */ r_eax = 0x39u;
    /* 00403610: jmp 0x403624 */ goto L_00403624;
L_00403612:; BB(0x00403612);
    /* 00403612: cmp dword ptr [ebp - 4], 0x5f */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00403616: jg 0x40361f */ if ((!fZ&&fS==fO)) goto L_0040361f;
L_00403618:; BB(0x00403618);
    /* 00403618: mov eax, 0x4c */ r_eax = 0x4cu;
    /* 0040361d: jmp 0x403624 */ goto L_00403624;
L_0040361f:; BB(0x0040361f);
    /* 0040361f: mov eax, 0x5f */ r_eax = 0x5fu;
L_00403624:; BB(0x00403624);
    /* 00403624: mov esp, ebp */ r_esp = r_ebp;
    /* 00403626: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00403627: ret  */ FN_RET(0x004035b0); r_esp += 4; return;
}

void f_00403630(void) /* sub_403630 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00403630);
    /* 00403630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00403631: mov ebp, esp */ r_ebp = r_esp;
    /* 00403633: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00403635: push 0x69d6f1 */ { u32 v = 0x69d6f1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040363a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00403640: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403641: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00403644: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00403649: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040364b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040364c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0040364f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00403655: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00403658: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040365b: cmp dword ptr [eax + 0x1bc], 0 */ {  u32 a = R32((u32)(r_eax+0x1bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00403662: jne 0x4036ae */ if (!fZ) goto L_004036ae;
L_00403664:; BB(0x00403664);
    /* 00403664: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 00403669: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x40366eu); f_00686d82();
    /* 0040366e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403671: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00403674: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040367b: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040367f: je 0x40368e */ if (fZ) goto L_0040368e;
L_00403681:; BB(0x00403681);
    /* 00403681: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00403684: call 0x402ed0 */ r_esp -= 4; W32(r_esp, 0x403689u); f_00402ed0();
    /* 00403689: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0040368c: jmp 0x403695 */ goto L_00403695;
L_0040368e:; BB(0x0040368e);
    /* 0040368e: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00403695:; BB(0x00403695);
    /* 00403695: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00403698: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0040369b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004036a2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004036a5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004036a8: mov dword ptr [edx + 0x1bc], eax */ W32((u32)(r_edx+0x1bcu), r_eax);
L_004036ae:; BB(0x004036ae);
    /* 004036ae: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004036b1: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 004036b7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004036ba: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004036bd: push 0x30d4cf */ { u32 v = 0x30d4cfu; r_esp -= 4; W32(r_esp, v); }
    /* 004036c2: push 0x30d4cc */ { u32 v = 0x30d4ccu; r_esp -= 4; W32(r_esp, v); }
    /* 004036c7: push 0x30d4cb */ { u32 v = 0x30d4cbu; r_esp -= 4; W32(r_esp, v); }
    /* 004036cc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004036cf: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 004036d5: call 0x584ed0 */ r_esp -= 4; W32(r_esp, 0x4036dau); f_00584ed0();
    /* 004036da: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004036dd: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 004036e3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004036e6: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 004036ec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004036ee: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 004036f1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4036f3u); call_ind(t); }
    /* 004036f3: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 004036f5: push 0xc9 */ { u32 v = 0xc9u; r_esp -= 4; W32(r_esp, v); }
    /* 004036fa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004036fd: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 00403703: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00403706: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0040370c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0040370e: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00403711: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403713u); call_ind(t); }
    /* 00403713: push 0x159 */ { u32 v = 0x159u; r_esp -= 4; W32(r_esp, v); }
    /* 00403718: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0040371a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040371d: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 00403723: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00403726: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0040372c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0040372e: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 00403731: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403733u); call_ind(t); }
    /* 00403733: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00403735: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00403738: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0040373e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00403741: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00403747: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00403749: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0040374c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40374eu); call_ind(t); }
    /* 0040374e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00403751: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 00403757: call 0x585010 */ r_esp -= 4; W32(r_esp, 0x40375cu); f_00585010();
    /* 0040375c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040375e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00403761: mov ecx, dword ptr [edx + 0x1bc] */ r_ecx = R32((u32)(r_edx+0x1bcu));
    /* 00403767: call 0x5f62f0 */ r_esp -= 4; W32(r_esp, 0x40376cu); f_005f62f0();
    /* 0040376c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040376f: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00403775: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00403778: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0040377e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00403780: mov ecx, eax */ r_ecx = r_eax;
    /* 00403782: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00403785: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403787u); call_ind(t); }
    /* 00403787: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040378a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00403791: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00403792: mov esp, ebp */ r_esp = r_ebp;
    /* 00403794: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00403795: ret  */ FN_RET(0x00403630); r_esp += 4; return;
}

void f_00403a30(void) /* sub_403A30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00403a30);
    /* 00403a30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00403a31: mov ebp, esp */ r_ebp = r_esp;
    /* 00403a33: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00403a36: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00403a3b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00403a3d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00403a40: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00403a43: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00403a46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403a47: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 00403a4c: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00403a4f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00403a50: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x403a56u); call_ind(t); }
    /* 00403a56: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00403a59: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00403a5c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00403a5d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00403a60: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x403a65u); f_005fb550();
    /* 00403a65: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00403a68: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 00403a6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403a6c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00403a6f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00403a71: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00403a74: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00403a7a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403a7cu); call_ind(t); }
    /* 00403a7c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00403a7d: mov ecx, esp */ r_ecx = r_esp;
    /* 00403a7f: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 00403a86: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00403a89: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 00403a8e: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 00403a91: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00403a93: movzx ecx, byte ptr [ebp + 0x10] */ r_ecx = (u32)R8((u32)(r_ebp+0x10u));
    /* 00403a97: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00403a99: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00403a9b: and ecx, 0x26 */ {  u32 a = r_ecx; u32 b = 0x26u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00403a9e: add ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00403aa1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00403aa2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00403aa5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00403aa6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00403aa9: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x403aaeu); f_005fb550();
    /* 00403aae: mov ecx, eax */ r_ecx = r_eax;
    /* 00403ab0: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x403ab5u); f_005ecd00();
    /* 00403ab5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403ab8: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00403aba: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x403abfu); f_00686d72();
    /* 00403abf: mov esp, ebp */ r_esp = r_ebp;
    /* 00403ac1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00403ac2: ret 0xc */ FN_RET(0x00403a30); r_esp += 16; return;
}

void f_00403ad0(void) /* sub_403AD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00403ad0);
    /* 00403ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00403ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 00403ad3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00403ad6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00403ad9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00403adc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403add: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403ae0: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x403ae5u); f_005fb550();
    /* 00403ae5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00403ae8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00403aeb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00403aec: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00403aef: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00403af1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00403af4: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 00403afa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x403afcu); call_ind(t); }
    /* 00403afc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00403afd: mov eax, esp */ r_eax = r_esp;
    /* 00403aff: mov cx, word ptr [0x75ee1c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 00403b06: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00403b09: mov dl, byte ptr [0x75ee1e] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 00403b0f: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 00403b12: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00403b14: movzx eax, byte ptr [ebp + 0x10] */ r_eax = (u32)R8((u32)(r_ebp+0x10u));
    /* 00403b18: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00403b1a: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00403b1c: and eax, 0x26 */ {  u32 a = r_eax; u32 b = 0x26u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00403b1f: add eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00403b22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403b23: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00403b26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00403b27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403b2a: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x403b2fu); f_005fb550();
    /* 00403b2f: mov ecx, eax */ r_ecx = r_eax;
    /* 00403b31: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x403b36u); f_005ecd00();
    /* 00403b36: mov esp, ebp */ r_esp = r_ebp;
    /* 00403b38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00403b39: ret 0xc */ FN_RET(0x00403ad0); r_esp += 16; return;
}

void f_00403b40(void) /* sub_403B40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00403b40);
    /* 00403b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00403b41: mov ebp, esp */ r_ebp = r_esp;
    /* 00403b43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00403b46: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00403b49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00403b4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403b4d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403b50: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x403b55u); f_005fb2b0();
    /* 00403b55: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00403b58: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00403b5b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00403b5d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00403b60: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00403b63: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403b65u); call_ind(t); }
    /* 00403b65: mov esp, ebp */ r_esp = r_ebp;
    /* 00403b67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00403b68: ret 4 */ FN_RET(0x00403b40); r_esp += 8; return;
}

void f_00403b70(void) /* sub_403B70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00403b70);
    /* 00403b70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00403b71: mov ebp, esp */ r_ebp = r_esp;
    /* 00403b73: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00403b76: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00403b79: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00403b7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00403b7d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00403b80: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x403b85u); f_005fb2b0();
    /* 00403b85: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00403b88: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00403b8b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00403b8d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00403b90: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00403b93: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x403b95u); call_ind(t); }
    /* 00403b95: mov esp, ebp */ r_esp = r_ebp;
    /* 00403b97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00403b98: ret 4 */ FN_RET(0x00403b70); r_esp += 8; return;
}

