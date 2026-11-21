#include "protos.h"

void f_00406360(void) /* BaccaratSettingsHelpText::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406360);
    /* 00406360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406361: mov ebp, esp */ r_ebp = r_esp;
    /* 00406363: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00406366: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00406369: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00406370: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406377: jne 0x40637e */ if (!fZ) goto L_0040637e;
L_00406379:; BB(0x00406379);
    /* 00406379: jmp 0x406476 */ goto L_00406476;
L_0040637e:; BB(0x0040637e);
    /* 0040637e: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00406380: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00406386: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x40638bu); f_005fb350();
    /* 0040638b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0040638e: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00406395: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00406397: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0040639d: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x4063a2u); f_005fb350();
    /* 004063a2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004063a5: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 004063ac: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 004063b3: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004063ba: jmp 0x4063c5 */ goto L_004063c5;
L_004063bc:; BB(0x004063bc);
    /* 004063bc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004063bf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004063c2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004063c5:; BB(0x004063c5);
    /* 004063c5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004063c8: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004063cb: jge 0x406408 */ if ((fS==fO)) goto L_00406408;
L_004063cd:; BB(0x004063cd);
    /* 004063cd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004063d0: cmp dword ptr [ebp + edx*8 - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+r_edx*8+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004063d5: je 0x406406 */ if (fZ) goto L_00406406;
L_004063d7:; BB(0x004063d7);
    /* 004063d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004063da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004063db: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004063de: mov edx, dword ptr [ebp + ecx*8 - 0x1c] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffffe4u));
    /* 004063e2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004063e5: mov ecx, dword ptr [ebp + eax*8 - 0x1c] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffe4u));
    /* 004063e9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004063eb: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 004063f1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4063f3u); call_ind(t); }
    /* 004063f3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004063f6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004063f8: je 0x406406 */ if (fZ) goto L_00406406;
L_004063fa:; BB(0x004063fa);
    /* 004063fa: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004063fd: mov eax, dword ptr [ebp + edx*8 - 0x18] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffe8u));
    /* 00406401: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00406404: jmp 0x406408 */ goto L_00406408;
L_00406406:; BB(0x00406406);
    /* 00406406: jmp 0x4063bc */ goto L_004063bc;
L_00406408:; BB(0x00406408);
    /* 00406408: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040640c: jne 0x40642e */ if (!fZ) goto L_0040642e;
L_0040640e:; BB(0x0040640e);
    /* 0040640e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00406411: cmp dword ptr [ecx + 0x18], 3 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406415: jne 0x40642c */ if (!fZ) goto L_0040642c;
L_00406417:; BB(0x00406417);
    /* 00406417: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040641c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040641f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00406421: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00406424: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0040642a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40642cu); call_ind(t); }
L_0040642c:; BB(0x0040642c);
    /* 0040642c: jmp 0x406476 */ goto L_00406476;
L_0040642e:; BB(0x0040642e);
    /* 0040642e: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406432: jne 0x406452 */ if (!fZ) goto L_00406452;
L_00406434:; BB(0x00406434);
    /* 00406434: push 0x6b312c */ { u32 v = 0x6b312cu; r_esp -= 4; W32(r_esp, v); }
    /* 00406439: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x40643eu); f_00630f40();
    /* 0040643e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00406441: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406442: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00406445: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00406447: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040644a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00406450: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x406452u); call_ind(t); }
L_00406452:; BB(0x00406452);
    /* 00406452: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406456: jne 0x406476 */ if (!fZ) goto L_00406476;
L_00406458:; BB(0x00406458);
    /* 00406458: push 0x6b310c */ { u32 v = 0x6b310cu; r_esp -= 4; W32(r_esp, v); }
    /* 0040645d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x406462u); f_00630f40();
    /* 00406462: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00406465: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406466: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00406469: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0040646b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040646e: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00406474: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x406476u); call_ind(t); }
L_00406476:; BB(0x00406476);
    /* 00406476: mov esp, ebp */ r_esp = r_ebp;
    /* 00406478: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406479: ret 4 */ FN_RET(0x00406360); r_esp += 8; return;
}

