#include "protos.h"

void f_00699560(void) /* sub_699560 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00699560);
    /* 00699560: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00699564: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00699566: and ecx, 0x7fffffff */ {  u32 a = r_ecx; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0069956c: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00699570: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 00699574: fmul dword ptr [0x6e5744] */ ST(0) = ST(0) * R_F32((u32)(0x6e5744u));
    /* 0069957a: fsub dword ptr [0x6e5740] */ ST(0) = ST(0) - R_F32((u32)(0x6e5740u));
    /* 00699580: ret  */ FN_RET(0x00699560); r_esp += 4; return;
}

void f_00699590(void) /* sub_699590 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00699590);
    /* 00699590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00699591: mov ebp, esp */ r_ebp = r_esp;
    /* 00699593: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00699596: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00699597: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699598: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0069959b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069959c: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 0069959f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006995a2: mov eax, dword ptr [eax + 0x68] */ r_eax = R32((u32)(r_eax+0x68u));
    /* 006995a5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006995a8: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 006995ab: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 006995ae: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 006995b1: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006995b4: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 006995b7: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 006995ba: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 006995bd: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 006995c0: lea ebx, [edi*4] */ r_ebx = (u32)(r_edi*4);
    /* 006995c7: mov eax, ebx */ r_eax = r_ebx;
    /* 006995c9: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006995cc: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006995ce: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x6995d3u); f_00687340();
    /* 006995d3: mov eax, ebx */ r_eax = r_ebx;
    /* 006995d5: mov dword ptr [ebp - 0x1c], esp */ W32((u32)(r_ebp+0xffffffe4u), r_esp);
    /* 006995d8: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006995db: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006995dd: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x6995e2u); f_00687340();
    /* 006995e2: mov eax, ebx */ r_eax = r_ebx;
    /* 006995e4: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 006995e7: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006995ea: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006995ec: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x6995f1u); f_00687340();
    /* 006995f1: mov eax, ebx */ r_eax = r_ebx;
    /* 006995f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006995f6: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006995f9: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006995fb: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x699600u); f_00687340();
    /* 00699600: mov eax, esp */ r_eax = r_esp;
    /* 00699602: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00699604: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00699606: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00699609: jle 0x6996a9 */ if ((fZ||fS!=fO)) goto L_006996a9;
L_0069960f:; BB(0x0069960f);
    /* 0069960f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00699612: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00699615: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 00699618: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069961b: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0069961e: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00699620: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00699622: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00699625: mov dword ptr [ebp - 0xc], edi */ W32((u32)(r_ebp+0xfffffff4u), r_edi);
    /* 00699628: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0069962b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0069962e: jmp 0x699633 */ goto L_00699633;
L_00699630:; BB(0x00699630);
    /* 00699630: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
L_00699633:; BB(0x00699633);
    /* 00699633: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00699636: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00699639: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069963c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0069963e: mov eax, dword ptr [ecx + eax*4 + 0x404] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x404u));
    /* 00699645: mov ecx, dword ptr [edx + eax*4 + 0x320] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x320u));
    /* 0069964c: mov edx, dword ptr [ecx*4 + 0x7878d0] */ r_edx = R32((u32)(r_ecx*4+0x7878d0u));
    /* 00699653: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00699656: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 00699659: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 0069965c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069965d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069965e: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x699661u); call_ind(t); }
    /* 00699661: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00699664: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699667: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00699669: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069966b: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0069966e: mov dword ptr [ecx + edi], eax */ W32((u32)(r_ecx+r_edi), r_eax);
    /* 00699671: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00699674: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 00699676: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00699678: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069967a: mov edi, dword ptr [edx + ebx*4] */ r_edi = R32((u32)(r_edx+r_ebx*4));
    /* 0069967d: mov edx, ecx */ r_edx = r_ecx;
    /* 0069967f: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00699682: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00699684: mov ecx, edx */ r_ecx = r_edx;
    /* 00699686: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00699689: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0069968c: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069968d: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0069968f: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 00699692: mov eax, 4 */ r_eax = 0x4u;
    /* 00699697: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00699699: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069969b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0069969e: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 006996a1: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 006996a4: cmp ebx, dword ptr [eax + 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006996a7: jl 0x699630 */ if ((fS!=fO)) goto L_00699630;
L_006996a9:; BB(0x006996a9);
    /* 006996a9: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 006996ac: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006996b3: mov eax, dword ptr [edi + 0x484] */ r_eax = R32((u32)(r_edi+0x484u));
    /* 006996b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006996bb: jle 0x699701 */ if ((fZ||fS!=fO)) goto L_00699701;
L_006996bd:; BB(0x006996bd);
    /* 006996bd: lea eax, [edi + 0x888] */ r_eax = (u32)(r_edi+0x888u);
