#include "protos.h"

void f_00691320(void) /* sub_691320 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00691320);
    /* 00691320: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00691321: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00691322: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00691326: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691328: je 0x691540 */ if (fZ) goto L_00691540;
L_0069132e:; BB(0x0069132e);
    /* 0069132e: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 00691331: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00691332: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00691333: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00691334: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691336: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0069133a: je 0x691341 */ if (fZ) goto L_00691341;
L_0069133c:; BB(0x0069133c);
    /* 0069133c: mov ebp, dword ptr [ecx + 0x1c] */ r_ebp = R32((u32)(r_ecx+0x1cu));
    /* 0069133f: jmp 0x691343 */ goto L_00691343;
L_00691341:; BB(0x00691341);
    /* 00691341: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00691343:; BB(0x00691343);
    /* 00691343: mov esi, dword ptr [edi + 0x68] */ r_esi = R32((u32)(r_edi+0x68u));
    /* 00691346: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691348: je 0x6914ac */ if (fZ) goto L_006914ac;
L_0069134e:; BB(0x0069134e);
    /* 0069134e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00691350: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691352: je 0x691365 */ if (fZ) goto L_00691365;
L_00691354:; BB(0x00691354);
    /* 00691354: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691355: call 0x695e30 */ r_esp -= 4; W32(r_esp, 0x69135au); f_00695e30();
    /* 0069135a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0069135c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069135d: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x691362u); f_00687300();
    /* 00691362: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00691365:; BB(0x00691365);
    /* 00691365: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00691368: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069136a: je 0x69138b */ if (fZ) goto L_0069138b;
L_0069136c:; BB(0x0069136c);
    /* 0069136c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0069136e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069136f: call 0x697780 */ r_esp -= 4; W32(r_esp, 0x691374u); f_00697780();
    /* 00691374: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 00691377: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00691379: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069137a: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x69137fu); f_00687300();
    /* 0069137f: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 00691382: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00691383: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x691388u); f_00687300();
    /* 00691388: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0069138b:; BB(0x0069138b);
    /* 0069138b: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 0069138e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691390: je 0x6913b1 */ if (fZ) goto L_006913b1;
L_00691392:; BB(0x00691392);
    /* 00691392: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00691394: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00691395: call 0x697780 */ r_esp -= 4; W32(r_esp, 0x69139au); f_00697780();
    /* 0069139a: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 0069139d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0069139f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006913a0: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x6913a5u); f_00687300();
    /* 006913a5: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 006913a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006913a9: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x6913aeu); f_00687300();
    /* 006913ae: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006913b1:; BB(0x006913b1);
    /* 006913b1: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 006913b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006913b6: je 0x6913f8 */ if (fZ) goto L_006913f8;
L_006913b8:; BB(0x006913b8);
    /* 006913b8: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006913bb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006913bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006913bf: jle 0x6913e8 */ if ((fZ||fS!=fO)) goto L_006913e8;
L_006913c1:; BB(0x006913c1);
    /* 006913c1: lea edi, [ebp + 0x320] */ r_edi = (u32)(r_ebp+0x320u);
L_006913c7:; BB(0x006913c7);
    /* 006913c7: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006913c9: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 006913cc: mov ecx, dword ptr [eax*4 + 0x7878d0] */ r_ecx = R32((u32)(r_eax*4+0x7878d0u));
    /* 006913d3: mov eax, dword ptr [edx + ebx*4] */ r_eax = R32((u32)(r_edx+r_ebx*4));
    /* 006913d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006913d7: call dword ptr [ecx + 0x10] */ { u32 t = R32((u32)(r_ecx+0x10u)); r_esp -= 4; W32(r_esp, 0x6913dau); call_ind(t); }
    /* 006913da: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006913dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006913e0: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006913e1: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006913e4: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006913e6: jl 0x6913c7 */ if ((fS!=fO)) goto L_006913c7;
L_006913e8:; BB(0x006913e8);
    /* 006913e8: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 006913eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006913ec: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x6913f1u); f_00687300();
    /* 006913f1: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 006913f5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006913f8:; BB(0x006913f8);
    /* 006913f8: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 006913fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006913fd: je 0x69143f */ if (fZ) goto L_0069143f;
L_006913ff:; BB(0x006913ff);
    /* 006913ff: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00691402: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00691404: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00691406: jle 0x69142f */ if ((fZ||fS!=fO)) goto L_0069142f;
L_00691408:; BB(0x00691408);
    /* 00691408: lea edi, [ebp + 0x520] */ r_edi = (u32)(r_ebp+0x520u);
L_0069140e:; BB(0x0069140e);
    /* 0069140e: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00691410: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 00691413: mov eax, dword ptr [edx*4 + 0x7878d8] */ r_eax = R32((u32)(r_edx*4+0x7878d8u));
    /* 0069141a: mov edx, dword ptr [ecx + ebx*4] */ r_edx = R32((u32)(r_ecx+r_ebx*4));
    /* 0069141d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069141e: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x691421u); call_ind(t); }
    /* 00691421: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00691424: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00691427: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00691428: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069142b: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069142d: jl 0x69140e */ if ((fS!=fO)) goto L_0069140e;
L_0069142f:; BB(0x0069142f);
    /* 0069142f: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 00691432: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691433: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x691438u); f_00687300();
    /* 00691438: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0069143c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0069143f:; BB(0x0069143f);
    /* 0069143f: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00691442: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691444: je 0x69147a */ if (fZ) goto L_0069147a;
L_00691446:; BB(0x00691446);
    /* 00691446: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00691449: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0069144b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069144d: jle 0x69146a */ if ((fZ||fS!=fO)) goto L_0069146a;
L_0069144f:; BB(0x0069144f);
    /* 0069144f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00691451:; BB(0x00691451);
    /* 00691451: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 00691454: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00691456: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00691457: call 0x692c20 */ r_esp -= 4; W32(r_esp, 0x69145cu); f_00692c20();
    /* 0069145c: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0069145f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00691462: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00691463: add edi, 0x30 */ {  u32 a = r_edi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00691466: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00691468: jl 0x691451 */ if ((fS!=fO)) goto L_00691451;
L_0069146a:; BB(0x0069146a);
    /* 0069146a: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 0069146d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069146e: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x691473u); f_00687300();
    /* 00691473: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 00691477: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0069147a:; BB(0x0069147a);
    /* 0069147a: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 0069147d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069147f: je 0x69148a */ if (fZ) goto L_0069148a;
L_00691481:; BB(0x00691481);
    /* 00691481: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691482: call 0x691ea0 */ r_esp -= 4; W32(r_esp, 0x691487u); f_00691ea0();
    /* 00691487: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0069148a:; BB(0x0069148a);
    /* 0069148a: lea eax, [esi + 0x50] */ r_eax = (u32)(r_esi+0x50u);
    /* 0069148d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069148e: call 0x695d30 */ r_esp -= 4; W32(r_esp, 0x691493u); f_00695d30();
    /* 00691493: lea ecx, [esi + 0x14] */ r_ecx = (u32)(r_esi+0x14u);
    /* 00691496: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00691497: call 0x697570 */ r_esp -= 4; W32(r_esp, 0x69149cu); f_00697570();
    /* 0069149c: lea edx, [esi + 0x20] */ r_edx = (u32)(r_esi+0x20u);
    /* 0069149f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006914a0: call 0x697570 */ r_esp -= 4; W32(r_esp, 0x6914a5u); f_00697570();
    /* 006914a5: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 006914a9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006914ac:; BB(0x006914ac);
    /* 006914ac: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 006914af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006914b1: je 0x6914f7 */ if (fZ) goto L_006914f7;
L_006914b3:; BB(0x006914b3);
    /* 006914b3: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 006914b6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006914b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006914ba: jle 0x6914db */ if ((fZ||fS!=fO)) goto L_006914db;
L_006914bc:; BB(0x006914bc);
    /* 006914bc: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 006914bf: mov eax, dword ptr [eax + ebx*4] */ r_eax = R32((u32)(r_eax+r_ebx*4));
    /* 006914c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006914c4: je 0x6914d3 */ if (fZ) goto L_006914d3;
L_006914c6:; BB(0x006914c6);
    /* 006914c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006914c7: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x6914ccu); f_00687300();
    /* 006914cc: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006914d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006914d3:; BB(0x006914d3);
    /* 006914d3: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 006914d6: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006914d7: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006914d9: jl 0x6914bc */ if ((fS!=fO)) goto L_006914bc;
L_006914db:; BB(0x006914db);
    /* 006914db: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 006914de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006914df: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x6914e4u); f_00687300();
    /* 006914e4: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 006914e7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006914ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006914ec: je 0x6914f7 */ if (fZ) goto L_006914f7;
L_006914ee:; BB(0x006914ee);
    /* 006914ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006914ef: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x6914f4u); f_00687300();
    /* 006914f4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006914f7:; BB(0x006914f7);
    /* 006914f7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006914f9: je 0x691534 */ if (fZ) goto L_00691534;
L_006914fb:; BB(0x006914fb);
    /* 006914fb: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 006914fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691500: je 0x69150b */ if (fZ) goto L_0069150b;
L_00691502:; BB(0x00691502);
    /* 00691502: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691503: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x691508u); f_00687300();
    /* 00691508: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0069150b:; BB(0x0069150b);
    /* 0069150b: mov eax, dword ptr [esi + 0x44] */ r_eax = R32((u32)(r_esi+0x44u));
    /* 0069150e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691510: je 0x69151b */ if (fZ) goto L_0069151b;
L_00691512:; BB(0x00691512);
    /* 00691512: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691513: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x691518u); f_00687300();
    /* 00691518: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0069151b:; BB(0x0069151b);
    /* 0069151b: mov eax, dword ptr [esi + 0x48] */ r_eax = R32((u32)(r_esi+0x48u));
    /* 0069151e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691520: je 0x69152b */ if (fZ) goto L_0069152b;
L_00691522:; BB(0x00691522);
    /* 00691522: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691523: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x691528u); f_00687300();
    /* 00691528: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0069152b:; BB(0x0069152b);
    /* 0069152b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069152c: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x691531u); f_00687300();
    /* 00691531: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00691534:; BB(0x00691534);
    /* 00691534: mov ecx, 0x1c */ r_ecx = 0x1cu;
    /* 00691539: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069153b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069153c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069153d: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0069153f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_00691540:; BB(0x00691540);
    /* 00691540: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00691541: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00691542: ret  */ FN_RET(0x00691320); r_esp += 4; return;
}

