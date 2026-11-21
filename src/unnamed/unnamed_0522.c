#include "protos.h"

void f_00522560(void) /* sub_522560 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00522560);
    /* 00522560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00522561: mov ebp, esp */ r_ebp = r_esp;
    /* 00522563: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00522566: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00522569: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052256c: call 0x522650 */ r_esp -= 4; W32(r_esp, 0x522571u); f_00522650();
    /* 00522571: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00522578: jmp 0x522583 */ goto L_00522583;
L_0052257a:; BB(0x0052257a);
    /* 0052257a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052257d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00522580: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00522583:; BB(0x00522583);
    /* 00522583: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00522587: jge 0x52261b */ if ((fS==fO)) goto L_0052261b;
L_0052258d:; BB(0x0052258d);
    /* 0052258d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00522590: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00522591: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00522597: call 0x528090 */ r_esp -= 4; W32(r_esp, 0x52259cu); f_00528090();
    /* 0052259c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0052259f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005225a1: je 0x522616 */ if (fZ) goto L_00522616;
L_005225a3:; BB(0x005225a3);
    /* 005225a3: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 005225a9: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5225aeu); f_005da7b0();
    /* 005225ae: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005225b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005225b3: je 0x522616 */ if (fZ) goto L_00522616;
L_005225b5:; BB(0x005225b5);
    /* 005225b5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005225b8: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005225bb: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x5225c0u); f_005f54c0();
    /* 005225c0: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005225c3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005225c5: je 0x522616 */ if (fZ) goto L_00522616;
L_005225c7:; BB(0x005225c7);
    /* 005225c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005225ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005225cb: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 005225d1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005225d3: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 005225d9: mov eax, dword ptr [edx + 0x2c4] */ r_eax = R32((u32)(r_edx+0x2c4u));
    /* 005225df: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5225e1u); call_ind(t); }
    /* 005225e1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005225e4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005225e6: jne 0x522616 */ if (!fZ) goto L_00522616;
L_005225e8:; BB(0x005225e8);
    /* 005225e8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005225eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005225ec: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 005225f2: call 0x528100 */ r_esp -= 4; W32(r_esp, 0x5225f7u); f_00528100();
    /* 005225f7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005225fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005225fc: je 0x522616 */ if (fZ) goto L_00522616;
L_005225fe:; BB(0x005225fe);
    /* 005225fe: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00522604: call 0x528a60 */ r_esp -= 4; W32(r_esp, 0x522609u); f_00528a60();
    /* 00522609: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052260c: je 0x522616 */ if (fZ) goto L_00522616;
L_0052260e:; BB(0x0052260e);
    /* 0052260e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00522611: call 0x5226b0 */ r_esp -= 4; W32(r_esp, 0x522616u); f_005226b0();
L_00522616:; BB(0x00522616);
    /* 00522616: jmp 0x52257a */ goto L_0052257a;
L_0052261b:; BB(0x0052261b);
    /* 0052261b: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00522621: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x522626u); f_005da7b0();
    /* 00522626: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00522629: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052262b: je 0x52264c */ if (fZ) goto L_0052264c;
L_0052262d:; BB(0x0052262d);
    /* 0052262d: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522634: jne 0x52264c */ if (!fZ) goto L_0052264c;
L_00522636:; BB(0x00522636);
    /* 00522636: mov edx, dword ptr [0x793370] */ r_edx = R32((u32)(0x793370u));
    /* 0052263c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052263e: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00522644: mov edx, dword ptr [eax + 0x2f0] */ r_edx = R32((u32)(r_eax+0x2f0u));
    /* 0052264a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52264cu); call_ind(t); }
L_0052264c:; BB(0x0052264c);
    /* 0052264c: mov esp, ebp */ r_esp = r_ebp;
    /* 0052264e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052264f: ret  */ FN_RET(0x00522560); r_esp += 4; return;
}

void f_00522650(void) /* sub_522650 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00522650);
    /* 00522650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00522651: mov ebp, esp */ r_ebp = r_esp;
    /* 00522653: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00522656: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00522659: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00522660: jmp 0x52266b */ goto L_0052266b;
L_00522662:; BB(0x00522662);
    /* 00522662: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00522665: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00522668: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0052266b:; BB(0x0052266b);
    /* 0052266b: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052266f: jge 0x52269e */ if ((fS==fO)) goto L_0052269e;
L_00522671:; BB(0x00522671);
    /* 00522671: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522673: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522675: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00522678: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00522679: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052267f: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x522684u); f_00639110();
    /* 00522684: mov ecx, eax */ r_ecx = r_eax;
    /* 00522686: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x52268bu); f_006464d0();
    /* 0052268b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052268d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00522690: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522691: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00522697: call 0x5d9180 */ r_esp -= 4; W32(r_esp, 0x52269cu); f_005d9180();
    /* 0052269c: jmp 0x522662 */ goto L_00522662;
