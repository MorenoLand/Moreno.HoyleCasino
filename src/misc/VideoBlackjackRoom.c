#include "protos.h"

void f_00547450(void) /* VideoBlackjackRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00547450);
    /* 00547450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00547451: mov ebp, esp */ r_ebp = r_esp;
    /* 00547453: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00547454: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00547457: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054745a: call 0x5d7b60 */ r_esp -= 4; W32(r_esp, 0x54745fu); f_005d7b60();
    /* 0054745f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00547462: mov dword ptr [eax], 0x6c6944 */ W32((u32)(r_eax), 0x6c6944u);
    /* 00547468: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054746b: mov dword ptr [0x793400], ecx */ W32((u32)(0x793400u), r_ecx);
    /* 00547471: mov dword ptr [0x793404], 0 */ W32((u32)(0x793404u), 0x0u);
    /* 0054747b: mov dword ptr [0x793410], 0 */ W32((u32)(0x793410u), 0x0u);
    /* 00547485: mov dword ptr [0x793408], 0 */ W32((u32)(0x793408u), 0x0u);
    /* 0054748f: mov dword ptr [0x79340c], 0 */ W32((u32)(0x79340cu), 0x0u);
    /* 00547499: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054749c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054749e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054749f: ret  */ FN_RET(0x00547450); r_esp += 4; return;
}

void f_005474a0(void) /* VideoBlackjackRoom::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005474a0);
    /* 005474a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005474a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005474a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005474a5: push 0x6a51c8 */ { u32 v = 0x6a51c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005474aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005474b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005474b1: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005474b4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005474b9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005474bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005474bc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005474bf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005474c5: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005474c8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005474cb: mov dword ptr [eax], 0x6c6944 */ W32((u32)(r_eax), 0x6c6944u);
    /* 005474d1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005474d8: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005474de: call 0x5de170 */ r_esp -= 4; W32(r_esp, 0x5474e3u); f_005de170();
    /* 005474e3: mov dword ptr [0x793400], 0 */ W32((u32)(0x793400u), 0x0u);
    /* 005474ed: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 005474f3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005474f6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005474f9: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005474fc: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547500: je 0x547515 */ if (fZ) goto L_00547515;
L_00547502:; BB(0x00547502);
    /* 00547502: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00547504: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00547507: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00547509: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054750c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0054750e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x547510u); call_ind(t); }
    /* 00547510: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00547513: jmp 0x54751c */ goto L_0054751c;
L_00547515:; BB(0x00547515);
    /* 00547515: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0054751c:; BB(0x0054751c);
    /* 0054751c: mov dword ptr [0x793404], 0 */ W32((u32)(0x793404u), 0x0u);
    /* 00547526: mov ecx, dword ptr [0x793410] */ r_ecx = R32((u32)(0x793410u));
    /* 0054752c: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0054752f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00547532: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00547535: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547539: je 0x54754e */ if (fZ) goto L_0054754e;
L_0054753b:; BB(0x0054753b);
    /* 0054753b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054753d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00547540: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00547542: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00547545: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00547547: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x547549u); call_ind(t); }
    /* 00547549: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0054754c: jmp 0x547555 */ goto L_00547555;
L_0054754e:; BB(0x0054754e);
    /* 0054754e: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00547555:; BB(0x00547555);
    /* 00547555: mov dword ptr [0x793410], 0 */ W32((u32)(0x793410u), 0x0u);
    /* 0054755f: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00547565: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00547568: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0054756b: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0054756e: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547572: je 0x547587 */ if (fZ) goto L_00547587;
L_00547574:; BB(0x00547574);
    /* 00547574: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00547576: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00547579: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0054757b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054757e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00547580: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x547582u); call_ind(t); }
    /* 00547582: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00547585: jmp 0x54758e */ goto L_0054758e;
L_00547587:; BB(0x00547587);
    /* 00547587: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0054758e:; BB(0x0054758e);
    /* 0054758e: mov dword ptr [0x793408], 0 */ W32((u32)(0x793408u), 0x0u);
    /* 00547598: mov ecx, dword ptr [0x79340c] */ r_ecx = R32((u32)(0x79340cu));
    /* 0054759e: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005475a1: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005475a4: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005475a7: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005475ab: je 0x5475c0 */ if (fZ) goto L_005475c0;
L_005475ad:; BB(0x005475ad);
    /* 005475ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005475af: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005475b2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005475b4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005475b7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005475b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5475bbu); call_ind(t); }
    /* 005475bb: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005475be: jmp 0x5475c7 */ goto L_005475c7;
L_005475c0:; BB(0x005475c0);
    /* 005475c0: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005475c7:; BB(0x005475c7);
    /* 005475c7: mov dword ptr [0x79340c], 0 */ W32((u32)(0x79340cu), 0x0u);
    /* 005475d1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005475d8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005475db: call 0x5d7bd0 */ r_esp -= 4; W32(r_esp, 0x5475e0u); f_005d7bd0();
    /* 005475e0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005475e3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005475ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005475eb: mov esp, ebp */ r_esp = r_ebp;
    /* 005475ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005475ee: ret  */ FN_RET(0x005474a0); r_esp += 4; return;
}

void f_005475f0(void) /* VideoBlackjackRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005475f0);
    /* 005475f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005475f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005475f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005475f5: push 0x6a521a */ { u32 v = 0x6a521au; r_esp -= 4; W32(r_esp, v); }
    /* 005475fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00547600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00547601: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00547604: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00547609: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054760b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054760c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0054760f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00547615: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00547618: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0054761b: call 0x5d8230 */ r_esp -= 4; W32(r_esp, 0x547620u); f_005d8230();
    /* 00547620: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00547622: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x547627u); f_00686d82();
    /* 00547627: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054762a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0054762d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00547634: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547638: je 0x547647 */ if (fZ) goto L_00547647;
