#include "protos.h"

void f_0059d4d0(void) /* BigRaiseDealCommunityScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059d4d0);
    /* 0059d4d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059d4d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0059d4d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059d4d5: push 0x6a75e7 */ { u32 v = 0x6a75e7u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d4da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059d4e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d4e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059d4e2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0059d4e7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059d4e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d4ea: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0059d4ed: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0059d4f3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0059d4f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d4f8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059d4fb: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x59d500u); f_005fc0d0();
    /* 0059d500: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059d507: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059d50a: mov dword ptr [eax], 0x6cefec */ W32((u32)(r_eax), 0x6cefecu);
    /* 0059d510: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d512: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0059d518: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x59d51du); f_00637810();
    /* 0059d51d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0059d51f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059d522: setl cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 0059d525: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059d528: mov byte ptr [edx + 0x20], cl */ W8((u32)(r_edx+0x20u), (u8)r_ecx);
    /* 0059d52b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059d532: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059d535: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059d538: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059d53f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059d540: mov esp, ebp */ r_esp = r_ebp;
    /* 0059d542: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059d543: ret  */ FN_RET(0x0059d4d0); r_esp += 4; return;
}

void f_0059d570(void) /* BigRaiseDealCommunityScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059d570);
    /* 0059d570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059d571: mov ebp, esp */ r_ebp = r_esp;
    /* 0059d573: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059d575: push 0x6a760d */ { u32 v = 0x6a760du; r_esp -= 4; W32(r_esp, v); }
    /* 0059d57a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059d580: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d581: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059d584: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0059d589: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059d58b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d58c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0059d58f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0059d595: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0059d598: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059d59b: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x59d5a0u); f_005fc360();
    /* 0059d5a0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0059d5a3: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0059d5a7: ja 0x59d843 */ if ((!fC&&!fZ)) goto L_0059d843;
L_0059d5ad:; BB(0x0059d5ad);
    /* 0059d5ad: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059d5b0: jmp dword ptr [eax*4 + 0x59d854] */ { u32 t = R32((u32)(r_eax*4+0x59d854u)); switch (t) { case 0x59d5b7u: goto L_0059d5b7; case 0x59d60bu: goto L_0059d60b; case 0x59d6eeu: goto L_0059d6ee; case 0x59d79cu: goto L_0059d79c; case 0x59d7c2u: goto L_0059d7c2; default: UNSUP(0x0059d5b0, "jump table entry is not a known target"); } }
L_0059d5b7:; BB(0x0059d5b7);
    /* 0059d5b7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d5b9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059d5bc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059d5be: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059d5c1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059d5c4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59d5c6u); call_ind(t); }
    /* 0059d5c6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059d5c9: call 0x59d870 */ r_esp -= 4; W32(r_esp, 0x59d5ceu); f_0059d870();
    /* 0059d5ce: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059d5d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d5d3: je 0x59d5f7 */ if (fZ) goto L_0059d5f7;
L_0059d5d5:; BB(0x0059d5d5);
    /* 0059d5d5: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059d5db: call 0x5a2640 */ r_esp -= 4; W32(r_esp, 0x59d5e0u); f_005a2640();
    /* 0059d5e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d5e2: jne 0x59d5f7 */ if (!fZ) goto L_0059d5f7;
L_0059d5e4:; BB(0x0059d5e4);
    /* 0059d5e4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059d5e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059d5e8: mov eax, dword ptr [0x7935c4] */ r_eax = R32((u32)(0x7935c4u));
    /* 0059d5ed: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0059d5f0: call 0x59d310 */ r_esp -= 4; W32(r_esp, 0x59d5f5u); f_0059d310();
    /* 0059d5f5: jmp 0x59d606 */ goto L_0059d606;
L_0059d5f7:; BB(0x0059d5f7);
    /* 0059d5f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d5f9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059d5fc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059d5fe: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059d601: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0059d604: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59d606u); call_ind(t); }
L_0059d606:; BB(0x0059d606);
    /* 0059d606: jmp 0x59d843 */ goto L_0059d843;
L_0059d60b:; BB(0x0059d60b);
    /* 0059d60b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d60d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059d610: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059d612: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059d615: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059d618: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59d61au); call_ind(t); }
    /* 0059d61a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0059d620: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x59d625u); f_00637630();
    /* 0059d625: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059d628: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d62a: je 0x59d6da */ if (fZ) goto L_0059d6da;
L_0059d630:; BB(0x0059d630);
    /* 0059d630: mov edx, dword ptr [0x7935c4] */ r_edx = R32((u32)(0x7935c4u));
    /* 0059d636: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 0059d63c: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059d642: mov ecx, dword ptr [ecx + 0xa4] */ r_ecx = R32((u32)(r_ecx+0xa4u));
    /* 0059d648: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059d64a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0059d64d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59d64fu); call_ind(t); }
    /* 0059d64f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d651: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x59d656u); f_00686d82();
    /* 0059d656: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059d659: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0059d65c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059d663: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059d667: je 0x59d67a */ if (fZ) goto L_0059d67a;
L_0059d669:; BB(0x0059d669);
    /* 0059d669: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059d66c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059d66d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059d670: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x59d675u); f_006010a0();
    /* 0059d675: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0059d678: jmp 0x59d681 */ goto L_0059d681;
