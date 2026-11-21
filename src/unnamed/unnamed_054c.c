#include "protos.h"

void f_0054c460(void) /* sub_54C460 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054c460);
    /* 0054c460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054c461: mov ebp, esp */ r_ebp = r_esp;
    /* 0054c463: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054c466: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054c467: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0054c46a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054c471: jmp 0x54c47c */ goto L_0054c47c;
L_0054c473:; BB(0x0054c473);
    /* 0054c473: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c476: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054c479: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054c47c:; BB(0x0054c47c);
    /* 0054c47c: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054c480: jge 0x54c499 */ if ((fS==fO)) goto L_0054c499;
L_0054c482:; BB(0x0054c482);
    /* 0054c482: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c485: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054c488: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c48b: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0054c48e: mov ax, word ptr [esi + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi+r_eax*2))) & 0xffffu);
    /* 0054c492: mov word ptr [edx + ecx*2 + 4], ax */ W16((u32)(r_edx+r_ecx*2+0x4u), (u16)r_eax);
    /* 0054c497: jmp 0x54c473 */ goto L_0054c473;
L_0054c499:; BB(0x0054c499);
    /* 0054c499: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054c49c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0054c49f: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0054c4a5: mov eax, dword ptr [edx + 0x4f14] */ r_eax = R32((u32)(r_edx+0x4f14u));
    /* 0054c4ab: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0054c4ae: cmp dword ptr [ebp - 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0054c4b2: ja 0x54c4fa */ if ((!fC&&!fZ)) goto L_0054c4fa;
L_0054c4b4:; BB(0x0054c4b4);
    /* 0054c4b4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054c4b7: jmp dword ptr [ecx*4 + 0x54c50c] */ { u32 t = R32((u32)(r_ecx*4+0x54c50cu)); switch (t) { case 0x54c4beu: goto L_0054c4be; case 0x54c4c8u: goto L_0054c4c8; case 0x54c4d2u: goto L_0054c4d2; case 0x54c4dcu: goto L_0054c4dc; case 0x54c4e6u: goto L_0054c4e6; case 0x54c4f0u: goto L_0054c4f0; default: UNSUP(0x0054c4b7, "jump table entry is not a known target"); } }
L_0054c4be:; BB(0x0054c4be);
    /* 0054c4be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054c4c1: call 0x54d050 */ r_esp -= 4; W32(r_esp, 0x54c4c6u); f_0054d050();
    /* 0054c4c6: jmp 0x54c502 */ goto L_0054c502;
L_0054c4c8:; BB(0x0054c4c8);
    /* 0054c4c8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054c4cb: call 0x54d090 */ r_esp -= 4; W32(r_esp, 0x54c4d0u); f_0054d090();
    /* 0054c4d0: jmp 0x54c502 */ goto L_0054c502;
L_0054c4d2:; BB(0x0054c4d2);
    /* 0054c4d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054c4d5: call 0x54d1c0 */ r_esp -= 4; W32(r_esp, 0x54c4dau); f_0054d1c0();
    /* 0054c4da: jmp 0x54c502 */ goto L_0054c502;
L_0054c4dc:; BB(0x0054c4dc);
    /* 0054c4dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054c4df: call 0x54d200 */ r_esp -= 4; W32(r_esp, 0x54c4e4u); f_0054d200();
    /* 0054c4e4: jmp 0x54c502 */ goto L_0054c502;
L_0054c4e6:; BB(0x0054c4e6);
    /* 0054c4e6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054c4e9: call 0x54d360 */ r_esp -= 4; W32(r_esp, 0x54c4eeu); f_0054d360();
    /* 0054c4ee: jmp 0x54c502 */ goto L_0054c502;
L_0054c4f0:; BB(0x0054c4f0);
    /* 0054c4f0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054c4f3: call 0x54d520 */ r_esp -= 4; W32(r_esp, 0x54c4f8u); f_0054d520();
    /* 0054c4f8: jmp 0x54c502 */ goto L_0054c502;
L_0054c4fa:; BB(0x0054c4fa);
    /* 0054c4fa: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054c4fd: jmp 0x54c502 */ goto L_0054c502;
L_0054c502:; BB(0x0054c502);
    /* 0054c502: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054c503: mov esp, ebp */ r_esp = r_ebp;
    /* 0054c505: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054c506: ret 8 */ FN_RET(0x0054c460); r_esp += 12; return;
}

void f_0054c540(void) /* sub_54C540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054c540);
    /* 0054c540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054c541: mov ebp, esp */ r_ebp = r_esp;
    /* 0054c543: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054c546: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0054c549: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054c550: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054c557: jmp 0x54c562 */ goto L_0054c562;
L_0054c559:; BB(0x0054c559);
    /* 0054c559: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c55c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054c55f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054c562:; BB(0x0054c562);
    /* 0054c562: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054c566: jge 0x54c582 */ if ((fS==fO)) goto L_0054c582;
L_0054c568:; BB(0x0054c568);
    /* 0054c568: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c56b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054c56e: movzx eax, word ptr [edx + ecx*2 + 4] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*2+0x4u));
    /* 0054c573: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c575: je 0x54c580 */ if (fZ) goto L_0054c580;
L_0054c577:; BB(0x0054c577);
    /* 0054c577: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054c57a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054c57d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0054c580:; BB(0x0054c580);
    /* 0054c580: jmp 0x54c559 */ goto L_0054c559;
L_0054c582:; BB(0x0054c582);
    /* 0054c582: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054c585: mov esp, ebp */ r_esp = r_ebp;
    /* 0054c587: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054c588: ret  */ FN_RET(0x0054c540); r_esp += 4; return;
}

void f_0054c590(void) /* sub_54C590 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054c590);
    /* 0054c590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054c591: mov ebp, esp */ r_ebp = r_esp;
    /* 0054c593: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054c596: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0054c599: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 0054c59d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054c59e: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54c5a3u); f_00641280();
    /* 0054c5a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054c5a6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0054c5a9: cmp dword ptr [ebp - 4], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c5ad: jne 0x54c5b6 */ if (!fZ) goto L_0054c5b6;
L_0054c5af:; BB(0x0054c5af);
    /* 0054c5af: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0054c5b4: jmp 0x54c619 */ goto L_0054c619;
L_0054c5b6:; BB(0x0054c5b6);
    /* 0054c5b6: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c5ba: jne 0x54c616 */ if (!fZ) goto L_0054c616;
L_0054c5bc:; BB(0x0054c5bc);
    /* 0054c5bc: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0054c5c2: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 0054c5c8: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0054c5cb: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c5cf: je 0x54c60f */ if (fZ) goto L_0054c60f;
L_0054c5d1:; BB(0x0054c5d1);
    /* 0054c5d1: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0054c5d6: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 0054c5dc: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0054c5df: cmp dword ptr [ebp - 0xc], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c5e3: je 0x54c60f */ if (fZ) goto L_0054c60f;