L_0052269e:; BB(0x0052269e);
    /* 0052269e: mov esp, ebp */ r_esp = r_ebp;
    /* 005226a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005226a1: ret  */ FN_RET(0x00522650); r_esp += 4; return;
}

void f_005226b0(void) /* sub_5226B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005226b0);
    /* 005226b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005226b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005226b3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005226b6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005226b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005226bc: call 0x5228d0 */ r_esp -= 4; W32(r_esp, 0x5226c1u); f_005228d0();
    /* 005226c1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005226c8: jmp 0x5226d3 */ goto L_005226d3;
L_005226ca:; BB(0x005226ca);
    /* 005226ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005226cd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005226d0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005226d3:; BB(0x005226d3);
    /* 005226d3: cmp dword ptr [ebp - 4], 0xa1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xa1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005226da: jge 0x52273d */ if ((fS==fO)) goto L_0052273d;
L_005226dc:; BB(0x005226dc);
    /* 005226dc: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005226e3: jmp 0x5226ee */ goto L_005226ee;
L_005226e5:; BB(0x005226e5);
    /* 005226e5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005226e8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005226eb: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005226ee:; BB(0x005226ee);
    /* 005226ee: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005226f2: jge 0x52273b */ if ((fS==fO)) goto L_0052273b;
L_005226f4:; BB(0x005226f4);
    /* 005226f4: mov edx, dword ptr [0x793374] */ r_edx = R32((u32)(0x793374u));
    /* 005226fa: cmp dword ptr [edx + 0xdb8], -1 */ {  u32 a = R32((u32)(r_edx+0xdb8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522701: je 0x522727 */ if (fZ) goto L_00522727;
L_00522703:; BB(0x00522703);
    /* 00522703: mov eax, dword ptr [0x793374] */ r_eax = R32((u32)(0x793374u));
    /* 00522708: mov ecx, dword ptr [eax + 0xdb8] */ r_ecx = R32((u32)(r_eax+0xdb8u));
    /* 0052270e: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522711: jne 0x522725 */ if (!fZ) goto L_00522725;
L_00522713:; BB(0x00522713);
    /* 00522713: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522715: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00522718: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522719: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052271c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052271d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00522720: call 0x522800 */ r_esp -= 4; W32(r_esp, 0x522725u); f_00522800();
L_00522725:; BB(0x00522725);
    /* 00522725: jmp 0x522739 */ goto L_00522739;
L_00522727:; BB(0x00522727);
    /* 00522727: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522729: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052272c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052272d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00522730: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522731: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00522734: call 0x522800 */ r_esp -= 4; W32(r_esp, 0x522739u); f_00522800();
L_00522739:; BB(0x00522739);
    /* 00522739: jmp 0x5226e5 */ goto L_005226e5;
L_0052273b:; BB(0x0052273b);
    /* 0052273b: jmp 0x5226ca */ goto L_005226ca;
L_0052273d:; BB(0x0052273d);
    /* 0052273d: mov esp, ebp */ r_esp = r_ebp;
    /* 0052273f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00522740: ret  */ FN_RET(0x005226b0); r_esp += 4; return;
}

void f_00522750(void) /* sub_522750 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00522750);
    /* 00522750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00522751: mov ebp, esp */ r_ebp = r_esp;
    /* 00522753: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00522756: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00522759: push 0x30eb72 */ { u32 v = 0x30eb72u; r_esp -= 4; W32(r_esp, v); }
    /* 0052275e: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00522764: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x522769u); f_005f2ba0();
    /* 00522769: cmp dword ptr [0x793374], 0 */ {  u32 a = R32((u32)(0x793374u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522770: je 0x5227f7 */ if (fZ) goto L_005227f7;
L_00522776:; BB(0x00522776);
    /* 00522776: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 0052277c: call 0x528000 */ r_esp -= 4; W32(r_esp, 0x522781u); f_00528000();
    /* 00522781: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522783: je 0x5227f7 */ if (fZ) goto L_005227f7;
L_00522785:; BB(0x00522785);
    /* 00522785: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 0052278b: call 0x528000 */ r_esp -= 4; W32(r_esp, 0x522790u); f_00528000();
    /* 00522790: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00522793: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00522796: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x52279bu); f_0063aac0();
    /* 0052279b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0052279d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005227a0: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005227a4: je 0x5227c2 */ if (fZ) goto L_005227c2;
L_005227a6:; BB(0x005227a6);
    /* 005227a6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005227a9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5227aeu); f_0063aac0();
    /* 005227ae: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005227b0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005227b3: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005227b7: je 0x5227c2 */ if (fZ) goto L_005227c2;
L_005227b9:; BB(0x005227b9);
    /* 005227b9: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005227c0: jmp 0x5227c9 */ goto L_005227c9;
L_005227c2:; BB(0x005227c2);
    /* 005227c2: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_005227c9:; BB(0x005227c9);
    /* 005227c9: movzx edx, byte ptr [ebp - 0x14] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffecu));
    /* 005227cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005227cf: je 0x5227f7 */ if (fZ) goto L_005227f7;
L_005227d1:; BB(0x005227d1);
    /* 005227d1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005227d3: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 005227d9: call 0x528190 */ r_esp -= 4; W32(r_esp, 0x5227deu); f_00528190();
    /* 005227de: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005227e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005227e3: je 0x5227f7 */ if (fZ) goto L_005227f7;
L_005227e5:; BB(0x005227e5);
    /* 005227e5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005227e7: push 0x30eb72 */ { u32 v = 0x30eb72u; r_esp -= 4; W32(r_esp, v); }
    /* 005227ec: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005227f2: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x5227f7u); f_005f2b20();
L_005227f7:; BB(0x005227f7);
    /* 005227f7: mov esp, ebp */ r_esp = r_ebp;
    /* 005227f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005227fa: ret  */ FN_RET(0x00522750); r_esp += 4; return;
}

void f_00522800(void) /* sub_522800 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00522800);
    /* 00522800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00522801: mov ebp, esp */ r_ebp = r_esp;
    /* 00522803: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00522804: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00522807: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0052280a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052280d: cmp dword ptr [ecx + eax*4 + 0x80], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522815: je 0x522843 */ if (fZ) goto L_00522843;
L_00522817:; BB(0x00522817);
    /* 00522817: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0052281a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052281b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0052281e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052281f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00522822: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00522825: mov eax, dword ptr [edx + ecx*4 + 0x80] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x80u));
    /* 0052282c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0052282f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00522832: mov ecx, dword ptr [edx + ecx*4 + 0x80] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x80u));
    /* 00522839: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0052283b: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 00522841: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x522843u); call_ind(t); }
L_00522843:; BB(0x00522843);
    /* 00522843: mov esp, ebp */ r_esp = r_ebp;
    /* 00522845: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00522846: ret 0xc */ FN_RET(0x00522800); r_esp += 16; return;
}

void f_00522850(void) /* sub_522850 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00522850);
    /* 00522850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00522851: mov ebp, esp */ r_ebp = r_esp;
    /* 00522853: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00522854: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00522857: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0052285a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052285d: cmp dword ptr [ecx + eax*4 + 0x80], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522865: je 0x52287f */ if (fZ) goto L_0052287f;
L_00522867:; BB(0x00522867);
    /* 00522867: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522869: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0052286c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052286d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00522870: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00522873: mov ecx, dword ptr [ecx + eax*4 + 0x80] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x80u));
    /* 0052287a: call 0x5cc440 */ r_esp -= 4; W32(r_esp, 0x52287fu); f_005cc440();
L_0052287f:; BB(0x0052287f);
    /* 0052287f: mov esp, ebp */ r_esp = r_ebp;
    /* 00522881: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00522882: ret 8 */ FN_RET(0x00522850); r_esp += 12; return;
}

void f_00522890(void) /* sub_522890 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00522890);
    /* 00522890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00522891: mov ebp, esp */ r_ebp = r_esp;
    /* 00522893: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00522896: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00522899: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005228a0: jmp 0x5228ab */ goto L_005228ab;
L_005228a2:; BB(0x005228a2);
    /* 005228a2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005228a5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005228a8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005228ab:; BB(0x005228ab);
    /* 005228ab: cmp dword ptr [ebp - 4], 0xa1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xa1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005228b2: jge 0x5228c6 */ if ((fS==fO)) goto L_005228c6;
L_005228b4:; BB(0x005228b4);
    /* 005228b4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005228b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005228b8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005228bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005228bc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005228bf: call 0x522850 */ r_esp -= 4; W32(r_esp, 0x5228c4u); f_00522850();
    /* 005228c4: jmp 0x5228a2 */ goto L_005228a2;
L_005228c6:; BB(0x005228c6);
    /* 005228c6: mov esp, ebp */ r_esp = r_ebp;
    /* 005228c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005228c9: ret 4 */ FN_RET(0x00522890); r_esp += 8; return;
}

void f_005228d0(void) /* sub_5228D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005228d0);
    /* 005228d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005228d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005228d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005228d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005228d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005228e0: jmp 0x5228eb */ goto L_005228eb;
L_005228e2:; BB(0x005228e2);
    /* 005228e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005228e5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005228e8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005228eb:; BB(0x005228eb);
    /* 005228eb: cmp dword ptr [ebp - 4], 0xa1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xa1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005228f2: jge 0x522908 */ if ((fS==fO)) goto L_00522908;
L_005228f4:; BB(0x005228f4);
    /* 005228f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005228f7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005228fa: mov ecx, dword ptr [edx + ecx*4 + 0x80] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x80u));
    /* 00522901: call 0x5cc3e0 */ r_esp -= 4; W32(r_esp, 0x522906u); f_005cc3e0();
    /* 00522906: jmp 0x5228e2 */ goto L_005228e2;
L_00522908:; BB(0x00522908);
    /* 00522908: mov esp, ebp */ r_esp = r_ebp;
    /* 0052290a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052290b: ret  */ FN_RET(0x005228d0); r_esp += 4; return;
}

