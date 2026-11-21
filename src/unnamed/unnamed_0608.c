#include "protos.h"

void f_00608270(void) /* sub_608270 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00608270);
    /* 00608270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00608271: mov ebp, esp */ r_ebp = r_esp;
    /* 00608273: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00608274: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00608277: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060827a: mov byte ptr [eax + 8], 1 */ W8((u32)(r_eax+0x8u), 0x1u);
    /* 0060827e: mov esp, ebp */ r_esp = r_ebp;
    /* 00608280: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00608281: ret  */ FN_RET(0x00608270); r_esp += 4; return;
}

void f_00608290(void) /* sub_608290 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00608290);
    /* 00608290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00608291: mov ebp, esp */ r_ebp = r_esp;
    /* 00608293: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00608294: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00608297: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060829a: mov byte ptr [eax + 8], 0 */ W8((u32)(r_eax+0x8u), 0x0u);
    /* 0060829e: call 0x630d00 */ r_esp -= 4; W32(r_esp, 0x6082a3u); f_00630d00();
    /* 006082a3: mov esp, ebp */ r_esp = r_ebp;
    /* 006082a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006082a6: ret  */ FN_RET(0x00608290); r_esp += 4; return;
}

void f_00608410(void) /* sub_608410 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00608410);
    /* 00608410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00608411: mov ebp, esp */ r_ebp = r_esp;
    /* 00608413: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00608416: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00608419: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00608420: jmp 0x60842b */ goto L_0060842b;
L_00608422:; BB(0x00608422);
    /* 00608422: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608425: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00608428: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0060842b:; BB(0x0060842b);
    /* 0060842b: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060842f: jge 0x60845c */ if ((fS==fO)) goto L_0060845c;
L_00608431:; BB(0x00608431);
    /* 00608431: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608434: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00608437: mov edx, dword ptr [ecx + 0x796b40] */ r_edx = R32((u32)(r_ecx+0x796b40u));
    /* 0060843d: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608440: jne 0x60845a */ if (!fZ) goto L_0060845a;
L_00608442:; BB(0x00608442);
    /* 00608442: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608445: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00608446: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00608449: call 0x609b80 */ r_esp -= 4; W32(r_esp, 0x60844eu); f_00609b80();
    /* 0060844e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00608451: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608453: je 0x60845a */ if (fZ) goto L_0060845a;
L_00608455:; BB(0x00608455);
    /* 00608455: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608458: jmp 0x60845f */ goto L_0060845f;
L_0060845a:; BB(0x0060845a);
    /* 0060845a: jmp 0x608422 */ goto L_00608422;
L_0060845c:; BB(0x0060845c);
    /* 0060845c: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0060845f:; BB(0x0060845f);
    /* 0060845f: mov esp, ebp */ r_esp = r_ebp;
    /* 00608461: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00608462: ret 4 */ FN_RET(0x00608410); r_esp += 8; return;
}

void f_00608470(void) /* sub_608470 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00608470);
    /* 00608470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00608471: mov ebp, esp */ r_ebp = r_esp;
    /* 00608473: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00608476: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00608479: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00608480: jmp 0x60848b */ goto L_0060848b;
L_00608482:; BB(0x00608482);
    /* 00608482: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608485: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00608488: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0060848b:; BB(0x0060848b);
    /* 0060848b: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060848f: jge 0x6084ce */ if ((fS==fO)) goto L_006084ce;
