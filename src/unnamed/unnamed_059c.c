#include "protos.h"

void f_0059c2d0(void) /* sub_59C2D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059c2d0);
    /* 0059c2d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059c2d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0059c2d3: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059c2d9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0059c2de: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059c2e0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0059c2e3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059c2e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0059c2e5: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 0059c2eb: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0059c2f1: call 0x59ca80 */ r_esp -= 4; W32(r_esp, 0x59c2f6u); f_0059ca80();
    /* 0059c2f6: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0059c2fd: jmp 0x59c308 */ goto L_0059c308;
L_0059c2ff:; BB(0x0059c2ff);
    /* 0059c2ff: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0059c302: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059c305: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
L_0059c308:; BB(0x0059c308);
    /* 0059c308: cmp dword ptr [ebp - 0x3c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059c30c: jge 0x59c3ed */ if ((fS==fO)) goto L_0059c3ed;
L_0059c312:; BB(0x0059c312);
    /* 0059c312: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0059c315: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059c318: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0059c31b: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0059c322: jmp 0x59c32d */ goto L_0059c32d;
L_0059c324:; BB(0x0059c324);
    /* 0059c324: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0059c327: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0059c32a: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
L_0059c32d:; BB(0x0059c32d);
    /* 0059c32d: cmp dword ptr [ebp - 0x44], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059c331: jge 0x59c3e8 */ if ((fS==fO)) goto L_0059c3e8;
L_0059c337:; BB(0x0059c337);
    /* 0059c337: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0059c33a: add eax, dword ptr [ebp - 0x40] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059c33d: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059c343: mov edx, dword ptr [ecx + eax*4 + 0x98] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x98u));
    /* 0059c34a: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0059c34d: cmp dword ptr [ebp - 0x48], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c351: je 0x59c3bc */ if (fZ) goto L_0059c3bc;
L_0059c353:; BB(0x0059c353);
    /* 0059c353: cmp dword ptr [ebp - 0x48], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c357: je 0x59c3bc */ if (fZ) goto L_0059c3bc;
L_0059c359:; BB(0x0059c359);
    /* 0059c359: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0059c35c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059c35d: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0059c363: call 0x59b860 */ r_esp -= 4; W32(r_esp, 0x59c368u); f_0059b860();
    /* 0059c368: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059c369: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0059c36c: add ecx, dword ptr [ebp - 0x40] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059c36f: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0059c375: mov eax, dword ptr [edx + ecx*4 + 0x54] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x54u));
    /* 0059c379: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0059c37c: add ecx, dword ptr [ebp - 0x40] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059c37f: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0059c385: mov ecx, dword ptr [edx + ecx*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x54u));
    /* 0059c389: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0059c38b: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0059c391: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x59c393u); call_ind(t); }
    /* 0059c393: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0059c396: add eax, dword ptr [ebp - 0x40] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059c399: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0059c39f: mov edx, dword ptr [ecx + eax*4 + 0x54] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x54u));
    /* 0059c3a3: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0059c3a6: add eax, dword ptr [ebp - 0x40] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059c3a9: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0059c3af: mov ecx, dword ptr [ecx + eax*4 + 0x54] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x54u));
    /* 0059c3b3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059c3b5: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0059c3b8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59c3bau); call_ind(t); }
    /* 0059c3ba: jmp 0x59c3e3 */ goto L_0059c3e3;
L_0059c3bc:; BB(0x0059c3bc);
    /* 0059c3bc: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0059c3bf: add ecx, dword ptr [ebp - 0x40] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059c3c2: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0059c3c8: mov eax, dword ptr [edx + ecx*4 + 0x54] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x54u));
    /* 0059c3cc: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0059c3cf: add ecx, dword ptr [ebp - 0x40] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059c3d2: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0059c3d8: mov ecx, dword ptr [edx + ecx*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x54u));
    /* 0059c3dc: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0059c3de: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0059c3e1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x59c3e3u); call_ind(t); }
L_0059c3e3:; BB(0x0059c3e3);
    /* 0059c3e3: jmp 0x59c324 */ goto L_0059c324;
