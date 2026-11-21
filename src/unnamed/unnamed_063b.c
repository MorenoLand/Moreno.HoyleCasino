#include "protos.h"

void f_0063b2d0(void) /* sub_63B2D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063b2d0);
    /* 0063b2d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063b2d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0063b2d3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063b2d6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0063b2d9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0063b2dc: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0063b2df: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0063b2e2: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b2e6: je 0x63b2fb */ if (fZ) goto L_0063b2fb;
L_0063b2e8:; BB(0x0063b2e8);
    /* 0063b2e8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063b2eb: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0063b2ee: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0063b2f1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b2f3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063b2f6: call 0x646c20 */ r_esp -= 4; W32(r_esp, 0x63b2fbu); f_00646c20();
L_0063b2fb:; BB(0x0063b2fb);
    /* 0063b2fb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063b2fe: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0063b301: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0063b304: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063b307: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0063b30a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b30e: je 0x63b323 */ if (fZ) goto L_0063b323;
L_0063b310:; BB(0x0063b310);
    /* 0063b310: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b312: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063b315: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063b317: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063b31a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063b31c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63b31eu); call_ind(t); }
    /* 0063b31e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0063b321: jmp 0x63b32a */ goto L_0063b32a;
L_0063b323:; BB(0x0063b323);
    /* 0063b323: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_0063b32a:; BB(0x0063b32a);
    /* 0063b32a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063b32d: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 0063b334: mov esp, ebp */ r_esp = r_ebp;
    /* 0063b336: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063b337: ret  */ FN_RET(0x0063b2d0); r_esp += 4; return;
}

void f_0063b340(void) /* sub_63B340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063b340);
    /* 0063b340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063b341: mov ebp, esp */ r_ebp = r_esp;
    /* 0063b343: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063b346: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0063b349: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063b34c: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0063b34f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0063b352: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b356: jne 0x63b35c */ if (!fZ) goto L_0063b35c;
L_0063b358:; BB(0x0063b358);
    /* 0063b358: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0063b35a: jmp 0x63b36d */ goto L_0063b36d;
L_0063b35c:; BB(0x0063b35c);
    /* 0063b35c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063b35f: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0063b362: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0063b365: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063b368: call 0x6480d0 */ r_esp -= 4; W32(r_esp, 0x63b36du); f_006480d0();
L_0063b36d:; BB(0x0063b36d);
    /* 0063b36d: mov esp, ebp */ r_esp = r_ebp;
    /* 0063b36f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063b370: ret  */ FN_RET(0x0063b340); r_esp += 4; return;
}

void f_0063b380(void) /* sub_63B380 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063b380);
    /* 0063b380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063b381: mov ebp, esp */ r_ebp = r_esp;
    /* 0063b383: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063b386: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0063b389: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063b38c: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0063b38f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0063b392: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b396: jne 0x63b39c */ if (!fZ) goto L_0063b39c;
L_0063b398:; BB(0x0063b398);
    /* 0063b398: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0063b39a: jmp 0x63b3ad */ goto L_0063b3ad;
L_0063b39c:; BB(0x0063b39c);
    /* 0063b39c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063b39f: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0063b3a2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0063b3a5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063b3a8: call 0x648140 */ r_esp -= 4; W32(r_esp, 0x63b3adu); f_00648140();
L_0063b3ad:; BB(0x0063b3ad);
    /* 0063b3ad: mov esp, ebp */ r_esp = r_ebp;
    /* 0063b3af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063b3b0: ret  */ FN_RET(0x0063b380); r_esp += 4; return;
}

void f_0063b490(void) /* sub_63B490 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063b490);
    /* 0063b490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063b491: mov ebp, esp */ r_ebp = r_esp;
    /* 0063b493: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063b496: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0063b49b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063b49d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0063b4a0: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0063b4a3: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0063b4a6: cmp dword ptr [eax + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b4aa: je 0x63b4b9 */ if (fZ) goto L_0063b4b9;
L_0063b4ac:; BB(0x0063b4ac);
    /* 0063b4ac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b4ae: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0063b4b1: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0063b4b4: call 0x648270 */ r_esp -= 4; W32(r_esp, 0x63b4b9u); f_00648270();
L_0063b4b9:; BB(0x0063b4b9);
    /* 0063b4b9: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0063b4bc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063b4bf: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0063b4c2: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0063b4c5: cmp dword ptr [ecx + 8], -1 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b4c9: jne 0x63b4cd */ if (!fZ) goto L_0063b4cd;
L_0063b4cb:; BB(0x0063b4cb);
    /* 0063b4cb: jmp 0x63b506 */ goto L_0063b506;
L_0063b4cd:; BB(0x0063b4cd);
    /* 0063b4cd: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0063b4d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b4d1: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0063b4d4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0063b4d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b4d8: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0063b4de: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063b4e0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063b4e6: mov edx, dword ptr [eax + 0x3b4] */ r_edx = R32((u32)(r_eax+0x3b4u));
    /* 0063b4ec: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63b4eeu); call_ind(t); }
    /* 0063b4ee: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0063b4f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b4f2: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0063b4f5: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63b4fau); f_0063aac0();
    /* 0063b4fa: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063b4fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b4fe: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x63b503u); f_00686d8e();
    /* 0063b503: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063b506:; BB(0x0063b506);
    /* 0063b506: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063b509: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063b50b: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x63b510u); f_00686d72();
    /* 0063b510: mov esp, ebp */ r_esp = r_ebp;
    /* 0063b512: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063b513: ret 4 */ FN_RET(0x0063b490); r_esp += 8; return;
}

void f_0063b520(void) /* sub_63B520 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063b520);
    /* 0063b520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063b521: mov ebp, esp */ r_ebp = r_esp;
    /* 0063b523: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b524: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063b525: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0063b528: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063b52b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63b530u); f_0063aac0();
    /* 0063b530: mov esi, eax */ r_esi = r_eax;
    /* 0063b532: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063b535: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b536: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063b53c: call 0x639590 */ r_esp -= 4; W32(r_esp, 0x63b541u); f_00639590();
    /* 0063b541: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 0063b544: mov byte ptr [esi + eax + 0x15d], cl */ W8((u32)(r_esi+r_eax+0x15du), (u8)r_ecx);
    /* 0063b54b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063b54c: mov esp, ebp */ r_esp = r_ebp;
    /* 0063b54e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063b54f: ret 8 */ FN_RET(0x0063b520); r_esp += 12; return;
}

