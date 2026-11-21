#include "protos.h"

void f_0059b080(void) /* sub_59B080 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059b080);
    /* 0059b080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059b081: mov ebp, esp */ r_ebp = r_esp;
    /* 0059b083: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059b086: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0059b089: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 0059b08e: movzx ecx, word ptr [eax + 0x120] */ r_ecx = (u32)R16((u32)(r_eax+0x120u));
    /* 0059b095: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059b098: jl 0x59b0b8 */ if ((fS!=fO)) goto L_0059b0b8;
L_0059b09a:; BB(0x0059b09a);
    /* 0059b09a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0059b09d: mov byte ptr [edx], 1 */ W8((u32)(r_edx), 0x1u);
    /* 0059b0a0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0059b0a3: mov byte ptr [eax], 1 */ W8((u32)(r_eax), 0x1u);
    /* 0059b0a6: push 0x6ced54 */ { u32 v = 0x6ced54u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b0ab: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x59b0b0u); f_00630f40();
    /* 0059b0b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059b0b3: jmp 0x59b393 */ goto L_0059b393;
L_0059b0b8:; BB(0x0059b0b8);
    /* 0059b0b8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b0ba: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059b0bd: imul ecx, ecx, 6 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x6u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059b0c0: mov edx, dword ptr [0x7935d0] */ r_edx = R32((u32)(0x7935d0u));
    /* 0059b0c6: lea eax, [edx + ecx + 0xc8] */ r_eax = (u32)(r_edx+r_ecx+0xc8u);
    /* 0059b0cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059b0ce: call 0x4639c0 */ r_esp -= 4; W32(r_esp, 0x59b0d3u); f_004639c0();
    /* 0059b0d3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059b0d6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059b0d9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b0db: je 0x59b0fb */ if (fZ) goto L_0059b0fb;
L_0059b0dd:; BB(0x0059b0dd);
    /* 0059b0dd: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0059b0e0: mov byte ptr [edx], 1 */ W8((u32)(r_edx), 0x1u);
    /* 0059b0e3: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0059b0e6: mov byte ptr [eax], 1 */ W8((u32)(r_eax), 0x1u);
    /* 0059b0e9: push 0x6ced34 */ { u32 v = 0x6ced34u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b0ee: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x59b0f3u); f_00630f40();
    /* 0059b0f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059b0f6: jmp 0x59b393 */ goto L_0059b393;
L_0059b0fb:; BB(0x0059b0fb);
    /* 0059b0fb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b0fd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059b100: imul ecx, ecx, 6 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x6u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059b103: mov edx, dword ptr [0x7935d0] */ r_edx = R32((u32)(0x7935d0u));
    /* 0059b109: lea eax, [edx + ecx + 0xc8] */ r_eax = (u32)(r_edx+r_ecx+0xc8u);
    /* 0059b110: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059b111: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0059b114: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059b115: call 0x641930 */ r_esp -= 4; W32(r_esp, 0x59b11au); f_00641930();
    /* 0059b11a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059b11d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b11f: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 0059b122: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059b123: call 0x641e20 */ r_esp -= 4; W32(r_esp, 0x59b128u); f_00641e20();
    /* 0059b128: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059b12b: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0059b12f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059b130: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x59b135u); f_00641280();
    /* 0059b135: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059b138: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0059b13b: mov cx, word ptr [ebp - 6] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffau))) & 0xffffu);
    /* 0059b13f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059b140: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x59b145u); f_00641280();
    /* 0059b145: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059b148: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0059b14b: mov edx, dword ptr [0x7935d0] */ r_edx = R32((u32)(0x7935d0u));
    /* 0059b151: movzx eax, word ptr [edx + 0x120] */ r_eax = (u32)R16((u32)(r_edx+0x120u));
    /* 0059b158: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059b15b: jl 0x59b19f */ if ((fS!=fO)) goto L_0059b19f;
L_0059b15d:; BB(0x0059b15d);
    /* 0059b15d: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059b163: movzx edx, word ptr [ecx + 0x120] */ r_edx = (u32)R16((u32)(r_ecx+0x120u));
    /* 0059b16a: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059b16d: jg 0x59b19f */ if ((!fZ&&fS==fO)) goto L_0059b19f;