L_0059c3e8:; BB(0x0059c3e8);
    /* 0059c3e8: jmp 0x59c2ff */ goto L_0059c2ff;
L_0059c3ed:; BB(0x0059c3ed);
    /* 0059c3ed: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 0059c3f4: jmp 0x59c3ff */ goto L_0059c3ff;
L_0059c3f6:; BB(0x0059c3f6);
    /* 0059c3f6: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059c3f9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059c3fc: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
L_0059c3ff:; BB(0x0059c3ff);
    /* 0059c3ff: cmp dword ptr [ebp - 0x4c], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059c403: jge 0x59c739 */ if ((fS==fO)) goto L_0059c739;
L_0059c409:; BB(0x0059c409);
    /* 0059c409: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059c40c: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0059c412: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0059c416: call 0x59e440 */ r_esp -= 4; W32(r_esp, 0x59c41bu); f_0059e440();
    /* 0059c41b: cmp dword ptr [ebp - 0x4c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c41f: je 0x59c502 */ if (fZ) goto L_0059c502;
L_0059c425:; BB(0x0059c425);
    /* 0059c425: cmp dword ptr [ebp - 0x4c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c429: je 0x59c502 */ if (fZ) goto L_0059c502;
L_0059c42f:; BB(0x0059c42f);
    /* 0059c42f: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059c432: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059c433: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59c438u); f_005dcb00();
    /* 0059c438: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059c43b: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0059c43e: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0059c441: mov dl, byte ptr [ecx + 0x4a0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a0u))) & 0xffu);
    /* 0059c447: mov byte ptr [ebp - 0x7d], dl */ W8((u32)(r_ebp+0xffffff83u), (u8)r_edx);
    /* 0059c44a: movzx eax, byte ptr [ebp - 0x7d] */ r_eax = (u32)R8((u32)(r_ebp+0xffffff83u));
    /* 0059c44e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c450: je 0x59c502 */ if (fZ) goto L_0059c502;
L_0059c456:; BB(0x0059c456);
    /* 0059c456: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059c45c: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x59c461u); f_005da7b0();
    /* 0059c461: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059c464: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c466: je 0x59c502 */ if (fZ) goto L_0059c502;
L_0059c46c:; BB(0x0059c46c);
    /* 0059c46c: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059c46f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c470: mov eax, dword ptr [0x7935cc] */ r_eax = R32((u32)(0x7935ccu));
    /* 0059c475: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059c477: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059c47d: mov eax, dword ptr [edx + 0x2c4] */ r_eax = R32((u32)(r_edx+0x2c4u));
    /* 0059c483: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59c485u); call_ind(t); }
    /* 0059c485: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059c488: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c48a: jne 0x59c502 */ if (!fZ) goto L_0059c502;
L_0059c48c:; BB(0x0059c48c);
    /* 0059c48c: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059c48f: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059c492: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0059c495: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 0059c49c: jmp 0x59c4a7 */ goto L_0059c4a7;
L_0059c49e:; BB(0x0059c49e);
    /* 0059c49e: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0059c4a1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059c4a4: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
L_0059c4a7:; BB(0x0059c4a7);
    /* 0059c4a7: cmp dword ptr [ebp - 0x54], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059c4ab: jge 0x59c502 */ if ((fS==fO)) goto L_0059c502;
L_0059c4ad:; BB(0x0059c4ad);
    /* 0059c4ad: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0059c4b0: add ecx, dword ptr [ebp - 0x50] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059c4b3: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0059c4b9: mov eax, dword ptr [edx + ecx*4 + 0x1c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1cu));
    /* 0059c4bd: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059c4c0: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059c4c6: cmp dword ptr [eax + ecx + 0x17c], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c4ce: jne 0x59c500 */ if (!fZ) goto L_0059c500;
L_0059c4d0:; BB(0x0059c4d0);
    /* 0059c4d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c4d2: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059c4d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c4d6: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0059c4d9: add eax, dword ptr [ebp - 0x50] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059c4dc: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0059c4e2: mov edx, dword ptr [ecx + eax*4 + 0x1c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1cu));
    /* 0059c4e6: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0059c4e9: add eax, dword ptr [ebp - 0x50] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059c4ec: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0059c4f2: mov ecx, dword ptr [ecx + eax*4 + 0x1c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1cu));
    /* 0059c4f6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059c4f8: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0059c4fe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59c500u); call_ind(t); }
L_0059c500:; BB(0x0059c500);
    /* 0059c500: jmp 0x59c49e */ goto L_0059c49e;