void f_00691550(void) /* sub_691550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00691550);
    /* 00691550: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00691554: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00691555: mov edi, dword ptr [eax + 0x68] */ r_edi = R32((u32)(r_eax+0x68u));
    /* 00691558: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0069155b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069155d: jne 0x691564 */ if (!fZ) goto L_00691564;
L_0069155f:; BB(0x0069155f);
    /* 0069155f: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00691562: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00691563: ret  */ FN_RET(0x00691550); r_esp += 4; return;
L_00691564:; BB(0x00691564);
    /* 00691564: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691566: jne 0x69156d */ if (!fZ) goto L_0069156d;
L_00691568:; BB(0x00691568);
    /* 00691568: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069156b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069156c: ret  */ FN_RET(0x00691550); r_esp += 4; return;
L_0069156d:; BB(0x0069156d);
    /* 0069156d: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00691570: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00691572: jne 0x691579 */ if (!fZ) goto L_00691579;
L_00691574:; BB(0x00691574);
    /* 00691574: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00691577: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00691578: ret  */ FN_RET(0x00691550); r_esp += 4; return;
L_00691579:; BB(0x00691579);
    /* 00691579: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069157a: mov esi, dword ptr [edx + 0xe78] */ r_esi = R32((u32)(r_edx+0xe78u));
    /* 00691580: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00691583: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 0069158a: lea ecx, [esi + 1] */ r_ecx = (u32)(r_esi+0x1u);
    /* 0069158d: sar edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0069158f: mov ecx, esi */ r_ecx = r_esi;
    /* 00691591: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00691592: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 00691595: sar edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00691597: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0069159a: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 0069159d: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 006915a0: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 006915a3: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 006915a6: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 006915a9: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 006915ac: mov dword ptr [edi + 0xb8], ecx */ W32((u32)(r_edi+0xb8u), r_ecx);
    /* 006915b2: mov dword ptr [edi + 0xbc], ecx */ W32((u32)(r_edi+0xbcu), r_ecx);
    /* 006915b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006915ba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006915bb: ret  */ FN_RET(0x00691550); r_esp += 4; return;
}

void f_006915c0(void) /* sub_6915C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006915c0);
    /* 006915c0: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006915c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006915c5: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 006915c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006915cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006915cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006915cd: call 0x690f80 */ r_esp -= 4; W32(r_esp, 0x6915d2u); f_00690f80();
    /* 006915d2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006915d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006915d7: je 0x6915e0 */ if (fZ) goto L_006915e0;
L_006915d9:; BB(0x006915d9);
    /* 006915d9: mov eax, 1 */ r_eax = 0x1u;
    /* 006915de: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006915df: ret  */ FN_RET(0x006915c0); r_esp += 4; return;
L_006915e0:; BB(0x006915e0);
    /* 006915e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006915e1: call 0x691550 */ r_esp -= 4; W32(r_esp, 0x6915e6u); f_00691550();
    /* 006915e6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006915e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006915eb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006915ec: ret  */ FN_RET(0x006915c0); r_esp += 4; return;
}

void f_006915f0(void) /* sub_6915F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006915f0);
    /* 006915f0: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006915f3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006915f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006915f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006915f6: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
    /* 006915fa: mov ebx, dword ptr [esp + 0x50] */ r_ebx = R32((u32)(r_esp+0x50u));
    /* 006915fe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006915ff: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00691602: mov edi, dword ptr [esi + 0x68] */ r_edi = R32((u32)(r_esi+0x68u));
    /* 00691605: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00691609: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 0069160d: mov ebp, dword ptr [eax + 0x1c] */ r_ebp = R32((u32)(r_eax+0x1cu));
    /* 00691610: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691612: mov eax, dword ptr [ebp + 0xe78] */ r_eax = R32((u32)(r_ebp+0xe78u));
    /* 00691618: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 0069161c: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00691620: jne 0x69162f */ if (!fZ) goto L_0069162f;
L_00691622:; BB(0x00691622);
    /* 00691622: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00691623: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00691624: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00691625: mov eax, 0xffffff7d */ r_eax = 0xffffff7du;
    /* 0069162a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069162b: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069162e: ret  */ FN_RET(0x006915f0); r_esp += 4; return;
L_0069162f:; BB(0x0069162f);
    /* 0069162f: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 00691632: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 00691635: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00691637: jle 0x69164b */ if ((fZ||fS!=fO)) goto L_0069164b;
L_00691639:; BB(0x00691639);
    /* 00691639: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069163c: je 0x69164b */ if (fZ) goto L_0069164b;
L_0069163e:; BB(0x0069163e);
    /* 0069163e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069163f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00691640: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00691641: mov eax, 0xffffff7d */ r_eax = 0xffffff7du;
    /* 00691646: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00691647: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069164a: ret  */ FN_RET(0x006915f0); r_esp += 4; return;
L_0069164b:; BB(0x0069164b);
    /* 0069164b: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 0069164e: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 00691651: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 00691654: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 00691657: mov ecx, dword ptr [esi + 0x44] */ r_ecx = R32((u32)(r_esi+0x44u));
    /* 0069165a: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 0069165d: mov edx, eax */ r_edx = r_eax;
    /* 0069165f: mov dword ptr [esi + 0x2c], 0xffffffff */ W32((u32)(r_esi+0x2cu), 0xffffffffu);
    /* 00691666: and edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00691668: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069166b: je 0x69167f */ if (fZ) goto L_0069167f;