L_006996c3:; BB(0x006996c3);
    /* 006996c3: mov edx, dword ptr [eax - 0x400] */ r_edx = R32((u32)(r_eax+0xfffffc00u));
    /* 006996c9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006996cc: mov ebx, dword ptr [ecx + edx*4] */ r_ebx = R32((u32)(r_ecx+r_edx*4));
    /* 006996cf: lea edx, [ecx + edx*4] */ r_edx = (u32)(r_ecx+r_edx*4);
    /* 006996d2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006996d4: jne 0x6996de */ if (!fZ) goto L_006996de;
L_006996d6:; BB(0x006996d6);
    /* 006996d6: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 006996d8: cmp dword ptr [ecx + ebx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_ebx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006996dc: je 0x6996ed */ if (fZ) goto L_006996ed;
L_006996de:; BB(0x006996de);
    /* 006996de: mov dword ptr [edx], 1 */ W32((u32)(r_edx), 0x1u);
    /* 006996e4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006996e6: mov dword ptr [ecx + edx*4], 1 */ W32((u32)(r_ecx+r_edx*4), 0x1u);
L_006996ed:; BB(0x006996ed);
    /* 006996ed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006996f0: mov edx, dword ptr [edi + 0x484] */ r_edx = R32((u32)(r_edi+0x484u));
    /* 006996f6: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006996f7: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006996fa: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006996fc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006996ff: jl 0x6996c3 */ if ((fS!=fO)) goto L_006996c3;
L_00699701:; BB(0x00699701);
    /* 00699701: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00699703: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0069970a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069970c: jle 0x6997c2 */ if ((fZ||fS!=fO)) goto L_006997c2;
