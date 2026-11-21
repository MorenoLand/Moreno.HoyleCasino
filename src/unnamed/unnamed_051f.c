#include "protos.h"

void f_0051f000(void) /* sub_51F000 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051f000);
    /* 0051f000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051f001: mov ebp, esp */ r_ebp = r_esp;
    /* 0051f003: sub esp, 0x21c */ {  u32 a = r_esp; u32 b = 0x21cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051f009: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0051f00e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051f010: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0051f013: mov dword ptr [ebp - 0x21c], ecx */ W32((u32)(r_ebp+0xfffffde4u), r_ecx);
    /* 0051f019: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0051f020: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0051f027: jmp 0x51f032 */ goto L_0051f032;
L_0051f029:; BB(0x0051f029);
    /* 0051f029: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051f02c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051f02f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0051f032:; BB(0x0051f032);
    /* 0051f032: mov ecx, dword ptr [ebp - 0x21c] */ r_ecx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0051f038: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051f03b: cmp edx, dword ptr [ecx + 0x22c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x22cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051f041: jge 0x51f0fc */ if ((fS==fO)) goto L_0051f0fc;
L_0051f047:; BB(0x0051f047);
    /* 0051f047: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f049: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051f04c: mov ecx, dword ptr [ebp - 0x21c] */ r_ecx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0051f052: mov edx, dword ptr [ecx + eax*4 + 0x3c0] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x3c0u));
    /* 0051f059: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f05a: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x51f05fu); f_0064c8a0();
    /* 0051f05f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051f062: mov dword ptr [ebp - 0x218], eax */ W32((u32)(r_ebp+0xfffffde8u), r_eax);
    /* 0051f068: mov dword ptr [ebp - 0x214], edx */ W32((u32)(r_ebp+0xfffffdecu), r_edx);
    /* 0051f06e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f070: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f072: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f074: lea eax, [ebp - 0x210] */ r_eax = (u32)(r_ebp+0xfffffdf0u);
    /* 0051f07a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f07b: mov ecx, dword ptr [ebp - 0x214] */ r_ecx = R32((u32)(r_ebp+0xfffffdecu));
    /* 0051f081: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f082: mov edx, dword ptr [ebp - 0x218] */ r_edx = R32((u32)(r_ebp+0xfffffde8u));
    /* 0051f088: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f089: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x51f08eu); f_0064c8d0();
    /* 0051f08e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051f091: lea eax, [ebp - 0x210] */ r_eax = (u32)(r_ebp+0xfffffdf0u);
    /* 0051f097: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f098: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051f09b: imul ecx, ecx, 0x64 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x64u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051f09e: mov edx, dword ptr [ebp - 0x21c] */ r_edx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0051f0a4: lea eax, [edx + ecx + 0x230] */ r_eax = (u32)(r_edx+r_ecx+0x230u);
    /* 0051f0ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f0ac: push 0x6b7a5c */ { u32 v = 0x6b7a5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051f0b1: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 0051f0b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f0b8: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51f0beu); call_ind(t); }
    /* 0051f0be: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051f0c1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051f0c3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f0c5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f0c7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051f0ca: imul edx, edx, 0x19 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x19u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051f0cd: add edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051f0d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f0d1: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f0d3: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051f0d5: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f0da: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051f0dc: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 0051f0e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f0e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051f0e6: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051f0e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f0ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f0ec: mov ecx, dword ptr [ebp - 0x21c] */ r_ecx = R32((u32)(r_ebp+0xfffffde4u));
    /* 0051f0f2: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51f0f7u); f_005fa5b0();
    /* 0051f0f7: jmp 0x51f029 */ goto L_0051f029;
L_0051f0fc:; BB(0x0051f0fc);
    /* 0051f0fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051f0ff: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051f101: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x51f106u); f_00686d72();
    /* 0051f106: mov esp, ebp */ r_esp = r_ebp;
    /* 0051f108: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051f109: ret  */ FN_RET(0x0051f000); r_esp += 4; return;
}

void f_0051f420(void) /* sub_51F420 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051f420);
    /* 0051f420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051f421: mov ebp, esp */ r_ebp = r_esp;
    /* 0051f423: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f424: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051f427: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051f42a: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 0051f430: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051f433: jne 0x51f437 */ if (!fZ) goto L_0051f437;
L_0051f435:; BB(0x0051f435);
    /* 0051f435: jmp 0x51f476 */ goto L_0051f476;
