#include "protos.h"

void f_006361f0(void) /* sub_6361F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006361f0);
    /* 006361f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006361f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006361f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006361f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006361f9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00636200: jmp 0x63620b */ goto L_0063620b;
L_00636202:; BB(0x00636202);
    /* 00636202: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636205: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00636208: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0063620b:; BB(0x0063620b);
    /* 0063620b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00636211: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00636213: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00636219: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0063621f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x636221u); call_ind(t); }
    /* 00636221: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00636224: jge 0x63623f */ if ((fS==fO)) goto L_0063623f;
L_00636226:; BB(0x00636226);
    /* 00636226: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00636228: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063622b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063622c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063622f: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 00636232: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636235: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 00636238: call 0x63a3e0 */ r_esp -= 4; W32(r_esp, 0x63623du); f_0063a3e0();
    /* 0063623d: jmp 0x636202 */ goto L_00636202;
L_0063623f:; BB(0x0063623f);
    /* 0063623f: mov esp, ebp */ r_esp = r_ebp;
    /* 00636241: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00636242: ret  */ FN_RET(0x006361f0); r_esp += 4; return;
}

void f_00636610(void) /* sub_636610 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00636610);
    /* 00636610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00636611: mov ebp, esp */ r_ebp = r_esp;
    /* 00636613: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00636616: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00636619: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00636620: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00636627: jmp 0x636632 */ goto L_00636632;
L_00636629:; BB(0x00636629);
    /* 00636629: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063662c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063662f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00636632:; BB(0x00636632);
    /* 00636632: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00636638: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063663a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00636640: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00636646: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x636648u); call_ind(t); }
    /* 00636648: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063664b: jge 0x636684 */ if ((fS==fO)) goto L_00636684;
L_0063664d:; BB(0x0063664d);
    /* 0063664d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00636650: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00636653: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636656: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00636659: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0063665c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063665f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x636664u); f_0063aac0();
    /* 00636664: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00636666: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00636669: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063666b: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063666f: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00636672: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00636675: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636677: jne 0x636682 */ if (!fZ) goto L_00636682;
L_00636679:; BB(0x00636679);
    /* 00636679: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063667c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063667f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00636682:; BB(0x00636682);
    /* 00636682: jmp 0x636629 */ goto L_00636629;
L_00636684:; BB(0x00636684);
    /* 00636684: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00636687: mov esp, ebp */ r_esp = r_ebp;
    /* 00636689: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063668a: ret  */ FN_RET(0x00636610); r_esp += 4; return;
}

void f_00636690(void) /* sub_636690 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00636690);
    /* 00636690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00636691: mov ebp, esp */ r_ebp = r_esp;
    /* 00636693: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00636696: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00636699: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 006366a0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006366a7: jmp 0x6366b2 */ goto L_006366b2;
L_006366a9:; BB(0x006366a9);
    /* 006366a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006366ac: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006366af: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006366b2:; BB(0x006366b2);
    /* 006366b2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006366b8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006366ba: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006366c0: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 006366c6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6366c8u); call_ind(t); }
    /* 006366c8: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006366cb: jge 0x636725 */ if ((fS==fO)) goto L_00636725;
L_006366cd:; BB(0x006366cd);
    /* 006366cd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006366d0: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 006366d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006366d6: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 006366d9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006366dc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006366df: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6366e4u); f_0063aac0();
    /* 006366e4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006366e6: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 006366e9: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006366ed: je 0x63670b */ if (fZ) goto L_0063670b;
L_006366ef:; BB(0x006366ef);
    /* 006366ef: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006366f2: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6366f7u); f_0063aac0();
    /* 006366f7: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 006366f9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006366fc: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636700: je 0x63670b */ if (fZ) goto L_0063670b;
L_00636702:; BB(0x00636702);
    /* 00636702: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00636709: jmp 0x636712 */ goto L_00636712;
L_0063670b:; BB(0x0063670b);
    /* 0063670b: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
L_00636712:; BB(0x00636712);
    /* 00636712: movzx ecx, byte ptr [ebp - 0x1c] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe4u));
    /* 00636716: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636718: je 0x636723 */ if (fZ) goto L_00636723;
L_0063671a:; BB(0x0063671a);
    /* 0063671a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063671d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00636720: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00636723:; BB(0x00636723);
    /* 00636723: jmp 0x6366a9 */ goto L_006366a9;
