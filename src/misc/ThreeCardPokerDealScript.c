#include "protos.h"

void f_0053c3e0(void) /* ThreeCardPokerDealScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053c3e0);
    /* 0053c3e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053c3e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053c3e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053c3e5: push 0x6a4c35 */ { u32 v = 0x6a4c35u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c3ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053c3f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053c3f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053c3f2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0053c3f7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053c3f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053c3fa: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0053c3fd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0053c403: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0053c406: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c408: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053c40b: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x53c410u); f_005fc0d0();
    /* 0053c410: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053c417: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053c41a: mov dword ptr [eax], 0x6c5cdc */ W32((u32)(r_eax), 0x6c5cdcu);
    /* 0053c420: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c422: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0053c428: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x53c42du); f_00637810();
    /* 0053c42d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053c42f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053c432: setl cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 0053c435: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053c438: mov byte ptr [edx + 0x24], cl */ W8((u32)(r_edx+0x24u), (u8)r_ecx);
    /* 0053c43b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053c442: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053c445: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053c448: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053c44f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053c450: mov esp, ebp */ r_esp = r_ebp;
    /* 0053c452: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053c453: ret  */ FN_RET(0x0053c3e0); r_esp += 4; return;
}

void f_0053c4e0(void) /* ThreeCardPokerDealScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053c4e0);
    /* 0053c4e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053c4e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053c4e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053c4e5: push 0x6a4c66 */ { u32 v = 0x6a4c66u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c4ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053c4f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053c4f1: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053c4f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0053c4f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053c4fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053c4fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0053c4ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0053c505: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0053c508: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053c50b: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x53c510u); f_005fc360();
    /* 0053c510: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0053c513: cmp dword ptr [ebp - 0x28], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0053c517: ja 0x53c835 */ if ((!fC&&!fZ)) goto L_0053c835;
L_0053c51d:; BB(0x0053c51d);
    /* 0053c51d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0053c520: jmp dword ptr [eax*4 + 0x53c844] */ { u32 t = R32((u32)(r_eax*4+0x53c844u)); switch (t) { case 0x53c527u: goto L_0053c527; case 0x53c5abu: goto L_0053c5ab; case 0x53c68eu: goto L_0053c68e; case 0x53c79eu: goto L_0053c79e; case 0x53c7c1u: goto L_0053c7c1; default: UNSUP(0x0053c520, "jump table entry is not a known target"); } }
L_0053c527:; BB(0x0053c527);
    /* 0053c527: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053c52d: call 0x541190 */ r_esp -= 4; W32(r_esp, 0x53c532u); f_00541190();
    /* 0053c532: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053c535: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0053c538: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053c53b: cmp dword ptr [edx + 0x20], -1 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c53f: jne 0x53c557 */ if (!fZ) goto L_0053c557;
L_0053c541:; BB(0x0053c541);
    /* 0053c541: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c543: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c545: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053c548: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053c54a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053c54d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0053c550: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53c552u); call_ind(t); }
    /* 0053c552: jmp 0x53c835 */ goto L_0053c835;
L_0053c557:; BB(0x0053c557);
    /* 0053c557: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c559: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053c55c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053c55e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053c561: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0053c564: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53c566u); call_ind(t); }
    /* 0053c566: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053c569: call 0x53c480 */ r_esp -= 4; W32(r_esp, 0x53c56eu); f_0053c480();
    /* 0053c56e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0053c571: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c573: je 0x53c597 */ if (fZ) goto L_0053c597;
L_0053c575:; BB(0x0053c575);
    /* 0053c575: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053c57b: call 0x540cb0 */ r_esp -= 4; W32(r_esp, 0x53c580u); f_00540cb0();
    /* 0053c580: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c582: jne 0x53c597 */ if (!fZ) goto L_0053c597;
L_0053c584:; BB(0x0053c584);
    /* 0053c584: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053c587: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053c588: mov eax, dword ptr [0x7933f4] */ r_eax = R32((u32)(0x7933f4u));
    /* 0053c58d: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0053c590: call 0x53be70 */ r_esp -= 4; W32(r_esp, 0x53c595u); f_0053be70();
    /* 0053c595: jmp 0x53c5a6 */ goto L_0053c5a6;