L_0059d67a:; BB(0x0059d67a);
    /* 0059d67a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0059d681:; BB(0x0059d681);
    /* 0059d681: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059d684: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0059d687: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059d68e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0059d691: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d692: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059d698: mov ecx, dword ptr [ecx + 0xa4] */ r_ecx = R32((u32)(r_ecx+0xa4u));
    /* 0059d69e: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x59d6a3u); f_005f5d50();
    /* 0059d6a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d6a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059d6a6: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0059d6ac: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0059d6af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059d6b0: fld1  */ FPUSH(1.0);
    /* 0059d6b2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0059d6b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d6b7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d6b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d6bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d6bd: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d6c2: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0059d6c8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059d6ca: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0059d6d0: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0059d6d6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x59d6d8u); call_ind(t); }
    /* 0059d6d8: jmp 0x59d6e9 */ goto L_0059d6e9;
L_0059d6da:; BB(0x0059d6da);
    /* 0059d6da: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d6dc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059d6df: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059d6e1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059d6e4: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0059d6e7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59d6e9u); call_ind(t); }
L_0059d6e9:; BB(0x0059d6e9);
    /* 0059d6e9: jmp 0x59d843 */ goto L_0059d843;
L_0059d6ee:; BB(0x0059d6ee);
    /* 0059d6ee: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d6f0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059d6f3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059d6f5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059d6f8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059d6fb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59d6fdu); call_ind(t); }
    /* 0059d6fd: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059d703: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 0059d709: mov eax, dword ptr [0x7935c4] */ r_eax = R32((u32)(0x7935c4u));
    /* 0059d70e: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 0059d714: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059d716: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0059d719: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59d71bu); call_ind(t); }
    /* 0059d71b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d71d: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059d723: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 0059d729: mov eax, dword ptr [0x7935c4] */ r_eax = R32((u32)(0x7935c4u));
    /* 0059d72e: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 0059d734: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059d736: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0059d73c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59d73eu); call_ind(t); }
    /* 0059d73e: mov dword ptr [ebp - 0x10], 3 */ W32((u32)(r_ebp+0xfffffff0u), 0x3u);
L_0059d745:; BB(0x0059d745);
    /* 0059d745: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059d748: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); }
    /* 0059d74b: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0059d74e: js 0x59d76e */ if (fS) goto L_0059d76e;
L_0059d750:; BB(0x0059d750);
    /* 0059d750: mov edx, dword ptr [0x7935d0] */ r_edx = R32((u32)(0x7935d0u));
    /* 0059d756: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0059d759: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x59d75eu); f_006436c0();
    /* 0059d75e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d75f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d761: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059d767: call 0x5a1e00 */ r_esp -= 4; W32(r_esp, 0x59d76cu); f_005a1e00();
    /* 0059d76c: jmp 0x59d745 */ goto L_0059d745;
L_0059d76e:; BB(0x0059d76e);
    /* 0059d76e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d770: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d772: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059d778: call 0x5a3c20 */ r_esp -= 4; W32(r_esp, 0x59d77du); f_005a3c20();
    /* 0059d77d: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059d783: call 0x59c2d0 */ r_esp -= 4; W32(r_esp, 0x59d788u); f_0059c2d0();
    /* 0059d788: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d78a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059d78d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059d78f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059d792: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0059d795: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59d797u); call_ind(t); }
    /* 0059d797: jmp 0x59d843 */ goto L_0059d843;
L_0059d79c:; BB(0x0059d79c);
    /* 0059d79c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d79e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059d7a1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059d7a3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059d7a6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059d7a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59d7abu); call_ind(t); }
    /* 0059d7ab: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059d7ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059d7af: mov edx, dword ptr [0x7935c4] */ r_edx = R32((u32)(0x7935c4u));
    /* 0059d7b5: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 0059d7b8: call 0x59d190 */ r_esp -= 4; W32(r_esp, 0x59d7bdu); f_0059d190();
    /* 0059d7bd: jmp 0x59d843 */ goto L_0059d843;
L_0059d7c2:; BB(0x0059d7c2);
    /* 0059d7c2: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 0059d7c7: mov byte ptr [eax + 0x103], 0 */ W8((u32)(r_eax+0x103u), 0x0u);
    /* 0059d7ce: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059d7d4: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 0059d7da: mov eax, dword ptr [0x7935c4] */ r_eax = R32((u32)(0x7935c4u));
    /* 0059d7df: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 0059d7e5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059d7e7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0059d7ea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59d7ecu); call_ind(t); }
    /* 0059d7ec: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059d7f2: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 0059d7f8: mov eax, dword ptr [0x7935c4] */ r_eax = R32((u32)(0x7935c4u));
    /* 0059d7fd: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 0059d803: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059d805: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0059d808: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59d80au); call_ind(t); }
    /* 0059d80a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d80c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d80e: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059d814: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0059d817: mov eax, dword ptr [0x7935cc] */ r_eax = R32((u32)(0x7935ccu));
    /* 0059d81c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0059d81f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059d821: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0059d824: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59d826u); call_ind(t); }
    /* 0059d826: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d828: mov ecx, dword ptr [0x7935cc] */ r_ecx = R32((u32)(0x7935ccu));
    /* 0059d82e: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0059d831: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x59d836u); f_005fc420();
    /* 0059d836: mov edx, dword ptr [0x7935d0] */ r_edx = R32((u32)(0x7935d0u));
    /* 0059d83c: mov byte ptr [edx + 0x118], 1 */ W8((u32)(r_edx+0x118u), 0x1u);
L_0059d843:; BB(0x0059d843);
    /* 0059d843: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059d846: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059d84d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059d84e: mov esp, ebp */ r_esp = r_ebp;
    /* 0059d850: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059d851: ret  */ FN_RET(0x0059d570); r_esp += 4; return;
}