L_0051f437:; BB(0x0051f437);
    /* 0051f437: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0051f43a: mov eax, dword ptr [edx*4 + 0x721a74] */ r_eax = R32((u32)(r_edx*4+0x721a74u));
    /* 0051f441: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f442: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051f445: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x51f44au); f_005f1ad0();
    /* 0051f44a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051f44d: call 0x51fea0 */ r_esp -= 4; W32(r_esp, 0x51f452u); f_0051fea0();
    /* 0051f452: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051f455: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0051f458: mov dword ptr [ecx + 0x80], edx */ W32((u32)(r_ecx+0x80u), r_edx);
    /* 0051f45e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051f461: call 0x51f860 */ r_esp -= 4; W32(r_esp, 0x51f466u); f_0051f860();
    /* 0051f466: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051f469: call 0x51fbe0 */ r_esp -= 4; W32(r_esp, 0x51f46eu); f_0051fbe0();
    /* 0051f46e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051f471: call 0x51fd90 */ r_esp -= 4; W32(r_esp, 0x51f476u); f_0051fd90();
L_0051f476:; BB(0x0051f476);
    /* 0051f476: mov esp, ebp */ r_esp = r_ebp;
    /* 0051f478: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051f479: ret 4 */ FN_RET(0x0051f420); r_esp += 8; return;
}

void f_0051f550(void) /* sub_51F550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051f550);
    /* 0051f550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051f551: mov ebp, esp */ r_ebp = r_esp;
    /* 0051f553: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051f556: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051f559: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051f55d: jne 0x51f564 */ if (!fZ) goto L_0051f564;
L_0051f55f:; BB(0x0051f55f);
    /* 0051f55f: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051f562: jmp 0x51f5ab */ goto L_0051f5ab;
L_0051f564:; BB(0x0051f564);
    /* 0051f564: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0051f567: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0051f56a: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0051f56e: ja 0x51f5a8 */ if ((!fC&&!fZ)) goto L_0051f5a8;
L_0051f570:; BB(0x0051f570);
    /* 0051f570: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051f573: jmp dword ptr [ecx*4 + 0x51f5b4] */ { u32 t = R32((u32)(r_ecx*4+0x51f5b4u)); switch (t) { case 0x51f57au: goto L_0051f57a; case 0x51f59au: goto L_0051f59a; case 0x51f585u: goto L_0051f585; case 0x51f5a1u: goto L_0051f5a1; case 0x51f57eu: goto L_0051f57e; case 0x51f593u: goto L_0051f593; case 0x51f58cu: goto L_0051f58c; default: UNSUP(0x0051f573, "jump table entry is not a known target"); } }
L_0051f57a:; BB(0x0051f57a);
    /* 0051f57a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051f57c: jmp 0x51f5ab */ goto L_0051f5ab;
L_0051f57e:; BB(0x0051f57e);
    /* 0051f57e: mov eax, 1 */ r_eax = 0x1u;
    /* 0051f583: jmp 0x51f5ab */ goto L_0051f5ab;
L_0051f585:; BB(0x0051f585);
    /* 0051f585: mov eax, 2 */ r_eax = 0x2u;
    /* 0051f58a: jmp 0x51f5ab */ goto L_0051f5ab;
L_0051f58c:; BB(0x0051f58c);
    /* 0051f58c: mov eax, 3 */ r_eax = 0x3u;
    /* 0051f591: jmp 0x51f5ab */ goto L_0051f5ab;
L_0051f593:; BB(0x0051f593);
    /* 0051f593: mov eax, 5 */ r_eax = 0x5u;
    /* 0051f598: jmp 0x51f5ab */ goto L_0051f5ab;
L_0051f59a:; BB(0x0051f59a);
    /* 0051f59a: mov eax, 6 */ r_eax = 0x6u;
    /* 0051f59f: jmp 0x51f5ab */ goto L_0051f5ab;
L_0051f5a1:; BB(0x0051f5a1);
    /* 0051f5a1: mov eax, 7 */ r_eax = 0x7u;
    /* 0051f5a6: jmp 0x51f5ab */ goto L_0051f5ab;
L_0051f5a8:; BB(0x0051f5a8);
    /* 0051f5a8: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0051f5ab:; BB(0x0051f5ab);
    /* 0051f5ab: mov esp, ebp */ r_esp = r_ebp;
    /* 0051f5ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051f5ae: ret 4 */ FN_RET(0x0051f550); r_esp += 8; return;
}

void f_0051f610(void) /* sub_51F610 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051f610);
    /* 0051f610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051f611: mov ebp, esp */ r_ebp = r_esp;
    /* 0051f613: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051f616: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0051f619: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0051f620: jmp 0x51f62b */ goto L_0051f62b;