L_0054763a:; BB(0x0054763a);
    /* 0054763a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054763d: call 0x548880 */ r_esp -= 4; W32(r_esp, 0x547642u); f_00548880();
    /* 00547642: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00547645: jmp 0x54764e */ goto L_0054764e;
L_00547647:; BB(0x00547647);
    /* 00547647: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0054764e:; BB(0x0054764e);
    /* 0054764e: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00547651: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00547654: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054765b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054765e: mov dword ptr [0x793404], ecx */ W32((u32)(0x793404u), r_ecx);
    /* 00547664: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547669: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x54766eu); f_00686d82();
    /* 0054766e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00547671: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00547674: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0054767b: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054767f: je 0x54768e */ if (fZ) goto L_0054768e;
L_00547681:; BB(0x00547681);
    /* 00547681: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00547684: call 0x542d90 */ r_esp -= 4; W32(r_esp, 0x547689u); f_00542d90();
    /* 00547689: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0054768c: jmp 0x547695 */ goto L_00547695;
L_0054768e:; BB(0x0054768e);
    /* 0054768e: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00547695:; BB(0x00547695);
    /* 00547695: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00547698: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0054769b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005476a2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005476a5: mov dword ptr [0x793408], eax */ W32((u32)(0x793408u), r_eax);
    /* 005476aa: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 005476b0: call 0x5489a0 */ r_esp -= 4; W32(r_esp, 0x5476b5u); f_005489a0();
    /* 005476b5: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 005476bb: call 0x543500 */ r_esp -= 4; W32(r_esp, 0x5476c0u); f_00543500();
    /* 005476c0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005476c2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5476c7u); f_00686d82();
    /* 005476c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005476ca: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005476cd: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005476d4: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005476d8: je 0x5476e7 */ if (fZ) goto L_005476e7;
L_005476da:; BB(0x005476da);
    /* 005476da: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005476dd: call 0x547390 */ r_esp -= 4; W32(r_esp, 0x5476e2u); f_00547390();
    /* 005476e2: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005476e5: jmp 0x5476ee */ goto L_005476ee;
L_005476e7:; BB(0x005476e7);
    /* 005476e7: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_005476ee:; BB(0x005476ee);
    /* 005476ee: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005476f1: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005476f4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005476fb: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005476fe: mov dword ptr [0x793410], edx */ W32((u32)(0x793410u), r_edx);
    /* 00547704: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00547706: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x54770bu); f_00686d82();
    /* 0054770b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054770e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00547711: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00547718: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054771c: je 0x54772b */ if (fZ) goto L_0054772b;
L_0054771e:; BB(0x0054771e);
    /* 0054771e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00547721: call 0x542960 */ r_esp -= 4; W32(r_esp, 0x547726u); f_00542960();
    /* 00547726: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00547729: jmp 0x547732 */ goto L_00547732;
L_0054772b:; BB(0x0054772b);
    /* 0054772b: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00547732:; BB(0x00547732);
    /* 00547732: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00547735: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00547738: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054773f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00547742: mov dword ptr [0x79340c], ecx */ W32((u32)(0x79340cu), r_ecx);
    /* 00547748: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 0054774e: call 0x5490e0 */ r_esp -= 4; W32(r_esp, 0x547753u); f_005490e0();
    /* 00547753: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00547755: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x54775au); f_00686d82();
    /* 0054775a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054775d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00547760: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00547767: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054776b: je 0x547788 */ if (fZ) goto L_00547788;
L_0054776d:; BB(0x0054776d);
    /* 0054776d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054776f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00547772: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x547777u); f_005fc0d0();
    /* 00547777: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0054777a: mov dword ptr [edx], 0x6c6c44 */ W32((u32)(r_edx), 0x6c6c44u);
    /* 00547780: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00547783: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00547786: jmp 0x54778f */ goto L_0054778f;
L_00547788:; BB(0x00547788);
    /* 00547788: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0054778f:; BB(0x0054778f);
    /* 0054778f: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00547792: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00547795: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054779c: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0054779f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005477a0: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005477a3: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x5477a8u); f_005f1b70();
    /* 005477a8: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005477ab: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005477ae: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005477b1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005477b4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005477b6: mov ecx, eax */ r_ecx = r_eax;
    /* 005477b8: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005477bb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5477bdu); call_ind(t); }
    /* 005477bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005477bf: mov ecx, dword ptr [0x793410] */ r_ecx = R32((u32)(0x793410u));
    /* 005477c5: call 0x5473d0 */ r_esp -= 4; W32(r_esp, 0x5477cau); f_005473d0();
    /* 005477ca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005477cd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005477d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005477d5: mov esp, ebp */ r_esp = r_ebp;
    /* 005477d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005477d8: ret  */ FN_RET(0x005475f0); r_esp += 4; return;
}

void f_005477e0(void) /* VideoBlackjackRoom::vfunc155 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005477e0);
    /* 005477e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005477e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005477e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005477e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005477e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005477ea: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
    /* 005477f0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005477f3: mov dword ptr [ecx], 0x3b9aca00 */ W32((u32)(r_ecx), 0x3b9aca00u);
    /* 005477f9: mov esp, ebp */ r_esp = r_ebp;
    /* 005477fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005477fc: ret 8 */ FN_RET(0x005477e0); r_esp += 12; return;
}