L_00699712:; BB(0x00699712);
    /* 00699712: add edi, 0x444 */ {  u32 a = r_edi; u32 b = 0x444u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00699718: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
L_0069971b:; BB(0x0069971b);
    /* 0069971b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0069971e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00699720: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00699722: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00699725: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00699727: jle 0x699776 */ if ((fZ||fS!=fO)) goto L_00699776;
L_00699729:; BB(0x00699729);
    /* 00699729: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0069972c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0069972f: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00699732: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00699735: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00699738: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069973a: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
L_0069973d:; BB(0x0069973d);
    /* 0069973d: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00699740: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00699743: cmp dword ptr [ebx], edx */ {  u32 a = R32((u32)(r_ebx)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699745: jne 0x699764 */ if (!fZ) goto L_00699764;
L_00699747:; BB(0x00699747);
    /* 00699747: mov ebx, dword ptr [ebp - 0x10] */ r_ebx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0069974a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069974c: cmp dword ptr [ebx + ecx*4], edx */ {  u32 a = R32((u32)(r_ebx+r_ecx*4)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069974f: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00699752: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00699755: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00699757: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00699759: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069975a: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069975d: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 00699760: mov dword ptr [ebx + eax - 4], edx */ W32((u32)(r_ebx+r_eax+0xfffffffcu), r_edx);
L_00699764:; BB(0x00699764);
    /* 00699764: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00699767: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00699768: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069976b: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0069976e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00699771: cmp ecx, dword ptr [edx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699774: jl 0x69973d */ if ((fS!=fO)) goto L_0069973d;
L_00699776:; BB(0x00699776);
    /* 00699776: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00699779: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069977c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069977d: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069977f: mov edx, dword ptr [ecx + eax*4 + 0x520] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x520u));
    /* 00699786: mov ecx, dword ptr [edx*4 + 0x7878d8] */ r_ecx = R32((u32)(r_edx*4+0x7878d8u));
    /* 0069978d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00699790: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00699791: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00699794: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00699795: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00699798: mov edx, dword ptr [edx + 0x34] */ r_edx = R32((u32)(r_edx+0x34u));
    /* 0069979b: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0069979e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069979f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006997a0: call dword ptr [ecx + 0x1c] */ { u32 t = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, 0x6997a3u); call_ind(t); }
    /* 006997a3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006997a6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006997a9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006997ac: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006997ad: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006997af: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006997b2: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006997b4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006997b7: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 006997ba: jl 0x69971b */ if ((fS!=fO)) goto L_0069971b;
L_006997c0:; BB(0x006997c0);
    /* 006997c0: mov edi, ecx */ r_edi = r_ecx;
L_006997c2:; BB(0x006997c2);
    /* 006997c2: mov ecx, dword ptr [edi + 0x484] */ r_ecx = R32((u32)(r_edi+0x484u));
    /* 006997c8: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); }
    /* 006997c9: js 0x699870 */ if (fS) goto L_00699870;
L_006997cf:; BB(0x006997cf);
    /* 006997cf: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006997d2: lea edi, [edi + ecx*4 + 0x888] */ r_edi = (u32)(r_edi+r_ecx*4+0x888u);
    /* 006997d9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006997da: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006997dc: mov ebx, eax */ r_ebx = r_eax;
    /* 006997de: sar ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 006997e0: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006997e1: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_006997e4:; BB(0x006997e4);
    /* 006997e4: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006997e6: mov edx, dword ptr [edi - 0x400] */ r_edx = R32((u32)(r_edi+0xfffffc00u));
    /* 006997ec: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006997ee: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006997f1: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 006997f3: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 006997f6: jle 0x69985d */ if ((fZ||fS!=fO)) goto L_0069985d;
L_006997f8:; BB(0x006997f8);
    /* 006997f8: mov edx, eax */ r_edx = r_eax;
    /* 006997fa: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 006997fd: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
L_006997ff:; BB(0x006997ff);
    /* 006997ff: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00699801: fld dword ptr [edx + ecx] */ FPUSH(R_F32((u32)(r_edx+r_ecx)));
    /* 00699804: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00699806: fcomp dword ptr [0x6c2fe8] */ fx_compare(ST(0), R_F32((u32)(0x6c2fe8u))); FPOP();
    /* 0069980c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069980e: fcom dword ptr [0x6c2fe8] */ fx_compare(ST(0), R_F32((u32)(0x6c2fe8u))); 
    /* 00699814: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00699819: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069981b: jne 0x699836 */ if (!fZ) goto L_00699836;
L_0069981d:; BB(0x0069981d);
    /* 0069981d: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00699822: jne 0x69982d */ if (!fZ) goto L_0069982d;
L_00699824:; BB(0x00699824);
    /* 00699824: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00699826: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00699828: fstp dword ptr [edx + ecx] */ W_F32((u32)(r_edx+r_ecx), ST(0)); FPOP();
    /* 0069982b: jmp 0x69984f */ goto L_0069984f;
L_0069982d:; BB(0x0069982d);
    /* 0069982d: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0069982f: fstp dword ptr [edx + ecx] */ W_F32((u32)(r_edx+r_ecx), ST(0)); FPOP();
    /* 00699832: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00699834: jmp 0x69984d */ goto L_0069984d;
L_00699836:; BB(0x00699836);
    /* 00699836: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069983b: jne 0x699844 */ if (!fZ) goto L_00699844;
L_0069983d:; BB(0x0069983d);
    /* 0069983d: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0069983f: fstp dword ptr [edx + ecx] */ W_F32((u32)(r_edx+r_ecx), ST(0)); FPOP();
    /* 00699842: jmp 0x69984f */ goto L_0069984f;
L_00699844:; BB(0x00699844);
    /* 00699844: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00699846: fstp dword ptr [edx + ecx] */ W_F32((u32)(r_edx+r_ecx), ST(0)); FPOP();
    /* 00699849: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069984b: fsub st(1) */ ST(0) = ST(0) - ST(1);
L_0069984d:; BB(0x0069984d);
    /* 0069984d: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
L_0069984f:; BB(0x0069984f);
    /* 0069984f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00699852: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00699855: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00699856: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00699858: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0069985b: jne 0x6997ff */ if (!fZ) goto L_006997ff;
L_0069985d:; BB(0x0069985d);
    /* 0069985d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00699860: sub edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00699863: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00699864: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00699867: jne 0x6997e4 */ if (!fZ) goto L_006997e4;
L_0069986d:; BB(0x0069986d);
    /* 0069986d: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
L_00699870:; BB(0x00699870);
    /* 00699870: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00699873: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00699875: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00699878: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069987a: jle 0x6998c6 */ if ((fZ||fS!=fO)) goto L_006998c6;
L_0069987c:; BB(0x0069987c);
    /* 0069987c: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0069987f:; BB(0x0069987f);
    /* 0069987f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00699881: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00699884: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00699887: mov eax, dword ptr [ecx + eax*4 + 0x404] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x404u));
    /* 0069988e: mov ecx, dword ptr [edx + eax*4 + 0x320] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x320u));
    /* 00699895: mov edx, dword ptr [ecx*4 + 0x7878d0] */ r_edx = R32((u32)(r_ecx*4+0x7878d0u));
    /* 0069989c: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0069989e: mov ecx, dword ptr [ecx + ebx*4] */ r_ecx = R32((u32)(r_ecx+r_ebx*4));
    /* 006998a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006998a2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006998a5: mov ecx, dword ptr [ecx + ebx*4] */ r_ecx = R32((u32)(r_ecx+r_ebx*4));
    /* 006998a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006998a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006998ac: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 006998af: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 006998b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006998b3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006998b4: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x6998b7u); call_ind(t); }
    /* 006998b7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006998ba: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006998bd: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006998be: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006998c1: cmp ebx, dword ptr [ecx + 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006998c4: jl 0x69987f */ if ((fS!=fO)) goto L_0069987f;
L_006998c6:; BB(0x006998c6);
    /* 006998c6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006998c9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006998cb: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006998ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006998d0: jle 0x6998f7 */ if ((fZ||fS!=fO)) goto L_006998f7;
L_006998d2:; BB(0x006998d2);
    /* 006998d2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006998d4: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 006998d7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006998da: mov eax, dword ptr [eax + edi*4] */ r_eax = R32((u32)(r_eax+r_edi*4));
    /* 006998dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006998de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006998df: mov eax, dword ptr [edx + ecx*4 + 0xc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 006998e3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006998e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006998e6: call 0x6977c0 */ r_esp -= 4; W32(r_esp, 0x6998ebu); f_006977c0();
    /* 006998eb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006998ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006998f1: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006998f2: cmp edi, dword ptr [edx + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006998f5: jl 0x6998d2 */ if ((fS!=fO)) goto L_006998d2;
L_006998f7:; BB(0x006998f7);
    /* 006998f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006998f9: lea esp, [ebp - 0x38] */ r_esp = (u32)(r_ebp+0xffffffc8u);
    /* 006998fc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006998fd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006998fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006998ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00699901: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00699902: ret  */ FN_RET(0x00699590); r_esp += 4; return;
}

void f_00699910(void) /* sub_699910 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00699910);
    /* 00699910: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00699914: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699916: je 0x69992e */ if (fZ) goto L_0069992e;
L_00699918:; BB(0x00699918);
    /* 00699918: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00699919: mov ecx, 0x1c5 */ r_ecx = 0x1c5u;
    /* 0069991e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00699920: mov edi, edx */ r_edi = r_edx;
    /* 00699922: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00699924: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00699925: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00699929: jmp 0x687300 */ f_00687300(); return;
L_0069992e:; BB(0x0069992e);
    /* 0069992e: ret  */ FN_RET(0x00699910); r_esp += 4; return;
}

void f_00699930(void) /* sub_699930 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00699930);
    /* 00699930: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699931: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00699935: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699937: je 0x6999a8 */ if (fZ) goto L_006999a8;
L_00699939:; BB(0x00699939);
    /* 00699939: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0069993c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069993d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0069993f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00699941: jle 0x69995e */ if ((fZ||fS!=fO)) goto L_0069995e;
L_00699943:; BB(0x00699943);
    /* 00699943: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 00699946: mov eax, dword ptr [eax + edi*4] */ r_eax = R32((u32)(r_eax+r_edi*4));
    /* 00699949: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069994b: je 0x699956 */ if (fZ) goto L_00699956;
L_0069994d:; BB(0x0069994d);
    /* 0069994d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069994e: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x699953u); f_00687300();
    /* 00699953: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00699956:; BB(0x00699956);
    /* 00699956: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00699959: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069995a: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069995c: jl 0x699943 */ if ((fS!=fO)) goto L_00699943;
L_0069995e:; BB(0x0069995e);
    /* 0069995e: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 00699961: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00699962: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x699967u); f_00687300();
    /* 00699967: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 0069996a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069996d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0069996f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00699971: jle 0x69998a */ if ((fZ||fS!=fO)) goto L_0069998a;
L_00699973:; BB(0x00699973);
    /* 00699973: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 00699976: mov eax, dword ptr [edx + edi*4] */ r_eax = R32((u32)(r_edx+r_edi*4));
    /* 00699979: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069997a: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x69997fu); f_00687300();
    /* 0069997f: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 00699982: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699985: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00699986: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699988: jl 0x699973 */ if ((fS!=fO)) goto L_00699973;
L_0069998a:; BB(0x0069998a);
    /* 0069998a: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 0069998d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069998e: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x699993u); f_00687300();
    /* 00699993: mov ecx, 0xb */ r_ecx = 0xbu;
    /* 00699998: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069999a: mov edi, esi */ r_edi = r_esi;
    /* 0069999c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069999d: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0069999f: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x6999a4u); f_00687300();
    /* 006999a4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006999a7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_006999a8:; BB(0x006999a8);
    /* 006999a8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006999a9: ret  */ FN_RET(0x00699930); r_esp += 4; return;
}

void f_006999b0(void) /* sub_6999B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006999b0);
    /* 006999b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006999b1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006999b2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006999b3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006999b4: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 006999b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006999b9: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 006999bd: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 006999bf: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006999c1: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006999c3: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 006999c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006999c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006999c9: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x6999ceu); f_0069d210();
    /* 006999ce: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 006999d1: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 006999d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006999d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006999d5: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x6999dau); f_0069d210();
    /* 006999da: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 006999dd: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 006999df: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006999e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006999e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006999e2: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x6999e7u); f_0069d210();
    /* 006999e7: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 006999ea: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006999ec: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006999ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006999ee: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006999ef: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x6999f4u); f_0069d210();
    /* 006999f4: mov ecx, dword ptr [edi + 0x10] */ r_ecx = R32((u32)(r_edi+0x10u));
    /* 006999f7: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006999f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006999fa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006999fb: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x699a00u); f_0069d210();
    /* 00699a00: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 00699a03: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699a06: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00699a08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00699a0a: jle 0x699a77 */ if ((fZ||fS!=fO)) goto L_00699a77;
L_00699a0c:; BB(0x00699a0c);
    /* 00699a0c: lea ebx, [edi + 0x14] */ r_ebx = (u32)(r_edi+0x14u);
L_00699a0f:; BB(0x00699a0f);
    /* 00699a0f: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00699a11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00699a12: call 0x699aa0 */ r_esp -= 4; W32(r_esp, 0x699a17u); f_00699aa0();
    /* 00699a17: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699a1a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699a1d: jle 0x699a47 */ if ((fZ||fS!=fO)) goto L_00699a47;
L_00699a1f:; BB(0x00699a1f);
    /* 00699a1f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00699a21: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00699a23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00699a24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699a25: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x699a2au); f_0069d210();
    /* 00699a2a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00699a2c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00699a2e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699a2f: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x699a34u); f_0069d210();
    /* 00699a34: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00699a36: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00699a38: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00699a3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00699a3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699a3d: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x699a42u); f_0069d210();
    /* 00699a42: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699a45: jmp 0x699a55 */ goto L_00699a55;
L_00699a47:; BB(0x00699a47);
    /* 00699a47: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00699a49: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00699a4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00699a4c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699a4d: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x699a52u); f_0069d210();
    /* 00699a52: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00699a55:; BB(0x00699a55);
    /* 00699a55: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00699a57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00699a58: call 0x699ab0 */ r_esp -= 4; W32(r_esp, 0x699a5du); f_00699ab0();
    /* 00699a5d: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00699a61: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699a64: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00699a66: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 00699a69: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00699a6a: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00699a6d: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699a6f: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00699a73: jl 0x699a0f */ if ((fS!=fO)) goto L_00699a0f;
L_00699a75:; BB(0x00699a75);
    /* 00699a75: mov ebx, ecx */ r_ebx = r_ecx;
L_00699a77:; BB(0x00699a77);
    /* 00699a77: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00699a79: jle 0x699a95 */ if ((fZ||fS!=fO)) goto L_00699a95;
L_00699a7b:; BB(0x00699a7b);
    /* 00699a7b: add edi, 0x114 */ {  u32 a = r_edi; u32 b = 0x114u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00699a81:; BB(0x00699a81);
    /* 00699a81: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00699a83: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00699a85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00699a86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699a87: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x699a8cu); f_0069d210();
    /* 00699a8c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699a8f: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00699a92: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 00699a93: jne 0x699a81 */ if (!fZ) goto L_00699a81;
L_00699a95:; BB(0x00699a95);
    /* 00699a95: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00699a96: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00699a97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00699a98: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00699a99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00699a9a: ret  */ FN_RET(0x006999b0); r_esp += 4; return;
}

void f_00699aa0(void) /* sub_699AA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00699aa0);
    /* 00699aa0: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00699aa4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00699aa6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699aa8: je 0x699aaf */ if (fZ) goto L_00699aaf;
L_00699aaa:; BB(0x00699aaa);
    /* 00699aaa: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00699aab: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fZ = (r == 0); } }
    /* 00699aad: jne 0x699aaa */ if (!fZ) goto L_00699aaa;
L_00699aaf:; BB(0x00699aaf);
    /* 00699aaf: ret  */ FN_RET(0x00699aa0); r_esp += 4; return;
}

