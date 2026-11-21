#include "protos.h"

void f_006892b0(void) /* sub_6892B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006892b0);
    /* 006892b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006892b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006892b3: sub esp, 0x264 */ {  u32 a = r_esp; u32 b = 0x264u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006892b9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006892be: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006892c0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006892c3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006892c4: mov dword ptr [ebp - 0x260], ecx */ W32((u32)(r_ebp+0xfffffda0u), r_ecx);
    /* 006892ca: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 006892cf: push 0x6e55b4 */ { u32 v = 0x6e55b4u; r_esp -= 4; W32(r_esp, v); }
    /* 006892d4: lea eax, [ebp - 0x12c] */ r_eax = (u32)(r_ebp+0xfffffed4u);
    /* 006892da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006892db: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x6892e1u); call_ind(t); }
    /* 006892e1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006892e4: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 006892e9: push 0x6e55ac */ { u32 v = 0x6e55acu; r_esp -= 4; W32(r_esp, v); }
    /* 006892ee: lea ecx, [ebp - 0x140] */ r_ecx = (u32)(r_ebp+0xfffffec0u);
    /* 006892f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006892f5: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x6892fbu); call_ind(t); }
    /* 006892fb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006892fe: push 0x105 */ { u32 v = 0x105u; r_esp -= 4; W32(r_esp, v); }
    /* 00689303: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00689305: lea edx, [ebp - 0x248] */ r_edx = (u32)(r_ebp+0xfffffdb8u);
    /* 0068930b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068930c: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x689311u); f_00686fa2();
    /* 00689311: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00689314: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689318: je 0x689330 */ if (fZ) goto L_00689330;
L_0068931a:; BB(0x0068931a);
    /* 0068931a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068931d: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00689320: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689322: je 0x689330 */ if (fZ) goto L_00689330;
L_00689324:; BB(0x00689324);
    /* 00689324: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689328: je 0x689330 */ if (fZ) goto L_00689330;
L_0068932a:; BB(0x0068932a);
    /* 0068932a: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068932e: jne 0x689337 */ if (!fZ) goto L_00689337;
L_00689330:; BB(0x00689330);
    /* 00689330: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00689332: jmp 0x68967e */ goto L_0068967e;
L_00689337:; BB(0x00689337);
    /* 00689337: mov byte ptr [ebp - 0x248], 0 */ W8((u32)(r_ebp+0xfffffdb8u), 0x0u);
    /* 0068933e: lea edx, [ebp - 0x248] */ r_edx = (u32)(r_ebp+0xfffffdb8u);
    /* 00689344: mov dword ptr [ebp - 0x24c], edx */ W32((u32)(r_ebp+0xfffffdb4u), r_edx);
    /* 0068934a: mov eax, dword ptr [ebp - 0x260] */ r_eax = R32((u32)(r_ebp+0xfffffda0u));
    /* 00689350: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 00689356: mov edx, dword ptr [ebp - 0x260] */ r_edx = R32((u32)(r_ebp+0xfffffda0u));
    /* 0068935c: mov eax, dword ptr [edx + 0x208] */ r_eax = R32((u32)(r_edx+0x208u));
    /* 00689362: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00689364: mov ecx, eax */ r_ecx = r_eax;
    /* 00689366: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00689369: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x68936bu); call_ind(t); }
    /* 0068936b: mov esi, eax */ r_esi = r_eax;
    /* 0068936d: mov ecx, dword ptr [ebp - 0x260] */ r_ecx = R32((u32)(r_ebp+0xfffffda0u));
    /* 00689373: mov ecx, dword ptr [ecx + 0x208] */ r_ecx = R32((u32)(r_ecx+0x208u));
    /* 00689379: call 0x61ed80 */ r_esp -= 4; W32(r_esp, 0x68937eu); f_0061ed80();
    /* 0068937e: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00689380: mov dword ptr [ebp - 0x25c], esi */ W32((u32)(r_ebp+0xfffffda4u), r_esi);
L_00689386:; BB(0x00689386);
    /* 00689386: mov edx, dword ptr [ebp - 0x260] */ r_edx = R32((u32)(r_ebp+0xfffffda0u));
    /* 0068938c: mov eax, dword ptr [edx + 0x20c] */ r_eax = R32((u32)(r_edx+0x20cu));
    /* 00689392: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00689395: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689398: je 0x689404 */ if (fZ) goto L_00689404;
L_0068939a:; BB(0x0068939a);
    /* 0068939a: mov edx, dword ptr [ebp - 0x260] */ r_edx = R32((u32)(r_ebp+0xfffffda0u));
    /* 006893a0: mov eax, dword ptr [edx + 0x20c] */ r_eax = R32((u32)(r_edx+0x20cu));
    /* 006893a6: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 006893a9: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006893ac: je 0x689404 */ if (fZ) goto L_00689404;
L_006893ae:; BB(0x006893ae);
    /* 006893ae: mov edx, dword ptr [ebp - 0x260] */ r_edx = R32((u32)(r_ebp+0xfffffda0u));
    /* 006893b4: mov eax, dword ptr [edx + 0x20c] */ r_eax = R32((u32)(r_edx+0x20cu));
    /* 006893ba: cmp eax, dword ptr [ebp - 0x25c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffda4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006893c0: jae 0x689404 */ if (!fC) goto L_00689404;
L_006893c2:; BB(0x006893c2);
    /* 006893c2: mov ecx, dword ptr [ebp - 0x260] */ r_ecx = R32((u32)(r_ebp+0xfffffda0u));
    /* 006893c8: mov edx, dword ptr [ecx + 0x20c] */ r_edx = R32((u32)(r_ecx+0x20cu));
    /* 006893ce: mov eax, dword ptr [ebp - 0x24c] */ r_eax = R32((u32)(r_ebp+0xfffffdb4u));
    /* 006893d4: mov cl, byte ptr [edx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 006893d6: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 006893d8: mov edx, dword ptr [ebp - 0x24c] */ r_edx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 006893de: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006893e1: mov dword ptr [ebp - 0x24c], edx */ W32((u32)(r_ebp+0xfffffdb4u), r_edx);
    /* 006893e7: mov eax, dword ptr [ebp - 0x260] */ r_eax = R32((u32)(r_ebp+0xfffffda0u));
    /* 006893ed: mov ecx, dword ptr [eax + 0x20c] */ r_ecx = R32((u32)(r_eax+0x20cu));
    /* 006893f3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006893f6: mov edx, dword ptr [ebp - 0x260] */ r_edx = R32((u32)(r_ebp+0xfffffda0u));
    /* 006893fc: mov dword ptr [edx + 0x20c], ecx */ W32((u32)(r_edx+0x20cu), r_ecx);
    /* 00689402: jmp 0x689386 */ goto L_00689386;
L_00689404:; BB(0x00689404);
    /* 00689404: mov eax, dword ptr [ebp - 0x24c] */ r_eax = R32((u32)(r_ebp+0xfffffdb4u));
    /* 0068940a: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 0068940d: mov ecx, dword ptr [ebp - 0x24c] */ r_ecx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 00689413: lea edx, [ebp - 0x248] */ r_edx = (u32)(r_ebp+0xfffffdb8u);
    /* 00689419: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0068941b: mov dword ptr [ebp - 0x258], ecx */ W32((u32)(r_ebp+0xfffffda8u), r_ecx);
    /* 00689421: je 0x68942c */ if (fZ) goto L_0068942c;
L_00689423:; BB(0x00689423);
    /* 00689423: cmp dword ptr [ebp - 0x258], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffda8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068942a: jne 0x689433 */ if (!fZ) goto L_00689433;
L_0068942c:; BB(0x0068942c);
    /* 0068942c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0068942e: jmp 0x68967e */ goto L_0068967e;
L_00689433:; BB(0x00689433);
    /* 00689433: mov byte ptr [ebp - 0x118], 0 */ W8((u32)(r_ebp+0xfffffee8u), 0x0u);
L_0068943a:; BB(0x0068943a);
    /* 0068943a: mov eax, dword ptr [ebp - 0x260] */ r_eax = R32((u32)(r_ebp+0xfffffda0u));
    /* 00689440: mov ecx, dword ptr [eax + 0x20c] */ r_ecx = R32((u32)(r_eax+0x20cu));
    /* 00689446: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 00689449: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068944c: je 0x689476 */ if (fZ) goto L_00689476;
L_0068944e:; BB(0x0068944e);
    /* 0068944e: mov eax, dword ptr [ebp - 0x260] */ r_eax = R32((u32)(r_ebp+0xfffffda0u));
    /* 00689454: mov ecx, dword ptr [eax + 0x20c] */ r_ecx = R32((u32)(r_eax+0x20cu));
    /* 0068945a: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0068945d: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689460: jne 0x689493 */ if (!fZ) goto L_00689493;
L_00689462:; BB(0x00689462);
    /* 00689462: mov eax, dword ptr [ebp - 0x260] */ r_eax = R32((u32)(r_ebp+0xfffffda0u));
    /* 00689468: mov ecx, dword ptr [eax + 0x20c] */ r_ecx = R32((u32)(r_eax+0x20cu));
    /* 0068946e: cmp ecx, dword ptr [ebp - 0x25c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffda4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00689474: jae 0x689493 */ if (!fC) goto L_00689493;
L_00689476:; BB(0x00689476);
    /* 00689476: mov edx, dword ptr [ebp - 0x260] */ r_edx = R32((u32)(r_ebp+0xfffffda0u));
    /* 0068947c: mov eax, dword ptr [edx + 0x20c] */ r_eax = R32((u32)(r_edx+0x20cu));
    /* 00689482: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00689485: mov ecx, dword ptr [ebp - 0x260] */ r_ecx = R32((u32)(r_ebp+0xfffffda0u));
    /* 0068948b: mov dword ptr [ecx + 0x20c], eax */ W32((u32)(r_ecx+0x20cu), r_eax);
    /* 00689491: jmp 0x68943a */ goto L_0068943a;
L_00689493:; BB(0x00689493);
    /* 00689493: lea edx, [ebp - 0x248] */ r_edx = (u32)(r_ebp+0xfffffdb8u);
    /* 00689499: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068949a: mov ecx, dword ptr [ebp - 0x260] */ r_ecx = R32((u32)(r_ebp+0xfffffda0u));
    /* 006894a0: call 0x6896c0 */ r_esp -= 4; W32(r_esp, 0x6894a5u); f_006896c0();
    /* 006894a5: movsx eax, byte ptr [ebp - 0x248] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdb8u));
    /* 006894ac: cmp eax, 0x3b */ {  u32 a = r_eax; u32 b = 0x3bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006894af: jne 0x6894b6 */ if (!fZ) goto L_006894b6;
L_006894b1:; BB(0x006894b1);
    /* 006894b1: jmp 0x689636 */ goto L_00689636;
L_006894b6:; BB(0x006894b6);
    /* 006894b6: movsx ecx, byte ptr [ebp - 0x248] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffdb8u));
    /* 006894bd: cmp ecx, 0x5b */ {  u32 a = r_ecx; u32 b = 0x5bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006894c0: jne 0x6894c9 */ if (!fZ) goto L_006894c9;
L_006894c2:; BB(0x006894c2);
    /* 006894c2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006894c4: jmp 0x68967e */ goto L_0068967e;
L_006894c9:; BB(0x006894c9);
    /* 006894c9: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 006894cb: lea edx, [ebp - 0x248] */ r_edx = (u32)(r_ebp+0xfffffdb8u);
    /* 006894d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006894d2: call dword ptr [0x6b22b8] */ { u32 t = R32((u32)(0x6b22b8u)); r_esp -= 4; W32(r_esp, 0x6894d8u); call_ind(t); }
    /* 006894d8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006894db: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006894de: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006894e2: jne 0x6894e9 */ if (!fZ) goto L_006894e9;
L_006894e4:; BB(0x006894e4);
    /* 006894e4: jmp 0x689636 */ goto L_00689636;
L_006894e9:; BB(0x006894e9);
    /* 006894e9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006894ec: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 006894ef: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006894f2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006894f5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006894f8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006894fb: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006894fe: mov dword ptr [ebp - 0x254], edx */ W32((u32)(r_ebp+0xfffffdacu), r_edx);
L_00689504:; BB(0x00689504);
    /* 00689504: mov eax, dword ptr [ebp - 0x254] */ r_eax = R32((u32)(r_ebp+0xfffffdacu));
    /* 0068950a: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0068950d: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689510: jne 0x68952c */ if (!fZ) goto L_0068952c;
L_00689512:; BB(0x00689512);
    /* 00689512: mov edx, dword ptr [ebp - 0x254] */ r_edx = R32((u32)(r_ebp+0xfffffdacu));
    /* 00689518: mov byte ptr [edx], 0 */ W8((u32)(r_edx), 0x0u);
    /* 0068951b: mov eax, dword ptr [ebp - 0x254] */ r_eax = R32((u32)(r_ebp+0xfffffdacu));
    /* 00689521: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00689524: mov dword ptr [ebp - 0x254], eax */ W32((u32)(r_ebp+0xfffffdacu), r_eax);
    /* 0068952a: jmp 0x689504 */ goto L_00689504;
L_0068952c:; BB(0x0068952c);
    /* 0068952c: lea ecx, [ebp - 0x248] */ r_ecx = (u32)(r_ebp+0xfffffdb8u);
    /* 00689532: mov dword ptr [ebp - 0x254], ecx */ W32((u32)(r_ebp+0xfffffdacu), r_ecx);
    /* 00689538: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068953b: mov dword ptr [ebp - 0x250], edx */ W32((u32)(r_ebp+0xfffffdb0u), r_edx);
L_00689541:; BB(0x00689541);
    /* 00689541: mov eax, dword ptr [ebp - 0x250] */ r_eax = R32((u32)(r_ebp+0xfffffdb0u));
    /* 00689547: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0068954a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068954c: je 0x6895a9 */ if (fZ) goto L_006895a9;
L_0068954e:; BB(0x0068954e);
    /* 0068954e: mov edx, dword ptr [ebp - 0x254] */ r_edx = R32((u32)(r_ebp+0xfffffdacu));
    /* 00689554: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 00689557: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689559: je 0x6895a9 */ if (fZ) goto L_006895a9;
L_0068955b:; BB(0x0068955b);
    /* 0068955b: mov ecx, dword ptr [ebp - 0x250] */ r_ecx = R32((u32)(r_ebp+0xfffffdb0u));
    /* 00689561: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 00689564: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00689565: call dword ptr [0x6b21e8] */ { u32 t = R32((u32)(0x6b21e8u)); r_esp -= 4; W32(r_esp, 0x68956bu); call_ind(t); }
    /* 0068956b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068956e: mov esi, eax */ r_esi = r_eax;
    /* 00689570: mov eax, dword ptr [ebp - 0x254] */ r_eax = R32((u32)(r_ebp+0xfffffdacu));
    /* 00689576: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00689579: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068957a: call dword ptr [0x6b21e8] */ { u32 t = R32((u32)(0x6b21e8u)); r_esp -= 4; W32(r_esp, 0x689580u); call_ind(t); }
    /* 00689580: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00689583: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689585: je 0x689589 */ if (fZ) goto L_00689589;
L_00689587:; BB(0x00689587);
    /* 00689587: jmp 0x6895a9 */ goto L_006895a9;
L_00689589:; BB(0x00689589);
    /* 00689589: mov edx, dword ptr [ebp - 0x250] */ r_edx = R32((u32)(r_ebp+0xfffffdb0u));
    /* 0068958f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00689592: mov dword ptr [ebp - 0x250], edx */ W32((u32)(r_ebp+0xfffffdb0u), r_edx);
    /* 00689598: mov eax, dword ptr [ebp - 0x254] */ r_eax = R32((u32)(r_ebp+0xfffffdacu));
    /* 0068959e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006895a1: mov dword ptr [ebp - 0x254], eax */ W32((u32)(r_ebp+0xfffffdacu), r_eax);
    /* 006895a7: jmp 0x689541 */ goto L_00689541;
L_006895a9:; BB(0x006895a9);
    /* 006895a9: mov ecx, dword ptr [ebp - 0x250] */ r_ecx = R32((u32)(r_ebp+0xfffffdb0u));
    /* 006895af: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 006895b2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006895b4: jne 0x6895c3 */ if (!fZ) goto L_006895c3;
L_006895b6:; BB(0x006895b6);
    /* 006895b6: mov eax, dword ptr [ebp - 0x254] */ r_eax = R32((u32)(r_ebp+0xfffffdacu));
    /* 006895bc: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 006895bf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006895c1: je 0x6895c5 */ if (fZ) goto L_006895c5;
L_006895c3:; BB(0x006895c3);
    /* 006895c3: jmp 0x689636 */ goto L_00689636;
L_006895c5:; BB(0x006895c5);
    /* 006895c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006895c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006895c9: mov ecx, dword ptr [ebp - 0x260] */ r_ecx = R32((u32)(r_ebp+0xfffffda0u));
    /* 006895cf: call 0x6896c0 */ r_esp -= 4; W32(r_esp, 0x6895d4u); f_006896c0();
    /* 006895d4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006895d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006895d8: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x6895ddu); f_00686ecc();
    /* 006895dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006895e0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006895e3: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006895e6: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006895e9: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006895eb: jae 0x689604 */ if (!fC) goto L_00689604;
L_006895ed:; BB(0x006895ed);
    /* 006895ed: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006895f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006895f1: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x6895f6u); f_00686ecc();
    /* 006895f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006895f9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006895fc: mov dword ptr [ebp - 0x264], eax */ W32((u32)(r_ebp+0xfffffd9cu), r_eax);
    /* 00689602: jmp 0x689610 */ goto L_00689610;
L_00689604:; BB(0x00689604);
    /* 00689604: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00689607: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0068960a: mov dword ptr [ebp - 0x264], eax */ W32((u32)(r_ebp+0xfffffd9cu), r_eax);
L_00689610:; BB(0x00689610);
    /* 00689610: mov ecx, dword ptr [ebp - 0x264] */ r_ecx = R32((u32)(r_ebp+0xfffffd9cu));
    /* 00689616: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00689617: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068961a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068961b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0068961e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068961f: call dword ptr [0x6b22d8] */ { u32 t = R32((u32)(0x6b22d8u)); r_esp -= 4; W32(r_esp, 0x689625u); call_ind(t); }
    /* 00689625: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00689628: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0068962b: add ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068962e: mov byte ptr [ecx - 1], 0 */ W8((u32)(r_ecx+0xffffffffu), 0x0u);
    /* 00689632: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00689634: jmp 0x68967e */ goto L_0068967e;
L_00689636:; BB(0x00689636);
    /* 00689636: mov edx, dword ptr [ebp - 0x260] */ r_edx = R32((u32)(r_ebp+0xfffffda0u));
    /* 0068963c: mov eax, dword ptr [edx + 0x208] */ r_eax = R32((u32)(r_edx+0x208u));
    /* 00689642: mov ecx, dword ptr [ebp - 0x260] */ r_ecx = R32((u32)(r_ebp+0xfffffda0u));
    /* 00689648: mov ecx, dword ptr [ecx + 0x208] */ r_ecx = R32((u32)(r_ecx+0x208u));
    /* 0068964e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00689650: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00689653: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x689655u); call_ind(t); }
    /* 00689655: mov esi, eax */ r_esi = r_eax;
    /* 00689657: mov ecx, dword ptr [ebp - 0x260] */ r_ecx = R32((u32)(r_ebp+0xfffffda0u));
    /* 0068965d: mov ecx, dword ptr [ecx + 0x208] */ r_ecx = R32((u32)(r_ecx+0x208u));
    /* 00689663: call 0x61ed80 */ r_esp -= 4; W32(r_esp, 0x689668u); f_0061ed80();
    /* 00689668: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0068966a: mov edx, dword ptr [ebp - 0x260] */ r_edx = R32((u32)(r_ebp+0xfffffda0u));
    /* 00689670: cmp dword ptr [edx + 0x20c], esi */ {  u32 a = R32((u32)(r_edx+0x20cu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00689676: jb 0x689337 */ if (fC) goto L_00689337;
L_0068967c:; BB(0x0068967c);
    /* 0068967c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0068967e:; BB(0x0068967e);
    /* 0068967e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068967f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00689682: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00689684: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x689689u); f_00686d72();
    /* 00689689: mov esp, ebp */ r_esp = r_ebp;
    /* 0068968b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068968c: ret 0xc */ FN_RET(0x006892b0); r_esp += 16; return;
}

void f_006896c0(void) /* sub_6896C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006896c0);
    /* 006896c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006896c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006896c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006896c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006896c9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006896cd: jne 0x6896d3 */ if (!fZ) goto L_006896d3;
L_006896cf:; BB(0x006896cf);
    /* 006896cf: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006896d1: jmp 0x68971a */ goto L_0068971a;
L_006896d3:; BB(0x006896d3);
    /* 006896d3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006896d6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006896d9:; BB(0x006896d9);
    /* 006896d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006896dc: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 006896df: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006896e2: jne 0x6896ef */ if (!fZ) goto L_006896ef;
L_006896e4:; BB(0x006896e4);
    /* 006896e4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006896e7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006896ea: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006896ed: jmp 0x6896d9 */ goto L_006896d9;
L_006896ef:; BB(0x006896ef);
    /* 006896ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006896f2: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006896f5: je 0x689718 */ if (fZ) goto L_00689718;
L_006896f7:; BB(0x006896f7);
    /* 006896f7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006896fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006896fb: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x689700u); f_00686ecc();
    /* 00689700: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00689703: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00689706: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689707: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068970a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068970b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068970e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068970f: call dword ptr [0x6b22d8] */ { u32 t = R32((u32)(0x6b22d8u)); r_esp -= 4; W32(r_esp, 0x689715u); call_ind(t); }
    /* 00689715: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00689718:; BB(0x00689718);
    /* 00689718: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0068971a:; BB(0x0068971a);
    /* 0068971a: mov esp, ebp */ r_esp = r_ebp;
    /* 0068971c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068971d: ret 4 */ FN_RET(0x006896c0); r_esp += 8; return;
}