L_0059b16f:; BB(0x0059b16f);
    /* 0059b16f: cmp dword ptr [ebp - 0xc], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059b173: jg 0x59b181 */ if ((!fZ&&fS==fO)) goto L_0059b181;
L_0059b175:; BB(0x0059b175);
    /* 0059b175: cmp dword ptr [ebp - 0xc], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b179: jne 0x59b19f */ if (!fZ) goto L_0059b19f;
L_0059b17b:; BB(0x0059b17b);
    /* 0059b17b: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059b17f: jl 0x59b19f */ if ((fS!=fO)) goto L_0059b19f;
L_0059b181:; BB(0x0059b181);
    /* 0059b181: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0059b184: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 0059b187: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0059b18a: mov byte ptr [ecx], 1 */ W8((u32)(r_ecx), 0x1u);
    /* 0059b18d: push 0x6ced18 */ { u32 v = 0x6ced18u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b192: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x59b197u); f_00630f40();
    /* 0059b197: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059b19a: jmp 0x59b393 */ goto L_0059b393;
L_0059b19f:; BB(0x0059b19f);
    /* 0059b19f: mov edx, dword ptr [0x7935d0] */ r_edx = R32((u32)(0x7935d0u));
    /* 0059b1a5: movzx eax, word ptr [edx + 0x120] */ r_eax = (u32)R16((u32)(r_edx+0x120u));
    /* 0059b1ac: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b1af: jne 0x59b1e1 */ if (!fZ) goto L_0059b1e1;
L_0059b1b1:; BB(0x0059b1b1);
    /* 0059b1b1: cmp dword ptr [ebp - 0xc], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059b1b5: jg 0x59b1c3 */ if ((!fZ&&fS==fO)) goto L_0059b1c3;
L_0059b1b7:; BB(0x0059b1b7);
    /* 0059b1b7: cmp dword ptr [ebp - 0xc], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b1bb: jne 0x59b1e1 */ if (!fZ) goto L_0059b1e1;
L_0059b1bd:; BB(0x0059b1bd);
    /* 0059b1bd: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059b1c1: jl 0x59b1e1 */ if ((fS!=fO)) goto L_0059b1e1;
L_0059b1c3:; BB(0x0059b1c3);
    /* 0059b1c3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0059b1c6: mov byte ptr [ecx], 0 */ W8((u32)(r_ecx), 0x0u);
    /* 0059b1c9: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0059b1cc: mov byte ptr [edx], 1 */ W8((u32)(r_edx), 0x1u);
    /* 0059b1cf: push 0x6cecfc */ { u32 v = 0x6cecfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0059b1d4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x59b1d9u); f_00630f40();
    /* 0059b1d9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059b1dc: jmp 0x59b393 */ goto L_0059b393;
L_0059b1e1:; BB(0x0059b1e1);
    /* 0059b1e1: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 0059b1e6: movzx ecx, word ptr [eax + 0x120] */ r_ecx = (u32)R16((u32)(r_eax+0x120u));
    /* 0059b1ed: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b1f0: jne 0x59b24e */ if (!fZ) goto L_0059b24e;
L_0059b1f2:; BB(0x0059b1f2);
    /* 0059b1f2: cmp dword ptr [ebp - 0xc], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059b1f6: jg 0x59b204 */ if ((!fZ&&fS==fO)) goto L_0059b204;
L_0059b1f8:; BB(0x0059b1f8);
    /* 0059b1f8: cmp dword ptr [ebp - 0xc], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b1fc: jne 0x59b24e */ if (!fZ) goto L_0059b24e;
L_0059b1fe:; BB(0x0059b1fe);
    /* 0059b1fe: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059b202: jl 0x59b24e */ if ((fS!=fO)) goto L_0059b24e;
L_0059b204:; BB(0x0059b204);
    /* 0059b204: cmp dword ptr [ebp - 0xc], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b208: je 0x59b230 */ if (fZ) goto L_0059b230;
L_0059b20a:; BB(0x0059b20a);
    /* 0059b20a: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b20e: je 0x59b230 */ if (fZ) goto L_0059b230;