L_0054c5e5:; BB(0x0054c5e5);
    /* 0054c5e5: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0054c5eb: mov eax, dword ptr [edx + 0x4f14] */ r_eax = R32((u32)(r_edx+0x4f14u));
    /* 0054c5f1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0054c5f4: cmp dword ptr [ebp - 0x10], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c5f8: je 0x54c60f */ if (fZ) goto L_0054c60f;
L_0054c5fa:; BB(0x0054c5fa);
    /* 0054c5fa: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0054c600: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 0054c606: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0054c609: cmp dword ptr [ebp - 0x14], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c60d: jne 0x54c616 */ if (!fZ) goto L_0054c616;
L_0054c60f:; BB(0x0054c60f);
    /* 0054c60f: mov dword ptr [ebp - 4], 0x14 */ W32((u32)(r_ebp+0xfffffffcu), 0x14u);
L_0054c616:; BB(0x0054c616);
    /* 0054c616: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_0054c619:; BB(0x0054c619);
    /* 0054c619: mov esp, ebp */ r_esp = r_ebp;
    /* 0054c61b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054c61c: ret 4 */ FN_RET(0x0054c590); r_esp += 8; return;
}

void f_0054c620(void) /* sub_54C620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054c620);
    /* 0054c620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054c621: mov ebp, esp */ r_ebp = r_esp;
    /* 0054c623: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054c626: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0054c629: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c62c: call 0x54c670 */ r_esp -= 4; W32(r_esp, 0x54c631u); f_0054c670();
    /* 0054c631: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054c634: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c636: je 0x54c656 */ if (fZ) goto L_0054c656;
L_0054c638:; BB(0x0054c638);
    /* 0054c638: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c63b: mov dx, word ptr [ecx + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x4u))) & 0xffffu);
    /* 0054c63f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c640: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54c645u); f_00641280();
    /* 0054c645: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054c648: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c64b: jne 0x54c656 */ if (!fZ) goto L_0054c656;
L_0054c64d:; BB(0x0054c64d);
    /* 0054c64d: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0054c654: jmp 0x54c65d */ goto L_0054c65d;
L_0054c656:; BB(0x0054c656);
    /* 0054c656: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0054c65d:; BB(0x0054c65d);
    /* 0054c65d: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054c660: mov esp, ebp */ r_esp = r_ebp;
    /* 0054c662: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054c663: ret  */ FN_RET(0x0054c620); r_esp += 4; return;
}

void f_0054c670(void) /* sub_54C670 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054c670);
    /* 0054c670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054c671: mov ebp, esp */ r_ebp = r_esp;
    /* 0054c673: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054c676: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0054c679: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c67c: call 0x54c780 */ r_esp -= 4; W32(r_esp, 0x54c681u); f_0054c780();
    /* 0054c681: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054c684: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c686: je 0x54c6a0 */ if (fZ) goto L_0054c6a0;
L_0054c688:; BB(0x0054c688);
    /* 0054c688: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c68b: call 0x54c710 */ r_esp -= 4; W32(r_esp, 0x54c690u); f_0054c710();
    /* 0054c690: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054c693: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c695: je 0x54c6a0 */ if (fZ) goto L_0054c6a0;
L_0054c697:; BB(0x0054c697);
    /* 0054c697: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0054c69e: jmp 0x54c6a7 */ goto L_0054c6a7;
L_0054c6a0:; BB(0x0054c6a0);
    /* 0054c6a0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0054c6a7:; BB(0x0054c6a7);
    /* 0054c6a7: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054c6aa: mov esp, ebp */ r_esp = r_ebp;
    /* 0054c6ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054c6ad: ret  */ FN_RET(0x0054c670); r_esp += 4; return;
}

void f_0054c6b0(void) /* sub_54C6B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054c6b0);
    /* 0054c6b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054c6b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054c6b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c6b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0054c6b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c6ba: call 0x54ce10 */ r_esp -= 4; W32(r_esp, 0x54c6bfu); f_0054ce10();
    /* 0054c6bf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054c6c1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c6c4: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0054c6c7: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 0054c6c9: mov esp, ebp */ r_esp = r_ebp;
    /* 0054c6cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054c6cc: ret  */ FN_RET(0x0054c6b0); r_esp += 4; return;
}

void f_0054c6d0(void) /* sub_54C6D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054c6d0);
    /* 0054c6d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054c6d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054c6d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054c6d6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0054c6d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c6dc: call 0x54ce10 */ r_esp -= 4; W32(r_esp, 0x54c6e1u); f_0054ce10();
    /* 0054c6e1: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c6e4: jne 0x54c6fb */ if (!fZ) goto L_0054c6fb;
L_0054c6e6:; BB(0x0054c6e6);
    /* 0054c6e6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c6e9: call 0x54c8a0 */ r_esp -= 4; W32(r_esp, 0x54c6eeu); f_0054c8a0();
    /* 0054c6ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c6f0: je 0x54c6fb */ if (fZ) goto L_0054c6fb;
L_0054c6f2:; BB(0x0054c6f2);
    /* 0054c6f2: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0054c6f9: jmp 0x54c702 */ goto L_0054c702;
L_0054c6fb:; BB(0x0054c6fb);
    /* 0054c6fb: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0054c702:; BB(0x0054c702);
    /* 0054c702: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054c705: mov esp, ebp */ r_esp = r_ebp;
    /* 0054c707: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054c708: ret  */ FN_RET(0x0054c6d0); r_esp += 4; return;
}

void f_0054c710(void) /* sub_54C710 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054c710);
    /* 0054c710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054c711: mov ebp, esp */ r_ebp = r_esp;
    /* 0054c713: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054c716: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0054c719: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054c71c: mov cx, word ptr [eax + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x4u))) & 0xffffu);
    /* 0054c720: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c721: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x54c726u); f_00641290();
    /* 0054c726: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054c729: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0054c72c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0054c733: jmp 0x54c73e */ goto L_0054c73e;
L_0054c735:; BB(0x0054c735);
    /* 0054c735: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c738: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054c73b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0054c73e:; BB(0x0054c73e);
    /* 0054c73e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054c741: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54c746u); f_0054c540();
    /* 0054c746: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054c749: jge 0x54c76e */ if ((fS==fO)) goto L_0054c76e;
L_0054c74b:; BB(0x0054c74b);
    /* 0054c74b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c74e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054c751: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0054c756: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c757: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x54c75cu); f_00641290();
    /* 0054c75c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054c75f: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c762: jne 0x54c768 */ if (!fZ) goto L_0054c768;
L_0054c764:; BB(0x0054c764);
    /* 0054c764: jmp 0x54c735 */ goto L_0054c735;
L_0054c768:; BB(0x0054c768);
    /* 0054c768: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0054c76a: jmp 0x54c770 */ goto L_0054c770;