void f_00547800(void) /* VideoBlackjackRoom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00547800);
    /* 00547800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00547801: mov ebp, esp */ r_ebp = r_esp;
    /* 00547803: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00547806: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00547809: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0054780c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0054780f: cmp dword ptr [ebp - 8], 0x186a1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186a1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547816: je 0x547833 */ if (fZ) goto L_00547833;
L_00547818:; BB(0x00547818);
    /* 00547818: cmp dword ptr [ebp - 8], 0x186c3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186c3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054781f: je 0x547884 */ if (fZ) goto L_00547884;
L_00547821:; BB(0x00547821);
    /* 00547821: cmp dword ptr [ebp - 8], 0x186d7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186d7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547828: je 0x5478b0 */ if (fZ) goto L_005478b0;
L_0054782e:; BB(0x0054782e);
    /* 0054782e: jmp 0x5478e5 */ goto L_005478e5;
L_00547833:; BB(0x00547833);
    /* 00547833: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547835: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 0054783a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054783d: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x547842u); f_005fe640();
    /* 00547842: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547844: push 0x186a9 */ { u32 v = 0x186a9u; r_esp -= 4; W32(r_esp, v); }
    /* 00547849: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054784c: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x547851u); f_005fe640();
    /* 00547851: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547853: push 0x186a7 */ { u32 v = 0x186a7u; r_esp -= 4; W32(r_esp, v); }
    /* 00547858: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054785b: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x547860u); f_005fe640();
    /* 00547860: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547862: push 0x186a8 */ { u32 v = 0x186a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00547867: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054786a: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x54786fu); f_005fe640();
    /* 0054786f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547871: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00547873: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00547875: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 0054787a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054787d: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x547882u); f_005fe240();
    /* 00547882: jmp 0x5478e5 */ goto L_005478e5;
L_00547884:; BB(0x00547884);
    /* 00547884: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547886: push 0x186c6 */ { u32 v = 0x186c6u; r_esp -= 4; W32(r_esp, v); }
    /* 0054788b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054788e: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x547893u); f_005fe640();
    /* 00547893: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547895: push 0x186c5 */ { u32 v = 0x186c5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054789a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054789d: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5478a2u); f_005fe640();
    /* 005478a2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005478a4: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005478a6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005478a9: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5478aeu); f_005fe640();
    /* 005478ae: jmp 0x5478e5 */ goto L_005478e5;
L_005478b0:; BB(0x005478b0);
    /* 005478b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005478b2: push 0x186da */ { u32 v = 0x186dau; r_esp -= 4; W32(r_esp, v); }
    /* 005478b7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005478ba: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5478bfu); f_005fe640();
    /* 005478bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005478c1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005478c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005478c5: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 005478ca: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005478cd: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x5478d2u); f_005fe240();
    /* 005478d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005478d4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005478d6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005478d8: push 0x139b */ { u32 v = 0x139bu; r_esp -= 4; W32(r_esp, v); }
    /* 005478dd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005478e0: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x5478e5u); f_005fe240();
L_005478e5:; BB(0x005478e5);
    /* 005478e5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005478e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005478e9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005478ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005478ed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005478f0: call 0x5d8670 */ r_esp -= 4; W32(r_esp, 0x5478f5u); f_005d8670();
    /* 005478f5: mov esp, ebp */ r_esp = r_ebp;
    /* 005478f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005478f8: ret 8 */ FN_RET(0x00547800); r_esp += 12; return;
}

void f_00547900(void) /* VideoBlackjackRoom::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00547900);
    /* 00547900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00547901: mov ebp, esp */ r_ebp = r_esp;
    /* 00547903: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00547904: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00547907: push 0x186c3 */ { u32 v = 0x186c3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054790c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00547912: call 0x5df2e0 */ r_esp -= 4; W32(r_esp, 0x547917u); f_005df2e0();
    /* 00547917: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00547918: push 0x311669 */ { u32 v = 0x311669u; r_esp -= 4; W32(r_esp, v); }
    /* 0054791d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00547920: call 0x5f1e60 */ r_esp -= 4; W32(r_esp, 0x547925u); f_005f1e60();
    /* 00547925: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00547928: call 0x64e430 */ r_esp -= 4; W32(r_esp, 0x54792du); f_0064e430();
    /* 0054792d: mov esp, ebp */ r_esp = r_ebp;
    /* 0054792f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00547930: ret  */ FN_RET(0x00547900); r_esp += 4; return;
}