L_0059b210:; BB(0x0059b210);
    /* 0059b210: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0059b213: mov byte ptr [edx], 0 */ W8((u32)(r_edx), 0x0u);
    /* 0059b216: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0059b219: mov byte ptr [eax], 1 */ W8((u32)(r_eax), 0x1u);
    /* 0059b21c: push 0x6cece0 */ { u32 v = 0x6cece0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b221: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x59b226u); f_00630f40();
    /* 0059b226: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059b229: jmp 0x59b393 */ goto L_0059b393;
L_0059b230:; BB(0x0059b230);
    /* 0059b230: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0059b233: mov byte ptr [ecx], 1 */ W8((u32)(r_ecx), 0x1u);
    /* 0059b236: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0059b239: mov byte ptr [edx], 0 */ W8((u32)(r_edx), 0x0u);
    /* 0059b23c: push 0x6cecb8 */ { u32 v = 0x6cecb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b241: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x59b246u); f_00630f40();
    /* 0059b246: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059b249: jmp 0x59b393 */ goto L_0059b393;
L_0059b24e:; BB(0x0059b24e);
    /* 0059b24e: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 0059b253: movzx ecx, word ptr [eax + 0x120] */ r_ecx = (u32)R16((u32)(r_eax+0x120u));
    /* 0059b25a: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b25d: jne 0x59b2bb */ if (!fZ) goto L_0059b2bb;
L_0059b25f:; BB(0x0059b25f);
    /* 0059b25f: cmp dword ptr [ebp - 0xc], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059b263: jg 0x59b271 */ if ((!fZ&&fS==fO)) goto L_0059b271;
L_0059b265:; BB(0x0059b265);
    /* 0059b265: cmp dword ptr [ebp - 0xc], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b269: jne 0x59b2bb */ if (!fZ) goto L_0059b2bb;
L_0059b26b:; BB(0x0059b26b);
    /* 0059b26b: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059b26f: jl 0x59b2bb */ if ((fS!=fO)) goto L_0059b2bb;
L_0059b271:; BB(0x0059b271);
    /* 0059b271: cmp dword ptr [ebp - 0xc], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b275: je 0x59b29d */ if (fZ) goto L_0059b29d;
L_0059b277:; BB(0x0059b277);
    /* 0059b277: cmp dword ptr [ebp - 4], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b27b: je 0x59b29d */ if (fZ) goto L_0059b29d;
L_0059b27d:; BB(0x0059b27d);
    /* 0059b27d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0059b280: mov byte ptr [edx], 0 */ W8((u32)(r_edx), 0x0u);
    /* 0059b283: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0059b286: mov byte ptr [eax], 1 */ W8((u32)(r_eax), 0x1u);
    /* 0059b289: push 0x6cec9c */ { u32 v = 0x6cec9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0059b28e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x59b293u); f_00630f40();
    /* 0059b293: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059b296: jmp 0x59b393 */ goto L_0059b393;
L_0059b29d:; BB(0x0059b29d);
    /* 0059b29d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0059b2a0: mov byte ptr [ecx], 1 */ W8((u32)(r_ecx), 0x1u);
    /* 0059b2a3: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0059b2a6: mov byte ptr [edx], 0 */ W8((u32)(r_edx), 0x0u);
    /* 0059b2a9: push 0x6cec74 */ { u32 v = 0x6cec74u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b2ae: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x59b2b3u); f_00630f40();
    /* 0059b2b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059b2b6: jmp 0x59b393 */ goto L_0059b393;
L_0059b2bb:; BB(0x0059b2bb);
    /* 0059b2bb: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 0059b2c0: movzx ecx, word ptr [eax + 0x120] */ r_ecx = (u32)R16((u32)(r_eax+0x120u));
    /* 0059b2c7: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b2ca: jne 0x59b2fc */ if (!fZ) goto L_0059b2fc;
L_0059b2cc:; BB(0x0059b2cc);
    /* 0059b2cc: cmp dword ptr [ebp - 0xc], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059b2d0: jg 0x59b2de */ if ((!fZ&&fS==fO)) goto L_0059b2de;
L_0059b2d2:; BB(0x0059b2d2);
    /* 0059b2d2: cmp dword ptr [ebp - 0xc], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b2d6: jne 0x59b2fc */ if (!fZ) goto L_0059b2fc;
L_0059b2d8:; BB(0x0059b2d8);
    /* 0059b2d8: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059b2dc: jl 0x59b2fc */ if ((fS!=fO)) goto L_0059b2fc;