L_00608491:; BB(0x00608491);
    /* 00608491: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608494: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00608497: cmp dword ptr [ecx + 0x796b40], 0 */ {  u32 a = R32((u32)(r_ecx+0x796b40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060849e: je 0x6084cc */ if (fZ) goto L_006084cc;
L_006084a0:; BB(0x006084a0);
    /* 006084a0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006084a3: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006084a6: mov eax, dword ptr [edx + 0x796b40] */ r_eax = R32((u32)(r_edx+0x796b40u));
    /* 006084ac: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006084af: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006084b2: jne 0x6084cc */ if (!fZ) goto L_006084cc;
L_006084b4:; BB(0x006084b4);
    /* 006084b4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006084b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006084b8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006084bb: call 0x609b80 */ r_esp -= 4; W32(r_esp, 0x6084c0u); f_00609b80();
    /* 006084c0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006084c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006084c5: je 0x6084cc */ if (fZ) goto L_006084cc;
L_006084c7:; BB(0x006084c7);
    /* 006084c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006084ca: jmp 0x6084d1 */ goto L_006084d1;
L_006084cc:; BB(0x006084cc);
    /* 006084cc: jmp 0x608482 */ goto L_00608482;
L_006084ce:; BB(0x006084ce);
    /* 006084ce: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_006084d1:; BB(0x006084d1);
    /* 006084d1: mov esp, ebp */ r_esp = r_ebp;
    /* 006084d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006084d4: ret 4 */ FN_RET(0x00608470); r_esp += 8; return;
}

void f_006084e0(void) /* sub_6084E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006084e0);
    /* 006084e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006084e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006084e3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006084e6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006084e9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006084f0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 006084f7: jmp 0x608502 */ goto L_00608502;
L_006084f9:; BB(0x006084f9);
    /* 006084f9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006084fc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006084ff: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00608502:; BB(0x00608502);
    /* 00608502: cmp dword ptr [ebp - 8], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608506: jge 0x608540 */ if ((fS==fO)) goto L_00608540;
L_00608508:; BB(0x00608508);
    /* 00608508: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060850b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060850e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0060850f: mov ecx, 0xc */ r_ecx = 0xcu;
    /* 00608514: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00608514, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00608514, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00608516: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00608519: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060851d: jne 0x608526 */ if (!fZ) goto L_00608526;
L_0060851f:; BB(0x0060851f);
    /* 0060851f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_00608526:; BB(0x00608526);
    /* 00608526: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608529: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060852a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060852d: call 0x609650 */ r_esp -= 4; W32(r_esp, 0x608532u); f_00609650();
    /* 00608532: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00608535: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608537: je 0x60853e */ if (fZ) goto L_0060853e;
L_00608539:; BB(0x00608539);
    /* 00608539: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060853c: jmp 0x608543 */ goto L_00608543;
L_0060853e:; BB(0x0060853e);
    /* 0060853e: jmp 0x6084f9 */ goto L_006084f9;
L_00608540:; BB(0x00608540);
    /* 00608540: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00608543:; BB(0x00608543);
    /* 00608543: mov esp, ebp */ r_esp = r_ebp;
    /* 00608545: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00608546: ret  */ FN_RET(0x006084e0); r_esp += 4; return;
}

void f_00608980(void) /* sub_608980 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00608980);
    /* 00608980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00608981: mov ebp, esp */ r_ebp = r_esp;
    /* 00608983: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00608986: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00608989: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00608990: jmp 0x60899b */ goto L_0060899b;
L_00608992:; BB(0x00608992);
    /* 00608992: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608995: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00608998: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0060899b:; BB(0x0060899b);
    /* 0060899b: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060899f: jge 0x6089d1 */ if ((fS==fO)) goto L_006089d1;
L_006089a1:; BB(0x006089a1);
    /* 006089a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006089a4: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006089a7: mov edx, dword ptr [ecx + 0x796b4c] */ r_edx = R32((u32)(r_ecx+0x796b4cu));
    /* 006089ad: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006089b0: jne 0x6089cf */ if (!fZ) goto L_006089cf;
L_006089b2:; BB(0x006089b2);
    /* 006089b2: push 0x6d7ee0 */ { u32 v = 0x6d7ee0u; r_esp -= 4; W32(r_esp, v); }
    /* 006089b7: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x6089bcu); f_0062fde0();
    /* 006089bc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006089bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006089c2: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006089c5: mov dword ptr [eax + 0x796b4c], 0 */ W32((u32)(r_eax+0x796b4cu), 0x0u);
L_006089cf:; BB(0x006089cf);
    /* 006089cf: jmp 0x608992 */ goto L_00608992;
L_006089d1:; BB(0x006089d1);
    /* 006089d1: mov esp, ebp */ r_esp = r_ebp;
    /* 006089d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006089d4: ret 4 */ FN_RET(0x00608980); r_esp += 8; return;
}

void f_006089e0(void) /* sub_6089E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006089e0);
    /* 006089e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006089e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006089e3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006089e6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006089e9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006089f0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006089f3: call 0x6084e0 */ r_esp -= 4; W32(r_esp, 0x6089f8u); f_006084e0();
    /* 006089f8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006089fb: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006089ff: je 0x608a09 */ if (fZ) goto L_00608a09;
L_00608a01:; BB(0x00608a01);
    /* 00608a01: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00608a04: jmp 0x608a99 */ goto L_00608a99;
L_00608a09:; BB(0x00608a09);
    /* 00608a09: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00608a10: jmp 0x608a1b */ goto L_00608a1b;
L_00608a12:; BB(0x00608a12);
    /* 00608a12: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00608a15: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00608a18: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00608a1b:; BB(0x00608a1b);
    /* 00608a1b: cmp dword ptr [ebp - 8], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608a1f: jge 0x608a43 */ if ((fS==fO)) goto L_00608a43;