void f_005229b0(void) /* sub_5229B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005229b0);
    /* 005229b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005229b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005229b3: sub esp, 0xac */ {  u32 a = r_esp; u32 b = 0xacu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005229b9: mov dword ptr [ebp - 0xac], ecx */ W32((u32)(r_ebp+0xffffff54u), r_ecx);
    /* 005229bf: mov dword ptr [ebp - 0x98], 0xb */ W32((u32)(r_ebp+0xffffff68u), 0xbu);
    /* 005229c9: mov dword ptr [ebp - 0x94], 7 */ W32((u32)(r_ebp+0xffffff6cu), 0x7u);
    /* 005229d3: mov dword ptr [ebp - 0x90], 0x14 */ W32((u32)(r_ebp+0xffffff70u), 0x14u);
    /* 005229dd: mov dword ptr [ebp - 0x8c], 0x20 */ W32((u32)(r_ebp+0xffffff74u), 0x20u);
    /* 005229e7: mov dword ptr [ebp - 0x88], 0x11 */ W32((u32)(r_ebp+0xffffff78u), 0x11u);
    /* 005229f1: mov dword ptr [ebp - 0x84], 5 */ W32((u32)(r_ebp+0xffffff7cu), 0x5u);
    /* 005229fb: mov dword ptr [ebp - 0x80], 0x16 */ W32((u32)(r_ebp+0xffffff80u), 0x16u);
    /* 00522a02: mov dword ptr [ebp - 0x7c], 0x22 */ W32((u32)(r_ebp+0xffffff84u), 0x22u);
    /* 00522a09: mov dword ptr [ebp - 0x78], 0xf */ W32((u32)(r_ebp+0xffffff88u), 0xfu);
    /* 00522a10: mov dword ptr [ebp - 0x74], 3 */ W32((u32)(r_ebp+0xffffff8cu), 0x3u);
    /* 00522a17: mov dword ptr [ebp - 0x70], 0x18 */ W32((u32)(r_ebp+0xffffff90u), 0x18u);
    /* 00522a1e: mov dword ptr [ebp - 0x6c], 0x24 */ W32((u32)(r_ebp+0xffffff94u), 0x24u);
    /* 00522a25: mov dword ptr [ebp - 0x68], 0xd */ W32((u32)(r_ebp+0xffffff98u), 0xdu);
    /* 00522a2c: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 00522a33: mov dword ptr [ebp - 0x60], 0x25 */ W32((u32)(r_ebp+0xffffffa0u), 0x25u);
    /* 00522a3a: mov dword ptr [ebp - 0x5c], 0x1b */ W32((u32)(r_ebp+0xffffffa4u), 0x1bu);
    /* 00522a41: mov dword ptr [ebp - 0x58], 0xa */ W32((u32)(r_ebp+0xffffffa8u), 0xau);
    /* 00522a48: mov dword ptr [ebp - 0x54], 0x19 */ W32((u32)(r_ebp+0xffffffacu), 0x19u);
    /* 00522a4f: mov dword ptr [ebp - 0x50], 0x1d */ W32((u32)(r_ebp+0xffffffb0u), 0x1du);
    /* 00522a56: mov dword ptr [ebp - 0x4c], 0xc */ W32((u32)(r_ebp+0xffffffb4u), 0xcu);
    /* 00522a5d: mov dword ptr [ebp - 0x48], 8 */ W32((u32)(r_ebp+0xffffffb8u), 0x8u);
    /* 00522a64: mov dword ptr [ebp - 0x44], 0x13 */ W32((u32)(r_ebp+0xffffffbcu), 0x13u);
    /* 00522a6b: mov dword ptr [ebp - 0x40], 0x1f */ W32((u32)(r_ebp+0xffffffc0u), 0x1fu);
    /* 00522a72: mov dword ptr [ebp - 0x3c], 0x12 */ W32((u32)(r_ebp+0xffffffc4u), 0x12u);
    /* 00522a79: mov dword ptr [ebp - 0x38], 6 */ W32((u32)(r_ebp+0xffffffc8u), 0x6u);
    /* 00522a80: mov dword ptr [ebp - 0x34], 0x15 */ W32((u32)(r_ebp+0xffffffccu), 0x15u);
    /* 00522a87: mov dword ptr [ebp - 0x30], 0x21 */ W32((u32)(r_ebp+0xffffffd0u), 0x21u);
    /* 00522a8e: mov dword ptr [ebp - 0x2c], 0x10 */ W32((u32)(r_ebp+0xffffffd4u), 0x10u);
    /* 00522a95: mov dword ptr [ebp - 0x28], 4 */ W32((u32)(r_ebp+0xffffffd8u), 0x4u);
    /* 00522a9c: mov dword ptr [ebp - 0x24], 0x17 */ W32((u32)(r_ebp+0xffffffdcu), 0x17u);
    /* 00522aa3: mov dword ptr [ebp - 0x20], 0x23 */ W32((u32)(r_ebp+0xffffffe0u), 0x23u);
    /* 00522aaa: mov dword ptr [ebp - 0x1c], 0xe */ W32((u32)(r_ebp+0xffffffe4u), 0xeu);
    /* 00522ab1: mov dword ptr [ebp - 0x18], 2 */ W32((u32)(r_ebp+0xffffffe8u), 0x2u);
    /* 00522ab8: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00522abf: mov dword ptr [ebp - 0x10], 0x1c */ W32((u32)(r_ebp+0xfffffff0u), 0x1cu);
    /* 00522ac6: mov dword ptr [ebp - 0xc], 9 */ W32((u32)(r_ebp+0xfffffff4u), 0x9u);
    /* 00522acd: mov dword ptr [ebp - 8], 0x1a */ W32((u32)(r_ebp+0xfffffff8u), 0x1au);
    /* 00522ad4: mov dword ptr [ebp - 4], 0x1e */ W32((u32)(r_ebp+0xfffffffcu), 0x1eu);
    /* 00522adb: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 00522ae1: mov eax, dword ptr [eax + 0x314] */ r_eax = R32((u32)(r_eax+0x314u));
    /* 00522ae7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00522ae8: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00522aed: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00522aed, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00522aed, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00522aef: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 00522af5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00522af7: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 00522afd: mov eax, dword ptr [edx + 0x318] */ r_eax = R32((u32)(r_edx+0x318u));
    /* 00522b03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522b04: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00522b0a: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00522b0d: call 0x609870 */ r_esp -= 4; W32(r_esp, 0x522b12u); f_00609870();
    /* 00522b12: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 00522b18: mov eax, dword ptr [ebp + edx*4 - 0x98] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffff68u));
    /* 00522b1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522b20: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00522b26: call 0x528b60 */ r_esp -= 4; W32(r_esp, 0x522b2bu); f_00528b60();
    /* 00522b2b: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00522b31: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00522b34: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x522b39u); f_005f54a0();
    /* 00522b39: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00522b3c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522b3e: jne 0x522b65 */ if (!fZ) goto L_00522b65;
L_00522b40:; BB(0x00522b40);
    /* 00522b40: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00522b46: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x522b4bu); f_00637630();
    /* 00522b4b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00522b4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522b50: je 0x522c37 */ if (fZ) goto L_00522c37;
L_00522b56:; BB(0x00522b56);
    /* 00522b56: movzx ecx, byte ptr [0x795f94] */ r_ecx = (u32)R8((u32)(0x795f94u));
    /* 00522b5d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522b5f: jne 0x522c37 */ if (!fZ) goto L_00522c37;
L_00522b65:; BB(0x00522b65);
    /* 00522b65: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
    /* 00522b6f: jmp 0x522b80 */ goto L_00522b80;
L_00522b71:; BB(0x00522b71);
    /* 00522b71: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00522b77: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00522b7a: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
L_00522b80:; BB(0x00522b80);
    /* 00522b80: cmp dword ptr [ebp - 0x9c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffff64u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00522b87: jge 0x522be1 */ if ((fS==fO)) goto L_00522be1;
L_00522b89:; BB(0x00522b89);
    /* 00522b89: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00522b8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522b90: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x522b95u); f_005dcb00();
    /* 00522b95: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00522b98: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 00522b9e: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 00522ba4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x522ba9u); f_0063aac0();
    /* 00522ba9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00522bab: mov dword ptr [ebp - 0xa4], ecx */ W32((u32)(r_ebp+0xffffff5cu), r_ecx);
    /* 00522bb1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00522bb3: cmp dword ptr [ebp - 0xa4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522bba: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00522bbd: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00522bc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522bc2: jne 0x522bdf */ if (!fZ) goto L_00522bdf;
L_00522bc4:; BB(0x00522bc4);
    /* 00522bc4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522bc6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522bc8: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00522bce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00522bcf: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x522bd4u); f_005dcb00();
    /* 00522bd4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00522bd7: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00522bda: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x522bdfu); f_006464d0();
L_00522bdf:; BB(0x00522bdf);
    /* 00522bdf: jmp 0x522b71 */ goto L_00522b71;
L_00522be1:; BB(0x00522be1);
    /* 00522be1: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 00522be7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00522bea: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00522bf0: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00522bf3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00522bf5: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00522bf8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x522bfau); call_ind(t); }
    /* 00522bfa: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00522c00: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 00522c03: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 00522c09: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00522c0c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00522c0e: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00522c11: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x522c13u); call_ind(t); }
    /* 00522c13: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00522c19: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00522c1c: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 00522c22: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00522c25: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00522c27: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00522c2a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x522c2cu); call_ind(t); }
    /* 00522c2c: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00522c32: call 0x5226b0 */ r_esp -= 4; W32(r_esp, 0x522c37u); f_005226b0();
L_00522c37:; BB(0x00522c37);
    /* 00522c37: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522c39: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00522c3f: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00522c42: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x522c47u); f_005fc420();
    /* 00522c47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522c49: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 00522c4f: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 00522c52: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x522c57u); f_005f5d50();
    /* 00522c57: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00522c59: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00522c5e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00522c61: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00522c67: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00522c6a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00522c6c: mov ecx, eax */ r_ecx = r_eax;
    /* 00522c6e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00522c71: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x522c73u); call_ind(t); }
    /* 00522c73: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00522c75: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00522c7b: call 0x528ca0 */ r_esp -= 4; W32(r_esp, 0x522c80u); f_00528ca0();
    /* 00522c80: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00522c86: call 0x522ca0 */ r_esp -= 4; W32(r_esp, 0x522c8bu); f_00522ca0();
    /* 00522c8b: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00522c91: call 0x522dc0 */ r_esp -= 4; W32(r_esp, 0x522c96u); f_00522dc0();
    /* 00522c96: mov esp, ebp */ r_esp = r_ebp;
    /* 00522c98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00522c99: ret  */ FN_RET(0x005229b0); r_esp += 4; return;
}