L_0059b2de:; BB(0x0059b2de);
    /* 0059b2de: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0059b2e1: mov byte ptr [edx], 0 */ W8((u32)(r_edx), 0x0u);
    /* 0059b2e4: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0059b2e7: mov byte ptr [eax], 1 */ W8((u32)(r_eax), 0x1u);
    /* 0059b2ea: push 0x6cec58 */ { u32 v = 0x6cec58u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b2ef: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x59b2f4u); f_00630f40();
    /* 0059b2f4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059b2f7: jmp 0x59b393 */ goto L_0059b393;
L_0059b2fc:; BB(0x0059b2fc);
    /* 0059b2fc: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059b302: movzx edx, word ptr [ecx + 0x120] */ r_edx = (u32)R16((u32)(r_ecx+0x120u));
    /* 0059b309: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b30c: jne 0x59b33b */ if (!fZ) goto L_0059b33b;
L_0059b30e:; BB(0x0059b30e);
    /* 0059b30e: cmp dword ptr [ebp - 0xc], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059b312: jg 0x59b320 */ if ((!fZ&&fS==fO)) goto L_0059b320;
L_0059b314:; BB(0x0059b314);
    /* 0059b314: cmp dword ptr [ebp - 0xc], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b318: jne 0x59b33b */ if (!fZ) goto L_0059b33b;
L_0059b31a:; BB(0x0059b31a);
    /* 0059b31a: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059b31e: jl 0x59b33b */ if ((fS!=fO)) goto L_0059b33b;
L_0059b320:; BB(0x0059b320);
    /* 0059b320: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0059b323: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 0059b326: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0059b329: mov byte ptr [ecx], 1 */ W8((u32)(r_ecx), 0x1u);
    /* 0059b32c: push 0x6cec3c */ { u32 v = 0x6cec3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0059b331: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x59b336u); f_00630f40();
    /* 0059b336: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059b339: jmp 0x59b393 */ goto L_0059b393;
L_0059b33b:; BB(0x0059b33b);
    /* 0059b33b: mov edx, dword ptr [0x7935d0] */ r_edx = R32((u32)(0x7935d0u));
    /* 0059b341: movzx eax, word ptr [edx + 0x120] */ r_eax = (u32)R16((u32)(r_edx+0x120u));
    /* 0059b348: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b34b: jne 0x59b37a */ if (!fZ) goto L_0059b37a;
L_0059b34d:; BB(0x0059b34d);
    /* 0059b34d: cmp dword ptr [ebp - 0xc], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059b351: jg 0x59b35f */ if ((!fZ&&fS==fO)) goto L_0059b35f;
L_0059b353:; BB(0x0059b353);
    /* 0059b353: cmp dword ptr [ebp - 0xc], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b357: jne 0x59b37a */ if (!fZ) goto L_0059b37a;
L_0059b359:; BB(0x0059b359);
    /* 0059b359: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059b35d: jl 0x59b37a */ if ((fS!=fO)) goto L_0059b37a;
L_0059b35f:; BB(0x0059b35f);
    /* 0059b35f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0059b362: mov byte ptr [ecx], 0 */ W8((u32)(r_ecx), 0x0u);
    /* 0059b365: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0059b368: mov byte ptr [edx], 1 */ W8((u32)(r_edx), 0x1u);
    /* 0059b36b: push 0x6cec20 */ { u32 v = 0x6cec20u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b370: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x59b375u); f_00630f40();
    /* 0059b375: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059b378: jmp 0x59b393 */ goto L_0059b393;
L_0059b37a:; BB(0x0059b37a);
    /* 0059b37a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0059b37d: mov byte ptr [eax], 1 */ W8((u32)(r_eax), 0x1u);
    /* 0059b380: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0059b383: mov byte ptr [ecx], 0 */ W8((u32)(r_ecx), 0x0u);
    /* 0059b386: push 0x6cec00 */ { u32 v = 0x6cec00u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b38b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x59b390u); f_00630f40();
    /* 0059b390: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0059b393:; BB(0x0059b393);
    /* 0059b393: mov esp, ebp */ r_esp = r_ebp;
    /* 0059b395: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059b396: ret 0xc */ FN_RET(0x0059b080); r_esp += 16; return;
}

