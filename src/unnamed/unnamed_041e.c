#include "protos.h"

void f_0041e290(void) /* sub_41E290 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041e290);
    /* 0041e290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041e291: mov ebp, esp */ r_ebp = r_esp;
    /* 0041e293: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041e296: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0041e299: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e29b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e29d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041e2a0: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041e2a3: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 0041e2a9: lea edx, [ecx + eax + 0x6c] */ r_edx = (u32)(r_ecx+r_eax+0x6cu);
    /* 0041e2ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e2ae: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x41e2b3u); f_00462ba0();
    /* 0041e2b3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e2b6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0041e2b9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e2bb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e2bd: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 0041e2c3: call 0x4262e0 */ r_esp -= 4; W32(r_esp, 0x41e2c8u); f_004262e0();
    /* 0041e2c8: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0041e2cc: cmp dword ptr [ebp - 0x20], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e2d0: jle 0x41e2d9 */ if ((fZ||fS!=fO)) goto L_0041e2d9;
L_0041e2d2:; BB(0x0041e2d2);
    /* 0041e2d2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0041e2d4: jmp 0x41e440 */ goto L_0041e440;
L_0041e2d9:; BB(0x0041e2d9);
    /* 0041e2d9: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0041e2e0: jmp 0x41e2eb */ goto L_0041e2eb;
L_0041e2e2:; BB(0x0041e2e2);
    /* 0041e2e2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041e2e5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041e2e8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_0041e2eb:; BB(0x0041e2eb);
    /* 0041e2eb: cmp dword ptr [ebp - 0x1c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e2ef: jge 0x41e318 */ if ((fS==fO)) goto L_0041e318;
L_0041e2f1:; BB(0x0041e2f1);
    /* 0041e2f1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e2f3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041e2f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e2f7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041e2fa: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041e2fd: mov eax, dword ptr [0x790358] */ r_eax = R32((u32)(0x790358u));
    /* 0041e302: lea ecx, [eax + edx + 0x6c] */ r_ecx = (u32)(r_eax+r_edx+0x6cu);
    /* 0041e306: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e307: call 0x4630c0 */ r_esp -= 4; W32(r_esp, 0x41e30cu); f_004630c0();
    /* 0041e30c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e30f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041e312: mov dword ptr [ebp + edx*4 - 0x18], eax */ W32((u32)(r_ebp+r_edx*4+0xffffffe8u), r_eax);
    /* 0041e316: jmp 0x41e2e2 */ goto L_0041e2e2;
L_0041e318:; BB(0x0041e318);
    /* 0041e318: cmp dword ptr [ebp - 0x18], 0xe */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e31c: jne 0x41e43e */ if (!fZ) goto L_0041e43e;
L_0041e322:; BB(0x0041e322);
    /* 0041e322: cmp dword ptr [ebp - 0x14], 0xd */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e326: jne 0x41e43e */ if (!fZ) goto L_0041e43e;
L_0041e32c:; BB(0x0041e32c);
    /* 0041e32c: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0041e330: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e331: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x41e336u); f_00641280();
    /* 0041e336: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e339: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e33c: jl 0x41e384 */ if ((fS!=fO)) goto L_0041e384;
L_0041e33e:; BB(0x0041e33e);
    /* 0041e33e: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0041e342: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e343: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x41e348u); f_00641280();
    /* 0041e348: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e34b: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e34e: jg 0x41e384 */ if ((!fZ&&fS==fO)) goto L_0041e384;
L_0041e350:; BB(0x0041e350);
    /* 0041e350: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e352: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0041e356: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e357: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x41e35cu); f_00641280();
    /* 0041e35c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e35f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e360: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041e363: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041e366: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 0041e36c: lea edx, [ecx + eax + 0x6c] */ r_edx = (u32)(r_ecx+r_eax+0x6cu);
    /* 0041e370: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e371: call 0x463a40 */ r_esp -= 4; W32(r_esp, 0x41e376u); f_00463a40();
    /* 0041e376: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e379: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e37b: je 0x41e384 */ if (fZ) goto L_0041e384;
L_0041e37d:; BB(0x0041e37d);
    /* 0041e37d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0041e37f: jmp 0x41e440 */ goto L_0041e440;
L_0041e384:; BB(0x0041e384);
    /* 0041e384: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0041e388: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e389: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x41e38eu); f_00641280();
    /* 0041e38e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e391: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e394: jl 0x41e3dc */ if ((fS!=fO)) goto L_0041e3dc;
L_0041e396:; BB(0x0041e396);
    /* 0041e396: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e398: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0041e39a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041e39d: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041e3a0: mov edx, dword ptr [0x790358] */ r_edx = R32((u32)(0x790358u));
    /* 0041e3a6: lea eax, [edx + ecx + 0x6c] */ r_eax = (u32)(r_edx+r_ecx+0x6cu);
    /* 0041e3aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e3ab: call 0x463a40 */ r_esp -= 4; W32(r_esp, 0x41e3b0u); f_00463a40();
    /* 0041e3b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e3b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e3b5: jne 0x41e3d8 */ if (!fZ) goto L_0041e3d8;
L_0041e3b7:; BB(0x0041e3b7);
    /* 0041e3b7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e3b9: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0041e3bb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041e3be: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041e3c1: mov edx, dword ptr [0x790358] */ r_edx = R32((u32)(0x790358u));
    /* 0041e3c7: lea eax, [edx + ecx + 0x6c] */ r_eax = (u32)(r_edx+r_ecx+0x6cu);
    /* 0041e3cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e3cc: call 0x463a40 */ r_esp -= 4; W32(r_esp, 0x41e3d1u); f_00463a40();
    /* 0041e3d1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e3d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e3d6: je 0x41e3dc */ if (fZ) goto L_0041e3dc;
