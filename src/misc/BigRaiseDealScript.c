#include "protos.h"

void f_0059d8d0(void) /* BigRaiseDealScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059d8d0);
    /* 0059d8d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059d8d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0059d8d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059d8d5: push 0x6a7630 */ { u32 v = 0x6a7630u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d8da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059d8e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d8e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059d8e2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0059d8e7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059d8e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d8ea: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0059d8ed: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0059d8f3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0059d8f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d8f8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059d8fb: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x59d900u); f_005fc0d0();
    /* 0059d900: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059d907: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059d90a: mov dword ptr [eax], 0x6cf010 */ W32((u32)(r_eax), 0x6cf010u);
    /* 0059d910: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d912: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0059d918: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x59d91du); f_00637810();
    /* 0059d91d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0059d91f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059d922: setl cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 0059d925: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059d928: mov byte ptr [edx + 0x24], cl */ W8((u32)(r_edx+0x24u), (u8)r_ecx);
    /* 0059d92b: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 0059d930: mov byte ptr [eax + 0x118], 0 */ W8((u32)(r_eax+0x118u), 0x0u);
    /* 0059d937: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059d93d: mov dword ptr [ecx + 0x11c], 2 */ W32((u32)(r_ecx+0x11cu), 0x2u);
    /* 0059d947: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059d94e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059d951: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059d954: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059d95b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059d95c: mov esp, ebp */ r_esp = r_ebp;
    /* 0059d95e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059d95f: ret  */ FN_RET(0x0059d8d0); r_esp += 4; return;
}

void f_0059d980(void) /* BigRaiseDealScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059d980);
    /* 0059d980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059d981: mov ebp, esp */ r_ebp = r_esp;
    /* 0059d983: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059d985: push 0x6a7661 */ { u32 v = 0x6a7661u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d98a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059d990: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d991: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059d994: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0059d999: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059d99b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d99c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0059d99f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0059d9a5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0059d9a8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059d9ab: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x59d9b0u); f_005fc360();
    /* 0059d9b0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0059d9b3: cmp dword ptr [ebp - 0x28], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0059d9b7: ja 0x59dd61 */ if ((!fC&&!fZ)) goto L_0059dd61;
L_0059d9bd:; BB(0x0059d9bd);
    /* 0059d9bd: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0059d9c0: jmp dword ptr [eax*4 + 0x59dd70] */ { u32 t = R32((u32)(r_eax*4+0x59dd70u)); switch (t) { case 0x59d9c7u: goto L_0059d9c7; case 0x59da63u: goto L_0059da63; case 0x59db46u: goto L_0059db46; case 0x59dc5bu: goto L_0059dc5b; case 0x59dd29u: goto L_0059dd29; default: UNSUP(0x0059d9c0, "jump table entry is not a known target"); } }
L_0059d9c7:; BB(0x0059d9c7);
    /* 0059d9c7: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059d9cd: call 0x5a2370 */ r_esp -= 4; W32(r_esp, 0x59d9d2u); f_005a2370();
    /* 0059d9d2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059d9d5: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0059d9d8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059d9db: cmp dword ptr [edx + 0x20], -1 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d9df: jne 0x59da0f */ if (!fZ) goto L_0059da0f;
L_0059d9e1:; BB(0x0059d9e1);
    /* 0059d9e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d9e3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0059d9e9: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x59d9eeu); f_00637810();
    /* 0059d9ee: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0059d9ef: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0059d9f2: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059d9f4: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0059d9f7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059d9fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d9fb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d9fd: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059da00: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059da02: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059da05: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0059da08: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59da0au); call_ind(t); }
    /* 0059da0a: jmp 0x59dd61 */ goto L_0059dd61;