L_0051f622:; BB(0x0051f622);
    /* 0051f622: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051f625: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051f628: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0051f62b:; BB(0x0051f62b);
    /* 0051f62b: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051f62f: jge 0x51f64e */ if ((fS==fO)) goto L_0051f64e;
L_0051f631:; BB(0x0051f631);
    /* 0051f631: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051f634: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f635: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0051f638: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f639: call 0x520770 */ r_esp -= 4; W32(r_esp, 0x51f63eu); f_00520770();
    /* 0051f63e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051f641: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0051f644: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051f646: je 0x51f64c */ if (fZ) goto L_0051f64c;
L_0051f648:; BB(0x0051f648);
    /* 0051f648: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0051f64a: jmp 0x51f650 */ goto L_0051f650;
L_0051f64c:; BB(0x0051f64c);
    /* 0051f64c: jmp 0x51f622 */ goto L_0051f622;
L_0051f64e:; BB(0x0051f64e);
    /* 0051f64e: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0051f650:; BB(0x0051f650);
    /* 0051f650: mov esp, ebp */ r_esp = r_ebp;
    /* 0051f652: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051f653: ret 4 */ FN_RET(0x0051f610); r_esp += 8; return;
}

void f_0051f660(void) /* sub_51F660 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051f660);
    /* 0051f660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051f661: mov ebp, esp */ r_ebp = r_esp;
    /* 0051f663: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051f666: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0051f669: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0051f670: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0051f677: jmp 0x51f682 */ goto L_0051f682;
L_0051f679:; BB(0x0051f679);
    /* 0051f679: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051f67c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051f67f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0051f682:; BB(0x0051f682);
    /* 0051f682: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051f686: jge 0x51f6aa */ if ((fS==fO)) goto L_0051f6aa;
L_0051f688:; BB(0x0051f688);
    /* 0051f688: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051f68b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f68c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0051f68f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f690: call 0x520770 */ r_esp -= 4; W32(r_esp, 0x51f695u); f_00520770();
    /* 0051f695: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051f698: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0051f69b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051f69d: je 0x51f6a8 */ if (fZ) goto L_0051f6a8;
L_0051f69f:; BB(0x0051f69f);
    /* 0051f69f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051f6a2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051f6a5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0051f6a8:; BB(0x0051f6a8);
    /* 0051f6a8: jmp 0x51f679 */ goto L_0051f679;
L_0051f6aa:; BB(0x0051f6aa);
    /* 0051f6aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051f6ad: mov esp, ebp */ r_esp = r_ebp;
    /* 0051f6af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051f6b0: ret 4 */ FN_RET(0x0051f660); r_esp += 8; return;
}

void f_0051f6e0(void) /* sub_51F6E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051f6e0);
    /* 0051f6e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051f6e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0051f6e3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051f6e6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0051f6e9: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0051f6eb: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0051f6f0: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0051f6f3: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x51f6f8u); f_005fb2b0();
    /* 0051f6f8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0051f6fb: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051f6ff: je 0x51f70e */ if (fZ) goto L_0051f70e;
L_0051f701:; BB(0x0051f701);
    /* 0051f701: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051f704: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051f706: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051f709: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0051f70c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51f70eu); call_ind(t); }
L_0051f70e:; BB(0x0051f70e);
    /* 0051f70e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0051f715: jmp 0x51f720 */ goto L_0051f720;
L_0051f717:; BB(0x0051f717);
    /* 0051f717: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051f71a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051f71d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0051f720:; BB(0x0051f720);
    /* 0051f720: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051f724: jge 0x51f74b */ if ((fS==fO)) goto L_0051f74b;
L_0051f726:; BB(0x0051f726);
    /* 0051f726: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051f729: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051f72c: mov ecx, dword ptr [eax + edx*4 + 0x94] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x94u));
    /* 0051f733: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051f736: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051f739: mov edx, dword ptr [eax + edx*4 + 0x94] */ r_edx = R32((u32)(r_eax+r_edx*4+0x94u));
    /* 0051f740: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0051f742: mov ecx, edx */ r_ecx = r_edx;
    /* 0051f744: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0051f747: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51f749u); call_ind(t); }
    /* 0051f749: jmp 0x51f717 */ goto L_0051f717;
L_0051f74b:; BB(0x0051f74b);
    /* 0051f74b: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051f74d: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0051f752: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0051f755: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x51f75au); f_005fb2b0();
    /* 0051f75a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0051f75d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051f760: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051f762: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051f765: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0051f768: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51f76au); call_ind(t); }
    /* 0051f76a: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0051f76c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0051f772: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0051f775: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x51f77au); f_005fb2b0();
    /* 0051f77a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0051f77d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051f780: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051f782: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051f785: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0051f788: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51f78au); call_ind(t); }
    /* 0051f78a: mov esp, ebp */ r_esp = r_ebp;
    /* 0051f78c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051f78d: ret  */ FN_RET(0x0051f6e0); r_esp += 4; return;
}