L_0054c76e:; BB(0x0054c76e);
    /* 0054c76e: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0054c770:; BB(0x0054c770);
    /* 0054c770: mov esp, ebp */ r_esp = r_ebp;
    /* 0054c772: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054c773: ret  */ FN_RET(0x0054c710); r_esp += 4; return;
}

void f_0054c780(void) /* sub_54C780 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054c780);
    /* 0054c780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054c781: mov ebp, esp */ r_ebp = r_esp;
    /* 0054c783: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054c786: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0054c789: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054c78c: mov cx, word ptr [eax + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x4u))) & 0xffffu);
    /* 0054c790: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c791: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54c796u); f_00641280();
    /* 0054c796: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054c799: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0054c79c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0054c7a3: jmp 0x54c7ae */ goto L_0054c7ae;
L_0054c7a5:; BB(0x0054c7a5);
    /* 0054c7a5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c7a8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054c7ab: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0054c7ae:; BB(0x0054c7ae);
    /* 0054c7ae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054c7b1: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54c7b6u); f_0054c540();
    /* 0054c7b6: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054c7b9: jge 0x54c80c */ if ((fS==fO)) goto L_0054c80c;
L_0054c7bb:; BB(0x0054c7bb);
    /* 0054c7bb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054c7be: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054c7c1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0054c7c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c7c7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054c7ca: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054c7cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054c7d0: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54c7d5u); f_00641280();
    /* 0054c7d5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054c7d8: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c7db: je 0x54c802 */ if (fZ) goto L_0054c802;
L_0054c7dd:; BB(0x0054c7dd);
    /* 0054c7dd: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c7e1: jne 0x54c806 */ if (!fZ) goto L_0054c806;
L_0054c7e3:; BB(0x0054c7e3);
    /* 0054c7e3: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c7e7: jne 0x54c806 */ if (!fZ) goto L_0054c806;
L_0054c7e9:; BB(0x0054c7e9);
    /* 0054c7e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c7ec: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054c7ef: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054c7f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054c7f5: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54c7fau); f_00641280();
    /* 0054c7fa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054c7fd: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c800: jne 0x54c806 */ if (!fZ) goto L_0054c806;
L_0054c802:; BB(0x0054c802);
    /* 0054c802: jmp 0x54c7a5 */ goto L_0054c7a5;
L_0054c806:; BB(0x0054c806);
    /* 0054c806: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0054c808: jmp 0x54c80e */ goto L_0054c80e;
L_0054c80c:; BB(0x0054c80c);
    /* 0054c80c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0054c80e:; BB(0x0054c80e);
    /* 0054c80e: mov esp, ebp */ r_esp = r_ebp;
    /* 0054c810: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054c811: ret  */ FN_RET(0x0054c780); r_esp += 4; return;
}

void f_0054c820(void) /* sub_54C820 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054c820);
    /* 0054c820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054c821: mov ebp, esp */ r_ebp = r_esp;
    /* 0054c823: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c824: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0054c827: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c82a: call 0x54ce10 */ r_esp -= 4; W32(r_esp, 0x54c82fu); f_0054ce10();
    /* 0054c82f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054c831: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c834: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0054c837: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 0054c839: mov esp, ebp */ r_esp = r_ebp;
    /* 0054c83b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054c83c: ret  */ FN_RET(0x0054c820); r_esp += 4; return;
}

void f_0054c840(void) /* sub_54C840 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054c840);
    /* 0054c840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054c841: mov ebp, esp */ r_ebp = r_esp;
    /* 0054c843: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054c846: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0054c849: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054c850: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0054c857: jmp 0x54c862 */ goto L_0054c862;
L_0054c859:; BB(0x0054c859);
    /* 0054c859: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c85c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054c85f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054c862:; BB(0x0054c862);
    /* 0054c862: cmp dword ptr [ebp - 4], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054c866: jge 0x54c884 */ if ((fS==fO)) goto L_0054c884;
L_0054c868:; BB(0x0054c868);
    /* 0054c868: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c86b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c86c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054c86f: call 0x54cf20 */ r_esp -= 4; W32(r_esp, 0x54c874u); f_0054cf20();
    /* 0054c874: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c877: jne 0x54c882 */ if (!fZ) goto L_0054c882;
L_0054c879:; BB(0x0054c879);
    /* 0054c879: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054c87c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054c87f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0054c882:; BB(0x0054c882);
    /* 0054c882: jmp 0x54c859 */ goto L_0054c859;
L_0054c884:; BB(0x0054c884);
    /* 0054c884: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054c886: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c88a: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0054c88d: mov esp, ebp */ r_esp = r_ebp;
    /* 0054c88f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054c890: ret  */ FN_RET(0x0054c840); r_esp += 4; return;
}

void f_0054c8a0(void) /* sub_54C8A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054c8a0);
    /* 0054c8a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054c8a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054c8a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054c8a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0054c8a9: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0054c8b0: jmp 0x54c8bb */ goto L_0054c8bb;
L_0054c8b2:; BB(0x0054c8b2);
    /* 0054c8b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c8b5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054c8b8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054c8bb:; BB(0x0054c8bb);
    /* 0054c8bb: cmp dword ptr [ebp - 4], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054c8bf: jge 0x54c8d9 */ if ((fS==fO)) goto L_0054c8d9;
L_0054c8c1:; BB(0x0054c8c1);
    /* 0054c8c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c8c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c8c5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054c8c8: call 0x54cf20 */ r_esp -= 4; W32(r_esp, 0x54c8cdu); f_0054cf20();
    /* 0054c8cd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c8d0: jne 0x54c8d7 */ if (!fZ) goto L_0054c8d7;
L_0054c8d2:; BB(0x0054c8d2);
    /* 0054c8d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c8d5: jmp 0x54c8db */ goto L_0054c8db;
L_0054c8d7:; BB(0x0054c8d7);
    /* 0054c8d7: jmp 0x54c8b2 */ goto L_0054c8b2;
L_0054c8d9:; BB(0x0054c8d9);
    /* 0054c8d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0054c8db:; BB(0x0054c8db);
    /* 0054c8db: mov esp, ebp */ r_esp = r_ebp;
    /* 0054c8dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054c8de: ret  */ FN_RET(0x0054c8a0); r_esp += 4; return;
}

void f_0054c8e0(void) /* sub_54C8E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054c8e0);
    /* 0054c8e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054c8e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054c8e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054c8e6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0054c8e9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054c8f0: jmp 0x54c8fb */ goto L_0054c8fb;
L_0054c8f2:; BB(0x0054c8f2);
    /* 0054c8f2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c8f5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054c8f8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054c8fb:; BB(0x0054c8fb);
    /* 0054c8fb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054c8fe: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54c903u); f_0054c540();
    /* 0054c903: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054c906: jge 0x54c95b */ if ((fS==fO)) goto L_0054c95b;
L_0054c908:; BB(0x0054c908);
    /* 0054c908: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c90b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054c90e: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054c913: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054c914: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054c917: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54c91cu); f_0054c590();
    /* 0054c91c: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c91f: je 0x54c959 */ if (fZ) goto L_0054c959;