L_00608a21:; BB(0x00608a21);
    /* 00608a21: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00608a24: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00608a27: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608a2a: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00608a2d: mov eax, dword ptr [ecx + 0x796b48] */ r_eax = R32((u32)(r_ecx+0x796b48u));
    /* 00608a33: cmp eax, dword ptr [edx + 0x796b48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x796b48u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608a39: jge 0x608a41 */ if ((fS==fO)) goto L_00608a41;
L_00608a3b:; BB(0x00608a3b);
    /* 00608a3b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00608a3e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00608a41:; BB(0x00608a41);
    /* 00608a41: jmp 0x608a12 */ goto L_00608a12;
L_00608a43:; BB(0x00608a43);
    /* 00608a43: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608a46: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00608a49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00608a4c: cmp eax, dword ptr [edx + 0x796b48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x796b48u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00608a52: jl 0x608a89 */ if ((fS!=fO)) goto L_00608a89;
L_00608a54:; BB(0x00608a54);
    /* 00608a54: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00608a57: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00608a58: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608a5b: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00608a5e: mov eax, dword ptr [edx + 0x796b48] */ r_eax = R32((u32)(r_edx+0x796b48u));
    /* 00608a64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00608a65: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608a68: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00608a69: push 0x6d7fa8 */ { u32 v = 0x6d7fa8u; r_esp -= 4; W32(r_esp, v); }
    /* 00608a6e: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x608a73u); f_0062fde0();
    /* 00608a73: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00608a76: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00608a78: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608a7b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00608a7c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00608a7f: call 0x609720 */ r_esp -= 4; W32(r_esp, 0x608a84u); f_00609720();
    /* 00608a84: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608a87: jmp 0x608a99 */ goto L_00608a99;
L_00608a89:; BB(0x00608a89);
    /* 00608a89: push 0x6d7f30 */ { u32 v = 0x6d7f30u; r_esp -= 4; W32(r_esp, v); }
    /* 00608a8e: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x608a93u); f_0062fde0();
    /* 00608a93: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00608a96: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00608a99:; BB(0x00608a99);
    /* 00608a99: mov esp, ebp */ r_esp = r_ebp;
    /* 00608a9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00608a9c: ret 4 */ FN_RET(0x006089e0); r_esp += 8; return;
}

void f_00608b50(void) /* sub_608B50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00608b50);
    /* 00608b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00608b51: mov ebp, esp */ r_ebp = r_esp;
    /* 00608b53: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00608b56: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00608b59: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 00608b60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608b62: jne 0x608c22 */ if (!fZ) goto L_00608c22;
L_00608b68:; BB(0x00608b68);
    /* 00608b68: cmp dword ptr [ebp + 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608b6c: je 0x608b77 */ if (fZ) goto L_00608b77;
L_00608b6e:; BB(0x00608b6e);
    /* 00608b6e: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00608b71: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
L_00608b77:; BB(0x00608b77);
    /* 00608b77: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00608b7a: movzx eax, byte ptr [edx + 9] */ r_eax = (u32)R8((u32)(r_edx+0x9u));
    /* 00608b7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608b80: je 0x608b93 */ if (fZ) goto L_00608b93;
L_00608b82:; BB(0x00608b82);
    /* 00608b82: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00608b85: movzx edx, byte ptr [ecx + 8] */ r_edx = (u32)R8((u32)(r_ecx+0x8u));
    /* 00608b89: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608b8b: je 0x608b93 */ if (fZ) goto L_00608b93;
L_00608b8d:; BB(0x00608b8d);
    /* 00608b8d: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608b91: jne 0x608b9b */ if (!fZ) goto L_00608b9b;
L_00608b93:; BB(0x00608b93);
    /* 00608b93: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00608b96: jmp 0x608c24 */ goto L_00608c24;
L_00608b9b:; BB(0x00608b9b);
    /* 00608b9b: movzx eax, byte ptr [ebp + 0x10] */ r_eax = (u32)R8((u32)(r_ebp+0x10u));
    /* 00608b9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608ba1: jne 0x608ba7 */ if (!fZ) goto L_00608ba7;
L_00608ba3:; BB(0x00608ba3);
    /* 00608ba3: mov byte ptr [ebp + 0x10], 1 */ W8((u32)(r_ebp+0x10u), 0x1u);