void f_0051f790(void) /* sub_51F790 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051f790);
    /* 0051f790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051f791: mov ebp, esp */ r_ebp = r_esp;
    /* 0051f793: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051f796: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0051f799: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0051f79b: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0051f7a0: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0051f7a3: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x51f7a8u); f_005fb2b0();
    /* 0051f7a8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0051f7ab: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051f7af: je 0x51f7d2 */ if (fZ) goto L_0051f7d2;
L_0051f7b1:; BB(0x0051f7b1);
    /* 0051f7b1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0051f7b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f7b5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051f7b8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051f7ba: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051f7bd: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0051f7c3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51f7c5u); call_ind(t); }
    /* 0051f7c5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051f7c8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051f7ca: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051f7cd: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0051f7d0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51f7d2u); call_ind(t); }
L_0051f7d2:; BB(0x0051f7d2);
    /* 0051f7d2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0051f7d9: jmp 0x51f7e4 */ goto L_0051f7e4;
L_0051f7db:; BB(0x0051f7db);
    /* 0051f7db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051f7de: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051f7e1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0051f7e4:; BB(0x0051f7e4);
    /* 0051f7e4: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051f7e8: jge 0x51f849 */ if ((fS==fO)) goto L_0051f849;
L_0051f7ea:; BB(0x0051f7ea);
    /* 0051f7ea: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051f7ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f7ee: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0051f7f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f7f2: call 0x520770 */ r_esp -= 4; W32(r_esp, 0x51f7f7u); f_00520770();
    /* 0051f7f7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051f7fa: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0051f7fd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051f7ff: je 0x51f826 */ if (fZ) goto L_0051f826;
L_0051f801:; BB(0x0051f801);
    /* 0051f801: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051f804: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051f807: mov ecx, dword ptr [eax + edx*4 + 0x94] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x94u));
    /* 0051f80e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051f811: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051f814: mov edx, dword ptr [eax + edx*4 + 0x94] */ r_edx = R32((u32)(r_eax+r_edx*4+0x94u));
    /* 0051f81b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0051f81d: mov ecx, edx */ r_ecx = r_edx;
    /* 0051f81f: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0051f822: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51f824u); call_ind(t); }
    /* 0051f824: jmp 0x51f847 */ goto L_0051f847;
L_0051f826:; BB(0x0051f826);
    /* 0051f826: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051f829: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051f82c: mov edx, dword ptr [ecx + eax*4 + 0x94] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x94u));
    /* 0051f833: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051f836: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051f839: mov ecx, dword ptr [ecx + eax*4 + 0x94] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x94u));
    /* 0051f840: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0051f842: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0051f845: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51f847u); call_ind(t); }
L_0051f847:; BB(0x0051f847);
    /* 0051f847: jmp 0x51f7db */ goto L_0051f7db;
L_0051f849:; BB(0x0051f849);
    /* 0051f849: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0051f84c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f84d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051f850: call 0x51fc80 */ r_esp -= 4; W32(r_esp, 0x51f855u); f_0051fc80();
    /* 0051f855: mov esp, ebp */ r_esp = r_ebp;
    /* 0051f857: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051f858: ret 4 */ FN_RET(0x0051f790); r_esp += 8; return;
}