L_00636725:; BB(0x00636725);
    /* 00636725: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00636728: mov esp, ebp */ r_esp = r_ebp;
    /* 0063672a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063672b: ret  */ FN_RET(0x00636690); r_esp += 4; return;
}

void f_00636730(void) /* sub_636730 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00636730);
    /* 00636730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00636731: mov ebp, esp */ r_ebp = r_esp;
    /* 00636733: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00636734: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00636735: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00636738: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063673b: call 0x636610 */ r_esp -= 4; W32(r_esp, 0x636740u); f_00636610();
    /* 00636740: mov esi, eax */ r_esi = r_eax;
    /* 00636742: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636745: call 0x636690 */ r_esp -= 4; W32(r_esp, 0x63674au); f_00636690();
    /* 0063674a: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0063674c: mov eax, esi */ r_eax = r_esi;
    /* 0063674e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063674f: mov esp, ebp */ r_esp = r_ebp;
    /* 00636751: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00636752: ret  */ FN_RET(0x00636730); r_esp += 4; return;
}

void f_00636760(void) /* sub_636760 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00636760);
    /* 00636760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00636761: mov ebp, esp */ r_ebp = r_esp;
    /* 00636763: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00636764: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00636767: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063676a: call 0x636690 */ r_esp -= 4; W32(r_esp, 0x63676fu); f_00636690();
    /* 0063676f: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00636771: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00636773: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00636776: mov esp, ebp */ r_esp = r_ebp;
    /* 00636778: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00636779: ret  */ FN_RET(0x00636760); r_esp += 4; return;
}

void f_006367d0(void) /* sub_6367D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006367d0);
    /* 006367d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006367d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006367d3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006367d6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006367d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006367e0: jmp 0x6367eb */ goto L_006367eb;
L_006367e2:; BB(0x006367e2);
    /* 006367e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006367e5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006367e8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006367eb:; BB(0x006367eb);
    /* 006367eb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006367f1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006367f3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006367f9: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 006367ff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x636801u); call_ind(t); }
    /* 00636801: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00636804: jge 0x636839 */ if ((fS==fO)) goto L_00636839;
L_00636806:; BB(0x00636806);
    /* 00636806: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636809: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063680a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063680d: call 0x638ff0 */ r_esp -= 4; W32(r_esp, 0x636812u); f_00638ff0();
    /* 00636812: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00636815: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636817: je 0x636837 */ if (fZ) goto L_00636837;
L_00636819:; BB(0x00636819);
    /* 00636819: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063681c: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0063681f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636822: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 00636825: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00636828: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0063682b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063682e: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636831: jne 0x636837 */ if (!fZ) goto L_00636837;
L_00636833:; BB(0x00636833);
    /* 00636833: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00636835: jmp 0x63683b */ goto L_0063683b;
L_00636837:; BB(0x00636837);
    /* 00636837: jmp 0x6367e2 */ goto L_006367e2;
L_00636839:; BB(0x00636839);
    /* 00636839: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0063683b:; BB(0x0063683b);
    /* 0063683b: mov esp, ebp */ r_esp = r_ebp;
    /* 0063683d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063683e: ret 4 */ FN_RET(0x006367d0); r_esp += 8; return;
}

void f_006368b0(void) /* sub_6368B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006368b0);
    /* 006368b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006368b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006368b3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006368b6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006368b9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006368bd: jne 0x6368c3 */ if (!fZ) goto L_006368c3;
L_006368bf:; BB(0x006368bf);
    /* 006368bf: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006368c1: jmp 0x63693c */ goto L_0063693c;
L_006368c3:; BB(0x006368c3);
    /* 006368c3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006368ca: jmp 0x6368d5 */ goto L_006368d5;
L_006368cc:; BB(0x006368cc);
    /* 006368cc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006368cf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006368d2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006368d5:; BB(0x006368d5);
    /* 006368d5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006368db: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006368dd: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006368e3: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 006368e9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6368ebu); call_ind(t); }
    /* 006368eb: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006368ee: jge 0x63693a */ if ((fS==fO)) goto L_0063693a;
L_006368f0:; BB(0x006368f0);
    /* 006368f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006368f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006368f4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006368f7: call 0x638f50 */ r_esp -= 4; W32(r_esp, 0x6368fcu); f_00638f50();
    /* 006368fc: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006368ff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636901: je 0x636938 */ if (fZ) goto L_00636938;