void f_0059b420(void) /* sub_59B420 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059b420);
    /* 0059b420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059b421: mov ebp, esp */ r_ebp = r_esp;
    /* 0059b423: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059b426: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0059b429: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 0059b42c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059b42d: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059b433: call 0x5daa20 */ r_esp -= 4; W32(r_esp, 0x59b438u); f_005daa20();
    /* 0059b438: fild dword ptr [eax] */ FPUSH((long double)(i32)R32((u32)(r_eax)));
    /* 0059b43a: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0059b43d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059b440: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059b441: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59b446u); f_005dcb00();
    /* 0059b446: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059b449: mov ecx, eax */ r_ecx = r_eax;
    /* 0059b44b: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x59b450u); f_005d5a50();
    /* 0059b450: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0059b453: fild dword ptr [ebp - 0x20] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe0u)));
    /* 0059b456: fcomp qword ptr [ebp - 8] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff8u))); FPOP();
    /* 0059b459: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059b45b: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0059b45e: jp 0x59b496 */ if (fP) goto L_0059b496;
L_0059b460:; BB(0x0059b460);
    /* 0059b460: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059b463: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059b464: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59b469u); f_005dcb00();
    /* 0059b469: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059b46c: mov ecx, eax */ r_ecx = r_eax;
    /* 0059b46e: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x59b473u); f_005d5a50();
    /* 0059b473: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0059b476: fild dword ptr [ebp - 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffdcu)));
    /* 0059b479: fsubr qword ptr [ebp - 8] */ ST(0) = R_F64((u32)(r_ebp+0xfffffff8u)) - ST(0);
    /* 0059b47c: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0059b47f: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 0059b482: fdiv qword ptr [ebp - 8] */ ST(0) = ST(0) / R_F64((u32)(r_ebp+0xfffffff8u));
    /* 0059b485: fcomp qword ptr [0x6b2c38] */ fx_compare(ST(0), R_F64((u32)(0x6b2c38u))); FPOP();
    /* 0059b48b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059b48d: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059b490: jne 0x59b496 */ if (!fZ) goto L_0059b496;
L_0059b492:; BB(0x0059b492);
    /* 0059b492: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0059b494: jmp 0x59b498 */ goto L_0059b498;
L_0059b496:; BB(0x0059b496);
    /* 0059b496: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0059b498:; BB(0x0059b498);
    /* 0059b498: mov esp, ebp */ r_esp = r_ebp;
    /* 0059b49a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059b49b: ret 4 */ FN_RET(0x0059b420); r_esp += 8; return;
}

