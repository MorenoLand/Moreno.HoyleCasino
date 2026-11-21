#include "protos.h"

void f_0058f450(void) /* sub_58F450 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058f450);
    /* 0058f450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058f451: mov ebp, esp */ r_ebp = r_esp;
    /* 0058f453: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058f456: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0058f459: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058f460: jmp 0x58f46b */ goto L_0058f46b;
L_0058f462:; BB(0x0058f462);
    /* 0058f462: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058f465: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058f468: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0058f46b:; BB(0x0058f46b);
    /* 0058f46b: cmp dword ptr [ebp - 4], 0x50 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f46f: jge 0x58f48e */ if ((fS==fO)) goto L_0058f48e;
L_0058f471:; BB(0x0058f471);
    /* 0058f471: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058f474: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f477: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0058f47b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058f47e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f481: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0058f485: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0058f487: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0058f48a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58f48cu); call_ind(t); }
    /* 0058f48c: jmp 0x58f462 */ goto L_0058f462;
L_0058f48e:; BB(0x0058f48e);
    /* 0058f48e: mov esp, ebp */ r_esp = r_ebp;
    /* 0058f490: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058f491: ret  */ FN_RET(0x0058f450); r_esp += 4; return;
}

void f_0058f4a0(void) /* sub_58F4A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058f4a0);
    /* 0058f4a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058f4a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0058f4a3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058f4a6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0058f4a9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f4ac: call 0x58f450 */ r_esp -= 4; W32(r_esp, 0x58f4b1u); f_0058f450();
    /* 0058f4b1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f4b4: mov ecx, dword ptr [eax + 0x174] */ r_ecx = R32((u32)(r_eax+0x174u));
    /* 0058f4ba: mov edx, dword ptr [ecx + 0x3c08] */ r_edx = R32((u32)(r_ecx+0x3c08u));
    /* 0058f4c0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f4c3: mov ecx, dword ptr [eax + edx*4 + 0x154] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x154u));
    /* 0058f4ca: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058f4cd: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0058f4d4: jmp 0x58f4df */ goto L_0058f4df;
L_0058f4d6:; BB(0x0058f4d6);
    /* 0058f4d6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f4d9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058f4dc: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0058f4df:; BB(0x0058f4df);
    /* 0058f4df: cmp dword ptr [ebp - 8], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f4e3: jge 0x58f526 */ if ((fS==fO)) goto L_0058f526;
L_0058f4e5:; BB(0x0058f4e5);
    /* 0058f4e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058f4e8: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058f4eb: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058f4ee: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0058f4f4: movsx edx, byte ptr [ecx + eax + 0x9c] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x9cu));
    /* 0058f4fc: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0058f4ff: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f503: jl 0x58f524 */ if ((fS!=fO)) goto L_0058f524;
L_0058f505:; BB(0x0058f505);
    /* 0058f505: cmp dword ptr [ebp - 0xc], 0x50 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f509: jg 0x58f524 */ if ((!fZ&&fS==fO)) goto L_0058f524;
L_0058f50b:; BB(0x0058f50b);
    /* 0058f50b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058f50e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f511: mov edx, dword ptr [ecx + eax*4] */ r_edx = R32((u32)(r_ecx+r_eax*4));
    /* 0058f514: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058f517: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058f51a: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 0058f51d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058f51f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0058f522: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58f524u); call_ind(t); }
L_0058f524:; BB(0x0058f524);
    /* 0058f524: jmp 0x58f4d6 */ goto L_0058f4d6;
L_0058f526:; BB(0x0058f526);
    /* 0058f526: mov esp, ebp */ r_esp = r_ebp;
    /* 0058f528: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058f529: ret  */ FN_RET(0x0058f4a0); r_esp += 4; return;
}