L_00636903:; BB(0x00636903);
    /* 00636903: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00636906: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00636909: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063690c: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0063690f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00636912: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00636915: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63691au); f_0063aac0();
    /* 0063691a: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063691d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00636920: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00636923: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00636924: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00636927: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00636928: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x63692du); f_00686ec0();
    /* 0063692d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00636930: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636932: jne 0x636938 */ if (!fZ) goto L_00636938;
L_00636934:; BB(0x00636934);
    /* 00636934: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00636936: jmp 0x63693c */ goto L_0063693c;
L_00636938:; BB(0x00636938);
    /* 00636938: jmp 0x6368cc */ goto L_006368cc;
L_0063693a:; BB(0x0063693a);
    /* 0063693a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0063693c:; BB(0x0063693c);
    /* 0063693c: mov esp, ebp */ r_esp = r_ebp;
    /* 0063693e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063693f: ret 4 */ FN_RET(0x006368b0); r_esp += 8; return;
}

void f_006369b0(void) /* sub_6369B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006369b0);
    /* 006369b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006369b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006369b3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006369b6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006369b9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006369bd: jne 0x6369c4 */ if (!fZ) goto L_006369c4;
L_006369bf:; BB(0x006369bf);
    /* 006369bf: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006369c2: jmp 0x636a3f */ goto L_00636a3f;
L_006369c4:; BB(0x006369c4);
    /* 006369c4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006369cb: jmp 0x6369d6 */ goto L_006369d6;
L_006369cd:; BB(0x006369cd);
    /* 006369cd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006369d0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006369d3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006369d6:; BB(0x006369d6);
    /* 006369d6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006369dc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006369de: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006369e4: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 006369ea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6369ecu); call_ind(t); }
    /* 006369ec: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006369ef: jge 0x636a3c */ if ((fS==fO)) goto L_00636a3c;
L_006369f1:; BB(0x006369f1);
    /* 006369f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006369f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006369f5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006369f8: call 0x638f50 */ r_esp -= 4; W32(r_esp, 0x6369fdu); f_00638f50();
    /* 006369fd: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00636a00: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636a02: je 0x636a3a */ if (fZ) goto L_00636a3a;
L_00636a04:; BB(0x00636a04);
    /* 00636a04: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00636a07: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00636a0a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636a0d: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 00636a10: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00636a13: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00636a16: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x636a1bu); f_0063aac0();
    /* 00636a1b: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00636a1e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00636a21: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00636a24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00636a25: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00636a28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00636a29: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x636a2eu); f_00686ec0();
    /* 00636a2e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00636a31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636a33: jne 0x636a3a */ if (!fZ) goto L_00636a3a;
L_00636a35:; BB(0x00636a35);
    /* 00636a35: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636a38: jmp 0x636a3f */ goto L_00636a3f;
L_00636a3a:; BB(0x00636a3a);
    /* 00636a3a: jmp 0x6369cd */ goto L_006369cd;
L_00636a3c:; BB(0x00636a3c);
    /* 00636a3c: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00636a3f:; BB(0x00636a3f);
    /* 00636a3f: mov esp, ebp */ r_esp = r_ebp;
    /* 00636a41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00636a42: ret 4 */ FN_RET(0x006369b0); r_esp += 8; return;
}

void f_00636c50(void) /* sub_636C50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00636c50);
    /* 00636c50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00636c51: mov ebp, esp */ r_ebp = r_esp;
    /* 00636c53: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00636c56: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00636c57: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00636c5a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00636c5d: call 0x636610 */ r_esp -= 4; W32(r_esp, 0x636c62u); f_00636610();
    /* 00636c62: mov esi, eax */ r_esi = r_eax;
    /* 00636c64: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00636c67: call 0x636690 */ r_esp -= 4; W32(r_esp, 0x636c6cu); f_00636690();
    /* 00636c6c: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636c6e: jne 0x636c75 */ if (!fZ) goto L_00636c75;
L_00636c70:; BB(0x00636c70);
    /* 00636c70: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00636c73: jmp 0x636ccf */ goto L_00636ccf;
L_00636c75:; BB(0x00636c75);
    /* 00636c75: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00636c7c: jmp 0x636c87 */ goto L_00636c87;
L_00636c7e:; BB(0x00636c7e);
    /* 00636c7e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00636c81: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00636c84: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00636c87:; BB(0x00636c87);
    /* 00636c87: cmp dword ptr [ebp - 8], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00636c8e: jge 0x636ccc */ if ((fS==fO)) goto L_00636ccc;