void f_0059b800(void) /* sub_59B800 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059b800);
    /* 0059b800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059b801: mov ebp, esp */ r_ebp = r_esp;
    /* 0059b803: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059b804: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0059b807: push 0x315103 */ { u32 v = 0x315103u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b80c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0059b812: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x59b817u); f_005f2ba0();
    /* 0059b817: push 0x315104 */ { u32 v = 0x315104u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b81c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0059b822: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x59b827u); f_005f2ba0();
    /* 0059b827: push 0x315105 */ { u32 v = 0x315105u; r_esp -= 4; W32(r_esp, v); }
    /* 0059b82c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0059b832: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x59b837u); f_005f2ba0();
    /* 0059b837: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059b83a: cmp dword ptr [eax + 0x50], 0 */ {  u32 a = R32((u32)(r_eax+0x50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b83e: je 0x59b855 */ if (fZ) goto L_0059b855;
L_0059b840:; BB(0x0059b840);
    /* 0059b840: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059b843: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 0059b846: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x59b84bu); f_005f8990();
    /* 0059b84b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059b84e: mov dword ptr [edx + 0x50], 0 */ W32((u32)(r_edx+0x50u), 0x0u);
L_0059b855:; BB(0x0059b855);
    /* 0059b855: mov esp, ebp */ r_esp = r_ebp;
    /* 0059b857: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059b858: ret  */ FN_RET(0x0059b800); r_esp += 4; return;
}

void f_0059b860(void) /* sub_59B860 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059b860);
    /* 0059b860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059b861: mov ebp, esp */ r_ebp = r_esp;
    /* 0059b863: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059b866: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0059b869: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059b86c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0059b86f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b873: je 0x59b887 */ if (fZ) goto L_0059b887;
L_0059b875:; BB(0x0059b875);
    /* 0059b875: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b879: je 0x59b883 */ if (fZ) goto L_0059b883;
L_0059b87b:; BB(0x0059b87b);
    /* 0059b87b: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b87f: je 0x59b88e */ if (fZ) goto L_0059b88e;
L_0059b881:; BB(0x0059b881);
    /* 0059b881: jmp 0x59b895 */ goto L_0059b895;
L_0059b883:; BB(0x0059b883);
    /* 0059b883: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059b885: jmp 0x59b897 */ goto L_0059b897;
L_0059b887:; BB(0x0059b887);
    /* 0059b887: mov eax, 1 */ r_eax = 0x1u;
    /* 0059b88c: jmp 0x59b897 */ goto L_0059b897;
L_0059b88e:; BB(0x0059b88e);
    /* 0059b88e: mov eax, 3 */ r_eax = 0x3u;
    /* 0059b893: jmp 0x59b897 */ goto L_0059b897;
L_0059b895:; BB(0x0059b895);
    /* 0059b895: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0059b897:; BB(0x0059b897);
    /* 0059b897: mov esp, ebp */ r_esp = r_ebp;
    /* 0059b899: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059b89a: ret 4 */ FN_RET(0x0059b860); r_esp += 8; return;
}

void f_0059b8a0(void) /* sub_59B8A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059b8a0);
    /* 0059b8a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059b8a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0059b8a3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059b8a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059b8a7: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0059b8aa: mov dword ptr [ebp - 0x14], 0xffffffff */ W32((u32)(r_ebp+0xffffffecu), 0xffffffffu);
    /* 0059b8b1: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 0059b8b8: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 0059b8bf: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 0059b8c6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059b8cd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059b8d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059b8d1: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059b8d7: call 0x5a3e30 */ r_esp -= 4; W32(r_esp, 0x59b8dcu); f_005a3e30();
    /* 0059b8dc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059b8df: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b8e1: jne 0x59b901 */ if (!fZ) goto L_0059b901;
L_0059b8e3:; BB(0x0059b8e3);
    /* 0059b8e3: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b8e7: jne 0x59b8fa */ if (!fZ) goto L_0059b8fa;
L_0059b8e9:; BB(0x0059b8e9);
    /* 0059b8e9: mov edx, dword ptr [0x7935d0] */ r_edx = R32((u32)(0x7935d0u));
    /* 0059b8ef: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0059b8f2: cmp eax, dword ptr [edx + 0x11c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x11cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b8f8: je 0x59b901 */ if (fZ) goto L_0059b901;
L_0059b8fa:; BB(0x0059b8fa);
    /* 0059b8fa: mov eax, 0x35 */ r_eax = 0x35u;
    /* 0059b8ff: jmp 0x59b94e */ goto L_0059b94e;
L_0059b901:; BB(0x0059b901);
    /* 0059b901: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0059b905: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059b906: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x59b90bu); f_00641280();
    /* 0059b90b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059b90e: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059b911: jne 0x59b929 */ if (!fZ) goto L_0059b929;
L_0059b913:; BB(0x0059b913);
    /* 0059b913: mov dx, word ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0059b917: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059b918: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x59b91du); f_00641290();
    /* 0059b91d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059b920: mov eax, dword ptr [ebp + eax*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0059b924: imul eax, eax, 0xd */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xdu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059b927: jmp 0x59b94e */ goto L_0059b94e;
L_0059b929:; BB(0x0059b929);
    /* 0059b929: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0059b92d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059b92e: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x59b933u); f_00641290();
    /* 0059b933: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059b936: mov esi, dword ptr [ebp + eax*4 - 0x14] */ r_esi = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0059b93a: imul esi, esi, 0xd */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xdu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059b93d: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0059b941: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059b942: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x59b947u); f_00641280();
    /* 0059b947: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059b94a: lea eax, [esi + eax - 1] */ r_eax = (u32)(r_esi+r_eax+0xffffffffu);
L_0059b94e:; BB(0x0059b94e);
    /* 0059b94e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059b94f: mov esp, ebp */ r_esp = r_ebp;
    /* 0059b951: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059b952: ret 0xc */ FN_RET(0x0059b8a0); r_esp += 16; return;
}

