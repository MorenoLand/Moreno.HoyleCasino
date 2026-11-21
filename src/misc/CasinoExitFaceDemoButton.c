#include "protos.h"

void f_005d48a0(void) /* CasinoExitFaceDemoButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d48a0);
    /* 005d48a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d48a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d48a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d48a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d48a7: mov ecx, dword ptr [0x7947dc] */ r_ecx = R32((u32)(0x7947dcu));
    /* 005d48ad: call 0x5d44f0 */ r_esp -= 4; W32(r_esp, 0x5d48b2u); f_005d44f0();
    /* 005d48b2: mov esp, ebp */ r_esp = r_ebp;
    /* 005d48b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d48b5: ret  */ FN_RET(0x005d48a0); r_esp += 4; return;
}

void f_005d48c0(void) /* CasinoExitFaceDemoButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d48c0);
    /* 005d48c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d48c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d48c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d48c5: push 0x6a8f98 */ { u32 v = 0x6a8f98u; r_esp -= 4; W32(r_esp, v); }
    /* 005d48ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d48d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d48d1: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d48d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d48d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d48db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d48dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005d48df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005d48e5: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005d48e8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d48eb: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5d48f0u); f_005eaaf0();
    /* 005d48f0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d48f7: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d48fa: mov dword ptr [eax], 0x6d3c0c */ W32((u32)(r_eax), 0x6d3c0cu);
    /* 005d4900: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4905: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d490au); f_00686d82();
    /* 005d490a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d490d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d4910: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005d4914: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4918: je 0x5d4927 */ if (fZ) goto L_005d4927;
L_005d491a:; BB(0x005d491a);
    /* 005d491a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d491d: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x5d4922u); f_005f5bf0();
    /* 005d4922: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d4925: jmp 0x5d492e */ goto L_005d492e;
L_005d4927:; BB(0x005d4927);
    /* 005d4927: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005d492e:; BB(0x005d492e);
    /* 005d492e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d4931: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d4934: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d4938: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d493b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d493e: mov dword ptr [edx + 0x178], eax */ W32((u32)(r_edx+0x178u), r_eax);
    /* 005d4944: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d4946: push 0x1389 */ { u32 v = 0x1389u; r_esp -= 4; W32(r_esp, v); }
    /* 005d494b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d494d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d494f: push 0x10cccd */ { u32 v = 0x10cccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005d4954: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d4957: mov ecx, dword ptr [ecx + 0x178] */ r_ecx = R32((u32)(r_ecx+0x178u));
    /* 005d495d: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5d4962u); f_005eae80();
    /* 005d4962: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d4965: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 005d496b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d496e: mov ecx, dword ptr [ecx + 0x178] */ r_ecx = R32((u32)(r_ecx+0x178u));
    /* 005d4974: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d4976: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005d4979: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d497bu); call_ind(t); }
    /* 005d497b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d497e: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 005d4984: mov dword ptr [edx + 0x178], 0x4b */ W32((u32)(r_edx+0x178u), 0x4bu);
    /* 005d498e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4990: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d4995u); f_00686d82();
    /* 005d4995: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4998: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005d499b: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005d499f: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d49a3: je 0x5d49c4 */ if (fZ) goto L_005d49c4;
L_005d49a5:; BB(0x005d49a5);
    /* 005d49a5: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d49a8: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 005d49ae: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5d49b3u); f_005eb240();
    /* 005d49b3: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d49b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d49b7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d49ba: call 0x5d4b80 */ r_esp -= 4; W32(r_esp, 0x5d49bfu); f_005d4b80();
    /* 005d49bf: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005d49c2: jmp 0x5d49cb */ goto L_005d49cb;
L_005d49c4:; BB(0x005d49c4);
    /* 005d49c4: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005d49cb:; BB(0x005d49cb);
    /* 005d49cb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d49ce: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005d49d1: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d49d5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d49d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d49d9: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d49dc: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 005d49e2: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5d49e7u); f_005f5d50();
    /* 005d49e7: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005d49ec: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d49f1u); f_00686d82();
    /* 005d49f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d49f4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d49f7: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005d49fb: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d49ff: je 0x5d4a1a */ if (fZ) goto L_005d4a1a;
L_005d4a01:; BB(0x005d4a01);
    /* 005d4a01: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d4a04: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x5d4a09u); f_00601a80();
    /* 005d4a09: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d4a0c: mov dword ptr [ecx], 0x6d3b14 */ W32((u32)(r_ecx), 0x6d3b14u);
    /* 005d4a12: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d4a15: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005d4a18: jmp 0x5d4a21 */ goto L_005d4a21;
L_005d4a1a:; BB(0x005d4a1a);
    /* 005d4a1a: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005d4a21:; BB(0x005d4a21);
    /* 005d4a21: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005d4a24: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d4a27: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d4a2b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d4a2e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d4a31: mov dword ptr [ecx + 0x17c], edx */ W32((u32)(r_ecx+0x17cu), r_edx);
    /* 005d4a37: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d4a39: push 0x138a */ { u32 v = 0x138au; r_esp -= 4; W32(r_esp, v); }
    /* 005d4a3e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4a40: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4a42: push 0x10ccce */ { u32 v = 0x10ccceu; r_esp -= 4; W32(r_esp, v); }
    /* 005d4a47: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d4a4a: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 005d4a50: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5d4a55u); f_005eae80();
    /* 005d4a55: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d4a58: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 005d4a5e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d4a61: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 005d4a67: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005d4a69: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005d4a6c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d4a6eu); call_ind(t); }
    /* 005d4a6e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d4a75: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d4a78: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d4a7b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d4a82: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d4a83: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4a85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4a86: ret  */ FN_RET(0x005d48c0); r_esp += 4; return;
}