void f_0051f860(void) /* sub_51F860 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051f860);
    /* 0051f860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051f861: mov ebp, esp */ r_ebp = r_esp;
    /* 0051f863: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051f865: push 0x6a3e58 */ { u32 v = 0x6a3e58u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f86a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0051f870: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f871: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051f874: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0051f879: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051f87b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f87c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0051f87f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0051f885: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0051f888: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0051f88f: mov dword ptr [ebp - 0x14], 8 */ W32((u32)(r_ebp+0xffffffecu), 0x8u);
    /* 0051f896: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0051f89d: jmp 0x51f8a8 */ goto L_0051f8a8;
L_0051f89f:; BB(0x0051f89f);
    /* 0051f89f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051f8a2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051f8a5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0051f8a8:; BB(0x0051f8a8);
    /* 0051f8a8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051f8ab: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051f8ae: jge 0x51f9b5 */ if ((fS==fO)) goto L_0051f9b5;
L_0051f8b4:; BB(0x0051f8b4);
    /* 0051f8b4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051f8b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f8b8: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051f8bb: call 0x51f660 */ r_esp -= 4; W32(r_esp, 0x51f8c0u); f_0051f660();
    /* 0051f8c0: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051f8c3: jne 0x51f8d4 */ if (!fZ) goto L_0051f8d4;
L_0051f8c5:; BB(0x0051f8c5);
    /* 0051f8c5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051f8c8: mov ecx, dword ptr [eax*4 + 0x721ad4] */ r_ecx = R32((u32)(r_eax*4+0x721ad4u));
    /* 0051f8cf: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0051f8d2: jmp 0x51f8e1 */ goto L_0051f8e1;
L_0051f8d4:; BB(0x0051f8d4);
    /* 0051f8d4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051f8d7: mov eax, dword ptr [edx*4 + 0x721ab4] */ r_eax = R32((u32)(r_edx*4+0x721ab4u));
    /* 0051f8de: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
L_0051f8e1:; BB(0x0051f8e1);
    /* 0051f8e1: push 0x1e8 */ { u32 v = 0x1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f8e6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x51f8ebu); f_00686d82();
    /* 0051f8eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051f8ee: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0051f8f1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0051f8f8: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051f8fc: je 0x51f914 */ if (fZ) goto L_0051f914;
L_0051f8fe:; BB(0x0051f8fe);
    /* 0051f8fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f900: push 0x30e7fa */ { u32 v = 0x30e7fau; r_esp -= 4; W32(r_esp, v); }
    /* 0051f905: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f907: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051f90a: call 0x5202a0 */ r_esp -= 4; W32(r_esp, 0x51f90fu); f_005202a0();
    /* 0051f90f: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0051f912: jmp 0x51f91b */ goto L_0051f91b;
L_0051f914:; BB(0x0051f914);
    /* 0051f914: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0051f91b:; BB(0x0051f91b);
    /* 0051f91b: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0051f91e: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0051f921: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0051f928: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f92a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051f92c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051f92e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051f930: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051f932: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f937: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f939: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f93b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f93d: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051f940: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f941: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051f944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f945: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051f948: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f949: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0051f94f: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0051f952: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x51f957u); f_005f9de0();
    /* 0051f957: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f959: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f95b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f95d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f95f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051f962: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051f963: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0051f969: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0051f96c: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x51f971u); f_005fb300();
    /* 0051f971: mov ecx, eax */ r_ecx = r_eax;
    /* 0051f973: call 0x6023d0 */ r_esp -= 4; W32(r_esp, 0x51f978u); f_006023d0();
    /* 0051f978: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f97a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051f97d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f97e: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0051f983: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0051f986: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x51f98bu); f_005fb300();
    /* 0051f98b: mov ecx, eax */ r_ecx = r_eax;
    /* 0051f98d: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x51f992u); f_005eb700();
    /* 0051f992: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f997: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051f99a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051f99b: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0051f9a1: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0051f9a4: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x51f9a9u); f_005fb300();
    /* 0051f9a9: mov ecx, eax */ r_ecx = r_eax;
    /* 0051f9ab: call 0x5eb720 */ r_esp -= 4; W32(r_esp, 0x51f9b0u); f_005eb720();
    /* 0051f9b0: jmp 0x51f89f */ goto L_0051f89f;
L_0051f9b5:; BB(0x0051f9b5);
    /* 0051f9b5: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0051f9bc: jmp 0x51f9c7 */ goto L_0051f9c7;
L_0051f9be:; BB(0x0051f9be);
    /* 0051f9be: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051f9c1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051f9c4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0051f9c7:; BB(0x0051f9c7);
    /* 0051f9c7: cmp dword ptr [ebp - 0x18], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051f9cb: jge 0x51fae6 */ if ((fS==fO)) goto L_0051fae6;
L_0051f9d1:; BB(0x0051f9d1);
    /* 0051f9d1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051f9d4: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051f9d7: cmp dword ptr [edx + ecx*4 + 0x94], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051f9df: jne 0x51fa54 */ if (!fZ) goto L_0051fa54;
L_0051f9e1:; BB(0x0051f9e1);
    /* 0051f9e1: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0051f9e6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x51f9ebu); f_00686d82();
    /* 0051f9eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051f9ee: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0051f9f1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0051f9f8: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051f9fc: je 0x51fa0b */ if (fZ) goto L_0051fa0b;
L_0051f9fe:; BB(0x0051f9fe);
    /* 0051f9fe: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0051fa01: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x51fa06u); f_005f5bf0();
    /* 0051fa06: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0051fa09: jmp 0x51fa12 */ goto L_0051fa12;
L_0051fa0b:; BB(0x0051fa0b);
    /* 0051fa0b: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_0051fa12:; BB(0x0051fa12);
    /* 0051fa12: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0051fa15: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0051fa18: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0051fa1f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051fa22: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051fa25: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051fa28: mov dword ptr [edx + ecx*4 + 0x94], eax */ W32((u32)(r_edx+r_ecx*4+0x94u), r_eax);
    /* 0051fa2f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051fa31: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fa33: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fa35: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fa37: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051fa3a: mov edx, dword ptr [ecx*4 + 0x721aa0] */ r_edx = R32((u32)(r_ecx*4+0x721aa0u));
    /* 0051fa41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051fa42: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051fa45: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051fa48: mov ecx, dword ptr [ecx + eax*4 + 0x94] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x94u));
    /* 0051fa4f: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x51fa54u); f_005eae80();
L_0051fa54:; BB(0x0051fa54);
    /* 0051fa54: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051fa57: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051fa5a: mov ecx, dword ptr [eax + edx*4 + 0x94] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x94u));
    /* 0051fa61: mov dword ptr [ecx + 0x178], 5 */ W32((u32)(r_ecx+0x178u), 0x5u);
    /* 0051fa6b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051fa6e: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051fa71: mov ecx, dword ptr [eax + edx*4 + 0x94] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x94u));
    /* 0051fa78: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051fa7b: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051fa7e: mov edx, dword ptr [eax + edx*4 + 0x94] */ r_edx = R32((u32)(r_eax+r_edx*4+0x94u));
    /* 0051fa85: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0051fa87: mov ecx, edx */ r_ecx = r_edx;
    /* 0051fa89: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0051fa8c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51fa8eu); call_ind(t); }
    /* 0051fa8e: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051fa90: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x51fa95u); f_00686d82();
    /* 0051fa95: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051fa98: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0051fa9b: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0051faa2: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051faa6: je 0x51fab7 */ if (fZ) goto L_0051fab7;
L_0051faa8:; BB(0x0051faa8);
    /* 0051faa8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051faaa: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0051faad: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x51fab2u); f_00600a70();
    /* 0051fab2: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0051fab5: jmp 0x51fabe */ goto L_0051fabe;
L_0051fab7:; BB(0x0051fab7);
    /* 0051fab7: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0051fabe:; BB(0x0051fabe);
    /* 0051fabe: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0051fac1: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0051fac4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0051facb: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0051face: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051facf: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051fad2: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051fad5: mov ecx, dword ptr [eax + edx*4 + 0x94] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x94u));
    /* 0051fadc: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x51fae1u); f_005f5d50();
    /* 0051fae1: jmp 0x51f9be */ goto L_0051f9be;
L_0051fae6:; BB(0x0051fae6);
    /* 0051fae6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fae8: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051faed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051faef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051faf1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051faf3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051faf5: push 0x30e7a0 */ { u32 v = 0x30e7a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fafa: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0051fafc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fafe: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0051fb04: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0051fb07: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x51fb0cu); f_005f9ce0();
    /* 0051fb0c: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0051fb11: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x51fb16u); f_00686d82();
    /* 0051fb16: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051fb19: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0051fb1c: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0051fb23: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051fb27: je 0x51fb36 */ if (fZ) goto L_0051fb36;
L_0051fb29:; BB(0x0051fb29);
    /* 0051fb29: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0051fb2c: call 0x520380 */ r_esp -= 4; W32(r_esp, 0x51fb31u); f_00520380();
    /* 0051fb31: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0051fb34: jmp 0x51fb3d */ goto L_0051fb3d;
L_0051fb36:; BB(0x0051fb36);
    /* 0051fb36: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0051fb3d:; BB(0x0051fb3d);
    /* 0051fb3d: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0051fb40: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0051fb43: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0051fb4a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fb4c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051fb4e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051fb50: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051fb52: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051fb54: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fb59: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fb5b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fb5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fb5f: push 0x30e7fc */ { u32 v = 0x30e7fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0051fb64: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fb66: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0051fb69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051fb6a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0051fb70: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0051fb73: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x51fb78u); f_005f9de0();
    /* 0051fb78: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fb7a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fb7c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fb7e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fb80: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fb82: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0051fb88: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0051fb8b: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x51fb90u); f_005fb300();
    /* 0051fb90: mov ecx, eax */ r_ecx = r_eax;
    /* 0051fb92: call 0x6023d0 */ r_esp -= 4; W32(r_esp, 0x51fb97u); f_006023d0();
    /* 0051fb97: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fb99: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fb9b: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0051fba0: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0051fba3: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x51fba8u); f_005fb300();
    /* 0051fba8: mov ecx, eax */ r_ecx = r_eax;
    /* 0051fbaa: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x51fbafu); f_005eb700();
    /* 0051fbaf: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fbb4: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fbb6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0051fbbc: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0051fbbf: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x51fbc4u); f_005fb300();
    /* 0051fbc4: mov ecx, eax */ r_ecx = r_eax;
    /* 0051fbc6: call 0x5eb720 */ r_esp -= 4; W32(r_esp, 0x51fbcbu); f_005eb720();
    /* 0051fbcb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051fbce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0051fbd5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051fbd6: mov esp, ebp */ r_esp = r_ebp;
    /* 0051fbd8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051fbd9: ret  */ FN_RET(0x0051f860); r_esp += 4; return;
}