void f_00522ca0(void) /* sub_522CA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00522ca0);
    /* 00522ca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00522ca1: mov ebp, esp */ r_ebp = r_esp;
    /* 00522ca3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00522ca6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00522ca9: mov dword ptr [ebp - 4], 0xfffffea0 */ W32((u32)(r_ebp+0xfffffffcu), 0xfffffea0u);
    /* 00522cb0: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00522cb7: jmp 0x522cc2 */ goto L_00522cc2;
L_00522cb9:; BB(0x00522cb9);
    /* 00522cb9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00522cbc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00522cbf: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00522cc2:; BB(0x00522cc2);
    /* 00522cc2: cmp dword ptr [ebp - 0xc], 0x1a */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00522cc6: jge 0x522d68 */ if ((fS==fO)) goto L_00522d68;
L_00522ccc:; BB(0x00522ccc);
    /* 00522ccc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00522ccf: mov edx, dword ptr [0x793374] */ r_edx = R32((u32)(0x793374u));
    /* 00522cd5: cmp dword ptr [edx + ecx*4 + 0xd44], -1 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xd44u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00522cdd: jle 0x522d63 */ if ((fZ||fS!=fO)) goto L_00522d63;
L_00522ce3:; BB(0x00522ce3);
    /* 00522ce3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00522ce6: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00522cec: mov edx, dword ptr [ecx + eax*4 + 0xd44] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xd44u));
    /* 00522cf3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522cf4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00522cf7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00522cfa: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 00522cfe: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00522d01: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00522d04: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 00522d08: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00522d0a: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00522d10: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x522d12u); call_ind(t); }
    /* 00522d12: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00522d15: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00522d16: mov ecx, 0xd */ r_ecx = 0xdu;
    /* 00522d1b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00522d1b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00522d1b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00522d1d: imul edx, edx, 0x19 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x19u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00522d20: add edx, 0x58 */ {  u32 a = r_edx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00522d23: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00522d26: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00522d29: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00522d2a: mov ecx, 0xd */ r_ecx = 0xdu;
    /* 00522d2f: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00522d2f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00522d2f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00522d31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522d33: jne 0x522d3e */ if (!fZ) goto L_00522d3e;
L_00522d35:; BB(0x00522d35);
    /* 00522d35: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00522d38: add edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00522d3b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00522d3e:; BB(0x00522d3e);
    /* 00522d3e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00522d41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522d42: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00522d45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00522d46: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00522d49: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00522d4c: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 00522d50: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00522d53: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00522d56: mov edx, dword ptr [eax + edx*4 + 0x18] */ r_edx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 00522d5a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00522d5c: mov ecx, edx */ r_ecx = r_edx;
    /* 00522d5e: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00522d61: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x522d63u); call_ind(t); }
L_00522d63:; BB(0x00522d63);
    /* 00522d63: jmp 0x522cb9 */ goto L_00522cb9;
L_00522d68:; BB(0x00522d68);
    /* 00522d68: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00522d6f: jmp 0x522d7a */ goto L_00522d7a;
L_00522d71:; BB(0x00522d71);
    /* 00522d71: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00522d74: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00522d77: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00522d7a:; BB(0x00522d7a);
    /* 00522d7a: cmp dword ptr [ebp - 0xc], 0x1a */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00522d7e: jge 0x522db0 */ if ((fS==fO)) goto L_00522db0;
L_00522d80:; BB(0x00522d80);
    /* 00522d80: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00522d83: mov edx, dword ptr [0x793374] */ r_edx = R32((u32)(0x793374u));
    /* 00522d89: cmp dword ptr [edx + ecx*4 + 0xd44], -1 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0xd44u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00522d91: jle 0x522dae */ if ((fZ||fS!=fO)) goto L_00522dae;
L_00522d93:; BB(0x00522d93);
    /* 00522d93: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00522d96: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00522d99: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 00522d9d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00522da0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00522da3: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 00522da7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00522da9: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00522dac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x522daeu); call_ind(t); }
L_00522dae:; BB(0x00522dae);
    /* 00522dae: jmp 0x522d71 */ goto L_00522d71;
L_00522db0:; BB(0x00522db0);
    /* 00522db0: mov esp, ebp */ r_esp = r_ebp;
    /* 00522db2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00522db3: ret  */ FN_RET(0x00522ca0); r_esp += 4; return;
}