L_00636c90:; BB(0x00636c90);
    /* 00636c90: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00636c96: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00636c98: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00636c9e: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00636ca4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x636ca6u); call_ind(t); }
    /* 00636ca6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636ca7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x636cacu); f_0062fbf0();
    /* 00636cac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00636caf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00636cb2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636cb5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00636cb6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00636cb9: call 0x638ff0 */ r_esp -= 4; W32(r_esp, 0x636cbeu); f_00638ff0();
    /* 00636cbe: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00636cc1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636cc3: je 0x636cca */ if (fZ) goto L_00636cca;
L_00636cc5:; BB(0x00636cc5);
    /* 00636cc5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636cc8: jmp 0x636ccf */ goto L_00636ccf;
L_00636cca:; BB(0x00636cca);
    /* 00636cca: jmp 0x636c7e */ goto L_00636c7e;
L_00636ccc:; BB(0x00636ccc);
    /* 00636ccc: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00636ccf:; BB(0x00636ccf);
    /* 00636ccf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00636cd0: mov esp, ebp */ r_esp = r_ebp;
    /* 00636cd2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00636cd3: ret  */ FN_RET(0x00636c50); r_esp += 4; return;
}

void f_00636ce0(void) /* sub_636CE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00636ce0);
    /* 00636ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00636ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 00636ce3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00636ce6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00636ce9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00636cf0: jmp 0x636cfb */ goto L_00636cfb;
L_00636cf2:; BB(0x00636cf2);
    /* 00636cf2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636cf5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00636cf8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00636cfb:; BB(0x00636cfb);
    /* 00636cfb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00636d01: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00636d03: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00636d09: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00636d0f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x636d11u); call_ind(t); }
    /* 00636d11: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00636d14: jge 0x636d34 */ if ((fS==fO)) goto L_00636d34;
L_00636d16:; BB(0x00636d16);
    /* 00636d16: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00636d19: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00636d1c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636d1f: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00636d22: call 0x63b340 */ r_esp -= 4; W32(r_esp, 0x636d27u); f_0063b340();
    /* 00636d27: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00636d2a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636d2c: je 0x636d32 */ if (fZ) goto L_00636d32;
L_00636d2e:; BB(0x00636d2e);
    /* 00636d2e: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00636d30: jmp 0x636d36 */ goto L_00636d36;
L_00636d32:; BB(0x00636d32);
    /* 00636d32: jmp 0x636cf2 */ goto L_00636cf2;
L_00636d34:; BB(0x00636d34);
    /* 00636d34: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00636d36:; BB(0x00636d36);
    /* 00636d36: mov esp, ebp */ r_esp = r_ebp;
    /* 00636d38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00636d39: ret  */ FN_RET(0x00636ce0); r_esp += 4; return;
}

void f_00636d40(void) /* sub_636D40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00636d40);
    /* 00636d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00636d41: mov ebp, esp */ r_ebp = r_esp;
    /* 00636d43: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00636d46: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00636d49: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00636d50: jmp 0x636d5b */ goto L_00636d5b;
L_00636d52:; BB(0x00636d52);
    /* 00636d52: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636d55: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00636d58: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00636d5b:; BB(0x00636d5b);
    /* 00636d5b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00636d61: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00636d63: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00636d69: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00636d6f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x636d71u); call_ind(t); }
    /* 00636d71: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00636d74: jge 0x636e64 */ if ((fS==fO)) goto L_00636e64;
L_00636d7a:; BB(0x00636d7a);
    /* 00636d7a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636d7d: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636d80: je 0x636d9a */ if (fZ) goto L_00636d9a;
L_00636d82:; BB(0x00636d82);
    /* 00636d82: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00636d85: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 00636d88: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636d8b: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 00636d8e: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00636d91: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00636d94: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636d98: jne 0x636d9c */ if (!fZ) goto L_00636d9c;
L_00636d9a:; BB(0x00636d9a);
    /* 00636d9a: jmp 0x636d52 */ goto L_00636d52;
L_00636d9c:; BB(0x00636d9c);
    /* 00636d9c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00636d9f: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00636da2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636da5: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00636da8: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00636dab: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00636dae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00636db1: call 0x6480d0 */ r_esp -= 4; W32(r_esp, 0x636db6u); f_006480d0();
    /* 00636db6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00636db9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636dbb: je 0x636ded */ if (fZ) goto L_00636ded;