void f_00699ab0(void) /* sub_699AB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00699ab0);
    /* 00699ab0: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00699ab4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00699ab6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699ab8: je 0x699ac5 */ if (fZ) goto L_00699ac5;
L_00699aba:; BB(0x00699aba);
    /* 00699aba: mov edx, ecx */ r_edx = r_ecx;
    /* 00699abc: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00699abf: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00699ac1: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fZ = (r == 0); } }
    /* 00699ac3: jne 0x699aba */ if (!fZ) goto L_00699aba;
L_00699ac5:; BB(0x00699ac5);
    /* 00699ac5: ret  */ FN_RET(0x00699ab0); r_esp += 4; return;
}

void f_00699ad0(void) /* sub_699AD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00699ad0);
    /* 00699ad0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00699ad3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00699ad4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00699ad5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699ad6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00699ad7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00699ad9: push 0x714 */ { u32 v = 0x714u; r_esp -= 4; W32(r_esp, v); }
    /* 00699ade: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00699ae0: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00699ae4: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x699ae9u); f_0068738e();
    /* 00699ae9: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 00699aed: mov esi, eax */ r_esi = r_eax;
    /* 00699aef: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00699af3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00699af5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00699af6: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00699af9: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00699afd: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x699b02u); f_0069d470();
    /* 00699b02: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00699b04: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00699b05: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00699b07: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x699b0cu); f_0069d470();
    /* 00699b0c: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00699b0e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00699b0f: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00699b12: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x699b17u); f_0069d470();
    /* 00699b17: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00699b18: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00699b1a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00699b1b: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00699b1e: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x699b23u); f_0069d470();
    /* 00699b23: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00699b24: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00699b26: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00699b27: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 00699b2a: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x699b2fu); f_0069d470();
    /* 00699b2f: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 00699b32: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00699b35: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699b38: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00699b3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00699b3c: jle 0x699b9a */ if ((fZ||fS!=fO)) goto L_00699b9a;