void f_00522dc0(void) /* sub_522DC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00522dc0);
    /* 00522dc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00522dc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00522dc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00522dc5: push 0x6a3faa */ { u32 v = 0x6a3faau; r_esp -= 4; W32(r_esp, v); }
    /* 00522dca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00522dd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522dd1: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00522dd4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00522dd9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00522ddb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522ddc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00522ddf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00522de5: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00522de8: mov dword ptr [ebp - 0x18], 0xc8 */ W32((u32)(r_ebp+0xffffffe8u), 0xc8u);
    /* 00522def: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 00522df5: call 0x528bd0 */ r_esp -= 4; W32(r_esp, 0x522dfau); f_00528bd0();
    /* 00522dfa: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00522dfd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00522e00: mov ecx, dword ptr [eax*8 + 0x721cd8] */ r_ecx = R32((u32)(r_eax*8+0x721cd8u));
    /* 00522e07: sub ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00522e0a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00522e0d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00522e10: mov eax, dword ptr [edx*8 + 0x721cdc] */ r_eax = R32((u32)(r_edx*8+0x721cdcu));
    /* 00522e17: sub eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00522e1a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00522e1d: push 0x1c2 */ { u32 v = 0x1c2u; r_esp -= 4; W32(r_esp, v); }
    /* 00522e22: push 0x258 */ { u32 v = 0x258u; r_esp -= 4; W32(r_esp, v); }
    /* 00522e27: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x522e2cu); f_0062fbf0();
    /* 00522e2c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00522e2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522e30: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00522e33: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00522e36: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00522e39: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00522e3c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00522e3e: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00522e41: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x522e43u); call_ind(t); }
    /* 00522e43: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00522e46: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00522e49: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00522e4c: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00522e4f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00522e51: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00522e54: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x522e56u); call_ind(t); }
    /* 00522e56: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 00522e58: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x522e5du); f_00686d82();
    /* 00522e5d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00522e60: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00522e63: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00522e6a: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522e6e: je 0x522e93 */ if (fZ) goto L_00522e93;