void f_00547940(void) /* VideoBlackjackRoom::vfunc19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00547940);
    /* 00547940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00547941: mov ebp, esp */ r_ebp = r_esp;
    /* 00547943: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00547946: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00547949: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054794c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0054794f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00547952: sub ecx, 0x31166a */ {  u32 a = r_ecx; u32 b = 0x31166au; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00547958: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0054795b: cmp dword ptr [ebp - 8], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0054795f: ja 0x547a09 */ if ((!fC&&!fZ)) goto L_00547a09;
L_00547965:; BB(0x00547965);
    /* 00547965: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00547968: jmp dword ptr [edx*4 + 0x547a20] */ { u32 t = R32((u32)(r_edx*4+0x547a20u)); switch (t) { case 0x54796fu: goto L_0054796f; case 0x547981u: goto L_00547981; case 0x547993u: goto L_00547993; case 0x5479a2u: goto L_005479a2; case 0x5479b1u: goto L_005479b1; case 0x5479c0u: goto L_005479c0; case 0x5479cfu: goto L_005479cf; case 0x5479deu: goto L_005479de; case 0x5479edu: goto L_005479ed; case 0x5479fcu: goto L_005479fc; default: UNSUP(0x00547968, "jump table entry is not a known target"); } }
L_0054796f:; BB(0x0054796f);
    /* 0054796f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547971: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00547977: call 0x5494e0 */ r_esp -= 4; W32(r_esp, 0x54797cu); f_005494e0();
    /* 0054797c: jmp 0x547a19 */ goto L_00547a19;
L_00547981:; BB(0x00547981);
    /* 00547981: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00547983: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00547989: call 0x5494e0 */ r_esp -= 4; W32(r_esp, 0x54798eu); f_005494e0();
    /* 0054798e: jmp 0x547a19 */ goto L_00547a19;
L_00547993:; BB(0x00547993);
    /* 00547993: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00547995: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 0054799b: call 0x5494e0 */ r_esp -= 4; W32(r_esp, 0x5479a0u); f_005494e0();
    /* 005479a0: jmp 0x547a19 */ goto L_00547a19;
L_005479a2:; BB(0x005479a2);
    /* 005479a2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005479a4: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 005479aa: call 0x5449a0 */ r_esp -= 4; W32(r_esp, 0x5479afu); f_005449a0();
    /* 005479af: jmp 0x547a09 */ goto L_00547a09;
L_005479b1:; BB(0x005479b1);
    /* 005479b1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005479b3: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 005479b9: call 0x5449a0 */ r_esp -= 4; W32(r_esp, 0x5479beu); f_005449a0();
    /* 005479be: jmp 0x547a09 */ goto L_00547a09;
L_005479c0:; BB(0x005479c0);
    /* 005479c0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005479c2: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 005479c8: call 0x5449a0 */ r_esp -= 4; W32(r_esp, 0x5479cdu); f_005449a0();
    /* 005479cd: jmp 0x547a09 */ goto L_00547a09;
L_005479cf:; BB(0x005479cf);
    /* 005479cf: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005479d1: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 005479d7: call 0x5449a0 */ r_esp -= 4; W32(r_esp, 0x5479dcu); f_005449a0();
    /* 005479dc: jmp 0x547a09 */ goto L_00547a09;
L_005479de:; BB(0x005479de);
    /* 005479de: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005479e0: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 005479e6: call 0x5449a0 */ r_esp -= 4; W32(r_esp, 0x5479ebu); f_005449a0();
    /* 005479eb: jmp 0x547a09 */ goto L_00547a09;
L_005479ed:; BB(0x005479ed);
    /* 005479ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005479ef: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 005479f5: call 0x5449a0 */ r_esp -= 4; W32(r_esp, 0x5479fau); f_005449a0();
    /* 005479fa: jmp 0x547a09 */ goto L_00547a09;
L_005479fc:; BB(0x005479fc);
    /* 005479fc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005479fe: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00547a04: call 0x5449a0 */ r_esp -= 4; W32(r_esp, 0x547a09u); f_005449a0();
L_00547a09:; BB(0x00547a09);
    /* 00547a09: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00547a0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00547a0d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00547a10: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00547a11: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00547a14: call 0x5dc7d0 */ r_esp -= 4; W32(r_esp, 0x547a19u); f_005dc7d0();
L_00547a19:; BB(0x00547a19);
    /* 00547a19: mov esp, ebp */ r_esp = r_ebp;
    /* 00547a1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00547a1c: ret 8 */ FN_RET(0x00547940); r_esp += 12; return;
}

void f_00547a50(void) /* VideoBlackjackRoom::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00547a50);
    /* 00547a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00547a51: mov ebp, esp */ r_ebp = r_esp;
    /* 00547a53: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00547a56: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00547a59: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00547a5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00547a5d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00547a60: call 0x5d7f40 */ r_esp -= 4; W32(r_esp, 0x547a65u); f_005d7f40();
    /* 00547a65: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00547a68: cmp dword ptr [ecx + 0x18], 4 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547a6c: jne 0x547e08 */ if (!fZ) goto L_00547e08;
L_00547a72:; BB(0x00547a72);
    /* 00547a72: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00547a75: movzx eax, byte ptr [edx + 4] */ r_eax = (u32)R8((u32)(r_edx+0x4u));
    /* 00547a79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547a7b: jne 0x547e08 */ if (!fZ) goto L_00547e08;