L_00699b3e:; BB(0x00699b3e);
    /* 00699b3e: lea edx, [esi + 0x14] */ r_edx = (u32)(r_esi+0x14u);
    /* 00699b41: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
L_00699b45:; BB(0x00699b45);
    /* 00699b45: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00699b47: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00699b48: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x699b4du); f_0069d470();
    /* 00699b4d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00699b4f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00699b50: mov ebx, eax */ r_ebx = r_eax;
    /* 00699b52: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x699b57u); f_0069d470();
    /* 00699b57: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699b5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699b5c: je 0x699b6e */ if (fZ) goto L_00699b6e;
L_00699b5e:; BB(0x00699b5e);
    /* 00699b5e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00699b60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00699b61: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x699b66u); f_0069d470();
    /* 00699b66: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00699b69: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699b6c: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
L_00699b6e:; BB(0x00699b6e);
    /* 00699b6e: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00699b72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00699b73: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 00699b75: call 0x699ab0 */ r_esp -= 4; W32(r_esp, 0x699b7au); f_00699ab0();
    /* 00699b7a: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00699b7e: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00699b82: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699b85: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00699b87: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00699b8a: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00699b8b: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00699b8e: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699b90: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00699b94: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00699b98: jl 0x699b45 */ if ((fS!=fO)) goto L_00699b45;