L_0054c921:; BB(0x0054c921);
    /* 0054c921: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c924: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054c927: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054c92c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054c92d: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54c932u); f_00641280();
    /* 0054c932: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054c935: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054c936: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054c939: call 0x54cf20 */ r_esp -= 4; W32(r_esp, 0x54c93eu); f_0054cf20();
    /* 0054c93e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c941: jne 0x54c959 */ if (!fZ) goto L_0054c959;
L_0054c943:; BB(0x0054c943);
    /* 0054c943: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c946: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054c949: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054c94e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054c94f: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54c954u); f_00641280();
    /* 0054c954: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054c957: jmp 0x54c95d */ goto L_0054c95d;
L_0054c959:; BB(0x0054c959);
    /* 0054c959: jmp 0x54c8f2 */ goto L_0054c8f2;
L_0054c95b:; BB(0x0054c95b);
    /* 0054c95b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0054c95d:; BB(0x0054c95d);
    /* 0054c95d: mov esp, ebp */ r_esp = r_ebp;
    /* 0054c95f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054c960: ret  */ FN_RET(0x0054c8e0); r_esp += 4; return;
}

void f_0054c970(void) /* sub_54C970 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054c970);
    /* 0054c970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054c971: mov ebp, esp */ r_ebp = r_esp;
    /* 0054c973: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c974: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0054c977: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054c979: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c97c: call 0x54cf20 */ r_esp -= 4; W32(r_esp, 0x54c981u); f_0054cf20();
    /* 0054c981: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054c983: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c986: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0054c989: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 0054c98b: mov esp, ebp */ r_esp = r_ebp;
    /* 0054c98d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054c98e: ret  */ FN_RET(0x0054c970); r_esp += 4; return;
}

void f_0054c990(void) /* sub_54C990 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054c990);
    /* 0054c990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054c991: mov ebp, esp */ r_ebp = r_esp;
    /* 0054c993: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054c996: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0054c999: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054c99c: call 0x54caa0 */ r_esp -= 4; W32(r_esp, 0x54c9a1u); f_0054caa0();
    /* 0054c9a1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054c9a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c9a6: je 0x54ca05 */ if (fZ) goto L_0054ca05;
L_0054c9a8:; BB(0x0054c9a8);
    /* 0054c9a8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054c9af: jmp 0x54c9ba */ goto L_0054c9ba;
L_0054c9b1:; BB(0x0054c9b1);
    /* 0054c9b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c9b4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054c9b7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0054c9ba:; BB(0x0054c9ba);
    /* 0054c9ba: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054c9bd: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54c9c2u); f_0054c540();
    /* 0054c9c2: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054c9c5: jge 0x54ca05 */ if ((fS==fO)) goto L_0054ca05;
L_0054c9c7:; BB(0x0054c9c7);
    /* 0054c9c7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c9ca: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054c9cd: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0054c9d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c9d3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054c9d6: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54c9dbu); f_0054c590();
    /* 0054c9db: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054c9de: jne 0x54c9e2 */ if (!fZ) goto L_0054c9e2;
L_0054c9e0:; BB(0x0054c9e0);
    /* 0054c9e0: jmp 0x54c9b1 */ goto L_0054c9b1;
L_0054c9e2:; BB(0x0054c9e2);
    /* 0054c9e2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054c9e5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054c9e8: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0054c9ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054c9ee: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54c9f3u); f_00641280();
    /* 0054c9f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054c9f6: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054c9f9: jl 0x54c9ff */ if ((fS!=fO)) goto L_0054c9ff;
L_0054c9fb:; BB(0x0054c9fb);
    /* 0054c9fb: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0054c9fd: jmp 0x54ca07 */ goto L_0054ca07;
L_0054c9ff:; BB(0x0054c9ff);
    /* 0054c9ff: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0054ca01: jmp 0x54ca07 */ goto L_0054ca07;
L_0054ca05:; BB(0x0054ca05);
    /* 0054ca05: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0054ca07:; BB(0x0054ca07);
    /* 0054ca07: mov esp, ebp */ r_esp = r_ebp;
    /* 0054ca09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054ca0a: ret  */ FN_RET(0x0054c990); r_esp += 4; return;
}

void f_0054ca10(void) /* sub_54CA10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054ca10);
    /* 0054ca10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054ca11: mov ebp, esp */ r_ebp = r_esp;
    /* 0054ca13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ca14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0054ca17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054ca1a: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54ca1fu); f_0054cec0();
    /* 0054ca1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ca21: jne 0x54ca27 */ if (!fZ) goto L_0054ca27;
L_0054ca23:; BB(0x0054ca23);
    /* 0054ca23: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0054ca25: jmp 0x54ca97 */ goto L_0054ca97;
L_0054ca27:; BB(0x0054ca27);
    /* 0054ca27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054ca2a: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54ca2fu); f_0054cec0();
    /* 0054ca2f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054ca32: jl 0x54ca38 */ if ((fS!=fO)) goto L_0054ca38;
L_0054ca34:; BB(0x0054ca34);
    /* 0054ca34: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0054ca36: jmp 0x54ca97 */ goto L_0054ca97;
L_0054ca38:; BB(0x0054ca38);
    /* 0054ca38: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054ca3b: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54ca40u); f_0054cec0();
    /* 0054ca40: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ca43: jne 0x54ca55 */ if (!fZ) goto L_0054ca55;
L_0054ca45:; BB(0x0054ca45);
    /* 0054ca45: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054ca48: call 0x54c8e0 */ r_esp -= 4; W32(r_esp, 0x54ca4du); f_0054c8e0();
    /* 0054ca4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ca4f: je 0x54ca55 */ if (fZ) goto L_0054ca55;
L_0054ca51:; BB(0x0054ca51);
    /* 0054ca51: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0054ca53: jmp 0x54ca97 */ goto L_0054ca97;
L_0054ca55:; BB(0x0054ca55);
    /* 0054ca55: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054ca58: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54ca5du); f_0054cec0();
    /* 0054ca5d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ca60: jne 0x54ca75 */ if (!fZ) goto L_0054ca75;
L_0054ca62:; BB(0x0054ca62);
    /* 0054ca62: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054ca65: call 0x54c820 */ r_esp -= 4; W32(r_esp, 0x54ca6au); f_0054c820();
    /* 0054ca6a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054ca6d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ca6f: je 0x54ca75 */ if (fZ) goto L_0054ca75;
L_0054ca71:; BB(0x0054ca71);
    /* 0054ca71: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0054ca73: jmp 0x54ca97 */ goto L_0054ca97;
L_0054ca75:; BB(0x0054ca75);
    /* 0054ca75: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054ca78: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54ca7du); f_0054cec0();
    /* 0054ca7d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ca80: jne 0x54ca95 */ if (!fZ) goto L_0054ca95;
