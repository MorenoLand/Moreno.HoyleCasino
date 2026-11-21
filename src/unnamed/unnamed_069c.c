#include "protos.h"

void f_0069c560(void) /* sub_69C560 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069c560);
    /* 0069c560: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c561: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0069c565: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069c566: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069c567: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0069c56b: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0069c56f: sub esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0069c571: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0069c575: mov eax, esi */ r_eax = r_esi;
    /* 0069c577: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069c578: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069c579: mov edi, eax */ r_edi = r_eax;
    /* 0069c57b: mov eax, esi */ r_eax = r_esi;
    /* 0069c57d: xor edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0069c57f: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0069c581: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0069c583: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069c584: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0069c584, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0069c584, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0069c586: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069c588: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0069c58c: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 0069c58f: jl 0x69c594 */ if ((fS!=fO)) goto L_0069c594;
L_0069c591:; BB(0x0069c591);
    /* 0069c591: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
L_0069c594:; BB(0x0069c594);
    /* 0069c594: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069c597: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0069c59b: mov esi, ebx */ r_esi = r_ebx;
    /* 0069c59d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069c59e: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c5a0: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 0069c5a8: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069c5aa: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0069c5ae: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0069c5b0: lea eax, [ebp + 1] */ r_eax = (u32)(r_ebp+0x1u);
    /* 0069c5b3: mov dword ptr [edx + ebp*4], ebx */ W32((u32)(r_edx+r_ebp*4), r_ebx);
    /* 0069c5b6: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0069c5ba: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c5bc: jge 0x69c5e6 */ if ((fS==fO)) goto L_0069c5e6;
L_0069c5be:; BB(0x0069c5be);
    /* 0069c5be: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0069c5c2: add ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069c5c4: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c5c6: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0069c5ca: jl 0x69c5d8 */ if ((fS!=fO)) goto L_0069c5d8;
L_0069c5cc:; BB(0x0069c5cc);
    /* 0069c5cc: sub ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0069c5ce: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0069c5d2: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 0069c5d6: jmp 0x69c5dc */ goto L_0069c5dc;
L_0069c5d8:; BB(0x0069c5d8);
    /* 0069c5d8: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
L_0069c5dc:; BB(0x0069c5dc);
    /* 0069c5dc: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069c5de: mov dword ptr [edx + eax*4], esi */ W32((u32)(r_edx+r_eax*4), r_esi);
    /* 0069c5e1: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069c5e2: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c5e4: jl 0x69c5be */ if ((fS!=fO)) goto L_0069c5be;
L_0069c5e6:; BB(0x0069c5e6);
    /* 0069c5e6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c5e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c5e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069c5e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069c5ea: ret  */ FN_RET(0x0069c560); r_esp += 4; return;
}

void f_0069c5f0(void) /* sub_69C5F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069c5f0);
    /* 0069c5f0: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069c5f3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c5f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069c5f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069c5f6: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 0069c5fa: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 0069c5fe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069c5ff: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 0069c602: lea ebp, [esi + 4] */ r_ebp = (u32)(r_esi+0x4u);
    /* 0069c605: mov edi, dword ptr [ebx + 0x510] */ r_edi = R32((u32)(r_ebx+0x510u));
    /* 0069c60b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069c60d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0069c610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069c611: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0069c615: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0069c618: mov eax, dword ptr [edx + 0xb20] */ r_eax = R32((u32)(r_edx+0xb20u));
    /* 0069c61e: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0069c622: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x69c627u); f_0069d470();
    /* 0069c627: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069c62a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c62d: jne 0x69c8b7 */ if (!fZ) goto L_0069c8b7;
L_0069c633:; BB(0x0069c633);
    /* 0069c633: mov ecx, dword ptr [ebx + 0x504] */ r_ecx = R32((u32)(r_ebx+0x504u));
    /* 0069c639: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0069c63c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c63d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069c63e: call 0x690e40 */ r_esp -= 4; W32(r_esp, 0x69c643u); f_00690e40();
    /* 0069c643: mov edx, dword ptr [ebx + 0x50c] */ r_edx = R32((u32)(r_ebx+0x50cu));
    /* 0069c649: mov esi, eax */ r_esi = r_eax;
    /* 0069c64b: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069c64c: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 0069c650: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c651: call 0x699aa0 */ r_esp -= 4; W32(r_esp, 0x69c656u); f_00699aa0();
    /* 0069c656: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c657: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069c658: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x69c65du); f_0069d470();
    /* 0069c65d: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0069c65f: mov eax, dword ptr [ebx + 0x50c] */ r_eax = R32((u32)(r_ebx+0x50cu));
    /* 0069c665: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069c666: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c667: call 0x699aa0 */ r_esp -= 4; W32(r_esp, 0x69c66cu); f_00699aa0();
    /* 0069c66c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c66d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069c66e: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x69c673u); f_0069d470();
    /* 0069c673: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0069c676: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0069c678: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069c67b: mov eax, 2 */ r_eax = 0x2u;
    /* 0069c680: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069c682: mov dword ptr [esp + 0x38], 0 */ W32((u32)(r_esp+0x38u), 0x0u);
    /* 0069c68a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0069c68e: jle 0x69c7a8 */ if ((fZ||fS!=fO)) goto L_0069c7a8;
L_0069c694:; BB(0x0069c694);
    /* 0069c694: lea ecx, [edi + 4] */ r_ecx = (u32)(r_edi+0x4u);
    /* 0069c697: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
L_0069c69b:; BB(0x0069c69b);
    /* 0069c69b: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0069c69f: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0069c6a4: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0069c6a6: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 0069c6a8: mov ecx, dword ptr [edi + esi*4 + 0xc0] */ r_ecx = R32((u32)(r_edi+r_esi*4+0xc0u));
    /* 0069c6af: mov edx, dword ptr [edi + esi*4 + 0x80] */ r_edx = R32((u32)(r_edi+r_esi*4+0x80u));
    /* 0069c6b6: shl ebp, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0069c6b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c6ba: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0069c6be: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 0069c6c2: je 0x69c6f9 */ if (fZ) goto L_0069c6f9;
L_0069c6c4:; BB(0x0069c6c4);
    /* 0069c6c4: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0069c6c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6c9: mov eax, dword ptr [edi + esi*4 + 0x100] */ r_eax = R32((u32)(r_edi+r_esi*4+0x100u));
    /* 0069c6d0: lea ecx, [eax + eax*4] */ r_ecx = (u32)(r_eax+r_eax*4);
    /* 0069c6d3: lea edx, [eax + ecx*2] */ r_edx = (u32)(r_eax+r_ecx*2);
    /* 0069c6d6: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0069c6da: lea ecx, [eax + edx*4] */ r_ecx = (u32)(r_eax+r_edx*4);
    /* 0069c6dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c6de: call 0x695220 */ r_esp -= 4; W32(r_esp, 0x69c6e3u); f_00695220();
    /* 0069c6e3: mov ebx, eax */ r_ebx = r_eax;
    /* 0069c6e5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069c6e8: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c6eb: je 0x69c8b7 */ if (fZ) goto L_0069c8b7;