L_00699b9a:; BB(0x00699b9a);
    /* 00699b9a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00699b9c: jle 0x699bc4 */ if ((fZ||fS!=fO)) goto L_00699bc4;
L_00699b9e:; BB(0x00699b9e);
    /* 00699b9e: lea ebp, [esi + 0x114] */ r_ebp = (u32)(r_esi+0x114u);
    /* 00699ba4: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
L_00699ba8:; BB(0x00699ba8);
    /* 00699ba8: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00699baa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00699bab: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x699bb0u); f_0069d470();
    /* 00699bb0: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 00699bb3: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00699bb7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699bba: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00699bbd: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00699bbe: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00699bc2: jne 0x699ba8 */ if (!fZ) goto L_00699ba8;
L_00699bc4:; BB(0x00699bc4);
    /* 00699bc4: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00699bc8: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 00699bcb: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00699bce: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699bd0: jge 0x699bf4 */ if ((fS==fO)) goto L_00699bf4;
L_00699bd2:; BB(0x00699bd2);
    /* 00699bd2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00699bd4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00699bd6: jle 0x699bea */ if ((fZ||fS!=fO)) goto L_00699bea;
L_00699bd8:; BB(0x00699bd8);
    /* 00699bd8: lea ecx, [esi + 0x114] */ r_ecx = (u32)(r_esi+0x114u);