void f_0051fbe0(void) /* sub_51FBE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051fbe0);
    /* 0051fbe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051fbe1: mov ebp, esp */ r_ebp = r_esp;
    /* 0051fbe3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051fbe6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051fbe9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fbeb: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051fbf0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fbf2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fbf4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fbf6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fbf8: push 0x30e79e */ { u32 v = 0x30e79eu; r_esp -= 4; W32(r_esp, v); }
    /* 0051fbfd: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051fbff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fc01: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0051fc06: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0051fc09: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x51fc0eu); f_005f9ce0();
    /* 0051fc0e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fc10: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051fc15: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fc17: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fc19: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fc1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fc1d: push 0x30e79f */ { u32 v = 0x30e79fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051fc22: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0051fc24: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fc26: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0051fc2c: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0051fc2f: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x51fc34u); f_005f9ce0();
    /* 0051fc34: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051fc36: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0051fc3c: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0051fc3f: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x51fc44u); f_005fb2b0();
    /* 0051fc44: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0051fc47: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051fc4a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051fc4c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051fc4f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0051fc52: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51fc54u); call_ind(t); }
    /* 0051fc54: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0051fc56: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0051fc5c: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0051fc5f: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x51fc64u); f_005fb2b0();
    /* 0051fc64: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0051fc67: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051fc6a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051fc6c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051fc6f: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0051fc72: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51fc74u); call_ind(t); }
    /* 0051fc74: mov esp, ebp */ r_esp = r_ebp;
    /* 0051fc76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051fc77: ret  */ FN_RET(0x0051fbe0); r_esp += 4; return;
}