L_0041e3d8:; BB(0x0041e3d8);
    /* 0041e3d8: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0041e3da: jmp 0x41e440 */ goto L_0041e440;
L_0041e3dc:; BB(0x0041e3dc);
    /* 0041e3dc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e3de: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0041e3e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e3e3: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x41e3e8u); f_00641280();
    /* 0041e3e8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e3eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e3ec: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041e3ef: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041e3f2: mov eax, dword ptr [0x790358] */ r_eax = R32((u32)(0x790358u));
    /* 0041e3f7: lea ecx, [eax + edx + 0x6c] */ r_ecx = (u32)(r_eax+r_edx+0x6cu);
    /* 0041e3fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e3fc: call 0x463a40 */ r_esp -= 4; W32(r_esp, 0x41e401u); f_00463a40();
    /* 0041e401: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e404: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e406: jne 0x41e43e */ if (!fZ) goto L_0041e43e;
L_0041e408:; BB(0x0041e408);
    /* 0041e408: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e40a: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0041e40c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041e40f: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041e412: mov eax, dword ptr [0x790358] */ r_eax = R32((u32)(0x790358u));
    /* 0041e417: lea ecx, [eax + edx + 0x6c] */ r_ecx = (u32)(r_eax+r_edx+0x6cu);
    /* 0041e41b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e41c: call 0x463a40 */ r_esp -= 4; W32(r_esp, 0x41e421u); f_00463a40();
    /* 0041e421: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e424: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e426: je 0x41e43e */ if (fZ) goto L_0041e43e;
L_0041e428:; BB(0x0041e428);
    /* 0041e428: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0041e42c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e42d: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x41e432u); f_00641280();
    /* 0041e432: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e435: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e438: jge 0x41e43e */ if ((fS==fO)) goto L_0041e43e;
L_0041e43a:; BB(0x0041e43a);
    /* 0041e43a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0041e43c: jmp 0x41e440 */ goto L_0041e440;
L_0041e43e:; BB(0x0041e43e);
    /* 0041e43e: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0041e440:; BB(0x0041e440);
    /* 0041e440: mov esp, ebp */ r_esp = r_ebp;
    /* 0041e442: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041e443: ret 4 */ FN_RET(0x0041e290); r_esp += 8; return;
}

void f_0041e450(void) /* sub_41E450 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041e450);
    /* 0041e450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041e451: mov ebp, esp */ r_ebp = r_esp;
    /* 0041e453: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041e456: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0041e459: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e45b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0041e45e: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0041e460: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e461: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x41e466u); f_0064c8a0();
    /* 0041e466: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e469: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0041e46c: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0041e46f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e471: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0041e474: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e475: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x41e47au); f_0064c8a0();
    /* 0041e47a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e47d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0041e480: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0041e483: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041e486: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e487: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041e48a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e48b: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0041e48e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e48f: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0041e492: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x41e497u); f_0064c5c0();
    /* 0041e497: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041e49a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e49b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041e49e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e49f: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 0041e4a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e4a3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041e4a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e4a7: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41e4acu); f_005dcb00();
    /* 0041e4ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e4af: mov ecx, eax */ r_ecx = r_eax;
    /* 0041e4b1: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x41e4b6u); f_005d5a90();
    /* 0041e4b6: mov ecx, eax */ r_ecx = r_eax;
    /* 0041e4b8: call 0x64c7a0 */ r_esp -= 4; W32(r_esp, 0x41e4bdu); f_0064c7a0();
    /* 0041e4bd: mov esp, ebp */ r_esp = r_ebp;
    /* 0041e4bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041e4c0: ret 8 */ FN_RET(0x0041e450); r_esp += 12; return;
}

void f_0041e4d0(void) /* sub_41E4D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041e4d0);
    /* 0041e4d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041e4d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0041e4d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e4d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0041e4d7: movzx eax, byte ptr [ebp + 0x10] */ r_eax = (u32)R8((u32)(r_ebp+0x10u));
    /* 0041e4db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e4dd: je 0x41e4fb */ if (fZ) goto L_0041e4fb;
L_0041e4df:; BB(0x0041e4df);
    /* 0041e4df: push 0x6b5ba4 */ { u32 v = 0x6b5ba4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e4e4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41e4e9u); f_00630f40();
    /* 0041e4e9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e4ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e4ed: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0041e4f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e4f1: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41e4f6u); f_00686d8e();
    /* 0041e4f6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e4f9: jmp 0x41e537 */ goto L_0041e537;
L_0041e4fb:; BB(0x0041e4fb);
    /* 0041e4fb: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e4ff: jle 0x41e51d */ if ((fZ||fS!=fO)) goto L_0041e51d;
L_0041e501:; BB(0x0041e501);
    /* 0041e501: push 0x6b5b7c */ { u32 v = 0x6b5b7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041e506: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41e50bu); f_00630f40();
    /* 0041e50b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e50e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e50f: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0041e512: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e513: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41e518u); f_00686d8e();
    /* 0041e518: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e51b: jmp 0x41e537 */ goto L_0041e537;
L_0041e51d:; BB(0x0041e51d);
    /* 0041e51d: push 0x6b5b58 */ { u32 v = 0x6b5b58u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e522: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x41e527u); f_00630f40();
    /* 0041e527: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e52a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e52b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0041e52e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e52f: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x41e534u); f_00686d8e();
    /* 0041e534: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041e537:; BB(0x0041e537);
    /* 0041e537: mov esp, ebp */ r_esp = r_ebp;
    /* 0041e539: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041e53a: ret 0x10 */ FN_RET(0x0041e4d0); r_esp += 20; return;
}