void f_0059b960(void) /* sub_59B960 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059b960);
    /* 0059b960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059b961: mov ebp, esp */ r_ebp = r_esp;
    /* 0059b963: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059b966: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0059b969: mov dword ptr [ebp - 0x18], 0x310e9a */ W32((u32)(r_ebp+0xffffffe8u), 0x310e9au);
    /* 0059b970: mov dword ptr [ebp - 0x14], 0x310e9b */ W32((u32)(r_ebp+0xffffffecu), 0x310e9bu);
    /* 0059b977: mov dword ptr [ebp - 0x10], 0x310e99 */ W32((u32)(r_ebp+0xfffffff0u), 0x310e99u);
    /* 0059b97e: mov dword ptr [ebp - 0xc], 0x310e9c */ W32((u32)(r_ebp+0xfffffff4u), 0x310e9cu);
    /* 0059b985: mov dword ptr [ebp - 8], 0x310e9d */ W32((u32)(r_ebp+0xfffffff8u), 0x310e9du);
    /* 0059b98c: mov dword ptr [ebp - 4], 0x310e9d */ W32((u32)(r_ebp+0xfffffffcu), 0x310e9du);
    /* 0059b993: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059b996: mov eax, dword ptr [ebp + eax*4 - 0x18] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffe8u));
    /* 0059b99a: mov esp, ebp */ r_esp = r_ebp;
    /* 0059b99c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059b99d: ret 4 */ FN_RET(0x0059b960); r_esp += 8; return;
}

void f_0059b9a0(void) /* sub_59B9A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059b9a0);
    /* 0059b9a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059b9a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0059b9a3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059b9a6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0059b9a9: mov dword ptr [ebp - 0x18], 0x14c */ W32((u32)(r_ebp+0xffffffe8u), 0x14cu);
    /* 0059b9b0: mov dword ptr [ebp - 0x14], 0xde */ W32((u32)(r_ebp+0xffffffecu), 0xdeu);
    /* 0059b9b7: mov dword ptr [ebp - 0x10], 0x1a9 */ W32((u32)(r_ebp+0xfffffff0u), 0x1a9u);
    /* 0059b9be: mov dword ptr [ebp - 0xc], 0x73 */ W32((u32)(r_ebp+0xfffffff4u), 0x73u);
    /* 0059b9c5: mov dword ptr [ebp - 8], 0x113 */ W32((u32)(r_ebp+0xfffffff8u), 0x113u);
    /* 0059b9cc: mov dword ptr [ebp - 4], 0x113 */ W32((u32)(r_ebp+0xfffffffcu), 0x113u);
    /* 0059b9d3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0059b9d6: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059b9d9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059b9dc: add eax, dword ptr [ebp + ecx*4 - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059b9e0: mov esp, ebp */ r_esp = r_ebp;
    /* 0059b9e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059b9e3: ret 8 */ FN_RET(0x0059b9a0); r_esp += 12; return;
}

void f_0059b9f0(void) /* sub_59B9F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059b9f0);
    /* 0059b9f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059b9f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0059b9f3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059b9f6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0059b9f9: mov dword ptr [ebp - 0x18], 0xed */ W32((u32)(r_ebp+0xffffffe8u), 0xedu);
    /* 0059ba00: mov dword ptr [ebp - 0x14], 0xee */ W32((u32)(r_ebp+0xffffffecu), 0xeeu);
    /* 0059ba07: mov dword ptr [ebp - 0x10], 0x8a */ W32((u32)(r_ebp+0xfffffff0u), 0x8au);
    /* 0059ba0e: mov dword ptr [ebp - 0xc], 0x8a */ W32((u32)(r_ebp+0xfffffff4u), 0x8au);
    /* 0059ba15: mov dword ptr [ebp - 8], 0x52 */ W32((u32)(r_ebp+0xfffffff8u), 0x52u);
    /* 0059ba1c: mov dword ptr [ebp - 4], 0x96 */ W32((u32)(r_ebp+0xfffffffcu), 0x96u);
    /* 0059ba23: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059ba26: mov eax, dword ptr [ebp + eax*4 - 0x18] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffe8u));
    /* 0059ba2a: mov esp, ebp */ r_esp = r_ebp;
    /* 0059ba2c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059ba2d: ret 8 */ FN_RET(0x0059b9f0); r_esp += 12; return;
}