void f_0051fc80(void) /* sub_51FC80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051fc80);
    /* 0051fc80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051fc81: mov ebp, esp */ r_ebp = r_esp;
    /* 0051fc83: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051fc86: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0051fc89: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0051fc8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051fc8d: call 0x5204a0 */ r_esp -= 4; W32(r_esp, 0x51fc92u); f_005204a0();
    /* 0051fc92: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051fc95: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0051fc98: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051fc9c: jne 0x51fce4 */ if (!fZ) goto L_0051fce4;
L_0051fc9e:; BB(0x0051fc9e);
    /* 0051fc9e: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051fca0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0051fca6: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0051fca9: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x51fcaeu); f_005fb2b0();
    /* 0051fcae: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0051fcb1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fcb3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051fcb6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051fcb8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051fcbb: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0051fcc1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51fcc3u); call_ind(t); }
    /* 0051fcc3: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051fcc5: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0051fcca: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0051fccd: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x51fcd2u); f_005fb2b0();
    /* 0051fcd2: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0051fcd5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051fcd8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051fcda: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051fcdd: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0051fce0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51fce2u); call_ind(t); }
    /* 0051fce2: jmp 0x51fd2b */ goto L_0051fd2b;
L_0051fce4:; BB(0x0051fce4);
    /* 0051fce4: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051fce6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0051fcec: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0051fcef: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x51fcf4u); f_005fb2b0();
    /* 0051fcf4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0051fcf7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051fcfa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051fcfb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0051fcfe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051fd00: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051fd03: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0051fd09: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51fd0bu); call_ind(t); }
    /* 0051fd0b: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051fd0d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0051fd13: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0051fd16: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x51fd1bu); f_005fb2b0();
    /* 0051fd1b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0051fd1e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051fd21: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051fd23: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051fd26: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0051fd29: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51fd2bu); call_ind(t); }
L_0051fd2b:; BB(0x0051fd2b);
    /* 0051fd2b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0051fd2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051fd2f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051fd32: call 0x51f610 */ r_esp -= 4; W32(r_esp, 0x51fd37u); f_0051f610();
    /* 0051fd37: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0051fd3a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051fd3c: jne 0x51fd60 */ if (!fZ) goto L_0051fd60;
