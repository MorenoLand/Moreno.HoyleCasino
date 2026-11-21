#include "protos.h"

void f_005ee4c0(void) /* sub_5EE4C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ee4c0);
    /* 005ee4c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ee4c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ee4c3: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ee4c9: cmp dword ptr [ebp + 8], 0x7f */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x7fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ee4cd: jle 0x5ee4d8 */ if ((fZ||fS!=fO)) goto L_005ee4d8;
L_005ee4cf:; BB(0x005ee4cf);
    /* 005ee4cf: cmp dword ptr [ebp + 8], 0xa0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ee4d6: jl 0x5ee4e5 */ if ((fS!=fO)) goto L_005ee4e5;
L_005ee4d8:; BB(0x005ee4d8);
    /* 005ee4d8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ee4db: jmp 0x5ee5d4 */ goto L_005ee5d4;
L_005ee4e5:; BB(0x005ee4e5);
    /* 005ee4e5: mov dword ptr [ebp - 0x80], 0xfffe */ W32((u32)(r_ebp+0xffffff80u), 0xfffeu);
    /* 005ee4ec: mov dword ptr [ebp - 0x7c], 0xfffe */ W32((u32)(r_ebp+0xffffff84u), 0xfffeu);
    /* 005ee4f3: mov dword ptr [ebp - 0x78], 0x201a */ W32((u32)(r_ebp+0xffffff88u), 0x201au);
    /* 005ee4fa: mov dword ptr [ebp - 0x74], 0x192 */ W32((u32)(r_ebp+0xffffff8cu), 0x192u);
    /* 005ee501: mov dword ptr [ebp - 0x70], 0x201e */ W32((u32)(r_ebp+0xffffff90u), 0x201eu);
    /* 005ee508: mov dword ptr [ebp - 0x6c], 0x2026 */ W32((u32)(r_ebp+0xffffff94u), 0x2026u);
    /* 005ee50f: mov dword ptr [ebp - 0x68], 0x2020 */ W32((u32)(r_ebp+0xffffff98u), 0x2020u);
    /* 005ee516: mov dword ptr [ebp - 0x64], 0x2021 */ W32((u32)(r_ebp+0xffffff9cu), 0x2021u);
    /* 005ee51d: mov dword ptr [ebp - 0x60], 0x2c6 */ W32((u32)(r_ebp+0xffffffa0u), 0x2c6u);
    /* 005ee524: mov dword ptr [ebp - 0x5c], 0x2030 */ W32((u32)(r_ebp+0xffffffa4u), 0x2030u);
    /* 005ee52b: mov dword ptr [ebp - 0x58], 0x160 */ W32((u32)(r_ebp+0xffffffa8u), 0x160u);
    /* 005ee532: mov dword ptr [ebp - 0x54], 0x2039 */ W32((u32)(r_ebp+0xffffffacu), 0x2039u);
    /* 005ee539: mov dword ptr [ebp - 0x50], 0x152 */ W32((u32)(r_ebp+0xffffffb0u), 0x152u);
    /* 005ee540: mov dword ptr [ebp - 0x4c], 0xfffe */ W32((u32)(r_ebp+0xffffffb4u), 0xfffeu);
    /* 005ee547: mov dword ptr [ebp - 0x48], 0xfffe */ W32((u32)(r_ebp+0xffffffb8u), 0xfffeu);
    /* 005ee54e: mov dword ptr [ebp - 0x44], 0xfffe */ W32((u32)(r_ebp+0xffffffbcu), 0xfffeu);
    /* 005ee555: mov dword ptr [ebp - 0x40], 0xfffe */ W32((u32)(r_ebp+0xffffffc0u), 0xfffeu);
    /* 005ee55c: mov dword ptr [ebp - 0x3c], 0x2018 */ W32((u32)(r_ebp+0xffffffc4u), 0x2018u);
    /* 005ee563: mov dword ptr [ebp - 0x38], 0x2019 */ W32((u32)(r_ebp+0xffffffc8u), 0x2019u);
    /* 005ee56a: mov dword ptr [ebp - 0x34], 0x201c */ W32((u32)(r_ebp+0xffffffccu), 0x201cu);
    /* 005ee571: mov dword ptr [ebp - 0x30], 0x201d */ W32((u32)(r_ebp+0xffffffd0u), 0x201du);
    /* 005ee578: mov dword ptr [ebp - 0x2c], 0x2022 */ W32((u32)(r_ebp+0xffffffd4u), 0x2022u);
    /* 005ee57f: mov dword ptr [ebp - 0x28], 0x2013 */ W32((u32)(r_ebp+0xffffffd8u), 0x2013u);
    /* 005ee586: mov dword ptr [ebp - 0x24], 0x2014 */ W32((u32)(r_ebp+0xffffffdcu), 0x2014u);
    /* 005ee58d: mov dword ptr [ebp - 0x20], 0x2dc */ W32((u32)(r_ebp+0xffffffe0u), 0x2dcu);
    /* 005ee594: mov dword ptr [ebp - 0x1c], 0x2122 */ W32((u32)(r_ebp+0xffffffe4u), 0x2122u);
    /* 005ee59b: mov dword ptr [ebp - 0x18], 0x161 */ W32((u32)(r_ebp+0xffffffe8u), 0x161u);
    /* 005ee5a2: mov dword ptr [ebp - 0x14], 0x203a */ W32((u32)(r_ebp+0xffffffecu), 0x203au);
    /* 005ee5a9: mov dword ptr [ebp - 0x10], 0x153 */ W32((u32)(r_ebp+0xfffffff0u), 0x153u);
    /* 005ee5b0: mov dword ptr [ebp - 0xc], 0xfffe */ W32((u32)(r_ebp+0xfffffff4u), 0xfffeu);
    /* 005ee5b7: mov dword ptr [ebp - 8], 0xfffe */ W32((u32)(r_ebp+0xfffffff8u), 0xfffeu);
    /* 005ee5be: mov dword ptr [ebp - 4], 0x178 */ W32((u32)(r_ebp+0xfffffffcu), 0x178u);
    /* 005ee5c5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ee5c8: mov eax, dword ptr [ebp + eax*4 - 0x280] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffd80u));
    /* 005ee5cf: jmp 0x5ee5d4 */ goto L_005ee5d4;