L_00522e70:; BB(0x00522e70);
    /* 00522e70: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522e73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00522e74: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00522e77: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522e78: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00522e7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522e7c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00522e82: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00522e85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522e86: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00522e89: call 0x524280 */ r_esp -= 4; W32(r_esp, 0x522e8eu); f_00524280();
    /* 00522e8e: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00522e91: jmp 0x522e9a */ goto L_00522e9a;
L_00522e93:; BB(0x00522e93);
    /* 00522e93: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00522e9a:; BB(0x00522e9a);
    /* 00522e9a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00522e9d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00522ea0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00522ea7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00522eaa: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00522ead: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00522eb0: mov dword ptr [edx + 0x38], 0x14 */ W32((u32)(r_edx+0x38u), 0x14u);
    /* 00522eb7: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00522eba: fild dword ptr [eax + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x38u)));
    /* 00522ebd: fld1  */ FPUSH(1.0);
    /* 00522ebf: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00522ec1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00522ec4: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 00522ec7: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00522eca: fld dword ptr [0x6c2fe4] */ FPUSH(R_F32((u32)(0x6c2fe4u)));
    /* 00522ed0: fstp dword ptr [edx + 0x34] */ W_F32((u32)(r_edx+0x34u), ST(0)); FPOP();
    /* 00522ed3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00522ed6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522ed7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00522eda: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00522edd: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x522ee2u); f_005f6050();
    /* 00522ee2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00522ee5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00522eec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00522eed: mov esp, ebp */ r_esp = r_ebp;
    /* 00522eef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00522ef0: ret  */ FN_RET(0x00522dc0); r_esp += 4; return;
}

