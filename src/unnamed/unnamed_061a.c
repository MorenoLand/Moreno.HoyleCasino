#include "protos.h"

void f_0061a4a0(void) /* sub_61A4A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061a4a0);
    /* 0061a4a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061a4a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061a4a3: sub esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061a4a9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061a4aa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061a4ab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061a4ac: mov dword ptr [ebp - 8], 4 */ W32((u32)(r_ebp+0xfffffff8u), 0x4u);
    /* 0061a4b3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061a4b6: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061a4b9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0061a4bc: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061a4bf: mov ax, word ptr [edx + 1] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x1u))) & 0xffffu);
    /* 0061a4c3: mov word ptr [ebp - 0x18], ax */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_eax);
    /* 0061a4c7: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061a4ca: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061a4cd: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
L_0061a4d0:; BB(0x0061a4d0);
    /* 0061a4d0: movzx edx, word ptr [ebp - 0x18] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061a4d4: cmp dword ptr [ebp + 0x10], edx */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061a4d7: jl 0x61a5aa */ if ((fS!=fO)) goto L_0061a5aa;
L_0061a4dd:; BB(0x0061a4dd);
    /* 0061a4dd: movzx eax, word ptr [ebp - 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061a4e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0061a4e3: jle 0x61a5aa */ if ((fZ||fS!=fO)) goto L_0061a5aa;
L_0061a4e9:; BB(0x0061a4e9);
    /* 0061a4e9: movzx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061a4ed: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0061a4f0: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061a4f2: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 0061a4f5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061a4f8: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 0061a4fe: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0061a504: sub ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061a507: mov dword ptr [ebp - 0xa0], ecx */ W32((u32)(r_ebp+0xffffff60u), r_ecx);
    /* 0061a50d: cmp dword ptr [ebp - 0xa0], 0x86 */ {  u32 a = R32((u32)(r_ebp+0xffffff60u)); u32 b = 0x86u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061a517: ja 0x61a588 */ if ((!fC&&!fZ)) goto L_0061a588;
L_0061a519:; BB(0x0061a519);
    /* 0061a519: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 0061a51f: movzx eax, byte ptr [edx + 0x61b304] */ r_eax = (u32)R8((u32)(r_edx+0x61b304u));
    /* 0061a526: jmp dword ptr [eax*4 + 0x61b2e4] */ { u32 t = R32((u32)(r_eax*4+0x61b2e4u)); switch (t) { case 0x61a53eu: goto L_0061a53e; case 0x61a559u: goto L_0061a559; case 0x61a573u: goto L_0061a573; case 0x61a57eu: goto L_0061a57e; case 0x61a52fu: goto L_0061a52f; case 0x61a54au: goto L_0061a54a; case 0x61a568u: goto L_0061a568; case 0x61a588u: goto L_0061a588; default: UNSUP(0x0061a526, "jump table entry is not a known target"); } }
L_0061a52f:; BB(0x0061a52f);
    /* 0061a52f: movzx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061a533: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061a536: add ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061a539: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061a53c: jmp 0x61a588 */ goto L_0061a588;
L_0061a53e:; BB(0x0061a53e);
    /* 0061a53e: movzx edx, word ptr [ebp - 0x18] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061a542: add edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061a545: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0061a548: jmp 0x61a588 */ goto L_0061a588;
L_0061a54a:; BB(0x0061a54a);
    /* 0061a54a: movzx eax, word ptr [ebp - 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061a54e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061a551: lea edx, [ecx + eax*4] */ r_edx = (u32)(r_ecx+r_eax*4);
    /* 0061a554: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0061a557: jmp 0x61a588 */ goto L_0061a588;
L_0061a559:; BB(0x0061a559);
    /* 0061a559: movzx eax, word ptr [ebp - 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061a55d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061a560: lea edx, [ecx + eax*2] */ r_edx = (u32)(r_ecx+r_eax*2);
    /* 0061a563: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0061a566: jmp 0x61a588 */ goto L_0061a588;
L_0061a568:; BB(0x0061a568);
    /* 0061a568: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061a56b: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061a56e: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0061a571: jmp 0x61a588 */ goto L_0061a588;
L_0061a573:; BB(0x0061a573);
    /* 0061a573: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061a576: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061a579: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061a57c: jmp 0x61a588 */ goto L_0061a588;
L_0061a57e:; BB(0x0061a57e);
    /* 0061a57e: movzx edx, word ptr [ebp - 0x18] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061a582: add edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061a585: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
L_0061a588:; BB(0x0061a588);
    /* 0061a588: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061a58b: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061a58e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0061a591: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061a594: mov ax, word ptr [edx + 1] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x1u))) & 0xffffu);
    /* 0061a598: mov word ptr [ebp - 0x18], ax */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_eax);
    /* 0061a59c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061a59f: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061a5a2: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061a5a5: jmp 0x61a4d0 */ goto L_0061a4d0;
L_0061a5aa:; BB(0x0061a5aa);
    /* 0061a5aa: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061a5ae: jle 0x61b2dc */ if ((fZ||fS!=fO)) goto L_0061b2dc;
L_0061a5b4:; BB(0x0061a5b4);
    /* 0061a5b4: movzx edx, word ptr [ebp - 0x18] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061a5b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0061a5ba: jle 0x61b2dc */ if ((fZ||fS!=fO)) goto L_0061b2dc;
L_0061a5c0:; BB(0x0061a5c0);
    /* 0061a5c0: movzx eax, word ptr [ebp - 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061a5c4: sub eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061a5c7: mov word ptr [ebp - 0x18], ax */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_eax);
    /* 0061a5cb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061a5ce: mov dword ptr [ebp - 0xa4], ecx */ W32((u32)(r_ebp+0xffffff5cu), r_ecx);
    /* 0061a5d4: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0061a5da: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061a5dd: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 0061a5e3: cmp dword ptr [ebp - 0xa4], 0x87 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0061a5ed: ja 0x61b2a8 */ if ((!fC&&!fZ)) goto L_0061b2a8;