L_0059da0f:; BB(0x0059da0f);
    /* 0059da0f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059da11: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059da14: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059da16: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059da19: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059da1c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59da1eu); call_ind(t); }
    /* 0059da1e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059da21: call 0x59dd90 */ r_esp -= 4; W32(r_esp, 0x59da26u); f_0059dd90();
    /* 0059da26: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059da29: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059da2b: je 0x59da4f */ if (fZ) goto L_0059da4f;
L_0059da2d:; BB(0x0059da2d);
    /* 0059da2d: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059da33: call 0x5a2640 */ r_esp -= 4; W32(r_esp, 0x59da38u); f_005a2640();
    /* 0059da38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059da3a: jne 0x59da4f */ if (!fZ) goto L_0059da4f;
L_0059da3c:; BB(0x0059da3c);
    /* 0059da3c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059da3f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059da40: mov eax, dword ptr [0x7935c4] */ r_eax = R32((u32)(0x7935c4u));
    /* 0059da45: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0059da48: call 0x59d310 */ r_esp -= 4; W32(r_esp, 0x59da4du); f_0059d310();
    /* 0059da4d: jmp 0x59da5e */ goto L_0059da5e;
L_0059da4f:; BB(0x0059da4f);
    /* 0059da4f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059da51: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059da54: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059da56: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059da59: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0059da5c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59da5eu); call_ind(t); }
L_0059da5e:; BB(0x0059da5e);
    /* 0059da5e: jmp 0x59dd61 */ goto L_0059dd61;
L_0059da63:; BB(0x0059da63);
    /* 0059da63: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059da65: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059da68: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059da6a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059da6d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059da70: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59da72u); call_ind(t); }
    /* 0059da72: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0059da78: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x59da7du); f_00637630();
    /* 0059da7d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059da80: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059da82: je 0x59db32 */ if (fZ) goto L_0059db32;
L_0059da88:; BB(0x0059da88);
    /* 0059da88: mov edx, dword ptr [0x7935c4] */ r_edx = R32((u32)(0x7935c4u));
    /* 0059da8e: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 0059da94: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059da9a: mov ecx, dword ptr [ecx + 0xa4] */ r_ecx = R32((u32)(r_ecx+0xa4u));
    /* 0059daa0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059daa2: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0059daa5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59daa7u); call_ind(t); }
    /* 0059daa7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0059daa9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x59daaeu); f_00686d82();
    /* 0059daae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059dab1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0059dab4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059dabb: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059dabf: je 0x59dad2 */ if (fZ) goto L_0059dad2;
L_0059dac1:; BB(0x0059dac1);
    /* 0059dac1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059dac4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059dac5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059dac8: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x59dacdu); f_006010a0();
    /* 0059dacd: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0059dad0: jmp 0x59dad9 */ goto L_0059dad9;
L_0059dad2:; BB(0x0059dad2);
    /* 0059dad2: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0059dad9:; BB(0x0059dad9);
    /* 0059dad9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0059dadc: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0059dadf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059dae6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0059dae9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059daea: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059daf0: mov ecx, dword ptr [ecx + 0xa4] */ r_ecx = R32((u32)(r_ecx+0xa4u));
    /* 0059daf6: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x59dafbu); f_005f5d50();
    /* 0059dafb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059dafd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059dafe: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0059db04: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0059db07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059db08: fld1  */ FPUSH(1.0);
    /* 0059db0a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0059db0d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059db0f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0059db11: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059db13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059db15: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 0059db1a: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0059db20: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059db22: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0059db28: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0059db2e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x59db30u); call_ind(t); }
    /* 0059db30: jmp 0x59db41 */ goto L_0059db41;
L_0059db32:; BB(0x0059db32);
    /* 0059db32: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0059db34: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059db37: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059db39: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059db3c: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0059db3f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59db41u); call_ind(t); }
L_0059db41:; BB(0x0059db41);
    /* 0059db41: jmp 0x59dd61 */ goto L_0059dd61;