L_00636dbd:; BB(0x00636dbd);
    /* 00636dbd: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00636dc0: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00636dc3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636dc6: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00636dc9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00636dcc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00636dcf: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x636dd4u); f_0063aac0();
    /* 00636dd4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00636dd6: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00636dd9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00636ddb: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636ddf: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00636de2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00636de5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636de7: je 0x636ded */ if (fZ) goto L_00636ded;
L_00636de9:; BB(0x00636de9);
    /* 00636de9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00636deb: jmp 0x636e66 */ goto L_00636e66;
L_00636ded:; BB(0x00636ded);
    /* 00636ded: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00636df0: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 00636df3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636df6: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 00636df9: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00636dfc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00636dff: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x636e04u); f_0063aac0();
    /* 00636e04: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00636e06: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00636e09: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636e0d: je 0x636e2b */ if (fZ) goto L_00636e2b;
L_00636e0f:; BB(0x00636e0f);
    /* 00636e0f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00636e12: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x636e17u); f_0063aac0();
    /* 00636e17: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00636e19: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00636e1c: cmp dword ptr [ebp - 0x1c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636e20: je 0x636e2b */ if (fZ) goto L_00636e2b;
L_00636e22:; BB(0x00636e22);
    /* 00636e22: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00636e29: jmp 0x636e32 */ goto L_00636e32;
L_00636e2b:; BB(0x00636e2b);
    /* 00636e2b: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
L_00636e32:; BB(0x00636e32);
    /* 00636e32: movzx edx, byte ptr [ebp - 0x2c] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffd4u));
    /* 00636e36: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636e38: je 0x636e5f */ if (fZ) goto L_00636e5f;
L_00636e3a:; BB(0x00636e3a);
    /* 00636e3a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00636e3d: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00636e40: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636e43: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 00636e46: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00636e49: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00636e4c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00636e4f: call 0x648140 */ r_esp -= 4; W32(r_esp, 0x636e54u); f_00648140();
    /* 00636e54: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00636e57: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636e59: je 0x636e5f */ if (fZ) goto L_00636e5f;
L_00636e5b:; BB(0x00636e5b);
    /* 00636e5b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00636e5d: jmp 0x636e66 */ goto L_00636e66;
L_00636e5f:; BB(0x00636e5f);
    /* 00636e5f: jmp 0x636d52 */ goto L_00636d52;
L_00636e64:; BB(0x00636e64);
    /* 00636e64: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00636e66:; BB(0x00636e66);
    /* 00636e66: mov esp, ebp */ r_esp = r_ebp;
    /* 00636e68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00636e69: ret 4 */ FN_RET(0x00636d40); r_esp += 8; return;
}

void f_00636e70(void) /* sub_636E70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00636e70);
    /* 00636e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00636e71: mov ebp, esp */ r_ebp = r_esp;
    /* 00636e73: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00636e76: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00636e79: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00636e80: jmp 0x636e8b */ goto L_00636e8b;
L_00636e82:; BB(0x00636e82);
    /* 00636e82: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636e85: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00636e88: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00636e8b:; BB(0x00636e8b);
    /* 00636e8b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00636e91: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00636e93: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00636e99: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00636e9f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x636ea1u); call_ind(t); }
    /* 00636ea1: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00636ea4: jge 0x636edc */ if ((fS==fO)) goto L_00636edc;
L_00636ea6:; BB(0x00636ea6);
    /* 00636ea6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00636ea9: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00636eac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636eaf: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00636eb2: call 0x63b340 */ r_esp -= 4; W32(r_esp, 0x636eb7u); f_0063b340();
    /* 00636eb7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00636eba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636ebc: je 0x636eda */ if (fZ) goto L_00636eda;
L_00636ebe:; BB(0x00636ebe);
    /* 00636ebe: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00636ec1: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 00636ec4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636ec7: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 00636eca: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00636ecd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00636ed0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00636ed2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00636ed5: call 0x648270 */ r_esp -= 4; W32(r_esp, 0x636edau); f_00648270();
L_00636eda:; BB(0x00636eda);
    /* 00636eda: jmp 0x636e82 */ goto L_00636e82;
L_00636edc:; BB(0x00636edc);
    /* 00636edc: mov esp, ebp */ r_esp = r_ebp;
    /* 00636ede: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00636edf: ret  */ FN_RET(0x00636e70); r_esp += 4; return;
}