L_00699bde:; BB(0x00699bde);
    /* 00699bde: cmp dword ptr [ecx], edx */ {  u32 a = R32((u32)(r_ecx)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699be0: jge 0x699bf4 */ if ((fS==fO)) goto L_00699bf4;
L_00699be2:; BB(0x00699be2);
    /* 00699be2: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00699be3: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00699be6: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699be8: jl 0x699bde */ if ((fS!=fO)) goto L_00699bde;
L_00699bea:; BB(0x00699bea);
    /* 00699bea: mov eax, esi */ r_eax = r_esi;
    /* 00699bec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00699bed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00699bee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00699bef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00699bf0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699bf3: ret  */ FN_RET(0x00699ad0); r_esp += 4; return;
L_00699bf4:; BB(0x00699bf4);
    /* 00699bf4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699bf5: call 0x699910 */ r_esp -= 4; W32(r_esp, 0x699bfau); f_00699910();
    /* 00699bfa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699bfd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00699bff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00699c00: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00699c01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00699c02: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00699c03: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699c06: ret  */ FN_RET(0x00699ad0); r_esp += 4; return;
}

void f_00699c10(void) /* sub_699C10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00699c10);
    /* 00699c10: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00699c13: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00699c14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00699c15: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699c16: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00699c17: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00699c19: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00699c1b: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x699c20u); f_0068738e();
    /* 00699c20: mov esi, eax */ r_esi = r_eax;
    /* 00699c22: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00699c26: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00699c28: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00699c2a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00699c2d: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00699c31: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 00699c35: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 00699c39: mov ebp, dword ptr [ecx + 0x1c] */ r_ebp = R32((u32)(r_ecx+0x1cu));
    /* 00699c3c: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00699c3e: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00699c41: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 00699c44: mov ecx, dword ptr [ebp + 0xb20] */ r_ecx = R32((u32)(r_ebp+0xb20u));
    /* 00699c4a: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 00699c4d: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 00699c50: mov ecx, dword ptr [ebp + 0xb20] */ r_ecx = R32((u32)(r_ebp+0xb20u));
    /* 00699c56: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00699c59: lea eax, [eax + edx*2] */ r_eax = (u32)(r_eax+r_edx*2);
    /* 00699c5c: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00699c5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00699c60: lea eax, [ecx + eax*4] */ r_eax = (u32)(r_ecx+r_eax*4);
    /* 00699c63: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 00699c66: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 00699c68: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 00699c6c: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x699c71u); f_0068738e();
    /* 00699c71: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 00699c74: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00699c77: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699c7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00699c7c: jle 0x699d2f */ if ((fZ||fS!=fO)) goto L_00699d2f;
L_00699c82:; BB(0x00699c82);
    /* 00699c82: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00699c86: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00699c89: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
L_00699c8d:; BB(0x00699c8d);
    /* 00699c8d: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00699c91: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00699c93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00699c94: call 0x699aa0 */ r_esp -= 4; W32(r_esp, 0x699c99u); f_00699aa0();
    /* 00699c99: mov ebx, eax */ r_ebx = r_eax;
    /* 00699c9b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699c9e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699ca0: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00699ca4: je 0x699d14 */ if (fZ) goto L_00699d14;
L_00699ca6:; BB(0x00699ca6);
    /* 00699ca6: cmp ebx, dword ptr [esp + 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699caa: jle 0x699cb0 */ if ((fZ||fS!=fO)) goto L_00699cb0;
L_00699cac:; BB(0x00699cac);
    /* 00699cac: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
L_00699cb0:; BB(0x00699cb0);
    /* 00699cb0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00699cb2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00699cb3: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x699cb8u); f_0068738e();
    /* 00699cb8: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 00699cbb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699cbe: mov dword ptr [ecx + edi*4], eax */ W32((u32)(r_ecx+r_edi*4), r_eax);
    /* 00699cc1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00699cc3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00699cc5: jle 0x699d14 */ if ((fZ||fS!=fO)) goto L_00699d14;
L_00699cc7:; BB(0x00699cc7);
    /* 00699cc7: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00699ccb: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00699ccf: lea edx, [edx + eax*4 + 0x114] */ r_edx = (u32)(r_edx+r_eax*4+0x114u);
L_00699cd6:; BB(0x00699cd6);
    /* 00699cd6: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 00699cda: mov eax, 1 */ r_eax = 0x1u;
    /* 00699cdf: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00699ce1: test dword ptr [ebx], eax */ {  u32 a = R32((u32)(r_ebx)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699ce3: je 0x699d0b */ if (fZ) goto L_00699d0b;
L_00699ce5:; BB(0x00699ce5);
    /* 00699ce5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00699ce7: lea ebx, [eax + eax*4] */ r_ebx = (u32)(r_eax+r_eax*4);
    /* 00699cea: lea eax, [eax + ebx*2] */ r_eax = (u32)(r_eax+r_ebx*2);
    /* 00699ced: mov ebx, dword ptr [ebp + 0xb20] */ r_ebx = R32((u32)(r_ebp+0xb20u));
    /* 00699cf3: lea eax, [ebx + eax*4] */ r_eax = (u32)(r_ebx+r_eax*4);
    /* 00699cf6: mov ebx, dword ptr [esi + 0x14] */ r_ebx = R32((u32)(r_esi+0x14u));
    /* 00699cf9: mov ebx, dword ptr [ebx + edi*4] */ r_ebx = R32((u32)(r_ebx+r_edi*4));
    /* 00699cfc: mov dword ptr [ebx + ecx*4], eax */ W32((u32)(r_ebx+r_ecx*4), r_eax);
    /* 00699cff: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00699d03: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00699d04: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00699d07: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
L_00699d0b:; BB(0x00699d0b);
    /* 00699d0b: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00699d0f: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00699d10: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00699d12: jl 0x699cd6 */ if ((fS!=fO)) goto L_00699cd6;
L_00699d14:; BB(0x00699d14);
    /* 00699d14: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00699d18: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00699d1b: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00699d1c: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00699d1f: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699d21: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00699d25: jl 0x699c8d */ if ((fS!=fO)) goto L_00699c8d;
L_00699d2b:; BB(0x00699d2b);
    /* 00699d2b: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
L_00699d2f:; BB(0x00699d2f);
    /* 00699d2f: fild dword ptr [esi + 4] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x4u)));
    /* 00699d32: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00699d36: call 0x69d578 */ r_esp -= 4; W32(r_esp, 0x699d3bu); f_0069d578();
    /* 00699d3b: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 00699d41: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00699d44: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00699d47: call 0x686fb4 */ r_esp -= 4; W32(r_esp, 0x699d4cu); f_00686fb4();
    /* 00699d4c: call 0x687450 */ r_esp -= 4; W32(r_esp, 0x699d51u); f_00687450();
    /* 00699d51: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00699d55: lea edx, [eax*4] */ r_edx = (u32)(r_eax*4);
    /* 00699d5c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00699d5d: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 00699d60: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 00699d63: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x699d68u); f_006872fa();
    /* 00699d68: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 00699d6b: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 00699d6e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699d71: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00699d73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00699d75: jle 0x699dda */ if ((fZ||fS!=fO)) goto L_00699dda;
L_00699d77:; BB(0x00699d77);
    /* 00699d77: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00699d78: idiv dword ptr [esi + 4] */ { i32 d = (i32)R32((u32)(r_esi+0x4u)); if (!d) UNSUP(0x00699d78, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00699d78, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00699d7b: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00699d7f: mov edi, eax */ r_edi = r_eax;
    /* 00699d81: lea eax, [ebx*4] */ r_eax = (u32)(r_ebx*4);
    /* 00699d88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00699d89: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x699d8eu); f_006872fa();
    /* 00699d8e: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 00699d91: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699d94: mov dword ptr [ecx + ebp*4], eax */ W32((u32)(r_ecx+r_ebp*4), r_eax);
    /* 00699d97: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00699d99: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00699d9b: jle 0x699dd2 */ if ((fZ||fS!=fO)) goto L_00699dd2;
L_00699d9d:; BB(0x00699d9d);
    /* 00699d9d: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00699da1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00699da2: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x00699da2, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00699da2, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00699da4: mov ebx, eax */ r_ebx = r_eax;
    /* 00699da6: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00699daa: mov edx, ebx */ r_edx = r_ebx;
    /* 00699dac: imul edx, edi */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edi; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00699daf: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00699db1: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00699db5: mov eax, edi */ r_eax = r_edi;
    /* 00699db7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00699db8: idiv dword ptr [esi + 4] */ { i32 d = (i32)R32((u32)(r_esi+0x4u)); if (!d) UNSUP(0x00699db8, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00699db8, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00699dbb: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00699dbc: mov edi, eax */ r_edi = r_eax;
    /* 00699dbe: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00699dc1: mov edx, dword ptr [eax + ebp*4] */ r_edx = R32((u32)(r_eax+r_ebp*4));
    /* 00699dc4: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00699dc8: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699dca: mov dword ptr [edx + ecx*4 - 4], ebx */ W32((u32)(r_edx+r_ecx*4+0xfffffffcu), r_ebx);
    /* 00699dce: jl 0x699d9d */ if ((fS!=fO)) goto L_00699d9d;
L_00699dd0:; BB(0x00699dd0);
    /* 00699dd0: mov ebx, eax */ r_ebx = r_eax;
L_00699dd2:; BB(0x00699dd2);
    /* 00699dd2: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 00699dd5: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00699dd6: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699dd8: jl 0x699d77 */ if ((fS!=fO)) goto L_00699d77;
L_00699dda:; BB(0x00699dda);
    /* 00699dda: mov eax, esi */ r_eax = r_esi;
    /* 00699ddc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00699ddd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00699dde: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00699ddf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00699de0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699de3: ret  */ FN_RET(0x00699c10); r_esp += 4; return;
}

void f_00699df0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00699df0);
    /* 00699df0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00699df1: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00699df5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00699df7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00699df9: jle 0x699e37 */ if ((fZ||fS!=fO)) goto L_00699e37;
L_00699dfb:; BB(0x00699dfb);
    /* 00699dfb: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00699dff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00699e00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699e01: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 00699e05: mov eax, ecx */ r_eax = r_ecx;
    /* 00699e07: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
L_00699e09:; BB(0x00699e09);
    /* 00699e09: cmp dword ptr [esi + eax], 0 */ {  u32 a = R32((u32)(r_esi+r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699e0d: je 0x699e15 */ if (fZ) goto L_00699e15;
L_00699e0f:; BB(0x00699e0f);
    /* 00699e0f: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 00699e11: mov dword ptr [ecx + edx*4], ebx */ W32((u32)(r_ecx+r_edx*4), r_ebx);
    /* 00699e14: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_00699e15:; BB(0x00699e15);
    /* 00699e15: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00699e18: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00699e19: jne 0x699e09 */ if (!fZ) goto L_00699e09;
L_00699e1b:; BB(0x00699e1b);
    /* 00699e1b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00699e1c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00699e1d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699e1f: je 0x699e37 */ if (fZ) goto L_00699e37;
L_00699e21:; BB(0x00699e21);
    /* 00699e21: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00699e22: mov dword ptr [esp + 0x14], 0x695350 */ W32((u32)(r_esp+0x14u), 0x695350u);
    /* 00699e2a: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00699e2e: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00699e32: jmp 0x699e40 */ f_00699e40(); return;
L_00699e37:; BB(0x00699e37);
    /* 00699e37: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00699e39: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00699e3a: ret  */ FN_RET(0x00699df0); r_esp += 4; return;
}