void f_0058f730(void) /* sub_58F730 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058f730);
    /* 0058f730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058f731: mov ebp, esp */ r_ebp = r_esp;
    /* 0058f733: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058f736: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0058f73b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058f73d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0058f740: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0058f743: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0058f746: mov ecx, dword ptr [eax + 0x174] */ r_ecx = R32((u32)(r_eax+0x174u));
    /* 0058f74c: mov edx, dword ptr [ecx + 0x3c08] */ r_edx = R32((u32)(r_ecx+0x3c08u));
    /* 0058f752: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0058f755: mov ecx, dword ptr [eax + edx*4 + 0x154] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x154u));
    /* 0058f75c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058f75d: push 0x6cc13c */ { u32 v = 0x6cc13cu; r_esp -= 4; W32(r_esp, v); }
    /* 0058f762: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 0058f765: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058f766: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x58f76cu); call_ind(t); }
    /* 0058f76c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058f76f: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 0058f772: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058f773: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0058f776: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 0058f77c: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0058f77f: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 0058f785: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058f787: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0058f78d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58f78fu); call_ind(t); }
    /* 0058f78f: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0058f792: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0058f795: mov eax, dword ptr [ecx + 0x14c] */ r_eax = R32((u32)(r_ecx+0x14cu));
    /* 0058f79b: cmp eax, dword ptr [edx + 0x150] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x150u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f7a1: jne 0x58f7be */ if (!fZ) goto L_0058f7be;
L_0058f7a3:; BB(0x0058f7a3);
    /* 0058f7a3: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0058f7a6: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 0058f7ac: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0058f7af: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 0058f7b5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058f7b7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0058f7ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58f7bcu); call_ind(t); }
    /* 0058f7bc: jmp 0x58f7d7 */ goto L_0058f7d7;
L_0058f7be:; BB(0x0058f7be);
    /* 0058f7be: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0058f7c1: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 0058f7c7: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0058f7ca: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 0058f7d0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058f7d2: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0058f7d5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58f7d7u); call_ind(t); }
L_0058f7d7:; BB(0x0058f7d7);
    /* 0058f7d7: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0058f7da: call 0x58f4a0 */ r_esp -= 4; W32(r_esp, 0x58f7dfu); f_0058f4a0();
    /* 0058f7df: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0058f7e2: call 0x58f950 */ r_esp -= 4; W32(r_esp, 0x58f7e7u); f_0058f950();
    /* 0058f7e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058f7ea: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058f7ec: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x58f7f1u); f_00686d72();
    /* 0058f7f1: mov esp, ebp */ r_esp = r_ebp;
    /* 0058f7f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058f7f4: ret  */ FN_RET(0x0058f730); r_esp += 4; return;
}

void f_0058f800(void) /* sub_58F800 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058f800);
    /* 0058f800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058f801: mov ebp, esp */ r_ebp = r_esp;
    /* 0058f803: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058f806: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0058f809: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f80c: mov ecx, dword ptr [eax + 0x174] */ r_ecx = R32((u32)(r_eax+0x174u));
    /* 0058f812: mov edx, dword ptr [ecx + 0x3c08] */ r_edx = R32((u32)(r_ecx+0x3c08u));
    /* 0058f818: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f81b: mov ecx, dword ptr [eax + edx*4 + 0x154] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x154u));
    /* 0058f822: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0058f825: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058f828: jne 0x58f831 */ if (!fZ) goto L_0058f831;
L_0058f82a:; BB(0x0058f82a);
    /* 0058f82a: mov dword ptr [ebp - 4], 0x3e8 */ W32((u32)(r_ebp+0xfffffffcu), 0x3e8u);
L_0058f831:; BB(0x0058f831);
    /* 0058f831: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f834: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058f837: cmp eax, dword ptr [edx + 0x14c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x14cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f83d: jl 0x58f84d */ if ((fS!=fO)) goto L_0058f84d;
L_0058f83f:; BB(0x0058f83f);
    /* 0058f83f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f842: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058f845: cmp edx, dword ptr [ecx + 0x150] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x150u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f84b: jle 0x58f874 */ if ((fZ||fS!=fO)) goto L_0058f874;
