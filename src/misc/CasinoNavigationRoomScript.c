#include "protos.h"

void f_005d46f0(void) /* CasinoNavigationRoomScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d46f0);
    /* 005d46f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d46f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d46f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d46f5: push 0x6a8f54 */ { u32 v = 0x6a8f54u; r_esp -= 4; W32(r_esp, v); }
    /* 005d46fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d4700: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4701: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d4704: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d4709: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d470b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d470c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005d470f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005d4715: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d4718: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d471b: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x5d4720u); f_005fc360();
    /* 005d4720: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d4723: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4727: je 0x5d4742 */ if (fZ) goto L_005d4742;
L_005d4729:; BB(0x005d4729);
    /* 005d4729: cmp dword ptr [ebp - 0x24], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d472d: je 0x5d4807 */ if (fZ) goto L_005d4807;
L_005d4733:; BB(0x005d4733);
    /* 005d4733: cmp dword ptr [ebp - 0x24], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4737: je 0x5d4830 */ if (fZ) goto L_005d4830;
L_005d473d:; BB(0x005d473d);
    /* 005d473d: jmp 0x5d488b */ goto L_005d488b;
L_005d4742:; BB(0x005d4742);
    /* 005d4742: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4744: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d4747: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d4749: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d474c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005d474f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d4751u); call_ind(t); }
    /* 005d4751: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4753: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d4758u); f_00686d82();
    /* 005d4758: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d475b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d475e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d4765: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4769: je 0x5d477a */ if (fZ) goto L_005d477a;
L_005d476b:; BB(0x005d476b);
    /* 005d476b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d476d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d4770: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x5d4775u); f_006010a0();
    /* 005d4775: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d4778: jmp 0x5d4781 */ goto L_005d4781;
L_005d477a:; BB(0x005d477a);
    /* 005d477a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005d4781:; BB(0x005d4781);
    /* 005d4781: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d4784: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d4787: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d478e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d4791: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4792: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4794: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d4799: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005d479c: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5d47a1u); f_005fb2b0();
    /* 005d47a1: mov ecx, eax */ r_ecx = r_eax;
    /* 005d47a3: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5d47a8u); f_005f5d50();
    /* 005d47a8: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005d47aa: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d47afu); f_00686d82();
    /* 005d47af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d47b2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005d47b5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005d47bc: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d47c0: je 0x5d47d3 */ if (fZ) goto L_005d47d3;
L_005d47c2:; BB(0x005d47c2);
    /* 005d47c2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d47c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d47c6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d47c9: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x5d47ceu); f_006010a0();
    /* 005d47ce: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d47d1: jmp 0x5d47da */ goto L_005d47da;
L_005d47d3:; BB(0x005d47d3);
    /* 005d47d3: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005d47da:; BB(0x005d47da);
    /* 005d47da: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d47dd: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005d47e0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d47e7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d47ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d47eb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d47ed: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d47f3: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005d47f6: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5d47fbu); f_005fb2b0();
    /* 005d47fb: mov ecx, eax */ r_ecx = r_eax;
    /* 005d47fd: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5d4802u); f_005f5d50();
    /* 005d4802: jmp 0x5d488b */ goto L_005d488b;
L_005d4807:; BB(0x005d4807);
    /* 005d4807: mov ecx, dword ptr [0x7947dc] */ r_ecx = R32((u32)(0x7947dcu));
    /* 005d480d: call 0x5d1d60 */ r_esp -= 4; W32(r_esp, 0x5d4812u); f_005d1d60();
    /* 005d4812: mov ecx, dword ptr [0x7947dc] */ r_ecx = R32((u32)(0x7947dcu));
    /* 005d4818: call 0x5d2220 */ r_esp -= 4; W32(r_esp, 0x5d481du); f_005d2220();
    /* 005d481d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d481f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4821: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d4824: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d4826: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d4829: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005d482c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d482eu); call_ind(t); }
    /* 005d482e: jmp 0x5d488b */ goto L_005d488b;
L_005d4830:; BB(0x005d4830);
    /* 005d4830: mov ecx, dword ptr [0x7947dc] */ r_ecx = R32((u32)(0x7947dcu));
    /* 005d4836: call 0x5d3b10 */ r_esp -= 4; W32(r_esp, 0x5d483bu); f_005d3b10();
    /* 005d483b: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 005d483d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d483f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d4842: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d4844: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d4847: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d484a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d484cu); call_ind(t); }
    /* 005d484c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d484e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d4854: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005d4857: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5d485cu); f_005fb2b0();
    /* 005d485c: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005d485f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d4862: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d4864: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d4867: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005d486a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d486cu); call_ind(t); }
    /* 005d486c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d486e: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d4873: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005d4876: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5d487bu); f_005fb2b0();
    /* 005d487b: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005d487e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d4881: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d4883: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d4886: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005d4889: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d488bu); call_ind(t); }
L_005d488b:; BB(0x005d488b);
    /* 005d488b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d488e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d4895: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d4896: mov esp, ebp */ r_esp = r_ebp;
    /* 005d4898: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d4899: ret  */ FN_RET(0x005d46f0); r_esp += 4; return;
}