L_0059db46:; BB(0x0059db46);
    /* 0059db46: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059db48: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059db4b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059db4d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059db50: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059db53: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59db55u); call_ind(t); }
    /* 0059db55: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059db58: call 0x59dd90 */ r_esp -= 4; W32(r_esp, 0x59db5du); f_0059dd90();
    /* 0059db5d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059db60: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059db62: je 0x59dbbb */ if (fZ) goto L_0059dbbb;
L_0059db64:; BB(0x0059db64);
    /* 0059db64: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0059db66: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x59db6bu); f_00686d82();
    /* 0059db6b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059db6e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0059db71: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0059db78: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059db7c: je 0x59db96 */ if (fZ) goto L_0059db96;
L_0059db7e:; BB(0x0059db7e);
    /* 0059db7e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059db81: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059db82: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059db85: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0059db88: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059db89: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059db8c: call 0x59ddf0 */ r_esp -= 4; W32(r_esp, 0x59db91u); f_0059ddf0();
    /* 0059db91: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0059db94: jmp 0x59db9d */ goto L_0059db9d;
L_0059db96:; BB(0x0059db96);
    /* 0059db96: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0059db9d:; BB(0x0059db9d);
    /* 0059db9d: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0059dba0: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0059dba3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059dbaa: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059dbad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059dbae: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059dbb1: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x59dbb6u); f_005fc420();
    /* 0059dbb6: jmp 0x59dc56 */ goto L_0059dc56;
L_0059dbbb:; BB(0x0059dbbb);
    /* 0059dbbb: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059dbc1: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 0059dbc7: mov eax, dword ptr [0x7935c4] */ r_eax = R32((u32)(0x7935c4u));
    /* 0059dbcc: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 0059dbd2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059dbd4: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0059dbd7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59dbd9u); call_ind(t); }
    /* 0059dbd9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059dbdb: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059dbe1: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 0059dbe7: mov eax, dword ptr [0x7935c4] */ r_eax = R32((u32)(0x7935c4u));
    /* 0059dbec: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 0059dbf2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059dbf4: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0059dbfa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59dbfcu); call_ind(t); }
    /* 0059dbfc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059dbff: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0059dc01: cmp dword ptr [ecx + 0x20], 4 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059dc05: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0059dc08: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0059dc0b: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0059dc0e:; BB(0x0059dc0e);
    /* 0059dc0e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059dc11: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 0059dc14: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0059dc17: js 0x59dc3c */ if (fS) goto L_0059dc3c;
L_0059dc19:; BB(0x0059dc19);
    /* 0059dc19: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059dc1f: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0059dc22: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x59dc27u); f_006436c0();
    /* 0059dc27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059dc28: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059dc2b: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0059dc2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059dc2f: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059dc35: call 0x5a1e00 */ r_esp -= 4; W32(r_esp, 0x59dc3au); f_005a1e00();
    /* 0059dc3a: jmp 0x59dc0e */ goto L_0059dc0e;
L_0059dc3c:; BB(0x0059dc3c);
    /* 0059dc3c: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059dc42: call 0x59c2d0 */ r_esp -= 4; W32(r_esp, 0x59dc47u); f_0059c2d0();
    /* 0059dc47: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0059dc49: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059dc4c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059dc4e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059dc51: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0059dc54: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59dc56u); call_ind(t); }
L_0059dc56:; BB(0x0059dc56);
    /* 0059dc56: jmp 0x59dd61 */ goto L_0059dd61;