L_0054ca82:; BB(0x0054ca82);
    /* 0054ca82: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054ca85: call 0x54c6b0 */ r_esp -= 4; W32(r_esp, 0x54ca8au); f_0054c6b0();
    /* 0054ca8a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054ca8d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ca8f: je 0x54ca95 */ if (fZ) goto L_0054ca95;
L_0054ca91:; BB(0x0054ca91);
    /* 0054ca91: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0054ca93: jmp 0x54ca97 */ goto L_0054ca97;
L_0054ca95:; BB(0x0054ca95);
    /* 0054ca95: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0054ca97:; BB(0x0054ca97);
    /* 0054ca97: mov esp, ebp */ r_esp = r_ebp;
    /* 0054ca99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054ca9a: ret  */ FN_RET(0x0054ca10); r_esp += 4; return;
}

void f_0054caa0(void) /* sub_54CAA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054caa0);
    /* 0054caa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054caa1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054caa3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054caa6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0054caa9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054caac: call 0x54cbf0 */ r_esp -= 4; W32(r_esp, 0x54cab1u); f_0054cbf0();
    /* 0054cab1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054cab4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cab6: je 0x54cad0 */ if (fZ) goto L_0054cad0;
L_0054cab8:; BB(0x0054cab8);
    /* 0054cab8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054cabb: call 0x54ccb0 */ r_esp -= 4; W32(r_esp, 0x54cac0u); f_0054ccb0();
    /* 0054cac0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054cac3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cac5: je 0x54cad0 */ if (fZ) goto L_0054cad0;
L_0054cac7:; BB(0x0054cac7);
    /* 0054cac7: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0054cace: jmp 0x54cad7 */ goto L_0054cad7;
L_0054cad0:; BB(0x0054cad0);
    /* 0054cad0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0054cad7:; BB(0x0054cad7);
    /* 0054cad7: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0054cada: mov esp, ebp */ r_esp = r_ebp;
    /* 0054cadc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054cadd: ret  */ FN_RET(0x0054caa0); r_esp += 4; return;
}

void f_0054cae0(void) /* sub_54CAE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054cae0);
    /* 0054cae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054cae1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054cae3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054cae6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0054cae9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054caec: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54caf1u); f_0054cec0();
    /* 0054caf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054caf3: jne 0x54cafc */ if (!fZ) goto L_0054cafc;
L_0054caf5:; BB(0x0054caf5);
    /* 0054caf5: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0054caf7: jmp 0x54cba3 */ goto L_0054cba3;
L_0054cafc:; BB(0x0054cafc);
    /* 0054cafc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054caff: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54cb04u); f_0054cec0();
    /* 0054cb04: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054cb07: jl 0x54cb10 */ if ((fS!=fO)) goto L_0054cb10;
L_0054cb09:; BB(0x0054cb09);
    /* 0054cb09: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0054cb0b: jmp 0x54cba3 */ goto L_0054cba3;
L_0054cb10:; BB(0x0054cb10);
    /* 0054cb10: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054cb13: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54cb18u); f_0054cec0();
    /* 0054cb18: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cb1b: jne 0x54cb81 */ if (!fZ) goto L_0054cb81;
L_0054cb1d:; BB(0x0054cb1d);
    /* 0054cb1d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054cb24: jmp 0x54cb2f */ goto L_0054cb2f;
L_0054cb26:; BB(0x0054cb26);
    /* 0054cb26: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054cb29: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054cb2c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054cb2f:; BB(0x0054cb2f);
    /* 0054cb2f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054cb32: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54cb37u); f_0054c540();
    /* 0054cb37: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054cb3a: jge 0x54cb7d */ if ((fS==fO)) goto L_0054cb7d;
L_0054cb3c:; BB(0x0054cb3c);
    /* 0054cb3c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054cb3f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054cb42: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054cb47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054cb48: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054cb4b: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54cb50u); f_0054c590();
    /* 0054cb50: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cb53: je 0x54cb7b */ if (fZ) goto L_0054cb7b;
L_0054cb55:; BB(0x0054cb55);
    /* 0054cb55: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054cb58: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054cb5b: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054cb60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054cb61: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54cb66u); f_00641280();
    /* 0054cb66: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054cb69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054cb6a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054cb6d: call 0x54cf20 */ r_esp -= 4; W32(r_esp, 0x54cb72u); f_0054cf20();
    /* 0054cb72: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cb75: jne 0x54cb7b */ if (!fZ) goto L_0054cb7b;
L_0054cb77:; BB(0x0054cb77);
    /* 0054cb77: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0054cb79: jmp 0x54cba3 */ goto L_0054cba3;
L_0054cb7b:; BB(0x0054cb7b);
    /* 0054cb7b: jmp 0x54cb26 */ goto L_0054cb26;
L_0054cb7d:; BB(0x0054cb7d);
    /* 0054cb7d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0054cb7f: jmp 0x54cba3 */ goto L_0054cba3;
L_0054cb81:; BB(0x0054cb81);
    /* 0054cb81: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054cb84: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54cb89u); f_0054cec0();
    /* 0054cb89: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cb8c: jne 0x54cba1 */ if (!fZ) goto L_0054cba1;
L_0054cb8e:; BB(0x0054cb8e);
    /* 0054cb8e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054cb91: call 0x54c820 */ r_esp -= 4; W32(r_esp, 0x54cb96u); f_0054c820();
    /* 0054cb96: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054cb99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cb9b: je 0x54cba1 */ if (fZ) goto L_0054cba1;
L_0054cb9d:; BB(0x0054cb9d);
    /* 0054cb9d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0054cb9f: jmp 0x54cba3 */ goto L_0054cba3;
L_0054cba1:; BB(0x0054cba1);
    /* 0054cba1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0054cba3:; BB(0x0054cba3);
    /* 0054cba3: mov esp, ebp */ r_esp = r_ebp;
    /* 0054cba5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054cba6: ret  */ FN_RET(0x0054cae0); r_esp += 4; return;
}

void f_0054cbb0(void) /* sub_54CBB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054cbb0);
    /* 0054cbb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054cbb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054cbb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054cbb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0054cbb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054cbba: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54cbbfu); f_0054cec0();
    /* 0054cbbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cbc1: jne 0x54cbc7 */ if (!fZ) goto L_0054cbc7;
L_0054cbc3:; BB(0x0054cbc3);
    /* 0054cbc3: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0054cbc5: jmp 0x54cbe9 */ goto L_0054cbe9;
L_0054cbc7:; BB(0x0054cbc7);
    /* 0054cbc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054cbca: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54cbcfu); f_0054cec0();
    /* 0054cbcf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cbd2: jne 0x54cbe7 */ if (!fZ) goto L_0054cbe7;
L_0054cbd4:; BB(0x0054cbd4);
    /* 0054cbd4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054cbd7: call 0x54c840 */ r_esp -= 4; W32(r_esp, 0x54cbdcu); f_0054c840();
    /* 0054cbdc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054cbdf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cbe1: je 0x54cbe7 */ if (fZ) goto L_0054cbe7;
