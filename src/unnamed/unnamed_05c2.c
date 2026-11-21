#include "protos.h"

void f_005c21c0(void) /* sub_5C21C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c21c0);
    /* 005c21c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c21c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c21c3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c21c6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c21c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c21cb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005c21d1: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x5c21d6u); f_00637810();
    /* 005c21d6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c21d9: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 005c21dc: fld1  */ FPUSH(1.0);
    /* 005c21de: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005c21e0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c21e3: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 005c21e6: call 0x686fd8 */ r_esp -= 4; W32(r_esp, 0x5c21ebu); f_00686fd8();
    /* 005c21eb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c21ee: fsubr qword ptr [0x6d1d80] */ ST(0) = R_F64((u32)(0x6d1d80u)) - ST(0);
    /* 005c21f4: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 005c21f7: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 005c21fa: mov esp, ebp */ r_esp = r_ebp;
    /* 005c21fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c21fd: ret  */ FN_RET(0x005c21c0); r_esp += 4; return;
}

void f_005c2200(void) /* sub_5C2200 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c2200);
    /* 005c2200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c2201: mov ebp, esp */ r_ebp = r_esp;
    /* 005c2203: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c2205: push 0x6a8585 */ { u32 v = 0x6a8585u; r_esp -= 4; W32(r_esp, v); }
    /* 005c220a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c2210: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2211: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c2214: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c2219: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c221b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c221c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c221f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c2225: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005c222c: jmp 0x5c2237 */ goto L_005c2237;
L_005c222e:; BB(0x005c222e);
    /* 005c222e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c2231: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c2234: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005c2237:; BB(0x005c2237);
    /* 005c2237: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c223a: imul ecx, ecx, 0x10c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x10cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c2240: cmp dword ptr [ecx + 0x759948], 0 */ {  u32 a = R32((u32)(r_ecx+0x759948u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2247: je 0x5c22bc */ if (fZ) goto L_005c22bc;
L_005c2249:; BB(0x005c2249);
    /* 005c2249: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c224c: imul edx, edx, 0x10c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x10cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c2252: mov eax, dword ptr [edx + 0x759948] */ r_eax = R32((u32)(r_edx+0x759948u));
    /* 005c2258: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c225b: jne 0x5c22b7 */ if (!fZ) goto L_005c22b7;
L_005c225d:; BB(0x005c225d);
    /* 005c225d: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c225f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c2264u); f_00686d82();
    /* 005c2264: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c2267: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005c226a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c2271: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2275: je 0x5c2284 */ if (fZ) goto L_005c2284;
L_005c2277:; BB(0x005c2277);
    /* 005c2277: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c227a: call 0x5c22d0 */ r_esp -= 4; W32(r_esp, 0x5c227fu); f_005c22d0();
    /* 005c227f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c2282: jmp 0x5c228b */ goto L_005c228b;
L_005c2284:; BB(0x005c2284);
    /* 005c2284: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005c228b:; BB(0x005c228b);
    /* 005c228b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c228e: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005c2291: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c2298: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c229b: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005c229e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c22a1: imul eax, eax, 0x10c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x10cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c22a7: add eax, 0x759948 */ {  u32 a = r_eax; u32 b = 0x759948u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c22ac: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c22af: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 005c22b2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c22b5: jmp 0x5c22be */ goto L_005c22be;
L_005c22b7:; BB(0x005c22b7);
    /* 005c22b7: jmp 0x5c222e */ goto L_005c222e;
L_005c22bc:; BB(0x005c22bc);
    /* 005c22bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005c22be:; BB(0x005c22be);
    /* 005c22be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c22c1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c22c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c22c9: mov esp, ebp */ r_esp = r_ebp;
    /* 005c22cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c22cc: ret  */ FN_RET(0x005c2200); r_esp += 4; return;
}