L_0059dc5b:; BB(0x0059dc5b);
    /* 0059dc5b: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059dc61: mov edx, dword ptr [ecx + 0x11c] */ r_edx = R32((u32)(r_ecx+0x11cu));
    /* 0059dc67: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 0059dc6c: mov cx, word ptr [eax + edx*2 + 0xe0] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0xe0u))) & 0xffffu);
    /* 0059dc74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059dc75: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x59dc7au); f_00641280();
    /* 0059dc7a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059dc7d: mov edx, dword ptr [0x7935d0] */ r_edx = R32((u32)(0x7935d0u));
    /* 0059dc83: mov word ptr [edx + 0x120], ax */ W16((u32)(r_edx+0x120u), (u16)r_eax);
    /* 0059dc8a: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 0059dc8f: mov cx, word ptr [eax + 0xe4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0xe4u))) & 0xffffu);
    /* 0059dc96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059dc97: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x59dc9cu); f_00641280();
    /* 0059dc9c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059dc9f: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059dca2: jg 0x59dcb5 */ if ((!fZ&&fS==fO)) goto L_0059dcb5;
L_0059dca4:; BB(0x0059dca4);
    /* 0059dca4: mov edx, dword ptr [0x7935d0] */ r_edx = R32((u32)(0x7935d0u));
    /* 0059dcaa: mov word ptr [edx + 0xe4], 0 */ W16((u32)(r_edx+0xe4u), 0x0u);
    /* 0059dcb3: jmp 0x59dd06 */ goto L_0059dd06;
L_0059dcb5:; BB(0x0059dcb5);
    /* 0059dcb5: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 0059dcba: mov cx, word ptr [eax + 0xe4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0xe4u))) & 0xffffu);
    /* 0059dcc1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059dcc2: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x59dcc7u); f_00641280();
    /* 0059dcc7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059dcca: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059dccd: jg 0x59dd06 */ if ((!fZ&&fS==fO)) goto L_0059dd06;
L_0059dccf:; BB(0x0059dccf);
    /* 0059dccf: mov edx, dword ptr [0x7935d0] */ r_edx = R32((u32)(0x7935d0u));
    /* 0059dcd5: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 0059dcda: mov cx, word ptr [eax + 0xe4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0xe4u))) & 0xffffu);
    /* 0059dce1: mov word ptr [edx + 0xe2], cx */ W16((u32)(r_edx+0xe2u), (u16)r_ecx);
    /* 0059dce8: mov edx, dword ptr [0x7935d0] */ r_edx = R32((u32)(0x7935d0u));
    /* 0059dcee: mov word ptr [edx + 0xe4], 0 */ W16((u32)(r_edx+0xe4u), 0x0u);
    /* 0059dcf7: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 0059dcfc: mov dword ptr [eax + 0x11c], 1 */ W32((u32)(r_eax+0x11cu), 0x1u);
L_0059dd06:; BB(0x0059dd06);
    /* 0059dd06: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059dd08: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059dd0b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059dd0d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059dd10: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059dd13: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59dd15u); call_ind(t); }
    /* 0059dd15: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059dd18: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059dd19: mov edx, dword ptr [0x7935c4] */ r_edx = R32((u32)(0x7935c4u));
    /* 0059dd1f: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 0059dd22: call 0x59d190 */ r_esp -= 4; W32(r_esp, 0x59dd27u); f_0059d190();
    /* 0059dd27: jmp 0x59dd61 */ goto L_0059dd61;
L_0059dd29:; BB(0x0059dd29);
    /* 0059dd29: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 0059dd2e: mov byte ptr [eax + 0x103], 0 */ W8((u32)(r_eax+0x103u), 0x0u);
    /* 0059dd35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059dd37: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059dd39: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059dd3f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0059dd42: mov eax, dword ptr [0x7935cc] */ r_eax = R32((u32)(0x7935ccu));
    /* 0059dd47: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0059dd4a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059dd4c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0059dd4f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59dd51u); call_ind(t); }
    /* 0059dd51: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059dd53: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059dd59: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0059dd5c: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x59dd61u); f_005fc420();
L_0059dd61:; BB(0x0059dd61);
    /* 0059dd61: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059dd64: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059dd6b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059dd6c: mov esp, ebp */ r_esp = r_ebp;
    /* 0059dd6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059dd6f: ret  */ FN_RET(0x0059d980); r_esp += 4; return;
}