L_0058f84d:; BB(0x0058f84d);
    /* 0058f84d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058f850: add eax, 0x3e8 */ {  u32 a = r_eax; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058f855: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f858: cmp eax, dword ptr [ecx + 0x14c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x14cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f85e: jl 0x58f898 */ if ((fS!=fO)) goto L_0058f898;
L_0058f860:; BB(0x0058f860);
    /* 0058f860: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058f863: add edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058f869: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f86c: cmp edx, dword ptr [eax + 0x150] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x150u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f872: jg 0x58f898 */ if ((!fZ&&fS==fO)) goto L_0058f898;
L_0058f874:; BB(0x0058f874);
    /* 0058f874: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f877: mov edx, dword ptr [ecx + 0x174] */ r_edx = R32((u32)(r_ecx+0x174u));
    /* 0058f87d: mov eax, dword ptr [edx + 0x3c08] */ r_eax = R32((u32)(r_edx+0x3c08u));
    /* 0058f883: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f886: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058f889: mov dword ptr [ecx + eax*4 + 0x154], edx */ W32((u32)(r_ecx+r_eax*4+0x154u), r_edx);
    /* 0058f890: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f893: call 0x58f730 */ r_esp -= 4; W32(r_esp, 0x58f898u); f_0058f730();
L_0058f898:; BB(0x0058f898);
    /* 0058f898: mov esp, ebp */ r_esp = r_ebp;
    /* 0058f89a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058f89b: ret  */ FN_RET(0x0058f800); r_esp += 4; return;
}

void f_0058f8a0(void) /* sub_58F8A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058f8a0);
    /* 0058f8a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058f8a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0058f8a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058f8a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0058f8a9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f8ac: mov ecx, dword ptr [eax + 0x174] */ r_ecx = R32((u32)(r_eax+0x174u));
    /* 0058f8b2: mov edx, dword ptr [ecx + 0x3c08] */ r_edx = R32((u32)(r_ecx+0x3c08u));
    /* 0058f8b8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f8bb: mov ecx, dword ptr [eax + edx*4 + 0x154] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x154u));
    /* 0058f8c2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058f8c5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058f8c8: cmp dword ptr [ebp - 4], 0x3e9 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3e9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f8cf: jne 0x58f8d8 */ if (!fZ) goto L_0058f8d8;
L_0058f8d1:; BB(0x0058f8d1);
    /* 0058f8d1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_0058f8d8:; BB(0x0058f8d8);
    /* 0058f8d8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f8db: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058f8de: cmp eax, dword ptr [edx + 0x14c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x14cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f8e4: jl 0x58f8f4 */ if ((fS!=fO)) goto L_0058f8f4;
L_0058f8e6:; BB(0x0058f8e6);
    /* 0058f8e6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f8e9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058f8ec: cmp edx, dword ptr [ecx + 0x150] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x150u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f8f2: jle 0x58f91b */ if ((fZ||fS!=fO)) goto L_0058f91b;
L_0058f8f4:; BB(0x0058f8f4);
    /* 0058f8f4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058f8f7: add eax, 0x3e8 */ {  u32 a = r_eax; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058f8fc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f8ff: cmp eax, dword ptr [ecx + 0x14c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x14cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f905: jl 0x58f93f */ if ((fS!=fO)) goto L_0058f93f;
L_0058f907:; BB(0x0058f907);
    /* 0058f907: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058f90a: add edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058f910: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f913: cmp edx, dword ptr [eax + 0x150] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x150u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058f919: jg 0x58f93f */ if ((!fZ&&fS==fO)) goto L_0058f93f;
L_0058f91b:; BB(0x0058f91b);
    /* 0058f91b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f91e: mov edx, dword ptr [ecx + 0x174] */ r_edx = R32((u32)(r_ecx+0x174u));
    /* 0058f924: mov eax, dword ptr [edx + 0x3c08] */ r_eax = R32((u32)(r_edx+0x3c08u));
    /* 0058f92a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f92d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058f930: mov dword ptr [ecx + eax*4 + 0x154], edx */ W32((u32)(r_ecx+r_eax*4+0x154u), r_edx);
    /* 0058f937: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f93a: call 0x58f730 */ r_esp -= 4; W32(r_esp, 0x58f93fu); f_0058f730();
L_0058f93f:; BB(0x0058f93f);
    /* 0058f93f: mov esp, ebp */ r_esp = r_ebp;
    /* 0058f941: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058f942: ret  */ FN_RET(0x0058f8a0); r_esp += 4; return;
}

void f_0058f950(void) /* sub_58F950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058f950);
    /* 0058f950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058f951: mov ebp, esp */ r_ebp = r_esp;
    /* 0058f953: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058f956: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0058f959: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0058f95f: call 0x5e10d0 */ r_esp -= 4; W32(r_esp, 0x58f964u); f_005e10d0();
    /* 0058f964: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0058f967: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f96a: mov ecx, dword ptr [eax + 0x144] */ r_ecx = R32((u32)(r_eax+0x144u));
    /* 0058f970: call 0x58fb90 */ r_esp -= 4; W32(r_esp, 0x58f975u); f_0058fb90();
    /* 0058f975: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f978: mov ecx, dword ptr [ecx + 0x148] */ r_ecx = R32((u32)(r_ecx+0x148u));
    /* 0058f97e: call 0x58fb90 */ r_esp -= 4; W32(r_esp, 0x58f983u); f_0058fb90();
    /* 0058f983: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f986: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f989: mov ecx, dword ptr [edx + 0x14c] */ r_ecx = R32((u32)(r_edx+0x14cu));
    /* 0058f98f: cmp ecx, dword ptr [eax + 0x150] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x150u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f995: jne 0x58f99c */ if (!fZ) goto L_0058f99c;
L_0058f997:; BB(0x0058f997);
    /* 0058f997: jmp 0x58face */ goto L_0058face;
L_0058f99c:; BB(0x0058f99c);
    /* 0058f99c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f99f: mov eax, dword ptr [edx + 0x174] */ r_eax = R32((u32)(r_edx+0x174u));
    /* 0058f9a5: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 0058f9ab: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f9ae: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f9b1: mov ecx, dword ptr [edx + ecx*4 + 0x154] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x154u));
    /* 0058f9b8: cmp ecx, dword ptr [eax + 0x14c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x14cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058f9be: jne 0x58f9d0 */ if (!fZ) goto L_0058f9d0;
L_0058f9c0:; BB(0x0058f9c0);
    /* 0058f9c0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f9c3: mov ecx, dword ptr [edx + 0x144] */ r_ecx = R32((u32)(r_edx+0x144u));
    /* 0058f9c9: call 0x58fb90 */ r_esp -= 4; W32(r_esp, 0x58f9ceu); f_0058fb90();
    /* 0058f9ce: jmp 0x58f9de */ goto L_0058f9de;
L_0058f9d0:; BB(0x0058f9d0);
    /* 0058f9d0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f9d3: mov ecx, dword ptr [eax + 0x144] */ r_ecx = R32((u32)(r_eax+0x144u));
    /* 0058f9d9: call 0x58fbc0 */ r_esp -= 4; W32(r_esp, 0x58f9deu); f_0058fbc0();
L_0058f9de:; BB(0x0058f9de);
    /* 0058f9de: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f9e1: mov edx, dword ptr [ecx + 0x174] */ r_edx = R32((u32)(r_ecx+0x174u));
    /* 0058f9e7: mov eax, dword ptr [edx + 0x3c08] */ r_eax = R32((u32)(r_edx+0x3c08u));
    /* 0058f9ed: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f9f0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058f9f3: mov eax, dword ptr [ecx + eax*4 + 0x154] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x154u));
    /* 0058f9fa: cmp eax, dword ptr [edx + 0x150] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x150u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058fa00: je 0x58fa2c */ if (fZ) goto L_0058fa2c;
L_0058fa02:; BB(0x0058fa02);
    /* 0058fa02: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058fa05: mov edx, dword ptr [ecx + 0x174] */ r_edx = R32((u32)(r_ecx+0x174u));
    /* 0058fa0b: mov eax, dword ptr [edx + 0x3c08] */ r_eax = R32((u32)(r_edx+0x3c08u));
    /* 0058fa11: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058fa14: mov edx, dword ptr [ecx + 0x150] */ r_edx = R32((u32)(r_ecx+0x150u));
    /* 0058fa1a: sub edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0058fa20: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058fa23: cmp dword ptr [ecx + eax*4 + 0x154], edx */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x154u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058fa2a: jne 0x58fa3f */ if (!fZ) goto L_0058fa3f;
L_0058fa2c:; BB(0x0058fa2c);
    /* 0058fa2c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058fa2f: mov ecx, dword ptr [edx + 0x148] */ r_ecx = R32((u32)(r_edx+0x148u));
    /* 0058fa35: call 0x58fb90 */ r_esp -= 4; W32(r_esp, 0x58fa3au); f_0058fb90();
    /* 0058fa3a: jmp 0x58face */ goto L_0058face;
L_0058fa3f:; BB(0x0058fa3f);
    /* 0058fa3f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058fa42: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058fa45: cmp ecx, dword ptr [eax + 0x14c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x14cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058fa4b: jl 0x58fa5b */ if ((fS!=fO)) goto L_0058fa5b;
L_0058fa4d:; BB(0x0058fa4d);
    /* 0058fa4d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058fa50: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058fa53: cmp eax, dword ptr [edx + 0x150] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x150u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058fa59: jle 0x58fa82 */ if ((fZ||fS!=fO)) goto L_0058fa82;
L_0058fa5b:; BB(0x0058fa5b);
    /* 0058fa5b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058fa5e: add ecx, 0x3e8 */ {  u32 a = r_ecx; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058fa64: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058fa67: cmp ecx, dword ptr [edx + 0x14c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x14cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058fa6d: jl 0x58fac0 */ if ((fS!=fO)) goto L_0058fac0;
L_0058fa6f:; BB(0x0058fa6f);
    /* 0058fa6f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058fa72: add eax, 0x3e8 */ {  u32 a = r_eax; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058fa77: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058fa7a: cmp eax, dword ptr [ecx + 0x150] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x150u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058fa80: jg 0x58fac0 */ if ((!fZ&&fS==fO)) goto L_0058fac0;
L_0058fa82:; BB(0x0058fa82);
    /* 0058fa82: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058fa85: mov eax, dword ptr [edx + 0x174] */ r_eax = R32((u32)(r_edx+0x174u));
    /* 0058fa8b: mov ecx, dword ptr [eax + 0x3c08] */ r_ecx = R32((u32)(r_eax+0x3c08u));
    /* 0058fa91: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058fa94: mov eax, dword ptr [edx + ecx*4 + 0x154] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x154u));
    /* 0058fa9b: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058fa9e: jne 0x58fab0 */ if (!fZ) goto L_0058fab0;
L_0058faa0:; BB(0x0058faa0);
    /* 0058faa0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058faa3: mov ecx, dword ptr [ecx + 0x148] */ r_ecx = R32((u32)(r_ecx+0x148u));
    /* 0058faa9: call 0x58fb90 */ r_esp -= 4; W32(r_esp, 0x58faaeu); f_0058fb90();
    /* 0058faae: jmp 0x58fabe */ goto L_0058fabe;
L_0058fab0:; BB(0x0058fab0);
    /* 0058fab0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058fab3: mov ecx, dword ptr [edx + 0x148] */ r_ecx = R32((u32)(r_edx+0x148u));
    /* 0058fab9: call 0x58fbc0 */ r_esp -= 4; W32(r_esp, 0x58fabeu); f_0058fbc0();
L_0058fabe:; BB(0x0058fabe);
    /* 0058fabe: jmp 0x58face */ goto L_0058face;
L_0058fac0:; BB(0x0058fac0);
    /* 0058fac0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058fac3: mov ecx, dword ptr [eax + 0x148] */ r_ecx = R32((u32)(r_eax+0x148u));
    /* 0058fac9: call 0x58fbc0 */ r_esp -= 4; W32(r_esp, 0x58faceu); f_0058fbc0();
L_0058face:; BB(0x0058face);
    /* 0058face: mov esp, ebp */ r_esp = r_ebp;
    /* 0058fad0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058fad1: ret  */ FN_RET(0x0058f950); r_esp += 4; return;
}

void f_0058fb90(void) /* sub_58FB90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058fb90);
    /* 0058fb90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058fb91: mov ebp, esp */ r_ebp = r_esp;
    /* 0058fb93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058fb94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058fb97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058fb9a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058fb9c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058fb9f: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0058fba5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58fba7u); call_ind(t); }
    /* 0058fba7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058fbaa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058fbac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058fbaf: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0058fbb2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58fbb4u); call_ind(t); }
    /* 0058fbb4: mov esp, ebp */ r_esp = r_ebp;
    /* 0058fbb6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058fbb7: ret  */ FN_RET(0x0058fb90); r_esp += 4; return;
}

void f_0058fbc0(void) /* sub_58FBC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058fbc0);
    /* 0058fbc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058fbc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0058fbc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058fbc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058fbc7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058fbca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058fbcc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058fbcf: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0058fbd5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58fbd7u); call_ind(t); }
    /* 0058fbd7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058fbda: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058fbdc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058fbdf: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0058fbe2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58fbe4u); call_ind(t); }
    /* 0058fbe4: mov esp, ebp */ r_esp = r_ebp;
    /* 0058fbe6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058fbe7: ret  */ FN_RET(0x0058fbc0); r_esp += 4; return;
}

void f_0058fe80(void) /* sub_58FE80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058fe80);
    /* 0058fe80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058fe81: mov ebp, esp */ r_ebp = r_esp;
    /* 0058fe83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058fe84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058fe87: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0058fe8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058fe8b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x58fe90u); f_005dcb00();
    /* 0058fe90: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058fe93: mov ecx, eax */ r_ecx = r_eax;
    /* 0058fe95: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x58fe9au); f_005d5a50();
    /* 0058fe9a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0058fe9d: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0058fe9f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058fea1: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058fea3: setge dl */ r_edx = (r_edx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 0058fea6: mov al, dl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 0058fea8: mov esp, ebp */ r_esp = r_ebp;
    /* 0058feaa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058feab: ret 8 */ FN_RET(0x0058fe80); r_esp += 12; return;
}

void f_0058feb0(void) /* sub_58FEB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058feb0);
    /* 0058feb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058feb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0058feb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058feb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058feb7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0058feba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058febb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x58fec0u); f_005dcb00();
    /* 0058fec0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058fec3: mov ecx, eax */ r_ecx = r_eax;
    /* 0058fec5: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x58fecau); f_005d5a50();
    /* 0058feca: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0058fecd: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0058fed0: lea ecx, [edx + ecx*2] */ r_ecx = (u32)(r_edx+r_ecx*2);
    /* 0058fed3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058fed5: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058fed7: setge dl */ r_edx = (r_edx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 0058feda: mov al, dl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 0058fedc: mov esp, ebp */ r_esp = r_ebp;
    /* 0058fede: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058fedf: ret 0xc */ FN_RET(0x0058feb0); r_esp += 16; return;
}

void f_0058fef0(void) /* sub_58FEF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058fef0);
    /* 0058fef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058fef1: mov ebp, esp */ r_ebp = r_esp;
    /* 0058fef3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058fef4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058fef7: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 0058fefd: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x58ff02u); f_005da7b0();
    /* 0058ff02: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0058ff05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ff07: je 0x58ff1f */ if (fZ) goto L_0058ff1f;
L_0058ff09:; BB(0x0058ff09);
    /* 0058ff09: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0058ff0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ff0d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0058ff10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ff11: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0058ff14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058ff15: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058ff18: call 0x590810 */ r_esp -= 4; W32(r_esp, 0x58ff1du); f_00590810();
    /* 0058ff1d: jmp 0x58ff33 */ goto L_0058ff33;
L_0058ff1f:; BB(0x0058ff1f);
    /* 0058ff1f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0058ff22: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ff23: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0058ff26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ff27: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0058ff2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058ff2b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058ff2e: call 0x590300 */ r_esp -= 4; W32(r_esp, 0x58ff33u); f_00590300();
L_0058ff33:; BB(0x0058ff33);
    /* 0058ff33: mov esp, ebp */ r_esp = r_ebp;
    /* 0058ff35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058ff36: ret 0xc */ FN_RET(0x0058fef0); r_esp += 16; return;
}