L_005ee5d4:; BB(0x005ee5d4);
    /* 005ee5d4: mov esp, ebp */ r_esp = r_ebp;
    /* 005ee5d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ee5d7: ret  */ FN_RET(0x005ee4c0); r_esp += 4; return;
}

void f_005ee710(void) /* sub_5EE710 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ee710);
    /* 005ee710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ee711: mov ebp, esp */ r_ebp = r_esp;
    /* 005ee713: sub esp, 0x114 */ {  u32 a = r_esp; u32 b = 0x114u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ee719: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005ee71e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ee720: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ee723: mov dword ptr [ebp - 0x114], ecx */ W32((u32)(r_ebp+0xfffffeecu), r_ecx);
    /* 005ee729: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ee72c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee72d: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005ee733: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ee735: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005ee73b: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005ee741: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ee743u); call_ind(t); }
    /* 005ee743: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee747: je 0x5ee75c */ if (fZ) goto L_005ee75c;
L_005ee749:; BB(0x005ee749);
    /* 005ee749: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ee74c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee74d: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x5ee752u); f_00686ecc();
    /* 005ee752: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ee755: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005ee75a: jb 0x5ee761 */ if (fC) goto L_005ee761;
L_005ee75c:; BB(0x005ee75c);
    /* 005ee75c: jmp 0x5ee876 */ goto L_005ee876;
L_005ee761:; BB(0x005ee761);
    /* 005ee761: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ee764: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee765: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 005ee76b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee76c: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5ee771u); f_00686d8e();
    /* 005ee771: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ee774: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005ee77a: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 005ee77d: and edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005ee780: je 0x5ee81f */ if (fZ) goto L_005ee81f;
L_005ee786:; BB(0x005ee786);
    /* 005ee786: movsx eax, byte ptr [ebp - 0x110] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffef0u));
    /* 005ee78d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee78f: je 0x5ee81d */ if (fZ) goto L_005ee81d;
L_005ee795:; BB(0x005ee795);
    /* 005ee795: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005ee79b: call 0x5ef050 */ r_esp -= 4; W32(r_esp, 0x5ee7a0u); f_005ef050();
    /* 005ee7a0: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005ee7a6: cmp eax, dword ptr [ecx + 0x68] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x68u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ee7a9: jl 0x5ee81d */ if ((fS!=fO)) goto L_005ee81d;
L_005ee7ab:; BB(0x005ee7ab);
    /* 005ee7ab: lea edx, [ebp - 0x110] */ r_edx = (u32)(r_ebp+0xfffffef0u);
    /* 005ee7b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee7b2: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x5ee7b7u); f_00686ecc();
    /* 005ee7b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ee7ba: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ee7bd: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005ee7c4: jmp 0x5ee7cf */ goto L_005ee7cf;
L_005ee7c6:; BB(0x005ee7c6);
    /* 005ee7c6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ee7c9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ee7cc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005ee7cf:; BB(0x005ee7cf);
    /* 005ee7cf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ee7d2: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005ee7d5: cmp dword ptr [ebp - 8], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ee7d8: jge 0x5ee7f0 */ if ((fS==fO)) goto L_005ee7f0;
L_005ee7da:; BB(0x005ee7da);
    /* 005ee7da: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ee7dd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ee7e0: mov cl, byte ptr [ebp + eax - 0x10f] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+r_eax+0xfffffef1u))) & 0xffu);
    /* 005ee7e7: mov byte ptr [ebp + edx - 0x110], cl */ W8((u32)(r_ebp+r_edx+0xfffffef0u), (u8)r_ecx);
    /* 005ee7ee: jmp 0x5ee7c6 */ goto L_005ee7c6;
L_005ee7f0:; BB(0x005ee7f0);
    /* 005ee7f0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ee7f3: mov byte ptr [ebp + edx - 0x110], 0 */ W8((u32)(r_ebp+r_edx+0xfffffef0u), 0x0u);
    /* 005ee7fb: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 005ee801: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee802: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005ee808: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ee80a: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005ee810: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005ee816: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ee818u); call_ind(t); }
    /* 005ee818: jmp 0x5ee786 */ goto L_005ee786;
L_005ee81d:; BB(0x005ee81d);
    /* 005ee81d: jmp 0x5ee876 */ goto L_005ee876;
L_005ee81f:; BB(0x005ee81f);
    /* 005ee81f: movsx ecx, byte ptr [ebp - 0x110] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffef0u));
    /* 005ee826: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee828: je 0x5ee876 */ if (fZ) goto L_005ee876;
L_005ee82a:; BB(0x005ee82a);
    /* 005ee82a: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005ee830: call 0x5ef050 */ r_esp -= 4; W32(r_esp, 0x5ee835u); f_005ef050();
    /* 005ee835: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005ee83b: cmp eax, dword ptr [edx + 0x68] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x68u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ee83e: jl 0x5ee876 */ if ((fS!=fO)) goto L_005ee876;
L_005ee840:; BB(0x005ee840);
    /* 005ee840: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 005ee846: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee847: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x5ee84cu); f_00686ecc();
    /* 005ee84c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ee84f: mov byte ptr [ebp + eax - 0x111], 0 */ W8((u32)(r_ebp+r_eax+0xfffffeefu), 0x0u);
    /* 005ee857: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 005ee85d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee85e: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005ee864: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ee866: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005ee86c: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 005ee872: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ee874u); call_ind(t); }
    /* 005ee874: jmp 0x5ee81f */ goto L_005ee81f;
L_005ee876:; BB(0x005ee876);
    /* 005ee876: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ee879: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ee87b: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5ee880u); f_00686d72();
    /* 005ee880: mov esp, ebp */ r_esp = r_ebp;
    /* 005ee882: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ee883: ret 4 */ FN_RET(0x005ee710); r_esp += 8; return;
}