L_0053c597:; BB(0x0053c597);
    /* 0053c597: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c599: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053c59c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053c59e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053c5a1: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0053c5a4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53c5a6u); call_ind(t); }
L_0053c5a6:; BB(0x0053c5a6);
    /* 0053c5a6: jmp 0x53c835 */ goto L_0053c835;
L_0053c5ab:; BB(0x0053c5ab);
    /* 0053c5ab: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c5ad: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053c5b0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053c5b2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053c5b5: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0053c5b8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53c5bau); call_ind(t); }
    /* 0053c5ba: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0053c5c0: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x53c5c5u); f_00637630();
    /* 0053c5c5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0053c5c8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c5ca: je 0x53c67a */ if (fZ) goto L_0053c67a;
L_0053c5d0:; BB(0x0053c5d0);
    /* 0053c5d0: mov edx, dword ptr [0x7933f4] */ r_edx = R32((u32)(0x7933f4u));
    /* 0053c5d6: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 0053c5dc: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053c5e2: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 0053c5e8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053c5ea: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0053c5ed: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53c5efu); call_ind(t); }
    /* 0053c5ef: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c5f1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53c5f6u); f_00686d82();
    /* 0053c5f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053c5f9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0053c5fc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053c603: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c607: je 0x53c61a */ if (fZ) goto L_0053c61a;
L_0053c609:; BB(0x0053c609);
    /* 0053c609: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053c60c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053c60d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053c610: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x53c615u); f_006010a0();
    /* 0053c615: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0053c618: jmp 0x53c621 */ goto L_0053c621;
L_0053c61a:; BB(0x0053c61a);
    /* 0053c61a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0053c621:; BB(0x0053c621);
    /* 0053c621: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0053c624: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0053c627: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053c62e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053c631: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053c632: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053c638: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 0053c63e: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x53c643u); f_005f5d50();
    /* 0053c643: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c645: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053c646: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0053c64c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0053c64f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053c650: fld1  */ FPUSH(1.0);
    /* 0053c652: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0053c655: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c657: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c659: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c65b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c65d: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c662: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0053c668: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053c66a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0053c670: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0053c676: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53c678u); call_ind(t); }
    /* 0053c678: jmp 0x53c689 */ goto L_0053c689;
L_0053c67a:; BB(0x0053c67a);
    /* 0053c67a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c67c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053c67f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053c681: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053c684: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0053c687: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53c689u); call_ind(t); }
L_0053c689:; BB(0x0053c689);
    /* 0053c689: jmp 0x53c835 */ goto L_0053c835;
L_0053c68e:; BB(0x0053c68e);
    /* 0053c68e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c690: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053c693: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053c695: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053c698: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0053c69b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53c69du); call_ind(t); }
    /* 0053c69d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053c6a0: call 0x53c480 */ r_esp -= 4; W32(r_esp, 0x53c6a5u); f_0053c480();
    /* 0053c6a5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0053c6a8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c6aa: je 0x53c703 */ if (fZ) goto L_0053c703;
L_0053c6ac:; BB(0x0053c6ac);
    /* 0053c6ac: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c6ae: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53c6b3u); f_00686d82();
    /* 0053c6b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053c6b6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0053c6b9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0053c6c0: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053c6c4: je 0x53c6de */ if (fZ) goto L_0053c6de;
L_0053c6c6:; BB(0x0053c6c6);
    /* 0053c6c6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053c6c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053c6ca: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053c6cd: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0053c6d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053c6d1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053c6d4: call 0x53c860 */ r_esp -= 4; W32(r_esp, 0x53c6d9u); f_0053c860();
    /* 0053c6d9: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0053c6dc: jmp 0x53c6e5 */ goto L_0053c6e5;
L_0053c6de:; BB(0x0053c6de);
    /* 0053c6de: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0053c6e5:; BB(0x0053c6e5);
    /* 0053c6e5: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053c6e8: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0053c6eb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053c6f2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053c6f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053c6f6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053c6f9: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x53c6feu); f_005fc420();
    /* 0053c6fe: jmp 0x53c799 */ goto L_0053c799;