void f_00522f00(void) /* sub_522F00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00522f00);
    /* 00522f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00522f01: mov ebp, esp */ r_ebp = r_esp;
    /* 00522f03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00522f05: push 0x6a3fd0 */ { u32 v = 0x6a3fd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522f0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00522f10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522f11: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00522f14: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00522f19: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00522f1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522f1c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00522f1f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00522f25: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00522f28: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00522f2b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00522f2e: mov edx, dword ptr [ecx + eax*4 + 0x80] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x80u));
    /* 00522f35: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00522f38: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00522f3e: mov ecx, dword ptr [edx + eax + 0x17c] */ r_ecx = R32((u32)(r_edx+r_eax+0x17cu));
    /* 00522f45: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00522f48: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522f4a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00522f4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522f4e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00522f51: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00522f54: mov edx, dword ptr [ecx + eax*4 + 0x80] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x80u));
    /* 00522f5b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00522f5e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00522f61: mov ecx, dword ptr [ecx + eax*4 + 0x80] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x80u));
    /* 00522f68: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00522f6a: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 00522f70: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x522f72u); call_ind(t); }
    /* 00522f72: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00522f75: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00522f78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522f7a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00522f7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00522f7e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00522f81: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00522f84: mov ecx, dword ptr [eax + edx*4 + 0x80] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 00522f8b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00522f8e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00522f91: mov edx, dword ptr [eax + edx*4 + 0x80] */ r_edx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 00522f98: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00522f9a: mov ecx, edx */ r_ecx = r_edx;
    /* 00522f9c: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 00522fa2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x522fa4u); call_ind(t); }
    /* 00522fa4: add eax, 0x8c */ {  u32 a = r_eax; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00522fa9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00522fac: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522fb0: je 0x523054 */ if (fZ) goto L_00523054;
L_00522fb6:; BB(0x00522fb6);
    /* 00522fb6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00522fb8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00522fbe: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x522fc3u); f_00637810();
    /* 00522fc3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522fc6: mov dword ptr [ecx + 0x184], eax */ W32((u32)(r_ecx+0x184u), r_eax);
    /* 00522fcc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522fcf: cmp dword ptr [edx + 0x184], 0 */ {  u32 a = R32((u32)(r_edx+0x184u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522fd6: je 0x52303f */ if (fZ) goto L_0052303f;
L_00522fd8:; BB(0x00522fd8);
    /* 00522fd8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00522fde: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x522fe3u); f_00637630();
    /* 00522fe3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00522fe6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522fe8: je 0x52303f */ if (fZ) goto L_0052303f;
L_00522fea:; BB(0x00522fea);
    /* 00522fea: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00522fec: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x522ff1u); f_00686d82();
    /* 00522ff1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00522ff4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00522ff7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00522ffe: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523002: je 0x52301d */ if (fZ) goto L_0052301d;
L_00523004:; BB(0x00523004);
    /* 00523004: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00523006: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00523009: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052300a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052300d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052300e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00523010: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00523013: call 0x606e60 */ r_esp -= 4; W32(r_esp, 0x523018u); f_00606e60();
    /* 00523018: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0052301b: jmp 0x523024 */ goto L_00523024;
L_0052301d:; BB(0x0052301d);
    /* 0052301d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00523024:; BB(0x00523024);
    /* 00523024: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00523027: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0052302a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00523031: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00523034: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00523035: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00523038: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x52303du); f_005f6050();
    /* 0052303d: jmp 0x523054 */ goto L_00523054;
L_0052303f:; BB(0x0052303f);
    /* 0052303f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00523042: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00523043: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00523046: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523047: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052304a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052304c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052304f: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00523052: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x523054u); call_ind(t); }
L_00523054:; BB(0x00523054);
    /* 00523054: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00523057: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052305e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052305f: mov esp, ebp */ r_esp = r_ebp;
    /* 00523061: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00523062: ret 8 */ FN_RET(0x00522f00); r_esp += 12; return;
}