L_0069c6f1:; BB(0x0069c6f1);
    /* 0069c6f1: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0069c6f5: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
L_0069c6f9:; BB(0x0069c6f9);
    /* 0069c6f9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069c6fb: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 0069c703: jle 0x69c773 */ if ((fZ||fS!=fO)) goto L_0069c773;
L_0069c705:; BB(0x0069c705);
    /* 0069c705: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0069c709: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0069c70a: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 0069c70e: lea ebp, [esi*8 + 0x50] */ r_ebp = (u32)(r_esi*8+0x50u);
    /* 0069c715: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0069c719: lea esi, [eax + esi*4] */ r_esi = (u32)(r_eax+r_esi*4);
L_0069c71c:; BB(0x0069c71c);
    /* 0069c71c: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0069c720: and eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069c722: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069c724: sar ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0069c726: mov eax, dword ptr [edi + eax*4] */ r_eax = R32((u32)(r_edi+r_eax*4));
    /* 0069c729: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069c72b: jl 0x69c75d */ if ((fS!=fO)) goto L_0069c75d;
L_0069c72d:; BB(0x0069c72d);
    /* 0069c72d: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0069c731: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0069c734: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c735: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0069c739: lea eax, [eax + edx*2] */ r_eax = (u32)(r_eax+r_edx*2);
    /* 0069c73c: lea edx, [ecx + eax*4] */ r_edx = (u32)(r_ecx+r_eax*4);
    /* 0069c73f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c740: call 0x695220 */ r_esp -= 4; W32(r_esp, 0x69c745u); f_00695220();
    /* 0069c745: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069c748: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c74b: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0069c74d: je 0x69c8b7 */ if (fZ) goto L_0069c8b7;
L_0069c753:; BB(0x0069c753);
    /* 0069c753: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0069c757: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0069c75b: jmp 0x69c763 */ goto L_0069c763;
L_0069c75d:; BB(0x0069c75d);
    /* 0069c75d: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_0069c763:; BB(0x0069c763);
    /* 0069c763: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0069c767: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069c76a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069c76b: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c76d: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0069c771: jl 0x69c71c */ if ((fS!=fO)) goto L_0069c71c;
L_0069c773:; BB(0x0069c773);
    /* 0069c773: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0069c777: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0069c77b: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0069c77d: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069c77f: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0069c783: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069c784: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069c787: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c789: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0069c78d: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0069c791: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0069c795: jl 0x69c69b */ if ((fS!=fO)) goto L_0069c69b;
L_0069c79b:; BB(0x0069c79b);
    /* 0069c79b: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 0069c79f: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 0069c7a3: mov eax, 2 */ r_eax = 0x2u;
L_0069c7a8:; BB(0x0069c7a8);
    /* 0069c7a8: mov ecx, dword ptr [ebx + 0x504] */ r_ecx = R32((u32)(r_ebx+0x504u));
    /* 0069c7ae: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0069c7b2: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c7b4: jle 0x69c8ad */ if ((fZ||fS!=fO)) goto L_0069c8ad;
L_0069c7ba:; BB(0x0069c7ba);
    /* 0069c7ba: lea eax, [edi + 0x34c] */ r_eax = (u32)(r_edi+0x34cu);
    /* 0069c7c0: lea ebp, [ebx + 0x30c] */ r_ebp = (u32)(r_ebx+0x30cu);
    /* 0069c7c6: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_0069c7ca:; BB(0x0069c7ca);
    /* 0069c7ca: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0069c7ce: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0069c7d1: mov ecx, dword ptr [ebp + 0xfc] */ r_ecx = R32((u32)(r_ebp+0xfcu));
    /* 0069c7d7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0069c7d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c7da: mov edx, dword ptr [esi + eax*4] */ r_edx = R32((u32)(r_esi+r_eax*4));
    /* 0069c7dd: mov eax, dword ptr [edi + eax*4 + 0x344] */ r_eax = R32((u32)(r_edi+r_eax*4+0x344u));
    /* 0069c7e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c7e5: mov edx, dword ptr [esi + ecx*4] */ r_edx = R32((u32)(r_esi+r_ecx*4));
    /* 0069c7e8: mov ecx, dword ptr [edi + ecx*4 + 0x344] */ r_ecx = R32((u32)(r_edi+r_ecx*4+0x344u));
    /* 0069c7ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c7f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c7f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c7f2: call 0x69b830 */ r_esp -= 4; W32(r_esp, 0x69c7f7u); f_0069b830();
    /* 0069c7f7: mov ecx, dword ptr [ebx + 0x50c] */ r_ecx = R32((u32)(r_ebx+0x50cu));
    /* 0069c7fd: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069c800: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0069c802: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c804: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 0069c808: jl 0x69c80e */ if ((fS!=fO)) goto L_0069c80e;
L_0069c80a:; BB(0x0069c80a);
    /* 0069c80a: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
L_0069c80e:; BB(0x0069c80e);
    /* 0069c80e: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 0069c812: mov edx, dword ptr [esi + edx*4] */ r_edx = R32((u32)(r_esi+r_edx*4));
    /* 0069c815: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c817: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0069c81b: je 0x69c87e */ if (fZ) goto L_0069c87e;
