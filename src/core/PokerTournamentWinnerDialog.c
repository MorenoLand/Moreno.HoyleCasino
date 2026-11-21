#include "protos.h"

void f_0051a6b0(void) /* PokerTournamentWinnerDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051a6b0);
    /* 0051a6b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051a6b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0051a6b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051a6b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0051a6b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a6bb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a6bd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051a6c0: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x51a6c5u); f_005f71f0();
    /* 0051a6c5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051a6c8: mov dword ptr [eax], 0x6c1ce4 */ W32((u32)(r_eax), 0x6c1ce4u);
    /* 0051a6ce: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051a6d1: mov dword ptr [ecx + 0x1bc], 0 */ W32((u32)(r_ecx+0x1bcu), 0x0u);
    /* 0051a6db: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0051a6e2: jmp 0x51a6ed */ goto L_0051a6ed;
L_0051a6e4:; BB(0x0051a6e4);
    /* 0051a6e4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051a6e7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051a6ea: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0051a6ed:; BB(0x0051a6ed);
    /* 0051a6ed: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051a6f1: jge 0x51a706 */ if ((fS==fO)) goto L_0051a706;
L_0051a6f3:; BB(0x0051a6f3);
    /* 0051a6f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051a6f6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051a6f9: mov dword ptr [ecx + eax*4 + 0x1c0], 0 */ W32((u32)(r_ecx+r_eax*4+0x1c0u), 0x0u);
    /* 0051a704: jmp 0x51a6e4 */ goto L_0051a6e4;
L_0051a706:; BB(0x0051a706);
    /* 0051a706: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051a709: mov dword ptr [edx + 0x1e0], 0 */ W32((u32)(r_edx+0x1e0u), 0x0u);
    /* 0051a713: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051a716: mov esp, ebp */ r_esp = r_ebp;
    /* 0051a718: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051a719: ret  */ FN_RET(0x0051a6b0); r_esp += 4; return;
}

