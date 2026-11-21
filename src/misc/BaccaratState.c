#include "protos.h"

void f_00407620(void) /* BaccaratState::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407620);
    /* 00407620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407621: mov ebp, esp */ r_ebp = r_esp;
    /* 00407623: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00407625: push 0x69d8d8 */ { u32 v = 0x69d8d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040762a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00407630: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00407631: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00407634: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00407639: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040763b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040763c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0040763f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00407645: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00407648: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040764b: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x407650u); f_005e9e20();
    /* 00407650: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00407657: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040765a: mov dword ptr [eax], 0x6b35bc */ W32((u32)(r_eax), 0x6b35bcu);
    /* 00407660: push 0x4073a0 */ { u32 v = 0x4073a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407665: push 0x407390 */ { u32 v = 0x407390u; r_esp -= 4; W32(r_esp, v); }
    /* 0040766a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0040766c: push 0x338 */ { u32 v = 0x338u; r_esp -= 4; W32(r_esp, v); }
    /* 00407671: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00407674: add ecx, 0xbc */ {  u32 a = r_ecx; u32 b = 0xbcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040767a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040767b: call 0x686d94 */ r_esp -= 4; W32(r_esp, 0x407680u); f_00686d94();
    /* 00407680: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00407683: mov dword ptr [edx + 0x10d8], 0 */ W32((u32)(r_edx+0x10d8u), 0x0u);
    /* 0040768d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00407694: jmp 0x40769f */ goto L_0040769f;
L_00407696:; BB(0x00407696);
    /* 00407696: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00407699: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040769c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0040769f:; BB(0x0040769f);
    /* 0040769f: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004076a3: jge 0x4076b5 */ if ((fS==fO)) goto L_004076b5;
L_004076a5:; BB(0x004076a5);
    /* 004076a5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004076a8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004076ab: mov dword ptr [edx + ecx*4 + 4], 0 */ W32((u32)(r_edx+r_ecx*4+0x4u), 0x0u);
    /* 004076b3: jmp 0x407696 */ goto L_00407696;
L_004076b5:; BB(0x004076b5);
    /* 004076b5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004076bc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004076bf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004076c2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004076c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004076ca: mov esp, ebp */ r_esp = r_ebp;
    /* 004076cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004076cd: ret  */ FN_RET(0x00407620); r_esp += 4; return;
}

void f_004076d0(void) /* BaccaratState::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004076d0);
    /* 004076d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004076d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004076d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004076d5: push 0x69d916 */ { u32 v = 0x69d916u; r_esp -= 4; W32(r_esp, v); }
    /* 004076da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004076e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004076e1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004076e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004076e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004076eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004076ec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004076ef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004076f5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004076f8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004076fb: mov dword ptr [eax], 0x6b35bc */ W32((u32)(r_eax), 0x6b35bcu);
    /* 00407701: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00407708: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040770b: mov edx, dword ptr [ecx + 0x10d8] */ r_edx = R32((u32)(r_ecx+0x10d8u));
    /* 00407711: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00407714: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00407717: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040771a: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040771e: je 0x407733 */ if (fZ) goto L_00407733;
L_00407720:; BB(0x00407720);
    /* 00407720: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00407722: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00407725: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00407727: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040772a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040772c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40772eu); call_ind(t); }
    /* 0040772e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00407731: jmp 0x40773a */ goto L_0040773a;
L_00407733:; BB(0x00407733);
    /* 00407733: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0040773a:; BB(0x0040773a);
    /* 0040773a: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00407741: jmp 0x40774c */ goto L_0040774c;
L_00407743:; BB(0x00407743);
    /* 00407743: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00407746: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00407749: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0040774c:; BB(0x0040774c);
    /* 0040774c: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00407750: jge 0x407787 */ if ((fS==fO)) goto L_00407787;
L_00407752:; BB(0x00407752);
    /* 00407752: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00407755: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00407758: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0040775c: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040775f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00407762: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00407765: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00407769: je 0x40777e */ if (fZ) goto L_0040777e;
L_0040776b:; BB(0x0040776b);
    /* 0040776b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040776d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00407770: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00407772: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00407775: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00407777: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x407779u); call_ind(t); }
    /* 00407779: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0040777c: jmp 0x407785 */ goto L_00407785;
L_0040777e:; BB(0x0040777e);
    /* 0040777e: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00407785:; BB(0x00407785);
    /* 00407785: jmp 0x407743 */ goto L_00407743;
L_00407787:; BB(0x00407787);
    /* 00407787: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040778b: push 0x4073a0 */ { u32 v = 0x4073a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00407790: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00407792: push 0x338 */ { u32 v = 0x338u; r_esp -= 4; W32(r_esp, v); }
    /* 00407797: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040779a: add ecx, 0xbc */ {  u32 a = r_ecx; u32 b = 0xbcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004077a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004077a1: call 0x686e57 */ r_esp -= 4; W32(r_esp, 0x4077a6u); f_00686e57();
    /* 004077a6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004077ad: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004077b0: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x4077b5u); f_005e9e40();
    /* 004077b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004077b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004077bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004077c0: mov esp, ebp */ r_esp = r_ebp;
    /* 004077c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004077c3: ret  */ FN_RET(0x004076d0); r_esp += 4; return;
}

void f_004081c0(void) /* baccaratstate::func_004081c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004081c0);
    /* 004081c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004081c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004081c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004081c6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004081c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004081cc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004081cf: cmp dword ptr [ebp - 8], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004081d3: ja 0x4081ff */ if ((!fC&&!fZ)) goto L_004081ff;
L_004081d5:; BB(0x004081d5);
    /* 004081d5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004081d8: movzx edx, byte ptr [ecx + 0x408234] */ r_edx = (u32)R8((u32)(r_ecx+0x408234u));
    /* 004081df: jmp dword ptr [edx*4 + 0x408224] */ { u32 t = R32((u32)(r_edx*4+0x408224u)); switch (t) { case 0x4081e6u: goto L_004081e6; case 0x4081eau: goto L_004081ea; case 0x4081f1u: goto L_004081f1; case 0x4081f8u: goto L_004081f8; default: UNSUP(0x004081df, "jump table entry is not a known target"); } }
L_004081e6:; BB(0x004081e6);
    /* 004081e6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004081e8: jmp 0x40821c */ goto L_0040821c;
L_004081ea:; BB(0x004081ea);
    /* 004081ea: mov eax, 1 */ r_eax = 0x1u;
    /* 004081ef: jmp 0x40821c */ goto L_0040821c;
L_004081f1:; BB(0x004081f1);
    /* 004081f1: mov eax, 2 */ r_eax = 0x2u;
    /* 004081f6: jmp 0x40821c */ goto L_0040821c;
L_004081f8:; BB(0x004081f8);
    /* 004081f8: mov eax, 3 */ r_eax = 0x3u;
    /* 004081fd: jmp 0x40821c */ goto L_0040821c;
L_004081ff:; BB(0x004081ff);
    /* 004081ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00408201: jne 0x40821a */ if (!fZ) goto L_0040821a;
L_00408203:; BB(0x00408203);
    /* 00408203: push 0x197 */ { u32 v = 0x197u; r_esp -= 4; W32(r_esp, v); }
    /* 00408208: push 0x6b35cc */ { u32 v = 0x6b35ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0040820d: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00408212: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x408217u); f_005e9f20();
    /* 00408217: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0040821a:; BB(0x0040821a);
    /* 0040821a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040821c:; BB(0x0040821c);
    /* 0040821c: mov esp, ebp */ r_esp = r_ebp;
    /* 0040821e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040821f: ret 4 */ FN_RET(0x004081c0); r_esp += 8; return;
}

void f_00408580(void) /* baccaratstate::func_00408580 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00408580);
    /* 00408580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408581: mov ebp, esp */ r_ebp = r_esp;
    /* 00408583: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00408586: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00408589: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040858c: call 0x4091b0 */ r_esp -= 4; W32(r_esp, 0x408591u); f_004091b0();
    /* 00408591: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00408594: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00408597: call 0x4091d0 */ r_esp -= 4; W32(r_esp, 0x40859cu); f_004091d0();
    /* 0040859c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040859f: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004085a6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004085a9: imul eax, eax, 0x338 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x338u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004085af: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 004085b5: lea edx, [ecx + eax + 0xbc] */ r_edx = (u32)(r_ecx+r_eax+0xbcu);
    /* 004085bc: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 004085bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004085c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004085c3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4085c8u); f_005dcb00();
    /* 004085c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004085cb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004085ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004085d1: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4085d6u); f_0063aac0();
    /* 004085d6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004085d8: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004085db: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004085df: je 0x4085fd */ if (fZ) goto L_004085fd;
L_004085e1:; BB(0x004085e1);
    /* 004085e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004085e4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4085e9u); f_0063aac0();
    /* 004085e9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004085eb: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004085ee: cmp dword ptr [ebp - 0x1c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004085f2: je 0x4085fd */ if (fZ) goto L_004085fd;
L_004085f4:; BB(0x004085f4);
    /* 004085f4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004085fb: jmp 0x408604 */ goto L_00408604;
L_004085fd:; BB(0x004085fd);
    /* 004085fd: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
L_00408604:; BB(0x00408604);
    /* 00408604: movzx eax, byte ptr [ebp - 0x24] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 00408608: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040860a: jne 0x408623 */ if (!fZ) goto L_00408623;
L_0040860c:; BB(0x0040860c);
    /* 0040860c: push 0x1fe */ { u32 v = 0x1feu; r_esp -= 4; W32(r_esp, v); }
    /* 00408611: push 0x6b35cc */ { u32 v = 0x6b35ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00408616: push 0x6b35e8 */ { u32 v = 0x6b35e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040861b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x408620u); f_005e9f20();
    /* 00408620: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00408623:; BB(0x00408623);
    /* 00408623: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00408626: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00408627: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040862a: call 0x408a20 */ r_esp -= 4; W32(r_esp, 0x40862fu); f_00408a20();
    /* 0040862f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00408632: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408634: jne 0x40877d */ if (!fZ) goto L_0040877d;
L_0040863a:; BB(0x0040863a);
    /* 0040863a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040863d: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00408640: jle 0x408697 */ if ((fZ||fS!=fO)) goto L_00408697;
L_00408642:; BB(0x00408642);
    /* 00408642: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 00408649: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040864c: call 0x4074f0 */ r_esp -= 4; W32(r_esp, 0x408651u); f_004074f0();
    /* 00408651: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00408654: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00408655: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00408658: call 0x4089c0 */ r_esp -= 4; W32(r_esp, 0x40865du); f_004089c0();
    /* 0040865d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00408660: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408662: je 0x408677 */ if (fZ) goto L_00408677;
L_00408664:; BB(0x00408664);
    /* 00408664: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00408667: call 0x407570 */ r_esp -= 4; W32(r_esp, 0x40866cu); f_00407570();
    /* 0040866c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040866f: or ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00408672: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00408675: jmp 0x408692 */ goto L_00408692;
L_00408677:; BB(0x00408677);
    /* 00408677: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040867a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040867b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040867e: call 0x408870 */ r_esp -= 4; W32(r_esp, 0x408683u); f_00408870();
    /* 00408683: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00408686: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408688: je 0x408692 */ if (fZ) goto L_00408692;
L_0040868a:; BB(0x0040868a);
    /* 0040868a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040868d: call 0x407590 */ r_esp -= 4; W32(r_esp, 0x408692u); f_00407590();
L_00408692:; BB(0x00408692);
    /* 00408692: jmp 0x408741 */ goto L_00408741;
L_00408697:; BB(0x00408697);
    /* 00408697: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040869a: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040869d: jge 0x4086f1 */ if ((fS==fO)) goto L_004086f1;
L_0040869f:; BB(0x0040869f);
    /* 0040869f: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 004086a6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004086a9: call 0x407520 */ r_esp -= 4; W32(r_esp, 0x4086aeu); f_00407520();
    /* 004086ae: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004086b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004086b2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004086b5: call 0x408990 */ r_esp -= 4; W32(r_esp, 0x4086bau); f_00408990();
    /* 004086ba: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004086bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004086bf: je 0x4086d4 */ if (fZ) goto L_004086d4;
L_004086c1:; BB(0x004086c1);
    /* 004086c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004086c4: call 0x407570 */ r_esp -= 4; W32(r_esp, 0x4086c9u); f_00407570();
    /* 004086c9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004086cc: or ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004086cf: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004086d2: jmp 0x4086ef */ goto L_004086ef;
L_004086d4:; BB(0x004086d4);
    /* 004086d4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004086d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004086d8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004086db: call 0x408870 */ r_esp -= 4; W32(r_esp, 0x4086e0u); f_00408870();
    /* 004086e0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004086e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004086e5: je 0x4086ef */ if (fZ) goto L_004086ef;
L_004086e7:; BB(0x004086e7);
    /* 004086e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004086ea: call 0x407590 */ r_esp -= 4; W32(r_esp, 0x4086efu); f_00407590();
L_004086ef:; BB(0x004086ef);
    /* 004086ef: jmp 0x408741 */ goto L_00408741;
L_004086f1:; BB(0x004086f1);
    /* 004086f1: mov dword ptr [ebp - 0x10], 4 */ W32((u32)(r_ebp+0xfffffff0u), 0x4u);
    /* 004086f8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004086fb: call 0x407550 */ r_esp -= 4; W32(r_esp, 0x408700u); f_00407550();
    /* 00408700: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00408703: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00408704: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00408707: call 0x4089f0 */ r_esp -= 4; W32(r_esp, 0x40870cu); f_004089f0();
    /* 0040870c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0040870f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408711: je 0x408726 */ if (fZ) goto L_00408726;
L_00408713:; BB(0x00408713);
    /* 00408713: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00408716: call 0x407570 */ r_esp -= 4; W32(r_esp, 0x40871bu); f_00407570();
    /* 0040871b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040871e: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00408721: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00408724: jmp 0x408741 */ goto L_00408741;
L_00408726:; BB(0x00408726);
    /* 00408726: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00408729: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040872a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040872d: call 0x408870 */ r_esp -= 4; W32(r_esp, 0x408732u); f_00408870();
    /* 00408732: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00408735: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408737: je 0x408741 */ if (fZ) goto L_00408741;
L_00408739:; BB(0x00408739);
    /* 00408739: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040873c: call 0x407590 */ r_esp -= 4; W32(r_esp, 0x408741u); f_00407590();
L_00408741:; BB(0x00408741);
    /* 00408741: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00408744: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408745: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00408748: call 0x408870 */ r_esp -= 4; W32(r_esp, 0x40874du); f_00408870();
    /* 0040874d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00408750: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408752: je 0x40875e */ if (fZ) goto L_0040875e;
L_00408754:; BB(0x00408754);
    /* 00408754: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00408757: call 0x4075b0 */ r_esp -= 4; W32(r_esp, 0x40875cu); f_004075b0();
    /* 0040875c: jmp 0x408767 */ goto L_00408767;
L_0040875e:; BB(0x0040875e);
    /* 0040875e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00408761: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00408764: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00408767:; BB(0x00408767);
    /* 00408767: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040876a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040876b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040876e: call 0x4075d0 */ r_esp -= 4; W32(r_esp, 0x408773u); f_004075d0();
    /* 00408773: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00408776: call 0x4075f0 */ r_esp -= 4; W32(r_esp, 0x40877bu); f_004075f0();
    /* 0040877b: jmp 0x408784 */ goto L_00408784;
L_0040877d:; BB(0x0040877d);
    /* 0040877d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00408784:; BB(0x00408784);
    /* 00408784: mov esp, ebp */ r_esp = r_ebp;
    /* 00408786: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408787: ret 4 */ FN_RET(0x00408580); r_esp += 8; return;
}

void f_004088d0(void) /* baccaratstate::func_004088d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004088d0);
    /* 004088d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004088d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004088d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004088d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004088d7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004088db: jl 0x4088e3 */ if ((fS!=fO)) goto L_004088e3;
L_004088dd:; BB(0x004088dd);
    /* 004088dd: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004088e1: jle 0x4088fa */ if ((fZ||fS!=fO)) goto L_004088fa;
L_004088e3:; BB(0x004088e3);
    /* 004088e3: push 0x257 */ { u32 v = 0x257u; r_esp -= 4; W32(r_esp, v); }
    /* 004088e8: push 0x6b35cc */ { u32 v = 0x6b35ccu; r_esp -= 4; W32(r_esp, v); }
    /* 004088ed: push 0x6b35fc */ { u32 v = 0x6b35fcu; r_esp -= 4; W32(r_esp, v); }
    /* 004088f2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4088f7u); f_005e9f20();
    /* 004088f7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004088fa:; BB(0x004088fa);
    /* 004088fa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004088fd: mov eax, dword ptr [ecx*4 + 0x7071d8] */ r_eax = R32((u32)(r_ecx*4+0x7071d8u));
    /* 00408904: mov esp, ebp */ r_esp = r_ebp;
    /* 00408906: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408907: ret 4 */ FN_RET(0x004088d0); r_esp += 8; return;
}

