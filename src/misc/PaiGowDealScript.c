#include "protos.h"

void f_0045a5e0(void) /* PaiGowDealScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a5e0);
    /* 0045a5e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a5e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a5e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045a5e5: push 0x69f197 */ { u32 v = 0x69f197u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a5ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0045a5f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a5f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a5f2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0045a5f7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045a5f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a5fa: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0045a5fd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0045a603: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0045a606: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a608: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045a60b: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x45a610u); f_005fc0d0();
    /* 0045a610: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045a617: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045a61a: mov dword ptr [eax], 0x6b99ac */ W32((u32)(r_eax), 0x6b99acu);
    /* 0045a620: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a622: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0045a628: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x45a62du); f_00637810();
    /* 0045a62d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a62f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a632: setl cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 0045a635: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045a638: mov byte ptr [edx + 0x24], cl */ W8((u32)(r_edx+0x24u), (u8)r_ecx);
    /* 0045a63b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045a642: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045a645: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a648: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045a64f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045a650: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a652: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a653: ret  */ FN_RET(0x0045a5e0); r_esp += 4; return;
}

void f_0045a6e0(void) /* PaiGowDealScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a6e0);
    /* 0045a6e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a6e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a6e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045a6e5: push 0x69f1c8 */ { u32 v = 0x69f1c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a6ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0045a6f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a6f1: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045a6f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0045a6f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045a6fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a6fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0045a6ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0045a705: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0045a708: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a70b: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x45a710u); f_005fc360();
    /* 0045a710: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0045a713: cmp dword ptr [ebp - 0x28], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045a717: ja 0x45aa59 */ if ((!fC&&!fZ)) goto L_0045aa59;
L_0045a71d:; BB(0x0045a71d);
    /* 0045a71d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045a720: jmp dword ptr [eax*4 + 0x45aa68] */ { u32 t = R32((u32)(r_eax*4+0x45aa68u)); switch (t) { case 0x45a727u: goto L_0045a727; case 0x45a7b0u: goto L_0045a7b0; case 0x45a88au: goto L_0045a88a; case 0x45a98eu: goto L_0045a98e; case 0x45a9efu: goto L_0045a9ef; default: UNSUP(0x0045a720, "jump table entry is not a known target"); } }
L_0045a727:; BB(0x0045a727);
    /* 0045a727: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045a72d: call 0x460f00 */ r_esp -= 4; W32(r_esp, 0x45a732u); f_00460f00();
    /* 0045a732: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a735: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0045a738: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a73b: cmp dword ptr [edx + 0x20], -1 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a73f: jne 0x45a757 */ if (!fZ) goto L_0045a757;
L_0045a741:; BB(0x0045a741);
    /* 0045a741: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a743: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a745: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a748: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045a74a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a74d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0045a750: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45a752u); call_ind(t); }
    /* 0045a752: jmp 0x45aa59 */ goto L_0045aa59;
L_0045a757:; BB(0x0045a757);
    /* 0045a757: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a759: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a75c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045a75e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a761: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045a764: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45a766u); call_ind(t); }
    /* 0045a766: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a769: call 0x45a680 */ r_esp -= 4; W32(r_esp, 0x45a76eu); f_0045a680();
    /* 0045a76e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0045a771: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a773: je 0x45a79c */ if (fZ) goto L_0045a79c;
L_0045a775:; BB(0x0045a775);
    /* 0045a775: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045a77b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a77e: mov ecx, dword ptr [edx + 0x108] */ r_ecx = R32((u32)(r_edx+0x108u));
    /* 0045a784: cmp ecx, dword ptr [eax + 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a787: jne 0x45a79c */ if (!fZ) goto L_0045a79c;
L_0045a789:; BB(0x0045a789);
    /* 0045a789: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a78c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a78d: mov eax, dword ptr [0x790740] */ r_eax = R32((u32)(0x790740u));
    /* 0045a792: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0045a795: call 0x459e30 */ r_esp -= 4; W32(r_esp, 0x45a79au); f_00459e30();
    /* 0045a79a: jmp 0x45a7ab */ goto L_0045a7ab;
L_0045a79c:; BB(0x0045a79c);
    /* 0045a79c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a79e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a7a1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045a7a3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a7a6: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0045a7a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45a7abu); call_ind(t); }
L_0045a7ab:; BB(0x0045a7ab);
    /* 0045a7ab: jmp 0x45aa59 */ goto L_0045aa59;