L_0054cbe3:; BB(0x0054cbe3);
    /* 0054cbe3: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0054cbe5: jmp 0x54cbe9 */ goto L_0054cbe9;
L_0054cbe7:; BB(0x0054cbe7);
    /* 0054cbe7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0054cbe9:; BB(0x0054cbe9);
    /* 0054cbe9: mov esp, ebp */ r_esp = r_ebp;
    /* 0054cbeb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054cbec: ret  */ FN_RET(0x0054cbb0); r_esp += 4; return;
}

void f_0054cbf0(void) /* sub_54CBF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054cbf0);
    /* 0054cbf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054cbf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054cbf3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054cbf6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0054cbf9: mov dword ptr [ebp - 8], 0xfffffffe */ W32((u32)(r_ebp+0xfffffff8u), 0xfffffffeu);
    /* 0054cc00: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054cc03: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54cc08u); f_0054cec0();
    /* 0054cc08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cc0a: jne 0x54cc13 */ if (!fZ) goto L_0054cc13;
L_0054cc0c:; BB(0x0054cc0c);
    /* 0054cc0c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0054cc0e: jmp 0x54cca7 */ goto L_0054cca7;
L_0054cc13:; BB(0x0054cc13);
    /* 0054cc13: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054cc1a: jmp 0x54cc25 */ goto L_0054cc25;
L_0054cc1c:; BB(0x0054cc1c);
    /* 0054cc1c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054cc1f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054cc22: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054cc25:; BB(0x0054cc25);
    /* 0054cc25: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054cc28: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54cc2du); f_0054c540();
    /* 0054cc2d: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054cc30: jge 0x54cca5 */ if ((fS==fO)) goto L_0054cca5;
L_0054cc32:; BB(0x0054cc32);
    /* 0054cc32: cmp dword ptr [ebp - 8], -2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cc36: jne 0x54cc6a */ if (!fZ) goto L_0054cc6a;
L_0054cc38:; BB(0x0054cc38);
    /* 0054cc38: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054cc3b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054cc3e: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054cc43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054cc44: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054cc47: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54cc4cu); f_0054c590();
    /* 0054cc4c: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cc4f: je 0x54cc68 */ if (fZ) goto L_0054cc68;
L_0054cc51:; BB(0x0054cc51);
    /* 0054cc51: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054cc54: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054cc57: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054cc5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054cc5d: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x54cc62u); f_00641290();
    /* 0054cc62: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054cc65: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054cc68:; BB(0x0054cc68);
    /* 0054cc68: jmp 0x54cca0 */ goto L_0054cca0;
L_0054cc6a:; BB(0x0054cc6a);
    /* 0054cc6a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054cc6d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054cc70: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054cc75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054cc76: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054cc79: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54cc7eu); f_0054c590();
    /* 0054cc7e: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cc81: je 0x54cca0 */ if (fZ) goto L_0054cca0;
L_0054cc83:; BB(0x0054cc83);
    /* 0054cc83: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054cc86: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054cc89: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054cc8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054cc8f: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x54cc94u); f_00641290();
    /* 0054cc94: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054cc97: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cc9a: je 0x54cca0 */ if (fZ) goto L_0054cca0;
L_0054cc9c:; BB(0x0054cc9c);
    /* 0054cc9c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0054cc9e: jmp 0x54cca7 */ goto L_0054cca7;
L_0054cca0:; BB(0x0054cca0);
    /* 0054cca0: jmp 0x54cc1c */ goto L_0054cc1c;
L_0054cca5:; BB(0x0054cca5);
    /* 0054cca5: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0054cca7:; BB(0x0054cca7);
    /* 0054cca7: mov esp, ebp */ r_esp = r_ebp;
    /* 0054cca9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054ccaa: ret  */ FN_RET(0x0054cbf0); r_esp += 4; return;
}

void f_0054ccb0(void) /* sub_54CCB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054ccb0);
    /* 0054ccb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054ccb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054ccb3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054ccb6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0054ccb9: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0054ccc0: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0054ccc7: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0054ccce: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0054ccd5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054ccd8: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54ccddu); f_0054cec0();
    /* 0054ccdd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0054cce0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054cce7: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cceb: jne 0x54ccf4 */ if (!fZ) goto L_0054ccf4;
L_0054cced:; BB(0x0054cced);
    /* 0054cced: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0054ccef: jmp 0x54cdb2 */ goto L_0054cdb2;
L_0054ccf4:; BB(0x0054ccf4);
    /* 0054ccf4: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054ccf8: jl 0x54cd01 */ if ((fS!=fO)) goto L_0054cd01;
L_0054ccfa:; BB(0x0054ccfa);
    /* 0054ccfa: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0054ccfc: jmp 0x54cdb2 */ goto L_0054cdb2;
L_0054cd01:; BB(0x0054cd01);
    /* 0054cd01: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054cd08: jmp 0x54cd13 */ goto L_0054cd13;
L_0054cd0a:; BB(0x0054cd0a);
    /* 0054cd0a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054cd0d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054cd10: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054cd13:; BB(0x0054cd13);
    /* 0054cd13: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054cd16: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54cd1bu); f_0054c540();
    /* 0054cd1b: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054cd1e: jge 0x54cd85 */ if ((fS==fO)) goto L_0054cd85;
L_0054cd20:; BB(0x0054cd20);
    /* 0054cd20: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054cd23: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054cd26: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054cd2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054cd2c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054cd2f: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54cd34u); f_0054c590();
    /* 0054cd34: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cd37: je 0x54cd83 */ if (fZ) goto L_0054cd83;
L_0054cd39:; BB(0x0054cd39);
    /* 0054cd39: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054cd3c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054cd3f: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054cd44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054cd45: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54cd4au); f_00641280();
    /* 0054cd4a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054cd4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054cd4e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054cd51: call 0x54cf20 */ r_esp -= 4; W32(r_esp, 0x54cd56u); f_0054cf20();
    /* 0054cd56: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054cd59: jle 0x54cd5f */ if ((fZ||fS!=fO)) goto L_0054cd5f;
L_0054cd5b:; BB(0x0054cd5b);
    /* 0054cd5b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0054cd5d: jmp 0x54cdb2 */ goto L_0054cdb2;
L_0054cd5f:; BB(0x0054cd5f);
    /* 0054cd5f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054cd62: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054cd65: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054cd6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054cd6b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054cd6e: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54cd73u); f_0054c590();
    /* 0054cd73: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054cd76: mov dword ptr [ebp + ecx*4 - 0x1c], eax */ W32((u32)(r_ebp+r_ecx*4+0xffffffe4u), r_eax);
    /* 0054cd7a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054cd7d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054cd80: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0054cd83:; BB(0x0054cd83);
    /* 0054cd83: jmp 0x54cd0a */ goto L_0054cd0a;