L_0061a5f3:; BB(0x0061a5f3);
    /* 0061a5f3: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0061a5f9: movzx ecx, byte ptr [eax + 0x61b3c0] */ r_ecx = (u32)R8((u32)(r_eax+0x61b3c0u));
    /* 0061a600: jmp dword ptr [ecx*4 + 0x61b38c] */ { u32 t = R32((u32)(r_ecx*4+0x61b38cu)); switch (t) { case 0x61a607u: goto L_0061a607; case 0x61a637u: goto L_0061a637; case 0x61a982u: goto L_0061a982; case 0x61ad46u: goto L_0061ad46; case 0x61b0b1u: goto L_0061b0b1; case 0x61b14cu: goto L_0061b14c; case 0x61af7bu: goto L_0061af7b; case 0x61b016u: goto L_0061b016; case 0x61b1e7u: goto L_0061b1e7; case 0x61a854u: goto L_0061a854; case 0x61ac00u: goto L_0061ac00; case 0x61ae59u: goto L_0061ae59; case 0x61b2a8u: goto L_0061b2a8; default: UNSUP(0x0061a600, "jump table entry is not a known target"); } }
L_0061a607:; BB(0x0061a607);
    /* 0061a607: movzx edx, word ptr [ebp - 0x18] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061a60b: cmp dword ptr [ebp + 0x14], edx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061a60e: jle 0x61a62b */ if ((fZ||fS!=fO)) goto L_0061a62b;
L_0061a610:; BB(0x0061a610);
    /* 0061a610: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 0061a617: movzx eax, word ptr [ebp - 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061a61b: imul eax, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061a61f: imul eax, dword ptr [ebp + 0x20] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x20u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061a623: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061a626: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0061a629: jmp 0x61a632 */ goto L_0061a632;
L_0061a62b:; BB(0x0061a62b);
    /* 0061a62b: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_0061a632:; BB(0x0061a632);
    /* 0061a632: jmp 0x61b2a8 */ goto L_0061b2a8;
L_0061a637:; BB(0x0061a637);
    /* 0061a637: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061a63a: add ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061a63d: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061a640: movzx edx, word ptr [ebp - 0x18] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061a644: cmp dword ptr [ebp + 0x14], edx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061a647: jle 0x61a659 */ if ((fZ||fS!=fO)) goto L_0061a659;
L_0061a649:; BB(0x0061a649);
    /* 0061a649: movzx eax, word ptr [ebp - 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061a64d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061a650: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 0061a657: jmp 0x61a666 */ goto L_0061a666;