void f_005ee8c0(void) /* sub_5EE8C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ee8c0);
    /* 005ee8c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ee8c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ee8c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee8c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ee8c7: mov al, byte ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 005ee8ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee8cb: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005ee8ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee8cf: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005ee8d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee8d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ee8d6: call 0x5f6580 */ r_esp -= 4; W32(r_esp, 0x5ee8dbu); f_005f6580();
    /* 005ee8db: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ee8de: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005ee8e1: mov byte ptr [eax + 0x88], cl */ W8((u32)(r_eax+0x88u), (u8)r_ecx);
    /* 005ee8e7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ee8ea: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005ee8ed: mov byte ptr [edx + 0x89], al */ W8((u32)(r_edx+0x89u), (u8)r_eax);
    /* 005ee8f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ee8f6: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 005ee8f9: mov byte ptr [ecx + 0x8a], dl */ W8((u32)(r_ecx+0x8au), (u8)r_edx);
    /* 005ee8ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ee902: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ee904: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ee907: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 005ee90d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ee90fu); call_ind(t); }
    /* 005ee90f: mov esp, ebp */ r_esp = r_ebp;
    /* 005ee911: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ee912: ret 0xc */ FN_RET(0x005ee8c0); r_esp += 16; return;
}

void f_005ee920(void) /* sub_5EE920 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ee920);
    /* 005ee920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ee921: mov ebp, esp */ r_ebp = r_esp;
    /* 005ee923: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee924: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ee927: mov al, byte ptr [ebp + 0xa] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xau))) & 0xffu);
    /* 005ee92a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee92b: mov cl, byte ptr [ebp + 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x9u))) & 0xffu);
    /* 005ee92e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee92f: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005ee932: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee933: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ee936: call 0x5ee8c0 */ r_esp -= 4; W32(r_esp, 0x5ee93bu); f_005ee8c0();
    /* 005ee93b: mov esp, ebp */ r_esp = r_ebp;
    /* 005ee93d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ee93e: ret 4 */ FN_RET(0x005ee920); r_esp += 8; return;
}

void f_005ee950(void) /* sub_5EE950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ee950);
    /* 005ee950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ee951: mov ebp, esp */ r_ebp = r_esp;
    /* 005ee953: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ee956: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005ee959: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ee960: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005ee963: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee964: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ee967: call 0x5f0a30 */ r_esp -= 4; W32(r_esp, 0x5ee96cu); f_005f0a30();
    /* 005ee96c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005ee96f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005ee972: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005ee979: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ee97c: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 005ee97f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005ee982: cmp dword ptr [ebp - 0x1c], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee986: je 0x5ee999 */ if (fZ) goto L_005ee999;
L_005ee988:; BB(0x005ee988);
    /* 005ee988: cmp dword ptr [ebp - 0x1c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee98c: je 0x5ee9d4 */ if (fZ) goto L_005ee9d4;
L_005ee98e:; BB(0x005ee98e);
    /* 005ee98e: cmp dword ptr [ebp - 0x1c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee992: je 0x5eea0e */ if (fZ) goto L_005eea0e;
L_005ee994:; BB(0x005ee994);
    /* 005ee994: jmp 0x5eead5 */ goto L_005eead5;