void f_005ee5e0(void) /* BaccaratSettingsHelpText::vfunc45 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ee5e0);
    /* 005ee5e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ee5e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ee5e3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ee5e6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005ee5e9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ee5ec: cmp dword ptr [eax + 0x5c], 0 */ {  u32 a = R32((u32)(r_eax+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee5f0: je 0x5ee614 */ if (fZ) goto L_005ee614;
L_005ee5f2:; BB(0x005ee5f2);
    /* 005ee5f2: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee5f6: je 0x5ee614 */ if (fZ) goto L_005ee614;
L_005ee5f8:; BB(0x005ee5f8);
    /* 005ee5f8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ee5fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee5fc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ee5ff: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005ee602: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee603: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x5ee608u); f_00686ec0();
    /* 005ee608: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ee60b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee60d: jne 0x5ee614 */ if (!fZ) goto L_005ee614;
L_005ee60f:; BB(0x005ee60f);
    /* 005ee60f: jmp 0x5ee6ac */ goto L_005ee6ac;
L_005ee614:; BB(0x005ee614);
    /* 005ee614: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee618: je 0x5ee624 */ if (fZ) goto L_005ee624;
L_005ee61a:; BB(0x005ee61a);
    /* 005ee61a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ee61d: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 005ee620: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee622: jne 0x5ee631 */ if (!fZ) goto L_005ee631;
L_005ee624:; BB(0x005ee624);
    /* 005ee624: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ee627: mov dword ptr [eax + 0xa0], 0 */ W32((u32)(r_eax+0xa0u), 0x0u);
L_005ee631:; BB(0x005ee631);
    /* 005ee631: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ee634: cmp dword ptr [ecx + 0x5c], 0 */ {  u32 a = R32((u32)(r_ecx+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee638: je 0x5ee659 */ if (fZ) goto L_005ee659;
L_005ee63a:; BB(0x005ee63a);
    /* 005ee63a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ee63d: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005ee640: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005ee643: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ee646: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee647: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5ee64cu); f_00686cae();
    /* 005ee64c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ee64f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ee652: mov dword ptr [edx + 0x5c], 0 */ W32((u32)(r_edx+0x5cu), 0x0u);
L_005ee659:; BB(0x005ee659);
    /* 005ee659: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee65d: je 0x5ee69c */ if (fZ) goto L_005ee69c;
L_005ee65f:; BB(0x005ee65f);
    /* 005ee65f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ee662: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee663: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x5ee668u); f_00686ecc();
    /* 005ee668: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ee66b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ee66e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ee671: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ee674: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee675: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5ee67au); f_00686d82();
    /* 005ee67a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ee67d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ee680: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ee683: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ee686: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 005ee689: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ee68c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee68d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ee690: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005ee693: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee694: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5ee699u); f_00686d8e();
    /* 005ee699: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ee69c:; BB(0x005ee69c);
    /* 005ee69c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ee69f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ee6a1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ee6a4: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 005ee6aa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ee6acu); call_ind(t); }
L_005ee6ac:; BB(0x005ee6ac);
    /* 005ee6ac: mov esp, ebp */ r_esp = r_ebp;
    /* 005ee6ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ee6af: ret 4 */ FN_RET(0x005ee5e0); r_esp += 8; return;
}

void f_005ee6c0(void) /* BaccaratSettingsHelpText::vfunc44 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ee6c0);
    /* 005ee6c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ee6c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ee6c3: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ee6c6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005ee6cb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ee6cd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ee6d0: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 005ee6d3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ee6d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee6d7: push 0x6d6548 */ { u32 v = 0x6d6548u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee6dc: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 005ee6df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee6e0: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5ee6e6u); call_ind(t); }
    /* 005ee6e6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ee6e9: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 005ee6ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee6ed: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ee6f0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ee6f2: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ee6f5: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005ee6fb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ee6fdu); call_ind(t); }
    /* 005ee6fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ee700: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ee702: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5ee707u); f_00686d72();
    /* 005ee707: mov esp, ebp */ r_esp = r_ebp;
    /* 005ee709: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ee70a: ret 4 */ FN_RET(0x005ee6c0); r_esp += 8; return;
}

void f_005ee890(void) /* BaccaratSettingsHelpText::vfunc46 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ee890);
    /* 005ee890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ee891: mov ebp, esp */ r_ebp = r_esp;
    /* 005ee893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee894: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ee897: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ee89a: cmp dword ptr [eax + 0x5c], 0 */ {  u32 a = R32((u32)(r_eax+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee89e: je 0x5ee8a8 */ if (fZ) goto L_005ee8a8;
L_005ee8a0:; BB(0x005ee8a0);
    /* 005ee8a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ee8a3: mov eax, dword ptr [ecx + 0x5c] */ r_eax = R32((u32)(r_ecx+0x5cu));
    /* 005ee8a6: jmp 0x5ee8ad */ goto L_005ee8ad;
L_005ee8a8:; BB(0x005ee8a8);
    /* 005ee8a8: mov eax, 0x6b27f8 */ r_eax = 0x6b27f8u;
L_005ee8ad:; BB(0x005ee8ad);
    /* 005ee8ad: mov esp, ebp */ r_esp = r_ebp;
    /* 005ee8af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ee8b0: ret  */ FN_RET(0x005ee890); r_esp += 4; return;
}

void f_005ef3e0(void) /* BaccaratSettingsHelpText::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ef3e0);
    /* 005ef3e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ef3e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ef3e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef3e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ef3e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ef3ea: call 0x5f5010 */ r_esp -= 4; W32(r_esp, 0x5ef3efu); f_005f5010();
    /* 005ef3ef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ef3f2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ef3f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ef3f7: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 005ef3fd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ef3ffu); call_ind(t); }
    /* 005ef3ff: mov esp, ebp */ r_esp = r_ebp;
    /* 005ef401: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ef402: ret  */ FN_RET(0x005ef3e0); r_esp += 4; return;
}

void f_005ef8e0(void) /* BaccaratSettingsHelpText::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ef8e0);
    /* 005ef8e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ef8e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ef8e3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ef8e6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ef8e9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ef8ec: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005ef8ef: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005ef8f2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ef8f5: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x5ef8fau); f_005f54c0();
    /* 005ef8fa: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005ef8fd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef8ff: jne 0x5ef913 */ if (!fZ) goto L_005ef913;
L_005ef901:; BB(0x005ef901);
    /* 005ef901: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ef904: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005ef907: call 0x5f88f0 */ r_esp -= 4; W32(r_esp, 0x5ef90cu); f_005f88f0();
    /* 005ef90c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005ef90f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef911: je 0x5ef91a */ if (fZ) goto L_005ef91a;
L_005ef913:; BB(0x005ef913);
    /* 005ef913: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005ef915: jmp 0x5efa0e */ goto L_005efa0e;
L_005ef91a:; BB(0x005ef91a);
    /* 005ef91a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ef91d: mov eax, dword ptr [edx + 0x1a4] */ r_eax = R32((u32)(r_edx+0x1a4u));
    /* 005ef923: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005ef926: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef92a: je 0x5ef93a */ if (fZ) goto L_005ef93a;
L_005ef92c:; BB(0x005ef92c);
    /* 005ef92c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ef92f: mov edx, dword ptr [ecx + 0x1a4] */ r_edx = R32((u32)(r_ecx+0x1a4u));
    /* 005ef935: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005ef938: jmp 0x5ef91a */ goto L_005ef91a;
L_005ef93a:; BB(0x005ef93a);
    /* 005ef93a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ef93d: mov cl, byte ptr [eax + 0x1b0] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x1b0u))) & 0xffu);
    /* 005ef943: mov byte ptr [ebp - 0x11], cl */ W8((u32)(r_ebp+0xffffffefu), (u8)r_ecx);
    /* 005ef946: movzx edx, byte ptr [ebp - 0x11] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 005ef94a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef94c: je 0x5ef960 */ if (fZ) goto L_005ef960;
L_005ef94e:; BB(0x005ef94e);
    /* 005ef94e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ef951: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ef954: cmp ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef957: je 0x5ef960 */ if (fZ) goto L_005ef960;
L_005ef959:; BB(0x005ef959);
    /* 005ef959: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005ef95b: jmp 0x5efa0e */ goto L_005efa0e;
L_005ef960:; BB(0x005ef960);
    /* 005ef960: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ef963: mov al, byte ptr [edx + 0x1b0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x1b0u))) & 0xffu);
    /* 005ef969: mov byte ptr [ebp - 0x12], al */ W8((u32)(r_ebp+0xffffffeeu), (u8)r_eax);
    /* 005ef96c: movzx ecx, byte ptr [ebp - 0x12] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffeeu));
    /* 005ef970: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef972: jne 0x5ef9f9 */ if (!fZ) goto L_005ef9f9;
L_005ef978:; BB(0x005ef978);
    /* 005ef978: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ef97b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ef97e: cmp eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef981: jne 0x5ef98a */ if (!fZ) goto L_005ef98a;
L_005ef983:; BB(0x005ef983);
    /* 005ef983: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005ef985: jmp 0x5efa0e */ goto L_005efa0e;
L_005ef98a:; BB(0x005ef98a);
    /* 005ef98a: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005ef990: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ef993: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5ef998u); f_0060c9a0();
    /* 005ef998: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ef99b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ef99e: jmp 0x5ef9a9 */ goto L_005ef9a9;
L_005ef9a0:; BB(0x005ef9a0);
    /* 005ef9a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ef9a3: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005ef9a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005ef9a9:; BB(0x005ef9a9);
    /* 005ef9a9: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ef9ad: jl 0x5ef9f9 */ if ((fS!=fO)) goto L_005ef9f9;
L_005ef9af:; BB(0x005ef9af);
    /* 005ef9af: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ef9b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ef9b3: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005ef9b9: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ef9bc: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5ef9c1u); f_0060ca40();
    /* 005ef9c1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005ef9c4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ef9c7: mov ecx, dword ptr [eax + 0x1a8] */ r_ecx = R32((u32)(r_eax+0x1a8u));
    /* 005ef9cd: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005ef9d0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ef9d3: mov eax, dword ptr [edx + 0x1a8] */ r_eax = R32((u32)(r_edx+0x1a8u));
    /* 005ef9d9: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005ef9dc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ef9df: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef9e2: je 0x5ef9e6 */ if (fZ) goto L_005ef9e6;
L_005ef9e4:; BB(0x005ef9e4);
    /* 005ef9e4: jmp 0x5ef9a0 */ goto L_005ef9a0;
L_005ef9e6:; BB(0x005ef9e6);
    /* 005ef9e6: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ef9e9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ef9ec: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ef9ef: je 0x5ef9f5 */ if (fZ) goto L_005ef9f5;
L_005ef9f1:; BB(0x005ef9f1);
    /* 005ef9f1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005ef9f3: jmp 0x5efa0e */ goto L_005efa0e;
L_005ef9f5:; BB(0x005ef9f5);
    /* 005ef9f5: jmp 0x5ef9f9 */ goto L_005ef9f9;
L_005ef9f9:; BB(0x005ef9f9);
    /* 005ef9f9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ef9fc: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005ef9ff: call 0x5f95c0 */ r_esp -= 4; W32(r_esp, 0x5efa04u); f_005f95c0();
    /* 005efa04: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005efa06: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005efa09: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005efa0c: mov al, dl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_edx) & 0xffu);
L_005efa0e:; BB(0x005efa0e);
    /* 005efa0e: mov esp, ebp */ r_esp = r_ebp;
    /* 005efa10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005efa11: ret  */ FN_RET(0x005ef8e0); r_esp += 4; return;
}

void f_005efd20(void) /* BaccaratSettingsHelpText::vfunc47 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005efd20);
    /* 005efd20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005efd21: mov ebp, esp */ r_ebp = r_esp;
    /* 005efd23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005efd24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005efd27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005efd2a: cmp dword ptr [eax + 0x5c], 0 */ {  u32 a = R32((u32)(r_eax+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005efd2e: je 0x5efd54 */ if (fZ) goto L_005efd54;
L_005efd30:; BB(0x005efd30);
    /* 005efd30: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005efd33: cmp dword ptr [ecx + 0x28], 0 */ {  u32 a = R32((u32)(r_ecx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005efd37: je 0x5efd54 */ if (fZ) goto L_005efd54;
L_005efd39:; BB(0x005efd39);
    /* 005efd39: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005efd3c: cmp dword ptr [edx + 0xb0], 0 */ {  u32 a = R32((u32)(r_edx+0xb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005efd43: je 0x5efd54 */ if (fZ) goto L_005efd54;
L_005efd45:; BB(0x005efd45);
    /* 005efd45: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005efd48: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x5efd4du); f_005f54c0();
    /* 005efd4d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005efd50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005efd52: je 0x5efd58 */ if (fZ) goto L_005efd58;
L_005efd54:; BB(0x005efd54);
    /* 005efd54: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005efd56: jmp 0x5efd5a */ goto L_005efd5a;
L_005efd58:; BB(0x005efd58);
    /* 005efd58: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005efd5a:; BB(0x005efd5a);
    /* 005efd5a: mov esp, ebp */ r_esp = r_ebp;
    /* 005efd5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005efd5d: ret  */ FN_RET(0x005efd20); r_esp += 4; return;
}

void f_005efd60(void) /* BaccaratSettingsHelpText::vfunc39 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005efd60);
    /* 005efd60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005efd61: mov ebp, esp */ r_ebp = r_esp;
    /* 005efd63: sub esp, 0xf0 */ {  u32 a = r_esp; u32 b = 0xf0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005efd69: mov dword ptr [ebp - 0xec], ecx */ W32((u32)(r_ebp+0xffffff14u), r_ecx);
    /* 005efd6f: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 005efd79: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 005efd80: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 005efd87: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 005efd8e: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005efd95: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
    /* 005efd9f: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005efda6: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
    /* 005efdb0: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
    /* 005efdba: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 005efdc4: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005efdcb: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005efdd2: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005efdd8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005efdda: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005efde0: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 005efde6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5efde8u); call_ind(t); }
    /* 005efde8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005efdeb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005efded: jne 0x5efdf4 */ if (!fZ) goto L_005efdf4;
L_005efdef:; BB(0x005efdef);
    /* 005efdef: jmp 0x5f0a2a */ goto L_005f0a2a;
L_005efdf4:; BB(0x005efdf4);
    /* 005efdf4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005efdf7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005efdf8: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005efdfe: call 0x5f6820 */ r_esp -= 4; W32(r_esp, 0x5efe03u); f_005f6820();
    /* 005efe03: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005efe09: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005efe0c: mov dword ptr [ebp - 0xd0], ecx */ W32((u32)(r_ebp+0xffffff30u), r_ecx);
    /* 005efe12: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005efe18: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005efe1b: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 005efe21: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005efe27: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005efe2a: mov dword ptr [ebp - 0xc8], edx */ W32((u32)(r_ebp+0xffffff38u), r_edx);
    /* 005efe30: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005efe36: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005efe39: mov dword ptr [ebp - 0xc4], ecx */ W32((u32)(r_ebp+0xffffff3cu), r_ecx);
    /* 005efe3f: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 005efe45: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 005efe4b: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 005efe51: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 005efe57: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005efe5d: mov dword ptr [ebp - 0xa8], ecx */ W32((u32)(r_ebp+0xffffff58u), r_ecx);
    /* 005efe63: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 005efe69: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 005efe6f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005efe72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005efe73: lea ecx, [ebp - 0xb0] */ r_ecx = (u32)(r_ebp+0xffffff50u);
    /* 005efe79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005efe7a: lea edx, [ebp - 0xb0] */ r_edx = (u32)(r_ebp+0xffffff50u);
    /* 005efe80: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005efe81: call 0x5ec3a0 */ r_esp -= 4; W32(r_esp, 0x5efe86u); f_005ec3a0();
    /* 005efe86: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005efe89: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 005efe8f: cmp eax, dword ptr [ebp - 0xa8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff58u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005efe95: jl 0x5efea0 */ if ((fS!=fO)) goto L_005efea0;
L_005efe97:; BB(0x005efe97);
    /* 005efe97: mov byte ptr [ebp - 0xd1], 1 */ W8((u32)(r_ebp+0xffffff2fu), 0x1u);
    /* 005efe9e: jmp 0x5efebe */ goto L_005efebe;
L_005efea0:; BB(0x005efea0);
    /* 005efea0: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 005efea6: cmp ecx, dword ptr [ebp - 0xa4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff5cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005efeac: jl 0x5efeb7 */ if ((fS!=fO)) goto L_005efeb7;
L_005efeae:; BB(0x005efeae);
    /* 005efeae: mov byte ptr [ebp - 0xd1], 1 */ W8((u32)(r_ebp+0xffffff2fu), 0x1u);
    /* 005efeb5: jmp 0x5efebe */ goto L_005efebe;
L_005efeb7:; BB(0x005efeb7);
    /* 005efeb7: mov byte ptr [ebp - 0xd1], 0 */ W8((u32)(r_ebp+0xffffff2fu), 0x0u);
L_005efebe:; BB(0x005efebe);
    /* 005efebe: movzx edx, byte ptr [ebp - 0xd1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffff2fu));
    /* 005efec5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005efec7: je 0x5efece */ if (fZ) goto L_005efece;
L_005efec9:; BB(0x005efec9);
    /* 005efec9: jmp 0x5f0a2a */ goto L_005f0a2a;
L_005efece:; BB(0x005efece);
    /* 005efece: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 005efed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005efed2: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 005efed5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005efed6: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005efedc: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005efedf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005efee0: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005efee6: call 0x5eedc0 */ r_esp -= 4; W32(r_esp, 0x5efeebu); f_005eedc0();
    /* 005efeeb: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005efef1: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 005efef4: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 005efef7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005efef9: je 0x5eff82 */ if (fZ) goto L_005eff82;
L_005efeff:; BB(0x005efeff);
    /* 005efeff: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005eff05: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5eff0au); f_005f5590();
    /* 005eff0a: cmp dword ptr [ebp - 0x50], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eff0d: jg 0x5eff1f */ if ((!fZ&&fS==fO)) goto L_005eff1f;
L_005eff0f:; BB(0x005eff0f);
    /* 005eff0f: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005eff15: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5eff1au); f_005f5550();
    /* 005eff1a: cmp dword ptr [ebp - 0x3c], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eff1d: jle 0x5eff82 */ if ((fZ||fS!=fO)) goto L_005eff82;
L_005eff1f:; BB(0x005eff1f);
    /* 005eff1f: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005eff25: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5eff2au); f_005f5590();
    /* 005eff2a: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005eff30: movsx edx, word ptr [ecx + 0x96] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x96u));
    /* 005eff37: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005eff39: cmp dword ptr [ebp - 0x50], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eff3c: jl 0x5eff67 */ if ((fS!=fO)) goto L_005eff67;
L_005eff3e:; BB(0x005eff3e);
    /* 005eff3e: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005eff44: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5eff49u); f_005f5590();
    /* 005eff49: cmp dword ptr [ebp - 0x50], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eff4c: jle 0x5eff65 */ if ((fZ||fS!=fO)) goto L_005eff65;
L_005eff4e:; BB(0x005eff4e);
    /* 005eff4e: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005eff54: movsx ecx, word ptr [eax + 0x96] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x96u));
    /* 005eff5b: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005eff5e: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005eff60: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 005eff63: jmp 0x5eff3e */ goto L_005eff3e;
L_005eff65:; BB(0x005eff65);
    /* 005eff65: jmp 0x5eff82 */ goto L_005eff82;
L_005eff67:; BB(0x005eff67);
    /* 005eff67: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005eff6d: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5eff72u); f_005f5590();
    /* 005eff72: cmp dword ptr [ebp - 0x50], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eff75: jle 0x5eff82 */ if ((fZ||fS!=fO)) goto L_005eff82;
L_005eff77:; BB(0x005eff77);
    /* 005eff77: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005eff7a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005eff7d: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005eff80: jmp 0x5eff67 */ goto L_005eff67;
L_005eff82:; BB(0x005eff82);
    /* 005eff82: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005eff88: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 005eff8b: and edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005eff8e: je 0x5eff97 */ if (fZ) goto L_005eff97;
L_005eff90:; BB(0x005eff90);
    /* 005eff90: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005eff97:; BB(0x005eff97);
    /* 005eff97: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005eff9d: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 005effa0: and ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005effa3: je 0x5effb4 */ if (fZ) goto L_005effb4;
L_005effa5:; BB(0x005effa5);
    /* 005effa5: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005effab: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005effae: sub eax, dword ptr [ebp - 0x50] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005effb1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_005effb4:; BB(0x005effb4);
    /* 005effb4: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005effba: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 005effbd: and edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005effc0: je 0x5effd6 */ if (fZ) goto L_005effd6;
L_005effc2:; BB(0x005effc2);
    /* 005effc2: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005effc8: mov eax, dword ptr [eax + 0x6c] */ r_eax = R32((u32)(r_eax+0x6cu));
    /* 005effcb: sub eax, dword ptr [ebp - 0x50] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005effce: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005effcf: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005effd1: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005effd3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_005effd6:; BB(0x005effd6);
    /* 005effd6: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005effdc: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005effdf: add edx, dword ptr [ecx + 0x78] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x78u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005effe2: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005effe5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005effe8: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005effeb: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005efff2: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005efff9: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005effff: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5f0004u); f_005f5550();
    /* 005f0004: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005f0007: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f000d: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5f0012u); f_005f5590();
    /* 005f0012: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f0015: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005f001c: jmp 0x5f0024 */ goto L_005f0024;
L_005f001e:; BB(0x005f001e);
    /* 005f001e: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005f0021: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
L_005f0024:; BB(0x005f0024);
    /* 005f0024: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f002a: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005f002d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005f0030: movzx edx, byte ptr [eax + ecx] */ r_edx = (u32)R8((u32)(r_eax+r_ecx));
    /* 005f0034: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0036: je 0x5f0838 */ if (fZ) goto L_005f0838;
L_005f003c:; BB(0x005f003c);
    /* 005f003c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f003e: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 005f0041: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0042: lea ecx, [ebp - 0x74] */ r_ecx = (u32)(r_ebp+0xffffff8cu);
    /* 005f0045: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0046: lea edx, [ebp - 0x78] */ r_edx = (u32)(r_ebp+0xffffff88u);
    /* 005f0049: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f004a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005f004d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f004e: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0054: call 0x5eebf0 */ r_esp -= 4; W32(r_esp, 0x5f0059u); f_005eebf0();
    /* 005f0059: cmp dword ptr [ebp - 0xb4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f0060: jle 0x5f00a6 */ if ((fZ||fS!=fO)) goto L_005f00a6;
L_005f0062:; BB(0x005f0062);
    /* 005f0062: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 005f0065: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0066: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 005f0069: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f006a: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0070: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 005f0073: add ecx, dword ptr [ebp - 0x78] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff88u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f0076: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0077: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f007d: call 0x5eedc0 */ r_esp -= 4; W32(r_esp, 0x5f0082u); f_005eedc0();
    /* 005f0082: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0088: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5f008du); f_005f5590();
    /* 005f008d: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0093: movsx ecx, word ptr [edx + 0x96] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x96u));
    /* 005f009a: add ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f009d: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f009f: jge 0x5f00a6 */ if ((fS==fO)) goto L_005f00a6;
L_005f00a1:; BB(0x005f00a1);
    /* 005f00a1: jmp 0x5f0838 */ goto L_005f0838;
L_005f00a6:; BB(0x005f00a6);
    /* 005f00a6: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f00ac: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005f00af: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005f00b2: movzx edx, byte ptr [eax + ecx] */ r_edx = (u32)R8((u32)(r_eax+r_ecx));
    /* 005f00b6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f00b8: jne 0x5f00bf */ if (!fZ) goto L_005f00bf;
L_005f00ba:; BB(0x005f00ba);
    /* 005f00ba: jmp 0x5f0838 */ goto L_005f0838;
L_005f00bf:; BB(0x005f00bf);
    /* 005f00bf: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005f00c5: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 005f00c8: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005f00cb: je 0x5f0101 */ if (fZ) goto L_005f0101;
L_005f00cd:; BB(0x005f00cd);
    /* 005f00cd: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 005f00d7: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f00dd: movsx eax, word ptr [edx + 0x94] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x94u));
    /* 005f00e4: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f00ea: add eax, dword ptr [ecx + 0xa8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xa8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f00f0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005f00f1: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f00f3: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005f00f5: add eax, dword ptr [ebp - 0x88] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff78u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f00fb: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
L_005f0101:; BB(0x005f0101);
    /* 005f0101: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0107: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005f010a: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005f010d: je 0x5f0146 */ if (fZ) goto L_005f0146;
L_005f010f:; BB(0x005f010f);
    /* 005f010f: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0115: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 005f0118: sub edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f011b: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 005f0121: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0127: movsx ecx, word ptr [eax + 0x94] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x94u));
    /* 005f012e: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0134: add ecx, dword ptr [edx + 0xa8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xa8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f013a: add ecx, dword ptr [ebp - 0x88] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff78u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f0140: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
L_005f0146:; BB(0x005f0146);
    /* 005f0146: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005f014c: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 005f014f: and ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005f0152: je 0x5f016b */ if (fZ) goto L_005f016b;
L_005f0154:; BB(0x005f0154);
    /* 005f0154: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f015a: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 005f015d: sub eax, dword ptr [ebp - 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f0160: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005f0161: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f0163: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005f0165: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
L_005f016b:; BB(0x005f016b);
    /* 005f016b: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0171: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005f0177: add ecx, dword ptr [eax + 0x74] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x74u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f017a: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
L_005f0180:; BB(0x005f0180);
    /* 005f0180: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005f0186: cmp edx, dword ptr [ebp - 0x78] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff88u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f0189: jge 0x5f01c5 */ if ((fS==fO)) goto L_005f01c5;
L_005f018b:; BB(0x005f018b);
    /* 005f018b: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0191: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005f0197: cmp ecx, dword ptr [eax + 0xa0] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xa0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f019d: jne 0x5f01b4 */ if (!fZ) goto L_005f01b4;
L_005f019f:; BB(0x005f019f);
    /* 005f019f: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 005f01a2: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005f01a5: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005f01a8: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005f01ab: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f01ae: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
L_005f01b4:; BB(0x005f01b4);
    /* 005f01b4: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005f01ba: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f01bd: mov dword ptr [ebp - 0xb8], edx */ W32((u32)(r_ebp+0xffffff48u), r_edx);
    /* 005f01c3: jmp 0x5f0180 */ goto L_005f0180;
L_005f01c5:; BB(0x005f01c5);
    /* 005f01c5: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005f01c8: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 005f01ce: jmp 0x5f01df */ goto L_005f01df;
L_005f01d0:; BB(0x005f01d0);
    /* 005f01d0: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005f01d6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f01d9: mov dword ptr [ebp - 0xb8], ecx */ W32((u32)(r_ebp+0xffffff48u), r_ecx);
L_005f01df:; BB(0x005f01df);
    /* 005f01df: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005f01e5: cmp edx, dword ptr [ebp - 0x74] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff8cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f01e8: jge 0x5f07d1 */ if ((fS==fO)) goto L_005f07d1;
L_005f01ee:; BB(0x005f01ee);
    /* 005f01ee: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005f01f4: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 005f01f7: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005f01fd: mov al, byte ptr [ecx + edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx))) & 0xffu);
    /* 005f0200: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0201: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0207: call 0x5f0a30 */ r_esp -= 4; W32(r_esp, 0x5f020cu); f_005f0a30();
    /* 005f020c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005f020f: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 005f0215: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0217: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0219: lea edx, [ebp - 0x4c] */ r_edx = (u32)(r_ebp+0xffffffb4u);
    /* 005f021c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f021d: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x5f0222u); f_00686fa2();
    /* 005f0222: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f0225: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005f022b: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 005f022e: mov dword ptr [ebp - 0xf0], ecx */ W32((u32)(r_ebp+0xffffff10u), r_ecx);
    /* 005f0234: cmp dword ptr [ebp - 0xf0], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff10u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f023b: je 0x5f025c */ if (fZ) goto L_005f025c;
L_005f023d:; BB(0x005f023d);
    /* 005f023d: cmp dword ptr [ebp - 0xf0], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff10u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0244: je 0x5f02eb */ if (fZ) goto L_005f02eb;
L_005f024a:; BB(0x005f024a);
    /* 005f024a: cmp dword ptr [ebp - 0xf0], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0251: je 0x5f035d */ if (fZ) goto L_005f035d;
L_005f0257:; BB(0x005f0257);
    /* 005f0257: jmp 0x5f03f8 */ goto L_005f03f8;
L_005f025c:; BB(0x005f025c);
    /* 005f025c: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0262: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 005f0268: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f026e: movzx edx, word ptr [eax + ecx*8 + 2] */ r_edx = (u32)R16((u32)(r_eax+r_ecx*8+0x2u));
    /* 005f0273: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 005f0276: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005f027c: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 005f0282: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f0288: movzx eax, word ptr [ecx + edx*8 + 4] */ r_eax = (u32)R16((u32)(r_ecx+r_edx*8+0x4u));
    /* 005f028d: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005f0290: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0296: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 005f029c: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005f02a2: movzx ecx, word ptr [edx + eax*8 + 6] */ r_ecx = (u32)R16((u32)(r_edx+r_eax*8+0x6u));
    /* 005f02a7: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f02ad: movzx eax, word ptr [edx + 0x92] */ r_eax = (u32)R16((u32)(r_edx+0x92u));
    /* 005f02b4: lea ecx, [ecx + eax + 1] */ r_ecx = (u32)(r_ecx+r_eax+0x1u);
    /* 005f02b8: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 005f02bb: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f02c1: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 005f02c7: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005f02cd: movzx edx, word ptr [eax + ecx*8 + 8] */ r_edx = (u32)R16((u32)(r_eax+r_ecx*8+0x8u));
    /* 005f02d2: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005f02d8: movzx ecx, word ptr [eax + 0x90] */ r_ecx = (u32)R16((u32)(r_eax+0x90u));
    /* 005f02df: lea edx, [edx + ecx + 1] */ r_edx = (u32)(r_edx+r_ecx+0x1u);
    /* 005f02e3: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 005f02e6: jmp 0x5f03f8 */ goto L_005f03f8;
L_005f02eb:; BB(0x005f02eb);
    /* 005f02eb: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005f02f1: sub eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 005f02f4: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 005f02fa: jns 0x5f0306 */ if (!fS) goto L_005f0306;
L_005f02fc:; BB(0x005f02fc);
    /* 005f02fc: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_005f0306:; BB(0x005f0306);
    /* 005f0306: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 005f030d: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005f0314: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f0316: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f031c: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 005f031f: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005f0325: mov cl, byte ptr [edx + eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax))) & 0xffu);
    /* 005f0328: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0329: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f032f: call 0x5ee950 */ r_esp -= 4; W32(r_esp, 0x5f0334u); f_005ee950();
    /* 005f0334: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005f0337: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f033d: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005f0340: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005f0346: mov dl, byte ptr [eax + ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+r_ecx))) & 0xffu);
    /* 005f0349: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f034a: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0350: call 0x5eeaf0 */ r_esp -= 4; W32(r_esp, 0x5f0355u); f_005eeaf0();
    /* 005f0355: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005f0358: jmp 0x5f03f8 */ goto L_005f03f8;
L_005f035d:; BB(0x005f035d);
    /* 005f035d: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0363: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 005f0366: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005f036c: movzx eax, byte ptr [ecx + edx] */ r_eax = (u32)R8((u32)(r_ecx+r_edx));
    /* 005f0370: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 005f0376: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 005f037d: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005f0384: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f038a: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 005f038d: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005f0393: movzx ecx, byte ptr [edx + eax] */ r_ecx = (u32)R8((u32)(r_edx+r_eax));
    /* 005f0397: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f039a: je 0x5f03f8 */ if (fZ) goto L_005f03f8;
L_005f039c:; BB(0x005f039c);
    /* 005f039c: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f03a2: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005f03a5: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005f03ab: movzx edx, byte ptr [eax + ecx] */ r_edx = (u32)R8((u32)(r_eax+r_ecx));
    /* 005f03af: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f03b2: je 0x5f03f8 */ if (fZ) goto L_005f03f8;
L_005f03b4:; BB(0x005f03b4);
    /* 005f03b4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f03b6: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005f03bc: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 005f03bf: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005f03c5: mov al, byte ptr [ecx + edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx))) & 0xffu);
    /* 005f03c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f03c9: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f03cf: call 0x5ee950 */ r_esp -= 4; W32(r_esp, 0x5f03d4u); f_005ee950();
    /* 005f03d4: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005f03d7: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f03dd: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 005f03e0: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005f03e6: mov cl, byte ptr [edx + eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax))) & 0xffu);
    /* 005f03e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f03ea: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f03f0: call 0x5eeaf0 */ r_esp -= 4; W32(r_esp, 0x5f03f5u); f_005eeaf0();
    /* 005f03f5: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
L_005f03f8:; BB(0x005f03f8);
    /* 005f03f8: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f03fe: cmp dword ptr [edx + 0x64], 3 */ {  u32 a = R32((u32)(r_edx+0x64u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0402: jne 0x5f0505 */ if (!fZ) goto L_005f0505;
L_005f0408:; BB(0x005f0408);
    /* 005f0408: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005f040e: movzx ecx, byte ptr [eax + 0xcc] */ r_ecx = (u32)R8((u32)(r_eax+0xccu));
    /* 005f0415: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0417: je 0x5f0505 */ if (fZ) goto L_005f0505;
L_005f041d:; BB(0x005f041d);
    /* 005f041d: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0423: cmp dword ptr [edx + 0xb0], 0 */ {  u32 a = R32((u32)(r_edx+0xb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f042a: je 0x5f0505 */ if (fZ) goto L_005f0505;
L_005f0430:; BB(0x005f0430);
    /* 005f0430: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005f0436: cmp eax, dword ptr [ebp - 0x78] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff88u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f0439: jle 0x5f0505 */ if ((fZ||fS!=fO)) goto L_005f0505;
L_005f043f:; BB(0x005f043f);
    /* 005f043f: lea ecx, [ebp - 0xc0] */ r_ecx = (u32)(r_ebp+0xffffff40u);
    /* 005f0445: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0446: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0448: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f044e: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005f0451: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005f0457: movzx edx, byte ptr [eax + ecx] */ r_edx = (u32)R8((u32)(r_eax+r_ecx));
    /* 005f045b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f045c: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0462: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005f0468: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0469: call 0x686c5a */ r_esp -= 4; W32(r_esp, 0x5f046eu); f_00686c5a();
    /* 005f046e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f0471: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0472: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0478: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005f047b: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005f0481: movzx edx, byte ptr [eax + ecx - 1] */ r_edx = (u32)R8((u32)(r_eax+r_ecx+0xffffffffu));
    /* 005f0486: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0487: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005f048d: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005f0493: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0494: call 0x686c5a */ r_esp -= 4; W32(r_esp, 0x5f0499u); f_00686c5a();
    /* 005f0499: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f049c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f049d: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f04a3: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 005f04a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f04aa: call 0x686c54 */ r_esp -= 4; W32(r_esp, 0x5f04afu); f_00686c54();
    /* 005f04af: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f04b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f04b4: cmp dword ptr [ebp - 0xc0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f04bb: setl al */ r_eax = (r_eax & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 005f04be: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f04c1: and eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005f04c4: add eax, -0x20 */ {  u32 a = r_eax; u32 b = 0xffffffe0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f04c7: add eax, dword ptr [ebp - 0xc0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff40u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f04cd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005f04ce: and edx, 0x3f */ {  u32 a = r_edx; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005f04d1: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f04d3: sar eax, 6 */ { u32 c = (6u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005f04d6: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f04dc: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 005f04df: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005f04e5: movzx edx, byte ptr [edx + ecx] */ r_edx = (u32)R8((u32)(r_edx+r_ecx));
    /* 005f04e9: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f04ef: movsx edx, byte ptr [ecx + edx + 0xd0] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_edx+0xd0u));
    /* 005f04f7: add edx, dword ptr [ebp - 0x88] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff78u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f04fd: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f04ff: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
L_005f0505:; BB(0x005f0505);
    /* 005f0505: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005f050b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005f050e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f0511: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f0514: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005f0517: sub edx, dword ptr [ebp - 0x4c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f051a: add edx, dword ptr [ebp - 0x88] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff78u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f0520: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005f0523: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005f0526: sub eax, dword ptr [ebp - 0x48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f0529: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f052c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f052f: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0535: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005f0538: mov dword ptr [ebp - 0xdc], edx */ W32((u32)(r_ebp+0xffffff24u), r_edx);
    /* 005f053e: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0544: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005f0547: mov dword ptr [ebp - 0xd8], ecx */ W32((u32)(r_ebp+0xffffff28u), r_ecx);
    /* 005f054d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f0550: add edx, dword ptr [ebp - 0xd8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff28u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f0556: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005f0559: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f055c: add eax, dword ptr [ebp - 0xdc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff24u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f0562: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005f0565: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f0568: add ecx, dword ptr [ebp - 0xd8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff28u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f056e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f0571: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f0574: add edx, dword ptr [ebp - 0xdc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff24u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f057a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005f057d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f0580: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005f0583: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f0586: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005f0589: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f058c: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005f058f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f0592: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f0595: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 005f059b: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 005f059e: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 005f05a4: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 005f05a7: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 005f05ad: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005f05b0: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005f05b6: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 005f05b9: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005f05bc: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 005f05c2: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005f05c5: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 005f05cb: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005f05ce: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 005f05d4: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005f05d7: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 005f05dd: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005f05e0: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005f05e3: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005f05e6: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 005f05e9: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005f05ec: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 005f05ef: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005f05f2: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005f05f5: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 005f05f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f05f9: lea edx, [ebp - 0xa0] */ r_edx = (u32)(r_ebp+0xffffff60u);
    /* 005f05ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0600: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 005f0603: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0604: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 005f0607: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0608: call 0x624a70 */ r_esp -= 4; W32(r_esp, 0x5f060du); f_00624a70();
    /* 005f060d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f0610: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005f0613: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0615: je 0x5f072d */ if (fZ) goto L_005f072d;
L_005f061b:; BB(0x005f061b);
    /* 005f061b: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0621: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005f0624: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x5f0629u); f_005f84f0();
    /* 005f0629: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 005f062f: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0635: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005f0638: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x5f063du); f_005f84d0();
    /* 005f063d: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 005f0643: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005f0646: add edx, dword ptr [ebp - 0xe0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff20u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f064c: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005f064f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f0652: add eax, dword ptr [ebp - 0xe4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff1cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f0658: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005f065b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f065e: add ecx, dword ptr [ebp - 0xe0] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff20u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f0664: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f0667: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f066a: add edx, dword ptr [ebp - 0xe4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff1cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f0670: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005f0673: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0679: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005f067c: mov edx, dword ptr [ecx + 0x1a8] */ r_edx = R32((u32)(r_ecx+0x1a8u));
    /* 005f0682: mov dword ptr [ebp - 0xe8], edx */ W32((u32)(r_ebp+0xffffff18u), r_edx);
    /* 005f0688: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f068a: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0690: cmp dword ptr [eax + 0xac], 0 */ {  u32 a = R32((u32)(r_eax+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0697: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005f069a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f069b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f069d: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f06a3: movzx eax, byte ptr [edx + 0x9c] */ r_eax = (u32)R8((u32)(r_edx+0x9cu));
    /* 005f06aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f06ab: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f06ae: mov ecx, esp */ r_ecx = r_esp;
    /* 005f06b0: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005f06b6: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005f06b8: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 005f06be: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005f06c1: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 005f06c7: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005f06ca: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005f06d0: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 005f06d3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f06d6: mov ecx, esp */ r_ecx = r_esp;
    /* 005f06d8: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005f06db: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005f06dd: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f06e0: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005f06e3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f06e6: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005f06e9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f06ec: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 005f06ef: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 005f06f5: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005f06f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f06f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f06fb: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0701: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 005f0707: call 0x6163e0 */ r_esp -= 4; W32(r_esp, 0x5f070cu); f_006163e0();
    /* 005f070c: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f070f: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005f0711: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005f0713: and eax, dword ptr [ebp - 0x8c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff74u)); u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005f0719: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f071a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f071c: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0722: mov ecx, dword ptr [ecx + 0xb0] */ r_ecx = R32((u32)(r_ecx+0xb0u));
    /* 005f0728: call 0x616510 */ r_esp -= 4; W32(r_esp, 0x5f072du); f_00616510();
L_005f072d:; BB(0x005f072d);
    /* 005f072d: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0733: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005f0739: cmp eax, dword ptr [edx + 0xa0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xa0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f073f: jne 0x5f0778 */ if (!fZ) goto L_005f0778;
L_005f0741:; BB(0x005f0741);
    /* 005f0741: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0747: movsx edx, byte ptr [ecx + 0xa6] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0xa6u));
    /* 005f074e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0750: je 0x5f075d */ if (fZ) goto L_005f075d;
L_005f0752:; BB(0x005f0752);
    /* 005f0752: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005f0758: cmp eax, dword ptr [ebp - 0x78] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff88u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f075b: je 0x5f0778 */ if (fZ) goto L_005f0778;
L_005f075d:; BB(0x005f075d);
    /* 005f075d: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005f0763: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f0766: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f0769: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f076c: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005f076f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005f0772: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
L_005f0778:; BB(0x005f0778);
    /* 005f0778: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005f077b: sub ecx, dword ptr [ebp - 0x4c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f077e: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0784: movzx eax, word ptr [edx + 0x90] */ r_eax = (u32)R16((u32)(r_edx+0x90u));
    /* 005f078b: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f078d: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0793: movsx eax, word ptr [edx + 0x94] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x94u));
    /* 005f079a: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f079c: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f07a2: add ecx, dword ptr [edx + 0xa8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0xa8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f07a8: add ecx, dword ptr [ebp - 0x88] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff78u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f07ae: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 005f07b4: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005f07ba: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f07bd: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 005f07c0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f07c3: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 005f07c6: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f07c9: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005f07cc: jmp 0x5f01d0 */ goto L_005f01d0;
L_005f07d1:; BB(0x005f07d1);
    /* 005f07d1: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005f07d7: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005f07dd: cmp ecx, dword ptr [eax + 0xa0] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xa0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f07e3: jne 0x5f0811 */ if (!fZ) goto L_005f0811;
L_005f07e5:; BB(0x005f07e5);
    /* 005f07e5: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f07eb: movsx eax, byte ptr [edx + 0xa6] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0xa6u));
    /* 005f07f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f07f4: je 0x5f0811 */ if (fZ) goto L_005f0811;
L_005f07f6:; BB(0x005f07f6);
    /* 005f07f6: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005f07fc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f07ff: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f0802: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f0805: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005f0808: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005f080b: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
L_005f0811:; BB(0x005f0811);
    /* 005f0811: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0817: movsx edx, word ptr [ecx + 0x96] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x96u));
    /* 005f081e: add edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f0821: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005f0824: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f082a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f082d: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 005f0833: jmp 0x5f001e */ goto L_005f001e;
L_005f0838:; BB(0x005f0838);
    /* 005f0838: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f083e: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 005f0844: cmp edx, dword ptr [ebp - 0xb8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff48u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f084a: jl 0x5f098b */ if ((fS!=fO)) goto L_005f098b;
L_005f0850:; BB(0x005f0850);
    /* 005f0850: cmp dword ptr [ebp - 0xb8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0857: je 0x5f098b */ if (fZ) goto L_005f098b;
L_005f085d:; BB(0x005f085d);
    /* 005f085d: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005f0863: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f0866: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005f0869: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f086f: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 005f0872: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005f0878: movzx ecx, byte ptr [edx + eax - 1] */ r_ecx = (u32)R8((u32)(r_edx+r_eax+0xffffffffu));
    /* 005f087d: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0880: jne 0x5f08e5 */ if (!fZ) goto L_005f08e5;
L_005f0882:; BB(0x005f0882);
    /* 005f0882: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0888: movsx eax, word ptr [edx + 0x96] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x96u));
    /* 005f088f: add eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f0892: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0898: cmp eax, dword ptr [ecx + 0x6c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x6cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f089b: jle 0x5f08e5 */ if ((fZ||fS!=fO)) goto L_005f08e5;
L_005f089d:; BB(0x005f089d);
    /* 005f089d: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f08a3: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005f08a6: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005f08ac: mov byte ptr [ecx + eax - 2], 0 */ W8((u32)(r_ecx+r_eax+0xfffffffeu), 0x0u);
    /* 005f08b1: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f08b7: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005f08ba: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005f08c0: mov byte ptr [ecx + eax - 1], 0 */ W8((u32)(r_ecx+r_eax+0xffffffffu), 0x0u);
    /* 005f08c5: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f08cb: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005f08ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f08cf: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f08d5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f08d7: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f08dd: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005f08e3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f08e5u); call_ind(t); }
L_005f08e5:; BB(0x005f08e5);
    /* 005f08e5: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f08eb: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 005f08ee: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005f08f4: movzx ecx, byte ptr [edx + eax - 1] */ r_ecx = (u32)R8((u32)(r_edx+r_eax+0xffffffffu));
    /* 005f08f9: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f08fc: jne 0x5f096d */ if (!fZ) goto L_005f096d;
L_005f08fe:; BB(0x005f08fe);
    /* 005f08fe: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f0901: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005f0904: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005f090a: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 005f090d: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005f0910: je 0x5f0919 */ if (fZ) goto L_005f0919;
L_005f0912:; BB(0x005f0912);
    /* 005f0912: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005f0919:; BB(0x005f0919);
    /* 005f0919: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f091f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005f0922: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005f0925: je 0x5f0936 */ if (fZ) goto L_005f0936;
L_005f0927:; BB(0x005f0927);
    /* 005f0927: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f092d: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 005f0930: sub edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f0933: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_005f0936:; BB(0x005f0936);
    /* 005f0936: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005f093c: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 005f093f: and ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005f0942: je 0x5f0958 */ if (fZ) goto L_005f0958;
L_005f0944:; BB(0x005f0944);
    /* 005f0944: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f094a: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 005f094d: sub eax, dword ptr [ebp - 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f0950: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005f0951: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f0953: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005f0955: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005f0958:; BB(0x005f0958);
    /* 005f0958: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005f095e: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 005f0961: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f0964: lea eax, [edx + ecx + 1] */ r_eax = (u32)(r_edx+r_ecx+0x1u);
    /* 005f0968: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005f096b: jmp 0x5f098b */ goto L_005f098b;
L_005f096d:; BB(0x005f096d);
    /* 005f096d: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0973: movsx edx, word ptr [ecx + 0x96] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x96u));
    /* 005f097a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f097d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f097f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005f0982: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f0985: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
L_005f098b:; BB(0x005f098b);
    /* 005f098b: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005f0991: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0992: lea eax, [ebp - 0xb0] */ r_eax = (u32)(r_ebp+0xffffff50u);
    /* 005f0998: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0999: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005f099c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f099d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f09a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f09a1: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f09a7: call 0x5ef470 */ r_esp -= 4; W32(r_esp, 0x5f09acu); f_005ef470();
    /* 005f09ac: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005f09b2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f09b4: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f09ba: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005f09bd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f09bfu); call_ind(t); }
    /* 005f09bf: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005f09c2: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f09c8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f09ca: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f09d0: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005f09d3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f09d5u); call_ind(t); }
    /* 005f09d5: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005f09d8: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f09de: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5f09e3u); f_005f5590();
    /* 005f09e3: add eax, dword ptr [ebp - 0x48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f09e6: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005f09e9: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f09ef: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5f09f4u); f_005f5550();
    /* 005f09f4: add eax, dword ptr [ebp - 0x4c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f09f7: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005f09fa: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0a00: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005f0a03: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 005f0a06: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0a0c: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005f0a0f: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 005f0a12: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0a18: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005f0a1b: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 005f0a1e: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005f0a24: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005f0a27: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
L_005f0a2a:; BB(0x005f0a2a);
    /* 005f0a2a: mov esp, ebp */ r_esp = r_ebp;
    /* 005f0a2c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0a2d: ret 4 */ FN_RET(0x005efd60); r_esp += 8; return;
}