L_00547a81:; BB(0x00547a81);
    /* 00547a81: cmp dword ptr [0x793404], 0 */ {  u32 a = R32((u32)(0x793404u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547a88: je 0x547e08 */ if (fZ) goto L_00547e08;
L_00547a8e:; BB(0x00547a8e);
    /* 00547a8e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00547a91: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 00547a95: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00547a96: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x547a9cu); call_ind(t); }
    /* 00547a9c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00547a9f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00547aa2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00547aa5: sub eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00547aa8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00547aab: cmp dword ptr [ebp - 8], 0x6c */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00547aaf: ja 0x547e08 */ if ((!fC&&!fZ)) goto L_00547e08;
L_00547ab5:; BB(0x00547ab5);
    /* 00547ab5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00547ab8: movzx edx, byte ptr [ecx + 0x547e40] */ r_edx = (u32)R8((u32)(r_ecx+0x547e40u));
    /* 00547abf: jmp dword ptr [edx*4 + 0x547e10] */ { u32 t = R32((u32)(r_edx*4+0x547e10u)); switch (t) { case 0x547bb3u: goto L_00547bb3; case 0x547ac6u: goto L_00547ac6; case 0x547b64u: goto L_00547b64; case 0x547ca0u: goto L_00547ca0; case 0x547c02u: goto L_00547c02; case 0x547b15u: goto L_00547b15; case 0x547d8au: goto L_00547d8a; case 0x547cefu: goto L_00547cef; case 0x547c51u: goto L_00547c51; case 0x547dd6u: goto L_00547dd6; case 0x547d3eu: goto L_00547d3e; case 0x547e08u: goto L_00547e08; default: UNSUP(0x00547abf, "jump table entry is not a known target"); } }
L_00547ac6:; BB(0x00547ac6);
    /* 00547ac6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547ac8: push 0x31166a */ { u32 v = 0x31166au; r_esp -= 4; W32(r_esp, v); }
    /* 00547acd: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00547ad3: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x547ad8u); f_005f2a60();
    /* 00547ad8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547ada: je 0x547b10 */ if (fZ) goto L_00547b10;
L_00547adc:; BB(0x00547adc);
    /* 00547adc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547ade: push 0x31166a */ { u32 v = 0x31166au; r_esp -= 4; W32(r_esp, v); }
    /* 00547ae3: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00547ae9: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x547aeeu); f_005f2a60();
    /* 00547aee: mov ecx, eax */ r_ecx = r_eax;
    /* 00547af0: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x547af5u); f_006026d0();
    /* 00547af5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00547af8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547afa: je 0x547b10 */ if (fZ) goto L_00547b10;
L_00547afc:; BB(0x00547afc);
    /* 00547afc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547afe: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00547b04: call 0x5494e0 */ r_esp -= 4; W32(r_esp, 0x547b09u); f_005494e0();
    /* 00547b09: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00547b0c: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_00547b10:; BB(0x00547b10);
    /* 00547b10: jmp 0x547e08 */ goto L_00547e08;
L_00547b15:; BB(0x00547b15);
    /* 00547b15: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547b17: push 0x31166b */ { u32 v = 0x31166bu; r_esp -= 4; W32(r_esp, v); }
    /* 00547b1c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00547b22: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x547b27u); f_005f2a60();
    /* 00547b27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547b29: je 0x547b5f */ if (fZ) goto L_00547b5f;
L_00547b2b:; BB(0x00547b2b);
    /* 00547b2b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547b2d: push 0x31166b */ { u32 v = 0x31166bu; r_esp -= 4; W32(r_esp, v); }
    /* 00547b32: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00547b38: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x547b3du); f_005f2a60();
    /* 00547b3d: mov ecx, eax */ r_ecx = r_eax;
    /* 00547b3f: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x547b44u); f_006026d0();
    /* 00547b44: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00547b47: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547b49: je 0x547b5f */ if (fZ) goto L_00547b5f;
L_00547b4b:; BB(0x00547b4b);
    /* 00547b4b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00547b4d: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00547b53: call 0x5494e0 */ r_esp -= 4; W32(r_esp, 0x547b58u); f_005494e0();
    /* 00547b58: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00547b5b: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
L_00547b5f:; BB(0x00547b5f);
    /* 00547b5f: jmp 0x547e08 */ goto L_00547e08;
L_00547b64:; BB(0x00547b64);
    /* 00547b64: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547b66: push 0x31166c */ { u32 v = 0x31166cu; r_esp -= 4; W32(r_esp, v); }
    /* 00547b6b: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00547b71: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x547b76u); f_005f2a60();
    /* 00547b76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547b78: je 0x547bae */ if (fZ) goto L_00547bae;
L_00547b7a:; BB(0x00547b7a);
    /* 00547b7a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547b7c: push 0x31166c */ { u32 v = 0x31166cu; r_esp -= 4; W32(r_esp, v); }
    /* 00547b81: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00547b87: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x547b8cu); f_005f2a60();
    /* 00547b8c: mov ecx, eax */ r_ecx = r_eax;
    /* 00547b8e: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x547b93u); f_006026d0();
    /* 00547b93: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00547b96: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547b98: je 0x547bae */ if (fZ) goto L_00547bae;
L_00547b9a:; BB(0x00547b9a);
    /* 00547b9a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00547b9c: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00547ba2: call 0x5494e0 */ r_esp -= 4; W32(r_esp, 0x547ba7u); f_005494e0();
    /* 00547ba7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00547baa: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
L_00547bae:; BB(0x00547bae);
    /* 00547bae: jmp 0x547e08 */ goto L_00547e08;
L_00547bb3:; BB(0x00547bb3);
    /* 00547bb3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547bb5: push 0x31166d */ { u32 v = 0x31166du; r_esp -= 4; W32(r_esp, v); }
    /* 00547bba: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00547bc0: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x547bc5u); f_005f2a60();
    /* 00547bc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547bc7: je 0x547bfd */ if (fZ) goto L_00547bfd;
L_00547bc9:; BB(0x00547bc9);
    /* 00547bc9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547bcb: push 0x31166d */ { u32 v = 0x31166du; r_esp -= 4; W32(r_esp, v); }
    /* 00547bd0: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00547bd6: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x547bdbu); f_005f2a60();
    /* 00547bdb: mov ecx, eax */ r_ecx = r_eax;
    /* 00547bdd: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x547be2u); f_006026d0();
    /* 00547be2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00547be5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547be7: je 0x547bfd */ if (fZ) goto L_00547bfd;
L_00547be9:; BB(0x00547be9);
    /* 00547be9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00547beb: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00547bf1: call 0x5449a0 */ r_esp -= 4; W32(r_esp, 0x547bf6u); f_005449a0();
    /* 00547bf6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00547bf9: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_00547bfd:; BB(0x00547bfd);
    /* 00547bfd: jmp 0x547e08 */ goto L_00547e08;
L_00547c02:; BB(0x00547c02);
    /* 00547c02: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547c04: push 0x31166e */ { u32 v = 0x31166eu; r_esp -= 4; W32(r_esp, v); }
    /* 00547c09: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00547c0f: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x547c14u); f_005f2a60();
    /* 00547c14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547c16: je 0x547c4c */ if (fZ) goto L_00547c4c;
L_00547c18:; BB(0x00547c18);
    /* 00547c18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547c1a: push 0x31166e */ { u32 v = 0x31166eu; r_esp -= 4; W32(r_esp, v); }
    /* 00547c1f: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00547c25: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x547c2au); f_005f2a60();
    /* 00547c2a: mov ecx, eax */ r_ecx = r_eax;
    /* 00547c2c: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x547c31u); f_006026d0();
    /* 00547c31: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00547c34: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547c36: je 0x547c4c */ if (fZ) goto L_00547c4c;
L_00547c38:; BB(0x00547c38);
    /* 00547c38: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00547c3a: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00547c40: call 0x5449a0 */ r_esp -= 4; W32(r_esp, 0x547c45u); f_005449a0();
    /* 00547c45: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00547c48: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
L_00547c4c:; BB(0x00547c4c);
    /* 00547c4c: jmp 0x547e08 */ goto L_00547e08;
L_00547c51:; BB(0x00547c51);
    /* 00547c51: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547c53: push 0x31166f */ { u32 v = 0x31166fu; r_esp -= 4; W32(r_esp, v); }
    /* 00547c58: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00547c5e: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x547c63u); f_005f2a60();
    /* 00547c63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547c65: je 0x547c9b */ if (fZ) goto L_00547c9b;
L_00547c67:; BB(0x00547c67);
    /* 00547c67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547c69: push 0x31166f */ { u32 v = 0x31166fu; r_esp -= 4; W32(r_esp, v); }
    /* 00547c6e: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00547c74: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x547c79u); f_005f2a60();
    /* 00547c79: mov ecx, eax */ r_ecx = r_eax;
    /* 00547c7b: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x547c80u); f_006026d0();
    /* 00547c80: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00547c83: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547c85: je 0x547c9b */ if (fZ) goto L_00547c9b;
L_00547c87:; BB(0x00547c87);
    /* 00547c87: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00547c89: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00547c8f: call 0x5449a0 */ r_esp -= 4; W32(r_esp, 0x547c94u); f_005449a0();
    /* 00547c94: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00547c97: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
L_00547c9b:; BB(0x00547c9b);
    /* 00547c9b: jmp 0x547e08 */ goto L_00547e08;
L_00547ca0:; BB(0x00547ca0);
    /* 00547ca0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547ca2: push 0x311670 */ { u32 v = 0x311670u; r_esp -= 4; W32(r_esp, v); }
    /* 00547ca7: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00547cad: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x547cb2u); f_005f2a60();
    /* 00547cb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547cb4: je 0x547cea */ if (fZ) goto L_00547cea;
L_00547cb6:; BB(0x00547cb6);
    /* 00547cb6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547cb8: push 0x311670 */ { u32 v = 0x311670u; r_esp -= 4; W32(r_esp, v); }
    /* 00547cbd: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00547cc3: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x547cc8u); f_005f2a60();
    /* 00547cc8: mov ecx, eax */ r_ecx = r_eax;
    /* 00547cca: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x547ccfu); f_006026d0();
    /* 00547ccf: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00547cd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547cd4: je 0x547cea */ if (fZ) goto L_00547cea;
L_00547cd6:; BB(0x00547cd6);
    /* 00547cd6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00547cd8: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00547cde: call 0x5449a0 */ r_esp -= 4; W32(r_esp, 0x547ce3u); f_005449a0();
    /* 00547ce3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00547ce6: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_00547cea:; BB(0x00547cea);
    /* 00547cea: jmp 0x547e08 */ goto L_00547e08;
L_00547cef:; BB(0x00547cef);
    /* 00547cef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547cf1: push 0x311671 */ { u32 v = 0x311671u; r_esp -= 4; W32(r_esp, v); }
    /* 00547cf6: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00547cfc: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x547d01u); f_005f2a60();
    /* 00547d01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547d03: je 0x547d39 */ if (fZ) goto L_00547d39;
L_00547d05:; BB(0x00547d05);
    /* 00547d05: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547d07: push 0x311671 */ { u32 v = 0x311671u; r_esp -= 4; W32(r_esp, v); }
    /* 00547d0c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00547d12: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x547d17u); f_005f2a60();
    /* 00547d17: mov ecx, eax */ r_ecx = r_eax;
    /* 00547d19: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x547d1eu); f_006026d0();
    /* 00547d1e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00547d21: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547d23: je 0x547d39 */ if (fZ) goto L_00547d39;
L_00547d25:; BB(0x00547d25);
    /* 00547d25: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00547d27: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00547d2d: call 0x5449a0 */ r_esp -= 4; W32(r_esp, 0x547d32u); f_005449a0();
    /* 00547d32: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00547d35: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
L_00547d39:; BB(0x00547d39);
    /* 00547d39: jmp 0x547e08 */ goto L_00547e08;
L_00547d3e:; BB(0x00547d3e);
    /* 00547d3e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547d40: push 0x311672 */ { u32 v = 0x311672u; r_esp -= 4; W32(r_esp, v); }
    /* 00547d45: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00547d4b: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x547d50u); f_005f2a60();
    /* 00547d50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547d52: je 0x547d88 */ if (fZ) goto L_00547d88;
L_00547d54:; BB(0x00547d54);
    /* 00547d54: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547d56: push 0x311672 */ { u32 v = 0x311672u; r_esp -= 4; W32(r_esp, v); }
    /* 00547d5b: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00547d61: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x547d66u); f_005f2a60();
    /* 00547d66: mov ecx, eax */ r_ecx = r_eax;
    /* 00547d68: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x547d6du); f_006026d0();
    /* 00547d6d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00547d70: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547d72: je 0x547d88 */ if (fZ) goto L_00547d88;
L_00547d74:; BB(0x00547d74);
    /* 00547d74: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547d76: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00547d7c: call 0x5449a0 */ r_esp -= 4; W32(r_esp, 0x547d81u); f_005449a0();
    /* 00547d81: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00547d84: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
L_00547d88:; BB(0x00547d88);
    /* 00547d88: jmp 0x547e08 */ goto L_00547e08;
L_00547d8a:; BB(0x00547d8a);
    /* 00547d8a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547d8c: push 0x311673 */ { u32 v = 0x311673u; r_esp -= 4; W32(r_esp, v); }
    /* 00547d91: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00547d97: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x547d9cu); f_005f2a60();
    /* 00547d9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547d9e: je 0x547dd4 */ if (fZ) goto L_00547dd4;
L_00547da0:; BB(0x00547da0);
    /* 00547da0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547da2: push 0x311673 */ { u32 v = 0x311673u; r_esp -= 4; W32(r_esp, v); }
    /* 00547da7: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00547dad: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x547db2u); f_005f2a60();
    /* 00547db2: mov ecx, eax */ r_ecx = r_eax;
    /* 00547db4: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x547db9u); f_006026d0();
    /* 00547db9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00547dbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547dbe: je 0x547dd4 */ if (fZ) goto L_00547dd4;
L_00547dc0:; BB(0x00547dc0);
    /* 00547dc0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00547dc2: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00547dc8: call 0x5449a0 */ r_esp -= 4; W32(r_esp, 0x547dcdu); f_005449a0();
    /* 00547dcd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00547dd0: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_00547dd4:; BB(0x00547dd4);
    /* 00547dd4: jmp 0x547e08 */ goto L_00547e08;
L_00547dd6:; BB(0x00547dd6);
    /* 00547dd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547dd8: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 00547ddd: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00547de3: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x547de8u); f_005f2a60();
    /* 00547de8: mov ecx, eax */ r_ecx = r_eax;
    /* 00547dea: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x547defu); f_006026d0();
    /* 00547def: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00547df2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547df4: je 0x547e08 */ if (fZ) goto L_00547e08;
L_00547df6:; BB(0x00547df6);
    /* 00547df6: mov ecx, dword ptr [0x793400] */ r_ecx = R32((u32)(0x793400u));
    /* 00547dfc: call 0x5db240 */ r_esp -= 4; W32(r_esp, 0x547e01u); f_005db240();
    /* 00547e01: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00547e04: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
L_00547e08:; BB(0x00547e08);
    /* 00547e08: mov esp, ebp */ r_esp = r_ebp;
    /* 00547e0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00547e0b: ret 4 */ FN_RET(0x00547a50); r_esp += 8; return;
}

void f_00547eb0(void) /* VideoBlackjackRoom::vfunc32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00547eb0);
    /* 00547eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00547eb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00547eb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00547eb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00547eb7: cmp dword ptr [0x793404], 0 */ {  u32 a = R32((u32)(0x793404u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547ebe: jne 0x547ec4 */ if (!fZ) goto L_00547ec4;
L_00547ec0:; BB(0x00547ec0);
    /* 00547ec0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00547ec2: jmp 0x547ecf */ goto L_00547ecf;
L_00547ec4:; BB(0x00547ec4);
    /* 00547ec4: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00547eca: call 0x548a80 */ r_esp -= 4; W32(r_esp, 0x547ecfu); f_00548a80();
L_00547ecf:; BB(0x00547ecf);
    /* 00547ecf: mov esp, ebp */ r_esp = r_ebp;
    /* 00547ed1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00547ed2: ret  */ FN_RET(0x00547eb0); r_esp += 4; return;
}

void f_00547ee0(void) /* VideoBlackjackRoom::vfunc158 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00547ee0);
    /* 00547ee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00547ee1: mov ebp, esp */ r_ebp = r_esp;
    /* 00547ee3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00547ee4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00547ee7: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00547eed: call 0x544d20 */ r_esp -= 4; W32(r_esp, 0x547ef2u); f_00544d20();
    /* 00547ef2: mov esp, ebp */ r_esp = r_ebp;
    /* 00547ef4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00547ef5: ret  */ FN_RET(0x00547ee0); r_esp += 4; return;
}

void f_00547f00(void) /* VideoBlackjackRoom::vfunc164 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00547f00);
    /* 00547f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00547f01: mov ebp, esp */ r_ebp = r_esp;
    /* 00547f03: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00547f06: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00547f09: mov eax, dword ptr [0x793404] */ r_eax = R32((u32)(0x793404u));
    /* 00547f0e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00547f11: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00547f14: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00547f17: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00547f18: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 00547f1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00547f1c: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00547f22: call 0x5d0c30 */ r_esp -= 4; W32(r_esp, 0x547f27u); f_005d0c30();
    /* 00547f27: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00547f2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00547f2b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00547f2d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00547f2e: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00547f31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00547f32: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00547f35: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00547f36: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00547f3c: call 0x5d0cd0 */ r_esp -= 4; W32(r_esp, 0x547f41u); f_005d0cd0();
    /* 00547f41: mov ecx, eax */ r_ecx = r_eax;
    /* 00547f43: call 0x64c630 */ r_esp -= 4; W32(r_esp, 0x547f48u); f_0064c630();
    /* 00547f48: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00547f4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00547f4c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00547f4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00547f50: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00547f53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00547f54: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x547f59u); f_005dcb00();
    /* 00547f59: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00547f5c: mov ecx, eax */ r_ecx = r_eax;
    /* 00547f5e: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x547f63u); f_005d5fb0();
    /* 00547f63: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00547f66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00547f67: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00547f6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00547f6b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00547f6e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00547f6f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x547f74u); f_005dcb00();
    /* 00547f74: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00547f77: mov ecx, eax */ r_ecx = r_eax;
    /* 00547f79: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x547f7eu); f_005d5cf0();
    /* 00547f7e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547f80: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00547f86: call 0x5d0a20 */ r_esp -= 4; W32(r_esp, 0x547f8bu); f_005d0a20();
    /* 00547f8b: mov edx, dword ptr [0x793404] */ r_edx = R32((u32)(0x793404u));
    /* 00547f91: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00547f94: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00547f97: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 00547f9e: mov esp, ebp */ r_esp = r_ebp;
    /* 00547fa0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00547fa1: ret 4 */ FN_RET(0x00547f00); r_esp += 8; return;
}

void f_00547fb0(void) /* VideoBlackjackRoom::vfunc167 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00547fb0);
    /* 00547fb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00547fb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00547fb3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00547fb6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00547fb7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00547fb8: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00547fbb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00547fbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00547fbf: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x547fc4u); f_005dcb00();
    /* 00547fc4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00547fc7: mov ecx, dword ptr [eax + 0x4c8] */ r_ecx = R32((u32)(r_eax+0x4c8u));
    /* 00547fcd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00547fce: mov edx, dword ptr [eax + 0x4c4] */ r_edx = R32((u32)(r_eax+0x4c4u));
    /* 00547fd4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00547fd5: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00547fd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00547fd9: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00547fdf: call 0x548940 */ r_esp -= 4; W32(r_esp, 0x547fe4u); f_00548940();
    /* 00547fe4: mov ecx, eax */ r_ecx = r_eax;
    /* 00547fe6: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x547febu); f_0064c5c0();
    /* 00547feb: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00547fed: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 00547ff0: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00547ff6: call 0x548940 */ r_esp -= 4; W32(r_esp, 0x547ffbu); f_00548940();
    /* 00547ffb: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00547ffd: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 00548000: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00548003: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548004: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x548009u); f_005dcb00();
    /* 00548009: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054800c: mov ecx, eax */ r_ecx = r_eax;
    /* 0054800e: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x548013u); f_0063b0a0();
    /* 00548013: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00548014: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00548015: mov esp, ebp */ r_esp = r_ebp;
    /* 00548017: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548018: ret 4 */ FN_RET(0x00547fb0); r_esp += 8; return;
}

void f_00548020(void) /* VideoBlackjackRoom::vfunc185 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548020);
    /* 00548020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548021: mov ebp, esp */ r_ebp = r_esp;
    /* 00548023: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548024: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00548027: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 0054802d: call 0x545c90 */ r_esp -= 4; W32(r_esp, 0x548032u); f_00545c90();
    /* 00548032: mov esp, ebp */ r_esp = r_ebp;
    /* 00548034: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548035: ret 4 */ FN_RET(0x00548020); r_esp += 8; return;
}