L_0069166d:; BB(0x0069166d);
    /* 0069166d: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 00691670: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 00691673: adc ecx, 0 */ { u32 c = fC; u32 a = r_ecx; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 00691676: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691678: jne 0x69167f */ if (!fZ) goto L_0069167f;
L_0069167a:; BB(0x0069167a);
    /* 0069167a: cmp ecx, dword ptr [ebx + 0x3c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x3cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069167d: je 0x691694 */ if (fZ) goto L_00691694;
L_0069167f:; BB(0x0069167f);
    /* 0069167f: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00691682: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00691685: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 00691688: mov dword ptr [edi + 0xb8], eax */ W32((u32)(r_edi+0xb8u), r_eax);
    /* 0069168e: mov dword ptr [edi + 0xbc], eax */ W32((u32)(r_edi+0xbcu), r_eax);
L_00691694:; BB(0x00691694);
    /* 00691694: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00691697: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 0069169a: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 0069169d: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 006916a0: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006916a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 006916a4: je 0x691ab4 */ if (fZ) goto L_00691ab4;
L_006916aa:; BB(0x006916aa);
    /* 006916aa: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 006916ae: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 006916b1: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 006916b4: mov eax, dword ptr [ebp + eax*4] */ r_eax = R32((u32)(r_ebp+r_eax*4));
    /* 006916b8: lea ecx, [edx + 1] */ r_ecx = (u32)(r_edx+0x1u);
    /* 006916bb: mov ebp, dword ptr [ebp + 4] */ r_ebp = R32((u32)(r_ebp+0x4u));
    /* 006916be: sar eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 006916c0: sar edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 006916c2: sar ebp, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 006916c4: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 006916c7: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006916cb: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 006916ce: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006916cf: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 006916d1: mov eax, dword ptr [esi + 0x4c] */ r_eax = R32((u32)(r_esi+0x4cu));
    /* 006916d4: adc eax, edx */ { u32 c = fC; u32 a = r_eax; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 006916d6: mov dword ptr [esi + 0x48], ecx */ W32((u32)(r_esi+0x48u), r_ecx);
    /* 006916d9: mov ecx, dword ptr [esi + 0x50] */ r_ecx = R32((u32)(r_esi+0x50u));
    /* 006916dc: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 006916df: mov eax, dword ptr [ebx + 0x5c] */ r_eax = R32((u32)(r_ebx+0x5cu));
    /* 006916e2: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 006916e6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006916e7: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 006916e9: mov eax, dword ptr [esi + 0x54] */ r_eax = R32((u32)(r_esi+0x54u));
    /* 006916ec: adc eax, edx */ { u32 c = fC; u32 a = r_eax; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 006916ee: mov dword ptr [esi + 0x50], ecx */ W32((u32)(r_esi+0x50u), r_ecx);
    /* 006916f1: mov ecx, dword ptr [esi + 0x58] */ r_ecx = R32((u32)(r_esi+0x58u));
    /* 006916f4: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 006916f7: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 006916fa: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006916fb: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 006916fd: mov eax, dword ptr [esi + 0x5c] */ r_eax = R32((u32)(r_esi+0x5cu));
    /* 00691700: adc eax, edx */ { u32 c = fC; u32 a = r_eax; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 00691702: mov dword ptr [esi + 0x58], ecx */ W32((u32)(r_esi+0x58u), r_ecx);
    /* 00691705: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00691708: mov dword ptr [esi + 0x5c], eax */ W32((u32)(r_esi+0x5cu), r_eax);
    /* 0069170b: mov eax, dword ptr [ebx + 0x64] */ r_eax = R32((u32)(r_ebx+0x64u));
    /* 0069170e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069170f: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 00691711: mov eax, dword ptr [esi + 0x64] */ r_eax = R32((u32)(r_esi+0x64u));
    /* 00691714: adc eax, edx */ { u32 c = fC; u32 a = r_eax; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 00691716: mov dword ptr [esi + 0x60], ecx */ W32((u32)(r_esi+0x60u), r_ecx);
    /* 00691719: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 0069171c: mov dword ptr [esi + 0x64], eax */ W32((u32)(r_esi+0x64u), r_eax);
    /* 0069171f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00691721: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691723: je 0x69172f */ if (fZ) goto L_0069172f;
L_00691725:; BB(0x00691725);
    /* 00691725: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 00691729: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0069172d: jmp 0x691737 */ goto L_00691737;
L_0069172f:; BB(0x0069172f);
    /* 0069172f: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00691733: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
L_00691737:; BB(0x00691737);
    /* 00691737: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0069173b: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0069173d: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 00691741: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00691744: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00691746: jle 0x6919ca */ if ((fZ||fS!=fO)) goto L_006919ca;
L_0069174c:; BB(0x0069174c);
    /* 0069174c: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 0069174f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691751: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00691754: je 0x691899 */ if (fZ) goto L_00691899;
L_0069175a:; BB(0x0069175a);
    /* 0069175a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069175c: je 0x6917f9 */ if (fZ) goto L_006917f9;
L_00691762:; BB(0x00691762);
    /* 00691762: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00691766: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 0069176a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0069176d: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069176f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691770: call 0x698770 */ r_esp -= 4; W32(r_esp, 0x691775u); f_00698770();
    /* 00691775: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00691778: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069177b: mov edx, dword ptr [ecx + ebp*4] */ r_edx = R32((u32)(r_ecx+r_ebp*4));
    /* 0069177e: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00691782: lea ecx, [edx + ecx*4] */ r_ecx = (u32)(r_edx+r_ecx*4);
    /* 00691785: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00691787: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 0069178b: mov edx, dword ptr [edx + ebp*4] */ r_edx = R32((u32)(r_edx+r_ebp*4));
    /* 0069178e: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00691792: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00691796: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00691798: jle 0x69197a */ if ((fZ||fS!=fO)) goto L_0069197a;
L_0069179e:; BB(0x0069179e);
    /* 0069179e: lea edx, [eax + edx*4 - 4] */ r_edx = (u32)(r_eax+r_edx*4+0xfffffffcu);
    /* 006917a2: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 006917a6: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 006917aa: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006917ac: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 006917b0: mov edx, ecx */ r_edx = r_ecx;
    /* 006917b2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006917b4: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 006917b8: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 006917bc: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 006917c0: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006917c4: jmp 0x6917ca */ goto L_006917ca;
L_006917c6:; BB(0x006917c6);
    /* 006917c6: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
L_006917ca:; BB(0x006917ca);
    /* 006917ca: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006917cc: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006917cf: fld dword ptr [edx + eax] */ FPUSH(R_F32((u32)(r_edx+r_eax)));
    /* 006917d2: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 006917d4: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 006917d8: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 006917da: fmul dword ptr [ecx - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xfffffffcu));
    /* 006917dd: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006917e0: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006917e4: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 006917e8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006917ea: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006917eb: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 006917ef: fstp dword ptr [ecx - 4] */ W_F32((u32)(r_ecx+0xfffffffcu), ST(0)); FPOP();
    /* 006917f2: jne 0x6917c6 */ if (!fZ) goto L_006917c6;
L_006917f4:; BB(0x006917f4);
    /* 006917f4: jmp 0x69197a */ goto L_0069197a;
L_006917f9:; BB(0x006917f9);
    /* 006917f9: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006917fd: mov ebx, dword ptr [esp + 0x50] */ r_ebx = R32((u32)(r_esp+0x50u));
    /* 00691801: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00691804: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00691806: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00691807: call 0x698770 */ r_esp -= 4; W32(r_esp, 0x69180cu); f_00698770();
    /* 0069180c: mov ecx, eax */ r_ecx = r_eax;
    /* 0069180e: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00691812: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00691813: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00691815: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00691818: mov ebx, eax */ r_ebx = r_eax;
    /* 0069181a: mov eax, edi */ r_eax = r_edi;
    /* 0069181c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069181d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069181f: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 00691822: sar ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00691824: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00691826: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00691828: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0069182c: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069182e: mov eax, dword ptr [edx + ebp*4] */ r_eax = R32((u32)(r_edx+r_ebp*4));
    /* 00691831: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00691833: lea eax, [eax + ebx*4] */ r_eax = (u32)(r_eax+r_ebx*4);
    /* 00691836: mov ebx, dword ptr [esp + 0x54] */ r_ebx = R32((u32)(r_esp+0x54u));
    /* 0069183a: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0069183e: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00691840: mov edx, dword ptr [edx + ebp*4] */ r_edx = R32((u32)(r_edx+r_ebp*4));
    /* 00691843: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 00691847: jle 0x69197a */ if ((fZ||fS!=fO)) goto L_0069197a;
L_0069184d:; BB(0x0069184d);
    /* 0069184d: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00691851: lea edx, [ecx + edi*4 - 4] */ r_edx = (u32)(r_ecx+r_edi*4+0xfffffffcu);
    /* 00691855: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00691857: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 0069185b: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 0069185f: mov ebx, eax */ r_ebx = r_eax;
    /* 00691861: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00691863: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00691867: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 0069186b: jmp 0x691871 */ goto L_00691871;
L_0069186d:; BB(0x0069186d);
    /* 0069186d: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
L_00691871:; BB(0x00691871);
    /* 00691871: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00691873: sub edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00691876: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00691879: fld dword ptr [ecx + ebx] */ FPUSH(R_F32((u32)(r_ecx+r_ebx)));
    /* 0069187c: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 0069187e: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00691881: fmul dword ptr [eax - 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xfffffffcu));
    /* 00691884: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00691888: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00691889: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0069188b: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 0069188f: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
    /* 00691892: jne 0x69186d */ if (!fZ) goto L_0069186d;
L_00691894:; BB(0x00691894);
    /* 00691894: jmp 0x691976 */ goto L_00691976;
L_00691899:; BB(0x00691899);
    /* 00691899: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069189b: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0069189f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006918a2: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 006918a6: je 0x6919fb */ if (fZ) goto L_006919fb;
L_006918ac:; BB(0x006918ac);
    /* 006918ac: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006918ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006918af: call 0x698770 */ r_esp -= 4; W32(r_esp, 0x6918b4u); f_00698770();
    /* 006918b4: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 006918b7: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006918bb: mov ebx, eax */ r_ebx = r_eax;
    /* 006918bd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006918c0: mov eax, dword ptr [edx + ebp*4] */ r_eax = R32((u32)(r_edx+r_ebp*4));
    /* 006918c3: lea ebp, [eax + ecx*4] */ r_ebp = (u32)(r_eax+r_ecx*4);
    /* 006918c6: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 006918ca: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006918cb: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006918cd: mov ecx, eax */ r_ecx = r_eax;
    /* 006918cf: mov eax, edi */ r_eax = r_edi;
    /* 006918d1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006918d2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006918d4: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 006918d8: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006918da: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006918dc: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 006918e0: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006918e4: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006918e6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006918e8: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 006918ec: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 006918ef: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006918f1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006918f3: lea ecx, [eax + ecx*4] */ r_ecx = (u32)(r_eax+r_ecx*4);
    /* 006918f6: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 006918fa: jle 0x69194d */ if ((fZ||fS!=fO)) goto L_0069194d;
L_006918fc:; BB(0x006918fc);
    /* 006918fc: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00691900: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00691902: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00691904: lea eax, [ebx + edi*4 - 4] */ r_eax = (u32)(r_ebx+r_edi*4+0xfffffffcu);
    /* 00691908: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0069190c: mov edx, ebx */ r_edx = r_ebx;
    /* 0069190e: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00691910: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00691914: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 00691918: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 0069191c: jmp 0x691922 */ goto L_00691922;
L_0069191e:; BB(0x0069191e);
    /* 0069191e: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
L_00691922:; BB(0x00691922);
    /* 00691922: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 00691926: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00691928: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069192b: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069192e: fld dword ptr [edx + ebx] */ FPUSH(R_F32((u32)(r_edx+r_ebx)));
    /* 00691931: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 00691933: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00691936: fmul dword ptr [ecx - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xfffffffcu));
    /* 00691939: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0069193d: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0069193e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00691940: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00691944: fstp dword ptr [ecx - 4] */ W_F32((u32)(r_ecx+0xfffffffcu), ST(0)); FPOP();
    /* 00691947: jne 0x69191e */ if (!fZ) goto L_0069191e;
L_00691949:; BB(0x00691949);
    /* 00691949: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
L_0069194d:; BB(0x0069194d);
    /* 0069194d: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00691951: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 00691955: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00691957: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00691959: jge 0x691972 */ if ((fS==fO)) goto L_00691972;
L_0069195b:; BB(0x0069195b);
    /* 0069195b: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 0069195f: lea eax, [ebp + edx*4] */ r_eax = (u32)(r_ebp+r_edx*4);
    /* 00691963: sub ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00691965: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
L_00691967:; BB(0x00691967);
    /* 00691967: mov edx, dword ptr [ebx + eax] */ r_edx = R32((u32)(r_ebx+r_eax));
    /* 0069196a: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0069196c: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069196f: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00691970: jne 0x691967 */ if (!fZ) goto L_00691967;
L_00691972:; BB(0x00691972);
    /* 00691972: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
L_00691976:; BB(0x00691976);
    /* 00691976: mov ebx, dword ptr [esp + 0x54] */ r_ebx = R32((u32)(r_esp+0x54u));
L_0069197a:; BB(0x0069197a);
    /* 0069197a: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0069197d: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00691981: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00691983: mov eax, dword ptr [eax + ebp*4] */ r_eax = R32((u32)(r_eax+r_ebp*4));
    /* 00691986: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00691989: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069198b: mov ecx, dword ptr [edx + ebp*4] */ r_ecx = R32((u32)(r_edx+r_ebp*4));
    /* 0069198e: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00691992: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00691995: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00691997: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0069199b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069199d: jle 0x6919b8 */ if ((fZ||fS!=fO)) goto L_006919b8;
L_0069199f:; BB(0x0069199f);
    /* 0069199f: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006919a1: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
L_006919a5:; BB(0x006919a5);
    /* 006919a5: mov edx, dword ptr [ecx + eax] */ r_edx = R32((u32)(r_ecx+r_eax));
    /* 006919a8: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 006919aa: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 006919ae: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006919b1: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 006919b2: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 006919b6: jne 0x6919a5 */ if (!fZ) goto L_006919a5;
L_006919b8:; BB(0x006919b8);
    /* 006919b8: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 006919bc: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006919bd: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 006919c1: cmp ebp, dword ptr [eax + 4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006919c4: jl 0x69174c */ if ((fS!=fO)) goto L_0069174c;
L_006919ca:; BB(0x006919ca);
    /* 006919ca: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 006919cd: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 006919d1: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 006919d4: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 006919d8: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 006919da: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 006919dc: not ecx */ r_ecx = ~r_ecx;
    /* 006919de: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006919e0: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006919e3: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 006919e6: jne 0x691a74 */ if (!fZ) goto L_00691a74;
L_006919ec:; BB(0x006919ec);
    /* 006919ec: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006919f0: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 006919f3: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 006919f6: jmp 0x691ab0 */ goto L_00691ab0;
L_006919fb:; BB(0x006919fb);
    /* 006919fb: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006919fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006919fe: call 0x698770 */ r_esp -= 4; W32(r_esp, 0x691a03u); f_00698770();
    /* 00691a03: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 00691a06: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00691a09: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00691a0b: mov ecx, dword ptr [edx + ebp*4] */ r_ecx = R32((u32)(r_edx+r_ebp*4));
    /* 00691a0e: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00691a12: lea ecx, [ecx + edx*4] */ r_ecx = (u32)(r_ecx+r_edx*4);
    /* 00691a15: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00691a17: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 00691a1b: mov edx, dword ptr [edx + ebp*4] */ r_edx = R32((u32)(r_edx+r_ebp*4));
    /* 00691a1e: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00691a22: jle 0x69197a */ if ((fZ||fS!=fO)) goto L_0069197a;
L_00691a28:; BB(0x00691a28);
    /* 00691a28: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 00691a2c: lea edx, [eax + edi*4 - 4] */ r_edx = (u32)(r_eax+r_edi*4+0xfffffffcu);
    /* 00691a30: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00691a32: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00691a36: mov dword ptr [esp + 0x48], ebx */ W32((u32)(r_esp+0x48u), r_ebx);
    /* 00691a3a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00691a3c: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00691a3e: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 00691a42: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 00691a46: jmp 0x691a4c */ goto L_00691a4c;
L_00691a48:; BB(0x00691a48);
    /* 00691a48: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
L_00691a4c:; BB(0x00691a4c);
    /* 00691a4c: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00691a4e: sub edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00691a51: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00691a54: fld dword ptr [eax + ebx] */ FPUSH(R_F32((u32)(r_eax+r_ebx)));
    /* 00691a57: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 00691a59: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00691a5c: fmul dword ptr [ecx - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xfffffffcu));
    /* 00691a5f: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00691a63: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00691a64: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00691a66: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00691a6a: fstp dword ptr [ecx - 4] */ W_F32((u32)(r_ecx+0xfffffffcu), ST(0)); FPOP();
    /* 00691a6d: jne 0x691a48 */ if (!fZ) goto L_00691a48;
L_00691a6f:; BB(0x00691a6f);
    /* 00691a6f: jmp 0x691976 */ goto L_00691976;
L_00691a74:; BB(0x00691a74);
    /* 00691a74: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00691a78: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 00691a7b: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00691a7f: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 00691a82: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 00691a85: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00691a86: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00691a89: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00691a8b: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 00691a8e: mov edi, eax */ r_edi = r_eax;
    /* 00691a90: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 00691a93: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00691a97: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00691a98: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00691a9b: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00691a9d: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00691aa0: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00691aa3: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00691aa5: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00691aa9: sar edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00691aab: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00691aad: mov dword ptr [esi + 0x14], edi */ W32((u32)(r_esi+0x14u), r_edi);
L_00691ab0:; BB(0x00691ab0);
    /* 00691ab0: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
L_00691ab4:; BB(0x00691ab4);
    /* 00691ab4: mov eax, dword ptr [edi + 0xb8] */ r_eax = R32((u32)(r_edi+0xb8u));
    /* 00691aba: mov ecx, dword ptr [edi + 0xbc] */ r_ecx = R32((u32)(r_edi+0xbcu));
    /* 00691ac0: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00691ac2: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691ac5: jne 0x691ad1 */ if (!fZ) goto L_00691ad1;
L_00691ac7:; BB(0x00691ac7);
    /* 00691ac7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00691ac9: mov dword ptr [edi + 0xbc], eax */ W32((u32)(r_edi+0xbcu), r_eax);
    /* 00691acf: jmp 0x691b0c */ goto L_00691b0c;
L_00691ad1:; BB(0x00691ad1);
    /* 00691ad1: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 00691ad4: mov eax, dword ptr [ebp + eax*4] */ r_eax = R32((u32)(r_ebp+r_eax*4));
    /* 00691ad8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00691ad9: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00691adc: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00691ade: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 00691ae1: mov ecx, eax */ r_ecx = r_eax;
    /* 00691ae3: mov eax, dword ptr [ebp + edx*4] */ r_eax = R32((u32)(r_ebp+r_edx*4));
    /* 00691ae7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00691ae8: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00691aeb: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00691aed: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00691af0: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00691af3: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00691af5: mov ecx, dword ptr [edi + 0xb8] */ r_ecx = R32((u32)(r_edi+0xb8u));
    /* 00691afb: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00691afc: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 00691afe: mov ecx, dword ptr [edi + 0xbc] */ r_ecx = R32((u32)(r_edi+0xbcu));
    /* 00691b04: adc edx, ecx */ { u32 c = fC; u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 00691b06: mov dword ptr [edi + 0xbc], edx */ W32((u32)(r_edi+0xbcu), r_edx);
L_00691b0c:; BB(0x00691b0c);
    /* 00691b0c: mov dword ptr [edi + 0xb8], eax */ W32((u32)(r_edi+0xb8u), r_eax);
    /* 00691b12: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 00691b15: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 00691b18: mov edx, ecx */ r_edx = r_ecx;
    /* 00691b1a: and edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00691b1c: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691b1f: jne 0x691ba6 */ if (!fZ) goto L_00691ba6;
L_00691b25:; BB(0x00691b25);
    /* 00691b25: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00691b28: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00691b2b: mov edx, eax */ r_edx = r_eax;
    /* 00691b2d: and edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00691b2f: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691b32: je 0x691c25 */ if (fZ) goto L_00691c25;
L_00691b38:; BB(0x00691b38);
    /* 00691b38: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00691b3b: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 00691b3e: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 00691b41: mov eax, dword ptr [edi + 0xb8] */ r_eax = R32((u32)(r_edi+0xb8u));
    /* 00691b47: mov edi, dword ptr [edi + 0xbc] */ r_edi = R32((u32)(r_edi+0xbcu));
    /* 00691b4d: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00691b4f: jl 0x691c25 */ if ((fS!=fO)) goto L_00691c25;
L_00691b55:; BB(0x00691b55);
    /* 00691b55: jg 0x691b5f */ if ((!fZ&&fS==fO)) goto L_00691b5f;
L_00691b57:; BB(0x00691b57);
    /* 00691b57: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00691b59: jbe 0x691c25 */ if ((fC||fZ)) goto L_00691c25;
L_00691b5f:; BB(0x00691b5f);
    /* 00691b5f: mov ebp, dword ptr [ebx + 0x2c] */ r_ebp = R32((u32)(r_ebx+0x2cu));
    /* 00691b62: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691b64: je 0x691b7d */ if (fZ) goto L_00691b7d;
L_00691b66:; BB(0x00691b66);
    /* 00691b66: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 00691b68: mov edx, edi */ r_edx = r_edi;
    /* 00691b6a: sbb edx, ecx */ { u32 c = fC; u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00691b6c: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00691b70: call 0x6874a0 */ r_esp -= 4; W32(r_esp, 0x691b75u); f_006874a0();
    /* 00691b75: sub dword ptr [esi + 0x14], eax */ { u32 ad = (u32)(r_esi+0x14u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00691b78: jmp 0x691c25 */ goto L_00691c25;
L_00691b7d:; BB(0x00691b7d);
    /* 00691b7d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 00691b7f: mov edx, edi */ r_edx = r_edi;
    /* 00691b81: sbb edx, ecx */ { u32 c = fC; u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00691b83: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00691b87: call 0x6874a0 */ r_esp -= 4; W32(r_esp, 0x691b8cu); f_006874a0();
    /* 00691b8c: mov edi, dword ptr [esi + 0x18] */ r_edi = R32((u32)(r_esi+0x18u));
    /* 00691b8f: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00691b91: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 00691b94: mov ecx, edi */ r_ecx = r_edi;
    /* 00691b96: mov dword ptr [esi + 0x18], edi */ W32((u32)(r_esi+0x18u), r_edi);
    /* 00691b99: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00691b9b: jle 0x691c25 */ if ((fZ||fS!=fO)) goto L_00691c25;
L_00691ba1:; BB(0x00691ba1);
    /* 00691ba1: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 00691ba4: jmp 0x691c25 */ goto L_00691c25;
L_00691ba6:; BB(0x00691ba6);
    /* 00691ba6: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 00691ba9: mov eax, dword ptr [ebp + eax*4] */ r_eax = R32((u32)(r_ebp+r_eax*4));
    /* 00691bad: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00691bae: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00691bb1: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00691bb3: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 00691bb6: mov edi, eax */ r_edi = r_eax;
    /* 00691bb8: mov eax, dword ptr [ebp + edx*4] */ r_eax = R32((u32)(r_ebp+r_edx*4));
    /* 00691bbc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00691bbd: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00691bc0: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00691bc2: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00691bc5: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00691bc8: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00691bca: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00691bcb: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 00691bcd: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 00691bd0: adc edx, ecx */ { u32 c = fC; u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 00691bd2: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00691bd5: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 00691bd8: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00691bdb: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00691bde: mov edx, eax */ r_edx = r_eax;
    /* 00691be0: and edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00691be2: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691be5: je 0x691c25 */ if (fZ) goto L_00691c25;
L_00691be7:; BB(0x00691be7);
    /* 00691be7: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 00691bea: mov edi, dword ptr [esi + 0x3c] */ r_edi = R32((u32)(r_esi+0x3cu));
    /* 00691bed: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691bef: jne 0x691bf5 */ if (!fZ) goto L_00691bf5;
L_00691bf1:; BB(0x00691bf1);
    /* 00691bf1: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691bf3: je 0x691c25 */ if (fZ) goto L_00691c25;
L_00691bf5:; BB(0x00691bf5);
    /* 00691bf5: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00691bf7: jl 0x691c19 */ if ((fS!=fO)) goto L_00691c19;
L_00691bf9:; BB(0x00691bf9);
    /* 00691bf9: jg 0x691bff */ if ((!fZ&&fS==fO)) goto L_00691bff;
L_00691bfb:; BB(0x00691bfb);
    /* 00691bfb: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00691bfd: jbe 0x691c19 */ if ((fC||fZ)) goto L_00691c19;
L_00691bff:; BB(0x00691bff);
    /* 00691bff: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00691c02: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 00691c05: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00691c07: je 0x691c19 */ if (fZ) goto L_00691c19;
L_00691c09:; BB(0x00691c09);
    /* 00691c09: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 00691c0c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00691c0e: je 0x691c19 */ if (fZ) goto L_00691c19;
L_00691c10:; BB(0x00691c10);
    /* 00691c10: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00691c14: sar eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00691c16: sub dword ptr [esi + 0x14], eax */ { u32 ad = (u32)(r_esi+0x14u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_00691c19:; BB(0x00691c19);
    /* 00691c19: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00691c1c: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00691c1f: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00691c22: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
L_00691c25:; BB(0x00691c25);
    /* 00691c25: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 00691c28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691c2a: je 0x691c33 */ if (fZ) goto L_00691c33;
L_00691c2c:; BB(0x00691c2c);
    /* 00691c2c: mov dword ptr [esi + 0x20], 1 */ W32((u32)(r_esi+0x20u), 0x1u);
L_00691c33:; BB(0x00691c33);
    /* 00691c33: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00691c34: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00691c35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00691c36: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00691c38: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00691c39: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00691c3c: ret  */ FN_RET(0x006915f0); r_esp += 4; return;
}

void f_00691c40(void) /* sub_691C40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00691c40);
    /* 00691c40: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00691c44: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00691c45: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 00691c48: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00691c4b: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00691c4e: jle 0x691c94 */ if ((fZ||fS!=fO)) goto L_00691c94;
L_00691c50:; BB(0x00691c50);
    /* 00691c50: cmp eax, dword ptr [ecx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00691c53: jge 0x691c94 */ if ((fS==fO)) goto L_00691c94;
L_00691c55:; BB(0x00691c55);
    /* 00691c55: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00691c59: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691c5b: je 0x691c8a */ if (fZ) goto L_00691c8a;
L_00691c5d:; BB(0x00691c5d);
    /* 00691c5d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00691c5e: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 00691c61: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00691c63: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00691c65: jle 0x691c84 */ if ((fZ||fS!=fO)) goto L_00691c84;
L_00691c67:; BB(0x00691c67);
    /* 00691c67: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
L_00691c68:; BB(0x00691c68);
    /* 00691c68: mov edi, dword ptr [ecx + 8] */ r_edi = R32((u32)(r_ecx+0x8u));
    /* 00691c6b: mov ebx, dword ptr [ecx + 0x18] */ r_ebx = R32((u32)(r_ecx+0x18u));
    /* 00691c6e: mov edi, dword ptr [edi + eax*4] */ r_edi = R32((u32)(r_edi+r_eax*4));
    /* 00691c71: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00691c72: lea edi, [edi + ebx*4] */ r_edi = (u32)(r_edi+r_ebx*4);
    /* 00691c75: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 00691c78: mov dword ptr [ebx + eax*4 - 4], edi */ W32((u32)(r_ebx+r_eax*4+0xfffffffcu), r_edi);
    /* 00691c7c: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 00691c7f: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00691c81: jl 0x691c68 */ if ((fS!=fO)) goto L_00691c68;
L_00691c83:; BB(0x00691c83);
    /* 00691c83: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_00691c84:; BB(0x00691c84);
    /* 00691c84: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 00691c87: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00691c88: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
L_00691c8a:; BB(0x00691c8a);
    /* 00691c8a: mov eax, dword ptr [ecx + 0x14] */ r_eax = R32((u32)(r_ecx+0x14u));
    /* 00691c8d: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00691c90: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00691c92: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00691c93: ret  */ FN_RET(0x00691c40); r_esp += 4; return;
L_00691c94:; BB(0x00691c94);
    /* 00691c94: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00691c96: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00691c97: ret  */ FN_RET(0x00691c40); r_esp += 4; return;
}

void f_00691ca0(void) /* sub_691CA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00691ca0);
    /* 00691ca0: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00691ca4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00691ca8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691caa: je 0x691cc0 */ if (fZ) goto L_00691cc0;
L_00691cac:; BB(0x00691cac);
    /* 00691cac: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00691caf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00691cb0: mov esi, dword ptr [eax + 0x14] */ r_esi = R32((u32)(r_eax+0x14u));
    /* 00691cb3: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00691cb5: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00691cb7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00691cb8: jle 0x691cc0 */ if ((fZ||fS!=fO)) goto L_00691cc0;
L_00691cba:; BB(0x00691cba);
    /* 00691cba: mov eax, 0xffffff7d */ r_eax = 0xffffff7du;
    /* 00691cbf: ret  */ FN_RET(0x00691ca0); r_esp += 4; return;
L_00691cc0:; BB(0x00691cc0);
    /* 00691cc0: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00691cc3: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00691cc5: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00691cc8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00691cca: ret  */ FN_RET(0x00691ca0); r_esp += 4; return;
}

void f_00691cd0(void) /* sub_691CD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00691cd0);
    /* 00691cd0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00691cd1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00691cd2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00691cd3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00691cd4: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00691cd8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00691cd9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00691cda: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 00691cdd: lea ebx, [esi + 4] */ r_ebx = (u32)(r_esi+0x4u);
    /* 00691ce0: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 00691ce3: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 00691ce6: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00691cea: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00691ced: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00691cf1: call 0x690eb0 */ r_esp -= 4; W32(r_esp, 0x691cf6u); f_00690eb0();
    /* 00691cf6: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00691cfa: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 00691cfd: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00691cff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691d00: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00691d01: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00691d02: call 0x69d360 */ r_esp -= 4; W32(r_esp, 0x691d07u); f_0069d360();
    /* 00691d07: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00691d09: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00691d0a: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x691d0fu); f_0069d470();
    /* 00691d0f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00691d12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691d14: je 0x691d21 */ if (fZ) goto L_00691d21;
L_00691d16:; BB(0x00691d16);
    /* 00691d16: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00691d17: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00691d18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00691d19: mov eax, 0xffffff79 */ r_eax = 0xffffff79u;
    /* 00691d1e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00691d1f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00691d20: ret  */ FN_RET(0x00691cd0); r_esp += 4; return;
L_00691d21:; BB(0x00691d21);
    /* 00691d21: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00691d25: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00691d28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691d29: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00691d2a: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x691d2fu); f_0069d470();
    /* 00691d2f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00691d32: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691d35: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00691d39: jne 0x691d46 */ if (!fZ) goto L_00691d46;
L_00691d3b:; BB(0x00691d3b);
    /* 00691d3b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00691d3c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00691d3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00691d3e: mov eax, 0xffffff78 */ r_eax = 0xffffff78u;
    /* 00691d43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00691d44: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00691d45: ret  */ FN_RET(0x00691cd0); r_esp += 4; return;
L_00691d46:; BB(0x00691d46);
    /* 00691d46: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00691d4a: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 00691d4d: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 00691d51: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00691d53: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00691d55: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691d57: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 00691d5a: je 0x691d85 */ if (fZ) goto L_00691d85;
L_00691d5c:; BB(0x00691d5c);
    /* 00691d5c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00691d5e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00691d5f: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x691d64u); f_0069d470();
    /* 00691d64: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00691d66: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00691d67: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 00691d6a: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x691d6fu); f_0069d470();
    /* 00691d6f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00691d72: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691d75: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 00691d78: jne 0x691d8b */ if (!fZ) goto L_00691d8b;
L_00691d7a:; BB(0x00691d7a);
    /* 00691d7a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00691d7b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00691d7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00691d7d: mov eax, 0xffffff78 */ r_eax = 0xffffff78u;
    /* 00691d82: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00691d83: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00691d84: ret  */ FN_RET(0x00691cd0); r_esp += 4; return;
L_00691d85:; BB(0x00691d85);
    /* 00691d85: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 00691d88: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
L_00691d8b:; BB(0x00691d8b);
    /* 00691d8b: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 00691d8e: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00691d91: mov ecx, dword ptr [edi + 0x14] */ r_ecx = R32((u32)(r_edi+0x14u));
    /* 00691d94: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 00691d97: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 00691d9a: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 00691d9d: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 00691da0: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 00691da3: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 00691da6: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 00691da9: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00691dad: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 00691db0: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 00691db3: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 00691db6: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 00691db9: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00691dbc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00691dbd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00691dbe: call 0x690e40 */ r_esp -= 4; W32(r_esp, 0x691dc3u); f_00690e40();
    /* 00691dc3: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00691dc5: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00691dc8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00691dcb: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00691dcd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00691dcf: jle 0x691dee */ if ((fZ||fS!=fO)) goto L_00691dee;
L_00691dd1:; BB(0x00691dd1);
    /* 00691dd1: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 00691dd4: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00691dd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691dd8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00691dd9: call 0x690e40 */ r_esp -= 4; W32(r_esp, 0x691ddeu); f_00690e40();
    /* 00691dde: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00691de0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00691de3: mov dword ptr [ecx + edi*4], eax */ W32((u32)(r_ecx+r_edi*4), r_eax);
    /* 00691de6: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00691de9: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00691dea: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00691dec: jl 0x691dd1 */ if ((fS!=fO)) goto L_00691dd1;
L_00691dee:; BB(0x00691dee);
    /* 00691dee: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00691df2: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00691df6: mov eax, dword ptr [ecx + edx*4 + 0x20] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x20u));
    /* 00691dfa: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00691dfd: mov edx, dword ptr [ecx + eax*4 + 0x120] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x120u));
    /* 00691e04: mov eax, dword ptr [ecx + eax*4 + 0x220] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x220u));
    /* 00691e0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691e0c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00691e0d: mov edx, dword ptr [edx*4 + 0x7878e4] */ r_edx = R32((u32)(r_edx*4+0x7878e4u));
    /* 00691e14: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x691e17u); call_ind(t); }
    /* 00691e17: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00691e1a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00691e1b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00691e1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00691e1d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00691e1e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00691e1f: ret  */ FN_RET(0x00691cd0); r_esp += 4; return;
}

void f_00691e20(void) /* sub_691E20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00691e20);
    /* 00691e20: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00691e24: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00691e27: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00691e28: mov esi, dword ptr [eax + 0x1c] */ r_esi = R32((u32)(r_eax+0x1cu));
    /* 00691e2b: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00691e2f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00691e32: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00691e34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00691e35: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00691e39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00691e3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691e3b: call 0x69d360 */ r_esp -= 4; W32(r_esp, 0x691e40u); f_0069d360();
    /* 00691e40: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 00691e44: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00691e46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00691e47: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x691e4cu); f_0069d470();
    /* 00691e4c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00691e4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691e51: je 0x691e5d */ if (fZ) goto L_00691e5d;
L_00691e53:; BB(0x00691e53);
    /* 00691e53: mov eax, 0xffffff79 */ r_eax = 0xffffff79u;
    /* 00691e58: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00691e59: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00691e5c: ret  */ FN_RET(0x00691e20); r_esp += 4; return;
L_00691e5d:; BB(0x00691e5d);
    /* 00691e5d: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00691e60: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00691e62: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00691e65: jle 0x691e6f */ if ((fZ||fS!=fO)) goto L_00691e6f;
L_00691e67:; BB(0x00691e67);
    /* 00691e67: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00691e69: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00691e6a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00691e6d: jg 0x691e67 */ if ((!fZ&&fS==fO)) goto L_00691e67;
L_00691e6f:; BB(0x00691e6f);
    /* 00691e6f: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00691e73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00691e74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00691e75: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x691e7au); f_0069d470();
    /* 00691e7a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00691e7d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691e80: jne 0x691e8c */ if (!fZ) goto L_00691e8c;
L_00691e82:; BB(0x00691e82);
    /* 00691e82: mov eax, 0xffffff78 */ r_eax = 0xffffff78u;
    /* 00691e87: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00691e88: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00691e8b: ret  */ FN_RET(0x00691e20); r_esp += 4; return;
L_00691e8c:; BB(0x00691e8c);
    /* 00691e8c: mov eax, dword ptr [esi + eax*4 + 0x20] */ r_eax = R32((u32)(r_esi+r_eax*4+0x20u));
    /* 00691e90: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00691e92: mov eax, dword ptr [esi + ecx*4] */ r_eax = R32((u32)(r_esi+r_ecx*4));
    /* 00691e95: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00691e96: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00691e99: ret  */ FN_RET(0x00691e20); r_esp += 4; return;
}

void f_00691ea0(void) /* sub_691EA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00691ea0);
    /* 00691ea0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00691ea4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691ea6: je 0x691ebe */ if (fZ) goto L_00691ebe;
L_00691ea8:; BB(0x00691ea8);
    /* 00691ea8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00691ea9: mov ecx, 9 */ r_ecx = 0x9u;
    /* 00691eae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00691eb0: mov edi, edx */ r_edi = r_edx;
    /* 00691eb2: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00691eb4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00691eb5: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00691eb9: jmp 0x687300 */ f_00687300(); return;
L_00691ebe:; BB(0x00691ebe);
    /* 00691ebe: ret  */ FN_RET(0x00691ea0); r_esp += 4; return;
}

void f_00691ec0(void) /* sub_691EC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00691ec0);
    /* 00691ec0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00691ec4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691ec6: je 0x691ede */ if (fZ) goto L_00691ede;
L_00691ec8:; BB(0x00691ec8);
    /* 00691ec8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00691ec9: mov ecx, 0x84 */ r_ecx = 0x84u;
    /* 00691ece: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00691ed0: mov edi, edx */ r_edi = r_edx;
    /* 00691ed2: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00691ed4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00691ed5: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00691ed9: jmp 0x687300 */ f_00687300(); return;
L_00691ede:; BB(0x00691ede);
    /* 00691ede: ret  */ FN_RET(0x00691ec0); r_esp += 4; return;
}

void f_00691ee0(void) /* sub_691EE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00691ee0);
    /* 00691ee0: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00691ee3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00691ee4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00691ee5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00691ee6: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 00691eea: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00691eeb: mov ecx, 0xc */ r_ecx = 0xcu;
    /* 00691ef0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00691ef2: mov edi, esi */ r_edi = r_esi;
    /* 00691ef4: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00691ef6: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 00691efa: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00691efd: mov dword ptr [esp + 0x18], 0xffffff9d */ W32((u32)(r_esp+0x18u), 0xffffff9du);
    /* 00691f05: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00691f0a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00691f0c: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 00691f0f: fild dword ptr [edi] */ FPUSH((long double)(i32)R32((u32)(r_edi)));
    /* 00691f11: fmul dword ptr [0x6e5774] */ ST(0) = ST(0) * R_F32((u32)(0x6e5774u));
    /* 00691f17: fldln2  */ FPUSH(0.69314718055994530942);
    /* 00691f19: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00691f1b: fyl2x  */ ST(1) = ST(1) * log2l(ST(0)); FPOP();
    /* 00691f1d: fldln2  */ FPUSH(0.69314718055994530942);
    /* 00691f1f: fld qword ptr [0x6b3740] */ FPUSH(R_F64((u32)(0x6b3740u)));
    /* 00691f25: fyl2x  */ ST(1) = ST(1) * log2l(ST(0)); FPOP();
    /* 00691f27: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00691f29: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 00691f2f: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00691f32: call 0x686fb4 */ r_esp -= 4; W32(r_esp, 0x691f37u); f_00686fb4();
    /* 00691f37: fsub qword ptr [0x6b2c48] */ ST(0) = ST(0) - R_F64((u32)(0x6b2c48u));
    /* 00691f3d: call 0x687450 */ r_esp -= 4; W32(r_esp, 0x691f42u); f_00687450();
    /* 00691f42: fild dword ptr [esp + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x50u)));
    /* 00691f46: fild dword ptr [esp + 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4cu)));
    /* 00691f4a: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 00691f4d: mov edx, ebp */ r_edx = r_ebp;
    /* 00691f4f: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00691f51: fst qword ptr [esp + 0x2c] */ W_F64((u32)(r_esp+0x2cu), ST(0));
    /* 00691f55: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 00691f58: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00691f5c: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00691f60: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00691f62: fmul dword ptr [0x6e5770] */ ST(0) = ST(0) * R_F32((u32)(0x6e5770u));
    /* 00691f68: fmul qword ptr [0x6b2c38] */ ST(0) = ST(0) * R_F64((u32)(0x6b2c38u));
    /* 00691f6e: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 00691f70: fldln2  */ FPUSH(0.69314718055994530942);
    /* 00691f72: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00691f74: fyl2x  */ ST(1) = ST(1) * log2l(ST(0)); FPOP();
    /* 00691f76: fmul qword ptr [0x6e5768] */ ST(0) = ST(0) * R_F64((u32)(0x6e5768u));
    /* 00691f7c: fsub qword ptr [0x6e5760] */ ST(0) = ST(0) - R_F64((u32)(0x6e5760u));
    /* 00691f82: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00691f84: fisub dword ptr [edi] */ ST(0) = ST(0) - (long double)(i32)R32((u32)(r_edi));
    /* 00691f86: call 0x687450 */ r_esp -= 4; W32(r_esp, 0x691f8bu); f_00687450();
    /* 00691f8b: fild dword ptr [esp + 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4cu)));
    /* 00691f8f: mov edi, eax */ r_edi = r_eax;
    /* 00691f91: mov dword ptr [esi + 0x1c], edi */ W32((u32)(r_esi+0x1cu), r_edi);
    /* 00691f94: fadd dword ptr [0x6e5770] */ ST(0) = ST(0) + R_F32((u32)(0x6e5770u));
    /* 00691f9a: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00691f9c: fmul qword ptr [0x6b2c38] */ ST(0) = ST(0) * R_F64((u32)(0x6b2c38u));
    /* 00691fa2: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 00691fa4: fldln2  */ FPUSH(0.69314718055994530942);
    /* 00691fa6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00691fa8: fyl2x  */ ST(1) = ST(1) * log2l(ST(0)); FPOP();
    /* 00691faa: fmul qword ptr [0x6e5768] */ ST(0) = ST(0) * R_F64((u32)(0x6e5768u));
    /* 00691fb0: fsub qword ptr [0x6e5760] */ ST(0) = ST(0) - R_F64((u32)(0x6e5760u));
    /* 00691fb6: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00691fb8: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 00691fbe: call 0x687450 */ r_esp -= 4; W32(r_esp, 0x691fc3u); f_00687450();
    /* 00691fc3: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00691fc5: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 00691fc9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00691fcb: lea ebx, [edi*4] */ r_ebx = (u32)(r_edi*4);
    /* 00691fd2: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00691fd3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00691fd5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00691fd6: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 00691fd9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00691fdb: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x691fe0u); f_006872fa();
    /* 00691fe0: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 00691fe3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00691fe4: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x691fe9u); f_006872fa();
    /* 00691fe9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00691fea: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 00691fed: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x691ff2u); f_006872fa();
    /* 00691ff2: fild dword ptr [esp + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x5cu)));
    /* 00691ff6: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 00691ffa: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 00691ffd: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00692001: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 00692003: fstp qword ptr [esp + 0x40] */ W_F64((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00692007: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069200a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0069200c: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0069200f: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 00692012: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00692014:; BB(0x00692014);
    /* 00692014: lea edx, [edi + 1] */ r_edx = (u32)(r_edi+0x1u);
    /* 00692017: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069201a: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0069201e: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 00692022: fmul qword ptr [0x6bf7d8] */ ST(0) = ST(0) * R_F64((u32)(0x6bf7d8u));
    /* 00692028: fsub qword ptr [0x6b3740] */ ST(0) = ST(0) - R_F64((u32)(0x6b3740u));
    /* 0069202e: fadd qword ptr [0x6e5760] */ ST(0) = ST(0) + R_F64((u32)(0x6e5760u));
    /* 00692034: fmul qword ptr [0x6e5758] */ ST(0) = ST(0) * R_F64((u32)(0x6e5758u));
    /* 0069203a: fldl2e  */ FPUSH(1.44269504088896340736);
    /* 0069203c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0069203e: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00692040: frndint  */ ST(0) = fx_rint(ST(0));
    /* 00692042: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00692044: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00692046: f2xm1  */ ST(0) = exp2l(ST(0)) - 1.0;
    /* 00692048: fld1  */ FPUSH(1.0);
    /* 0069204a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0069204c: fscale  */ ST(0) = ldexpl(ST(0), (int)ST(1));
    /* 0069204e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00692050: fmul qword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x2cu));
    /* 00692054: fadd st(0), st(0) */ ST(0) = ST(0) + ST(0);
    /* 00692056: fdiv qword ptr [esp + 0x34] */ ST(0) = ST(0) / R_F64((u32)(r_esp+0x34u));
    /* 0069205a: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 00692060: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00692063: call 0x686fb4 */ r_esp -= 4; W32(r_esp, 0x692068u); f_00686fb4();
    /* 00692068: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069206b: call 0x687450 */ r_esp -= 4; W32(r_esp, 0x692070u); f_00687450();
    /* 00692070: fld dword ptr [edi*4 + 0x781968] */ FPUSH(R_F32((u32)(r_edi*4+0x781968u)));
    /* 00692077: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692079: jge 0x6920b2 */ if ((fS==fO)) goto L_006920b2;
L_0069207b:; BB(0x0069207b);
    /* 0069207b: fld dword ptr [edi*4 + 0x78196c] */ FPUSH(R_F32((u32)(r_edi*4+0x78196cu)));
    /* 00692082: mov ecx, eax */ r_ecx = r_eax;
    /* 00692084: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00692086: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 0069208a: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0069208c: fidiv dword ptr [esp + 0x40] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_esp+0x40u));
    /* 00692090: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
L_00692094:; BB(0x00692094);
    /* 00692094: cmp ebx, dword ptr [esp + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692098: jge 0x6920b2 */ if ((fS==fO)) goto L_006920b2;
L_0069209a:; BB(0x0069209a);
    /* 0069209a: fld qword ptr [0x6b4b00] */ FPUSH(R_F64((u32)(0x6b4b00u)));
    /* 006920a0: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 006920a3: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006920a4: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 006920a6: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006920a8: fstp dword ptr [edx + ebx*4 - 4] */ W_F32((u32)(r_edx+r_ebx*4+0xfffffffcu), ST(0)); FPOP();
    /* 006920ac: fadd dword ptr [esp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x40u));
    /* 006920b0: jl 0x692094 */ if ((fS!=fO)) goto L_00692094;
L_006920b2:; BB(0x006920b2);
    /* 006920b2: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 006920b6: cmp edi, 0x57 */ {  u32 a = r_edi; u32 b = 0x57u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006920b9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006920bb: jl 0x692014 */ if ((fS!=fO)) goto L_00692014;
L_006920c1:; BB(0x006920c1);
    /* 006920c1: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 006920c5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006920c7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006920c9: jle 0x6922a8 */ if ((fZ||fS!=fO)) goto L_006922a8;
L_006920cf:; BB(0x006920cf);
    /* 006920cf: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 006920d3: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 006920d6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006920d7: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x006920d7, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006920d7, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006920d9: mov ecx, eax */ r_ecx = r_eax;
    /* 006920db: mov edx, ecx */ r_edx = r_ecx;
    /* 006920dd: imul edx, ecx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ecx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006920e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006920e2: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 006920e6: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
L_006920ea:; BB(0x006920ea);
    /* 006920ea: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 006920ee: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 006920f2: imul eax, ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006920f5: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 006920f9: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006920fd: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00692101: fild dword ptr [esp + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x48u)));
    /* 00692105: mov eax, dword ptr [eax + 0x78] */ r_eax = R32((u32)(r_eax+0x78u));
    /* 00692108: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069210a: fmul dword ptr [0x6e5754] */ ST(0) = ST(0) * R_F32((u32)(0x6e5754u));
    /* 00692110: fld1  */ FPUSH(1.0);
    /* 00692112: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692114: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00692116: fmul qword ptr [0x6e5738] */ ST(0) = ST(0) * R_F64((u32)(0x6e5738u));
    /* 0069211c: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0069211e: fmul dword ptr [0x6e5750] */ ST(0) = ST(0) * R_F32((u32)(0x6e5750u));
    /* 00692124: fld1  */ FPUSH(1.0);
    /* 00692126: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00692128: fmul qword ptr [0x6e5730] */ ST(0) = ST(0) * R_F64((u32)(0x6e5730u));
    /* 0069212e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00692130: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00692132: fmul dword ptr [0x6e574c] */ ST(0) = ST(0) * R_F32((u32)(0x6e574cu));
    /* 00692138: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0069213a: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0069213e: jge 0x6921db */ if ((fS==fO)) goto L_006921db;
L_00692144:; BB(0x00692144);
    /* 00692144: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 00692148: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0069214c: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00692150: fsub dword ptr [edi + 0x70] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x70u));
    /* 00692153: mov eax, ecx */ r_eax = r_ecx;
    /* 00692155: mov edi, edx */ r_edi = r_edx;
    /* 00692157: imul eax, dword ptr [esp + 0x10] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x10u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069215c: imul edi, dword ptr [esp + 0x10] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_esp+0x10u)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00692161: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00692165: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
L_00692169:; BB(0x00692169);
    /* 00692169: mov eax, edi */ r_eax = r_edi;
    /* 0069216b: imul eax, dword ptr [esp + 0x10] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x10u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00692170: fild dword ptr [esp + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x48u)));
    /* 00692174: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00692178: fild dword ptr [esp + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x1cu)));
    /* 0069217c: fmul dword ptr [0x6e5754] */ ST(0) = ST(0) * R_F32((u32)(0x6e5754u));
    /* 00692182: fld1  */ FPUSH(1.0);
    /* 00692184: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00692186: fmul qword ptr [0x6e5738] */ ST(0) = ST(0) * R_F64((u32)(0x6e5738u));
    /* 0069218c: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0069218e: fmul dword ptr [0x6e5750] */ ST(0) = ST(0) * R_F32((u32)(0x6e5750u));
    /* 00692194: fld1  */ FPUSH(1.0);
    /* 00692196: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00692198: fmul qword ptr [0x6e5730] */ ST(0) = ST(0) * R_F64((u32)(0x6e5730u));
    /* 0069219e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006921a0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006921a2: fmul dword ptr [0x6e574c] */ ST(0) = ST(0) * R_F32((u32)(0x6e574cu));
    /* 006921a8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006921aa: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 006921ae: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006921b0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006921b2: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006921b7: jne 0x6921db */ if (!fZ) goto L_006921db;
L_006921b9:; BB(0x006921b9);
    /* 006921b9: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006921bd: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006921bf: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006921c0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006921c4: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 006921c8: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006921ca: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006921ce: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006921d2: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006921d3: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006921d5: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006921d9: jl 0x692169 */ if ((fS!=fO)) goto L_00692169;
L_006921db:; BB(0x006921db);
    /* 006921db: cmp ebp, dword ptr [esp + 0x44] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x44u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006921df: jg 0x692270 */ if ((!fZ&&fS==fO)) goto L_00692270;
L_006921e5:; BB(0x006921e5);
    /* 006921e5: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 006921e9: mov edi, edx */ r_edi = r_edx;
    /* 006921eb: mov eax, dword ptr [eax + 0x7c] */ r_eax = R32((u32)(r_eax+0x7cu));
    /* 006921ee: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006921f0: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006921f4: mov eax, ecx */ r_eax = r_ecx;
    /* 006921f6: imul eax, ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006921f9: imul edi, ebp */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_ebp; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006921fc: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
L_00692200:; BB(0x00692200);
    /* 00692200: cmp ebp, dword ptr [esp + 0x20] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692204: jl 0x69225b */ if ((fS!=fO)) goto L_0069225b;
L_00692206:; BB(0x00692206);
    /* 00692206: mov eax, edi */ r_eax = r_edi;
    /* 00692208: imul eax, ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069220b: fild dword ptr [esp + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x48u)));
    /* 0069220f: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00692213: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00692217: fild dword ptr [esp + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x1cu)));
    /* 0069221b: fmul dword ptr [0x6e5754] */ ST(0) = ST(0) * R_F32((u32)(0x6e5754u));
    /* 00692221: fld1  */ FPUSH(1.0);
    /* 00692223: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00692225: fmul qword ptr [0x6e5738] */ ST(0) = ST(0) * R_F64((u32)(0x6e5738u));
    /* 0069222b: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0069222d: fmul dword ptr [0x6e5750] */ ST(0) = ST(0) * R_F32((u32)(0x6e5750u));
    /* 00692233: fld1  */ FPUSH(1.0);
    /* 00692235: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00692237: fmul qword ptr [0x6e5730] */ ST(0) = ST(0) * R_F64((u32)(0x6e5730u));
    /* 0069223d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0069223f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00692241: fmul dword ptr [0x6e574c] */ ST(0) = ST(0) * R_F32((u32)(0x6e574cu));
    /* 00692247: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00692249: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0069224d: fadd dword ptr [eax + 0x74] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x74u));
    /* 00692250: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00692252: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00692254: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00692259: jne 0x692270 */ if (!fZ) goto L_00692270;
L_0069225b:; BB(0x0069225b);
    /* 0069225b: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 0069225f: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00692260: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00692262: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00692264: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00692268: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0069226c: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069226e: jle 0x692200 */ if ((fZ||fS!=fO)) goto L_00692200;
L_00692270:; BB(0x00692270);
    /* 00692270: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00692274: mov edi, dword ptr [esi + 0x18] */ r_edi = R32((u32)(r_esi+0x18u));
    /* 00692277: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0069227a: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069227b: lea eax, [eax + ebp - 0x10001] */ r_eax = (u32)(r_eax+r_ebp+0xfffeffffu);
    /* 00692282: mov dword ptr [edi + ebx*4 - 4], eax */ W32((u32)(r_edi+r_ebx*4+0xfffffffcu), r_eax);
    /* 00692286: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0069228a: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 0069228e: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00692290: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00692294: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00692298: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069229a: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069229c: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 006922a0: jl 0x6920ea */ if ((fS!=fO)) goto L_006920ea;
L_006922a6:; BB(0x006922a6);
    /* 006922a6: mov edi, eax */ r_edi = r_eax;
L_006922a8:; BB(0x006922a8);
    /* 006922a8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006922aa: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; fC = 0; }
    /* 006922ac: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 006922b0: jle 0x69230c */ if ((fZ||fS!=fO)) goto L_0069230c;
L_006922b2:; BB(0x006922b2);
    /* 006922b2: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006922b6: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 006922b9: mov edx, 1 */ r_edx = 0x1u;
    /* 006922be: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 006922bf: fadd dword ptr [0x6e5770] */ ST(0) = ST(0) + R_F32((u32)(0x6e5770u));
    /* 006922c5: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006922c7: fmul qword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x2cu));
    /* 006922cb: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 006922cf: fmul qword ptr [0x6b2c38] */ ST(0) = ST(0) * R_F64((u32)(0x6b2c38u));
    /* 006922d5: fdiv qword ptr [esp + 0x24] */ ST(0) = ST(0) / R_F64((u32)(r_esp+0x24u));
    /* 006922d9: fldln2  */ FPUSH(0.69314718055994530942);
    /* 006922db: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006922dd: fyl2x  */ ST(1) = ST(1) * log2l(ST(0)); FPOP();
    /* 006922df: fmul qword ptr [0x6e5768] */ ST(0) = ST(0) * R_F64((u32)(0x6e5768u));
    /* 006922e5: fsub qword ptr [0x6e5760] */ ST(0) = ST(0) - R_F64((u32)(0x6e5760u));
    /* 006922eb: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006922ef: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006922f1: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 006922f7: call 0x687450 */ r_esp -= 4; W32(r_esp, 0x6922fcu); f_00687450();
    /* 006922fc: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 006922ff: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00692300: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00692302: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 00692306: mov dword ptr [ecx + ebx*4 - 4], eax */ W32((u32)(r_ecx+r_ebx*4+0xfffffffcu), r_eax);
    /* 0069230a: jl 0x6922b2 */ if ((fS!=fO)) goto L_006922b2;
L_0069230c:; BB(0x0069230c);
    /* 0069230c: fld qword ptr [esp + 0x2c] */ FPUSH(R_F64((u32)(r_esp+0x2cu)));
    /* 00692310: fmul qword ptr [0x6b2c38] */ ST(0) = ST(0) * R_F64((u32)(0x6b2c38u));
    /* 00692316: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0069231a: fdiv qword ptr [esp + 0x24] */ ST(0) = ST(0) / R_F64((u32)(r_esp+0x24u));
    /* 0069231e: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00692321: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00692324: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00692325: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00692326: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00692327: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00692328: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069232b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0069232e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069232f: call 0x692430 */ r_esp -= 4; W32(r_esp, 0x692334u); f_00692430();
    /* 00692334: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00692336: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00692339: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x69233eu); f_006872fa();
    /* 0069233e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00692341: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 00692344: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00692346:; BB(0x00692346);
    /* 00692346: lea eax, [edi*4] */ r_eax = (u32)(r_edi*4);
    /* 0069234d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069234e: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x692353u); f_006872fa();
    /* 00692353: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 00692356: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00692359: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069235c: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069235f: mov dword ptr [ebx + edx - 4], eax */ W32((u32)(r_ebx+r_edx+0xfffffffcu), r_eax);
    /* 00692363: jl 0x692346 */ if ((fS!=fO)) goto L_00692346;
L_00692365:; BB(0x00692365);
    /* 00692365: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00692367: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00692369: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 0069236d: jle 0x692423 */ if ((fZ||fS!=fO)) goto L_00692423;
L_00692373:; BB(0x00692373);
    /* 00692373: fld qword ptr [esp + 0x24] */ FPUSH(R_F64((u32)(r_esp+0x24u)));
    /* 00692377: fadd st(0), st(0) */ ST(0) = ST(0) + ST(0);
L_00692379:; BB(0x00692379);
    /* 00692379: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 0069237d: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 00692383: fmul qword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x2cu));
    /* 00692387: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00692389: fldln2  */ FPUSH(0.69314718055994530942);
    /* 0069238b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069238d: fyl2x  */ ST(1) = ST(1) * log2l(ST(0)); FPOP();
    /* 0069238f: fmul qword ptr [0x6e5768] */ ST(0) = ST(0) * R_F64((u32)(0x6e5768u));
    /* 00692395: fsub qword ptr [0x6e5760] */ ST(0) = ST(0) - R_F64((u32)(0x6e5760u));
    /* 0069239b: fadd st(0), st(0) */ ST(0) = ST(0) + ST(0);
    /* 0069239d: fcom dword ptr [0x6c2fe8] */ fx_compare(ST(0), R_F32((u32)(0x6c2fe8u))); 
    /* 006923a3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006923a5: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 006923a8: jp 0x6923b4 */ if (fP) goto L_006923b4;
L_006923aa:; BB(0x006923aa);
    /* 006923aa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006923ac: fld dword ptr [0x6c2fe8] */ FPUSH(R_F32((u32)(0x6c2fe8u)));
    /* 006923b2: jmp 0x6923cb */ goto L_006923cb;
L_006923b4:; BB(0x006923b4);
    /* 006923b4: fcom dword ptr [0x6e5748] */ fx_compare(ST(0), R_F32((u32)(0x6e5748u))); 
    /* 006923ba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006923bc: and eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006923c1: jne 0x6923cb */ if (!fZ) goto L_006923cb;
L_006923c3:; BB(0x006923c3);
    /* 006923c3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006923c5: fld dword ptr [0x6e5748] */ FPUSH(R_F32((u32)(0x6e5748u)));
L_006923cb:; BB(0x006923cb);
    /* 006923cb: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 006923cd: call 0x687450 */ r_esp -= 4; W32(r_esp, 0x6923d2u); f_00687450();
    /* 006923d2: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006923d6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006923d8: fisub dword ptr [esp + 0x44] */ ST(0) = ST(0) - (long double)(i32)R32((u32)(r_esp+0x44u));
    /* 006923dc: lea eax, [eax*4 + 0x88] */ r_eax = (u32)(r_eax*4+0x88u);
    /* 006923e3: fld qword ptr [0x6b2c48] */ FPUSH(R_F64((u32)(0x6b2c48u)));
    /* 006923e9: fsub st(1) */ ST(0) = ST(0) - ST(1);
L_006923eb:; BB(0x006923eb);
    /* 006923eb: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 006923ee: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006923f1: fld dword ptr [edx + eax - 4] */ FPUSH(R_F32((u32)(r_edx+r_eax+0xfffffffcu)));
    /* 006923f5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006923f7: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 006923f9: fmul dword ptr [edx + eax] */ ST(0) = ST(0) * R_F32((u32)(r_edx+r_eax));
    /* 006923fc: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 006923ff: add eax, 0x44 */ {  u32 a = r_eax; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00692402: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692405: mov edx, dword ptr [edx + ecx - 4] */ r_edx = R32((u32)(r_edx+r_ecx+0xfffffffcu));
    /* 00692409: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0069240b: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 0069240e: jl 0x6923eb */ if ((fS!=fO)) goto L_006923eb;
L_00692410:; BB(0x00692410);
    /* 00692410: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00692411: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00692413: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692415: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 00692419: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069241b: jl 0x692379 */ if ((fS!=fO)) goto L_00692379;
L_00692421:; BB(0x00692421);
    /* 00692421: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00692423:; BB(0x00692423);
    /* 00692423: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00692424: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00692425: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00692426: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00692427: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069242a: ret  */ FN_RET(0x00691ee0); r_esp += 4; return;
}