L_0045a7b0:; BB(0x0045a7b0);
    /* 0045a7b0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a7b2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a7b5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045a7b7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a7ba: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045a7bd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45a7bfu); call_ind(t); }
    /* 0045a7bf: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0045a7c5: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x45a7cau); f_00637630();
    /* 0045a7ca: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0045a7cd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a7cf: je 0x45a876 */ if (fZ) goto L_0045a876;
L_0045a7d5:; BB(0x0045a7d5);
    /* 0045a7d5: mov edx, dword ptr [0x790740] */ r_edx = R32((u32)(0x790740u));
    /* 0045a7db: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 0045a7de: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045a7e4: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 0045a7e7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045a7e9: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0045a7ec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45a7eeu); call_ind(t); }
    /* 0045a7ee: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a7f0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x45a7f5u); f_00686d82();
    /* 0045a7f5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045a7f8: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0045a7fb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045a802: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a806: je 0x45a819 */ if (fZ) goto L_0045a819;
L_0045a808:; BB(0x0045a808);
    /* 0045a808: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a80b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a80c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045a80f: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x45a814u); f_006010a0();
    /* 0045a814: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045a817: jmp 0x45a820 */ goto L_0045a820;
L_0045a819:; BB(0x0045a819);
    /* 0045a819: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0045a820:; BB(0x0045a820);
    /* 0045a820: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045a823: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0045a826: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045a82d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045a830: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a831: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045a837: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 0045a83a: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x45a83fu); f_005f5d50();
    /* 0045a83f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a841: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a842: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0045a848: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0045a84b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a84c: fld1  */ FPUSH(1.0);
    /* 0045a84e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0045a851: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a853: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a855: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a857: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a859: push 0x18a90 */ { u32 v = 0x18a90u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a85e: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0045a864: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045a866: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0045a86c: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0045a872: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x45a874u); call_ind(t); }
    /* 0045a874: jmp 0x45a885 */ goto L_0045a885;
L_0045a876:; BB(0x0045a876);
    /* 0045a876: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a878: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a87b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045a87d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a880: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0045a883: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45a885u); call_ind(t); }
L_0045a885:; BB(0x0045a885);
    /* 0045a885: jmp 0x45aa59 */ goto L_0045aa59;
L_0045a88a:; BB(0x0045a88a);
    /* 0045a88a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a88c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a88f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045a891: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a894: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045a897: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45a899u); call_ind(t); }
    /* 0045a899: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a89c: call 0x45a680 */ r_esp -= 4; W32(r_esp, 0x45a8a1u); f_0045a680();
    /* 0045a8a1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0045a8a4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a8a6: je 0x45a8ff */ if (fZ) goto L_0045a8ff;
L_0045a8a8:; BB(0x0045a8a8);
    /* 0045a8a8: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a8aa: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x45a8afu); f_00686d82();
    /* 0045a8af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045a8b2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0045a8b5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0045a8bc: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a8c0: je 0x45a8da */ if (fZ) goto L_0045a8da;
L_0045a8c2:; BB(0x0045a8c2);
    /* 0045a8c2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a8c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a8c6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a8c9: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0045a8cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a8cd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045a8d0: call 0x45aa80 */ r_esp -= 4; W32(r_esp, 0x45a8d5u); f_0045aa80();
    /* 0045a8d5: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0045a8d8: jmp 0x45a8e1 */ goto L_0045a8e1;
L_0045a8da:; BB(0x0045a8da);
    /* 0045a8da: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0045a8e1:; BB(0x0045a8e1);
    /* 0045a8e1: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045a8e4: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0045a8e7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045a8ee: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045a8f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a8f2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a8f5: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x45a8fau); f_005fc420();
    /* 0045a8fa: jmp 0x45a989 */ goto L_0045a989;
L_0045a8ff:; BB(0x0045a8ff);
    /* 0045a8ff: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045a905: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 0045a908: mov eax, dword ptr [0x790740] */ r_eax = R32((u32)(0x790740u));
    /* 0045a90d: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0045a910: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0045a912: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0045a915: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45a917u); call_ind(t); }
    /* 0045a917: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a919: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045a91f: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 0045a922: mov eax, dword ptr [0x790740] */ r_eax = R32((u32)(0x790740u));
    /* 0045a927: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0045a92a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0045a92c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0045a932: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45a934u); call_ind(t); }
    /* 0045a934: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0045a93b: jmp 0x45a946 */ goto L_0045a946;