void f_00548040(void) /* VideoBlackjackRoom::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548040);
    /* 00548040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548041: mov ebp, esp */ r_ebp = r_esp;
    /* 00548043: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00548044: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00548047: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054804a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054804b: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00548051: call 0x5494e0 */ r_esp -= 4; W32(r_esp, 0x548056u); f_005494e0();
    /* 00548056: mov esp, ebp */ r_esp = r_ebp;
    /* 00548058: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548059: ret 4 */ FN_RET(0x00548040); r_esp += 8; return;
}

void f_00548060(void) /* VideoBlackjackRoom::vfunc175 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00548060);
    /* 00548060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548061: mov ebp, esp */ r_ebp = r_esp;
    /* 00548063: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00548066: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00548069: mov eax, dword ptr [0x793404] */ r_eax = R32((u32)(0x793404u));
    /* 0054806e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00548071: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00548074: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00548077: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00548078: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0054807b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054807c: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00548082: call 0x5d0db0 */ r_esp -= 4; W32(r_esp, 0x548087u); f_005d0db0();
    /* 00548087: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 0054808d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00548090: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00548093: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00548096: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00548099: jge 0x5480a6 */ if ((fS==fO)) goto L_005480a6;
L_0054809b:; BB(0x0054809b);
    /* 0054809b: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 005480a1: call 0x544bd0 */ r_esp -= 4; W32(r_esp, 0x5480a6u); f_00544bd0();
L_005480a6:; BB(0x005480a6);
    /* 005480a6: mov esp, ebp */ r_esp = r_ebp;
    /* 005480a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005480a9: ret 4 */ FN_RET(0x00548060); r_esp += 8; return;
}