L_00608ba7:; BB(0x00608ba7);
    /* 00608ba7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00608ba9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00608bac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00608bad: movzx edx, byte ptr [ebp + 0x10] */ r_edx = (u32)R8((u32)(r_ebp+0x10u));
    /* 00608bb1: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00608bb3: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00608bb5: and edx, 0xfff105f8 */ {  u32 a = r_edx; u32 b = 0xfff105f8u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00608bbb: add edx, 0x20564157 */ {  u32 a = r_edx; u32 b = 0x20564157u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00608bc1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00608bc2: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00608bc7: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00608bca: call 0x603c50 */ r_esp -= 4; W32(r_esp, 0x608bcfu); f_00603c50();
    /* 00608bcf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00608bd2: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608bd6: je 0x608be9 */ if (fZ) goto L_00608be9;
L_00608bd8:; BB(0x00608bd8);
    /* 00608bd8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608bdb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00608bdd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608be0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00608be3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x608be5u); call_ind(t); }
    /* 00608be5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608be7: jne 0x608bee */ if (!fZ) goto L_00608bee;
L_00608be9:; BB(0x00608be9);
    /* 00608be9: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00608bec: jmp 0x608c24 */ goto L_00608c24;
L_00608bee:; BB(0x00608bee);
    /* 00608bee: cmp dword ptr [ebp + 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608bf2: je 0x608bfc */ if (fZ) goto L_00608bfc;
L_00608bf4:; BB(0x00608bf4);
    /* 00608bf4: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00608bf7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608bfa: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
L_00608bfc:; BB(0x00608bfc);
    /* 00608bfc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00608bfd: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00608c00: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00608c03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00608c04: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 00608c07: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00608c0a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00608c0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00608c0e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00608c11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00608c12: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608c15: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00608c16: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00608c19: call 0x608db0 */ r_esp -= 4; W32(r_esp, 0x608c1eu); f_00608db0();
    /* 00608c1e: jmp 0x608c24 */ goto L_00608c24;
L_00608c22:; BB(0x00608c22);
    /* 00608c22: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00608c24:; BB(0x00608c24);
    /* 00608c24: mov esp, ebp */ r_esp = r_ebp;
    /* 00608c26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00608c27: ret 0x1c */ FN_RET(0x00608b50); r_esp += 32; return;
}

void f_00608c30(void) /* sub_608C30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00608c30);
    /* 00608c30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00608c31: mov ebp, esp */ r_ebp = r_esp;
    /* 00608c33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00608c36: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00608c39: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 00608c40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608c42: jne 0x608ce4 */ if (!fZ) goto L_00608ce4;
L_00608c48:; BB(0x00608c48);
    /* 00608c48: cmp dword ptr [ebp + 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608c4c: je 0x608c57 */ if (fZ) goto L_00608c57;
L_00608c4e:; BB(0x00608c4e);
    /* 00608c4e: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00608c51: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
L_00608c57:; BB(0x00608c57);
    /* 00608c57: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00608c5a: movzx eax, byte ptr [edx + 9] */ r_eax = (u32)R8((u32)(r_edx+0x9u));
    /* 00608c5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608c60: je 0x608c73 */ if (fZ) goto L_00608c73;
L_00608c62:; BB(0x00608c62);
    /* 00608c62: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00608c65: movzx edx, byte ptr [ecx + 8] */ r_edx = (u32)R8((u32)(r_ecx+0x8u));
    /* 00608c69: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608c6b: je 0x608c73 */ if (fZ) goto L_00608c73;
L_00608c6d:; BB(0x00608c6d);
    /* 00608c6d: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608c71: jne 0x608c78 */ if (!fZ) goto L_00608c78;
L_00608c73:; BB(0x00608c73);
    /* 00608c73: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00608c76: jmp 0x608ce6 */ goto L_00608ce6;
L_00608c78:; BB(0x00608c78);
    /* 00608c78: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00608c7a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00608c7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00608c7e: push 0x2047474f */ { u32 v = 0x2047474fu; r_esp -= 4; W32(r_esp, v); }
    /* 00608c83: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00608c89: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00608c8c: call 0x603c50 */ r_esp -= 4; W32(r_esp, 0x608c91u); f_00603c50();
    /* 00608c91: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00608c94: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608c98: je 0x608cab */ if (fZ) goto L_00608cab;
L_00608c9a:; BB(0x00608c9a);
    /* 00608c9a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608c9d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00608c9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608ca2: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00608ca5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x608ca7u); call_ind(t); }
    /* 00608ca7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608ca9: jne 0x608cb0 */ if (!fZ) goto L_00608cb0;
L_00608cab:; BB(0x00608cab);
    /* 00608cab: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00608cae: jmp 0x608ce6 */ goto L_00608ce6;
L_00608cb0:; BB(0x00608cb0);
    /* 00608cb0: cmp dword ptr [ebp + 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608cb4: je 0x608cbe */ if (fZ) goto L_00608cbe;
L_00608cb6:; BB(0x00608cb6);
    /* 00608cb6: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00608cb9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608cbc: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
L_00608cbe:; BB(0x00608cbe);
    /* 00608cbe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00608cbf: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 00608cc2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00608cc5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00608cc6: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 00608cc9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00608ccc: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00608ccf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00608cd0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00608cd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00608cd4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608cd7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00608cd8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00608cdb: call 0x608db0 */ r_esp -= 4; W32(r_esp, 0x608ce0u); f_00608db0();
    /* 00608ce0: jmp 0x608ce6 */ goto L_00608ce6;
L_00608ce4:; BB(0x00608ce4);
    /* 00608ce4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00608ce6:; BB(0x00608ce6);
    /* 00608ce6: mov esp, ebp */ r_esp = r_ebp;
    /* 00608ce8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00608ce9: ret 0x18 */ FN_RET(0x00608c30); r_esp += 28; return;
}