void f_0051a720(void) /* PokerTournamentWinnerDialog::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051a720);
    /* 0051a720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051a721: mov ebp, esp */ r_ebp = r_esp;
    /* 0051a723: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a725: push 0x6a3d48 */ { u32 v = 0x6a3d48u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a72a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0051a730: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a731: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051a734: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0051a739: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051a73b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a73c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0051a73f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0051a745: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0051a748: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051a74b: mov dword ptr [eax], 0x6c1ce4 */ W32((u32)(r_eax), 0x6c1ce4u);
    /* 0051a751: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0051a758: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051a75b: cmp dword ptr [ecx + 0x1bc], 0 */ {  u32 a = R32((u32)(r_ecx+0x1bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a762: je 0x51a7a3 */ if (fZ) goto L_0051a7a3;
L_0051a764:; BB(0x0051a764);
    /* 0051a764: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051a767: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0051a76d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0051a770: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051a773: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0051a776: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a77a: je 0x51a78f */ if (fZ) goto L_0051a78f;
L_0051a77c:; BB(0x0051a77c);
    /* 0051a77c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a77e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051a781: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051a783: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051a786: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051a788: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51a78au); call_ind(t); }
    /* 0051a78a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0051a78d: jmp 0x51a796 */ goto L_0051a796;
L_0051a78f:; BB(0x0051a78f);
    /* 0051a78f: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0051a796:; BB(0x0051a796);
    /* 0051a796: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051a799: mov dword ptr [eax + 0x1bc], 0 */ W32((u32)(r_eax+0x1bcu), 0x0u);
L_0051a7a3:; BB(0x0051a7a3);
    /* 0051a7a3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0051a7aa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051a7ad: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x51a7b2u); f_005f7260();
    /* 0051a7b2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051a7b5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0051a7bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051a7bd: mov esp, ebp */ r_esp = r_ebp;
    /* 0051a7bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051a7c0: ret  */ FN_RET(0x0051a720); r_esp += 4; return;
}

void f_0051a830(void) /* PokerTournamentWinnerDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051a830);
    /* 0051a830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051a831: mov ebp, esp */ r_ebp = r_esp;
    /* 0051a833: sub esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051a839: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0051a83e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051a840: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0051a843: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 0051a849: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a84b: push 0x30e7f3 */ { u32 v = 0x30e7f3u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a850: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0051a856: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x51a85bu); f_005f83d0();
    /* 0051a85b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a85d: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0051a863: call 0x5f89d0 */ r_esp -= 4; W32(r_esp, 0x51a868u); f_005f89d0();
    /* 0051a868: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a86a: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a86c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a86e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a870: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a872: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a874: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a879: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a87b: push 0x6c1e10 */ { u32 v = 0x6c1e10u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a880: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51a885u); f_00630f40();
    /* 0051a885: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051a888: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a889: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a88b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a88d: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0051a893: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51a898u); f_005fa5b0();
    /* 0051a898: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a89a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a89c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a89e: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a8a0: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a8a2: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0051a8a4: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a8a9: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a8ab: push 0x6c1dec */ { u32 v = 0x6c1decu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a8b0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51a8b5u); f_00630f40();
    /* 0051a8b5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051a8b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a8b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a8bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a8bd: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0051a8c3: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51a8c8u); f_005fa5b0();
    /* 0051a8c8: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 0051a8ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a8cf: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0051a8d5: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 0051a8db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a8dc: call 0x6311e0 */ r_esp -= 4; W32(r_esp, 0x51a8e1u); f_006311e0();
    /* 0051a8e1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051a8e4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a8e6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a8e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a8ea: push 0x5f */ { u32 v = 0x5fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a8ec: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a8ee: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0051a8f0: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a8f5: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a8f7: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 0051a8fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a8fe: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a900: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a902: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0051a908: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51a90du); f_005fa5b0();
    /* 0051a90d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a90f: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a911: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a913: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 0051a915: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a917: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a919: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 0051a91b: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a91d: push 0x6c1dd0 */ { u32 v = 0x6c1dd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a922: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51a927u); f_00630f40();
    /* 0051a927: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051a92a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a92b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a92d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a92f: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0051a935: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51a93au); f_005fa5b0();
    /* 0051a93a: mov dword ptr [ebp - 4], 0x3a */ W32((u32)(r_ebp+0xfffffffcu), 0x3au);
    /* 0051a941: mov dword ptr [ebp - 0x10], 0x18 */ W32((u32)(r_ebp+0xfffffff0u), 0x18u);
    /* 0051a948: mov dword ptr [ebp - 0x18], 0x6e */ W32((u32)(r_ebp+0xffffffe8u), 0x6eu);
    /* 0051a94f: mov dword ptr [ebp - 0x14], 0x6d */ W32((u32)(r_ebp+0xffffffecu), 0x6du);
    /* 0051a956: mov dword ptr [ebp - 0xc], 0x19 */ W32((u32)(r_ebp+0xfffffff4u), 0x19u);
    /* 0051a95d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051a960: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051a963: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0051a966: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a968: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a96a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a96c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051a96f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a970: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051a973: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a974: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051a977: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a978: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051a97b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a97c: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a97e: push 0x6c1db8 */ { u32 v = 0x6c1db8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a983: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51a988u); f_00630f40();
    /* 0051a988: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051a98b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a98c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a98e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a990: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0051a996: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51a99bu); f_005fa5b0();
    /* 0051a99b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0051a99e: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051a9a1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0051a9a4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a9a6: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a9a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a9aa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051a9ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a9ae: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051a9b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a9b2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051a9b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a9b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051a9b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a9ba: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a9bc: push 0x6c1da0 */ { u32 v = 0x6c1da0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a9c1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51a9c6u); f_00630f40();
    /* 0051a9c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051a9c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a9ca: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a9cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a9ce: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0051a9d4: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51a9d9u); f_005fa5b0();
    /* 0051a9d9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051a9dc: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051a9df: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0051a9e2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a9e4: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a9e6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a9e8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0051a9eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a9ec: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051a9ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a9f0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051a9f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a9f4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051a9f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a9f8: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a9fa: push 0x6c1d88 */ { u32 v = 0x6c1d88u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a9ff: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51aa04u); f_00630f40();
    /* 0051aa04: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051aa07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa08: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa0c: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0051aa12: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51aa17u); f_005fa5b0();
    /* 0051aa17: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051aa1a: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051aa1d: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0051aa20: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa22: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa24: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa26: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051aa29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa2a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051aa2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa2e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051aa31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa32: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051aa35: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa36: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa38: push 0x6c1d70 */ { u32 v = 0x6c1d70u; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa3d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51aa42u); f_00630f40();
    /* 0051aa42: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051aa45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa46: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa48: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa4a: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0051aa50: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51aa55u); f_005fa5b0();
    /* 0051aa55: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0051aa58: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051aa5b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0051aa5e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa60: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa62: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa64: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051aa67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa68: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051aa6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa6c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051aa6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa70: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051aa73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa74: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa76: push 0x6c1d58 */ { u32 v = 0x6c1d58u; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa7b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51aa80u); f_00630f40();
    /* 0051aa80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051aa83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa84: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa86: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa88: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0051aa8e: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51aa93u); f_005fa5b0();
    /* 0051aa93: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051aa96: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051aa99: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0051aa9c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051aa9e: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0051aaa0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051aaa2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0051aaa5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051aaa6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051aaa9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051aaaa: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051aaad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051aaae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051aab1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051aab2: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051aab4: push 0x6c1d40 */ { u32 v = 0x6c1d40u; r_esp -= 4; W32(r_esp, v); }
    /* 0051aab9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51aabeu); f_00630f40();
    /* 0051aabe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051aac1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051aac2: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0051aac4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051aac6: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0051aacc: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51aad1u); f_005fa5b0();
    /* 0051aad1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051aad4: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051aad7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0051aada: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051aadc: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0051aade: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051aae0: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 0051aae2: push 0xa9 */ { u32 v = 0xa9u; r_esp -= 4; W32(r_esp, v); }
    /* 0051aae7: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0051aae9: push 0x59 */ { u32 v = 0x59u; r_esp -= 4; W32(r_esp, v); }
    /* 0051aaeb: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051aaed: push 0x6c1d24 */ { u32 v = 0x6c1d24u; r_esp -= 4; W32(r_esp, v); }
    /* 0051aaf2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51aaf7u); f_00630f40();
    /* 0051aaf7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051aafa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051aafb: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0051aafd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051aaff: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0051ab05: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51ab0au); f_005fa5b0();
    /* 0051ab0a: mov dword ptr [ebp - 4], 0x59 */ W32((u32)(r_ebp+0xfffffffcu), 0x59u);
    /* 0051ab11: mov dword ptr [ebp - 0x10], 0x18 */ W32((u32)(r_ebp+0xfffffff0u), 0x18u);
    /* 0051ab18: mov dword ptr [ebp - 0x18], 0xa9 */ W32((u32)(r_ebp+0xffffffe8u), 0xa9u);
    /* 0051ab1f: mov dword ptr [ebp - 0x14], 0x6d */ W32((u32)(r_ebp+0xffffffecu), 0x6du);
    /* 0051ab26: mov dword ptr [ebp - 0xc], 0x19 */ W32((u32)(r_ebp+0xfffffff4u), 0x19u);
    /* 0051ab2d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051ab30: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051ab33: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0051ab36: mov dword ptr [ebp - 0x8c], 1 */ W32((u32)(r_ebp+0xffffff74u), 0x1u);
    /* 0051ab40: mov dword ptr [ebp - 0x1c], 0xb */ W32((u32)(r_ebp+0xffffffe4u), 0xbu);
    /* 0051ab47: jmp 0x51ab61 */ goto L_0051ab61;
L_0051ab49:; BB(0x0051ab49);
    /* 0051ab49: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051ab4c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051ab4f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0051ab52: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0051ab58: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051ab5b: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
L_0051ab61:; BB(0x0051ab61);
    /* 0051ab61: cmp dword ptr [ebp - 0x1c], 0x11 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051ab65: jge 0x51abc5 */ if ((fS==fO)) goto L_0051abc5;
L_0051ab67:; BB(0x0051ab67);
    /* 0051ab67: lea edx, [ebp - 0x88] */ r_edx = (u32)(r_ebp+0xffffff78u);
    /* 0051ab6d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ab6e: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0051ab74: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0051ab7a: mov edx, dword ptr [ecx + eax*4 + 0x1c0] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1c0u));
    /* 0051ab81: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ab82: call 0x6311e0 */ r_esp -= 4; W32(r_esp, 0x51ab87u); f_006311e0();
    /* 0051ab87: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051ab8a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ab8c: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ab8e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ab90: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0051ab93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ab94: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051ab97: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ab98: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051ab9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ab9c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051ab9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051aba0: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051aba2: lea ecx, [ebp - 0x88] */ r_ecx = (u32)(r_ebp+0xffffff78u);
    /* 0051aba8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051aba9: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051abac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051abad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051abaf: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0051abb5: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51abbau); f_005fa5b0();
    /* 0051abba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0051abbd: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051abc0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0051abc3: jmp 0x51ab49 */ goto L_0051ab49;
L_0051abc5:; BB(0x0051abc5);
    /* 0051abc5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051abc7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051abc9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051abcb: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 0051abcd: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051abcf: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0051abd1: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0051abd6: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0051abd8: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051abdd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0051abdf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051abe1: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0051abe7: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51abecu); f_005fa5b0();
    /* 0051abec: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0051abf3: jmp 0x51abfe */ goto L_0051abfe;
L_0051abf5:; BB(0x0051abf5);
    /* 0051abf5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051abf8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051abfb: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0051abfe:; BB(0x0051abfe);
    /* 0051abfe: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051ac02: jge 0x51ac3d */ if ((fS==fO)) goto L_0051ac3d;
L_0051ac04:; BB(0x0051ac04);
    /* 0051ac04: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac06: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac08: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac0a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051ac0d: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0051ac10: imul edx, edx, 0x19 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x19u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051ac13: add edx, 0x86 */ {  u32 a = r_edx; u32 b = 0x86u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051ac19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac1a: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac1c: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac1e: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac20: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac22: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac27: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051ac2a: add eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051ac2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac2e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac30: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0051ac36: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51ac3bu); f_005fa5b0();
    /* 0051ac3b: jmp 0x51abf5 */ goto L_0051abf5;
L_0051ac3d:; BB(0x0051ac3d);
    /* 0051ac3d: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac3f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac41: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac43: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac45: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac47: push 0x6c1428 */ { u32 v = 0x6c1428u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac4c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51ac51u); f_00630f40();
    /* 0051ac51: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051ac54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac55: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac57: push 0x127 */ { u32 v = 0x127u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac5c: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac61: push 0x30d4e5 */ { u32 v = 0x30d4e5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac66: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ac6a: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0051ac70: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x51ac75u); f_005f9de0();
    /* 0051ac75: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0051ac7b: call 0x51aca0 */ r_esp -= 4; W32(r_esp, 0x51ac80u); f_0051aca0();
    /* 0051ac80: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0051ac86: call 0x51ae40 */ r_esp -= 4; W32(r_esp, 0x51ac8bu); f_0051ae40();
    /* 0051ac8b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051ac8e: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051ac90: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x51ac95u); f_00686d72();
    /* 0051ac95: mov esp, ebp */ r_esp = r_ebp;
    /* 0051ac97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051ac98: ret  */ FN_RET(0x0051a830); r_esp += 4; return;
}

void f_0051af80(void) /* PokerTournamentWinnerDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051af80);
    /* 0051af80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051af81: mov ebp, esp */ r_ebp = r_esp;
    /* 0051af83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051af84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051af87: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0051af8d: call 0x4fcc80 */ r_esp -= 4; W32(r_esp, 0x51af92u); f_004fcc80();
    /* 0051af92: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051af98: call 0x480130 */ r_esp -= 4; W32(r_esp, 0x51af9du); f_00480130();
    /* 0051af9d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051afa0: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 0051afa6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051afa7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051afad: call 0x47fb90 */ r_esp -= 4; W32(r_esp, 0x51afb2u); f_0047fb90();
    /* 0051afb2: mov esp, ebp */ r_esp = r_ebp;
    /* 0051afb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051afb5: ret 4 */ FN_RET(0x0051af80); r_esp += 8; return;
}