void f_00408910(void) /* baccaratstate::func_00408910 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00408910);
    /* 00408910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408911: mov ebp, esp */ r_ebp = r_esp;
    /* 00408913: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00408914: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00408917: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040891b: jl 0x408923 */ if ((fS!=fO)) goto L_00408923;
L_0040891d:; BB(0x0040891d);
    /* 0040891d: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00408921: jle 0x40893a */ if ((fZ||fS!=fO)) goto L_0040893a;
L_00408923:; BB(0x00408923);
    /* 00408923: push 0x25e */ { u32 v = 0x25eu; r_esp -= 4; W32(r_esp, v); }
    /* 00408928: push 0x6b35cc */ { u32 v = 0x6b35ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0040892d: push 0x6b35fc */ { u32 v = 0x6b35fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00408932: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x408937u); f_005e9f20();
    /* 00408937: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0040893a:; BB(0x0040893a);
    /* 0040893a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040893d: mov eax, dword ptr [ecx*4 + 0x7071e8] */ r_eax = R32((u32)(r_ecx*4+0x7071e8u));
    /* 00408944: mov esp, ebp */ r_esp = r_ebp;
    /* 00408946: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408947: ret 4 */ FN_RET(0x00408910); r_esp += 8; return;
}

void f_00408950(void) /* baccaratstate::func_00408950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00408950);
    /* 00408950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408951: mov ebp, esp */ r_ebp = r_esp;
    /* 00408953: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00408954: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00408957: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040895b: jl 0x408963 */ if ((fS!=fO)) goto L_00408963;