L_0053c703:; BB(0x0053c703);
    /* 0053c703: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053c709: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 0053c70f: mov eax, dword ptr [0x7933f4] */ r_eax = R32((u32)(0x7933f4u));
    /* 0053c714: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 0053c71a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053c71c: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0053c71f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53c721u); call_ind(t); }
    /* 0053c721: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c723: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053c729: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 0053c72f: mov eax, dword ptr [0x7933f4] */ r_eax = R32((u32)(0x7933f4u));
    /* 0053c734: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 0053c73a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053c73c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0053c742: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53c744u); call_ind(t); }
    /* 0053c744: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0053c74b: jmp 0x53c756 */ goto L_0053c756;
L_0053c74d:; BB(0x0053c74d);
    /* 0053c74d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053c750: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053c753: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0053c756:; BB(0x0053c756);
    /* 0053c756: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053c75a: jge 0x53c77f */ if ((fS==fO)) goto L_0053c77f;
L_0053c75c:; BB(0x0053c75c);
    /* 0053c75c: mov edx, dword ptr [0x7933ec] */ r_edx = R32((u32)(0x7933ecu));
    /* 0053c762: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0053c765: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x53c76au); f_006436c0();
    /* 0053c76a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053c76b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053c76e: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0053c771: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053c772: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053c778: call 0x540bd0 */ r_esp -= 4; W32(r_esp, 0x53c77du); f_00540bd0();
    /* 0053c77d: jmp 0x53c74d */ goto L_0053c74d;
L_0053c77f:; BB(0x0053c77f);
    /* 0053c77f: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053c785: call 0x53b1a0 */ r_esp -= 4; W32(r_esp, 0x53c78au); f_0053b1a0();
    /* 0053c78a: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c78c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053c78f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053c791: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053c794: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0053c797: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53c799u); call_ind(t); }
L_0053c799:; BB(0x0053c799);
    /* 0053c799: jmp 0x53c835 */ goto L_0053c835;
L_0053c79e:; BB(0x0053c79e);
    /* 0053c79e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c7a0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053c7a3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053c7a5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053c7a8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0053c7ab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53c7adu); call_ind(t); }
    /* 0053c7ad: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053c7b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053c7b1: mov edx, dword ptr [0x7933f4] */ r_edx = R32((u32)(0x7933f4u));
    /* 0053c7b7: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 0053c7ba: call 0x53c030 */ r_esp -= 4; W32(r_esp, 0x53c7bfu); f_0053c030();
    /* 0053c7bf: jmp 0x53c835 */ goto L_0053c835;
L_0053c7c1:; BB(0x0053c7c1);
    /* 0053c7c1: mov eax, dword ptr [0x7933ec] */ r_eax = R32((u32)(0x7933ecu));
    /* 0053c7c6: mov byte ptr [eax + 0xfa], 0 */ W8((u32)(r_eax+0xfau), 0x0u);
    /* 0053c7cd: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053c7d3: mov edx, dword ptr [ecx + 0x94] */ r_edx = R32((u32)(r_ecx+0x94u));
    /* 0053c7d9: mov eax, dword ptr [0x7933f4] */ r_eax = R32((u32)(0x7933f4u));
    /* 0053c7de: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 0053c7e4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053c7e6: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0053c7e9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53c7ebu); call_ind(t); }
    /* 0053c7eb: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053c7f1: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 0053c7f7: mov eax, dword ptr [0x7933f4] */ r_eax = R32((u32)(0x7933f4u));
    /* 0053c7fc: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 0053c802: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053c804: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0053c807: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53c809u); call_ind(t); }
    /* 0053c809: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c80b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c80d: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053c813: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0053c816: mov eax, dword ptr [0x7933e8] */ r_eax = R32((u32)(0x7933e8u));
    /* 0053c81b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0053c81e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0053c820: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0053c823: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53c825u); call_ind(t); }
    /* 0053c825: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053c827: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053c82d: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0053c830: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x53c835u); f_005fc420();
L_0053c835:; BB(0x0053c835);
    /* 0053c835: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053c838: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053c83f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053c840: mov esp, ebp */ r_esp = r_ebp;
    /* 0053c842: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053c843: ret  */ FN_RET(0x0053c4e0); r_esp += 4; return;
}

