#include "protos.h"

void f_0057f6d0(void) /* kenodisplay::func_0057f6d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057f6d0);
    /* 0057f6d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057f6d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057f6d3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057f6d6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0057f6d9: cmp dword ptr [ebp + 8], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057f6e0: jle 0x57f6f9 */ if ((fZ||fS!=fO)) goto L_0057f6f9;
L_0057f6e2:; BB(0x0057f6e2);
    /* 0057f6e2: push 0x1ca */ { u32 v = 0x1cau; r_esp -= 4; W32(r_esp, v); }
    /* 0057f6e7: push 0x6cc024 */ { u32 v = 0x6cc024u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f6ec: push 0x6cc018 */ { u32 v = 0x6cc018u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f6f1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x57f6f6u); f_005e9f20();
    /* 0057f6f6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0057f6f9:; BB(0x0057f6f9);
    /* 0057f6f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057f6fc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0057f6fd: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 0057f702: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0057f702, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0057f702, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0057f704: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0057f707: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057f70a: imul edx, edx, 0x3e8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3e8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057f710: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057f713: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0057f715: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0057f716: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0057f71b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0057f71b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0057f71b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0057f71d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0057f720: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057f723: imul edx, edx, 0x3e8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3e8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057f729: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057f72c: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0057f72e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057f731: imul ecx, ecx, 0x64 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x64u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057f734: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0057f736: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0057f737: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0057f73c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0057f73c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0057f73c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0057f73e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0057f741: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057f744: imul edx, edx, 0x3e8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3e8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057f74a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057f74d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0057f74f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057f752: imul ecx, ecx, 0x64 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x64u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057f755: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0057f757: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057f75a: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057f75d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0057f75f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0057f762: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057f765: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 0057f768: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0057f76b: jns 0x57f774 */ if (!fS) goto L_0057f774;
L_0057f76d:; BB(0x0057f76d);
    /* 0057f76d: mov dword ptr [ebp - 0xc], 9 */ W32((u32)(r_ebp+0xfffffff4u), 0x9u);
L_0057f774:; BB(0x0057f774);
    /* 0057f774: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057f777: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057f778: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057f77b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0057f77e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057f781: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0057f784: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057f786: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0057f78c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f78eu); call_ind(t); }
    /* 0057f78e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057f791: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); }
    /* 0057f794: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0057f797: jns 0x57f7a0 */ if (!fS) goto L_0057f7a0;
L_0057f799:; BB(0x0057f799);
    /* 0057f799: mov dword ptr [ebp - 0xc], 9 */ W32((u32)(r_ebp+0xfffffff4u), 0x9u);
L_0057f7a0:; BB(0x0057f7a0);
    /* 0057f7a0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057f7a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057f7a4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057f7a7: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0057f7aa: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057f7ad: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0057f7b0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057f7b2: mov ecx, eax */ r_ecx = r_eax;
    /* 0057f7b4: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0057f7ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f7bcu); call_ind(t); }
    /* 0057f7bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057f7bf: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); }
    /* 0057f7c2: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0057f7c5: jns 0x57f7ce */ if (!fS) goto L_0057f7ce;
L_0057f7c7:; BB(0x0057f7c7);
    /* 0057f7c7: mov dword ptr [ebp - 0xc], 9 */ W32((u32)(r_ebp+0xfffffff4u), 0x9u);
L_0057f7ce:; BB(0x0057f7ce);
    /* 0057f7ce: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057f7d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057f7d2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057f7d5: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0057f7d8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057f7db: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0057f7de: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057f7e0: mov ecx, eax */ r_ecx = r_eax;
    /* 0057f7e2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0057f7e8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f7eau); call_ind(t); }
    /* 0057f7ea: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057f7ed: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); }
    /* 0057f7f0: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0057f7f3: jns 0x57f7fc */ if (!fS) goto L_0057f7fc;
L_0057f7f5:; BB(0x0057f7f5);
    /* 0057f7f5: mov dword ptr [ebp - 0xc], 9 */ W32((u32)(r_ebp+0xfffffff4u), 0x9u);
L_0057f7fc:; BB(0x0057f7fc);
    /* 0057f7fc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057f7ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057f800: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057f803: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0057f806: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057f809: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0057f80c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057f80e: mov ecx, eax */ r_ecx = r_eax;
    /* 0057f810: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0057f816: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f818u); call_ind(t); }
    /* 0057f818: mov esp, ebp */ r_esp = r_ebp;
    /* 0057f81a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057f81b: ret 4 */ FN_RET(0x0057f6d0); r_esp += 8; return;
}

void f_005825a0(void) /* kenodisplay::func_005825a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005825a0);
    /* 005825a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005825a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005825a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005825a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005825a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005825aa: movzx ecx, byte ptr [eax + 0x24] */ r_ecx = (u32)R8((u32)(r_eax+0x24u));
    /* 005825ae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005825b0: je 0x5825b4 */ if (fZ) goto L_005825b4;
L_005825b2:; BB(0x005825b2);
    /* 005825b2: jmp 0x582600 */ goto L_00582600;
L_005825b4:; BB(0x005825b4);
    /* 005825b4: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005825b8: jl 0x5825e5 */ if ((fS!=fO)) goto L_005825e5;
L_005825ba:; BB(0x005825ba);
    /* 005825ba: cmp dword ptr [ebp + 8], 0x50 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005825be: jg 0x5825e5 */ if ((!fZ&&fS==fO)) goto L_005825e5;
L_005825c0:; BB(0x005825c0);
    /* 005825c0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005825c3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005825c6: mov ecx, dword ptr [eax + edx*4 + 0x41d4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x41d4u));
    /* 005825cd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005825d0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005825d3: mov edx, dword ptr [eax + edx*4 + 0x41d4] */ r_edx = R32((u32)(r_eax+r_edx*4+0x41d4u));
    /* 005825da: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005825dc: mov ecx, edx */ r_ecx = r_edx;
    /* 005825de: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005825e1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5825e3u); call_ind(t); }
    /* 005825e3: jmp 0x582600 */ goto L_00582600;
L_005825e5:; BB(0x005825e5);
    /* 005825e5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005825e7: jne 0x582600 */ if (!fZ) goto L_00582600;
L_005825e9:; BB(0x005825e9);
    /* 005825e9: push 0x49e */ { u32 v = 0x49eu; r_esp -= 4; W32(r_esp, v); }
    /* 005825ee: push 0x6cc024 */ { u32 v = 0x6cc024u; r_esp -= 4; W32(r_esp, v); }
    /* 005825f3: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 005825f8: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5825fdu); f_005e9f20();
    /* 005825fd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00582600:; BB(0x00582600);
    /* 00582600: mov esp, ebp */ r_esp = r_ebp;
    /* 00582602: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00582603: ret 4 */ FN_RET(0x005825a0); r_esp += 8; return;
}