L_0054cd85:; BB(0x0054cd85);
    /* 0054cd85: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054cd88: cmp dword ptr [ebp + eax*4 - 0x20], 0xe */ {  u32 a = R32((u32)(r_ebp+r_eax*4+0xffffffe0u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cd8d: jne 0x54cd9d */ if (!fZ) goto L_0054cd9d;
L_0054cd8f:; BB(0x0054cd8f);
    /* 0054cd8f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054cd92: cmp dword ptr [ebp + ecx*4 - 0x24], 5 */ {  u32 a = R32((u32)(r_ebp+r_ecx*4+0xffffffdcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054cd97: jg 0x54cd9d */ if ((!fZ&&fS==fO)) goto L_0054cd9d;
L_0054cd99:; BB(0x0054cd99);
    /* 0054cd99: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0054cd9b: jmp 0x54cdb2 */ goto L_0054cdb2;
L_0054cd9d:; BB(0x0054cd9d);
    /* 0054cd9d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054cda0: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054cda3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054cda6: cmp edx, dword ptr [ebp + eax*4 - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_eax*4+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054cdaa: jl 0x54cdb0 */ if ((fS!=fO)) goto L_0054cdb0;
L_0054cdac:; BB(0x0054cdac);
    /* 0054cdac: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0054cdae: jmp 0x54cdb2 */ goto L_0054cdb2;
L_0054cdb0:; BB(0x0054cdb0);
    /* 0054cdb0: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0054cdb2:; BB(0x0054cdb2);
    /* 0054cdb2: mov esp, ebp */ r_esp = r_ebp;
    /* 0054cdb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054cdb5: ret  */ FN_RET(0x0054ccb0); r_esp += 4; return;
}

void f_0054cdc0(void) /* sub_54CDC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054cdc0);
    /* 0054cdc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054cdc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054cdc3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054cdc6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0054cdc9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054cdcc: call 0x54cec0 */ r_esp -= 4; W32(r_esp, 0x54cdd1u); f_0054cec0();
    /* 0054cdd1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0054cdd4: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cdd8: jne 0x54cdde */ if (!fZ) goto L_0054cdde;
L_0054cdda:; BB(0x0054cdda);
    /* 0054cdda: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0054cddc: jmp 0x54ce00 */ goto L_0054ce00;
L_0054cdde:; BB(0x0054cdde);
    /* 0054cdde: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054cde1: call 0x54c8a0 */ r_esp -= 4; W32(r_esp, 0x54cde6u); f_0054c8a0();
    /* 0054cde6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cde8: je 0x54cdf4 */ if (fZ) goto L_0054cdf4;
L_0054cdea:; BB(0x0054cdea);
    /* 0054cdea: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cdee: jne 0x54cdf4 */ if (!fZ) goto L_0054cdf4;
L_0054cdf0:; BB(0x0054cdf0);
    /* 0054cdf0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0054cdf2: jmp 0x54ce00 */ goto L_0054ce00;
L_0054cdf4:; BB(0x0054cdf4);
    /* 0054cdf4: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cdf8: jne 0x54cdfe */ if (!fZ) goto L_0054cdfe;
L_0054cdfa:; BB(0x0054cdfa);
    /* 0054cdfa: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0054cdfc: jmp 0x54ce00 */ goto L_0054ce00;
L_0054cdfe:; BB(0x0054cdfe);
    /* 0054cdfe: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0054ce00:; BB(0x0054ce00);
    /* 0054ce00: mov esp, ebp */ r_esp = r_ebp;
    /* 0054ce02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054ce03: ret  */ FN_RET(0x0054cdc0); r_esp += 4; return;
}

void f_0054ce10(void) /* sub_54CE10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054ce10);
    /* 0054ce10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054ce11: mov ebp, esp */ r_ebp = r_esp;
    /* 0054ce13: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054ce16: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0054ce19: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0054ce20: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0054ce27: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054ce2a: mov cx, word ptr [eax + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x4u))) & 0xffffu);
    /* 0054ce2e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ce2f: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54ce34u); f_00641280();
    /* 0054ce34: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ce37: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0054ce3a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0054ce41: jmp 0x54ce4c */ goto L_0054ce4c;
L_0054ce43:; BB(0x0054ce43);
    /* 0054ce43: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054ce46: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054ce49: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0054ce4c:; BB(0x0054ce4c);
    /* 0054ce4c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054ce4f: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54ce54u); f_0054c540();
    /* 0054ce54: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054ce57: jge 0x54ceab */ if ((fS==fO)) goto L_0054ceab;
L_0054ce59:; BB(0x0054ce59);
    /* 0054ce59: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054ce5c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054ce5f: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0054ce64: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ce65: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54ce6au); f_00641280();
    /* 0054ce6a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ce6d: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ce70: jne 0x54ce7d */ if (!fZ) goto L_0054ce7d;
L_0054ce72:; BB(0x0054ce72);
    /* 0054ce72: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054ce75: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054ce78: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0054ce7b: jmp 0x54cea9 */ goto L_0054cea9;
L_0054ce7d:; BB(0x0054ce7d);
    /* 0054ce7d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054ce80: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054ce83: jle 0x54ce8b */ if ((fZ||fS!=fO)) goto L_0054ce8b;
L_0054ce85:; BB(0x0054ce85);
    /* 0054ce85: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054ce88: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0054ce8b:; BB(0x0054ce8b);
    /* 0054ce8b: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0054ce92: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054ce95: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054ce98: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0054ce9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ce9e: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54cea3u); f_00641280();
    /* 0054cea3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054cea6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0054cea9:; BB(0x0054cea9);
    /* 0054cea9: jmp 0x54ce43 */ goto L_0054ce43;
L_0054ceab:; BB(0x0054ceab);
    /* 0054ceab: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054ceae: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054ceb1: jle 0x54ceb9 */ if ((fZ||fS!=fO)) goto L_0054ceb9;
L_0054ceb3:; BB(0x0054ceb3);
    /* 0054ceb3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054ceb6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0054ceb9:; BB(0x0054ceb9);
    /* 0054ceb9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054cebc: mov esp, ebp */ r_esp = r_ebp;
    /* 0054cebe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054cebf: ret  */ FN_RET(0x0054ce10); r_esp += 4; return;
}

void f_0054cec0(void) /* sub_54CEC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054cec0);
    /* 0054cec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054cec1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054cec3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054cec6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0054cec9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054ced0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054ced7: jmp 0x54cee2 */ goto L_0054cee2;
L_0054ced9:; BB(0x0054ced9);
    /* 0054ced9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054cedc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054cedf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054cee2:; BB(0x0054cee2);
    /* 0054cee2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054cee5: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54ceeau); f_0054c540();
    /* 0054ceea: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054ceed: jge 0x54cf13 */ if ((fS==fO)) goto L_0054cf13;
L_0054ceef:; BB(0x0054ceef);
    /* 0054ceef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054cef2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054cef5: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054cefa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054cefb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054cefe: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x54cf03u); f_0054c590();
    /* 0054cf03: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cf06: jne 0x54cf11 */ if (!fZ) goto L_0054cf11;
L_0054cf08:; BB(0x0054cf08);
    /* 0054cf08: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054cf0b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054cf0e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0054cf11:; BB(0x0054cf11);
    /* 0054cf11: jmp 0x54ced9 */ goto L_0054ced9;
L_0054cf13:; BB(0x0054cf13);
    /* 0054cf13: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054cf16: mov esp, ebp */ r_esp = r_ebp;
    /* 0054cf18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054cf19: ret  */ FN_RET(0x0054cec0); r_esp += 4; return;
}

void f_0054cf20(void) /* sub_54CF20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054cf20);
    /* 0054cf20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054cf21: mov ebp, esp */ r_ebp = r_esp;
    /* 0054cf23: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054cf26: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0054cf29: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054cf30: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054cf37: jmp 0x54cf42 */ goto L_0054cf42;
L_0054cf39:; BB(0x0054cf39);
    /* 0054cf39: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054cf3c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054cf3f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0054cf42:; BB(0x0054cf42);
    /* 0054cf42: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054cf45: call 0x54c540 */ r_esp -= 4; W32(r_esp, 0x54cf4au); f_0054c540();
    /* 0054cf4a: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054cf4d: jge 0x54cf73 */ if ((fS==fO)) goto L_0054cf73;
L_0054cf4f:; BB(0x0054cf4f);
    /* 0054cf4f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054cf52: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054cf55: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0054cf5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054cf5b: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54cf60u); f_00641280();
    /* 0054cf60: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054cf63: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cf66: jne 0x54cf71 */ if (!fZ) goto L_0054cf71;
L_0054cf68:; BB(0x0054cf68);
    /* 0054cf68: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054cf6b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054cf6e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0054cf71:; BB(0x0054cf71);
    /* 0054cf71: jmp 0x54cf39 */ goto L_0054cf39;
L_0054cf73:; BB(0x0054cf73);
    /* 0054cf73: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054cf76: mov esp, ebp */ r_esp = r_ebp;
    /* 0054cf78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054cf79: ret 4 */ FN_RET(0x0054cf20); r_esp += 8; return;
}

void f_0054cf80(void) /* sub_54CF80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054cf80);
    /* 0054cf80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054cf81: mov ebp, esp */ r_ebp = r_esp;
    /* 0054cf83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054cf84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0054cf87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054cf8a: call 0x54c620 */ r_esp -= 4; W32(r_esp, 0x54cf8fu); f_0054c620();
    /* 0054cf8f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054cf92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cf94: je 0x54cf9d */ if (fZ) goto L_0054cf9d;
L_0054cf96:; BB(0x0054cf96);
    /* 0054cf96: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054cf98: jmp 0x54d03d */ goto L_0054d03d;
L_0054cf9d:; BB(0x0054cf9d);
    /* 0054cf9d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054cfa0: call 0x54c670 */ r_esp -= 4; W32(r_esp, 0x54cfa5u); f_0054c670();
    /* 0054cfa5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054cfa8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cfaa: je 0x54cfb6 */ if (fZ) goto L_0054cfb6;
L_0054cfac:; BB(0x0054cfac);
    /* 0054cfac: mov eax, 1 */ r_eax = 0x1u;
    /* 0054cfb1: jmp 0x54d03d */ goto L_0054d03d;
L_0054cfb6:; BB(0x0054cfb6);
    /* 0054cfb6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054cfb9: call 0x54c6b0 */ r_esp -= 4; W32(r_esp, 0x54cfbeu); f_0054c6b0();
    /* 0054cfbe: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054cfc1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cfc3: je 0x54cfcc */ if (fZ) goto L_0054cfcc;
L_0054cfc5:; BB(0x0054cfc5);
    /* 0054cfc5: mov eax, 2 */ r_eax = 0x2u;
    /* 0054cfca: jmp 0x54d03d */ goto L_0054d03d;
L_0054cfcc:; BB(0x0054cfcc);
    /* 0054cfcc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054cfcf: call 0x54c6d0 */ r_esp -= 4; W32(r_esp, 0x54cfd4u); f_0054c6d0();
    /* 0054cfd4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054cfd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cfd9: je 0x54cfe2 */ if (fZ) goto L_0054cfe2;
L_0054cfdb:; BB(0x0054cfdb);
    /* 0054cfdb: mov eax, 3 */ r_eax = 0x3u;
    /* 0054cfe0: jmp 0x54d03d */ goto L_0054d03d;
L_0054cfe2:; BB(0x0054cfe2);
    /* 0054cfe2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054cfe5: call 0x54c710 */ r_esp -= 4; W32(r_esp, 0x54cfeau); f_0054c710();
    /* 0054cfea: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054cfed: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054cfef: je 0x54cff8 */ if (fZ) goto L_0054cff8;
L_0054cff1:; BB(0x0054cff1);
    /* 0054cff1: mov eax, 4 */ r_eax = 0x4u;
    /* 0054cff6: jmp 0x54d03d */ goto L_0054d03d;
L_0054cff8:; BB(0x0054cff8);
    /* 0054cff8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054cffb: call 0x54c780 */ r_esp -= 4; W32(r_esp, 0x54d000u); f_0054c780();
    /* 0054d000: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054d003: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d005: je 0x54d00e */ if (fZ) goto L_0054d00e;
L_0054d007:; BB(0x0054d007);
    /* 0054d007: mov eax, 5 */ r_eax = 0x5u;
    /* 0054d00c: jmp 0x54d03d */ goto L_0054d03d;
L_0054d00e:; BB(0x0054d00e);
    /* 0054d00e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d011: call 0x54c820 */ r_esp -= 4; W32(r_esp, 0x54d016u); f_0054c820();
    /* 0054d016: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054d019: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d01b: je 0x54d024 */ if (fZ) goto L_0054d024;
L_0054d01d:; BB(0x0054d01d);
    /* 0054d01d: mov eax, 6 */ r_eax = 0x6u;
    /* 0054d022: jmp 0x54d03d */ goto L_0054d03d;
L_0054d024:; BB(0x0054d024);
    /* 0054d024: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054d027: call 0x54c840 */ r_esp -= 4; W32(r_esp, 0x54d02cu); f_0054c840();
    /* 0054d02c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054d02f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054d031: je 0x54d03a */ if (fZ) goto L_0054d03a;
L_0054d033:; BB(0x0054d033);
    /* 0054d033: mov eax, 7 */ r_eax = 0x7u;
    /* 0054d038: jmp 0x54d03d */ goto L_0054d03d;
L_0054d03a:; BB(0x0054d03a);
    /* 0054d03a: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0054d03d:; BB(0x0054d03d);
    /* 0054d03d: mov esp, ebp */ r_esp = r_ebp;
    /* 0054d03f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054d040: ret  */ FN_RET(0x0054cf80); r_esp += 4; return;
}