L_0040895d:; BB(0x0040895d);
    /* 0040895d: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00408961: jle 0x40897a */ if ((fZ||fS!=fO)) goto L_0040897a;
L_00408963:; BB(0x00408963);
    /* 00408963: push 0x265 */ { u32 v = 0x265u; r_esp -= 4; W32(r_esp, v); }
    /* 00408968: push 0x6b35cc */ { u32 v = 0x6b35ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0040896d: push 0x6b35fc */ { u32 v = 0x6b35fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00408972: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x408977u); f_005e9f20();
    /* 00408977: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0040897a:; BB(0x0040897a);
    /* 0040897a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040897d: mov eax, dword ptr [ecx*4 + 0x7071f8] */ r_eax = R32((u32)(r_ecx*4+0x7071f8u));
    /* 00408984: mov esp, ebp */ r_esp = r_ebp;
    /* 00408986: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408987: ret 4 */ FN_RET(0x00408950); r_esp += 8; return;
}

void f_00408de0(void) /* baccaratstate::func_00408de0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00408de0);
    /* 00408de0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408de1: mov ebp, esp */ r_ebp = r_esp;
    /* 00408de3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00408de6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00408de9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00408df0: jmp 0x408dfb */ goto L_00408dfb;
L_00408df2:; BB(0x00408df2);
    /* 00408df2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408df5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00408df8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00408dfb:; BB(0x00408dfb);
    /* 00408dfb: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00408dff: jge 0x408e17 */ if ((fS==fO)) goto L_00408e17;