L_005ee999:; BB(0x005ee999);
    /* 005ee999: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ee99c: cmp dword ptr [ecx + 0x98], 0 */ {  u32 a = R32((u32)(r_ecx+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee9a3: je 0x5ee9cf */ if (fZ) goto L_005ee9cf;
L_005ee9a5:; BB(0x005ee9a5);
    /* 005ee9a5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ee9a8: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 005ee9ae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ee9b1: movzx edx, word ptr [eax + ecx*8 + 8] */ r_edx = (u32)R16((u32)(r_eax+r_ecx*8+0x8u));
    /* 005ee9b6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ee9b9: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 005ee9bf: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ee9c2: movzx ecx, word ptr [ecx + eax*8 + 4] */ r_ecx = (u32)R16((u32)(r_ecx+r_eax*8+0x4u));
    /* 005ee9c7: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ee9c9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ee9cc: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005ee9cf:; BB(0x005ee9cf);
    /* 005ee9cf: jmp 0x5eead9 */ goto L_005eead9;
L_005ee9d4:; BB(0x005ee9d4);
    /* 005ee9d4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ee9d7: cmp dword ptr [edx + 0xb0], 0 */ {  u32 a = R32((u32)(r_edx+0xb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee9de: je 0x5eea09 */ if (fZ) goto L_005eea09;
L_005ee9e0:; BB(0x005ee9e0);
    /* 005ee9e0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ee9e3: sub eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 005ee9e6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ee9e9: jns 0x5ee9f2 */ if (!fS) goto L_005ee9f2;
L_005ee9eb:; BB(0x005ee9eb);
    /* 005ee9eb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_005ee9f2:; BB(0x005ee9f2);
    /* 005ee9f2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ee9f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee9f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee9f8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ee9fb: mov ecx, dword ptr [edx + 0xb0] */ r_ecx = R32((u32)(r_edx+0xb0u));
    /* 005eea01: call 0x616410 */ r_esp -= 4; W32(r_esp, 0x5eea06u); f_00616410();
    /* 005eea06: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005eea09:; BB(0x005eea09);
    /* 005eea09: jmp 0x5eead9 */ goto L_005eead9;
L_005eea0e:; BB(0x005eea0e);
    /* 005eea0e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005eea11: cmp dword ptr [eax + 0xb0], 0 */ {  u32 a = R32((u32)(r_eax+0xb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eea18: je 0x5eead3 */ if (fZ) goto L_005eead3;
L_005eea1e:; BB(0x005eea1e);
    /* 005eea1e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eea21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eea22: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eea24: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005eea27: mov ecx, dword ptr [edx + 0xb0] */ r_ecx = R32((u32)(r_edx+0xb0u));
    /* 005eea2d: call 0x616410 */ r_esp -= 4; W32(r_esp, 0x5eea32u); f_00616410();
    /* 005eea32: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005eea35: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005eea38: movzx ecx, byte ptr [eax + 0xcc] */ r_ecx = (u32)R8((u32)(r_eax+0xccu));
    /* 005eea3f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eea41: je 0x5eead3 */ if (fZ) goto L_005eead3;
L_005eea47:; BB(0x005eea47);
    /* 005eea47: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eea4b: jl 0x5eead3 */ if ((fS!=fO)) goto L_005eead3;
L_005eea51:; BB(0x005eea51);
    /* 005eea51: cmp dword ptr [ebp + 0xc], 0xff */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eea58: jg 0x5eead3 */ if ((!fZ&&fS==fO)) goto L_005eead3;
L_005eea5a:; BB(0x005eea5a);
    /* 005eea5a: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 005eea5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eea5e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eea60: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005eea63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eea64: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005eea67: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 005eea6d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eea6e: call 0x686c5a */ r_esp -= 4; W32(r_esp, 0x5eea73u); f_00686c5a();
    /* 005eea73: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eea76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eea77: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eea7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eea7b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005eea7e: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 005eea84: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eea85: call 0x686c5a */ r_esp -= 4; W32(r_esp, 0x5eea8au); f_00686c5a();
    /* 005eea8a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eea8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eea8e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005eea91: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005eea97: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eea98: call 0x686c54 */ r_esp -= 4; W32(r_esp, 0x5eea9du); f_00686c54();
    /* 005eea9d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eeaa0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005eeaa2: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eeaa6: setl al */ r_eax = (r_eax & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 005eeaa9: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005eeaac: and eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005eeaaf: add eax, -0x20 */ {  u32 a = r_eax; u32 b = 0xffffffe0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eeab2: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eeab5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005eeab6: and edx, 0x3f */ {  u32 a = r_edx; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005eeab9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eeabb: sar eax, 6 */ { u32 c = (6u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005eeabe: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005eeac1: add edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005eeac4: movsx ecx, byte ptr [edx + 0xd0] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0xd0u));
    /* 005eeacb: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eeace: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eead0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005eead3:; BB(0x005eead3);
    /* 005eead3: jmp 0x5eead9 */ goto L_005eead9;
L_005eead5:; BB(0x005eead5);
    /* 005eead5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005eead7: jmp 0x5eeae6 */ goto L_005eeae6;
L_005eead9:; BB(0x005eead9);
    /* 005eead9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005eeadc: movzx eax, word ptr [edx + 0x90] */ r_eax = (u32)R16((u32)(r_edx+0x90u));
    /* 005eeae3: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_005eeae6:; BB(0x005eeae6);
    /* 005eeae6: mov esp, ebp */ r_esp = r_ebp;
    /* 005eeae8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eeae9: ret 8 */ FN_RET(0x005ee950); r_esp += 12; return;
}

void f_005eeaf0(void) /* sub_5EEAF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eeaf0);
    /* 005eeaf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eeaf1: mov ebp, esp */ r_ebp = r_esp;
    /* 005eeaf3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eeaf6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005eeaf9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005eeb00: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005eeb03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eeb04: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eeb07: call 0x5f0a30 */ r_esp -= 4; W32(r_esp, 0x5eeb0cu); f_005f0a30();
    /* 005eeb0c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005eeb0f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005eeb12: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005eeb19: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eeb1c: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 005eeb1f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005eeb22: cmp dword ptr [ebp - 0x14], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eeb26: je 0x5eeb39 */ if (fZ) goto L_005eeb39;
L_005eeb28:; BB(0x005eeb28);
    /* 005eeb28: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eeb2c: je 0x5eeb71 */ if (fZ) goto L_005eeb71;
L_005eeb2e:; BB(0x005eeb2e);
    /* 005eeb2e: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eeb32: je 0x5eeba8 */ if (fZ) goto L_005eeba8;
L_005eeb34:; BB(0x005eeb34);
    /* 005eeb34: jmp 0x5eebcd */ goto L_005eebcd;
L_005eeb39:; BB(0x005eeb39);
    /* 005eeb39: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eeb3c: cmp dword ptr [ecx + 0x98], 0 */ {  u32 a = R32((u32)(r_ecx+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eeb43: je 0x5eeb6f */ if (fZ) goto L_005eeb6f;
L_005eeb45:; BB(0x005eeb45);
    /* 005eeb45: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eeb48: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 005eeb4e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eeb51: movzx edx, word ptr [eax + ecx*8 + 6] */ r_edx = (u32)R16((u32)(r_eax+r_ecx*8+0x6u));
    /* 005eeb56: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eeb59: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 005eeb5f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eeb62: movzx ecx, word ptr [ecx + eax*8 + 2] */ r_ecx = (u32)R16((u32)(r_ecx+r_eax*8+0x2u));
    /* 005eeb67: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005eeb69: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005eeb6c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005eeb6f:; BB(0x005eeb6f);
    /* 005eeb6f: jmp 0x5eebd1 */ goto L_005eebd1;
L_005eeb71:; BB(0x005eeb71);
    /* 005eeb71: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eeb74: cmp dword ptr [edx + 0xb0], 0 */ {  u32 a = R32((u32)(r_edx+0xb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eeb7b: je 0x5eeba6 */ if (fZ) goto L_005eeba6;
L_005eeb7d:; BB(0x005eeb7d);
    /* 005eeb7d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eeb80: sub eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 005eeb83: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005eeb86: jns 0x5eeb8f */ if (!fS) goto L_005eeb8f;
L_005eeb88:; BB(0x005eeb88);
    /* 005eeb88: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_005eeb8f:; BB(0x005eeb8f);
    /* 005eeb8f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eeb92: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eeb93: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eeb95: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eeb98: mov ecx, dword ptr [edx + 0xb0] */ r_ecx = R32((u32)(r_edx+0xb0u));
    /* 005eeb9e: call 0x616450 */ r_esp -= 4; W32(r_esp, 0x5eeba3u); f_00616450();
    /* 005eeba3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005eeba6:; BB(0x005eeba6);
    /* 005eeba6: jmp 0x5eebd1 */ goto L_005eebd1;
L_005eeba8:; BB(0x005eeba8);
    /* 005eeba8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eebab: cmp dword ptr [eax + 0xb0], 0 */ {  u32 a = R32((u32)(r_eax+0xb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eebb2: je 0x5eebcb */ if (fZ) goto L_005eebcb;
L_005eebb4:; BB(0x005eebb4);
    /* 005eebb4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eebb7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eebb8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eebba: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eebbd: mov ecx, dword ptr [edx + 0xb0] */ r_ecx = R32((u32)(r_edx+0xb0u));
    /* 005eebc3: call 0x616450 */ r_esp -= 4; W32(r_esp, 0x5eebc8u); f_00616450();
    /* 005eebc8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005eebcb:; BB(0x005eebcb);
    /* 005eebcb: jmp 0x5eebd1 */ goto L_005eebd1;
L_005eebcd:; BB(0x005eebcd);
    /* 005eebcd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005eebcf: jmp 0x5eebde */ goto L_005eebde;
L_005eebd1:; BB(0x005eebd1);
    /* 005eebd1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eebd4: movzx eax, word ptr [eax + 0x92] */ r_eax = (u32)R16((u32)(r_eax+0x92u));
    /* 005eebdb: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_005eebde:; BB(0x005eebde);
    /* 005eebde: mov esp, ebp */ r_esp = r_ebp;
    /* 005eebe0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eebe1: ret 4 */ FN_RET(0x005eeaf0); r_esp += 8; return;
}

void f_005eebf0(void) /* sub_5EEBF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eebf0);
    /* 005eebf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eebf1: mov ebp, esp */ r_ebp = r_esp;
    /* 005eebf3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eebf6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005eebf9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005eec00: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005eec07: cmp dword ptr [ebp + 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eec0b: jne 0x5eec16 */ if (!fZ) goto L_005eec16;
L_005eec0d:; BB(0x005eec0d);
    /* 005eec0d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eec10: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 005eec13: mov dword ptr [ebp + 0x18], ecx */ W32((u32)(r_ebp+0x18u), r_ecx);
L_005eec16:; BB(0x005eec16);
    /* 005eec16: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eec1a: jle 0x5eec35 */ if ((fZ||fS!=fO)) goto L_005eec35;
L_005eec1c:; BB(0x005eec1c);
    /* 005eec1c: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 005eec1f: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005eec22: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 005eec25: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eec28: jne 0x5eec35 */ if (!fZ) goto L_005eec35;
L_005eec2a:; BB(0x005eec2a);
    /* 005eec2a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005eec2d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eec30: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 005eec33: jmp 0x5eec1c */ goto L_005eec1c;
L_005eec35:; BB(0x005eec35);
    /* 005eec35: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005eec38: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eec3b: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005eec3d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005eec40: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eec43: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005eec46: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 005eec48: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005eec4b: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 005eec51: jmp 0x5eec5c */ goto L_005eec5c;
L_005eec53:; BB(0x005eec53);
    /* 005eec53: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005eec56: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eec59: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_005eec5c:; BB(0x005eec5c);
    /* 005eec5c: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 005eec5f: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005eec62: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 005eec65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eec67: je 0x5eed63 */ if (fZ) goto L_005eed63;
L_005eec6d:; BB(0x005eec6d);
    /* 005eec6d: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005eec70: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eec73: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 005eec76: cmp edx, 0x1b */ {  u32 a = r_edx; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eec79: je 0x5eed63 */ if (fZ) goto L_005eed63;
L_005eec7f:; BB(0x005eec7f);
    /* 005eec7f: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005eec82: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eec85: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 005eec89: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eec8b: je 0x5eec9c */ if (fZ) goto L_005eec9c;
L_005eec8d:; BB(0x005eec8d);
    /* 005eec8d: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 005eec90: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005eec93: movzx eax, byte ptr [edx + 1] */ r_eax = (u32)R8((u32)(r_edx+0x1u));
    /* 005eec97: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005eec9a: jmp 0x5eeca3 */ goto L_005eeca3;
L_005eec9c:; BB(0x005eec9c);
    /* 005eec9c: mov dword ptr [ebp - 0x14], 0xffffffff */ W32((u32)(r_ebp+0xffffffecu), 0xffffffffu);
L_005eeca3:; BB(0x005eeca3);
    /* 005eeca3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005eeca6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eeca7: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 005eecaa: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005eecad: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 005eecaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eecb0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eecb3: call 0x5ee950 */ r_esp -= 4; W32(r_esp, 0x5eecb8u); f_005ee950();
    /* 005eecb8: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005eecbb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005eecbd: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005eecbf: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eecc2: movzx ecx, word ptr [eax + 0x90] */ r_ecx = (u32)R16((u32)(r_eax+0x90u));
    /* 005eecc9: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005eeccb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eecce: movsx ecx, word ptr [eax + 0x94] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x94u));
    /* 005eecd5: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005eecd7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eecda: add edx, dword ptr [eax + 0xa8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xa8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005eece0: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005eece3: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005eece6: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eece9: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 005eecec: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eecef: jne 0x5eed01 */ if (!fZ) goto L_005eed01;
L_005eecf1:; BB(0x005eecf1);
    /* 005eecf1: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005eecf4: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005eecf6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eecf9: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005eecfc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005eecfe: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005eed01:; BB(0x005eed01);
    /* 005eed01: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005eed04: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eed07: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 005eed0a: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eed0d: jne 0x5eed1c */ if (!fZ) goto L_005eed1c;
L_005eed0f:; BB(0x005eed0f);
    /* 005eed0f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eed12: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eed15: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005eed18: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 005eed1a: jmp 0x5eed63 */ goto L_005eed63;
L_005eed1c:; BB(0x005eed1c);
    /* 005eed1c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eed1f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eed22: mov ecx, dword ptr [edx + 0x68] */ r_ecx = R32((u32)(r_edx+0x68u));
    /* 005eed25: sub ecx, dword ptr [eax + 0x74] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x74u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005eed28: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eed2b: sub ecx, dword ptr [edx + 0x7c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x7cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005eed2e: cmp dword ptr [ebp - 8], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eed31: jle 0x5eed4b */ if ((fZ||fS!=fO)) goto L_005eed4b;
L_005eed33:; BB(0x005eed33);
    /* 005eed33: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eed37: je 0x5eed49 */ if (fZ) goto L_005eed49;
L_005eed39:; BB(0x005eed39);
    /* 005eed39: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005eed3c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eed3f: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005eed41: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005eed44: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eed47: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_005eed49:; BB(0x005eed49);
    /* 005eed49: jmp 0x5eed63 */ goto L_005eed63;
L_005eed4b:; BB(0x005eed4b);
    /* 005eed4b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005eed4e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eed51: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005eed54: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 005eed56: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005eed59: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eed5c: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005eed5e: jmp 0x5eec53 */ goto L_005eec53;
L_005eed63:; BB(0x005eed63);
    /* 005eed63: mov esp, ebp */ r_esp = r_ebp;
    /* 005eed65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eed66: ret 0x14 */ FN_RET(0x005eebf0); r_esp += 24; return;
}

void f_005eed70(void) /* sub_5EED70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eed70);
    /* 005eed70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eed71: mov ebp, esp */ r_ebp = r_esp;
    /* 005eed73: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005eed76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eed77: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005eed7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eed7b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5eed80u); f_00686d8e();
    /* 005eed80: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eed83: cmp dword ptr [ebp + 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eed87: je 0x5eedad */ if (fZ) goto L_005eedad;
L_005eed89:; BB(0x005eed89);
    /* 005eed89: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005eed8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eed8d: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 005eed8f: push 0x6d654c */ { u32 v = 0x6d654cu; r_esp -= 4; W32(r_esp, v); }
    /* 005eed94: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eed97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eed98: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x5eed9du); f_00686ecc();
    /* 005eed9d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eeda0: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eeda3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eeda4: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5eedaau); call_ind(t); }
    /* 005eedaa: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005eedad:; BB(0x005eedad);
    /* 005eedad: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eedb0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eedb1: ret  */ FN_RET(0x005eed70); r_esp += 4; return;
}

void f_005eedc0(void) /* sub_5EEDC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eedc0);
    /* 005eedc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eedc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005eedc3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eedc6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005eedc9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005eedcc: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 005eedd2: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005eedd9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005eede0: jmp 0x5eede8 */ goto L_005eede8;
L_005eede2:; BB(0x005eede2);
    /* 005eede2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eede5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005eede8:; BB(0x005eede8);
    /* 005eede8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005eedeb: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005eedee: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 005eedf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eedf3: je 0x5eee3d */ if (fZ) goto L_005eee3d;
L_005eedf5:; BB(0x005eedf5);
    /* 005eedf5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005eedf8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eedf9: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 005eedfc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eedfd: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005eee00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eee01: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 005eee04: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eee05: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eee08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eee09: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005eee0c: call 0x5eebf0 */ r_esp -= 4; W32(r_esp, 0x5eee11u); f_005eebf0();
    /* 005eee11: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005eee14: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eee17: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 005eee1a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eee1c: jne 0x5eee20 */ if (!fZ) goto L_005eee20;
L_005eee1e:; BB(0x005eee1e);
    /* 005eee1e: jmp 0x5eee3d */ goto L_005eee3d;
L_005eee20:; BB(0x005eee20);
    /* 005eee20: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005eee23: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eee26: cmp eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eee28: jle 0x5eee32 */ if ((fZ||fS!=fO)) goto L_005eee32;
L_005eee2a:; BB(0x005eee2a);
    /* 005eee2a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005eee2d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eee30: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
L_005eee32:; BB(0x005eee32);
    /* 005eee32: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eee35: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eee38: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005eee3b: jmp 0x5eede2 */ goto L_005eede2;
L_005eee3d:; BB(0x005eee3d);
    /* 005eee3d: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eee41: jne 0x5eee4a */ if (!fZ) goto L_005eee4a;
L_005eee43:; BB(0x005eee43);
    /* 005eee43: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_005eee4a:; BB(0x005eee4a);
    /* 005eee4a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005eee4d: movsx edx, word ptr [ecx + 0x96] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x96u));
    /* 005eee54: imul edx, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005eee58: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005eee5b: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 005eee5d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005eee60: movzx edx, word ptr [ecx + 0x90] */ r_edx = (u32)R16((u32)(r_ecx+0x90u));
    /* 005eee67: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005eee6a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005eee6c: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005eee6e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005eee71: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 005eee73: mov esp, ebp */ r_esp = r_ebp;
    /* 005eee75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eee76: ret 0xc */ FN_RET(0x005eedc0); r_esp += 16; return;
}

void f_005eee80(void) /* sub_5EEE80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eee80);
    /* 005eee80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eee81: mov ebp, esp */ r_ebp = r_esp;
    /* 005eee83: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eee86: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005eee89: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005eee90: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005eee97: jmp 0x5eee9f */ goto L_005eee9f;
L_005eee99:; BB(0x005eee99);
    /* 005eee99: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eee9c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005eee9f:; BB(0x005eee9f);
    /* 005eee9f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005eeea2: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 005eeea5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eeea8: movzx ecx, byte ptr [edx + eax] */ r_ecx = (u32)R8((u32)(r_edx+r_eax));
    /* 005eeeac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eeeae: je 0x5eeee8 */ if (fZ) goto L_005eeee8;
L_005eeeb0:; BB(0x005eeeb0);
    /* 005eeeb0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eeeb2: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 005eeeb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eeeb6: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005eeeb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eeeba: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 005eeebd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eeebe: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eeec1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005eeec2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005eeec5: call 0x5eebf0 */ r_esp -= 4; W32(r_esp, 0x5eeecau); f_005eebf0();
    /* 005eeeca: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005eeecd: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 005eeed0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005eeed3: movzx eax, byte ptr [ecx + edx] */ r_eax = (u32)R8((u32)(r_ecx+r_edx));
    /* 005eeed7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eeed9: jne 0x5eeedd */ if (!fZ) goto L_005eeedd;
L_005eeedb:; BB(0x005eeedb);
    /* 005eeedb: jmp 0x5eeee8 */ goto L_005eeee8;
L_005eeedd:; BB(0x005eeedd);
    /* 005eeedd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eeee0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eeee3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eeee6: jmp 0x5eee99 */ goto L_005eee99;
L_005eeee8:; BB(0x005eeee8);
    /* 005eeee8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eeeeb: mov esp, ebp */ r_esp = r_ebp;
    /* 005eeeed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eeeee: ret  */ FN_RET(0x005eee80); r_esp += 4; return;
}

void f_005eeef0(void) /* sub_5EEEF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eeef0);
    /* 005eeef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eeef1: mov ebp, esp */ r_ebp = r_esp;
    /* 005eeef3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eeef6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005eeef9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005eef00: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005eef07: jmp 0x5eef12 */ goto L_005eef12;
L_005eef09:; BB(0x005eef09);
    /* 005eef09: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eef0c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eef0f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005eef12:; BB(0x005eef12);
    /* 005eef12: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eef15: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 005eef18: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eef1b: movzx ecx, byte ptr [edx + eax] */ r_ecx = (u32)R8((u32)(r_edx+r_eax));
    /* 005eef1f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eef21: je 0x5eef40 */ if (fZ) goto L_005eef40;
L_005eef23:; BB(0x005eef23);
    /* 005eef23: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eef26: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005eef29: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eef2c: movzx edx, byte ptr [eax + ecx] */ r_edx = (u32)R8((u32)(r_eax+r_ecx));
    /* 005eef30: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eef33: jne 0x5eef3e */ if (!fZ) goto L_005eef3e;
L_005eef35:; BB(0x005eef35);
    /* 005eef35: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005eef38: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eef3b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005eef3e:; BB(0x005eef3e);
    /* 005eef3e: jmp 0x5eef09 */ goto L_005eef09;
L_005eef40:; BB(0x005eef40);
    /* 005eef40: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eef43: movsx eax, word ptr [ecx + 0x96] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x96u));
    /* 005eef4a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eef4d: movsx ecx, word ptr [edx + 0x96] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x96u));
    /* 005eef54: imul ecx, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005eef58: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eef5a: mov esp, ebp */ r_esp = r_ebp;
    /* 005eef5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eef5d: ret  */ FN_RET(0x005eeef0); r_esp += 4; return;
}

void f_005eef60(void) /* sub_5EEF60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eef60);
    /* 005eef60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eef61: mov ebp, esp */ r_ebp = r_esp;
    /* 005eef63: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005eef66: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005eef69: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005eef70: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005eef77: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005eef7e: jmp 0x5eef89 */ goto L_005eef89;
L_005eef80:; BB(0x005eef80);
    /* 005eef80: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eef83: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eef86: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005eef89:; BB(0x005eef89);
    /* 005eef89: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eef8c: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 005eef8f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eef92: movzx ecx, byte ptr [edx + eax] */ r_ecx = (u32)R8((u32)(r_edx+r_eax));
    /* 005eef96: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eef98: je 0x5ef038 */ if (fZ) goto L_005ef038;
L_005eef9e:; BB(0x005eef9e);
    /* 005eef9e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eefa1: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005eefa4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eefa7: movzx edx, byte ptr [eax + ecx] */ r_edx = (u32)R8((u32)(r_eax+r_ecx));
    /* 005eefab: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eefae: jne 0x5eefc7 */ if (!fZ) goto L_005eefc7;
L_005eefb0:; BB(0x005eefb0);
    /* 005eefb0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eefb3: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eefb6: jle 0x5eefbe */ if ((fZ||fS!=fO)) goto L_005eefbe;
L_005eefb8:; BB(0x005eefb8);
    /* 005eefb8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eefbb: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005eefbe:; BB(0x005eefbe);
    /* 005eefbe: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005eefc5: jmp 0x5eef80 */ goto L_005eef80;
L_005eefc7:; BB(0x005eefc7);
    /* 005eefc7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eefca: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005eefcd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eefd0: movzx edx, byte ptr [eax + ecx + 1] */ r_edx = (u32)R8((u32)(r_eax+r_ecx+0x1u));
    /* 005eefd5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eefd7: je 0x5eefec */ if (fZ) goto L_005eefec;
L_005eefd9:; BB(0x005eefd9);
    /* 005eefd9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eefdc: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 005eefdf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eefe2: movzx eax, byte ptr [ecx + edx + 1] */ r_eax = (u32)R8((u32)(r_ecx+r_edx+0x1u));
    /* 005eefe7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005eefea: jmp 0x5eeff3 */ goto L_005eeff3;
L_005eefec:; BB(0x005eefec);
    /* 005eefec: mov dword ptr [ebp - 0x14], 0xffffffff */ W32((u32)(r_ebp+0xffffffecu), 0xffffffffu);
L_005eeff3:; BB(0x005eeff3);
    /* 005eeff3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005eeff6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eeff7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eeffa: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005eeffd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ef000: mov dl, byte ptr [eax + ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx))) & 0xffu);
    /* 005ef003: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef004: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ef007: call 0x5ee950 */ r_esp -= 4; W32(r_esp, 0x5ef00cu); f_005ee950();
    /* 005ef00c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ef00f: movzx edx, word ptr [ecx + 0x90] */ r_edx = (u32)R16((u32)(r_ecx+0x90u));
    /* 005ef016: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ef018: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ef01b: movsx edx, word ptr [ecx + 0x94] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x94u));
    /* 005ef022: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ef024: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ef027: add eax, dword ptr [ecx + 0xa8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xa8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ef02d: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ef030: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ef033: jmp 0x5eef80 */ goto L_005eef80;
L_005ef038:; BB(0x005ef038);
    /* 005ef038: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ef03b: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ef03e: jle 0x5ef046 */ if ((fZ||fS!=fO)) goto L_005ef046;
L_005ef040:; BB(0x005ef040);
    /* 005ef040: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ef043: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005ef046:; BB(0x005ef046);
    /* 005ef046: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ef049: mov esp, ebp */ r_esp = r_ebp;
    /* 005ef04b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ef04c: ret  */ FN_RET(0x005eef60); r_esp += 4; return;
}