L_0061a659:; BB(0x0061a659);
    /* 0061a659: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061a65c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061a65f: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_0061a666:; BB(0x0061a666);
    /* 0061a666: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061a669: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0061a66c: cmp dword ptr [ebp + 0x20], 1 */ {  u32 a = R32((u32)(r_ebp+0x20u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061a670: jle 0x61a777 */ if ((fZ||fS!=fO)) goto L_0061a777;
L_0061a676:; BB(0x0061a676);
    /* 0061a676: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0061a67d: jmp 0x61a688 */ goto L_0061a688;
L_0061a67f:; BB(0x0061a67f);
    /* 0061a67f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061a682: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061a685: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0061a688:; BB(0x0061a688);
    /* 0061a688: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061a68b: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061a68e: jge 0x61a758 */ if ((fS==fO)) goto L_0061a758;
L_0061a694:; BB(0x0061a694);
    /* 0061a694: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0061a69b: jmp 0x61a6a6 */ goto L_0061a6a6;
L_0061a69d:; BB(0x0061a69d);
    /* 0061a69d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061a6a0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061a6a3: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_0061a6a6:; BB(0x0061a6a6);
    /* 0061a6a6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061a6a9: cmp eax, dword ptr [ebp + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061a6ac: jge 0x61a753 */ if ((fS==fO)) goto L_0061a753;
L_0061a6b2:; BB(0x0061a6b2);
    /* 0061a6b2: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061a6b5: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061a6b8: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061a6bb: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0061a6be: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 0061a6c1: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0061a6c4: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061a6c7: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061a6ca: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 0061a6cc: mov ebx, edi */ r_ebx = r_edi;
    /* 0061a6ce: mov edx, edi */ r_edx = r_edi;
    /* 0061a6d0: mov eax, esi */ r_eax = r_esi;
    /* 0061a6d2: mov ecx, esi */ r_ecx = r_esi;
    /* 0061a6d4: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061a6da: and edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061a6e0: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061a6e3: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061a6e6: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061a6eb: and ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061a6f1: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061a6f4: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061a6f7: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061a6f9: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061a6fb: imul eax, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061a6ff: imul ecx, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061a703: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061a706: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061a709: mov ebx, esi */ r_ebx = r_esi;
    /* 0061a70b: mov edx, esi */ r_edx = r_esi;
    /* 0061a70d: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061a713: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061a716: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061a719: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061a71b: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0061a71d: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0061a723: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0061a729: mov eax, esi */ r_eax = r_esi;
    /* 0061a72b: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0061a72e: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0061a730: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061a733: imul esi, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061a737: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061a739: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0061a73c: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061a73f: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061a741: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061a743: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 0061a745: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061a748: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061a74b: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0061a74e: jmp 0x61a69d */ goto L_0061a69d;
L_0061a753:; BB(0x0061a753);
    /* 0061a753: jmp 0x61a67f */ goto L_0061a67f;
L_0061a758:; BB(0x0061a758);
    /* 0061a758: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061a75b: imul eax, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061a75f: imul eax, dword ptr [ebp + 0x20] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x20u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061a763: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061a766: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0061a769: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061a76c: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061a76f: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061a772: jmp 0x61a84f */ goto L_0061a84f;
L_0061a777:; BB(0x0061a777);
    /* 0061a777: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0061a77e: jmp 0x61a789 */ goto L_0061a789;
L_0061a780:; BB(0x0061a780);
    /* 0061a780: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061a783: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061a786: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0061a789:; BB(0x0061a789);
    /* 0061a789: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061a78c: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061a78f: jge 0x61a839 */ if ((fS==fO)) goto L_0061a839;
L_0061a795:; BB(0x0061a795);
    /* 0061a795: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061a798: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061a79b: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061a79e: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0061a7a1: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 0061a7a4: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0061a7a7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061a7aa: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061a7ad: lea ecx, [eax + edx*4] */ r_ecx = (u32)(r_eax+r_edx*4);
    /* 0061a7b0: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0061a7b3: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061a7b6: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0061a7b9: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 0061a7bb: mov ebx, edi */ r_ebx = r_edi;
    /* 0061a7bd: mov edx, edi */ r_edx = r_edi;
    /* 0061a7bf: mov eax, esi */ r_eax = r_esi;
    /* 0061a7c1: mov ecx, esi */ r_ecx = r_esi;
    /* 0061a7c3: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061a7c9: and edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061a7cf: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061a7d2: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061a7d5: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061a7da: and ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061a7e0: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061a7e3: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061a7e6: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061a7e8: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061a7ea: imul eax, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061a7ee: imul ecx, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061a7f2: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061a7f5: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061a7f8: mov ebx, esi */ r_ebx = r_esi;
    /* 0061a7fa: mov edx, esi */ r_edx = r_esi;
    /* 0061a7fc: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061a802: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061a805: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061a808: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061a80a: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0061a80c: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0061a812: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0061a818: mov eax, esi */ r_eax = r_esi;
    /* 0061a81a: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0061a81d: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0061a81f: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061a822: imul esi, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061a826: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061a828: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0061a82b: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061a82e: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061a830: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061a832: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 0061a834: jmp 0x61a780 */ goto L_0061a780;
L_0061a839:; BB(0x0061a839);
    /* 0061a839: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061a83c: imul edx, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061a840: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061a843: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0061a846: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061a849: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061a84c: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_0061a84f:; BB(0x0061a84f);
    /* 0061a84f: jmp 0x61b2a8 */ goto L_0061b2a8;
L_0061a854:; BB(0x0061a854);
    /* 0061a854: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0061a857: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061a85a: add ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061a85d: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061a860: movzx edx, word ptr [ebp - 0x18] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061a864: cmp dword ptr [ebp + 0x14], edx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061a867: jle 0x61a879 */ if ((fZ||fS!=fO)) goto L_0061a879;
L_0061a869:; BB(0x0061a869);
    /* 0061a869: movzx eax, word ptr [ebp - 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061a86d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061a870: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 0061a877: jmp 0x61a886 */ goto L_0061a886;
L_0061a879:; BB(0x0061a879);
    /* 0061a879: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061a87c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061a87f: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_0061a886:; BB(0x0061a886);
    /* 0061a886: mov byte ptr [ebp - 0x19], 0xff */ W8((u32)(r_ebp+0xffffffe7u), 0xffu);
    /* 0061a88a: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0061a891: jmp 0x61a89c */ goto L_0061a89c;
L_0061a893:; BB(0x0061a893);
    /* 0061a893: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061a896: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061a899: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0061a89c:; BB(0x0061a89c);
    /* 0061a89c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061a89f: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061a8a2: jge 0x61a97d */ if ((fS==fO)) goto L_0061a97d;
L_0061a8a8:; BB(0x0061a8a8);
    /* 0061a8a8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061a8ab: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0061a8ad: mov byte ptr [ebp - 0x1c], dl */ W8((u32)(r_ebp+0xffffffe4u), (u8)r_edx);
    /* 0061a8b0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061a8b3: mov cl, byte ptr [eax + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 0061a8b6: mov byte ptr [ebp - 0x1b], cl */ W8((u32)(r_ebp+0xffffffe5u), (u8)r_ecx);
    /* 0061a8b9: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061a8bc: mov al, byte ptr [edx + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x2u))) & 0xffu);
    /* 0061a8bf: mov byte ptr [ebp - 0x1a], al */ W8((u32)(r_ebp+0xffffffe6u), (u8)r_eax);
    /* 0061a8c2: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061a8c5: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061a8c8: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061a8cb: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0061a8d2: jmp 0x61a8dd */ goto L_0061a8dd;
L_0061a8d4:; BB(0x0061a8d4);
    /* 0061a8d4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061a8d7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061a8da: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_0061a8dd:; BB(0x0061a8dd);
    /* 0061a8dd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061a8e0: cmp eax, dword ptr [ebp + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061a8e3: jge 0x61a978 */ if ((fS==fO)) goto L_0061a978;
L_0061a8e9:; BB(0x0061a8e9);
    /* 0061a8e9: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0061a8ec: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061a8ef: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 0061a8f1: mov ebx, edi */ r_ebx = r_edi;
    /* 0061a8f3: mov edx, edi */ r_edx = r_edi;
    /* 0061a8f5: mov eax, esi */ r_eax = r_esi;
    /* 0061a8f7: mov ecx, esi */ r_ecx = r_esi;
    /* 0061a8f9: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061a8ff: and edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061a905: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061a908: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061a90b: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061a910: and ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061a916: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061a919: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061a91c: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061a91e: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061a920: imul eax, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061a924: imul ecx, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061a928: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061a92b: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061a92e: mov ebx, esi */ r_ebx = r_esi;
    /* 0061a930: mov edx, esi */ r_edx = r_esi;
    /* 0061a932: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061a938: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061a93b: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061a93e: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061a940: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0061a942: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0061a948: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0061a94e: mov eax, esi */ r_eax = r_esi;
    /* 0061a950: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0061a953: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0061a955: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061a958: imul esi, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061a95c: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061a95e: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0061a961: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0061a964: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061a966: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061a968: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 0061a96a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061a96d: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061a970: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0061a973: jmp 0x61a8d4 */ goto L_0061a8d4;
L_0061a978:; BB(0x0061a978);
    /* 0061a978: jmp 0x61a893 */ goto L_0061a893;
L_0061a97d:; BB(0x0061a97d);
    /* 0061a97d: jmp 0x61b2a8 */ goto L_0061b2a8;
L_0061a982:; BB(0x0061a982);
    /* 0061a982: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0061a985: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061a988: lea ecx, [eax + edx*2] */ r_ecx = (u32)(r_eax+r_edx*2);
    /* 0061a98b: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061a98e: movzx edx, word ptr [ebp - 0x18] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061a992: cmp dword ptr [ebp + 0x14], edx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061a995: jle 0x61a9a7 */ if ((fZ||fS!=fO)) goto L_0061a9a7;
L_0061a997:; BB(0x0061a997);
    /* 0061a997: movzx eax, word ptr [ebp - 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061a99b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061a99e: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 0061a9a5: jmp 0x61a9b4 */ goto L_0061a9b4;
L_0061a9a7:; BB(0x0061a9a7);
    /* 0061a9a7: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061a9aa: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061a9ad: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_0061a9b4:; BB(0x0061a9b4);
    /* 0061a9b4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061a9b7: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061a9b9: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0061a9bc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061a9bf: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0061a9c2: cmp dword ptr [ebp + 0x20], 1 */ {  u32 a = R32((u32)(r_ebp+0x20u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061a9c6: jle 0x61ab03 */ if ((fZ||fS!=fO)) goto L_0061ab03;
L_0061a9cc:; BB(0x0061a9cc);
    /* 0061a9cc: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0061a9d3: jmp 0x61a9de */ goto L_0061a9de;
L_0061a9d5:; BB(0x0061a9d5);
    /* 0061a9d5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061a9d8: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061a9db: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0061a9de:; BB(0x0061a9de);
    /* 0061a9de: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061a9e1: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061a9e4: jge 0x61aadf */ if ((fS==fO)) goto L_0061aadf;
L_0061a9ea:; BB(0x0061a9ea);
    /* 0061a9ea: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0061a9f1: jmp 0x61a9fc */ goto L_0061a9fc;
L_0061a9f3:; BB(0x0061a9f3);
    /* 0061a9f3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061a9f6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061a9f9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0061a9fc:; BB(0x0061a9fc);
    /* 0061a9fc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061a9ff: cmp ecx, dword ptr [ebp + 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061aa02: jge 0x61aacd */ if ((fS==fO)) goto L_0061aacd;
L_0061aa08:; BB(0x0061aa08);
    /* 0061aa08: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061aa0b: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061aa0e: movzx eax, byte ptr [edx + 1] */ r_eax = (u32)R8((u32)(r_edx+0x1u));
    /* 0061aa12: mov ecx, dword ptr [0x15ede08] */ r_ecx = R32((u32)(0x15ede08u));
    /* 0061aa18: mov edx, dword ptr [ecx + eax*4] */ r_edx = R32((u32)(r_ecx+r_eax*4));
    /* 0061aa1b: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0061aa1e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061aa21: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061aa24: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061aa27: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0061aa2a: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 0061aa2d: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0061aa30: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061aa33: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0061aa34: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061aa36: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061aa38: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061aa3b: lea edx, [ecx + eax*4] */ r_edx = (u32)(r_ecx+r_eax*4);
    /* 0061aa3e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061aa41: lea ecx, [edx + eax*4] */ r_ecx = (u32)(r_edx+r_eax*4);
    /* 0061aa44: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0061aa47: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 0061aa4a: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0061aa4d: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 0061aa4f: mov ebx, edi */ r_ebx = r_edi;
    /* 0061aa51: mov edx, edi */ r_edx = r_edi;
    /* 0061aa53: mov eax, esi */ r_eax = r_esi;
    /* 0061aa55: mov ecx, esi */ r_ecx = r_esi;
    /* 0061aa57: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061aa5d: and edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061aa63: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061aa66: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061aa69: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061aa6e: and ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061aa74: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061aa77: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061aa7a: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061aa7c: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061aa7e: imul eax, dword ptr [ebp - 0x3c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffc4u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061aa82: imul ecx, dword ptr [ebp - 0x3c] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffc4u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061aa86: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061aa89: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061aa8c: mov ebx, esi */ r_ebx = r_esi;
    /* 0061aa8e: mov edx, esi */ r_edx = r_esi;
    /* 0061aa90: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061aa96: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061aa99: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061aa9c: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061aa9e: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0061aaa0: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0061aaa6: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0061aaac: mov eax, esi */ r_eax = r_esi;
    /* 0061aaae: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0061aab1: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0061aab3: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061aab6: imul esi, dword ptr [ebp - 0x3c] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xffffffc4u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061aaba: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061aabc: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0061aabf: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0061aac2: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061aac4: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061aac6: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 0061aac8: jmp 0x61a9f3 */ goto L_0061a9f3;
L_0061aacd:; BB(0x0061aacd);
    /* 0061aacd: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0061aad0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061aad3: lea ecx, [eax + edx*4 - 4] */ r_ecx = (u32)(r_eax+r_edx*4+0xfffffffcu);
    /* 0061aad7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0061aada: jmp 0x61a9d5 */ goto L_0061a9d5;
L_0061aadf:; BB(0x0061aadf);
    /* 0061aadf: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061aae2: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061aae5: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0061aae8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061aaeb: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0061aaec: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061aaee: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061aaf0: imul eax, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061aaf4: imul eax, dword ptr [ebp + 0x20] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x20u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061aaf8: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061aafb: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0061aafe: jmp 0x61abfb */ goto L_0061abfb;
L_0061ab03:; BB(0x0061ab03);
    /* 0061ab03: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0061ab0a: jmp 0x61ab15 */ goto L_0061ab15;
L_0061ab0c:; BB(0x0061ab0c);
    /* 0061ab0c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061ab0f: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061ab12: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0061ab15:; BB(0x0061ab15);
    /* 0061ab15: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061ab18: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061ab1b: jge 0x61abe0 */ if ((fS==fO)) goto L_0061abe0;
L_0061ab21:; BB(0x0061ab21);
    /* 0061ab21: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061ab24: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061ab27: movzx eax, byte ptr [edx + 1] */ r_eax = (u32)R8((u32)(r_edx+0x1u));
    /* 0061ab2b: mov ecx, dword ptr [0x15ede08] */ r_ecx = R32((u32)(0x15ede08u));
    /* 0061ab31: mov edx, dword ptr [ecx + eax*4] */ r_edx = R32((u32)(r_ecx+r_eax*4));
    /* 0061ab34: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0061ab37: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061ab3a: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061ab3d: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061ab40: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0061ab43: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 0061ab46: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0061ab49: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061ab4c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0061ab4d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061ab4f: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061ab51: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061ab54: lea edx, [ecx + eax*4] */ r_edx = (u32)(r_ecx+r_eax*4);
    /* 0061ab57: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0061ab5a: mov esi, dword ptr [ebp - 0x40] */ r_esi = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061ab5d: mov edi, dword ptr [ebp - 0x44] */ r_edi = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061ab60: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 0061ab62: mov ebx, edi */ r_ebx = r_edi;
    /* 0061ab64: mov edx, edi */ r_edx = r_edi;
    /* 0061ab66: mov eax, esi */ r_eax = r_esi;
    /* 0061ab68: mov ecx, esi */ r_ecx = r_esi;
    /* 0061ab6a: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061ab70: and edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061ab76: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061ab79: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061ab7c: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061ab81: and ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ab87: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061ab8a: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061ab8d: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061ab8f: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ab91: imul eax, dword ptr [ebp - 0x48] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffb8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061ab95: imul ecx, dword ptr [ebp - 0x48] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffb8u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061ab99: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061ab9c: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061ab9f: mov ebx, esi */ r_ebx = r_esi;
    /* 0061aba1: mov edx, esi */ r_edx = r_esi;
    /* 0061aba3: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061aba9: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061abac: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061abaf: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061abb1: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0061abb3: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0061abb9: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0061abbf: mov eax, esi */ r_eax = r_esi;
    /* 0061abc1: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0061abc4: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0061abc6: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061abc9: imul esi, dword ptr [ebp - 0x48] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xffffffb8u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061abcd: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061abcf: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0061abd2: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
    /* 0061abd5: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061abd7: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061abd9: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 0061abdb: jmp 0x61ab0c */ goto L_0061ab0c;
L_0061abe0:; BB(0x0061abe0);
    /* 0061abe0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061abe3: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061abe6: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0061abe9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061abec: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0061abed: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061abef: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061abf1: imul eax, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061abf5: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061abf8: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_0061abfb:; BB(0x0061abfb);
    /* 0061abfb: jmp 0x61b2a8 */ goto L_0061b2a8;
L_0061ac00:; BB(0x0061ac00);
    /* 0061ac00: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0061ac03: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061ac06: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 0061ac09: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0061ac0c: movzx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061ac10: cmp dword ptr [ebp + 0x14], ecx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061ac13: jle 0x61ac25 */ if ((fZ||fS!=fO)) goto L_0061ac25;
L_0061ac15:; BB(0x0061ac15);
    /* 0061ac15: movzx edx, word ptr [ebp - 0x18] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061ac19: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0061ac1c: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 0061ac23: jmp 0x61ac32 */ goto L_0061ac32;
L_0061ac25:; BB(0x0061ac25);
    /* 0061ac25: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0061ac28: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061ac2b: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_0061ac32:; BB(0x0061ac32);
    /* 0061ac32: mov byte ptr [ebp - 0x19], 0xff */ W8((u32)(r_ebp+0xffffffe7u), 0xffu);
    /* 0061ac36: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0061ac3d: jmp 0x61ac48 */ goto L_0061ac48;
L_0061ac3f:; BB(0x0061ac3f);
    /* 0061ac3f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061ac42: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ac45: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0061ac48:; BB(0x0061ac48);
    /* 0061ac48: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061ac4b: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061ac4e: jge 0x61ad41 */ if ((fS==fO)) goto L_0061ad41;
L_0061ac54:; BB(0x0061ac54);
    /* 0061ac54: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061ac57: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0061ac59: mov byte ptr [ebp - 0x1c], cl */ W8((u32)(r_ebp+0xffffffe4u), (u8)r_ecx);
    /* 0061ac5c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061ac5f: mov al, byte ptr [edx + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x1u))) & 0xffu);
    /* 0061ac62: mov byte ptr [ebp - 0x1b], al */ W8((u32)(r_ebp+0xffffffe5u), (u8)r_eax);
    /* 0061ac65: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061ac68: mov dl, byte ptr [ecx + 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x2u))) & 0xffu);
    /* 0061ac6b: mov byte ptr [ebp - 0x1a], dl */ W8((u32)(r_ebp+0xffffffe6u), (u8)r_edx);
    /* 0061ac6e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061ac71: mov cl, byte ptr [eax + 3] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x3u))) & 0xffu);
    /* 0061ac74: mov byte ptr [ebp - 0x21], cl */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_ecx);
    /* 0061ac77: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061ac7a: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061ac7d: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0061ac80: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0061ac87: jmp 0x61ac92 */ goto L_0061ac92;
L_0061ac89:; BB(0x0061ac89);
    /* 0061ac89: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061ac8c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061ac8f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0061ac92:; BB(0x0061ac92);
    /* 0061ac92: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061ac95: cmp ecx, dword ptr [ebp + 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061ac98: jge 0x61ad3c */ if ((fS==fO)) goto L_0061ad3c;
L_0061ac9e:; BB(0x0061ac9e);
    /* 0061ac9e: movzx edx, byte ptr [ebp - 0x21] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 0061aca2: mov eax, dword ptr [0x15ede08] */ r_eax = R32((u32)(0x15ede08u));
    /* 0061aca7: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 0061acaa: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0061acad: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0061acb0: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061acb3: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 0061acb5: mov ebx, edi */ r_ebx = r_edi;
    /* 0061acb7: mov edx, edi */ r_edx = r_edi;
    /* 0061acb9: mov eax, esi */ r_eax = r_esi;
    /* 0061acbb: mov ecx, esi */ r_ecx = r_esi;
    /* 0061acbd: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061acc3: and edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061acc9: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061accc: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061accf: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061acd4: and ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061acda: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061acdd: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061ace0: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061ace2: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ace4: imul eax, dword ptr [ebp - 0x4c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffb4u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061ace8: imul ecx, dword ptr [ebp - 0x4c] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffb4u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061acec: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061acef: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061acf2: mov ebx, esi */ r_ebx = r_esi;
    /* 0061acf4: mov edx, esi */ r_edx = r_esi;
    /* 0061acf6: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061acfc: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061acff: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061ad02: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061ad04: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0061ad06: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0061ad0c: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0061ad12: mov eax, esi */ r_eax = r_esi;
    /* 0061ad14: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0061ad17: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0061ad19: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061ad1c: imul esi, dword ptr [ebp - 0x4c] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xffffffb4u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061ad20: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061ad22: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0061ad25: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0061ad28: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061ad2a: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061ad2c: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 0061ad2e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061ad31: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061ad34: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0061ad37: jmp 0x61ac89 */ goto L_0061ac89;
L_0061ad3c:; BB(0x0061ad3c);
    /* 0061ad3c: jmp 0x61ac3f */ goto L_0061ac3f;
L_0061ad41:; BB(0x0061ad41);
    /* 0061ad41: jmp 0x61b2a8 */ goto L_0061b2a8;
L_0061ad46:; BB(0x0061ad46);
    /* 0061ad46: movzx eax, word ptr [ebp - 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061ad4a: cmp dword ptr [ebp + 0x14], eax */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061ad4d: jle 0x61ad5f */ if ((fZ||fS!=fO)) goto L_0061ad5f;
L_0061ad4f:; BB(0x0061ad4f);
    /* 0061ad4f: movzx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061ad53: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061ad56: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 0061ad5d: jmp 0x61ad6c */ goto L_0061ad6c;
L_0061ad5f:; BB(0x0061ad5f);
    /* 0061ad5f: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0061ad62: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0061ad65: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_0061ad6c:; BB(0x0061ad6c);
    /* 0061ad6c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061ad6f: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061ad72: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0061ad75: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 0061ad78: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0061ad7b: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0061ad82: jmp 0x61ad8d */ goto L_0061ad8d;
L_0061ad84:; BB(0x0061ad84);
    /* 0061ad84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061ad87: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ad8a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0061ad8d:; BB(0x0061ad8d);
    /* 0061ad8d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061ad90: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061ad93: jge 0x61ae4b */ if ((fS==fO)) goto L_0061ae4b;
L_0061ad99:; BB(0x0061ad99);
    /* 0061ad99: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0061ada0: jmp 0x61adab */ goto L_0061adab;
L_0061ada2:; BB(0x0061ada2);
    /* 0061ada2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061ada5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061ada8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0061adab:; BB(0x0061adab);
    /* 0061adab: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061adae: cmp ecx, dword ptr [ebp + 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061adb1: jge 0x61ae46 */ if ((fS==fO)) goto L_0061ae46;
L_0061adb7:; BB(0x0061adb7);
    /* 0061adb7: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0061adba: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061adbd: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 0061adbf: mov ebx, edi */ r_ebx = r_edi;
    /* 0061adc1: mov edx, edi */ r_edx = r_edi;
    /* 0061adc3: mov eax, esi */ r_eax = r_esi;
    /* 0061adc5: mov ecx, esi */ r_ecx = r_esi;
    /* 0061adc7: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061adcd: and edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061add3: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061add6: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061add9: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061adde: and ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ade4: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061ade7: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061adea: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061adec: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061adee: imul eax, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061adf2: imul ecx, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061adf6: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061adf9: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061adfc: mov ebx, esi */ r_ebx = r_esi;
    /* 0061adfe: mov edx, esi */ r_edx = r_esi;
    /* 0061ae00: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061ae06: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061ae09: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061ae0c: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061ae0e: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0061ae10: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0061ae16: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0061ae1c: mov eax, esi */ r_eax = r_esi;
    /* 0061ae1e: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0061ae21: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0061ae23: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061ae26: imul esi, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061ae2a: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061ae2c: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0061ae2f: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0061ae32: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061ae34: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061ae36: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 0061ae38: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061ae3b: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061ae3e: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0061ae41: jmp 0x61ada2 */ goto L_0061ada2;
L_0061ae46:; BB(0x0061ae46);
    /* 0061ae46: jmp 0x61ad84 */ goto L_0061ad84;
L_0061ae4b:; BB(0x0061ae4b);
    /* 0061ae4b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061ae4e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061ae51: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0061ae54: jmp 0x61b2a8 */ goto L_0061b2a8;
L_0061ae59:; BB(0x0061ae59);
    /* 0061ae59: movzx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061ae5d: cmp dword ptr [ebp + 0x14], ecx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061ae60: jle 0x61ae72 */ if ((fZ||fS!=fO)) goto L_0061ae72;
L_0061ae62:; BB(0x0061ae62);
    /* 0061ae62: movzx edx, word ptr [ebp - 0x18] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061ae66: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0061ae69: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 0061ae70: jmp 0x61ae7f */ goto L_0061ae7f;
L_0061ae72:; BB(0x0061ae72);
    /* 0061ae72: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0061ae75: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061ae78: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_0061ae7f:; BB(0x0061ae7f);
    /* 0061ae7f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061ae82: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0061ae84: mov byte ptr [ebp - 0x1c], dl */ W8((u32)(r_ebp+0xffffffe4u), (u8)r_edx);
    /* 0061ae87: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061ae8a: mov cl, byte ptr [eax + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 0061ae8d: mov byte ptr [ebp - 0x1b], cl */ W8((u32)(r_ebp+0xffffffe5u), (u8)r_ecx);
    /* 0061ae90: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061ae93: mov al, byte ptr [edx + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x2u))) & 0xffu);
    /* 0061ae96: mov byte ptr [ebp - 0x1a], al */ W8((u32)(r_ebp+0xffffffe6u), (u8)r_eax);
    /* 0061ae99: mov byte ptr [ebp - 0x19], 0xff */ W8((u32)(r_ebp+0xffffffe7u), 0xffu);
    /* 0061ae9d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061aea0: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061aea3: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061aea6: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0061aead: jmp 0x61aeb8 */ goto L_0061aeb8;
L_0061aeaf:; BB(0x0061aeaf);
    /* 0061aeaf: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061aeb2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061aeb5: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0061aeb8:; BB(0x0061aeb8);
    /* 0061aeb8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061aebb: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061aebe: jge 0x61af76 */ if ((fS==fO)) goto L_0061af76;
L_0061aec4:; BB(0x0061aec4);
    /* 0061aec4: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0061aecb: jmp 0x61aed6 */ goto L_0061aed6;
L_0061aecd:; BB(0x0061aecd);
    /* 0061aecd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061aed0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061aed3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_0061aed6:; BB(0x0061aed6);
    /* 0061aed6: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061aed9: cmp edx, dword ptr [ebp + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061aedc: jge 0x61af71 */ if ((fS==fO)) goto L_0061af71;
L_0061aee2:; BB(0x0061aee2);
    /* 0061aee2: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0061aee5: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061aee8: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 0061aeea: mov ebx, edi */ r_ebx = r_edi;
    /* 0061aeec: mov edx, edi */ r_edx = r_edi;
    /* 0061aeee: mov eax, esi */ r_eax = r_esi;
    /* 0061aef0: mov ecx, esi */ r_ecx = r_esi;
    /* 0061aef2: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061aef8: and edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0061aefe: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061af01: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061af04: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061af09: and ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0061af0f: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061af12: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061af15: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061af17: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061af19: imul eax, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061af1d: imul ecx, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061af21: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061af24: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0061af27: mov ebx, esi */ r_ebx = r_esi;
    /* 0061af29: mov edx, esi */ r_edx = r_esi;
    /* 0061af2b: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0061af31: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061af34: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0061af37: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061af39: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0061af3b: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0061af41: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0061af47: mov eax, esi */ r_eax = r_esi;
    /* 0061af49: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0061af4c: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0061af4e: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0061af51: imul esi, dword ptr [ebp + 0x1c] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0x1cu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061af55: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061af57: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0061af5a: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0061af5d: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061af5f: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0061af61: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 0061af63: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061af66: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061af69: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0061af6c: jmp 0x61aecd */ goto L_0061aecd;
L_0061af71:; BB(0x0061af71);
    /* 0061af71: jmp 0x61aeaf */ goto L_0061aeaf;
L_0061af76:; BB(0x0061af76);
    /* 0061af76: jmp 0x61b2a8 */ goto L_0061b2a8;
L_0061af7b:; BB(0x0061af7b);
    /* 0061af7b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061af7e: add ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061af81: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061af84: movzx edx, word ptr [ebp - 0x18] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061af88: cmp dword ptr [ebp + 0x14], edx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061af8b: jle 0x61af9d */ if ((fZ||fS!=fO)) goto L_0061af9d;
L_0061af8d:; BB(0x0061af8d);
    /* 0061af8d: movzx eax, word ptr [ebp - 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061af91: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061af94: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 0061af9b: jmp 0x61afaa */ goto L_0061afaa;
L_0061af9d:; BB(0x0061af9d);
    /* 0061af9d: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061afa0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061afa3: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_0061afaa:; BB(0x0061afaa);
    /* 0061afaa: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0061afb1: jmp 0x61afbc */ goto L_0061afbc;
L_0061afb3:; BB(0x0061afb3);
    /* 0061afb3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061afb6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061afb9: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0061afbc:; BB(0x0061afbc);
    /* 0061afbc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061afbf: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061afc2: jge 0x61b011 */ if ((fS==fO)) goto L_0061b011;
L_0061afc4:; BB(0x0061afc4);
    /* 0061afc4: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0061afcb: jmp 0x61afd6 */ goto L_0061afd6;
L_0061afcd:; BB(0x0061afcd);
    /* 0061afcd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061afd0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061afd3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_0061afd6:; BB(0x0061afd6);
    /* 0061afd6: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061afd9: cmp edx, dword ptr [ebp + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061afdc: jge 0x61b006 */ if ((fS==fO)) goto L_0061b006;
L_0061afde:; BB(0x0061afde);
    /* 0061afde: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0061afe1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061afe2: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061afe5: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061afe8: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0061afeb: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 0061afee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061afef: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061aff2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061aff3: call 0x61d520 */ r_esp -= 4; W32(r_esp, 0x61aff8u); f_0061d520();
    /* 0061aff8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061affb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061affe: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061b001: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0061b004: jmp 0x61afcd */ goto L_0061afcd;
L_0061b006:; BB(0x0061b006);
    /* 0061b006: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061b009: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b00c: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061b00f: jmp 0x61afb3 */ goto L_0061afb3;
L_0061b011:; BB(0x0061b011);
    /* 0061b011: jmp 0x61b2a8 */ goto L_0061b2a8;
L_0061b016:; BB(0x0061b016);
    /* 0061b016: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061b019: add edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061b01c: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0061b01f: movzx eax, word ptr [ebp - 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061b023: cmp dword ptr [ebp + 0x14], eax */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b026: jle 0x61b038 */ if ((fZ||fS!=fO)) goto L_0061b038;
L_0061b028:; BB(0x0061b028);
    /* 0061b028: movzx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061b02c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061b02f: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 0061b036: jmp 0x61b045 */ goto L_0061b045;
L_0061b038:; BB(0x0061b038);
    /* 0061b038: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0061b03b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0061b03e: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_0061b045:; BB(0x0061b045);
    /* 0061b045: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0061b04c: jmp 0x61b057 */ goto L_0061b057;
L_0061b04e:; BB(0x0061b04e);
    /* 0061b04e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061b051: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061b054: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0061b057:; BB(0x0061b057);
    /* 0061b057: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061b05a: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b05d: jge 0x61b0ac */ if ((fS==fO)) goto L_0061b0ac;
L_0061b05f:; BB(0x0061b05f);
    /* 0061b05f: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0061b066: jmp 0x61b071 */ goto L_0061b071;
L_0061b068:; BB(0x0061b068);
    /* 0061b068: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061b06b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061b06e: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_0061b071:; BB(0x0061b071);
    /* 0061b071: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061b074: cmp eax, dword ptr [ebp + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b077: jge 0x61b0a1 */ if ((fS==fO)) goto L_0061b0a1;
L_0061b079:; BB(0x0061b079);
    /* 0061b079: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 0061b07c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b07d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061b080: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0061b083: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0061b086: mov edx, dword ptr [ecx + eax*4] */ r_edx = R32((u32)(r_ecx+r_eax*4));
    /* 0061b089: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b08a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061b08d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b08e: call 0x61d6a0 */ r_esp -= 4; W32(r_esp, 0x61b093u); f_0061d6a0();
    /* 0061b093: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061b096: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061b099: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b09c: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0061b09f: jmp 0x61b068 */ goto L_0061b068;
L_0061b0a1:; BB(0x0061b0a1);
    /* 0061b0a1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061b0a4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061b0a7: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0061b0aa: jmp 0x61b04e */ goto L_0061b04e;
L_0061b0ac:; BB(0x0061b0ac);
    /* 0061b0ac: jmp 0x61b2a8 */ goto L_0061b2a8;
L_0061b0b1:; BB(0x0061b0b1);
    /* 0061b0b1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061b0b4: add eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061b0b7: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0061b0ba: movzx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061b0be: cmp dword ptr [ebp + 0x14], ecx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b0c1: jle 0x61b0d3 */ if ((fZ||fS!=fO)) goto L_0061b0d3;
L_0061b0c3:; BB(0x0061b0c3);
    /* 0061b0c3: movzx edx, word ptr [ebp - 0x18] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061b0c7: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0061b0ca: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 0061b0d1: jmp 0x61b0e0 */ goto L_0061b0e0;
L_0061b0d3:; BB(0x0061b0d3);
    /* 0061b0d3: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0061b0d6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061b0d9: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_0061b0e0:; BB(0x0061b0e0);
    /* 0061b0e0: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0061b0e7: jmp 0x61b0f2 */ goto L_0061b0f2;
L_0061b0e9:; BB(0x0061b0e9);
    /* 0061b0e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061b0ec: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b0ef: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0061b0f2:; BB(0x0061b0f2);
    /* 0061b0f2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061b0f5: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b0f8: jge 0x61b147 */ if ((fS==fO)) goto L_0061b147;
L_0061b0fa:; BB(0x0061b0fa);
    /* 0061b0fa: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0061b101: jmp 0x61b10c */ goto L_0061b10c;
L_0061b103:; BB(0x0061b103);
    /* 0061b103: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061b106: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061b109: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0061b10c:; BB(0x0061b10c);
    /* 0061b10c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061b10f: cmp ecx, dword ptr [ebp + 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b112: jge 0x61b13c */ if ((fS==fO)) goto L_0061b13c;
L_0061b114:; BB(0x0061b114);
    /* 0061b114: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 0061b117: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b118: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061b11b: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0061b11e: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0061b121: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 0061b124: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b125: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061b128: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b129: call 0x61d800 */ r_esp -= 4; W32(r_esp, 0x61b12eu); f_0061d800();
    /* 0061b12e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061b131: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061b134: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061b137: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0061b13a: jmp 0x61b103 */ goto L_0061b103;
L_0061b13c:; BB(0x0061b13c);
    /* 0061b13c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061b13f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061b142: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0061b145: jmp 0x61b0e9 */ goto L_0061b0e9;
L_0061b147:; BB(0x0061b147);
    /* 0061b147: jmp 0x61b2a8 */ goto L_0061b2a8;
L_0061b14c:; BB(0x0061b14c);
    /* 0061b14c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061b14f: add ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b152: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061b155: movzx edx, word ptr [ebp - 0x18] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061b159: cmp dword ptr [ebp + 0x14], edx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b15c: jle 0x61b16e */ if ((fZ||fS!=fO)) goto L_0061b16e;
L_0061b15e:; BB(0x0061b15e);
    /* 0061b15e: movzx eax, word ptr [ebp - 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061b162: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061b165: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 0061b16c: jmp 0x61b17b */ goto L_0061b17b;
L_0061b16e:; BB(0x0061b16e);
    /* 0061b16e: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061b171: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061b174: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_0061b17b:; BB(0x0061b17b);
    /* 0061b17b: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0061b182: jmp 0x61b18d */ goto L_0061b18d;
L_0061b184:; BB(0x0061b184);
    /* 0061b184: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061b187: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061b18a: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0061b18d:; BB(0x0061b18d);
    /* 0061b18d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061b190: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b193: jge 0x61b1e2 */ if ((fS==fO)) goto L_0061b1e2;
L_0061b195:; BB(0x0061b195);
    /* 0061b195: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0061b19c: jmp 0x61b1a7 */ goto L_0061b1a7;
L_0061b19e:; BB(0x0061b19e);
    /* 0061b19e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061b1a1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b1a4: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_0061b1a7:; BB(0x0061b1a7);
    /* 0061b1a7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061b1aa: cmp edx, dword ptr [ebp + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b1ad: jge 0x61b1d7 */ if ((fS==fO)) goto L_0061b1d7;
L_0061b1af:; BB(0x0061b1af);
    /* 0061b1af: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0061b1b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b1b3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061b1b6: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061b1b9: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0061b1bc: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 0061b1bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b1c0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061b1c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b1c4: call 0x61da70 */ r_esp -= 4; W32(r_esp, 0x61b1c9u); f_0061da70();
    /* 0061b1c9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061b1cc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061b1cf: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061b1d2: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0061b1d5: jmp 0x61b19e */ goto L_0061b19e;
L_0061b1d7:; BB(0x0061b1d7);
    /* 0061b1d7: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061b1da: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b1dd: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0061b1e0: jmp 0x61b184 */ goto L_0061b184;
L_0061b1e2:; BB(0x0061b1e2);
    /* 0061b1e2: jmp 0x61b2a8 */ goto L_0061b2a8;
L_0061b1e7:; BB(0x0061b1e7);
    /* 0061b1e7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061b1ea: add edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061b1ed: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0061b1f0: movzx eax, word ptr [ebp - 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061b1f4: cmp dword ptr [ebp + 0x14], eax */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b1f7: jle 0x61b209 */ if ((fZ||fS!=fO)) goto L_0061b209;
L_0061b1f9:; BB(0x0061b1f9);
    /* 0061b1f9: movzx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061b1fd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061b200: mov dword ptr [ebp + 0x10], 0 */ W32((u32)(r_ebp+0x10u), 0x0u);
    /* 0061b207: jmp 0x61b216 */ goto L_0061b216;
L_0061b209:; BB(0x0061b209);
    /* 0061b209: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0061b20c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0061b20f: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_0061b216:; BB(0x0061b216);
    /* 0061b216: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0061b21d: jmp 0x61b228 */ goto L_0061b228;
L_0061b21f:; BB(0x0061b21f);
    /* 0061b21f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061b222: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061b225: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0061b228:; BB(0x0061b228);
    /* 0061b228: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061b22b: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b22e: jge 0x61b2a8 */ if ((fS==fO)) goto L_0061b2a8;
L_0061b230:; BB(0x0061b230);
    /* 0061b230: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0061b237: jmp 0x61b242 */ goto L_0061b242;
L_0061b239:; BB(0x0061b239);
    /* 0061b239: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061b23c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061b23f: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_0061b242:; BB(0x0061b242);
    /* 0061b242: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061b245: cmp eax, dword ptr [ebp + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061b248: jge 0x61b29a */ if ((fS==fO)) goto L_0061b29a;
L_0061b24a:; BB(0x0061b24a);
    /* 0061b24a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061b24d: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0061b250: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0061b253: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 0061b256: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 0061b25c: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0061b262: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 0061b265: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0061b268: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b269: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061b26c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061b26e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b26f: lea eax, [ebp - 0x80] */ r_eax = (u32)(r_ebp+0xffffff80u);
    /* 0061b272: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b273: call 0x61d6a0 */ r_esp -= 4; W32(r_esp, 0x61b278u); f_0061d6a0();
    /* 0061b278: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061b27b: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 0061b27e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b27f: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0061b282: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061b283: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061b286: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061b287: call 0x61d520 */ r_esp -= 4; W32(r_esp, 0x61b28cu); f_0061d520();
    /* 0061b28c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061b28f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061b292: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b295: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0061b298: jmp 0x61b239 */ goto L_0061b239;
L_0061b29a:; BB(0x0061b29a);
    /* 0061b29a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061b29d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061b2a0: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0061b2a3: jmp 0x61b21f */ goto L_0061b21f;
L_0061b2a8:; BB(0x0061b2a8);
    /* 0061b2a8: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061b2ac: je 0x61b2d7 */ if (fZ) goto L_0061b2d7;
L_0061b2ae:; BB(0x0061b2ae);
    /* 0061b2ae: movzx eax, word ptr [ebp - 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 0061b2b2: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0061b2b5: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061b2b7: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
    /* 0061b2ba: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061b2bd: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0061b2c0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061b2c3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061b2c6: mov dx, word ptr [ecx + 1] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x1u))) & 0xffffu);
    /* 0061b2ca: mov word ptr [ebp - 0x18], dx */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_edx);
    /* 0061b2ce: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061b2d1: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061b2d4: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_0061b2d7:; BB(0x0061b2d7);
    /* 0061b2d7: jmp 0x61a5aa */ goto L_0061a5aa;
L_0061b2dc:; BB(0x0061b2dc);
    /* 0061b2dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061b2dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061b2de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061b2df: mov esp, ebp */ r_esp = r_ebp;
    /* 0061b2e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061b2e2: ret  */ FN_RET(0x0061a4a0); r_esp += 4; return;
}