L_00408e01:; BB(0x00408e01);
    /* 00408e01: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408e04: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00408e07: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00408e0b: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408e0e: jne 0x408e15 */ if (!fZ) goto L_00408e15;
L_00408e10:; BB(0x00408e10);
    /* 00408e10: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00408e13: jmp 0x408e35 */ goto L_00408e35;
L_00408e15:; BB(0x00408e15);
    /* 00408e15: jmp 0x408df2 */ goto L_00408df2;
L_00408e17:; BB(0x00408e17);
    /* 00408e17: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00408e19: jne 0x408e32 */ if (!fZ) goto L_00408e32;
L_00408e1b:; BB(0x00408e1b);
    /* 00408e1b: push 0x302 */ { u32 v = 0x302u; r_esp -= 4; W32(r_esp, v); }
    /* 00408e20: push 0x6b35cc */ { u32 v = 0x6b35ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00408e25: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00408e2a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x408e2fu); f_005e9f20();
    /* 00408e2f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00408e32:; BB(0x00408e32);
    /* 00408e32: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00408e35:; BB(0x00408e35);
    /* 00408e35: mov esp, ebp */ r_esp = r_ebp;
    /* 00408e37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408e38: ret 4 */ FN_RET(0x00408de0); r_esp += 8; return;
}