L_0059c502:; BB(0x0059c502);
    /* 0059c502: cmp dword ptr [ebp - 0x4c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c506: je 0x59c70d */ if (fZ) goto L_0059c70d;
L_0059c50c:; BB(0x0059c50c);
    /* 0059c50c: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059c50f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c510: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059c516: call 0x5a3e30 */ r_esp -= 4; W32(r_esp, 0x59c51bu); f_005a3e30();
    /* 0059c51b: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0059c51e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c520: je 0x59c70d */ if (fZ) goto L_0059c70d;
L_0059c526:; BB(0x0059c526);
    /* 0059c526: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 0059c52b: movzx ecx, byte ptr [eax + 0x118] */ r_ecx = (u32)R8((u32)(r_eax+0x118u));
    /* 0059c532: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c534: je 0x59c70d */ if (fZ) goto L_0059c70d;
L_0059c53a:; BB(0x0059c53a);
    /* 0059c53a: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 0059c541: jmp 0x59c54c */ goto L_0059c54c;
L_0059c543:; BB(0x0059c543);
    /* 0059c543: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0059c546: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0059c549: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
L_0059c54c:; BB(0x0059c54c);
    /* 0059c54c: cmp dword ptr [ebp - 0x78], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059c550: jge 0x59c55e */ if ((fS==fO)) goto L_0059c55e;
L_0059c552:; BB(0x0059c552);
    /* 0059c552: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 0059c555: mov word ptr [ebp + eax*2 - 0x64], 0 */ W16((u32)(r_ebp+r_eax*2+0xffffff9cu), 0x0u);
    /* 0059c55c: jmp 0x59c543 */ goto L_0059c543;