L_0069c81d:; BB(0x0069c81d);
    /* 0069c81d: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0069c821: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069c823: cmp dword ptr [esp + 0x3c], edx */ {  u32 a = R32((u32)(r_esp+0x3cu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c827: jl 0x69c83c */ if ((fS!=fO)) goto L_0069c83c;
L_0069c829:; BB(0x0069c829);
    /* 0069c829: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c82b: jle 0x69c835 */ if ((fZ||fS!=fO)) goto L_0069c835;
L_0069c82d:; BB(0x0069c82d);
    /* 0069c82d: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 0069c831: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0069c833: jmp 0x69c84e */ goto L_0069c84e;
L_0069c835:; BB(0x0069c835);
    /* 0069c835: sub ecx, dword ptr [esp + 0x3c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x3cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0069c839: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0069c83a: jmp 0x69c84e */ goto L_0069c84e;
L_0069c83c:; BB(0x0069c83c);
    /* 0069c83c: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 0069c840: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069c843: je 0x69c84c */ if (fZ) goto L_0069c84c;
L_0069c845:; BB(0x0069c845);
    /* 0069c845: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069c846: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0069c848: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0069c84a: jmp 0x69c84e */ goto L_0069c84e;
L_0069c84c:; BB(0x0069c84c);
    /* 0069c84c: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
L_0069c84e:; BB(0x0069c84e);
    /* 0069c84e: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069c850: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0069c854: mov dword ptr [esi + eax*4], ecx */ W32((u32)(r_esi+r_eax*4), r_ecx);
    /* 0069c857: mov ecx, dword ptr [ebp + 0xfc] */ r_ecx = R32((u32)(r_ebp+0xfcu));
    /* 0069c85d: mov edx, dword ptr [esi + ecx*4] */ r_edx = R32((u32)(r_esi+r_ecx*4));
    /* 0069c860: lea eax, [esi + ecx*4] */ r_eax = (u32)(r_esi+r_ecx*4);
    /* 0069c863: and edx, 0x7fff */ {  u32 a = r_edx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0069c869: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0069c86b: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0069c86e: mov ecx, dword ptr [esi + edx*4] */ r_ecx = R32((u32)(r_esi+r_edx*4));
    /* 0069c871: lea eax, [esi + edx*4] */ r_eax = (u32)(r_esi+r_edx*4);
    /* 0069c874: and ecx, 0x7fff */ {  u32 a = r_ecx; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0069c87a: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0069c87c: jmp 0x69c888 */ goto L_0069c888;
L_0069c87e:; BB(0x0069c87e);
    /* 0069c87e: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 0069c882: or ah, 0x80 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x80u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0069c885: mov dword ptr [esi + ecx*4], eax */ W32((u32)(r_esi+r_ecx*4), r_eax);
L_0069c888:; BB(0x0069c888);
    /* 0069c888: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0069c88c: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0069c890: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069c893: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069c894: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0069c898: mov ecx, dword ptr [ebx + 0x504] */ r_ecx = R32((u32)(r_ebx+0x504u));
    /* 0069c89e: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069c8a1: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c8a3: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0069c8a7: jl 0x69c7ca */ if ((fS!=fO)) goto L_0069c7ca;
L_0069c8ad:; BB(0x0069c8ad);
    /* 0069c8ad: mov eax, esi */ r_eax = r_esi;
    /* 0069c8af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c8b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c8b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069c8b2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069c8b3: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069c8b6: ret  */ FN_RET(0x0069c5f0); r_esp += 4; return;
L_0069c8b7:; BB(0x0069c8b7);
    /* 0069c8b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c8b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c8b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069c8ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c8bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069c8bd: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069c8c0: ret  */ FN_RET(0x0069c5f0); r_esp += 4; return;
}

void f_0069c8d0(void) /* sub_69C8D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069c8d0);
    /* 0069c8d0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069c8d3: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0069c8d7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c8d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069c8d9: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0069c8dd: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0069c8e0: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 0069c8e3: mov ebx, dword ptr [esi + 0x510] */ r_ebx = R32((u32)(r_esi+0x510u));
    /* 0069c8e9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069c8ea: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0069c8ed: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0069c8f0: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 0069c8f3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069c8f4: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069c8f6: mov edx, eax */ r_edx = r_eax;
    /* 0069c8f8: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0069c8fc: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0069c8fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c900: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0069c904: je 0x69c9c1 */ if (fZ) goto L_0069c9c1;
L_0069c90a:; BB(0x0069c90a);
    /* 0069c90a: mov ecx, dword ptr [ebx + 0x340] */ r_ecx = R32((u32)(r_ebx+0x340u));
    /* 0069c910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069c911: imul ecx, dword ptr [eax] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_eax)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069c914: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0069c916: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0069c918: cmp dword ptr [esi + 0x504], 1 */ {  u32 a = R32((u32)(r_esi+0x504u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c91f: mov dword ptr [esp + 0x10], 1 */ W32((u32)(r_esp+0x10u), 0x1u);
    /* 0069c927: jle 0x69c996 */ if ((fZ||fS!=fO)) goto L_0069c996;
L_0069c929:; BB(0x0069c929);
    /* 0069c929: add esi, 0x108 */ {  u32 a = r_esi; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069c92f: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0069c933: jmp 0x69c939 */ goto L_0069c939;
L_0069c935:; BB(0x0069c935);
    /* 0069c935: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
L_0069c939:; BB(0x0069c939);
    /* 0069c939: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0069c93d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0069c93f: mov esi, dword ptr [eax + edx*4] */ r_esi = R32((u32)(r_eax+r_edx*4));
    /* 0069c942: mov eax, esi */ r_eax = r_esi;
    /* 0069c944: and eax, 0x7fff */ {  u32 a = r_eax; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069c949: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069c94b: jne 0x69c972 */ if (!fZ) goto L_0069c972;
L_0069c94d:; BB(0x0069c94d);
    /* 0069c94d: mov esi, dword ptr [ebx + 0x340] */ r_esi = R32((u32)(r_ebx+0x340u));
    /* 0069c953: mov edi, dword ptr [ebx + edx*4 + 0x344] */ r_edi = R32((u32)(r_ebx+r_edx*4+0x344u));
    /* 0069c95a: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069c95d: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0069c961: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069c962: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069c963: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c964: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069c965: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069c966: call 0x69c9e0 */ r_esp -= 4; W32(r_esp, 0x69c96bu); f_0069c9e0();
    /* 0069c96b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069c96e: mov ebp, edi */ r_ebp = r_edi;
    /* 0069c970: mov ecx, esi */ r_ecx = r_esi;
L_0069c972:; BB(0x0069c972);
    /* 0069c972: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0069c976: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0069c97a: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069c97d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069c97e: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0069c982: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0069c986: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0069c98a: cmp eax, dword ptr [edx + 0x504] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x504u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c990: jl 0x69c935 */ if ((fS!=fO)) goto L_0069c935;
L_0069c992:; BB(0x0069c992);
    /* 0069c992: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
L_0069c996:; BB(0x0069c996);
    /* 0069c996: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c998: mov eax, edi */ r_eax = r_edi;
    /* 0069c99a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069c99b: jge 0x69c9b5 */ if ((fS==fO)) goto L_0069c9b5;
L_0069c99d:; BB(0x0069c99d);
    /* 0069c99d: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 0069c9a1: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069c9a2: fld dword ptr [ecx*4 + 0x78f930] */ FPUSH(R_F32((u32)(r_ecx*4+0x78f930u)));
    /* 0069c9a9: fmul dword ptr [esi + eax*4 - 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_eax*4+0xfffffffcu));
    /* 0069c9ad: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069c9af: fstp dword ptr [esi + eax*4 - 4] */ W_F32((u32)(r_esi+r_eax*4+0xfffffffcu), ST(0)); FPOP();
    /* 0069c9b3: jl 0x69c99d */ if ((fS!=fO)) goto L_0069c99d;
L_0069c9b5:; BB(0x0069c9b5);
    /* 0069c9b5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c9b6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c9b7: mov eax, 1 */ r_eax = 0x1u;
    /* 0069c9bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069c9bd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069c9c0: ret  */ FN_RET(0x0069c8d0); r_esp += 4; return;
L_0069c9c1:; BB(0x0069c9c1);
    /* 0069c9c1: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 0069c9c5: mov ecx, edx */ r_ecx = r_edx;
    /* 0069c9c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069c9c9: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0069c9cb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069c9cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069c9cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069c9ce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069c9d1: ret  */ FN_RET(0x0069c8d0); r_esp += 4; return;
}

void f_0069c9e0(void) /* sub_69C9E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069c9e0);
    /* 0069c9e0: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0069c9e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069c9e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069c9e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069c9e7: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0069c9eb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069c9ec: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0069c9ee: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0069c9f2: mov eax, ecx */ r_eax = r_ecx;
    /* 0069c9f4: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0069c9f8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069c9f9: mov ebx, eax */ r_ebx = r_eax;
    /* 0069c9fb: mov eax, ecx */ r_eax = r_ecx;
    /* 0069c9fd: xor ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0069c9ff: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0069ca01: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0069ca03: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069ca04: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0069ca04, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0069ca04, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0069ca06: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069ca08: mov ebp, eax */ r_ebp = r_eax;
    /* 0069ca0a: jge 0x69ca15 */ if ((fS==fO)) goto L_0069ca15;
L_0069ca0c:; BB(0x0069ca0c);
    /* 0069ca0c: lea eax, [ebp - 1] */ r_eax = (u32)(r_ebp+0xffffffffu);
    /* 0069ca0f: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0069ca13: jmp 0x69ca1c */ goto L_0069ca1c;
L_0069ca15:; BB(0x0069ca15);
    /* 0069ca15: lea ecx, [ebp + 1] */ r_ecx = (u32)(r_ebp+0x1u);
    /* 0069ca18: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
L_0069ca1c:; BB(0x0069ca1c);
    /* 0069ca1c: mov eax, ebp */ r_eax = r_ebp;
    /* 0069ca1e: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0069ca22: imul eax, esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069ca25: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069ca26: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ca28: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 0069ca30: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069ca32: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0069ca36: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0069ca38: lea eax, [edi + 1] */ r_eax = (u32)(r_edi+0x1u);
    /* 0069ca3b: fld dword ptr [edx*4 + 0x78f930] */ FPUSH(R_F32((u32)(r_edx*4+0x78f930u)));
    /* 0069ca42: fmul dword ptr [ecx + edi*4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+r_edi*4));
    /* 0069ca45: lea edx, [edx*4 + 0x78f930] */ r_edx = (u32)(r_edx*4+0x78f930u);
    /* 0069ca4c: fstp dword ptr [ecx + edi*4] */ W_F32((u32)(r_ecx+r_edi*4), ST(0)); FPOP();
    /* 0069ca4f: cmp eax, dword ptr [esp + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069ca53: jge 0x69ca95 */ if ((fS==fO)) goto L_0069ca95;
L_0069ca55:; BB(0x0069ca55);
    /* 0069ca55: lea edi, [ebp*4] */ r_edi = (u32)(r_ebp*4);
    /* 0069ca5c: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 0069ca60: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0069ca64: shl edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
L_0069ca67:; BB(0x0069ca67);
    /* 0069ca67: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0069ca6b: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069ca6d: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069ca6f: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0069ca73: jl 0x69ca7f */ if ((fS!=fO)) goto L_0069ca7f;
L_0069ca75:; BB(0x0069ca75);
    /* 0069ca75: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0069ca77: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069ca79: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0069ca7d: jmp 0x69ca83 */ goto L_0069ca83;
L_0069ca7f:; BB(0x0069ca7f);
    /* 0069ca7f: add edx, dword ptr [esp + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0069ca83:; BB(0x0069ca83);
    /* 0069ca83: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0069ca85: fmul dword ptr [ecx + eax*4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+r_eax*4));
    /* 0069ca88: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0069ca8c: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069ca8d: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069ca8f: fstp dword ptr [ecx + eax*4 - 4] */ W_F32((u32)(r_ecx+r_eax*4+0xfffffffcu), ST(0)); FPOP();
    /* 0069ca93: jl 0x69ca67 */ if ((fS!=fO)) goto L_0069ca67;
L_0069ca95:; BB(0x0069ca95);
    /* 0069ca95: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069ca96: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069ca97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069ca98: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069ca99: ret  */ FN_RET(0x0069c9e0); r_esp += 4; return;
}

void f_0069caa0(void) /* sub_69CAA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069caa0);
    /* 0069caa0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0069caa4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069caa6: je 0x69cabe */ if (fZ) goto L_0069cabe;
L_0069caa8:; BB(0x0069caa8);
    /* 0069caa8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069caa9: mov ecx, 0x18 */ r_ecx = 0x18u;
    /* 0069caae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069cab0: mov edi, edx */ r_edi = r_edx;
    /* 0069cab2: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0069cab4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069cab5: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0069cab9: jmp 0x687300 */ f_00687300(); return;
L_0069cabe:; BB(0x0069cabe);
    /* 0069cabe: ret  */ FN_RET(0x0069caa0); r_esp += 4; return;
}

void f_0069cac0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069cac0);
    /* 0069cac0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069cac1: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0069cac5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069cac7: je 0x69cb14 */ if (fZ) goto L_0069cb14;
L_0069cac9:; BB(0x0069cac9);
    /* 0069cac9: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0069cacc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069cace: je 0x69cafe */ if (fZ) goto L_0069cafe;
L_0069cad0:; BB(0x0069cad0);
    /* 0069cad0: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0069cad2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069cad4: je 0x69cadf */ if (fZ) goto L_0069cadf;
L_0069cad6:; BB(0x0069cad6);
    /* 0069cad6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069cad7: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x69cadcu); f_00687300();
    /* 0069cadc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0069cadf:; BB(0x0069cadf);
    /* 0069cadf: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0069cae2: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0069cae5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069cae7: je 0x69caf2 */ if (fZ) goto L_0069caf2;
L_0069cae9:; BB(0x0069cae9);
    /* 0069cae9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069caea: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x69caefu); f_00687300();
    /* 0069caef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0069caf2:; BB(0x0069caf2);
    /* 0069caf2: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 0069caf5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069caf6: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x69cafbu); f_00687300();
    /* 0069cafb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0069cafe:; BB(0x0069cafe);
    /* 0069cafe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069caff: mov ecx, 8 */ r_ecx = 0x8u;
    /* 0069cb04: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069cb06: mov edi, esi */ r_edi = r_esi;
    /* 0069cb08: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0069cb0a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069cb0b: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x69cb10u); f_00687300();
    /* 0069cb10: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069cb13: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_0069cb14:; BB(0x0069cb14);
    /* 0069cb14: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069cb15: ret  */ FN_RET(0x0069cac0); r_esp += 4; return;
}

void f_0069cb20(void) /* sub_69CB20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069cb20);
    /* 0069cb20: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0069cb24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069cb25: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069cb26: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069cb27: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0069cb2a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069cb2b: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0069cb2d: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0069cb31: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x69cb36u); f_006872fa();
    /* 0069cb36: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0069cb3a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0069cb3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069cb3d: mov esi, eax */ r_esi = r_eax;
    /* 0069cb3f: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x69cb44u); f_0069d470();
    /* 0069cb44: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0069cb46: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069cb47: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0069cb49: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x69cb4eu); f_0069d470();
    /* 0069cb4e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0069cb50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069cb51: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0069cb54: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x69cb59u); f_0069d470();
    /* 0069cb59: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0069cb5b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069cb5c: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 0069cb5f: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x69cb64u); f_0069d470();
    /* 0069cb64: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0069cb66: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069cb67: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 0069cb6a: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x69cb6fu); f_0069d470();
    /* 0069cb6f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0069cb71: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069cb72: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 0069cb75: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x69cb7au); f_0069d470();
    /* 0069cb7a: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0069cb7c: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069cb7f: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0069cb84: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069cb85: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069cb87: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 0069cb8a: jl 0x69cbcf */ if ((fS!=fO)) goto L_0069cbcf;
L_0069cb8c:; BB(0x0069cb8c);
    /* 0069cb8c: cmp dword ptr [esi + 4], ecx */ {  u32 a = R32((u32)(r_esi+0x4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069cb8f: jl 0x69cbcf */ if ((fS!=fO)) goto L_0069cbcf;
L_0069cb91:; BB(0x0069cb91);
    /* 0069cb91: cmp dword ptr [esi + 8], ecx */ {  u32 a = R32((u32)(r_esi+0x8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069cb94: jl 0x69cbcf */ if ((fS!=fO)) goto L_0069cbcf;
L_0069cb96:; BB(0x0069cb96);
    /* 0069cb96: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069cb98: jl 0x69cbcf */ if ((fS!=fO)) goto L_0069cbcf;
L_0069cb9a:; BB(0x0069cb9a);
    /* 0069cb9a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0069cb9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069cb9e: jle 0x69cbc8 */ if ((fZ||fS!=fO)) goto L_0069cbc8;
L_0069cba0:; BB(0x0069cba0);
    /* 0069cba0: lea ebx, [esi + 0x18] */ r_ebx = (u32)(r_esi+0x18u);
L_0069cba3:; BB(0x0069cba3);
    /* 0069cba3: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0069cba5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069cba6: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x69cbabu); f_0069d470();
    /* 0069cbab: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069cbae: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0069cbb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069cbb2: jl 0x69cbcf */ if ((fS!=fO)) goto L_0069cbcf;
L_0069cbb4:; BB(0x0069cbb4);
    /* 0069cbb4: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0069cbb8: cmp eax, dword ptr [edx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x18u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069cbbb: jge 0x69cbcf */ if ((fS==fO)) goto L_0069cbcf;
L_0069cbbd:; BB(0x0069cbbd);
    /* 0069cbbd: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 0069cbc0: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069cbc1: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069cbc4: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069cbc6: jl 0x69cba3 */ if ((fS!=fO)) goto L_0069cba3;
L_0069cbc8:; BB(0x0069cbc8);
    /* 0069cbc8: mov eax, esi */ r_eax = r_esi;
    /* 0069cbca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069cbcb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069cbcc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069cbcd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069cbce: ret  */ FN_RET(0x0069cb20); r_esp += 4; return;
L_0069cbcf:; BB(0x0069cbcf);
    /* 0069cbcf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069cbd0: call 0x69caa0 */ r_esp -= 4; W32(r_esp, 0x69cbd5u); f_0069caa0();
    /* 0069cbd5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069cbd8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069cbda: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069cbdb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069cbdc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069cbdd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069cbde: ret  */ FN_RET(0x0069cb20); r_esp += 4; return;
}

void f_0069cbe0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069cbe0);
    /* 0069cbe0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069cbe1: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0069cbe3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069cbe5: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x69cbeau); f_0068738e();
    /* 0069cbea: mov esi, eax */ r_esi = r_eax;
    /* 0069cbec: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0069cbf0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0069cbf2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0069cbf4: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0069cbf6: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 0069cbf9: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0069cbfc: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 0069cbfe: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 0069cc01: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x69cc06u); f_0068738e();
    /* 0069cc06: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069cc09: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 0069cc0c: mov eax, esi */ r_eax = r_esi;
    /* 0069cc0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069cc0f: ret  */ FN_RET(0x0069cbe0); r_esp += 4; return;
}

void f_0069cc10(void) /* sub_69CC10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069cc10);
    /* 0069cc10: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069cc11: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069cc12: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0069cc16: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069cc17: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0069cc1b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069cc1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069cc1d: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 0069cc20: lea edi, [ebx + 4] */ r_edi = (u32)(r_ebx+0x4u);
    /* 0069cc23: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0069cc27: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0069cc2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069cc2b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069cc2c: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x69cc31u); f_0069d470();
    /* 0069cc31: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069cc34: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0069cc38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0069cc3a: jle 0x69cd35 */ if ((fZ||fS!=fO)) goto L_0069cd35;
L_0069cc40:; BB(0x0069cc40);
    /* 0069cc40: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 0069cc43: mov edx, 1 */ r_edx = 0x1u;
    /* 0069cc48: fild dword ptr [esp + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x1cu)));
    /* 0069cc4c: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0069cc4e: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 0069cc51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069cc52: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069cc53: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0069cc57: fidiv dword ptr [esp + 0x20] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_esp+0x20u));
    /* 0069cc5b: fimul dword ptr [esi + 0x10] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_esi+0x10u));
    /* 0069cc5e: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0069cc62: call 0x699aa0 */ r_esp -= 4; W32(r_esp, 0x69cc67u); f_00699aa0();
    /* 0069cc67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069cc68: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069cc69: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x69cc6eu); f_0069d470();
    /* 0069cc6e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069cc71: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069cc74: je 0x69cd35 */ if (fZ) goto L_0069cd35;
L_0069cc7a:; BB(0x0069cc7a);
    /* 0069cc7a: cmp eax, dword ptr [esi + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x14u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069cc7d: jge 0x69cd35 */ if ((fS==fO)) goto L_0069cd35;
L_0069cc83:; BB(0x0069cc83);
    /* 0069cc83: mov eax, dword ptr [esi + eax*4 + 0x18] */ r_eax = R32((u32)(r_esi+r_eax*4+0x18u));
    /* 0069cc87: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 0069cc8f: lea ecx, [eax + eax*4] */ r_ecx = (u32)(r_eax+r_eax*4);
    /* 0069cc92: lea edx, [eax + ecx*2] */ r_edx = (u32)(r_eax+r_ecx*2);
    /* 0069cc95: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0069cc98: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0069cc9b: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0069cc9e: mov ecx, dword ptr [eax + 0xb20] */ r_ecx = R32((u32)(r_eax+0xb20u));
    /* 0069cca4: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 0069cca7: lea edi, [ecx + edx*4] */ r_edi = (u32)(r_ecx+r_edx*4);
    /* 0069ccaa: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 0069ccad: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069ccaf: lea eax, [edx*4 + 4] */ r_eax = (u32)(r_edx*4+0x4u);
    /* 0069ccb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ccb7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069ccb8: call 0x690e40 */ r_esp -= 4; W32(r_esp, 0x69ccbdu); f_00690e40();
    /* 0069ccbd: mov esi, eax */ r_esi = r_eax;
    /* 0069ccbf: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 0069ccc2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069ccc5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0069ccc7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069ccc9: jle 0x69ccf0 */ if ((fZ||fS!=fO)) goto L_0069ccf0;
L_0069cccb:; BB(0x0069cccb);
    /* 0069cccb: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0069cccd: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0069ccd1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069ccd2: lea eax, [esi + ebx*4] */ r_eax = (u32)(r_esi+r_ebx*4);
    /* 0069ccd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069ccd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ccd7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069ccd8: call 0x695a00 */ r_esp -= 4; W32(r_esp, 0x69ccddu); f_00695a00();
    /* 0069ccdd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069cce0: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069cce3: je 0x69cd35 */ if (fZ) goto L_0069cd35;
L_0069cce5:; BB(0x0069cce5);
    /* 0069cce5: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0069cce7: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 0069ccea: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069ccec: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069ccee: jl 0x69cccb */ if ((fS!=fO)) goto L_0069cccb;
L_0069ccf0:; BB(0x0069ccf0);
    /* 0069ccf0: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0069ccf3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069ccf5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069ccf7: jle 0x69cd23 */ if ((fZ||fS!=fO)) goto L_0069cd23;
L_0069ccf9:; BB(0x0069ccf9);
    /* 0069ccf9: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
L_0069ccfb:; BB(0x0069ccfb);
    /* 0069ccfb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069ccfd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069ccff: jle 0x69cd14 */ if ((fZ||fS!=fO)) goto L_0069cd14;
L_0069cd01:; BB(0x0069cd01);
    /* 0069cd01: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0069cd05: fadd dword ptr [esi + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+r_eax*4));
    /* 0069cd08: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069cd09: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069cd0a: fstp dword ptr [esi + eax*4 - 4] */ W_F32((u32)(r_esi+r_eax*4+0xfffffffcu), ST(0)); FPOP();
    /* 0069cd0e: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0069cd10: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069cd12: jl 0x69cd01 */ if ((fS!=fO)) goto L_0069cd01;
L_0069cd14:; BB(0x0069cd14);
    /* 0069cd14: fld dword ptr [esi + eax*4 - 4] */ FPUSH(R_F32((u32)(r_esi+r_eax*4+0xfffffffcu)));
    /* 0069cd18: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0069cd1b: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0069cd1f: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069cd21: jl 0x69ccfb */ if ((fS!=fO)) goto L_0069ccfb;
L_0069cd23:; BB(0x0069cd23);
    /* 0069cd23: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0069cd26: mov eax, esi */ r_eax = r_esi;
    /* 0069cd28: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0069cd2c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069cd2d: fstp dword ptr [esi + ecx*4] */ W_F32((u32)(r_esi+r_ecx*4), ST(0)); FPOP();
    /* 0069cd30: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069cd31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069cd32: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069cd33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069cd34: ret  */ FN_RET(0x0069cc10); r_esp += 4; return;
L_0069cd35:; BB(0x0069cd35);
    /* 0069cd35: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069cd36: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069cd37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069cd38: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069cd3a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069cd3b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069cd3c: ret  */ FN_RET(0x0069cc10); r_esp += 4; return;
}

void f_0069cd40(void) /* sub_69CD40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069cd40);
    /* 0069cd40: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069cd41: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0069cd45: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069cd46: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0069cd4a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069cd4b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069cd4c: mov edi, dword ptr [esi + 0x14] */ r_edi = R32((u32)(r_esi+0x14u));
    /* 0069cd4f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069cd50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069cd51: call 0x69cdd0 */ r_esp -= 4; W32(r_esp, 0x69cd56u); f_0069cdd0();
    /* 0069cd56: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0069cd5a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069cd5d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069cd5f: je 0x69cd9e */ if (fZ) goto L_0069cd9e;
L_0069cd61:; BB(0x0069cd61);
    /* 0069cd61: fild dword ptr [edi + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x10u)));
    /* 0069cd64: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0069cd67: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069cd6a: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 0069cd6d: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0069cd71: fld dword ptr [edx + eax*4] */ FPUSH(R_F32((u32)(r_edx+r_eax*4)));
    /* 0069cd74: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0069cd77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069cd78: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0069cd7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069cd7b: mov edx, dword ptr [esi + ecx*4 + 0xc] */ r_edx = R32((u32)(r_esi+r_ecx*4+0xcu));
    /* 0069cd7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069cd80: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0069cd83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069cd84: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0069cd88: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0069cd8b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069cd8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069cd8d: call 0x69cf30 */ r_esp -= 4; W32(r_esp, 0x69cd92u); f_0069cf30();
    /* 0069cd92: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069cd95: mov eax, 1 */ r_eax = 0x1u;
    /* 0069cd9a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069cd9b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069cd9c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069cd9d: ret  */ FN_RET(0x0069cd40); r_esp += 4; return;
L_0069cd9e:; BB(0x0069cd9e);
    /* 0069cd9e: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0069cda1: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0069cda5: mov ecx, dword ptr [esi + eax*4 + 0xc] */ r_ecx = R32((u32)(r_esi+r_eax*4+0xcu));
    /* 0069cda9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069cdab: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0069cdae: mov edx, ecx */ r_edx = r_ecx;
    /* 0069cdb0: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0069cdb3: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0069cdb5: mov ecx, edx */ r_ecx = r_edx;
    /* 0069cdb7: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0069cdba: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0069cdbc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069cdbd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069cdbe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069cdc0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069cdc1: ret  */ FN_RET(0x0069cd40); r_esp += 4; return;
}

void f_0069cdd0(void) /* sub_69CDD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069cdd0);
    /* 0069cdd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069cdd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0069cdd3: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0069cdd6: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069cdd9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0069cddc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069cddd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069cdde: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069cddf: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 0069cde2: mov ebx, dword ptr [eax + 0x1c] */ r_ebx = R32((u32)(r_eax+0x1cu));
    /* 0069cde5: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 0069cde9: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0069cdec: cmp dword ptr [ecx + ebx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_ebx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069cdf0: jne 0x69cf25 */ if (!fZ) goto L_0069cf25;
L_0069cdf6:; BB(0x0069cdf6);
    /* 0069cdf6: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0069cdf9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0069cdfc: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0069cdff: mov eax, dword ptr [ecx + ebx*4] */ r_eax = R32((u32)(r_ecx+r_ebx*4));
    /* 0069ce02: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069ce03: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069ce05: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0069ce08: mov esi, eax */ r_esi = r_eax;
    /* 0069ce0a: fild dword ptr [edx + 4] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4u)));
    /* 0069ce0d: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0069ce0f: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0069ce13: fmul dword ptr [0x6b3654] */ ST(0) = ST(0) * R_F32((u32)(0x6b3654u));
    /* 0069ce19: lea eax, [esi*4 + 4] */ r_eax = (u32)(r_esi*4+0x4u);
    /* 0069ce20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069ce21: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0069ce23: fild dword ptr [edi] */ FPUSH((long double)(i32)R32((u32)(r_edi)));
    /* 0069ce25: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0069ce27: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0069ce29: fmul dword ptr [0x6e5754] */ ST(0) = ST(0) * R_F32((u32)(0x6e5754u));
    /* 0069ce2f: fld1  */ FPUSH(1.0);
    /* 0069ce31: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0069ce33: fmul qword ptr [0x6e5738] */ ST(0) = ST(0) * R_F64((u32)(0x6e5738u));
    /* 0069ce39: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0069ce3b: fmul dword ptr [0x6e5750] */ ST(0) = ST(0) * R_F32((u32)(0x6e5750u));
    /* 0069ce41: fld1  */ FPUSH(1.0);
    /* 0069ce43: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0069ce45: fmul qword ptr [0x6e5730] */ ST(0) = ST(0) * R_F64((u32)(0x6e5730u));
    /* 0069ce4b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0069ce4d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0069ce4f: fmul dword ptr [0x6e574c] */ ST(0) = ST(0) * R_F32((u32)(0x6e574cu));
    /* 0069ce55: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0069ce57: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0069ce59: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 0069ce5b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069ce5d: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0069ce61: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069ce63: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x69ce68u); f_006872fa();
    /* 0069ce68: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0069ce6b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069ce6e: mov dword ptr [ecx + ebx*4], eax */ W32((u32)(r_ecx+r_ebx*4), r_eax);
    /* 0069ce71: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0069ce73: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069ce75: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0069ce79: jle 0x69cf10 */ if ((fZ||fS!=fO)) goto L_0069cf10;
L_0069ce7f:; BB(0x0069ce7f);
    /* 0069ce7f: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0069ce83: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
L_0069ce87:; BB(0x0069ce87);
    /* 0069ce87: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0069ce8a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069ce8d: fild dword ptr [edx + 4] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4u)));
    /* 0069ce90: fmul dword ptr [0x6b3654] */ ST(0) = ST(0) * R_F32((u32)(0x6b3654u));
    /* 0069ce96: fdiv dword ptr [esp + 0x20] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x20u));
    /* 0069ce9a: fimul dword ptr [esp + 0x18] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_esp+0x18u));
    /* 0069ce9e: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0069cea0: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0069cea2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0069cea4: fmul dword ptr [0x6e5754] */ ST(0) = ST(0) * R_F32((u32)(0x6e5754u));
    /* 0069ceaa: fld1  */ FPUSH(1.0);
    /* 0069ceac: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0069ceae: fmul qword ptr [0x6e5738] */ ST(0) = ST(0) * R_F64((u32)(0x6e5738u));
    /* 0069ceb4: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0069ceb6: fmul dword ptr [0x6e5750] */ ST(0) = ST(0) * R_F32((u32)(0x6e5750u));
    /* 0069cebc: fld1  */ FPUSH(1.0);
    /* 0069cebe: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0069cec0: fmul qword ptr [0x6e5730] */ ST(0) = ST(0) * R_F64((u32)(0x6e5730u));
    /* 0069cec6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0069cec8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0069ceca: fmul dword ptr [0x6e574c] */ ST(0) = ST(0) * R_F32((u32)(0x6e574cu));
    /* 0069ced0: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0069ced2: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0069ced6: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0069ced8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069ceda: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0069cedd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069cedf: call 0x686fb4 */ r_esp -= 4; W32(r_esp, 0x69cee4u); f_00686fb4();
    /* 0069cee4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069cee7: call 0x687450 */ r_esp -= 4; W32(r_esp, 0x69ceecu); f_00687450();
    /* 0069ceec: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0069ceee: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069cef0: jl 0x69cef5 */ if ((fS!=fO)) goto L_0069cef5;
L_0069cef2:; BB(0x0069cef2);
    /* 0069cef2: lea eax, [ecx - 1] */ r_eax = (u32)(r_ecx+0xffffffffu);
L_0069cef5:; BB(0x0069cef5);
    /* 0069cef5: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0069cef8: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0069cefc: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069cefd: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 0069cf00: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069cf02: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0069cf06: mov dword ptr [ecx + ebx*4 - 4], eax */ W32((u32)(r_ecx+r_ebx*4+0xfffffffcu), r_eax);
    /* 0069cf0a: jl 0x69ce87 */ if ((fS!=fO)) goto L_0069ce87;
L_0069cf10:; BB(0x0069cf10);
    /* 0069cf10: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 0069cf13: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0069cf17: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0069cf1a: mov dword ptr [ecx + ebx*4], 0xffffffff */ W32((u32)(r_ecx+r_ebx*4), 0xffffffffu);
    /* 0069cf21: mov dword ptr [edi + eax*4 + 0xc], esi */ W32((u32)(r_edi+r_eax*4+0xcu), r_esi);
L_0069cf25:; BB(0x0069cf25);
    /* 0069cf25: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069cf26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069cf27: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069cf28: mov esp, ebp */ r_esp = r_ebp;
    /* 0069cf2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069cf2b: ret  */ FN_RET(0x0069cdd0); r_esp += 4; return;
}

void f_0069cf30(void) /* sub_69CF30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069cf30);
    /* 0069cf30: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069cf33: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 0069cf37: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069cf38: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0069cf3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069cf3d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0069cf3f: fdivr dword ptr [0x6e57d0] */ ST(0) = R_F32((u32)(0x6e57d0u)) / ST(0);
    /* 0069cf45: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069cf47: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069cf48: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0069cf4c: jle 0x69cf66 */ if ((fZ||fS!=fO)) goto L_0069cf66;
L_0069cf4e:; BB(0x0069cf4e);
    /* 0069cf4e: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0069cf52: mov eax, dword ptr [edi + esi*4] */ r_eax = R32((u32)(r_edi+r_esi*4));
    /* 0069cf55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069cf56: call 0x69d0b0 */ r_esp -= 4; W32(r_esp, 0x69cf5bu); f_0069d0b0();
    /* 0069cf5b: fstp dword ptr [edi + esi*4] */ W_F32((u32)(r_edi+r_esi*4), ST(0)); FPOP();
    /* 0069cf5e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069cf61: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069cf62: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069cf64: jl 0x69cf4e */ if ((fS!=fO)) goto L_0069cf4e;
L_0069cf66:; BB(0x0069cf66);
    /* 0069cf66: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0069cf6a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0069cf6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069cf6e: jle 0x69d0a4 */ if ((fZ||fS!=fO)) goto L_0069d0a4;
L_0069cf74:; BB(0x0069cf74);
    /* 0069cf74: mov eax, ebp */ r_eax = r_ebp;
    /* 0069cf76: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069cf77: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0069cf79: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 0069cf7d: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0069cf81: mov eax, ebp */ r_eax = r_ebp;
    /* 0069cf83: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069cf86: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0069cf8a: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0069cf8e: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
L_0069cf90:; BB(0x0069cf90);
    /* 0069cf90: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0069cf94: mov dword ptr [esp + 0x3c], 0x3f3504f3 */ W32((u32)(r_esp+0x3cu), 0x3f3504f3u);
    /* 0069cf9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069cf9d: mov dword ptr [esp + 0x14], 0x3f3504f3 */ W32((u32)(r_esp+0x14u), 0x3f3504f3u);
    /* 0069cfa5: mov edi, dword ptr [ecx + esi*4] */ r_edi = R32((u32)(r_ecx+r_esi*4));
    /* 0069cfa8: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 0069cfac: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 0069cfb0: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 0069cfb4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0069cfb7: call 0x69d0b0 */ r_esp -= 4; W32(r_esp, 0x69cfbcu); f_0069d0b0();
    /* 0069cfbc: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0069cfc0: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0069cfc4: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0069cfc8: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0069cfcc: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0069cfd0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0069cfd3:; BB(0x0069cfd3);
    /* 0069cfd3: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0069cfd5: fsub dword ptr [esp + 0x34] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x34u));
    /* 0069cfd9: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069cfdc: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0069cfdd: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0069cfdf: fld dword ptr [eax - 4] */ FPUSH(R_F32((u32)(r_eax+0xfffffffcu)));
    /* 0069cfe2: fsub dword ptr [esp + 0x34] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x34u));
    /* 0069cfe6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0069cfe8: jne 0x69cfd3 */ if (!fZ) goto L_0069cfd3;
L_0069cfea:; BB(0x0069cfea);
    /* 0069cfea: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0069cfee: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0069cff2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069cff4: je 0x69d012 */ if (fZ) goto L_0069d012;
L_0069cff6:; BB(0x0069cff6);
    /* 0069cff6: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0069cff8: fsub dword ptr [esp + 0x34] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x34u));
    /* 0069cffc: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0069cffe: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0069d000: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0069d002: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0069d006: fmul dword ptr [esp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x34u));
    /* 0069d00a: fsubr dword ptr [0x6b3650] */ ST(0) = R_F32((u32)(0x6b3650u)) - ST(0);
    /* 0069d010: jmp 0x69d02a */ goto L_0069d02a;
L_0069d012:; BB(0x0069d012);
    /* 0069d012: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0069d016: fadd dword ptr [0x6b3650] */ ST(0) = ST(0) + R_F32((u32)(0x6b3650u));
    /* 0069d01c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0069d01e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0069d020: fld dword ptr [0x6b3650] */ FPUSH(R_F32((u32)(0x6b3650u)));
    /* 0069d026: fsub dword ptr [esp + 0x34] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x34u));
L_0069d02a:; BB(0x0069d02a);
    /* 0069d02a: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 0069d02e: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 0069d032: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069d033: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0069d037: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069d039: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069d03c: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0069d03e: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0069d041: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069d043: call 0x69d57e */ r_esp -= 4; W32(r_esp, 0x69d048u); f_0069d57e();
    /* 0069d048: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0069d04c: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0069d050: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069d052: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d053: call 0x69d160 */ r_esp -= 4; W32(r_esp, 0x69d058u); f_0069d160();
    /* 0069d058: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0069d05c: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0069d060: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069d061: call 0x69d100 */ r_esp -= 4; W32(r_esp, 0x69d066u); f_0069d100();
    /* 0069d066: fmul dword ptr [esp + 0x48] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x48u));
    /* 0069d06a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069d06d: fmul dword ptr [esp + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x44u));
    /* 0069d071: fsub dword ptr [esp + 0x48] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x48u));
    /* 0069d075: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0069d078: call 0x69d170 */ r_esp -= 4; W32(r_esp, 0x69d07du); f_0069d170();
    /* 0069d07d: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0069d081: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069d084: lea eax, [edx + esi*4] */ r_eax = (u32)(r_edx+r_esi*4);
L_0069d087:; BB(0x0069d087);
    /* 0069d087: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0069d089: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 0069d08b: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069d08e: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069d08f: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
    /* 0069d092: cmp dword ptr [ebx + eax], edi */ {  u32 a = R32((u32)(r_ebx+r_eax)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d095: je 0x69d087 */ if (fZ) goto L_0069d087;
L_0069d097:; BB(0x0069d097);
    /* 0069d097: cmp esi, dword ptr [esp + 0x30] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x30u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069d09b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069d09d: jl 0x69cf90 */ if ((fS!=fO)) goto L_0069cf90;
L_0069d0a3:; BB(0x0069d0a3);
    /* 0069d0a3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0069d0a4:; BB(0x0069d0a4);
    /* 0069d0a4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069d0a5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d0a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069d0a7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069d0aa: ret  */ FN_RET(0x0069cf30); r_esp += 4; return;
}