L_0045a93d:; BB(0x0045a93d);
    /* 0045a93d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045a940: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a943: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0045a946:; BB(0x0045a946);
    /* 0045a946: cmp dword ptr [ebp - 0x10], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a94a: jge 0x45a96f */ if ((fS==fO)) goto L_0045a96f;
L_0045a94c:; BB(0x0045a94c);
    /* 0045a94c: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045a952: mov ecx, dword ptr [edx + 0x58] */ r_ecx = R32((u32)(r_edx+0x58u));
    /* 0045a955: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x45a95au); f_006436c0();
    /* 0045a95a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a95b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a95e: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0045a961: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a962: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045a968: call 0x460500 */ r_esp -= 4; W32(r_esp, 0x45a96du); f_00460500();
    /* 0045a96d: jmp 0x45a93d */ goto L_0045a93d;
L_0045a96f:; BB(0x0045a96f);
    /* 0045a96f: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045a975: call 0x4587e0 */ r_esp -= 4; W32(r_esp, 0x45a97au); f_004587e0();
    /* 0045a97a: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a97c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a97f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045a981: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a984: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0045a987: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x45a989u); call_ind(t); }
L_0045a989:; BB(0x0045a989);
    /* 0045a989: jmp 0x45aa59 */ goto L_0045aa59;
L_0045a98e:; BB(0x0045a98e);
    /* 0045a98e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a990: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a993: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045a995: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a998: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045a99b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45a99du); call_ind(t); }
    /* 0045a99d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0045a9a4: jmp 0x45a9af */ goto L_0045a9af;
L_0045a9a6:; BB(0x0045a9a6);
    /* 0045a9a6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045a9a9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a9ac: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0045a9af:; BB(0x0045a9af);
    /* 0045a9af: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a9b3: jge 0x45a9d1 */ if ((fS==fO)) goto L_0045a9d1;
L_0045a9b5:; BB(0x0045a9b5);
    /* 0045a9b5: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a9b7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045a9ba: imul edx, edx, 0xe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xeu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045a9bd: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045a9c2: lea ecx, [eax + edx + 0x5c] */ r_ecx = (u32)(r_eax+r_edx+0x5cu);
    /* 0045a9c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a9c7: call 0x641ed0 */ r_esp -= 4; W32(r_esp, 0x45a9ccu); f_00641ed0();
    /* 0045a9cc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045a9cf: jmp 0x45a9a6 */ goto L_0045a9a6;
L_0045a9d1:; BB(0x0045a9d1);
    /* 0045a9d1: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045a9d7: call 0x45fd30 */ r_esp -= 4; W32(r_esp, 0x45a9dcu); f_0045fd30();
    /* 0045a9dc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045a9df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a9e0: mov eax, dword ptr [0x790740] */ r_eax = R32((u32)(0x790740u));
    /* 0045a9e5: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0045a9e8: call 0x459fc0 */ r_esp -= 4; W32(r_esp, 0x45a9edu); f_00459fc0();
    /* 0045a9ed: jmp 0x45aa59 */ goto L_0045aa59;
L_0045a9ef:; BB(0x0045a9ef);
    /* 0045a9ef: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045a9f5: mov byte ptr [ecx + 0x116], 0 */ W8((u32)(r_ecx+0x116u), 0x0u);
    /* 0045a9fc: mov edx, dword ptr [0x790740] */ r_edx = R32((u32)(0x790740u));
    /* 0045aa02: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0045aa05: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045aa0b: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 0045aa0e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045aa10: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0045aa13: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45aa15u); call_ind(t); }
    /* 0045aa15: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045aa1b: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 0045aa1e: mov eax, dword ptr [0x790740] */ r_eax = R32((u32)(0x790740u));
    /* 0045aa23: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0045aa26: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0045aa28: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0045aa2b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45aa2du); call_ind(t); }
    /* 0045aa2d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045aa2f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045aa31: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045aa37: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0045aa3a: mov eax, dword ptr [0x790734] */ r_eax = R32((u32)(0x790734u));
    /* 0045aa3f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0045aa42: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0045aa44: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0045aa47: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45aa49u); call_ind(t); }
    /* 0045aa49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045aa4b: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045aa51: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0045aa54: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x45aa59u); f_005fc420();
L_0045aa59:; BB(0x0045aa59);
    /* 0045aa59: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045aa5c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045aa63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045aa64: mov esp, ebp */ r_esp = r_ebp;
    /* 0045aa66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045aa67: ret  */ FN_RET(0x0045a6e0); r_esp += 4; return;
}