void f_00608cf0(void) /* sub_608CF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00608cf0);
    /* 00608cf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00608cf1: mov ebp, esp */ r_ebp = r_esp;
    /* 00608cf3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00608cf6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00608cf9: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 00608d00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608d02: jne 0x608da4 */ if (!fZ) goto L_00608da4;
L_00608d08:; BB(0x00608d08);
    /* 00608d08: cmp dword ptr [ebp + 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608d0c: je 0x608d17 */ if (fZ) goto L_00608d17;
L_00608d0e:; BB(0x00608d0e);
    /* 00608d0e: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00608d11: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
L_00608d17:; BB(0x00608d17);
    /* 00608d17: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00608d1a: movzx eax, byte ptr [edx + 9] */ r_eax = (u32)R8((u32)(r_edx+0x9u));
    /* 00608d1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608d20: je 0x608d33 */ if (fZ) goto L_00608d33;
L_00608d22:; BB(0x00608d22);
    /* 00608d22: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00608d25: movzx edx, byte ptr [ecx + 8] */ r_edx = (u32)R8((u32)(r_ecx+0x8u));
    /* 00608d29: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608d2b: je 0x608d33 */ if (fZ) goto L_00608d33;
L_00608d2d:; BB(0x00608d2d);
    /* 00608d2d: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608d31: jne 0x608d38 */ if (!fZ) goto L_00608d38;
L_00608d33:; BB(0x00608d33);
    /* 00608d33: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00608d36: jmp 0x608da6 */ goto L_00608da6;
L_00608d38:; BB(0x00608d38);
    /* 00608d38: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00608d3a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00608d3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00608d3e: push 0x2033504d */ { u32 v = 0x2033504du; r_esp -= 4; W32(r_esp, v); }
    /* 00608d43: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00608d49: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00608d4c: call 0x603c50 */ r_esp -= 4; W32(r_esp, 0x608d51u); f_00603c50();
    /* 00608d51: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00608d54: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608d58: je 0x608d6b */ if (fZ) goto L_00608d6b;
L_00608d5a:; BB(0x00608d5a);
    /* 00608d5a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608d5d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00608d5f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608d62: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00608d65: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x608d67u); call_ind(t); }
    /* 00608d67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608d69: jne 0x608d70 */ if (!fZ) goto L_00608d70;
L_00608d6b:; BB(0x00608d6b);
    /* 00608d6b: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00608d6e: jmp 0x608da6 */ goto L_00608da6;
L_00608d70:; BB(0x00608d70);
    /* 00608d70: cmp dword ptr [ebp + 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00608d74: je 0x608d7e */ if (fZ) goto L_00608d7e;
L_00608d76:; BB(0x00608d76);
    /* 00608d76: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00608d79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608d7c: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
L_00608d7e:; BB(0x00608d7e);
    /* 00608d7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00608d7f: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 00608d82: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00608d85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00608d86: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 00608d89: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00608d8c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00608d8f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00608d90: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00608d93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00608d94: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00608d97: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00608d98: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00608d9b: call 0x608db0 */ r_esp -= 4; W32(r_esp, 0x608da0u); f_00608db0();
    /* 00608da0: jmp 0x608da6 */ goto L_00608da6;
L_00608da4:; BB(0x00608da4);
    /* 00608da4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00608da6:; BB(0x00608da6);
    /* 00608da6: mov esp, ebp */ r_esp = r_ebp;
    /* 00608da8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00608da9: ret 0x18 */ FN_RET(0x00608cf0); r_esp += 28; return;
}