L_0051fd3e:; BB(0x0051fd3e);
    /* 0051fd3e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0051fd40: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0051fd46: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0051fd49: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x51fd4eu); f_005fb2b0();
    /* 0051fd4e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0051fd51: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051fd54: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051fd56: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051fd59: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0051fd5c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51fd5eu); call_ind(t); }
    /* 0051fd5e: jmp 0x51fd80 */ goto L_0051fd80;
L_0051fd60:; BB(0x0051fd60);
    /* 0051fd60: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0051fd62: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0051fd68: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0051fd6b: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x51fd70u); f_005fb2b0();
    /* 0051fd70: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0051fd73: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051fd76: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051fd78: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051fd7b: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0051fd7e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51fd80u); call_ind(t); }
L_0051fd80:; BB(0x0051fd80);
    /* 0051fd80: mov esp, ebp */ r_esp = r_ebp;
    /* 0051fd82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051fd83: ret 4 */ FN_RET(0x0051fc80); r_esp += 8; return;
}

void f_0051fd90(void) /* sub_51FD90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051fd90);
    /* 0051fd90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051fd91: mov ebp, esp */ r_ebp = r_esp;
    /* 0051fd93: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051fd96: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0051fd99: mov dword ptr [ebp - 8], 0x10 */ W32((u32)(r_ebp+0xfffffff8u), 0x10u);
    /* 0051fda0: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0051fda7: jmp 0x51fdb2 */ goto L_0051fdb2;
L_0051fda9:; BB(0x0051fda9);
    /* 0051fda9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051fdac: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051fdaf: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0051fdb2:; BB(0x0051fdb2);
    /* 0051fdb2: cmp dword ptr [ebp - 0xc], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051fdb6: jge 0x51fe96 */ if ((fS==fO)) goto L_0051fe96;
L_0051fdbc:; BB(0x0051fdbc);
    /* 0051fdbc: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0051fdc3: jmp 0x51fdce */ goto L_0051fdce;
L_0051fdc5:; BB(0x0051fdc5);
    /* 0051fdc5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051fdc8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051fdcb: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0051fdce:; BB(0x0051fdce);
    /* 0051fdce: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051fdd2: jge 0x51fe91 */ if ((fS==fO)) goto L_0051fe91;
L_0051fdd8:; BB(0x0051fdd8);
    /* 0051fdd8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051fddb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051fddc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051fddf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051fde0: call 0x520770 */ r_esp -= 4; W32(r_esp, 0x51fde5u); f_00520770();
    /* 0051fde5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051fde8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0051fdeb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051fded: je 0x51fe8c */ if (fZ) goto L_0051fe8c;
L_0051fdf3:; BB(0x0051fdf3);
    /* 0051fdf3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051fdf6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051fdf9: lea ecx, [eax + edx*4] */ r_ecx = (u32)(r_eax+r_edx*4);
    /* 0051fdfc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051fdff: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051fe02: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe03: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051fe06: call 0x51f660 */ r_esp -= 4; W32(r_esp, 0x51fe0bu); f_0051f660();
    /* 0051fe0b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051fe0e: jne 0x51fe4f */ if (!fZ) goto L_0051fe4f;
L_0051fe10:; BB(0x0051fe10);
    /* 0051fe10: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051fe13: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0051fe16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe18: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe1f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe25: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051fe28: mov edx, dword ptr [ecx*4 + 0x721b78] */ r_edx = R32((u32)(r_ecx*4+0x721b78u));
    /* 0051fe2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe30: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051fe33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe34: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe36: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0051fe3c: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0051fe3f: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x51fe44u); f_005f9ce0();
    /* 0051fe44: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051fe47: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051fe4a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0051fe4d: jmp 0x51fe8c */ goto L_0051fe8c;
L_0051fe4f:; BB(0x0051fe4f);
    /* 0051fe4f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051fe52: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0051fe55: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe57: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe5c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe5e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe60: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe62: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe64: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051fe67: mov edx, dword ptr [ecx*4 + 0x721af8] */ r_edx = R32((u32)(r_ecx*4+0x721af8u));
    /* 0051fe6e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe6f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051fe72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051fe75: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0051fe7b: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0051fe7e: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x51fe83u); f_005f9ce0();
    /* 0051fe83: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051fe86: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051fe89: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0051fe8c:; BB(0x0051fe8c);
    /* 0051fe8c: jmp 0x51fdc5 */ goto L_0051fdc5;
L_0051fe91:; BB(0x0051fe91);
    /* 0051fe91: jmp 0x51fda9 */ goto L_0051fda9;
L_0051fe96:; BB(0x0051fe96);
    /* 0051fe96: mov esp, ebp */ r_esp = r_ebp;
    /* 0051fe98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051fe99: ret  */ FN_RET(0x0051fd90); r_esp += 4; return;
}