void f_00636ee0(void) /* sub_636EE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00636ee0);
    /* 00636ee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00636ee1: mov ebp, esp */ r_ebp = r_esp;
    /* 00636ee3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00636ee6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00636ee9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00636ef0: jmp 0x636efb */ goto L_00636efb;
L_00636ef2:; BB(0x00636ef2);
    /* 00636ef2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636ef5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00636ef8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00636efb:; BB(0x00636efb);
    /* 00636efb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00636f01: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00636f03: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00636f09: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00636f0f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x636f11u); call_ind(t); }
    /* 00636f11: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00636f14: jge 0x636f6a */ if ((fS==fO)) goto L_00636f6a;
L_00636f16:; BB(0x00636f16);
    /* 00636f16: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00636f19: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00636f1c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636f1f: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00636f22: call 0x63b380 */ r_esp -= 4; W32(r_esp, 0x636f27u); f_0063b380();
    /* 00636f27: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00636f2a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636f2c: je 0x636f68 */ if (fZ) goto L_00636f68;
L_00636f2e:; BB(0x00636f2e);
    /* 00636f2e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00636f31: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 00636f34: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636f37: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 00636f3a: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00636f3d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00636f40: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00636f42: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00636f45: call 0x648270 */ r_esp -= 4; W32(r_esp, 0x636f4au); f_00648270();
    /* 00636f4a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00636f4d: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00636f50: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636f53: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00636f56: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00636f59: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00636f5c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00636f5e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00636f60: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00636f63: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x636f68u); f_006464d0();
L_00636f68:; BB(0x00636f68);
    /* 00636f68: jmp 0x636ef2 */ goto L_00636ef2;
L_00636f6a:; BB(0x00636f6a);
    /* 00636f6a: mov esp, ebp */ r_esp = r_ebp;
    /* 00636f6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00636f6d: ret  */ FN_RET(0x00636ee0); r_esp += 4; return;
}

void f_00636f70(void) /* sub_636F70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00636f70);
    /* 00636f70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00636f71: mov ebp, esp */ r_ebp = r_esp;
    /* 00636f73: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00636f76: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00636f79: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00636f80: jmp 0x636f8b */ goto L_00636f8b;
L_00636f82:; BB(0x00636f82);
    /* 00636f82: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636f85: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00636f88: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00636f8b:; BB(0x00636f8b);
    /* 00636f8b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00636f91: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00636f93: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00636f99: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00636f9f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x636fa1u); call_ind(t); }
    /* 00636fa1: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00636fa4: jge 0x636fdb */ if ((fS==fO)) goto L_00636fdb;
L_00636fa6:; BB(0x00636fa6);
    /* 00636fa6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00636fa9: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00636fac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636faf: cmp dword ptr [edx + eax*4], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636fb3: jne 0x636fb7 */ if (!fZ) goto L_00636fb7;
L_00636fb5:; BB(0x00636fb5);
    /* 00636fb5: jmp 0x636f82 */ goto L_00636f82;
L_00636fb7:; BB(0x00636fb7);
    /* 00636fb7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00636fba: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00636fbd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636fc0: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00636fc3: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00636fc6: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00636fc9: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636fcd: je 0x636fd9 */ if (fZ) goto L_00636fd9;
L_00636fcf:; BB(0x00636fcf);
    /* 00636fcf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00636fd1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00636fd4: call 0x648270 */ r_esp -= 4; W32(r_esp, 0x636fd9u); f_00648270();
L_00636fd9:; BB(0x00636fd9);
    /* 00636fd9: jmp 0x636f82 */ goto L_00636f82;
L_00636fdb:; BB(0x00636fdb);
    /* 00636fdb: mov esp, ebp */ r_esp = r_ebp;
    /* 00636fdd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00636fde: ret  */ FN_RET(0x00636f70); r_esp += 4; return;
}

void f_00636fe0(void) /* sub_636FE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00636fe0);
    /* 00636fe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00636fe1: mov ebp, esp */ r_ebp = r_esp;
    /* 00636fe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00636fe4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00636fe7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636fea: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00636fed: call 0x666a20 */ r_esp -= 4; W32(r_esp, 0x636ff2u); f_00666a20();
    /* 00636ff2: mov esp, ebp */ r_esp = r_ebp;
    /* 00636ff4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00636ff5: ret  */ FN_RET(0x00636fe0); r_esp += 4; return;
}