L_0059c55e:; BB(0x0059c55e);
    /* 0059c55e: lea ecx, [ebp - 0x74] */ r_ecx = (u32)(r_ebp+0xffffff8cu);
    /* 0059c561: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c562: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c564: mov edx, dword ptr [0x7935d0] */ r_edx = R32((u32)(0x7935d0u));
    /* 0059c56a: add edx, 0xe6 */ {  u32 a = r_edx; u32 b = 0xe6u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0059c570: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c571: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059c573: cmp dword ptr [ebp - 0x4c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c577: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0059c57a: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059c57d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059c57e: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059c581: imul ecx, ecx, 6 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x6u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059c584: mov edx, dword ptr [0x7935d0] */ r_edx = R32((u32)(0x7935d0u));
    /* 0059c58a: lea eax, [edx + ecx + 0xc8] */ r_eax = (u32)(r_edx+r_ecx+0xc8u);
    /* 0059c591: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059c592: call 0x462930 */ r_esp -= 4; W32(r_esp, 0x59c597u); f_00462930();
    /* 0059c597: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059c59a: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 0059c59d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c59e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c5a0: lea edx, [ebp - 0x74] */ r_edx = (u32)(r_ebp+0xffffff8cu);
    /* 0059c5a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c5a4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c5a6: call 0x462a40 */ r_esp -= 4; W32(r_esp, 0x59c5abu); f_00462a40();
    /* 0059c5ab: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059c5ae: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0059c5b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059c5b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c5b4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c5b6: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 0059c5b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c5ba: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x59c5bfu); f_00462ba0();
    /* 0059c5bf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059c5c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059c5c3: call 0x462f40 */ r_esp -= 4; W32(r_esp, 0x59c5c8u); f_00462f40();
    /* 0059c5c8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059c5cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c5cd: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059c5d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c5d1: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0059c5d7: call 0x59b9a0 */ r_esp -= 4; W32(r_esp, 0x59c5dcu); f_0059b9a0();
    /* 0059c5dc: mov esi, eax */ r_esi = r_eax;
    /* 0059c5de: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c5e0: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059c5e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059c5e4: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0059c5ea: call 0x59b9a0 */ r_esp -= 4; W32(r_esp, 0x59c5efu); f_0059b9a0();
    /* 0059c5ef: mov edi, eax */ r_edi = r_eax;
    /* 0059c5f1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c5f3: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059c5f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c5f7: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0059c5fd: call 0x59b9a0 */ r_esp -= 4; W32(r_esp, 0x59c602u); f_0059b9a0();
    /* 0059c602: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0059c604: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059c607: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0059c60d: mov ecx, dword ptr [eax + edx*4 + 0x84] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x84u));
    /* 0059c614: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x59c619u); f_005f5550();
    /* 0059c619: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0059c61b: add edi, 0x23 */ {  u32 a = r_edi; u32 b = 0x23u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0059c61e: mov eax, edi */ r_eax = r_edi;
    /* 0059c620: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0059c621: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0059c623: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0059c625: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0059c627: mov dword ptr [ebp - 0x58], esi */ W32((u32)(r_ebp+0xffffffa8u), r_esi);
    /* 0059c62a: cmp dword ptr [ebp - 0x4c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c62e: jne 0x59c664 */ if (!fZ) goto L_0059c664;
L_0059c630:; BB(0x0059c630);
    /* 0059c630: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c632: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059c635: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c636: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0059c63c: call 0x59b9f0 */ r_esp -= 4; W32(r_esp, 0x59c641u); f_0059b9f0();
    /* 0059c641: mov esi, eax */ r_esi = r_eax;
    /* 0059c643: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059c646: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0059c64c: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0059c650: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0059c653: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x59c658u); f_005f5590();
    /* 0059c658: lea edx, [esi + eax - 0x44] */ r_edx = (u32)(r_esi+r_eax+0xffffffbcu);
    /* 0059c65c: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 0059c662: jmp 0x59c67e */ goto L_0059c67e;
L_0059c664:; BB(0x0059c664);
    /* 0059c664: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c666: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059c669: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059c66a: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0059c670: call 0x59b9f0 */ r_esp -= 4; W32(r_esp, 0x59c675u); f_0059b9f0();
    /* 0059c675: sub eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0059c678: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
L_0059c67e:; BB(0x0059c67e);
    /* 0059c67e: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0059c684: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 0059c687: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0059c68a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c68b: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059c68e: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0059c694: mov edx, dword ptr [ecx + eax*4 + 0x84] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x84u));
    /* 0059c69b: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059c69e: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0059c6a4: mov ecx, dword ptr [ecx + eax*4 + 0x84] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x84u));
    /* 0059c6ab: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059c6ad: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0059c6b3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59c6b5u); call_ind(t); }
    /* 0059c6b5: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0059c6b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c6b9: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0059c6bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c6bd: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059c6c0: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0059c6c6: mov edx, dword ptr [ecx + eax*4 + 0x84] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x84u));
    /* 0059c6cd: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059c6d0: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0059c6d6: mov ecx, dword ptr [ecx + eax*4 + 0x84] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x84u));
    /* 0059c6dd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059c6df: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0059c6e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59c6e4u); call_ind(t); }
    /* 0059c6e4: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059c6e7: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0059c6ed: mov eax, dword ptr [edx + ecx*4 + 0x84] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x84u));
    /* 0059c6f4: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059c6f7: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0059c6fd: mov ecx, dword ptr [edx + ecx*4 + 0x84] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x84u));
    /* 0059c704: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0059c706: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0059c709: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x59c70bu); call_ind(t); }
    /* 0059c70b: jmp 0x59c734 */ goto L_0059c734;
L_0059c70d:; BB(0x0059c70d);
    /* 0059c70d: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059c710: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0059c716: mov edx, dword ptr [ecx + eax*4 + 0x84] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x84u));
    /* 0059c71d: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0059c720: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0059c726: mov ecx, dword ptr [ecx + eax*4 + 0x84] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x84u));
    /* 0059c72d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059c72f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0059c732: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59c734u); call_ind(t); }
L_0059c734:; BB(0x0059c734);
    /* 0059c734: jmp 0x59c3f6 */ goto L_0059c3f6;
L_0059c739:; BB(0x0059c739);
    /* 0059c739: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059c73f: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x59c744u); f_005da7b0();
    /* 0059c744: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059c747: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c749: je 0x59c76a */ if (fZ) goto L_0059c76a;
L_0059c74b:; BB(0x0059c74b);
    /* 0059c74b: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c752: jne 0x59c76a */ if (!fZ) goto L_0059c76a;
L_0059c754:; BB(0x0059c754);
    /* 0059c754: mov edx, dword ptr [0x7935cc] */ r_edx = R32((u32)(0x7935ccu));
    /* 0059c75a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059c75c: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059c762: mov edx, dword ptr [eax + 0x2f0] */ r_edx = R32((u32)(r_eax+0x2f0u));
    /* 0059c768: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x59c76au); call_ind(t); }
L_0059c76a:; BB(0x0059c76a);
    /* 0059c76a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059c76b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059c76c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059c76f: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0059c771: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x59c776u); f_00686d72();
    /* 0059c776: mov esp, ebp */ r_esp = r_ebp;
    /* 0059c778: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059c779: ret  */ FN_RET(0x0059c2d0); r_esp += 4; return;
}

void f_0059c780(void) /* sub_59C780 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059c780);
    /* 0059c780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059c781: mov ebp, esp */ r_ebp = r_esp;
    /* 0059c783: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059c785: push 0x6a753c */ { u32 v = 0x6a753cu; r_esp -= 4; W32(r_esp, v); }
    /* 0059c78a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059c790: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059c791: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059c794: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0059c799: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059c79b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059c79c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0059c79f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0059c7a5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0059c7a8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059c7ab: call 0x59c2d0 */ r_esp -= 4; W32(r_esp, 0x59c7b0u); f_0059c2d0();
    /* 0059c7b0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059c7b3: cmp dword ptr [eax + 0x50], 0 */ {  u32 a = R32((u32)(r_eax+0x50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c7b7: jne 0x59c825 */ if (!fZ) goto L_0059c825;
L_0059c7b9:; BB(0x0059c7b9);
    /* 0059c7b9: push 0x1bc */ { u32 v = 0x1bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0059c7be: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x59c7c3u); f_00686d82();
    /* 0059c7c3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059c7c6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0059c7c9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059c7d0: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c7d4: je 0x59c7e3 */ if (fZ) goto L_0059c7e3;
L_0059c7d6:; BB(0x0059c7d6);
    /* 0059c7d6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059c7d9: call 0x59cb50 */ r_esp -= 4; W32(r_esp, 0x59c7deu); f_0059cb50();
    /* 0059c7de: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0059c7e1: jmp 0x59c7ea */ goto L_0059c7ea;
L_0059c7e3:; BB(0x0059c7e3);
    /* 0059c7e3: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0059c7ea:; BB(0x0059c7ea);
    /* 0059c7ea: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059c7ed: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0059c7f0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059c7f7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059c7fa: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059c7fd: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0059c800: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059c803: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0059c806: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059c809: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0059c80c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059c80e: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 0059c811: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59c813u); call_ind(t); }
    /* 0059c813: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 0059c818: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c81a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059c81d: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 0059c820: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x59c825u); f_005f7340();
L_0059c825:; BB(0x0059c825);
    /* 0059c825: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059c828: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 0059c82b: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x59c830u); f_005f85d0();
    /* 0059c830: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c832: push 0x315103 */ { u32 v = 0x315103u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c837: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0059c83d: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x59c842u); f_005f2b20();
    /* 0059c842: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c844: push 0x315104 */ { u32 v = 0x315104u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c849: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0059c84f: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x59c854u); f_005f2b20();
    /* 0059c854: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c856: push 0x315105 */ { u32 v = 0x315105u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c85b: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0059c861: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x59c866u); f_005f2b20();
    /* 0059c866: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c868: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059c86e: call 0x5a2020 */ r_esp -= 4; W32(r_esp, 0x59c873u); f_005a2020();
    /* 0059c873: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059c876: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059c87c: lea edx, [ecx + eax + 0xc8] */ r_edx = (u32)(r_ecx+r_eax+0xc8u);
    /* 0059c883: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c884: call 0x4639c0 */ r_esp -= 4; W32(r_esp, 0x59c889u); f_004639c0();
    /* 0059c889: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059c88c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0059c88f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c891: jne 0x59c8c3 */ if (!fZ) goto L_0059c8c3;
L_0059c893:; BB(0x0059c893);
    /* 0059c893: push 0x315105 */ { u32 v = 0x315105u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c898: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0059c89e: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x59c8a3u); f_005f2ba0();
    /* 0059c8a3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c8a5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059c8a8: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 0059c8ab: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x59c8b0u); f_005fb300();
    /* 0059c8b0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0059c8b3: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059c8b6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059c8b8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059c8bb: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0059c8c1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x59c8c3u); call_ind(t); }
L_0059c8c3:; BB(0x0059c8c3);
    /* 0059c8c3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059c8c6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059c8cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059c8ce: mov esp, ebp */ r_esp = r_ebp;
    /* 0059c8d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059c8d1: ret  */ FN_RET(0x0059c780); r_esp += 4; return;
}

void f_0059c8e0(void) /* sub_59C8E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059c8e0);
    /* 0059c8e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059c8e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0059c8e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c8e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0059c8e7: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c8eb: je 0x59c8f3 */ if (fZ) goto L_0059c8f3;
L_0059c8ed:; BB(0x0059c8ed);
    /* 0059c8ed: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c8f1: jne 0x59c8f5 */ if (!fZ) goto L_0059c8f5;
L_0059c8f3:; BB(0x0059c8f3);
    /* 0059c8f3: jmp 0x59c926 */ goto L_0059c926;
L_0059c8f5:; BB(0x0059c8f5);
    /* 0059c8f5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0059c8f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059c8fb: cmp dword ptr [ecx + eax*4 + 0x1c], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059c900: je 0x59c926 */ if (fZ) goto L_0059c926;
L_0059c902:; BB(0x0059c902);
    /* 0059c902: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059c904: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059c907: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c908: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0059c90b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059c90e: mov edx, dword ptr [ecx + eax*4 + 0x1c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1cu));
    /* 0059c912: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0059c915: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059c918: mov ecx, dword ptr [ecx + eax*4 + 0x1c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1cu));
    /* 0059c91c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059c91e: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0059c924: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59c926u); call_ind(t); }
L_0059c926:; BB(0x0059c926);
    /* 0059c926: mov esp, ebp */ r_esp = r_ebp;
    /* 0059c928: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059c929: ret 8 */ FN_RET(0x0059c8e0); r_esp += 12; return;
}

void f_0059c930(void) /* sub_59C930 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059c930);
    /* 0059c930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059c931: mov ebp, esp */ r_ebp = r_esp;
    /* 0059c933: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059c936: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0059c939: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059c93c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059c93f: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0059c943: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0059c946: mov ecx, dword ptr [edx + eax*4 + 8] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x8u));
    /* 0059c94a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0059c94d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0059c950: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c951: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059c954: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059c955: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059c95b: call 0x5a26f0 */ r_esp -= 4; W32(r_esp, 0x59c960u); f_005a26f0();
    /* 0059c960: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 0059c964: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059c967: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c968: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059c96b: call 0x59b960 */ r_esp -= 4; W32(r_esp, 0x59c970u); f_0059b960();
    /* 0059c970: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059c971: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059c974: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x59c979u); f_005eaf00();
    /* 0059c979: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0059c97c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c97d: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0059c981: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059c982: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059c985: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c986: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059c989: call 0x59b8a0 */ r_esp -= 4; W32(r_esp, 0x59c98eu); f_0059b8a0();
    /* 0059c98e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059c98f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059c992: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059c994: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059c997: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0059c99d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x59c99fu); call_ind(t); }
    /* 0059c99f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0059c9a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059c9a3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059c9a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c9a7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059c9aa: call 0x59b9f0 */ r_esp -= 4; W32(r_esp, 0x59c9afu); f_0059b9f0();
    /* 0059c9af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059c9b0: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0059c9b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c9b4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059c9b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059c9b8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059c9bb: call 0x59b9a0 */ r_esp -= 4; W32(r_esp, 0x59c9c0u); f_0059b9a0();
    /* 0059c9c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059c9c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059c9c4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059c9c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059c9c9: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0059c9cc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59c9ceu); call_ind(t); }
    /* 0059c9ce: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0059c9d1: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059c9d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059c9d5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059c9d8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059c9da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059c9dd: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 0059c9e0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x59c9e2u); call_ind(t); }
    /* 0059c9e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059c9e5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059c9e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059c9ea: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0059c9ed: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59c9efu); call_ind(t); }
    /* 0059c9ef: mov esp, ebp */ r_esp = r_ebp;
    /* 0059c9f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059c9f2: ret 8 */ FN_RET(0x0059c930); r_esp += 12; return;
}

void f_0059ca00(void) /* sub_59CA00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059ca00);
    /* 0059ca00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059ca01: mov ebp, esp */ r_ebp = r_esp;
    /* 0059ca03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059ca04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0059ca07: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059ca0d: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x59ca12u); f_005da7b0();
    /* 0059ca12: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0059ca15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ca17: je 0x59ca38 */ if (fZ) goto L_0059ca38;
L_0059ca19:; BB(0x0059ca19);
    /* 0059ca19: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059ca1f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059ca21: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059ca27: mov eax, dword ptr [edx + 0x2d4] */ r_eax = R32((u32)(r_edx+0x2d4u));
    /* 0059ca2d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59ca2fu); call_ind(t); }
    /* 0059ca2f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059ca32: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ca34: jne 0x59ca38 */ if (!fZ) goto L_0059ca38;
L_0059ca36:; BB(0x0059ca36);
    /* 0059ca36: jmp 0x59ca75 */ goto L_0059ca75;
L_0059ca38:; BB(0x0059ca38);
    /* 0059ca38: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059ca3e: call 0x5a3e10 */ r_esp -= 4; W32(r_esp, 0x59ca43u); f_005a3e10();
    /* 0059ca43: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0059ca46: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ca48: jne 0x59ca63 */ if (!fZ) goto L_0059ca63;
L_0059ca4a:; BB(0x0059ca4a);
    /* 0059ca4a: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0059ca50: call 0x5df650 */ r_esp -= 4; W32(r_esp, 0x59ca55u); f_005df650();
    /* 0059ca55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059ca56: mov ecx, dword ptr [0x7935c8] */ r_ecx = R32((u32)(0x7935c8u));
    /* 0059ca5c: call 0x59f960 */ r_esp -= 4; W32(r_esp, 0x59ca61u); f_0059f960();
    /* 0059ca61: jmp 0x59ca75 */ goto L_0059ca75;
L_0059ca63:; BB(0x0059ca63);
    /* 0059ca63: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 0059ca68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ca6a: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059ca70: call 0x5db8c0 */ r_esp -= 4; W32(r_esp, 0x59ca75u); f_005db8c0();
L_0059ca75:; BB(0x0059ca75);
    /* 0059ca75: mov esp, ebp */ r_esp = r_ebp;
    /* 0059ca77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059ca78: ret  */ FN_RET(0x0059ca00); r_esp += 4; return;
}

void f_0059ca80(void) /* sub_59CA80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059ca80);
    /* 0059ca80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059ca81: mov ebp, esp */ r_ebp = r_esp;
    /* 0059ca83: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059ca86: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0059ca89: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059ca8f: call 0x5a2460 */ r_esp -= 4; W32(r_esp, 0x59ca94u); f_005a2460();
    /* 0059ca94: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059ca97: je 0x59cb38 */ if (fZ) goto L_0059cb38;
L_0059ca9d:; BB(0x0059ca9d);
    /* 0059ca9d: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059caa3: call 0x5a2460 */ r_esp -= 4; W32(r_esp, 0x59caa8u); f_005a2460();
    /* 0059caa8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0059caab: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059caaf: jl 0x59cb38 */ if ((fS!=fO)) goto L_0059cb38;
L_0059cab5:; BB(0x0059cab5);
    /* 0059cab5: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059cab9: jg 0x59cb38 */ if ((!fZ&&fS==fO)) goto L_0059cb38;
L_0059cabb:; BB(0x0059cabb);
    /* 0059cabb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059cabe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059cabf: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59cac4u); f_005dcb00();
    /* 0059cac4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059cac7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0059caca: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cace: je 0x59cb38 */ if (fZ) goto L_0059cb38;
L_0059cad0:; BB(0x0059cad0);
    /* 0059cad0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059cad3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59cad8u); f_0063aac0();
    /* 0059cad8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0059cada: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0059cadd: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cae1: je 0x59caff */ if (fZ) goto L_0059caff;
L_0059cae3:; BB(0x0059cae3);
    /* 0059cae3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059cae6: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x59caebu); f_0063aac0();
    /* 0059caeb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059caed: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0059caf0: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059caf4: je 0x59caff */ if (fZ) goto L_0059caff;
L_0059caf6:; BB(0x0059caf6);
    /* 0059caf6: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0059cafd: jmp 0x59cb06 */ goto L_0059cb06;
L_0059caff:; BB(0x0059caff);
    /* 0059caff: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
L_0059cb06:; BB(0x0059cb06);
    /* 0059cb06: movzx eax, byte ptr [ebp - 0x18] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe8u));
    /* 0059cb0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cb0c: je 0x59cb38 */ if (fZ) goto L_0059cb38;
L_0059cb0e:; BB(0x0059cb0e);
    /* 0059cb0e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059cb11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059cb12: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059cb18: call 0x5a29f0 */ r_esp -= 4; W32(r_esp, 0x59cb1du); f_005a29f0();
    /* 0059cb1d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0059cb20: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cb22: je 0x59cb38 */ if (fZ) goto L_0059cb38;
L_0059cb24:; BB(0x0059cb24);
    /* 0059cb24: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cb26: push 0x315102 */ { u32 v = 0x315102u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cb2b: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0059cb31: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x59cb36u); f_005f2b20();
    /* 0059cb36: jmp 0x59cb48 */ goto L_0059cb48;
L_0059cb38:; BB(0x0059cb38);
    /* 0059cb38: push 0x315102 */ { u32 v = 0x315102u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cb3d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0059cb43: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x59cb48u); f_005f2ba0();
L_0059cb48:; BB(0x0059cb48);
    /* 0059cb48: mov esp, ebp */ r_esp = r_ebp;
    /* 0059cb4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059cb4b: ret  */ FN_RET(0x0059ca80); r_esp += 4; return;
}

void f_0059cf00(void) /* sub_59CF00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059cf00);
    /* 0059cf00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059cf01: mov ebp, esp */ r_ebp = r_esp;
    /* 0059cf03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059cf04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0059cf07: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cf09: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059cf0c: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x59cf11u); f_005fb2b0();
    /* 0059cf11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059cf13: jne 0x59cf58 */ if (!fZ) goto L_0059cf58;
L_0059cf15:; BB(0x0059cf15);
    /* 0059cf15: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cf17: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059cf1c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cf1e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cf20: movzx eax, byte ptr [ebp + 0xc] */ r_eax = (u32)R8((u32)(r_ebp+0xcu));
    /* 0059cf24: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0059cf28: lea edx, [ecx + eax*2] */ r_edx = (u32)(r_ecx+r_eax*2);
    /* 0059cf2b: imul edx, edx, 0x23 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x23u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059cf2e: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0059cf31: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059cf32: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0059cf34: push 0xfdef */ { u32 v = 0xfdefu; r_esp -= 4; W32(r_esp, v); }
    /* 0059cf39: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cf3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cf3d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059cf40: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x59cf45u); f_005f9ce0();
    /* 0059cf45: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cf47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059cf49: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059cf4c: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x59cf51u); f_005fb2b0();
    /* 0059cf51: mov ecx, eax */ r_ecx = r_eax;
    /* 0059cf53: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x59cf58u); f_005eb5d0();
L_0059cf58:; BB(0x0059cf58);
    /* 0059cf58: mov esp, ebp */ r_esp = r_ebp;
    /* 0059cf5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059cf5b: ret 8 */ FN_RET(0x0059cf00); r_esp += 12; return;
}

